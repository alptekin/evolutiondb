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
     FVECTOR_NORMALIZE = 635
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
#line 927 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 940 "parser/evoparser.tab.c"

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
#define YYLAST   13971

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  398
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  948
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2347

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   635

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     393,   394,    28,    26,   395,    27,   392,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   391,
       2,   397,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   396,    32,     2,     2,     2,     2,     2,
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
     385,   386,   387,   388,   389,   390
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
     293,   298,   303,   307,   311,   312,   314,   315,   322,   323,
     331,   332,   339,   340,   348,   349,   355,   360,   365,   370,
     375,   380,   385,   390,   395,   402,   403,   413,   414,   424,
     425,   435,   436,   447,   448,   459,   460,   471,   472,   483,
     484,   495,   496,   507,   508,   519,   520,   533,   534,   549,
     550,   565,   566,   577,   578,   591,   592,   607,   608,   623,
     624,   635,   636,   646,   647,   657,   666,   673,   680,   689,
     694,   702,   709,   714,   719,   724,   731,   740,   747,   754,
     761,   770,   779,   784,   791,   798,   805,   810,   815,   820,
     827,   832,   839,   844,   851,   855,   860,   865,   870,   874,
     878,   885,   890,   895,   900,   905,   910,   915,   922,   927,
     932,   937,   942,   947,   952,   957,   962,   971,   980,   989,
     996,  1003,  1012,  1021,  1028,  1039,  1044,  1051,  1060,  1065,
    1070,  1075,  1082,  1091,  1095,  1102,  1109,  1116,  1123,  1132,
    1136,  1145,  1156,  1160,  1164,  1168,  1172,  1176,  1178,  1180,
    1185,  1192,  1194,  1196,  1198,  1205,  1212,  1216,  1220,  1224,
    1228,  1232,  1236,  1240,  1244,  1248,  1253,  1260,  1264,  1270,
    1275,  1281,  1285,  1290,  1294,  1299,  1301,  1303,  1305,  1307,
    1309,  1313,  1326,  1339,  1340,  1343,  1344,  1349,  1352,  1357,
    1358,  1360,  1362,  1363,  1366,  1367,  1370,  1371,  1375,  1377,
    1381,  1382,  1386,  1389,  1394,  1395,  1399,  1401,  1405,  1408,
    1413,  1416,  1417,  1420,  1425,  1430,  1431,  1434,  1437,  1442,
    1447,  1448,  1451,  1453,  1457,  1458,  1461,  1464,  1467,  1470,
    1473,  1476,  1479,  1482,  1484,  1488,  1490,  1493,  1496,  1498,
    1499,  1501,  1505,  1507,  1509,  1513,  1518,  1524,  1528,  1532,
    1537,  1544,  1554,  1558,  1559,  1565,  1567,  1568,  1574,  1578,
    1584,  1591,  1597,  1598,  1600,  1602,  1603,  1605,  1607,  1609,
    1612,  1615,  1616,  1617,  1619,  1622,  1627,  1634,  1641,  1648,
    1649,  1652,  1653,  1655,  1659,  1663,  1665,  1674,  1677,  1680,
    1683,  1684,  1691,  1694,  1699,  1700,  1703,  1711,  1713,  1718,
    1725,  1726,  1728,  1730,  1732,  1741,  1751,  1762,  1772,  1784,
    1795,  1808,  1820,  1834,  1844,  1856,  1867,  1880,  1892,  1905,
    1907,  1911,  1913,  1918,  1923,  1928,  1935,  1937,  1941,  1944,
    1948,  1954,  1956,  1960,  1961,  1964,  1967,  1971,  1975,  1977,
    1979,  1981,  1984,  1988,  1991,  1994,  1997,  2002,  2004,  2008,
    2010,  2015,  2022,  2023,  2028,  2033,  2036,  2037,  2042,  2050,
    2055,  2057,  2061,  2063,  2065,  2067,  2078,  2079,  2082,  2085,
    2086,  2089,  2092,  2095,  2098,  2101,  2102,  2105,  2107,  2111,
    2112,  2117,  2118,  2124,  2130,  2141,  2152,  2170,  2183,  2203,
    2215,  2222,  2231,  2238,  2245,  2252,  2262,  2269,  2275,  2284,
    2292,  2302,  2311,  2322,  2332,  2340,  2348,  2349,  2351,  2354,
    2356,  2367,  2374,  2375,  2376,  2382,  2383,  2388,  2389,  2393,
    2398,  2401,  2402,  2408,  2412,  2418,  2419,  2422,  2425,  2428,
    2431,  2433,  2434,  2435,  2439,  2441,  2445,  2449,  2450,  2457,
    2459,  2461,  2465,  2469,  2477,  2481,  2485,  2491,  2497,  2499,
    2508,  2516,  2524,  2526,  2527,  2535,  2536,  2540,  2542,  2546,
    2548,  2550,  2552,  2554,  2556,  2557,  2559,  2564,  2568,  2570,
    2574,  2577,  2580,  2583,  2585,  2588,  2591,  2594,  2596,  2598,
    2608,  2609,  2612,  2615,  2619,  2625,  2631,  2639,  2645,  2647,
    2652,  2657,  2661,  2667,  2671,  2677,  2678,  2681,  2683,  2689,
    2697,  2705,  2715,  2727,  2729,  2732,  2736,  2738,  2749,  2750,
    2755,  2767,  2786,  2787,  2792,  2796,  2802,  2808,  2818,  2829,
    2837,  2839,  2843,  2853,  2863,  2873,  2880,  2892,  2901,  2902,
    2904,  2907,  2909,  2913,  2919,  2927,  2932,  2937,  2943,  2949,
    2954,  2961,  2973,  2987,  3001,  3017,  3022,  3029,  3031,  3035,
    3037,  3041,  3043,  3047,  3048,  3053,  3059,  3064,  3070,  3075,
    3081,  3086,  3092,  3097,  3102,  3106,  3110,  3114,  3117,  3121,
    3126,  3131,  3133,  3137,  3138,  3143,  3144,  3148,  3151,  3155,
    3159,  3163,  3167,  3173,  3179,  3185,  3189,  3195,  3198,  3206,
    3212,  3220,  3226,  3229,  3233,  3236,  3240,  3243,  3247,  3253,
    3258,  3264,  3272,  3281,  3290,  3298,  3305,  3312,  3318,  3319,
    3323,  3329,  3330,  3332,  3333,  3336,  3339,  3340,  3345,  3349,
    3352,  3356,  3360,  3364,  3368,  3372,  3376,  3380,  3384,  3388,
    3392,  3394,  3396,  3398,  3400,  3402,  3406,  3412,  3415,  3420,
    3422,  3424,  3426,  3428,  3432,  3436,  3440,  3444,  3450,  3456,
    3458,  3460,  3462,  3467,  3471,  3473,  3477,  3481,  3482,  3484,
    3486,  3488,  3492,  3496,  3499,  3501,  3505,  3509,  3513,  3515,
    3526,  3536,  3549,  3561,  3574,  3586,  3601,  3615,  3616,  3618,
    3620,  3624,  3627,  3631,  3635,  3639,  3641,  3643,  3645,  3647,
    3649,  3651,  3653,  3655,  3657,  3659,  3660,  3663,  3668,  3674,
    3680,  3686,  3692,  3698,  3700,  3702,  3704,  3706,  3708,  3710,
    3712,  3714,  3716,  3718,  3720,  3722,  3724,  3726,  3728,  3730,
    3732,  3734,  3736,  3738,  3740,  3742,  3744,  3746,  3748,  3750,
    3752,  3754,  3756,  3758,  3760,  3762,  3764,  3766,  3768,  3770,
    3772,  3774,  3776,  3778,  3780,  3782,  3784,  3786,  3788,  3790,
    3792,  3794,  3796,  3798,  3800,  3802,  3804,  3806,  3808,  3810,
    3812,  3814,  3816,  3818,  3820,  3822,  3824,  3826,  3828,  3830,
    3832,  3834,  3836,  3838,  3840,  3842,  3844,  3846,  3848,  3850,
    3852,  3854,  3856,  3858,  3860,  3862,  3864,  3866,  3868,  3870,
    3872,  3874,  3876,  3878,  3880,  3882,  3884,  3886,  3888,  3890,
    3892,  3894,  3896,  3898,  3900,  3902,  3904,  3906,  3908,  3910,
    3912,  3914,  3916,  3918,  3920,  3922,  3924,  3926,  3928,  3930,
    3932,  3934,  3936,  3938,  3940,  3942,  3944,  3946,  3950,  3956,
    3960,  3966,  3968,  3973,  3979,  3981,  3985,  3987,  3989,  3991,
    3993,  3995,  3997,  3999,  4001,  4015,  4017,  4019,  4021,  4023,
    4025,  4027,  4031,  4037,  4042,  4047,  4049,  4055,  4056,  4059,
    4063,  4066,  4070,  4073,  4076,  4079,  4081,  4084,  4086,  4090,
    4096,  4101,  4106,  4113,  4120,  4121,  4124,  4127,  4129
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     399,     0,    -1,   438,   391,    -1,   438,   391,   399,    -1,
       3,    -1,     3,   392,     3,    -1,    89,   392,     3,    -1,
     183,   393,     3,   394,    91,   393,     4,   394,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   400,    26,   400,    -1,   400,    27,   400,    -1,   400,
      28,   400,    -1,   400,    29,   400,    -1,   400,    30,   400,
      -1,   400,    31,   400,    -1,    27,   400,    -1,   393,   400,
     394,    -1,   400,    12,   400,    -1,   400,    10,   400,    -1,
     400,    11,   400,    -1,   400,    23,   400,    -1,   400,    24,
     400,    -1,   400,    32,   400,    -1,   400,    25,   400,    -1,
     400,    34,   400,    -1,   400,    33,   400,    -1,    18,   400,
      -1,    17,   400,    -1,   400,    20,   400,    -1,    -1,   400,
      20,   393,   401,   439,   394,    -1,    -1,   400,    20,    47,
     393,   402,   439,   394,    -1,    -1,   400,    20,   232,   393,
     403,   439,   394,    -1,    -1,   400,    20,    40,   393,   404,
     439,   394,    -1,   400,    20,    47,   393,   408,   394,    -1,
     400,    20,   232,   393,   408,   394,    -1,   400,    15,   193,
      -1,   400,    15,    18,   193,    -1,   400,    15,     6,    -1,
     400,    15,    18,     6,    -1,     8,     9,   400,    -1,   400,
      19,   400,    50,   400,    -1,   400,    18,    19,   400,    50,
     400,    -1,   400,    -1,   400,   395,   405,    -1,   400,    -1,
     400,   395,   406,    -1,    -1,   263,    36,   407,   406,   396,
      -1,   263,    36,   396,    -1,   400,    36,   400,   396,    -1,
     400,    -1,   380,   393,   400,   394,    -1,   380,   393,   400,
     395,   400,   394,    -1,   381,   393,   400,   394,    -1,   382,
     393,   400,   395,   400,   394,    -1,   383,   393,   394,    -1,
     384,   393,   400,   395,   400,   394,    -1,   385,   393,   400,
     395,   400,   394,    -1,   386,   393,   400,   395,   400,   394,
      -1,   387,   393,   400,   395,   400,   394,    -1,   388,   393,
     400,   394,    -1,   389,   393,   400,   394,    -1,   390,   393,
     400,   394,    -1,   400,    22,   400,    -1,   400,    21,   400,
      -1,    -1,   405,    -1,    -1,   400,    16,   393,   410,   405,
     394,    -1,    -1,   400,    18,    16,   393,   411,   405,   394,
      -1,    -1,   400,    16,   393,   412,   439,   394,    -1,    -1,
     400,    18,    16,   393,   413,   439,   394,    -1,    -1,   281,
     393,   414,   439,   394,    -1,     3,   393,   409,   394,    -1,
     322,   393,    28,   394,    -1,   322,   393,   400,   394,    -1,
     323,   393,   400,   394,    -1,   324,   393,   400,   394,    -1,
     325,   393,   400,   394,    -1,   326,   393,   400,   394,    -1,
     320,   393,   400,   394,    -1,   320,   393,   400,   321,     4,
     394,    -1,    -1,   342,   393,   394,   350,   393,   415,   446,
     448,   394,    -1,    -1,   343,   393,   394,   350,   393,   416,
     446,   448,   394,    -1,    -1,   344,   393,   394,   350,   393,
     417,   446,   448,   394,    -1,    -1,   323,   393,   400,   394,
     350,   393,   418,   446,   448,   394,    -1,    -1,   322,   393,
      28,   394,   350,   393,   419,   446,   448,   394,    -1,    -1,
     322,   393,   400,   394,   350,   393,   420,   446,   448,   394,
      -1,    -1,   324,   393,   400,   394,   350,   393,   421,   446,
     448,   394,    -1,    -1,   325,   393,   400,   394,   350,   393,
     422,   446,   448,   394,    -1,    -1,   326,   393,   400,   394,
     350,   393,   423,   446,   448,   394,    -1,    -1,   345,   393,
     400,   394,   350,   393,   424,   446,   448,   394,    -1,    -1,
     345,   393,   400,   395,     5,   394,   350,   393,   425,   446,
     448,   394,    -1,    -1,   345,   393,   400,   395,     5,   395,
       4,   394,   350,   393,   426,   446,   448,   394,    -1,    -1,
     345,   393,   400,   395,     5,   395,     5,   394,   350,   393,
     427,   446,   448,   394,    -1,    -1,   346,   393,   400,   394,
     350,   393,   428,   446,   448,   394,    -1,    -1,   346,   393,
     400,   395,     5,   394,   350,   393,   429,   446,   448,   394,
      -1,    -1,   346,   393,   400,   395,     5,   395,     4,   394,
     350,   393,   430,   446,   448,   394,    -1,    -1,   346,   393,
     400,   395,     5,   395,     5,   394,   350,   393,   431,   446,
     448,   394,    -1,    -1,   347,   393,     5,   394,   350,   393,
     432,   446,   448,   394,    -1,    -1,   348,   393,   394,   350,
     393,   433,   446,   448,   394,    -1,    -1,   349,   393,   394,
     350,   393,   434,   446,   448,   394,    -1,   282,   393,   400,
     395,   400,   395,   400,   394,    -1,   282,   393,   400,   395,
     400,   394,    -1,   282,   393,   400,   136,   400,   394,    -1,
     282,   393,   400,   136,   400,   140,   400,   394,    -1,   283,
     393,   400,   394,    -1,   283,   393,   435,   400,   136,   400,
     394,    -1,   283,   393,   435,   136,   400,   394,    -1,   327,
     393,   400,   394,    -1,   328,   393,   400,   394,    -1,   329,
     393,   400,   394,    -1,   330,   393,   400,   395,   400,   394,
      -1,   331,   393,   400,   395,   400,   395,   400,   394,    -1,
     332,   393,   400,   395,   400,   394,    -1,   294,   393,   400,
     395,   400,   394,    -1,   295,   393,   400,   395,   400,   394,
      -1,   296,   393,   400,   395,   400,   395,   400,   394,    -1,
     297,   393,   400,   395,   400,   395,   400,   394,    -1,   298,
     393,   400,   394,    -1,   299,   393,   400,   395,   400,   394,
      -1,   300,   393,   400,   395,   400,   394,    -1,   301,   393,
     400,   395,   400,   394,    -1,   302,   393,   400,   394,    -1,
     303,   393,   400,   394,    -1,   304,   393,   400,   394,    -1,
     305,   393,   400,   395,   400,   394,    -1,   305,   393,   400,
     394,    -1,   306,   393,   400,   395,   400,   394,    -1,   307,
     393,   400,   394,    -1,   308,   393,   400,   395,   400,   394,
      -1,   309,   393,   394,    -1,   310,   393,   400,   394,    -1,
     311,   393,   400,   394,    -1,   312,   393,   400,   394,    -1,
     313,   393,   394,    -1,   293,   393,   394,    -1,   286,   393,
     400,   395,   400,   394,    -1,   287,   393,   400,   394,    -1,
     288,   393,   400,   394,    -1,   289,   393,   400,   394,    -1,
     290,   393,   400,   394,    -1,   291,   393,   400,   394,    -1,
     292,   393,   400,   394,    -1,   352,   393,   400,   395,   400,
     394,    -1,   353,   393,   400,   394,    -1,   354,   393,   400,
     394,    -1,   355,   393,   400,   394,    -1,   356,   393,   400,
     394,    -1,   357,   393,   400,   394,    -1,   358,   393,   400,
     394,    -1,   359,   393,   400,   394,    -1,   360,   393,   400,
     394,    -1,   361,   393,   400,   395,   400,   395,   400,   394,
      -1,   362,   393,   400,   395,   400,   395,   400,   394,    -1,
     363,   393,   400,   395,   400,   395,   400,   394,    -1,   364,
     393,   400,   395,   400,   394,    -1,   365,   393,   400,   395,
     400,   394,    -1,   366,   393,   400,   395,   400,   395,   400,
     394,    -1,   367,   393,   400,   395,   400,   395,   400,   394,
      -1,   368,   393,   400,   395,   400,   394,    -1,   368,   393,
     400,   395,   400,   395,   400,   395,   400,   394,    -1,   369,
     393,   400,   394,    -1,   369,   393,   400,   395,   400,   394,
      -1,   369,   393,   400,   395,   400,   395,   400,   394,    -1,
     370,   393,   400,   394,    -1,   372,   393,   400,   394,    -1,
     373,   393,   400,   394,    -1,   374,   393,   400,   395,   400,
     394,    -1,   374,   393,   400,   395,   400,   395,   400,   394,
      -1,   375,   393,   394,    -1,   314,   393,   400,    51,   562,
     394,    -1,   315,   393,   400,   395,   562,   394,    -1,   316,
     393,   400,   395,   400,   394,    -1,   317,   393,   400,   395,
     400,   394,    -1,   318,   393,   400,   395,   400,   395,   400,
     394,    -1,   400,    15,   319,    -1,   330,   393,   400,   395,
     400,   395,   400,   394,    -1,   330,   393,   400,   395,   400,
     395,   400,   395,   400,   394,    -1,   333,   393,   394,    -1,
     334,   393,   394,    -1,   335,   393,   394,    -1,   336,   393,
     394,    -1,   337,   393,   394,    -1,   338,    -1,   339,    -1,
     340,   393,   400,   394,    -1,   341,   393,   400,   395,   400,
     394,    -1,   178,    -1,   254,    -1,    65,    -1,   284,   393,
     400,   395,   436,   394,    -1,   285,   393,   400,   395,   436,
     394,    -1,   161,   400,   278,    -1,   161,   400,   104,    -1,
     161,   400,   105,    -1,   161,   400,   109,    -1,   161,   400,
     111,    -1,   161,   400,   279,    -1,   161,   400,   145,    -1,
     161,   400,   144,    -1,   161,   400,   147,    -1,    77,   400,
     437,   124,    -1,    77,   400,   437,   125,   400,   124,    -1,
      77,   437,   124,    -1,    77,   437,   125,   400,   124,    -1,
     275,   400,   253,   400,    -1,   437,   275,   400,   253,   400,
      -1,   400,    14,   400,    -1,   400,    18,    14,   400,    -1,
     400,    13,   400,    -1,   400,    18,    13,   400,    -1,    72,
      -1,    80,    -1,    81,    -1,   225,    -1,   439,    -1,   241,
     457,   458,    -1,   241,   457,   458,   136,   461,   440,   441,
     445,   450,   453,   454,   455,    -1,   241,   457,   458,   159,
       3,   136,   461,   440,   441,   445,   450,   453,    -1,    -1,
     274,   400,    -1,    -1,   141,    63,   442,   444,    -1,   400,
     443,    -1,   442,   395,   400,   443,    -1,    -1,    49,    -1,
     112,    -1,    -1,   277,   214,    -1,    -1,   148,   400,    -1,
      -1,   351,    63,   447,    -1,     3,    -1,   447,   395,     3,
      -1,    -1,   198,    63,   449,    -1,     3,   443,    -1,   449,
     395,     3,   443,    -1,    -1,   198,    63,   451,    -1,   452,
      -1,   451,   395,   452,    -1,     3,   443,    -1,     3,   392,
       3,   443,    -1,     5,   443,    -1,    -1,   179,   400,    -1,
     179,   400,   395,   400,    -1,   179,   400,   181,   400,    -1,
      -1,   140,   258,    -1,   140,   230,    -1,   140,   258,   231,
     180,    -1,   140,   230,   231,   180,    -1,    -1,   159,   456,
      -1,     3,    -1,   456,   395,     3,    -1,    -1,   457,    40,
      -1,   457,   106,    -1,   457,   110,    -1,   457,   146,    -1,
     457,   238,    -1,   457,   226,    -1,   457,   234,    -1,   457,
     233,    -1,   459,    -1,   458,   395,   459,    -1,    28,    -1,
     400,   460,    -1,    51,     3,    -1,     3,    -1,    -1,   462,
      -1,   461,   395,   462,    -1,   463,    -1,   467,    -1,     3,
     460,   474,    -1,   173,     3,   460,   474,    -1,     3,   392,
       3,   460,   474,    -1,   477,   466,     3,    -1,   464,   466,
       3,    -1,   381,   393,   400,   394,    -1,   381,   393,   400,
     394,   466,     3,    -1,   381,   393,   400,   394,   466,     3,
     393,     3,   394,    -1,   393,   461,   394,    -1,    -1,   167,
     393,   465,   439,   394,    -1,    51,    -1,    -1,   462,   468,
     163,   463,   472,    -1,   462,   238,   463,    -1,   462,   238,
     463,   197,   400,    -1,   462,   470,   469,   163,   463,   473,
      -1,   462,   190,   471,   163,   463,    -1,    -1,   153,    -1,
      76,    -1,    -1,   196,    -1,   177,    -1,   215,    -1,   177,
     469,    -1,   215,   469,    -1,    -1,    -1,   473,    -1,   197,
     400,    -1,   266,   393,   456,   394,    -1,   267,   164,   475,
     393,   476,   394,    -1,   154,   164,   475,   393,   476,   394,
      -1,   133,   164,   475,   393,   476,   394,    -1,    -1,   140,
     163,    -1,    -1,     3,    -1,   476,   395,     3,    -1,   393,
     439,   394,    -1,   478,    -1,   107,   479,   136,     3,   440,
     450,   453,   588,    -1,   479,   176,    -1,   479,   203,    -1,
     479,   154,    -1,    -1,   107,   479,   480,   136,   461,   440,
      -1,     3,   481,    -1,   480,   395,     3,   481,    -1,    -1,
     392,    28,    -1,   107,   479,   136,   480,   266,   461,   440,
      -1,   482,    -1,   108,   252,     3,   483,    -1,   108,   252,
     156,   281,     3,   483,    -1,    -1,    74,    -1,   210,    -1,
     484,    -1,    73,   155,     3,   197,     3,   393,   485,   394,
      -1,    73,   138,   155,     3,   197,     3,   393,   485,   394,
      -1,    73,   155,   156,   281,     3,   197,     3,   393,   485,
     394,    -1,    73,   261,   155,     3,   197,     3,   393,   485,
     394,    -1,    73,   261,   155,   156,   281,     3,   197,     3,
     393,   485,   394,    -1,    73,   155,     3,   197,     3,   266,
     268,   393,   485,   394,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   268,   393,   485,   394,    -1,    73,   261,
     155,     3,   197,     3,   266,   268,   393,   485,   394,    -1,
      73,   261,   155,   156,   281,     3,   197,     3,   266,   268,
     393,   485,   394,    -1,    73,   155,    85,     3,   197,     3,
     393,   485,   394,    -1,    73,   155,    85,   156,   281,     3,
     197,     3,   393,   485,   394,    -1,    73,   261,   155,    85,
       3,   197,     3,   393,   485,   394,    -1,    73,   261,   155,
      85,   156,   281,     3,   197,     3,   393,   485,   394,    -1,
      73,   155,    85,     3,   197,     3,   266,   268,   393,   485,
     394,    -1,    73,   261,   155,    85,     3,   197,     3,   266,
     268,   393,   485,   394,    -1,     3,    -1,   485,   395,     3,
      -1,   486,    -1,   327,   393,     3,   394,    -1,   328,   393,
       3,   394,    -1,   329,   393,     3,   394,    -1,   330,   393,
       3,   395,     3,   394,    -1,   487,    -1,   108,   155,     3,
      -1,   488,   490,    -1,   255,   252,     3,    -1,   255,   252,
       3,   395,   489,    -1,     3,    -1,   489,   395,     3,    -1,
      -1,   490,    74,    -1,   490,   210,    -1,   490,    55,    53,
      -1,   490,    54,    53,    -1,   491,    -1,   492,    -1,   493,
      -1,   168,     3,    -1,   168,     3,   171,    -1,   170,     3,
      -1,   170,    28,    -1,   169,     3,    -1,   169,     3,   395,
       4,    -1,   494,    -1,   206,   252,     3,    -1,   495,    -1,
     497,     3,   496,   498,    -1,   497,     3,   392,     3,   496,
     498,    -1,    -1,   277,    44,     5,    45,    -1,   277,    44,
       5,    46,    -1,    41,   252,    -1,    -1,   258,    42,   197,
     499,    -1,   258,    42,   197,   499,   277,     5,    43,    -1,
     108,    42,   197,   499,    -1,     3,    -1,   499,   395,     3,
      -1,   508,    -1,   500,    -1,   507,    -1,    73,   221,     3,
     197,     3,   501,   502,   503,   505,   506,    -1,    -1,    51,
     223,    -1,    51,   224,    -1,    -1,   140,    40,    -1,   140,
     241,    -1,   140,   157,    -1,   140,   258,    -1,   140,   107,
      -1,    -1,   245,   504,    -1,     3,    -1,   504,   395,     3,
      -1,    -1,   266,   393,   400,   394,    -1,    -1,   277,    78,
     393,   400,   394,    -1,   108,   221,     3,   197,     3,    -1,
      37,   252,     3,    38,    71,     3,    78,   393,   400,   394,
      -1,    37,   252,     3,    38,    71,     3,   261,   393,   555,
     394,    -1,    37,   252,     3,    38,    71,     3,   134,   164,
     393,   552,   394,   207,     3,   393,   553,   394,   554,    -1,
      37,   252,     3,    38,    71,     3,    78,   393,   400,   394,
      18,   269,    -1,    37,   252,     3,    38,    71,     3,   134,
     164,   393,   552,   394,   207,     3,   393,   553,   394,   554,
      18,   269,    -1,    37,   252,     3,    38,    71,     3,   201,
     164,   393,   551,   394,    -1,    37,   252,     3,   108,    71,
       3,    -1,    37,   252,     3,   208,    71,     3,   245,     3,
      -1,    37,   252,     3,   120,    71,     3,    -1,    37,   252,
       3,   100,    71,     3,    -1,    37,   252,     3,   269,    71,
       3,    -1,    37,   252,     3,    38,    84,     3,   562,   557,
     509,    -1,    37,   252,     3,   108,    84,     3,    -1,    37,
     252,     3,   108,     3,    -1,    37,   252,     3,   208,    84,
       3,   245,     3,    -1,    37,   252,     3,   208,     3,   245,
       3,    -1,    37,   252,     3,   187,    84,     3,   562,   557,
     509,    -1,    37,   252,     3,   187,     3,   562,   557,   509,
      -1,    37,   252,     3,    75,    84,     3,     3,   562,   557,
     509,    -1,    37,   252,     3,    75,     3,     3,   562,   557,
     509,    -1,    37,   252,     3,   120,   217,     3,   222,    -1,
      37,   252,     3,   100,   217,     3,   222,    -1,    -1,   130,
      -1,    39,     3,    -1,   510,    -1,   157,   518,   519,     3,
     520,   271,   522,   511,   513,   588,    -1,   157,   518,   519,
       3,   520,   439,    -1,    -1,    -1,   199,   164,   258,   512,
     517,    -1,    -1,   197,    88,   514,   515,    -1,    -1,   393,
       3,   394,    -1,   393,     3,   395,     3,    -1,   101,    90,
      -1,    -1,   101,   258,   516,   240,   517,    -1,     3,    20,
     400,    -1,   517,   395,     3,    20,   400,    -1,    -1,   518,
     176,    -1,   518,   103,    -1,   518,   146,    -1,   518,   154,
      -1,   159,    -1,    -1,    -1,   393,   521,   394,    -1,     3,
      -1,   521,   395,     3,    -1,   393,   524,   394,    -1,    -1,
     522,   395,   523,   393,   524,   394,    -1,   400,    -1,   113,
      -1,   524,   395,   400,    -1,   524,   395,   113,    -1,   157,
     518,   519,     3,   240,   525,   511,    -1,     3,    20,   400,
      -1,     3,    20,   113,    -1,   525,   395,     3,    20,   400,
      -1,   525,   395,     3,    20,   113,    -1,   526,    -1,   216,
     518,   519,     3,   520,   271,   522,   511,    -1,   216,   518,
     519,     3,   240,   525,   511,    -1,   216,   518,   519,     3,
     520,   439,   511,    -1,   527,    -1,    -1,    86,     3,   528,
     529,   531,   532,   533,    -1,    -1,   393,   530,   394,    -1,
       3,    -1,   530,   395,     3,    -1,   136,    -1,   245,    -1,
       4,    -1,   236,    -1,   237,    -1,    -1,   534,    -1,   277,
     393,   534,   394,    -1,   393,   534,   394,    -1,   535,    -1,
     534,   395,   535,    -1,   135,    87,    -1,   135,   249,    -1,
      99,     4,    -1,   143,    -1,   143,     6,    -1,   193,     4,
      -1,   242,     4,    -1,    87,    -1,   536,    -1,   258,   537,
     461,   240,   538,   440,   450,   453,   588,    -1,    -1,   518,
     176,    -1,   518,   154,    -1,     3,    20,   400,    -1,     3,
     392,     3,    20,   400,    -1,   538,   395,     3,    20,   400,
      -1,   538,   395,     3,   392,     3,    20,   400,    -1,   208,
     252,     3,   245,     3,    -1,   539,    -1,    73,    95,   540,
       3,    -1,    73,   227,   540,     3,    -1,   108,    95,     3,
      -1,   108,    95,   156,   281,     3,    -1,   108,   227,     3,
      -1,   108,   227,   156,   281,     3,    -1,    -1,   156,   281,
      -1,   541,    -1,    73,   102,     3,    51,   562,    -1,    73,
     102,     3,    51,   562,   113,   400,    -1,    73,   102,     3,
      51,   562,    18,   193,    -1,    73,   102,     3,    51,   562,
      78,   393,   400,   394,    -1,    73,   102,     3,    51,   562,
      18,   193,    78,   393,   400,   394,    -1,   542,    -1,   267,
       3,    -1,   267,    95,     3,    -1,   543,    -1,    73,   548,
     252,   540,     3,   393,   549,   394,   545,   544,    -1,    -1,
     172,   393,     3,   394,    -1,    73,   548,   252,   540,     3,
     392,     3,   393,   549,   394,   545,    -1,    73,   548,   252,
     540,     3,   351,    94,     3,   140,   271,   136,   393,     5,
     394,   245,   393,     5,   394,    -1,    -1,   545,    48,    20,
       5,    -1,   545,    48,     5,    -1,   545,   197,     3,   107,
       3,    -1,   545,   197,     3,   248,     3,    -1,   545,   228,
      63,   268,   393,     3,   394,   229,     5,    -1,   545,   228,
      63,   204,   393,     3,   394,   393,   546,   394,    -1,   545,
     351,    63,   204,   393,     3,   394,    -1,   547,    -1,   546,
     395,   547,    -1,   228,     3,   271,   174,   250,     4,   197,
     191,     5,    -1,   228,     3,   271,   174,   250,   184,   197,
     191,     5,    -1,    73,   548,   252,   540,     3,   393,   549,
     394,   564,    -1,    73,   548,   252,   540,     3,   564,    -1,
      73,   548,   252,   540,     3,   392,     3,   393,   549,   394,
     564,    -1,    73,   548,   252,   540,     3,   392,     3,   564,
      -1,    -1,   246,    -1,   247,   246,    -1,   550,    -1,   549,
     395,   550,    -1,   201,   164,   393,   551,   394,    -1,    71,
       3,   201,   164,   393,   551,   394,    -1,   164,   393,   456,
     394,    -1,   155,   393,   456,   394,    -1,   138,   155,   393,
     456,   394,    -1,   138,   164,   393,   456,   394,    -1,    78,
     393,   400,   394,    -1,    71,     3,    78,   393,   400,   394,
      -1,   134,   164,   393,   552,   394,   207,     3,   393,   553,
     394,   554,    -1,   134,   164,   393,   552,   394,   207,     3,
     392,     3,   393,   553,   394,   554,    -1,    71,     3,   134,
     164,   393,   552,   394,   207,     3,   393,   553,   394,   554,
      -1,    71,     3,   134,   164,   393,   552,   394,   207,     3,
     392,     3,   393,   553,   394,   554,    -1,   261,   393,   555,
     394,    -1,    71,     3,   261,   393,   555,   394,    -1,     3,
      -1,   551,   395,     3,    -1,     3,    -1,   552,   395,     3,
      -1,     3,    -1,   553,   395,     3,    -1,    -1,   554,   197,
     107,    74,    -1,   554,   197,   107,   240,   193,    -1,   554,
     197,   107,   210,    -1,   554,   197,   107,   240,   113,    -1,
     554,   197,   258,    74,    -1,   554,   197,   258,   240,   193,
      -1,   554,   197,   258,   210,    -1,   554,   197,   258,   240,
     113,    -1,   554,   197,   107,   192,    -1,   554,   197,   258,
     192,    -1,   554,   183,   137,    -1,   554,   183,   235,    -1,
     554,   183,   200,    -1,   554,    97,    -1,   554,    18,    97,
      -1,   554,    97,   151,    98,    -1,   554,    97,   151,   149,
      -1,     3,    -1,   555,   395,     3,    -1,    -1,   556,     3,
     562,   557,    -1,    -1,   557,    18,   193,    -1,   557,   193,
      -1,   557,   113,     4,    -1,   557,   113,     5,    -1,   557,
     113,     7,    -1,   557,   113,     6,    -1,   557,   113,   333,
     393,   394,    -1,   557,   113,   334,   393,   394,    -1,   557,
     113,   335,   393,   394,    -1,   557,   113,    72,    -1,   557,
     113,   393,   400,   394,    -1,   557,    48,    -1,   557,    48,
     393,     5,   395,     5,   394,    -1,   557,    48,   393,     5,
     394,    -1,   557,    53,   393,     5,   395,     5,   394,    -1,
     557,    53,   393,     5,   394,    -1,   557,    53,    -1,   557,
     261,   164,    -1,   557,   261,    -1,   557,   201,   164,    -1,
     557,   164,    -1,   557,    79,     4,    -1,   557,    78,   393,
     400,   394,    -1,   557,    71,     3,   261,    -1,   557,    71,
       3,   201,   164,    -1,   557,    71,     3,    78,   393,   400,
     394,    -1,   557,    56,    52,    51,   393,   400,   394,    57,
      -1,   557,    56,    52,    51,   393,   400,   394,    58,    -1,
     557,    56,    52,    51,   393,   400,   394,    -1,   557,    51,
     393,   400,   394,    57,    -1,   557,    51,   393,   400,   394,
      58,    -1,   557,    51,   393,   400,   394,    -1,    -1,   393,
       5,   394,    -1,   393,     5,   395,     5,   394,    -1,    -1,
      64,    -1,    -1,   560,   259,    -1,   560,   280,    -1,    -1,
     561,    82,   240,     4,    -1,   561,    83,     4,    -1,    67,
     558,    -1,   244,   558,   560,    -1,   239,   558,   560,    -1,
     189,   558,   560,    -1,   160,   558,   560,    -1,   152,   558,
     560,    -1,    66,   558,   560,    -1,   205,   558,   560,    -1,
     114,   558,   560,    -1,   132,   558,   560,    -1,   116,   558,
     560,    -1,   117,    -1,   257,    -1,   251,    -1,   115,    -1,
     278,    -1,    82,   558,   561,    -1,   270,   393,     5,   394,
     561,    -1,    64,   558,    -1,   272,   393,     5,   394,    -1,
     256,    -1,    61,    -1,   188,    -1,   182,    -1,   243,   559,
     561,    -1,   249,   559,   561,    -1,   185,   559,   561,    -1,
     175,   559,   561,    -1,   123,   393,   563,   394,   561,    -1,
     240,   393,   563,   394,   561,    -1,    62,    -1,   262,    -1,
     264,    -1,   273,   393,     5,   394,    -1,   562,    36,   396,
      -1,     4,    -1,   563,   395,     4,    -1,   565,   466,   439,
      -1,    -1,   154,    -1,   216,    -1,   566,    -1,   240,   227,
       3,    -1,   240,   227,   113,    -1,   240,   567,    -1,   568,
      -1,   567,   395,   568,    -1,     8,    20,   400,    -1,     8,
       9,   400,    -1,   569,    -1,    73,   202,     3,   393,   570,
     394,    51,    60,   574,   124,    -1,    73,   202,     3,   393,
     570,   394,    60,   574,   124,    -1,    73,    10,   216,   202,
       3,   393,   570,   394,    51,    60,   574,   124,    -1,    73,
      10,   216,   202,     3,   393,   570,   394,    60,   574,   124,
      -1,    73,   139,     3,   393,   570,   394,   213,   573,    51,
      60,   574,   124,    -1,    73,   139,     3,   393,   570,   394,
     213,   573,    60,   574,   124,    -1,    73,    10,   216,   139,
       3,   393,   570,   394,   213,   573,    51,    60,   574,   124,
      -1,    73,    10,   216,   139,     3,   393,   570,   394,   213,
     573,    60,   574,   124,    -1,    -1,   571,    -1,   572,    -1,
     571,   395,   572,    -1,     3,   562,    -1,    16,     3,   562,
      -1,   195,     3,   562,    -1,   150,     3,   562,    -1,   152,
      -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,   132,
      -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,    -1,
     574,   575,    -1,   574,    60,   574,   124,    -1,   574,   156,
     574,   124,   156,    -1,   574,   276,   574,   124,   276,    -1,
     574,   166,   574,   124,   166,    -1,   574,   131,   574,   124,
     131,    -1,   574,    77,   574,   124,    77,    -1,     3,    -1,
       4,    -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,
      18,    -1,    10,    -1,    12,    -1,    16,    -1,    50,    -1,
     241,    -1,   157,    -1,   258,    -1,   107,    -1,   136,    -1,
     274,    -1,   240,    -1,   159,    -1,   271,    -1,    73,    -1,
     108,    -1,   252,    -1,   155,    -1,   253,    -1,   125,    -1,
     119,    -1,    96,    -1,   101,    -1,    68,    -1,   211,    -1,
     165,    -1,   162,    -1,    70,    -1,   194,    -1,   129,    -1,
      69,    -1,   142,    -1,   127,    -1,   195,    -1,   150,    -1,
     140,    -1,    54,    -1,   218,    -1,   209,    -1,   126,    -1,
     220,    -1,    59,    -1,   118,    -1,   217,    -1,   219,    -1,
      51,    -1,   197,    -1,   198,    -1,    63,    -1,   141,    -1,
     148,    -1,   179,    -1,   181,    -1,   163,    -1,   177,    -1,
     215,    -1,   153,    -1,   196,    -1,   137,    -1,    76,    -1,
     190,    -1,   266,    -1,   193,    -1,   113,    -1,   201,    -1,
     164,    -1,   261,    -1,    78,    -1,   134,    -1,   207,    -1,
      74,    -1,   210,    -1,   192,    -1,   152,    -1,   160,    -1,
     270,    -1,   249,    -1,    62,    -1,   132,    -1,   114,    -1,
      66,    -1,   117,    -1,   251,    -1,   239,    -1,   116,    -1,
      82,    -1,   262,    -1,    61,    -1,   260,    -1,   122,    -1,
     158,    -1,    40,    -1,   106,    -1,   281,    -1,   275,    -1,
     277,    -1,   202,    -1,   139,    -1,   213,    -1,   393,    -1,
     394,    -1,   395,    -1,   391,    -1,   392,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    17,    -1,
     397,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     326,    -1,     8,    -1,   576,    -1,   108,   202,     3,    -1,
     108,   202,   156,   281,     3,    -1,   108,   139,     3,    -1,
     108,   139,   156,   281,     3,    -1,   577,    -1,    68,     3,
     393,   394,    -1,    68,     3,   393,   578,   394,    -1,   579,
      -1,   578,   395,   579,    -1,     5,    -1,     4,    -1,     7,
      -1,   193,    -1,     6,    -1,     3,    -1,     8,    -1,   580,
      -1,    73,   219,     3,   581,   582,   197,     3,   140,   118,
     217,    60,   574,   124,    -1,    59,    -1,    39,    -1,   157,
      -1,   258,    -1,   107,    -1,   583,    -1,   108,   219,     3,
      -1,   108,   219,   156,   281,     3,    -1,    37,   219,     3,
     120,    -1,    37,   219,     3,   100,    -1,   584,    -1,    73,
     371,   540,     3,   585,    -1,    -1,   585,   586,    -1,   376,
     277,     5,    -1,   376,     5,    -1,   377,    63,     5,    -1,
     377,     5,    -1,   378,     5,    -1,   184,     5,    -1,   379,
      -1,    18,   379,    -1,   587,    -1,   108,   371,     3,    -1,
     108,   371,   156,   281,     3,    -1,    37,   371,     3,   585,
      -1,    37,   371,     3,    55,    -1,    37,   371,     3,    55,
     277,     5,    -1,    37,   371,     3,   208,   245,     3,    -1,
      -1,   212,    28,    -1,   212,   589,    -1,     3,    -1,   589,
     395,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   479,   479,   480,   485,   492,   493,   494,   508,   509,
     537,   545,   553,   559,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   592,   592,   601,   601,   603,   603,
     605,   605,   610,   612,   616,   617,   618,   619,   620,   623,
     624,   627,   636,   654,   663,   683,   683,   743,   752,   759,
     763,   765,   767,   772,   777,   785,   787,   789,   791,   793,
     795,   797,   799,   801,   805,   806,   809,   809,   810,   810,
     811,   811,   819,   819,   827,   827,   838,   842,   843,   844,
     845,   846,   847,   848,   849,   853,   853,   855,   855,   857,
     857,   860,   860,   862,   862,   864,   864,   866,   866,   868,
     868,   870,   870,   873,   873,   875,   875,   877,   877,   879,
     879,   881,   881,   883,   883,   885,   885,   887,   887,   890,
     890,   892,   892,   894,   894,   898,   899,   900,   901,   902,
     903,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   930,   931,   933,
     934,   935,   936,   937,   938,   939,   940,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   965,
     966,   967,   968,   969,   971,   972,   974,   975,   976,   978,
     979,   980,   981,   988,   995,  1002,  1006,  1010,  1014,  1018,
    1022,  1028,  1029,  1030,  1033,  1039,  1046,  1047,  1048,  1049,
    1050,  1051,  1052,  1053,  1054,  1057,  1059,  1061,  1063,  1067,
    1075,  1086,  1087,  1090,  1091,  1094,  1102,  1110,  1118,  1132,
    1142,  1143,  1156,  1172,  1173,  1174,  1175,  1178,  1185,  1193,
    1194,  1195,  1198,  1199,  1202,  1203,  1207,  1208,  1211,  1213,
    1217,  1218,  1221,  1223,  1227,  1228,  1231,  1232,  1235,  1241,
    1248,  1257,  1258,  1259,  1260,  1263,  1264,  1265,  1266,  1267,
    1270,  1271,  1274,  1275,  1278,  1279,  1280,  1281,  1282,  1283,
    1284,  1285,  1286,  1289,  1290,  1291,  1299,  1305,  1306,  1307,
    1310,  1311,  1314,  1315,  1319,  1327,  1337,  1338,  1339,  1348,
    1353,  1359,  1367,  1371,  1371,  1411,  1412,  1416,  1418,  1420,
    1422,  1424,  1428,  1429,  1430,  1433,  1434,  1437,  1438,  1441,
    1442,  1443,  1446,  1447,  1450,  1451,  1455,  1457,  1459,  1461,
    1464,  1465,  1468,  1469,  1472,  1476,  1486,  1494,  1495,  1496,
    1497,  1501,  1505,  1507,  1511,  1511,  1513,  1518,  1525,  1532,
    1544,  1545,  1546,  1550,  1557,  1564,  1572,  1582,  1590,  1600,
    1608,  1617,  1626,  1636,  1644,  1653,  1662,  1672,  1681,  1693,
    1698,  1703,  1709,  1716,  1723,  1730,  1740,  1747,  1756,  1763,
    1769,  1777,  1783,  1791,  1792,  1793,  1794,  1795,  1811,  1812,
    1813,  1816,  1822,  1833,  1839,  1846,  1852,  1868,  1875,  1884,
    1892,  1898,  1913,  1915,  1919,  1928,  1941,  1943,  1947,  1952,
    1959,  1964,  1972,  1976,  1977,  1981,  1992,  1993,  1994,  1998,
    1999,  2000,  2001,  2002,  2003,  2006,  2008,  2012,  2013,  2016,
    2018,  2021,  2023,  2027,  2036,  2042,  2048,  2055,  2061,  2068,
    2074,  2080,  2086,  2092,  2098,  2104,  2110,  2116,  2122,  2128,
    2134,  2140,  2146,  2152,  2158,  2171,  2183,  2184,  2185,  2188,
    2196,  2202,  2215,  2216,  2216,  2220,  2221,  2224,  2225,  2226,
    2230,  2231,  2231,  2235,  2243,  2253,  2254,  2255,  2256,  2257,
    2260,  2260,  2263,  2264,  2267,  2277,  2290,  2291,  2291,  2294,
    2295,  2296,  2297,  2300,  2304,  2305,  2306,  2307,  2313,  2316,
    2322,  2327,  2333,  2337,  2337,  2342,  2343,  2345,  2346,  2350,
    2351,  2355,  2356,  2357,  2360,  2361,  2362,  2363,  2367,  2368,
    2372,  2373,  2374,  2375,  2376,  2377,  2378,  2379,  2383,  2391,
    2400,  2401,  2402,  2406,  2417,  2429,  2440,  2455,  2460,  2464,
    2465,  2469,  2471,  2473,  2475,  2479,  2480,  2486,  2490,  2492,
    2494,  2496,  2498,  2503,  2507,  2508,  2512,  2521,  2534,  2535,
    2543,  2551,  2559,  2560,  2561,  2562,  2563,  2564,  2566,  2568,
    2572,  2573,  2576,  2591,  2598,  2613,  2626,  2641,  2654,  2655,
    2656,  2659,  2660,  2663,  2664,  2665,  2666,  2667,  2668,  2669,
    2670,  2671,  2673,  2675,  2677,  2679,  2681,  2685,  2686,  2689,
    2690,  2693,  2694,  2697,  2698,  2699,  2700,  2701,  2702,  2703,
    2704,  2705,  2706,  2707,  2708,  2709,  2710,  2711,  2712,  2713,
    2714,  2717,  2718,  2721,  2721,  2731,  2732,  2733,  2734,  2735,
    2736,  2737,  2738,  2739,  2740,  2741,  2742,  2749,  2750,  2751,
    2752,  2753,  2754,  2755,  2756,  2757,  2758,  2759,  2760,  2761,
    2762,  2763,  2764,  2765,  2766,  2767,  2768,  2769,  2772,  2773,
    2774,  2777,  2778,  2781,  2782,  2783,  2786,  2787,  2788,  2792,
    2793,  2794,  2795,  2796,  2797,  2798,  2799,  2800,  2801,  2802,
    2803,  2804,  2805,  2806,  2807,  2808,  2809,  2810,  2811,  2812,
    2813,  2814,  2815,  2816,  2817,  2818,  2819,  2820,  2821,  2822,
    2823,  2824,  2825,  2826,  2829,  2830,  2833,  2846,  2847,  2848,
    2852,  2855,  2856,  2857,  2858,  2858,  2860,  2861,  2869,  2873,
    2879,  2885,  2892,  2899,  2905,  2911,  2918,  2927,  2928,  2931,
    2932,  2935,  2936,  2937,  2938,  2941,  2942,  2943,  2944,  2945,
    2946,  2947,  2948,  2949,  2950,  2957,  2958,  2959,  2960,  2961,
    2962,  2963,  2964,  2967,  2968,  2969,  2969,  2969,  2970,  2970,
    2970,  2970,  2970,  2970,  2971,  2971,  2971,  2971,  2971,  2971,
    2971,  2971,  2971,  2972,  2972,  2972,  2972,  2972,  2972,  2972,
    2973,  2973,  2973,  2973,  2974,  2974,  2974,  2974,  2974,  2974,
    2974,  2974,  2974,  2974,  2974,  2974,  2975,  2975,  2975,  2975,
    2975,  2975,  2975,  2975,  2976,  2976,  2976,  2976,  2976,  2976,
    2976,  2976,  2977,  2977,  2977,  2977,  2977,  2977,  2977,  2977,
    2977,  2978,  2978,  2978,  2978,  2978,  2978,  2978,  2978,  2979,
    2979,  2979,  2980,  2980,  2980,  2980,  2980,  2980,  2980,  2980,
    2981,  2981,  2981,  2981,  2981,  2981,  2981,  2982,  2982,  2982,
    2982,  2982,  2982,  2982,  2983,  2983,  2983,  2983,  2984,  2984,
    2984,  2984,  2984,  2984,  2984,  2984,  2984,  2984,  2984,  2984,
    2985,  2985,  2985,  2985,  2985,  2986,  2993,  2997,  3003,  3009,
    3015,  3027,  3031,  3037,  3045,  3046,  3049,  3050,  3051,  3052,
    3053,  3054,  3055,  3062,  3066,  3074,  3075,  3078,  3079,  3080,
    3083,  3087,  3093,  3102,  3110,  3121,  3125,  3134,  3135,  3139,
    3140,  3141,  3142,  3143,  3144,  3145,  3146,  3149,  3153,  3159,
    3169,  3176,  3183,  3191,  3201,  3202,  3203,  3206,  3207
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
  "FVECTOR_NORMALIZE", "';'", "'.'", "'('", "')'", "','", "']'", "'='",
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
     635,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   398,   399,   399,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   401,   400,   402,   400,   403,   400,
     404,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   405,   405,   406,   406,   407,   400,   400,   400,   408,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   409,   409,   410,   400,   411,   400,
     412,   400,   413,   400,   414,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   415,   400,   416,   400,   417,
     400,   418,   400,   419,   400,   420,   400,   421,   400,   422,
     400,   423,   400,   424,   400,   425,   400,   426,   400,   427,
     400,   428,   400,   429,   400,   430,   400,   431,   400,   432,
     400,   433,   400,   434,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   435,   435,   435,   400,   400,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   400,   400,   400,   400,   437,
     437,   400,   400,   400,   400,   400,   400,   400,   400,   438,
     439,   439,   439,   440,   440,   441,   441,   442,   442,   443,
     443,   443,   444,   444,   445,   445,   446,   446,   447,   447,
     448,   448,   449,   449,   450,   450,   451,   451,   452,   452,
     452,   453,   453,   453,   453,   454,   454,   454,   454,   454,
     455,   455,   456,   456,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   458,   458,   458,   459,   460,   460,   460,
     461,   461,   462,   462,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   465,   464,   466,   466,   467,   467,   467,
     467,   467,   468,   468,   468,   469,   469,   470,   470,   471,
     471,   471,   472,   472,   473,   473,   474,   474,   474,   474,
     475,   475,   476,   476,   477,   438,   478,   479,   479,   479,
     479,   478,   480,   480,   481,   481,   478,   438,   482,   482,
     483,   483,   483,   438,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   485,
     485,   485,   486,   486,   486,   486,   438,   487,   438,   488,
     488,   489,   489,   490,   490,   490,   490,   490,   438,   438,
     438,   491,   491,   492,   492,   493,   493,   438,   494,   438,
     495,   495,   496,   496,   496,   497,   498,   498,   498,   498,
     499,   499,   438,   438,   438,   500,   501,   501,   501,   502,
     502,   502,   502,   502,   502,   503,   503,   504,   504,   505,
     505,   506,   506,   507,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   509,   509,   509,   438,
     510,   510,   511,   512,   511,   513,   513,   514,   514,   514,
     515,   516,   515,   517,   517,   518,   518,   518,   518,   518,
     519,   519,   520,   520,   521,   521,   522,   523,   522,   524,
     524,   524,   524,   510,   525,   525,   525,   525,   438,   526,
     526,   526,   438,   528,   527,   529,   529,   530,   530,   531,
     531,   532,   532,   532,   533,   533,   533,   533,   534,   534,
     535,   535,   535,   535,   535,   535,   535,   535,   438,   536,
     537,   537,   537,   538,   538,   538,   538,   438,   438,   539,
     539,   438,   438,   438,   438,   540,   540,   438,   541,   541,
     541,   541,   541,   438,   542,   542,   438,   543,   544,   544,
     543,   543,   545,   545,   545,   545,   545,   545,   545,   545,
     546,   546,   547,   547,   543,   543,   543,   543,   548,   548,
     548,   549,   549,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   551,   551,   552,
     552,   553,   553,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   555,   555,   556,   550,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   558,   558,
     558,   559,   559,   560,   560,   560,   561,   561,   561,   562,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
     562,   562,   562,   562,   563,   563,   564,   565,   565,   565,
     438,   566,   566,   566,   567,   567,   568,   568,   438,   569,
     569,   569,   569,   569,   569,   569,   569,   570,   570,   571,
     571,   572,   572,   572,   572,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   574,   574,   574,   574,   574,
     574,   574,   574,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   438,   576,   576,   576,
     576,   438,   577,   577,   578,   578,   579,   579,   579,   579,
     579,   579,   579,   438,   580,   581,   581,   582,   582,   582,
     438,   583,   583,   438,   438,   438,   584,   585,   585,   586,
     586,   586,   586,   586,   586,   586,   586,   438,   587,   587,
     438,   438,   438,   438,   588,   588,   588,   589,   589
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
       4,     4,     3,     3,     0,     1,     0,     6,     0,     7,
       0,     6,     0,     7,     0,     5,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     0,     9,     0,     9,     0,
       9,     0,    10,     0,    10,     0,    10,     0,    10,     0,
      10,     0,    10,     0,    10,     0,    12,     0,    14,     0,
      14,     0,    10,     0,    12,     0,    14,     0,    14,     0,
      10,     0,     9,     0,     9,     8,     6,     6,     8,     4,
       7,     6,     4,     4,     4,     6,     8,     6,     6,     6,
       8,     8,     4,     6,     6,     6,     4,     4,     4,     6,
       4,     6,     4,     6,     3,     4,     4,     4,     3,     3,
       6,     4,     4,     4,     4,     4,     4,     6,     4,     4,
       4,     4,     4,     4,     4,     4,     8,     8,     8,     6,
       6,     8,     8,     6,    10,     4,     6,     8,     4,     4,
       4,     6,     8,     3,     6,     6,     6,     6,     8,     3,
       8,    10,     3,     3,     3,     3,     3,     1,     1,     4,
       6,     1,     1,     1,     6,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     6,     3,     5,     4,
       5,     3,     4,     3,     4,     1,     1,     1,     1,     1,
       3,    12,    12,     0,     2,     0,     4,     2,     4,     0,
       1,     1,     0,     2,     0,     2,     0,     3,     1,     3,
       0,     3,     2,     4,     0,     3,     1,     3,     2,     4,
       2,     0,     2,     4,     4,     0,     2,     2,     4,     4,
       0,     2,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     2,     2,     1,     0,
       1,     3,     1,     1,     3,     4,     5,     3,     3,     4,
       6,     9,     3,     0,     5,     1,     0,     5,     3,     5,
       6,     5,     0,     1,     1,     0,     1,     1,     1,     2,
       2,     0,     0,     1,     2,     4,     6,     6,     6,     0,
       2,     0,     1,     3,     3,     1,     8,     2,     2,     2,
       0,     6,     2,     4,     0,     2,     7,     1,     4,     6,
       0,     1,     1,     1,     8,     9,    10,     9,    11,    10,
      12,    11,    13,     9,    11,    10,    12,    11,    12,     1,
       3,     1,     4,     4,     4,     6,     1,     3,     2,     3,
       5,     1,     3,     0,     2,     2,     3,     3,     1,     1,
       1,     2,     3,     2,     2,     2,     4,     1,     3,     1,
       4,     6,     0,     4,     4,     2,     0,     4,     7,     4,
       1,     3,     1,     1,     1,    10,     0,     2,     2,     0,
       2,     2,     2,     2,     2,     0,     2,     1,     3,     0,
       4,     0,     5,     5,    10,    10,    17,    12,    19,    11,
       6,     8,     6,     6,     6,     9,     6,     5,     8,     7,
       9,     8,    10,     9,     7,     7,     0,     1,     2,     1,
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
       1,     3,     9,     9,     9,     6,    11,     8,     0,     1,
       2,     1,     3,     5,     7,     4,     4,     5,     5,     4,
       6,    11,    13,    13,    15,     4,     6,     1,     3,     1,
       3,     1,     3,     0,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     4,     3,     3,     3,     2,     3,     4,
       4,     1,     3,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     5,     5,     5,     3,     5,     2,     7,     5,
       7,     5,     2,     3,     2,     3,     2,     3,     5,     4,
       5,     7,     8,     8,     7,     6,     6,     5,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       1,     1,     4,     3,     1,     3,     3,     0,     1,     1,
       1,     3,     3,     2,     1,     3,     3,     3,     1,    10,
       9,    12,    11,    12,    11,    14,    13,     0,     1,     1,
       3,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     4,     5,     5,
       5,     5,     5,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     3,     5,     3,
       5,     1,     4,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,    13,     1,     1,     1,     1,     1,
       1,     3,     5,     4,     4,     1,     5,     0,     2,     3,
       2,     3,     2,     2,     2,     1,     2,     1,     3,     5,
       4,     4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   598,     0,   360,     0,   495,     0,
       0,     0,     0,     0,   495,     0,   294,     0,   550,     0,
       0,     0,   249,   355,   367,   373,   396,   403,   408,   409,
     410,   417,   419,     0,   433,   434,   432,   479,   518,   522,
     548,   558,   567,   573,   576,   730,   738,   896,   901,   913,
     920,   925,   937,     0,     0,     0,   425,     0,     0,   565,
       0,     0,     0,     0,     0,     0,     0,   565,   599,     0,
       0,   565,     0,   523,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   501,   411,   415,   413,   414,     0,
       0,   501,     0,     0,   733,   734,     0,     0,     0,     0,
     574,     0,     1,     2,   398,   422,     0,     0,   927,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   600,     0,     0,   565,   525,   364,     0,
     359,   357,   358,     0,   561,     0,   899,     0,   397,   897,
       0,   921,     0,     0,   563,     0,   370,     0,   938,     0,
     497,   498,   499,   500,   496,     0,   412,     0,   418,     0,
       0,     0,     0,   731,   732,     0,     4,     9,    10,    12,
      11,     8,     0,     0,     0,   305,   295,   245,     0,   246,
     247,     0,   296,   297,   298,     0,    13,   248,   300,   302,
     301,   299,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   218,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   309,   250,   303,   399,   552,
     551,   309,     0,     0,     0,     0,     0,   310,   312,   326,
     313,   326,   575,     3,     0,     0,   404,   405,     0,     0,
     426,   924,   923,     0,     0,     0,     0,     0,     0,     0,
       0,   941,     0,   940,   911,   907,   906,   910,   908,   912,
     909,   902,     0,   904,     0,     0,   566,   559,     0,     0,
     747,     0,     0,     0,     0,   747,   916,   915,     0,     0,
     560,     0,     0,     0,   927,     0,     0,     0,     0,   362,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     371,   372,   368,     0,     0,   502,   416,     0,   502,   737,
     736,   735,     0,    74,     0,    32,    31,    20,     0,     0,
       0,     0,     0,    55,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,     0,     0,     0,   349,   323,   309,
       0,     0,     0,     0,     0,   334,   333,   337,   341,   338,
       0,     0,   335,   325,     0,     0,   407,   406,     0,   422,
       0,     0,   420,     0,     0,     0,     0,     0,     0,   467,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   935,   928,   903,
       0,     0,     0,   710,   719,   678,   678,   678,   678,   678,
     703,   678,   700,     0,   678,   678,   678,   681,   712,   681,
     711,   678,   678,   678,     0,   681,   678,   681,   702,   709,
     701,   720,   721,     0,     0,     0,   704,   568,     0,     0,
       0,     0,     0,     0,   748,   749,     0,     0,     0,     0,
       0,   919,   917,   918,     0,   436,     0,     0,     0,     0,
     926,   727,   527,     0,   529,   530,     0,   365,     0,   274,
       0,   253,   364,   562,   900,   898,   922,   453,   564,   370,
     939,     0,     0,     0,   557,     0,     0,     5,    51,    75,
       0,    48,     0,     0,   237,     0,     0,     6,     0,    57,
       0,     0,     0,   223,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,    21,    23,    24,    22,   243,
     241,    46,     0,    44,   209,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    33,    73,    72,    25,    26,
      28,    14,    15,    16,    17,    18,    19,    27,    30,    29,
       0,   307,   253,     0,   304,   401,   400,   309,     0,     0,
       0,   314,     0,   349,     0,   354,   322,     0,   253,   311,
     335,   335,     0,   328,     0,   336,     0,   318,   317,     0,
     426,     0,     0,     0,     0,     0,     0,   463,     0,   460,
     466,   462,     0,   645,     0,     0,     0,     0,   464,   942,
     943,   936,   934,   930,     0,   932,     0,   933,   905,   747,
     747,     0,   707,   683,   689,   686,   683,   683,     0,   683,
     683,   683,   682,   686,   686,   683,   683,   683,     0,   686,
     683,   686,     0,     0,     0,     0,     0,     0,     0,     0,
     751,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   439,     0,     0,     0,     0,   728,
     729,     0,     0,   643,   595,   326,   526,     0,   531,   532,
     533,   534,   254,     0,   281,   253,   361,   363,   369,     0,
     482,   504,     0,     0,   481,   482,     0,   482,     0,    86,
       0,   235,     0,     0,     0,     0,    53,     0,     0,     0,
       0,   139,     0,     0,     0,     0,     0,   171,   172,   173,
     174,   175,   176,     0,     0,     0,     0,   152,     0,     0,
       0,   156,   157,   158,   160,     0,     0,   162,     0,   165,
     166,   167,     0,     0,     0,     0,     0,     0,    93,    87,
      88,    89,    90,    91,    92,   142,   143,   144,     0,     0,
       0,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,     0,     0,     0,     0,     0,     0,     0,     0,
     195,     0,   198,   199,   200,     0,    60,     0,    62,     0,
       0,     0,     0,     0,    69,    70,    71,    47,    45,     0,
       0,   244,   242,    78,     0,     0,    40,    36,    38,     0,
      58,   255,     0,     0,   349,   351,   351,   351,     0,   315,
     319,     0,     0,     0,   274,   339,   340,     0,     0,   342,
       0,   423,   424,   421,     0,     0,     0,     0,     0,     0,
     645,   645,     0,   475,   474,   476,   645,   469,     0,     0,
     929,   931,     0,     0,     0,   695,   705,   697,   699,   724,
       0,   698,   694,   693,   716,   715,   692,   696,   691,     0,
     713,   690,   714,     0,     0,     0,   570,   723,     0,   569,
       0,   752,   754,   753,     0,   750,     0,   389,     0,     0,
       0,     0,     0,   391,     0,     0,     0,     0,     0,   765,
       0,   437,   438,     0,   445,     0,     0,     0,     0,     0,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   601,     0,     0,   528,   547,     0,     0,   543,     0,
       0,     0,     0,   524,   535,   538,     0,     0,   944,   366,
       0,     0,     0,   513,   503,     0,     0,   482,   520,   482,
     521,    52,   239,     0,   238,     0,     0,     0,    56,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    97,    99,     0,     0,     0,
       0,     0,   131,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,    59,     0,
       0,     0,     0,     0,     0,   264,   253,   402,   316,     0,
       0,     0,     0,   324,     0,   553,     0,     0,   281,   331,
     329,     0,     0,   327,   343,     0,   430,   429,   427,     0,
       0,     0,     0,   476,   476,   645,     0,     0,   657,     0,
     662,     0,     0,     0,     0,     0,   477,   666,   647,     0,
     664,   471,   476,   461,   468,     0,     0,   679,     0,   684,
     685,     0,     0,   686,     0,   686,   686,   708,   722,     0,
       0,     0,   759,   762,   761,   763,   760,   755,   756,   758,
     764,   757,     0,     0,     0,     0,     0,     0,   374,     0,
       0,     0,     0,     0,     0,   765,     0,     0,   440,   444,
     442,   441,   443,     0,   449,     0,     0,     0,     0,     0,
       0,     0,   643,   597,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   582,   643,     0,   726,   542,   540,   541,
     544,   545,   546,     0,     0,     0,   259,   259,   275,   276,
     282,     0,   356,   515,   514,     0,     0,   505,   510,   509,
       0,   507,   485,   519,   236,   240,     0,    54,     0,   137,
     136,     0,   141,     0,     0,   224,   225,   170,   148,   149,
       0,     0,   153,   154,   155,   159,   161,   163,   204,   205,
     206,   207,     0,    94,   103,   105,   101,   107,   109,   111,
     145,     0,     0,   147,   220,   266,   266,   266,   113,     0,
       0,   121,     0,     0,   129,   266,   266,   177,     0,     0,
       0,   189,   190,     0,     0,   193,     0,   196,     0,   201,
       0,    61,    63,    65,    66,    67,    68,    77,    81,     0,
       0,    50,     0,     0,    42,     0,    43,    35,     0,     0,
     274,   255,   350,     0,     0,     0,   320,     0,     0,     0,
     944,   344,     0,   330,     0,     0,     0,     0,     0,   641,
       0,   465,   473,   476,   646,   478,     0,     0,     0,     0,
       0,     0,   667,   648,   649,   651,   650,   655,     0,     0,
       0,     0,   665,   663,   470,     0,     0,   765,     0,     0,
     688,   717,   725,   718,   706,     0,   571,   375,     0,   765,
       0,     0,     0,     0,     0,   390,     0,   383,     0,     0,
       0,     0,   773,   774,   775,   777,   776,   895,   780,   781,
     782,   888,   779,   778,   883,   884,   885,   886,   887,   870,
     783,   824,   815,   820,   765,   866,   856,   827,   859,   802,
     809,   806,   793,   849,   838,   765,   846,   864,   800,   801,
     871,   787,   794,   842,   858,   863,   860,   821,   799,   868,
     740,   798,   818,   811,   808,   765,   857,   847,   788,   837,
     876,   814,   828,   810,   829,   813,   852,   835,   796,   765,
     785,   869,   791,   853,   805,   832,   844,   804,   765,   833,
     830,   831,   839,   851,   841,   807,   812,   836,   825,   826,
     843,   875,   848,   817,   850,   803,   877,   834,   822,   816,
     823,   819,   862,   790,   784,   855,   861,   795,   797,   786,
     867,   845,   865,   840,   854,   792,   789,   873,   765,   874,
     872,   890,   891,   892,   893,   894,   881,   882,   878,   879,
     880,   889,   766,     0,   447,   446,     0,   451,     0,   377,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,     0,     0,     0,     0,
     578,   594,   602,   645,     0,   537,   539,   260,   261,     0,
     278,   280,     0,     0,     0,   947,   945,   946,   483,     0,
     506,     0,     0,     0,   944,     0,     0,     0,   140,   227,
     228,   229,   230,   233,   232,   234,   226,   231,     0,     0,
       0,   266,   266,   266,   266,   266,   266,     0,     0,     0,
     270,   270,   270,   266,     0,     0,     0,   266,     0,     0,
       0,   266,   270,   270,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    83,    41,    37,    39,   259,   262,   265,
     281,   264,   352,     0,     0,     0,     0,   554,   555,     0,
     549,     0,   431,     0,   454,   619,     0,   617,     0,   455,
       0,   472,     0,     0,     0,     0,     0,     0,   669,     0,
       0,     0,     0,     0,     0,   765,     0,   680,   687,     0,
     765,     0,   379,   392,   393,   394,     0,     0,     0,     0,
     376,   739,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   435,     0,     0,   385,     0,     0,     0,     0,
     582,     0,     0,     0,     0,   609,     0,     0,     0,   606,
       0,   605,     0,   615,     0,     0,     0,     0,     0,   577,
     644,   536,   259,   277,   284,   283,     0,     0,   517,   516,
     512,   511,     0,   487,   480,     7,   138,   135,   150,   151,
     208,   270,   270,   270,   270,   270,   270,   210,     0,   146,
       0,     0,     0,     0,     0,   270,   115,     0,     0,   270,
     123,     0,     0,   270,     0,     0,   186,   187,   188,   191,
     192,     0,   197,   202,   257,     0,     0,   256,   285,   274,
     348,     0,   347,   346,     0,     0,   345,   428,     0,     0,
       0,   459,     0,   642,   659,     0,   677,   661,     0,     0,
       0,   670,   668,   652,   653,   654,   656,     0,   765,     0,
     742,   572,     0,   744,     0,   387,   384,     0,   767,     0,
       0,     0,     0,     0,   765,   448,     0,     0,   381,     0,
       0,     0,   378,     0,   580,   596,     0,     0,     0,     0,
       0,   607,   608,   293,   603,   584,     0,     0,     0,     0,
       0,   279,   948,     0,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   267,     0,    96,    98,
     100,     0,   266,     0,     0,     0,   266,     0,     0,     0,
     132,   134,     0,   263,   259,     0,   290,   281,   353,   321,
     556,   457,     0,   620,   618,     0,   675,   676,     0,     0,
       0,   765,     0,   741,   743,   395,   380,   772,   771,   768,
     770,   769,     0,   450,     0,   388,   386,     0,     0,   610,
       0,     0,   616,     0,   583,     0,     0,     0,     0,     0,
       0,     0,     0,   508,     0,     0,   486,   104,   106,   102,
     108,   110,   112,   211,     0,   259,   271,   114,   270,   117,
     119,   122,   270,   125,   127,   130,   194,   258,   287,   286,
       0,   251,   252,     0,   658,   660,   674,   671,     0,   746,
     914,     0,   382,     0,     0,   604,     0,   579,   585,   586,
       0,     0,     0,   493,     0,   488,     0,   490,   491,   269,
     272,     0,     0,   266,   266,     0,   266,   266,     0,     0,
     291,     0,   672,   673,   745,   452,     0,     0,     0,     0,
       0,     0,     0,     0,   489,     0,   259,   116,   270,   270,
     124,   270,   270,   289,   288,   621,     0,     0,     0,     0,
       0,     0,     0,   589,   494,     0,   273,     0,     0,     0,
       0,   623,     0,     0,     0,     0,     0,   623,     0,     0,
     492,   118,   120,   126,   128,   456,   622,     0,     0,     0,
       0,   611,     0,     0,   590,   587,     0,   637,     0,     0,
     581,     0,   623,   623,     0,     0,   588,     0,   638,   458,
       0,   634,   636,   635,     0,     0,     0,   613,   612,     0,
     591,   639,   640,   624,   632,   626,     0,   628,   633,   630,
       0,   623,     0,   627,   625,   631,   629,   614,     0,     0,
       0,     0,     0,     0,     0,   592,   593
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   678,  1089,  1309,  1311,  1307,   679,   977,   690,
    1310,   680,  1079,  1303,  1080,  1304,   691,  1505,  1506,  1507,
    1823,  1821,  1822,  1824,  1825,  1826,  1833,  2102,  2223,  2224,
    1837,  2106,  2226,  2227,  1841,  1515,  1516,   697,  1245,   400,
      21,    22,   659,  1315,  1858,  1790,  2007,  1550,  1830,  2096,
    1982,  2176,   954,  1448,  1449,  1218,  2116,  2191,  1776,    96,
     296,   297,   531,   306,   307,   308,   309,   842,   554,   310,
     551,   856,   552,   852,  1333,  1334,   841,  1320,  1863,   311,
      23,    74,   133,   369,    24,   382,    25,  1172,  1173,    26,
      27,   836,   104,    28,    29,    30,    31,    32,   320,    33,
     562,  1337,    34,   934,  1184,  1414,  1755,  1757,  1922,    35,
      36,  1361,    37,  1223,  1957,  1804,  2087,  2166,  2245,  2084,
      84,   155,   673,   962,  1227,  1802,  1460,   960,    38,    39,
     127,   367,   653,   656,   951,  1213,  1214,  1215,    40,    99,
     848,    41,   112,    42,    43,    44,  1949,  1780,  2293,  2294,
      72,  1200,  1201,  1878,  1876,  2256,  2285,  1570,  1202,  1125,
     892,   903,  1135,  1136,   627,  1140,   944,   945,    45,    94,
      95,    46,   633,   634,   635,  1392,  1406,  1752,    47,    48,
     342,   343,    49,   358,   644,    50,    51,   333,   588,    52,
    1452,  1797
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2127
static const yytype_int16 yypact[] =
{
   13352,  -140,  -127,   125,   694,   130, -2127,   626, -2127,   460,
     499,   448,   -60,   285, -2127,    20, -2127,   301,    13,    93,
     555,   172, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127,   589, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127,   592,   607,   668, -2127,   230,   445,   549,
     709,   573,   717,    52,   735,   742,   751,   549, -2127,   494,
     576,   549,   515, -2127,    33,    60,    84,   766,   100,   101,
     770,   151,   152,   453,   604,   605,   395, -2127, -2127,   792,
     822,   604,   571,    87,   432, -2127,  6671,   826,   680,    72,
   -2127,   834, -2127, 13352,    17,  -188,   440,   473,   409,    41,
     -38,   567,   855,   795,   861,   480,   673,   513,   596,   492,
     676,   704,   886, -2127,    56,   908,   549,   521,   537,   928,
   -2127, -2127, -2127,   -28, -2127,   654, -2127,   665, -2127, -2127,
     683, -2127,   686,   757, -2127,   689,   342,   691, -2127,   701,
   -2127, -2127, -2127, -2127, -2127,   936, -2127,   992, -2127,   745,
     998, 10581, 10581, -2127, -2127,  1003,   234, -2127, -2127, -2127,
   -2127,  1005, 10581, 10581, 10581, -2127, -2127, -2127,  7844, -2127,
   -2127,   628, -2127, -2127, -2127,   625, -2127, -2127, -2127, -2127,
   -2127, -2127,   994,   655,   678,   707,   725,   727,   736,   747,
     753,   756,   764,   782,   790,   798,   824,   858,   876,   889,
     907,   916,   934,   944,   981,  1011,  1027,  1036,  1038,  1040,
    1056,  1058,  1076,  1078,  1082,  1086,  1091,  1112,  1115,  1119,
    1120,  1122,  1123,  1124,  1125,  1134,  1138,  1139,  1146,  1147,
    1148,  1150,  1165,  1166,  1167,  1169,  1170,  1171, -2127, -2127,
    1172,  1177,  1178,  1179,  1182,  1187,  1188,  1190,  1195,  1197,
    1202,  1205,  1210,  1211,  1212,  1213,  1214,  1216,  1218,  1221,
    1228,  1237,  1238,  1239,  1240,  1241,  1242,  1243,  1245,  1247,
    1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1258,  1270,
    1271,  1272,  1273,  1275, 10581, 13791,   -75, -2127,   671,   684,
     685,    49,  1279,  1070,  1281,    59,  -189,   546, -2127,  1407,
   -2127,  1407, -2127, -2127,  1029,  1540, -2127, -2127,  1583,  1673,
     -48, -2127, -2127,   458,    90,    21,   501,   451,   477,   516,
    1610,  1405,  1438,   117, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127,   322, -2127,  1681,  1682, -2127, -2127, 13415,  1491,
     111,  1686,  1493,  1410,  1689,   111, -2127, -2127,   467,  1690,
   -2127,  1497,   514,  1415, -2127,  1692,  1699,   -42,  1676, -2127,
     332,  -196,    72,  1703,  1704,  1705,  1707,  1713,  1714,  1716,
   -2127, -2127, -2127,  1720,  1721,   235, -2127,  1722,   309, 13935,
   13935, -2127,  1724, 10581, 10581,  1083,  1083,  1693, 10581, 13238,
     433,  1725,  1729,  1342, -2127, 10581,  7062, 10581, 10581, 10581,
   10581, 10581, 10581, 10581, 10581, 10581,  1339, 10581, 10581, 10581,
   10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581,
   10581, 10581,  1345, 10581, 10581, 10581,  1346, 10581, 10581, 10581,
   10581, 10581, 10581,  8235, 10581, 10581, 10581, 10581, 10581, 10581,
   10581, 10581, 10581, 10581,  1348,  1356,  1374,  1387,  1393, 10581,
   10581,  1394,  1395,  1403, 10581, 10581,  1774,  1421,  1423, 10581,
   10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581,
   10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581,
   10581,  1424, 10581, 10581, 10581,  1425, 10581, 10581, 10581, 10581,
   10581, 10581, 10581,  9480, -2127, 10581, 10581, 10581, 10581, 10581,
      51,  1427,   758, 10581,  7453, 10581, 10581, 10581, 10581, 10581,
   10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581,
    1818, -2127,    72,  1819, 10581,  1820,  1822,   391, -2127,   102,
   10581,  1432,   365,  1824,    72, -2127, -2127, -2127,   306, -2127,
      72,  1665,  1633, -2127,  1827,  1828, -2127, -2127,  1829,  1555,
    1791,  1794, -2127,  1834,  1835,  1836,  1837,  1838,  1839, -2127,
    1840,  1841,  1842,  1843, 13415,  1844,  1603,  1846,  1847,  1853,
    1854,  1855,  1481,  1856,    27,   114,  1857, -2127, -2127, -2127,
     178,  1470,  1471, -2127, -2127,  1472,  1472,  1472,  1472,  1472,
   -2127,  1472, -2127,  1474,  1472,  1472,  1472,  1804, -2127,  1804,
   -2127,  1472,  1472,  1472,  1476,  1804,  1472,  1804, -2127, -2127,
   -2127, -2127, -2127,  1477,  1478,  1479, -2127,   746,  1870, 13415,
    1871,  1897,  1899,  1509,  1511, -2127,  -192,  1901,  1904,  1711,
    1515, -2127, -2127, -2127,  1715,  1860,  1910,  1717,  1634,  1913,
     117,  -133, -2127,   384, -2127, -2127,    30, -2127, 10581,  1719,
      72,  -176,   537, -2127, -2127, -2127, -2127, -2127, -2127,   342,
   -2127,  1915,  1917,  -123, -2127,  1915,  -101, -2127,  1140, -2127,
    1527, 13935, 13300,   454, -2127, 10581, 10581, -2127,  1528, -2127,
   10581,  1688,   620, -2127, -2127, -2127,  9549,  8626,  1733,  2540,
    2888,  9584,  9624,  9817,  9871,  9903,  9934, -2127,  3236,  3584,
    3932,  4280,  9975,  4628,  4976,  5324, 10015, 10208, 10262,   664,
    5672, 10311,  6020, -2127, 10366, 10406, 10599, -2127, 13835,  6368,
    6772,  6847,  7072,  9233,  1537, 10653, 10688, 10715, 10757, 10797,
   10976, 11003, 11030,  7150,  7177,  7205, -2127, -2127, -2127, -2127,
   -2127, 11065,  7238,  1585,  1589,  1591,   787,  1013,  1548,  1593,
    1594,  7270, 11092, 11134, 11174, 11201, 11228, 11255, 11282, 11309,
    7537,  7565,  7592,  7676,  7854,  7881,  7925,  7952,  1065, 11353,
   11380, 11407,  7979, -2127,  1234, 11442,  8020, -2127,  8062,  8259,
    8330,  8357, 11469, 11511, 11551, -2127,  1200,  6899,  2582,  2930,
    2930, -2127,    35, -2127, -2127,  1710, 10581, 10581,  1552, 10581,
   13869,  1559,  1560,  1561, 10581,  1414,  1521,  1521,  1385,  1361,
    1744,   894,   894,   808,   808,   808,   808,   821,  1693,  1693,
     263, -2127,  -176,  1821, -2127, -2127,  1563,   102,  1792,  1795,
    1797, -2127,  1688,   391, 11578, -2127, -2127,     7,  -165,   546,
    1633,  1633,  1799,  1758,    72, -2127,  1800, -2127, -2127,   740,
     -48,  1767,  1768,   -39, 13415, 13415,  1963, -2127,  1745, -2127,
   -2127, -2127,  1746,  1933, 13415,  1969,  1728,  1730, -2127, -2127,
   -2127, -2127, -2127, -2127,  1971, -2127,  1972, -2127, -2127,   111,
     111,  1973, -2127, -2127, -2127, -2127, -2127, -2127,  1980, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,  1980, -2127,
   -2127, -2127,  1982,  1986,  1987,  1802,  1604,  1592, 10581,  1606,
    1933, 13415, 13415, 13415,  1788,   111,  1735,   170,  -186,  1807,
    2002,   142,  2003,   612,  1867,   177,  2005,  2006,  1813, -2127,
   -2127,  1918,  2008,   465, -2127,  1407, -2127,  2010, -2127, -2127,
   -2127,   472, 13935,  1951,  1845,  -176, -2127, -2127, -2127,  1995,
    -170, -2127,   456,  1624, -2127,  -170,  1624,  1823, 10581, -2127,
   10581, -2127, 10581, 13684, 13336,  1927,  8411,  1623,  1626, 10581,
   10581, -2127, 10581, 13613,  1862,  1862, 10581, -2127, -2127, -2127,
   -2127, -2127, -2127, 10581, 10581, 10581, 10581, -2127, 10581, 10581,
   10581, -2127, -2127, -2127, -2127, 10581, 10581, -2127, 10581, -2127,
   -2127, -2127, 13415, 13415, 10581, 10581, 10581,  2021, -2127,  1679,
    1680,  1685,  1691,  1700,  1708, -2127, -2127, -2127, 10581, 10581,
   10581, -2127, 10581,  1638,  1639,  1647,  1731,  2038,  1737,  2048,
    1738,  1662,  1670, 10581, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, 10581, 10581, 10581, 10581, 10581, 10581, 10581, 10581,
   -2127, 10581, -2127, -2127, -2127, 10581, -2127, 10581, -2127, 10581,
   10581, 10581, 10581, 10581, -2127, -2127, -2127, -2127, -2127, 10581,
    1688,  2930,  2930,  1825, 13902, 10581, -2127, 10581, 10581,  1688,
   -2127,  1923,    72,  2064,   391,  1929,  1929,  1929,  1677, -2127,
     482, 10581,  2071,  2086,  1719, -2127, -2127,    72, 10581,  -100,
      72, -2127, -2127, -2127,  2087,  2087,  1698,  1928,  1930,  1702,
    1933,  1933, 13415, -2127, -2127, 13355,  1933, -2127,  2090,  2093,
   -2127, -2127,  1706,  1709,   468,  -142,   784,  -142,  -142, -2127,
     485,  -142,  -142,  -142,   784,   784,  -142,  -142,  -142,   487,
     784,  -142,   784,  1712,  1726,  1732,  2020, -2127, 10581, 13935,
     170,  1933,  1933,  1933,   452, -2127,  1718, -2127,  1739,  1741,
    1743,  1748,   493, -2127,  1851,   170,  2099,   184,  2044, -2127,
    1965, -2127, -2127,     0,  1863,  1874,   170,   189,  1912,  2104,
    2120,  -130,  2121,  1750,  1961,   386,  1751,  1752,  1984,  1753,
     498, -2127,  2146,  1688, -2127, -2127,  2147,    -6,  2144,  2148,
    2149,  1761,   421, -2127,  1760, -2127,   520, 10581,  1944, -2127,
    9017,  1993,  2155, -2127, -2127,  2159,  9408,  -166, -2127,  -166,
   -2127, -2127, 13935, 13711, -2127, 10581,  1770, 10581, -2127, -2127,
    9426,  1265, 11605, 10581, 10581,  1771,  1772, 11632, 11659, 11686,
    8451,  8645, 11730, 11757, 11784, 11819, 11846, 11888,   -22,     1,
   11928, 11955,  8708,  1773,  1775,  1777,  1783,  1784,  1786,  1790,
    1292,  8745, 11982, 12009, -2127, -2127, -2127,  1796,   500,  1805,
     522,  1806, -2127, -2127, 12036,  8802,  8842,  9035, 12063, 12107,
    9123,  9150,  1320,  1780,  1865, 12134, 12161, 12196, 12223, 12265,
   12305,  1793,  1798, 10581,  1688, 10581,  1337,  1688, 13935,  1688,
    1815,  1688,  1833,  1858,  2101,  2036,  -176, -2127, -2127,  2022,
    1848,  1861,  1864, -2127,  2185, 13935,  2173,    15,  1845, -2127,
   13935, 10581,  1868, -2127, -2127,  -100, -2127,  1852,   224, 10581,
    1869,  1872,  2197, 13355, 13355,  1933,  2037,  2226,  1873,  1875,
    1876,  2179,  2229,  1877,  2230,   139, -2127, -2127, -2127,  2069,
    2072, -2127, 13355, -2127, -2127,  2024,   679, -2127,  2233, -2127,
   -2127,  1999,  2231, -2127,  2236, -2127, -2127, -2127, -2127,  1884,
   12332,   543, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127,   692,   170,  2245,  2246,  2247,  2248, -2127,  2250,
    1886,   548,  1888,  1988,   170, -2127,  1460,  2137, -2127, -2127,
   -2127, -2127, -2127,  2255,  1997,  1889,   550,  1996,   170,  2264,
     225,  2143,   465, -2127,   533, 10581,  1894,  1896,  1898,  2287,
    2287,  1900,  2197,   503,   465, 13415, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127,   421,   554,   421,   -27,    53,  1905, -2127,
    1174,   481, -2127, -2127, 13935,  2034,  2279, -2127, -2127, 13935,
     556, -2127,  2105, -2127, -2127, 13935,  2297, -2127, 10581, -2127,
   -2127, 10581, -2127, 12359, 13194, -2127, -2127, -2127, -2127, -2127,
   10581, 10581, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, 10581, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, 10581, 10581, -2127, -2127,  1952,  1952,  1952, -2127,  1954,
     903, -2127,  1955,   948, -2127,  1952,  1952, -2127, 10581, 10581,
   10581, -2127, -2127, 10581, 10581, -2127, 10581, -2127, 10581, -2127,
   10581, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,  1916,
    1922,  1337,  1926,  1931, -2127,  1932, -2127, -2127, 10581, 10581,
    1719,  1923, -2127,  2303,  2303,  2303,  1914, 10581, 10581,  2306,
    1944, 13935,  2287, -2127,  2318,  2319, 12386,  2320,  2329, -2127,
     590, -2127, -2127, 13355, -2127, -2127,  2328, 10581,  2330,  2288,
     364, 10581, -2127, -2127, -2127, -2127, -2127, -2127,  1947,  1950,
    1956, 10581, -2127, -2127, -2127,   452,  2291, -2127,  1953,  2344,
   -2127,   784, -2127,   784,   784, 10581, -2127, -2127,  2292, -2127,
     622,  1959,  1960,  1962,  1964, -2127,   170, -2127,   170,  1967,
     627,  1920, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127,  2138, -2127,  1966,  1970,  2080,   170, -2127,
    1974,   656,  1975,  2094,   170,  2095,   658,  1977,  2194,  2201,
    1978, 12413,  2320,  2287,  2287, -2127,   660,   662,  2329,   666,
     108, -2127, -2127,  1933,   669, -2127, -2127, -2127, -2127,  2369,
   -2127, -2127,   520, 10581, 10581, -2127, -2127,  1983, -2127,  9799,
   -2127, 10190,  1990,  2285,  1944,  1985, 12440, 12484, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, 12511, 12538,
   12573,  1952,  1952,  1952,  1952,  1952,  1952,  2192, 12600,  2314,
    2182,  2182,  2182,  1952,  1998,  1994,  2004,  1952,  2013,  2007,
    2009,  1952,  2182,  2182, 12642, 12682, 12709, 12736, 12763,  9193,
   12790, 12817, -2127, -2127, -2127, -2127, -2127, 13740,   226, 13935,
    1845,  2036, -2127,   674,   728,   731,  2386, 13935, 13935,  2376,
   -2127,   733, -2127,  2368,  2394, -2127,   737, -2127,   739, -2127,
    2410, -2127,   741, 12861,   743,  2026,  2029,  2251, -2127, 12888,
    2023,  2035,  2041, 12915,   706, -2127,  2268, -2127, -2127, 12950,
   -2127,  2616, -2127, -2127, -2127, -2127,  2411,   748,   750,   170,
   -2127, -2127,  2964,  3312,  3660,  4008,  4356,  4704,  2377,  2433,
   10581,  2360, -2127,   783,   170, -2127,   170,  2046,   785,  2304,
     503, 10581,  2049,  2050,  2197, -2127,   843,   845,   847, -2127,
    2438, -2127,   877, -2127,   119,  2051,  2443,  2385,  2387, -2127,
   13361, -2127,    53, -2127, 13935, 13935,  2448,  2449, -2127, 13935,
   -2127, 13935,  9408,  2060, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127,  2182,  2182,  2182,  2182,  2182,  2182, -2127, 10581, -2127,
    2451,  2392,  2062,  2063,  2065,  2182, -2127,  2117,  2118,  2182,
   -2127,  2122,  2123,  2182,  2077,  2082, -2127, -2127, -2127, -2127,
   -2127, 10581, -2127, -2127, -2127,  2260, 10581, -2127,  2340,  1719,
   -2127,  2479, -2127, -2127,  2096, 10581, -2127, -2127,  2215,  2282,
    2488, -2127,  2489, -2127, -2127,  2490,   949, -2127,  2491, 10581,
   10581, -2127, -2127, -2127, -2127, -2127, -2127,  2434, -2127,  5052,
   -2127, -2127,  5400, -2127,  2103, -2127, -2127,   879, -2127,  2416,
    2367,  2343,  2334,  2225, -2127, -2127, 12977,  2109, -2127,   982,
     984,   170, -2127,  2110,   217, -2127, 13019,  2320,  2329,   986,
    2298, -2127, -2127, -2127, -2127, -2127,  2499,  2503,   -43,  -105,
    2307, -2127, -2127,  2492,  2115,   988,  2510,  2413,  2124,  2128,
    2129,  2130,  2131,  2133, 13059, -2127,  2136,  2512, -2127, -2127,
   -2127,  2139,  1952,  2142,  2153,  2154,  1952,  2164,  2184,  2181,
   -2127, -2127, 13086, -2127, 13740,  -124,  2357,  1845, -2127, -2127,
   13935, -2127,  2529, -2127, -2127,  2186, -2127, -2127,  2187, 13113,
   13140, -2127,  5748, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127,  6096, -2127, 10581, -2127, -2127,  1004,  2531, -2127,
    1006,  1008, -2127,  2534, -2127,  2188,  2537,  2538,  2190,  2191,
    2195, 10581,  2544, -2127,  1031,   -37, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127,  2575,    53,  2204, -2127,  2182, -2127,
   -2127, -2127,  2182, -2127, -2127, -2127, -2127, -2127,  2348,  2354,
    2287, -2127, -2127,  2196, -2127, -2127,  1397, -2127,  6444, -2127,
   -2127, 13167, -2127,  2223,  2418, -2127,  1064, -2127, -2127, -2127,
    2624,  2626,  2627, 13935,  2611, -2127,  2632, -2127, -2127, -2127,
   -2127,  2634,  2244,  1952,  1952,  2253,  1952,  1952,  2459,  2460,
    2254,  2638, -2127, -2127, -2127, -2127,  2403,  2647,  2648,  2638,
    2258,  2259,  2261, 10581, -2127,  2414,    53, -2127,  2182,  2182,
   -2127,  2182,  2182, -2127, -2127, -2127,  1079,  2265,  1090,  2271,
    1097,  2275,  2428, -2127, 13935,  2449, -2127,  2277,  2278,  2280,
    2286, -2127,  2666,  2668,  2678,  2638,  2638, -2127,  2455,  2682,
    2115, -2127, -2127, -2127, -2127,   558, -2127,  2294,  2302,  1099,
    1102,   565,  2688,  1104, -2127, -2127,   -55,  2545,   351,   330,
   -2127,  2638, -2127, -2127,  2600,  2429, -2127,  2455, -2127, -2127,
      22, -2127, -2127, -2127,   -20,   -16,  1107,   565,   565,  2525,
   -2127, -2127, -2127, -2127, -2127, -2127,   -25, -2127, -2127, -2127,
       2, -2127,  2452, -2127, -2127, -2127, -2127,   565,    39,  2504,
    2506,  2513,  2514,  2701,  2702, -2127, -2127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2127,  2605,   -96, -2127, -2127, -2127, -2127,  -937,  1473, -2127,
    1621, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,  1734,  2312,
   -2127,  -237,  -652,  1162, -2127, -1442, -2127,   853, -1355, -2127,
   -1721, -2127, -1103, -2127,   923, -1326, -2127, -2127, -1415, -2127,
   -2127,  2193,  -293,  -299,  2172,  -494, -2127, -2127,  -308, -2127,
   -2127,   653, -2127, -2127, -2127,  1383,  -823,   410,   -30, -2127,
   -2127, -2127,  2591,  2059, -2127,  2056, -2127, -1156, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,  2167, -2127,
    1879,  1613, -2127, -2127, -2127, -2127, -2127, -2127, -2127, -2127,
   -2127, -1165, -2127,  -750, -2127, -2127, -2127, -2127, -2127,   466,
     112,  2645,  2349, -2127,  1778, -2127,   789,  2074, -2127, -2127,
   -2127, -2127, -2127, -2127, -2127, -2127, -1174,  1301, -2127, -2127,
   -2127, -2127,    65, -2127, -2127, -2127, -2127,   829, -2127,   447,
   -2127,  1338,  1327, -1728, -1705, -2126, -1764, -1419, -2127, -1110,
     382,  -486,   103,  -886,  -416,  1859, -1184, -2127, -2127, -2127,
    2597, -2127,  -343, -2127,  1866,  1168, -1163, -2127, -2127, -2127,
   -2127,  2175, -2127, -2127, -2127, -2127, -2127,  2406, -2127, -2127,
   -1534, -2127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -728
static const yytype_int16 yytable[] =
{
     295,  1328,  1560,   555,  1381,  1791,   542,  1423,   537,   956,
    1343,  1344,   640,  1779,   916,  1777,  1362,  1144,  1145,  1401,
    1099,   939,  1787,  1150,   939,  1152,  1870,  1101,    92,  1221,
    1416,  1231,   883,  1221,   948,  1558,   128,   916,  1444,  1116,
    1408,  1077,  2308,  2339,   334,   335,   336,   337,   338,   339,
    1942,   543,   504,  2217,  2323,   116,   853,   801,  2327,   361,
     560,   532,   301,   134,  2156,   389,   390,  1936,   541,   802,
     660,   314,   315,   661,   926,   301,   395,   396,   397,    53,
    1174,  1438,   399,   940,   533,  1788,   940,   136,  2333,   318,
     163,   316,   567,   565,   654,  1117,   100,  1331,   658,  2158,
     530,   344,  1787,   139,   141,   504,  2188,  1409,   372,   658,
    1983,  1984,    54,  2260,   629,  2335,  -495,  1369,    16,   885,
    2321,  1994,  1995,   904,  2075,    56,    91,   630,    57,   909,
      98,   911,   122,    73,  2189,   582,   125,   117,  1370,  2076,
      16,   362,  1301,  1583,  1584,  1585,  1586,  1871,   963,  2289,
    2290,  1831,  1832,   530,   144,   146,  1944,  1410,   873,  -495,
    1842,  1843,  1118,  2159,   345,  1788,  1332,  -495,  2334,   129,
     966,  2322,  2324,  1167,   566,  2316,  2328,   886,  1571,  1572,
    1091,   334,   335,   336,   337,   338,   339,   130,   101,  -495,
    2325,   365,    89,  1178,  2329,  2336,  1104,  1594,   503,   373,
     164,   927,  1179,   655,   319,  2157,   544,  1175,   118,   131,
     561,  1587,   363,   920,  2309,  1228,   135,  1230,   941,   544,
    2326,  2218,  1119,  2340,  2330,  1222,   302,   317,  1078,  1461,
    1103,    55,   303,   832,   340,  1573,   132,  1610,   568,   302,
     137,  1411,  1621,  1439,   803,   303,   843,    93,  1620,  1781,
    2088,  2089,  2090,  2091,  2092,  2093,   140,   142,  1412,   942,
     943,   631,  1761,  1422,  2101,  1944,   949,   950,  2105,  1784,
    1964,  1318,  2109,   505,   506,   507,   508,   509,   510,   511,
    1945,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   681,   529,
      16,   583,   682,  1219,   884,  1946,   632,   145,   147,   692,
     696,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     534,   708,   709,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,  1947,   724,   725,   726,
    2151,   728,   729,   730,   731,   732,   733,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,  1937,  1938,
    1109,   955,  2150,   751,   752,  1789,  1539,   373,   756,   757,
     804,   340,  1488,   761,   762,   763,   764,   765,   766,   767,
     768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,  1489,   784,   785,   786,  1102,
     788,   789,   790,   791,   792,   793,   794,  1559,  1881,   796,
     797,   798,   799,   800,  1946,  2004,   380,   810,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,  1896,   341,   964,  2314,   295,   967,
     304,   536,  1886,  1185,   844,  1947,  1901,  1860,  1120,  1121,
    1403,    87,   305,   304,   978,  1417,   148,  2222,  1126,  1948,
    1907,  2225,  1908,    85,   331,   305,  1971,  1972,  1973,  1974,
    1975,  1976,  1588,  1589,  1590,   671,    88,  1462,  1985,  1463,
     574,  1912,  1989,   850,  1795,  -326,  1993,  1601,  2311,  1603,
    1604,  1763,  1913,   584,   585,   586,   587,  1168,  1169,  1170,
    1171,  1565,    86,  2005,   569,  1161,  1162,  1163,  1205,  1796,
    2081,   323,  1914,  2291,  1382,  2069,   352,   647,  1383,   576,
    1206,   851,   572,  1446,   838,  1447,  1915,  2267,  2268,   563,
    2269,  2270,  1591,   553,  2008,  1916,  1192,    90,  2317,  2318,
     321,  1427,   564,  1193,  1094,   839,  1132,  1133,   324,   675,
    1428,  2312,   381,    97,  -727,   102,  1207,   684,   685,  1205,
     322,   575,   952,   103,  1208,  1887,  1384,  2337,  1948,  1385,
    1186,  1206,   570,   325,   641,  1917,  2296,  1404,   971,   972,
     161,   326,  1418,  2304,  1386,   571,  2313,   577,  2315,   973,
     974,   162,   105,   327,   976,   106,  1258,  1259,  -364,  1194,
     578,   983,  1923,  1195,  1387,  1098,   658,  1207,  1928,   149,
     107,  1767,  1388,  1329,  1209,  1208,  1335,   332,  1764,  1564,
    1196,  2006,   545,   109,   642,  1888,   392,   393,   672,  1197,
     505,   506,   507,   508,   509,   510,   511,  1203,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,  2297,   529,   939,   840,  1090,
     328,   110,  2297,  1210,  1551,  1209,  1198,  1768,   573,   353,
     648,   108,  2187,  1950,   505,   506,   507,   508,   509,   510,
     511,   329,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   546,
     529,  1389,   672,  1390,    58,   111,  1345,   150,   686,  -332,
    1081,  1082,   113,  1084,  1210,   356,   589,   590,   503,   940,
     115,    75,  1391,   547,   368,   643,  1199,  -364,   114,   686,
    1596,   124,  2039,  2220,  1769,   357,   548,  2042,   119,  1597,
     123,  2298,   330,  1608,  -727,   120,  2065,  2178,  2298,  1211,
     151,  2182,  1609,  2047,   121,  2299,   979,  2037,   152,   846,
     544,   549,  2299,   153,   915,    76,  2038,   126,  2059,   138,
    2060,   806,   807,   143,   808,  2230,   156,   809,   946,   947,
     154,    77,   916,   150,   550,  1111,  1112,  -499,  -496,    59,
     157,  2192,  1324,  1316,  1770,   158,    60,   505,   506,   507,
     508,   509,   510,   511,  2266,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,  1159,   529,   917,   159,   151,   165,    78,   298,
    -499,  -496,    61,    62,   299,  1181,  1182,   312,  -499,  -496,
     526,   527,   528,  1302,   529,    79,   348,    80,   346,    63,
    1224,  1225,  1313,    81,   527,   528,   300,   529,   347,   918,
    -499,  -496,  1367,  1368,   349,  1212,  1371,  1372,  2248,  2249,
     351,  2251,  2252,   350,  1232,  2132,  1233,   354,    82,  1373,
    1374,  1375,  1374,  1240,  1241,   355,  1242,  1398,  1399,   360,
    1247,  2142,  1433,  1434,  1509,  1510,    64,  1248,  1249,  1250,
    1251,   359,  1252,  1253,  1254,  2147,  2117,  1835,  1836,  1255,
    1256,   364,  1257,    65,   366,    66,  1512,  1513,  1260,  1261,
    1262,    67,   522,   523,   524,   525,   526,   527,   528,   368,
     529,   370,  1270,  1271,  1272,   374,  1273,  1607,  1399,   385,
      68,    69,  1617,  1399,  1759,  1399,   375,  1284,  1785,  1445,
    1800,  1801,  1839,  1840,   378,    70,  1285,  1286,  1287,  1288,
    1289,  1290,  1291,  1292,   376,  1293,  1436,   377,  2198,  1294,
     379,  1295,   383,  1296,  1297,  1298,  1299,  1300,   893,   894,
     895,   896,   384,   897,  1879,  1880,   899,   900,   901,  1306,
     387,  1308,  1308,   905,   906,   907,   386,    83,   910,  1137,
    1138,   388,  1141,  1142,  1143,  1325,  2126,  2127,  1146,  1147,
    1148,    92,  1330,  1151,   394,   980,  1902,  1399,   402,  1783,
     401,  1910,  1399,   505,   506,   507,   508,   509,   510,   511,
     403,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   404,   529,
    1925,  1399,  1930,  1434,  1939,  1940,  1941,  1940,  1004,  1005,
    1943,  1880,  1380,  1951,  1445,    71,   535,  1540,  2010,  2011,
    1542,   405,  1543,   539,  1545,   505,   506,   507,   508,   509,
     510,   511,   556,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     406,   529,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   407,   529,
     408,  1450,  2012,  2011,  1454,  2013,  2011,  2016,  1940,   409,
    1459,  2019,  2020,  2021,  2022,  2024,  2025,  2027,  2028,  1465,
     410,   976,  2045,  1399,  2046,  1399,   411,  1473,  1474,   412,
     505,   506,   507,   508,   509,   510,   511,   413,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   414,   529,  2058,  1399,  2062,
    1399,  1036,  1037,   415,   505,   506,   507,   508,   509,   510,
     511,   416,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,  1541,
     529,   506,   507,   508,   509,   510,   511,   417,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,  1561,   529,  2070,  2020,  2071,
    1940,  2072,  1940,  1566,   505,   506,   507,   508,   509,   510,
     511,   418,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   419,
     529,  2074,  2022,  2136,  1399,   505,   506,   507,   508,   509,
     510,   511,   420,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     421,   529,   505,   506,   507,   508,   509,   510,   511,   422,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   423,   529,  1771,
     505,   506,   507,   508,   509,   510,   511,   424,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,  1793,   529,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,  1806,   529,   425,  1807,  2145,  1399,  2146,  1399,
    2152,  1880,  2163,  1801,  1818,  1819,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,  1820,   529,  2202,  1399,
    2204,  2020,  2205,  2022,   426,  1827,  1828,  1038,  1039,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     427,   529,  1844,  1845,  1846,  2215,  2216,  1847,  1848,   428,
    1849,   429,  1850,   430,  1851,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   431,
     529,   432,  1857,  1859,  2232,  2233,  2238,  2239,   553,  1060,
    1061,  1867,  1868,  1622,  1623,  1624,  1625,  1626,  1627,   433,
    1628,   434,  1629,  2271,  2272,   435,  1630,  1631,  1632,   436,
    1633,  1883,  2274,  2275,   437,  1889,  1634,  1635,  1636,  1637,
    1638,  2277,  2272,  2302,  2272,  1893,  2303,  2272,  2306,  2307,
    1639,  2331,  2272,  1105,  1106,   438,  1321,  1322,   439,  1899,
    1640,  1641,   440,   441,  1642,   442,   443,   444,   445,  1643,
    1644,  1645,  1646,  1647,  1864,  1865,  1648,   446,  1649,  1650,
    1651,   447,   448,  1652,  1653,   968,  1654,  1655,  1656,   449,
     450,   451,  1657,   452,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,  1658,   529,   453,   454,
     455,  1659,   456,   457,   458,   459,  1660,  1661,  1662,  1794,
     460,   461,   462,  1663,  1664,   463,  1665,  1666,  1667,  1668,
     464,   465,  1669,   466,  1670,  1671,  1672,  1673,   467,  1674,
     468,  1675,  1676,   557,  1677,   469,  1678,  1679,   470,  1680,
    1681,  1682,  1683,   471,   472,   473,   474,   475,  1684,   476,
    1685,   477,  1686,  1687,   478,  1688,  1689,  1690,  1691,  1692,
    1693,   479,  1694,  1695,  1696,  1697,  1698,   558,  1066,  1067,
     480,   481,   482,   483,   484,   485,   486,  1699,   487,  1700,
     488,  1701,   489,   490,   491,   492,   493,   494,   495,   496,
    1702,   497,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1470,
    1471,  1710,  1711,   498,   499,   500,   501,  1712,   502,  1713,
    1714,  1715,   538,  1716,   540,  1717,   559,  1718,  1719,  1720,
    1721,   579,   580,   581,   591,   592,  1500,  1501,   628,   636,
     637,   638,   639,   645,   646,   651,   649,  1954,  1955,  1722,
    1723,  1724,   652,  1959,   657,  1961,   662,   663,   664,  1725,
     665,  1726,  1727,  1728,  1525,  1526,   666,   667,  1729,   668,
    1730,  1731,  1732,   669,   670,   674,  1733,   677,   687,   529,
    1734,  1735,   688,   707,  1736,  1737,  1738,  1739,   689,   723,
     727,  1740,   746,   505,   506,   507,   508,   509,   510,   511,
     747,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   748,   529,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   758,
     529,   749,  1741,  1742,  1743,  1744,  1745,   750,   753,   754,
     505,   506,   507,   508,   509,   510,   511,   755,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   759,   529,   760,   783,   787,
     805,   831,   833,   835,  2056,   837,   845,   847,   854,   855,
     857,   858,   318,   861,   859,  2066,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   874,   875,   876,
     877,  1746,  1747,  1748,  1749,  1750,   878,  1751,   880,   879,
     881,   882,   887,   889,   890,   891,  1459,   898,   902,   908,
     912,   913,   914,   919,   921,   505,   506,   507,   508,   509,
     510,   511,  2094,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     922,   529,   923,   924,   928,  2112,   925,   929,   930,   931,
    2114,   933,   932,   935,   936,   937,   938,   953,   959,  2120,
     961,   969,   975,  1622,  1623,  1624,  1625,  1626,  1627,    16,
    1628,  1019,  1629,  2129,  2130,  1033,  1630,  1631,  1632,  1034,
    1633,  1035,  1040,  1041,  1042,  1083,  1634,  1635,  1636,  1637,
    1638,   -80,  1086,  1087,  1088,  1108,  1095,  1092,  1093,  1096,
    1639,  1097,  1107,  1110,  1114,  1115,  1122,  1123,  1124,   916,
    1640,  1641,  1127,  1128,  1642,  1129,  1130,  1131,  1134,  1643,
    1644,  1645,  1646,  1647,  1139,  1158,  1648,  1153,  1649,  1650,
    1651,  1154,  1155,  1652,  1653,  1156,  1654,  1655,  1656,  1160,
    1157,  1164,  1657,  1166,  1176,  1177,  1180,  1183,  1187,  1188,
    1189,  1191,  1190,  1204,  1216,  1220,  1658,  1226,  1236,  1238,
    1239,  1659,  1221,  1244,  1217,  1263,  1660,  1661,  1662,  1264,
    1265,  1274,  1275,  1663,  1664,  1266,  1665,  1666,  1667,  1668,
    1276,  1267,  1669,  1278,  1911,  1671,  1672,  1673,  2201,  1674,
    1268,  1675,  1676,  1280,  1677,  1282,  1678,  1679,  1269,  1680,
    1681,  1682,  1683,  1283,  1314,  2213,   -82,  1317,  1684,  1319,
    1685,  1323,  1686,  1687,  1326,  1688,  1689,  1690,  1691,  1692,
    1693,  1277,  1694,  1695,  1696,  1697,  1698,  1279,  1281,  1327,
    1336,  1339,  1340,  1363,  1341,  1342,  1364,  1699,  1379,  1700,
    1365,  1701,  1402,  1366,  1405,  1407,  1376,  1420,  1413,  1419,
    1702,  1393,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1400,
    1377,  1710,  1711,  1421,  1424,  1426,  1378,  1712,   984,  1713,
    1714,  1715,  1394,  1716,  1395,  1717,  1396,  1718,  1719,  1720,
    1721,  1397,  1415,  1425,  1429,  1430,  1432,  2264,  1431,  1435,
    1440,  1437,  1441,  1442,  1443,  1445,  1451,  1455,  1456,  1722,
    1723,  1724,  1457,  1466,  1548,  1475,  1476,  1493,  1494,  1725,
    1495,  1726,  1727,  1728,  1527,  1528,  1496,  1497,  1729,  1498,
    1730,  1731,  1732,  1499,  1549,  1552,  1733,  1537,  1556,  1508,
    1734,  1735,  1538,  1557,  1736,  1737,  1738,  1739,  1511,  1514,
    1569,  1740,   505,   506,   507,   508,   509,   510,   511,  1544,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,  1546,   529,  1575,
    1574,  1579,  1580,  1592,  1582,  1600,  1593,  1595,  1598,  1599,
    1602,  1553,  1741,  1742,  1743,  1744,  1745,  1564,  1611,  1612,
    1613,  1614,  1547,  1615,  1554,  1753,  1619,  1555,  1754,  1529,
    1530,  1562,  1567,  1756,  1760,  1568,  1576,  1762,  1577,  1578,
    1581,  1622,  1623,  1624,  1625,  1626,  1627,  1605,  1628,  1616,
    1629,  1618,  1758,  1765,  1630,  1631,  1632,  1772,  1633,  1773,
    1775,  1774,  1798,  1778,  1634,  1635,  1636,  1637,  1638,  1799,
    1792,  1805,  1803,  1829,  1834,  1838,  1862,  1866,  1639,  1869,
    1852,  1746,  1747,  1748,  1749,  1750,  1853,  1751,  1640,  1641,
    1854,  1872,  1642,  1875,  1873,  1855,  1856,  1643,  1644,  1645,
    1646,  1647,  1877,  1882,  1648,  1884,  1649,  1650,  1651,  1885,
    1890,  1652,  1653,  1891,  1654,  1655,  1656,  1897,  1898,  1892,
    1657,  1895,  1900,  1903,  1904,  1918,  1905,  1921,  1932,  1906,
    1909,  1919,  1927,  1920,  1658,  1933,  1929,  1924,  1926,  1659,
    1931,  1934,  1952,  1963,  1660,  1661,  1662,  1980,  1956,  1965,
    1981,  1663,  1664,  1962,  1665,  1666,  1667,  1668,  1987,  2014,
    1669,  1986,  2040,  1671,  1672,  1673,  2015,  1674,  1988,  1675,
    1676,  1991,  1677,  1992,  1678,  1679,  1990,  1680,  1681,  1682,
    1683,  2017,  2018,  2023,  2044,  2031,  1684,  2033,  1685,  2029,
    1686,  1687,  2030,  1688,  1689,  1690,  1691,  1692,  1693,  2034,
    1694,  1695,  1696,  1697,  1698,  2035,  2055,  2054,  2057,  2061,
    2063,  2073,  2067,  2068,  2077,  1699,  2078,  1700,  2079,  1701,
    2080,  2082,  2083,  2086,  2095,  2097,  2098,  2099,  1702,  2100,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,  2103,  2104,  1710,
    1711,  2110,  2107,  2108,  2113,  1712,  2111,  1713,  1714,  1715,
    2115,  1716,  2118,  1717,  2121,  1718,  1719,  1720,  1721,  2122,
    2119,  2123,  2124,  2137,  2131,  2125,  2128,  2135,  2138,  2139,
    2140,  2141,  2144,  2148,  2154,  2153,  2155,  1722,  1723,  1724,
    2162,  2160,  2161,  2164,  2165,  2175,  2190,  1725,  2167,  1726,
    1727,  1728,  2168,  2169,  2170,  2171,  1729,  2172,  1730,  1731,
    1732,  2174,  2193,  2177,  1733,  2179,  2203,  2206,  1734,  1735,
    2208,  2209,  1736,  1737,  1738,  1739,  2180,  2214,  2181,  1740,
     505,   506,   507,   508,   509,   510,   511,  2183,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,  2185,   529,  2184,  2219,  2228,
    2194,  2195,  2207,  2210,  2211,  2229,  1977,  1978,  2212,  2231,
    1741,  1742,  1743,  1744,  1745,   508,   509,   510,   511,  2221,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,  2236,   529,  1622,
    1623,  1624,  1625,  1626,  1627,  2237,  1628,  2240,  1629,  2241,
    2242,  2243,  1630,  1631,  1632,  2244,  1633,  2246,  2247,  2253,
    2254,  2255,  1634,  1635,  1636,  1637,  1638,  2250,  2257,  1940,
    2258,  2259,  2261,  2262,  2265,  2263,  1639,  2279,  2273,  1746,
    1747,  1748,  1749,  1750,  2276,  1751,  1640,  1641,  2278,  2286,
    1642,  2281,  2282,  2287,  2283,  1643,  1644,  1645,  1646,  1647,
    2284,  2288,  1648,  2292,  1649,  1650,  1651,  2295,  2300,  1652,
    1653,  2305,  1654,  1655,  1656,  2301,  2310,  2308,  1657,  2332,
    2319,  2341,  2338,  2342,  2343,  2344,  2345,  2346,   313,  1312,
    1467,   683,  1658,  1861,  2009,  1953,   849,  1659,  1563,  1246,
     371,   957,  1660,  1661,  1662,   958,   860,   834,  1338,  1663,
    1664,  2280,  1665,  1666,  1667,  1668,   160,   676,  1669,  1113,
    2043,  1671,  1672,  1673,  1229,  1674,  1786,  1675,  1676,   965,
    1677,  2085,  1678,  1679,  2320,  1680,  1681,  1682,  1683,  2064,
    1766,  1782,   391,  1894,  1684,   888,  1685,  1149,  1686,  1687,
     650,  1688,  1689,  1690,  1691,  1692,  1693,     0,  1694,  1695,
    1696,  1697,  1698,     0,     0,     0,     0,     0,     0,     0,
       0,  1165,     0,  1699,     0,  1700,     0,  1701,     0,     0,
       0,     0,     0,     0,     0,     0,  1702,     0,  1703,  1704,
    1705,  1706,  1707,  1708,  1709,     0,     0,  1710,  1711,     0,
       0,     0,     0,  1712,     0,  1713,  1714,  1715,     0,  1716,
       0,  1717,     0,  1718,  1719,  1720,  1721,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1722,  1723,  1724,     0,     0,
       0,     0,     0,     0,     0,  1725,     0,  1726,  1727,  1728,
       0,     0,     0,     0,  1729,     0,  1730,  1731,  1732,     0,
       0,     0,  1733,     0,     0,     0,  1734,  1735,     0,     0,
    1736,  1737,  1738,  1739,     0,     0,     0,  1740,   505,   506,
     507,   508,   509,   510,   511,     0,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,  1741,  1742,
    1743,  1744,  1745,  -728,  -728,  -728,  -728,     0,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,  1622,  1623,  1624,
    1625,  1626,  1627,     0,  1628,     0,  1629,     0,     0,     0,
    1630,  1631,  1632,     0,  1633,     0,     0,     0,     0,     0,
    1634,  1635,  1636,  1637,  1638,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1639,     0,     0,  1746,  1747,  1748,
    1749,  1750,     0,  1751,  1640,  1641,     0,     0,  1642,     0,
       0,     0,     0,  1643,  1644,  1645,  1646,  1647,     0,     0,
    1648,     0,  1649,  1650,  1651,     0,     0,  1652,  1653,     0,
    1654,  1655,  1656,     0,     0,     0,  1657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1658,     0,     0,     0,     0,  1659,     0,     0,     0,     0,
    1660,  1661,  1662,     0,     0,     0,     0,  1663,  1664,     0,
    1665,  1666,  1667,  1668,     0,     0,  1669,     0,  2048,  1671,
    1672,  1673,     0,  1674,     0,  1675,  1676,     0,  1677,     0,
    1678,  1679,     0,  1680,  1681,  1682,  1683,     0,     0,     0,
       0,     0,  1684,     0,  1685,     0,  1686,  1687,     0,  1688,
    1689,  1690,  1691,  1692,  1693,     0,  1694,  1695,  1696,  1697,
    1698,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1699,     0,  1700,     0,  1701,     0,     0,     0,     0,
       0,     0,     0,     0,  1702,     0,  1703,  1704,  1705,  1706,
    1707,  1708,  1709,     0,     0,  1710,  1711,     0,     0,     0,
       0,  1712,     0,  1713,  1714,  1715,     0,  1716,     0,  1717,
       0,  1718,  1719,  1720,  1721,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1722,  1723,  1724,     0,     0,     0,     0,
       0,     0,     0,  1725,     0,  1726,  1727,  1728,     0,     0,
       0,     0,  1729,     0,  1730,  1731,  1732,     0,     0,     0,
    1733,     0,     0,     0,  1734,  1735,     0,     0,  1736,  1737,
    1738,  1739,     0,     0,     0,  1740,   505,   506,   507,   508,
     509,   510,   511,     0,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,     0,     0,  1741,  1742,  1743,  1744,
    1745,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1622,  1623,  1624,  1625,  1626,
    1627,     0,  1628,     0,  1629,     0,     0,     0,  1630,  1631,
    1632,     0,  1633,     0,     0,     0,     0,     0,  1634,  1635,
    1636,  1637,  1638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1639,     0,     0,  1746,  1747,  1748,  1749,  1750,
       0,  1751,  1640,  1641,     0,     0,  1642,     0,     0,     0,
       0,  1643,  1644,  1645,  1646,  1647,     0,     0,  1648,     0,
    1649,  1650,  1651,     0,     0,  1652,  1653,     0,  1654,  1655,
    1656,     0,     0,     0,  1657,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1658,     0,
       0,     0,     0,  1659,     0,     0,     0,     0,  1660,  1661,
    1662,     0,     0,     0,     0,  1663,  1664,     0,  1665,  1666,
    1667,  1668,     0,     0,  1669,     0,  2049,  1671,  1672,  1673,
       0,  1674,     0,  1675,  1676,     0,  1677,     0,  1678,  1679,
       0,  1680,  1681,  1682,  1683,     0,     0,     0,     0,     0,
    1684,     0,  1685,     0,  1686,  1687,     0,  1688,  1689,  1690,
    1691,  1692,  1693,     0,  1694,  1695,  1696,  1697,  1698,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1699,
       0,  1700,     0,  1701,     0,     0,     0,     0,     0,     0,
       0,     0,  1702,     0,  1703,  1704,  1705,  1706,  1707,  1708,
    1709,     0,     0,  1710,  1711,     0,     0,     0,     0,  1712,
       0,  1713,  1714,  1715,     0,  1716,     0,  1717,     0,  1718,
    1719,  1720,  1721,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1722,  1723,  1724,     0,     0,     0,     0,     0,     0,
       0,  1725,     0,  1726,  1727,  1728,     0,     0,     0,     0,
    1729,     0,  1730,  1731,  1732,     0,     0,     0,  1733,     0,
       0,     0,  1734,  1735,     0,     0,  1736,  1737,  1738,  1739,
       0,     0,     0,  1740,   505,   506,   507,   508,   509,   510,
     511,     0,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   993,     0,     0,  1741,  1742,  1743,  1744,  1745,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1622,  1623,  1624,  1625,  1626,  1627,     0,
    1628,     0,  1629,     0,     0,     0,  1630,  1631,  1632,     0,
    1633,     0,     0,     0,     0,     0,  1634,  1635,  1636,  1637,
    1638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1639,     0,     0,  1746,  1747,  1748,  1749,  1750,     0,  1751,
    1640,  1641,     0,     0,  1642,     0,     0,     0,     0,  1643,
    1644,  1645,  1646,  1647,     0,     0,  1648,     0,  1649,  1650,
    1651,     0,     0,  1652,  1653,     0,  1654,  1655,  1656,     0,
       0,     0,  1657,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1658,     0,     0,     0,
       0,  1659,     0,     0,     0,     0,  1660,  1661,  1662,     0,
       0,     0,     0,  1663,  1664,     0,  1665,  1666,  1667,  1668,
       0,     0,  1669,     0,  2050,  1671,  1672,  1673,     0,  1674,
       0,  1675,  1676,     0,  1677,     0,  1678,  1679,     0,  1680,
    1681,  1682,  1683,     0,     0,     0,     0,     0,  1684,     0,
    1685,     0,  1686,  1687,     0,  1688,  1689,  1690,  1691,  1692,
    1693,     0,  1694,  1695,  1696,  1697,  1698,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1699,     0,  1700,
       0,  1701,     0,     0,     0,     0,     0,     0,     0,     0,
    1702,     0,  1703,  1704,  1705,  1706,  1707,  1708,  1709,     0,
       0,  1710,  1711,     0,     0,     0,     0,  1712,     0,  1713,
    1714,  1715,     0,  1716,     0,  1717,     0,  1718,  1719,  1720,
    1721,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1722,
    1723,  1724,     0,     0,     0,     0,     0,     0,     0,  1725,
       0,  1726,  1727,  1728,     0,     0,     0,     0,  1729,     0,
    1730,  1731,  1732,     0,     0,     0,  1733,     0,     0,     0,
    1734,  1735,     0,     0,  1736,  1737,  1738,  1739,     0,     0,
       0,  1740,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   994,
       0,     0,  1741,  1742,  1743,  1744,  1745,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1622,  1623,  1624,  1625,  1626,  1627,     0,  1628,     0,
    1629,     0,     0,     0,  1630,  1631,  1632,     0,  1633,     0,
       0,     0,     0,     0,  1634,  1635,  1636,  1637,  1638,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1639,     0,
       0,  1746,  1747,  1748,  1749,  1750,     0,  1751,  1640,  1641,
       0,     0,  1642,     0,     0,     0,     0,  1643,  1644,  1645,
    1646,  1647,     0,     0,  1648,     0,  1649,  1650,  1651,     0,
       0,  1652,  1653,     0,  1654,  1655,  1656,     0,     0,     0,
    1657,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,     0,     0,     0,  1659,
       0,     0,     0,     0,  1660,  1661,  1662,     0,     0,     0,
       0,  1663,  1664,     0,  1665,  1666,  1667,  1668,     0,     0,
    1669,     0,  2051,  1671,  1672,  1673,     0,  1674,     0,  1675,
    1676,     0,  1677,     0,  1678,  1679,     0,  1680,  1681,  1682,
    1683,     0,     0,     0,     0,     0,  1684,     0,  1685,     0,
    1686,  1687,     0,  1688,  1689,  1690,  1691,  1692,  1693,     0,
    1694,  1695,  1696,  1697,  1698,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1699,     0,  1700,     0,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,  1702,     0,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,     0,     0,  1710,
    1711,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
       0,  1716,     0,  1717,     0,  1718,  1719,  1720,  1721,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1722,  1723,  1724,
       0,     0,     0,     0,     0,     0,     0,  1725,     0,  1726,
    1727,  1728,     0,     0,     0,     0,  1729,     0,  1730,  1731,
    1732,     0,     0,     0,  1733,     0,     0,     0,  1734,  1735,
       0,     0,  1736,  1737,  1738,  1739,     0,     0,     0,  1740,
     505,   506,   507,   508,   509,   510,   511,     0,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   995,     0,     0,
    1741,  1742,  1743,  1744,  1745,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1622,
    1623,  1624,  1625,  1626,  1627,     0,  1628,     0,  1629,     0,
       0,     0,  1630,  1631,  1632,     0,  1633,     0,     0,     0,
       0,     0,  1634,  1635,  1636,  1637,  1638,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1639,     0,     0,  1746,
    1747,  1748,  1749,  1750,     0,  1751,  1640,  1641,     0,     0,
    1642,     0,     0,     0,     0,  1643,  1644,  1645,  1646,  1647,
       0,     0,  1648,     0,  1649,  1650,  1651,     0,     0,  1652,
    1653,     0,  1654,  1655,  1656,     0,     0,     0,  1657,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1658,     0,     0,     0,     0,  1659,     0,     0,
       0,     0,  1660,  1661,  1662,     0,     0,     0,     0,  1663,
    1664,     0,  1665,  1666,  1667,  1668,     0,     0,  1669,     0,
    2052,  1671,  1672,  1673,     0,  1674,     0,  1675,  1676,     0,
    1677,     0,  1678,  1679,     0,  1680,  1681,  1682,  1683,     0,
       0,     0,     0,     0,  1684,     0,  1685,     0,  1686,  1687,
       0,  1688,  1689,  1690,  1691,  1692,  1693,     0,  1694,  1695,
    1696,  1697,  1698,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1699,     0,  1700,     0,  1701,     0,     0,
       0,     0,     0,     0,     0,     0,  1702,     0,  1703,  1704,
    1705,  1706,  1707,  1708,  1709,     0,     0,  1710,  1711,     0,
       0,     0,     0,  1712,     0,  1713,  1714,  1715,     0,  1716,
       0,  1717,     0,  1718,  1719,  1720,  1721,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1722,  1723,  1724,     0,     0,
       0,     0,     0,     0,     0,  1725,     0,  1726,  1727,  1728,
       0,     0,     0,     0,  1729,     0,  1730,  1731,  1732,     0,
       0,     0,  1733,     0,     0,     0,  1734,  1735,     0,     0,
    1736,  1737,  1738,  1739,     0,     0,     0,  1740,   505,   506,
     507,   508,   509,   510,   511,     0,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   996,     0,     0,  1741,  1742,
    1743,  1744,  1745,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1622,  1623,  1624,
    1625,  1626,  1627,     0,  1628,     0,  1629,     0,     0,     0,
    1630,  1631,  1632,     0,  1633,     0,     0,     0,     0,     0,
    1634,  1635,  1636,  1637,  1638,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1639,     0,     0,  1746,  1747,  1748,
    1749,  1750,     0,  1751,  1640,  1641,     0,     0,  1642,     0,
       0,     0,     0,  1643,  1644,  1645,  1646,  1647,     0,     0,
    1648,     0,  1649,  1650,  1651,     0,     0,  1652,  1653,     0,
    1654,  1655,  1656,     0,     0,     0,  1657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1658,     0,     0,     0,     0,  1659,     0,     0,     0,     0,
    1660,  1661,  1662,     0,     0,     0,     0,  1663,  1664,     0,
    1665,  1666,  1667,  1668,     0,     0,  1669,     0,  2053,  1671,
    1672,  1673,     0,  1674,     0,  1675,  1676,     0,  1677,     0,
    1678,  1679,     0,  1680,  1681,  1682,  1683,     0,     0,     0,
       0,     0,  1684,     0,  1685,     0,  1686,  1687,     0,  1688,
    1689,  1690,  1691,  1692,  1693,     0,  1694,  1695,  1696,  1697,
    1698,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1699,     0,  1700,     0,  1701,     0,     0,     0,     0,
       0,     0,     0,     0,  1702,     0,  1703,  1704,  1705,  1706,
    1707,  1708,  1709,     0,     0,  1710,  1711,     0,     0,     0,
       0,  1712,     0,  1713,  1714,  1715,     0,  1716,     0,  1717,
       0,  1718,  1719,  1720,  1721,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1722,  1723,  1724,     0,     0,     0,     0,
       0,     0,     0,  1725,     0,  1726,  1727,  1728,     0,     0,
       0,     0,  1729,     0,  1730,  1731,  1732,     0,     0,     0,
    1733,     0,     0,     0,  1734,  1735,     0,     0,  1736,  1737,
    1738,  1739,     0,     0,     0,  1740,   505,   506,   507,   508,
     509,   510,   511,     0,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   998,     0,     0,  1741,  1742,  1743,  1744,
    1745,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1622,  1623,  1624,  1625,  1626,
    1627,     0,  1628,     0,  1629,     0,     0,     0,  1630,  1631,
    1632,     0,  1633,     0,     0,     0,     0,     0,  1634,  1635,
    1636,  1637,  1638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1639,     0,     0,  1746,  1747,  1748,  1749,  1750,
       0,  1751,  1640,  1641,     0,     0,  1642,     0,     0,     0,
       0,  1643,  1644,  1645,  1646,  1647,     0,     0,  1648,     0,
    1649,  1650,  1651,     0,     0,  1652,  1653,     0,  1654,  1655,
    1656,     0,     0,     0,  1657,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1658,     0,
       0,     0,     0,  1659,     0,     0,     0,     0,  1660,  1661,
    1662,     0,     0,     0,     0,  1663,  1664,     0,  1665,  1666,
    1667,  1668,     0,     0,  1669,     0,  2133,  1671,  1672,  1673,
       0,  1674,     0,  1675,  1676,     0,  1677,     0,  1678,  1679,
       0,  1680,  1681,  1682,  1683,     0,     0,     0,     0,     0,
    1684,     0,  1685,     0,  1686,  1687,     0,  1688,  1689,  1690,
    1691,  1692,  1693,     0,  1694,  1695,  1696,  1697,  1698,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1699,
       0,  1700,     0,  1701,     0,     0,     0,     0,     0,     0,
       0,     0,  1702,     0,  1703,  1704,  1705,  1706,  1707,  1708,
    1709,     0,     0,  1710,  1711,     0,     0,     0,     0,  1712,
       0,  1713,  1714,  1715,     0,  1716,     0,  1717,     0,  1718,
    1719,  1720,  1721,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1722,  1723,  1724,     0,     0,     0,     0,     0,     0,
       0,  1725,     0,  1726,  1727,  1728,     0,     0,     0,     0,
    1729,     0,  1730,  1731,  1732,     0,     0,     0,  1733,     0,
       0,     0,  1734,  1735,     0,     0,  1736,  1737,  1738,  1739,
       0,     0,     0,  1740,   505,   506,   507,   508,   509,   510,
     511,     0,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   999,     0,     0,  1741,  1742,  1743,  1744,  1745,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1622,  1623,  1624,  1625,  1626,  1627,     0,
    1628,     0,  1629,     0,     0,     0,  1630,  1631,  1632,     0,
    1633,     0,     0,     0,     0,     0,  1634,  1635,  1636,  1637,
    1638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1639,     0,     0,  1746,  1747,  1748,  1749,  1750,     0,  1751,
    1640,  1641,     0,     0,  1642,     0,     0,     0,     0,  1643,
    1644,  1645,  1646,  1647,     0,     0,  1648,     0,  1649,  1650,
    1651,     0,     0,  1652,  1653,     0,  1654,  1655,  1656,     0,
       0,     0,  1657,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1658,     0,     0,     0,
       0,  1659,     0,     0,     0,     0,  1660,  1661,  1662,     0,
       0,     0,     0,  1663,  1664,     0,  1665,  1666,  1667,  1668,
       0,     0,  1669,     0,  2134,  1671,  1672,  1673,     0,  1674,
       0,  1675,  1676,     0,  1677,     0,  1678,  1679,     0,  1680,
    1681,  1682,  1683,     0,     0,     0,     0,     0,  1684,     0,
    1685,     0,  1686,  1687,     0,  1688,  1689,  1690,  1691,  1692,
    1693,     0,  1694,  1695,  1696,  1697,  1698,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1699,     0,  1700,
       0,  1701,     0,     0,     0,     0,     0,     0,     0,     0,
    1702,     0,  1703,  1704,  1705,  1706,  1707,  1708,  1709,     0,
       0,  1710,  1711,     0,     0,     0,     0,  1712,     0,  1713,
    1714,  1715,     0,  1716,     0,  1717,     0,  1718,  1719,  1720,
    1721,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1722,
    1723,  1724,     0,     0,     0,     0,     0,     0,     0,  1725,
       0,  1726,  1727,  1728,     0,     0,     0,     0,  1729,     0,
    1730,  1731,  1732,     0,     0,     0,  1733,     0,     0,     0,
    1734,  1735,     0,     0,  1736,  1737,  1738,  1739,     0,     0,
       0,  1740,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1000,
       0,     0,  1741,  1742,  1743,  1744,  1745,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1622,  1623,  1624,  1625,  1626,  1627,     0,  1628,     0,
    1629,     0,     0,     0,  1630,  1631,  1632,     0,  1633,     0,
       0,     0,     0,     0,  1634,  1635,  1636,  1637,  1638,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1639,     0,
       0,  1746,  1747,  1748,  1749,  1750,     0,  1751,  1640,  1641,
       0,     0,  1642,     0,     0,     0,     0,  1643,  1644,  1645,
    1646,  1647,     0,     0,  1648,     0,  1649,  1650,  1651,     0,
       0,  1652,  1653,     0,  1654,  1655,  1656,     0,     0,     0,
    1657,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,     0,     0,     0,  1659,
       0,     0,     0,     0,  1660,  1661,  1662,     0,     0,     0,
       0,  1663,  1664,     0,  1665,  1666,  1667,  1668,     0,     0,
    1669,     0,  2199,  1671,  1672,  1673,     0,  1674,     0,  1675,
    1676,     0,  1677,     0,  1678,  1679,     0,  1680,  1681,  1682,
    1683,     0,     0,     0,     0,     0,  1684,     0,  1685,     0,
    1686,  1687,     0,  1688,  1689,  1690,  1691,  1692,  1693,     0,
    1694,  1695,  1696,  1697,  1698,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1699,     0,  1700,     0,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,  1702,     0,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,     0,     0,  1710,
    1711,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
       0,  1716,     0,  1717,     0,  1718,  1719,  1720,  1721,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1722,  1723,  1724,
       0,     0,     0,     0,     0,     0,     0,  1725,     0,  1726,
    1727,  1728,     0,     0,     0,     0,  1729,     0,  1730,  1731,
    1732,     0,     0,     0,  1733,     0,     0,     0,  1734,  1735,
       0,     0,  1736,  1737,  1738,  1739,     0,     0,     0,  1740,
     505,   506,   507,   508,   509,   510,   511,     0,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1006,     0,     0,
    1741,  1742,  1743,  1744,  1745,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1622,
    1623,  1624,  1625,  1626,  1627,     0,  1628,     0,  1629,     0,
       0,     0,  1630,  1631,  1632,     0,  1633,     0,     0,     0,
       0,     0,  1634,  1635,  1636,  1637,  1638,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1639,     0,     0,  1746,
    1747,  1748,  1749,  1750,     0,  1751,  1640,  1641,     0,     0,
    1642,     0,     0,     0,     0,  1643,  1644,  1645,  1646,  1647,
       0,     0,  1648,     0,  1649,  1650,  1651,     0,     0,  1652,
    1653,     0,  1654,  1655,  1656,     0,     0,     0,  1657,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1658,     0,     0,     0,     0,  1659,     0,     0,
       0,     0,  1660,  1661,  1662,     0,     0,     0,     0,  1663,
    1664,     0,  1665,  1666,  1667,  1668,     0,     0,  1669,     0,
    2200,  1671,  1672,  1673,     0,  1674,     0,  1675,  1676,     0,
    1677,     0,  1678,  1679,     0,  1680,  1681,  1682,  1683,     0,
       0,     0,     0,     0,  1684,     0,  1685,     0,  1686,  1687,
       0,  1688,  1689,  1690,  1691,  1692,  1693,     0,  1694,  1695,
    1696,  1697,  1698,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1699,     0,  1700,     0,  1701,     0,     0,
       0,     0,     0,     0,     0,     0,  1702,     0,  1703,  1704,
    1705,  1706,  1707,  1708,  1709,     0,     0,  1710,  1711,     0,
       0,     0,     0,  1712,     0,  1713,  1714,  1715,     0,  1716,
       0,  1717,     0,  1718,  1719,  1720,  1721,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1722,  1723,  1724,     0,     0,
       0,     0,     0,     0,     0,  1725,     0,  1726,  1727,  1728,
       0,     0,     0,     0,  1729,     0,  1730,  1731,  1732,     0,
       0,     0,  1733,     0,     0,     0,  1734,  1735,     0,     0,
    1736,  1737,  1738,  1739,     0,     0,     0,  1740,   505,   506,
     507,   508,   509,   510,   511,     0,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1008,     0,     0,  1741,  1742,
    1743,  1744,  1745,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1622,  1623,  1624,
    1625,  1626,  1627,     0,  1628,     0,  1629,     0,     0,     0,
    1630,  1631,  1632,     0,  1633,     0,     0,     0,     0,     0,
    1634,  1635,  1636,  1637,  1638,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1639,     0,     0,  1746,  1747,  1748,
    1749,  1750,     0,  1751,  1640,  1641,     0,     0,  1642,     0,
       0,     0,     0,  1643,  1644,  1645,  1646,  1647,     0,     0,
    1648,     0,  1649,  1650,  1651,     0,     0,  1652,  1653,     0,
    1654,  1655,  1656,     0,     0,     0,  1657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1658,     0,     0,     0,     0,  1659,     0,     0,     0,     0,
    1660,  1661,  1662,     0,     0,     0,     0,  1663,  1664,     0,
    1665,  1666,  1667,  1668,     0,     0,  1669,     0,  2234,  1671,
    1672,  1673,     0,  1674,     0,  1675,  1676,     0,  1677,     0,
    1678,  1679,     0,  1680,  1681,  1682,  1683,     0,     0,     0,
       0,     0,  1684,     0,  1685,     0,  1686,  1687,     0,  1688,
    1689,  1690,  1691,  1692,  1693,     0,  1694,  1695,  1696,  1697,
    1698,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1699,     0,  1700,     0,  1701,     0,     0,     0,     0,
       0,     0,     0,     0,  1702,     0,  1703,  1704,  1705,  1706,
    1707,  1708,  1709,     0,     0,  1710,  1711,     0,     0,     0,
       0,  1712,     0,  1713,  1714,  1715,     0,  1716,     0,  1717,
       0,  1718,  1719,  1720,  1721,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
       0,     0,     0,  1722,  1723,  1724,     0,     0,   172,   173,
       0,     0,     0,  1725,     0,  1726,  1727,  1728,   174,   175,
       0,     0,  1729,     0,  1730,  1731,  1732,     0,     0,     0,
    1733,   176,     0,     0,  1734,  1735,     0,     0,  1736,  1737,
    1738,  1739,     0,     0,     0,  1740,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,  1013,     0,     0,  1741,  1742,  1743,  1744,
    1745,     0,     0,     0,     0,     0,     0,   182,     0,     0,
       0,   183,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1746,  1747,  1748,  1749,  1750,
       0,  1751,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,   505,   506,   507,
     508,   509,   510,   511,   186,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,   189,   190,     0,     0,     0,   191,
       0,   507,   508,   509,   510,   511,     0,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   192,   529,     0,     0,     0,     0,
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
     292,   293,     0,     0,   294,   166,   167,   168,   169,   170,
     171,     0,     0,     0,     0,     0,     0,     0,     0,   172,
     173,     0,   505,   506,   507,   508,   509,   510,   511,   174,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   693,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,     0,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,     0,
     505,   506,   507,   508,   509,   510,   511,  1014,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,     0,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     694,   529,  1015,     0,     0,   185,     0,     0,   505,   506,
     507,   508,   509,   510,   511,   186,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
     505,   506,   507,   508,   509,   510,   511,   187,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   695,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,     0,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   280,   281,   282,     0,     0,
       0,     0,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,     0,     0,   294,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     0,     0,  1016,     0,     0,
     172,   173,     0,     0,     0,     0,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   811,     0,     0,     0,     0,     0,     0,
     812,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,     0,     0,     0,     0,
     178,     0,     0,   179,   180,     0,     0,     0,     0,     0,
       0,     0,   181,     0,     0,  1028,     0,   505,   506,   507,
     508,   509,   510,   511,     0,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,  1029,   529,     0,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
    1030,   529,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,  1032,     0,     0,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1043,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,   813,   505,   506,   507,   508,
     509,   510,   511,     0,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   280,   281,   282,     0,
       0,     0,     0,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,     0,     0,   814,   166,   167,   168,
     169,   170,   171,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,     0,   505,   506,   507,   508,   509,   510,
     511,   174,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,   505,   506,   507,   508,   509,   510,   511,     0,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   177,   529,     0,     0,
       0,   178,     0,     0,   179,   180,     0,     0,     0,     0,
       0,     0,  1052,   181,     0,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
    1053,   529,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,  1054,   529,   505,
     506,   507,   508,   509,   510,   511,     0,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
     505,   506,   507,   508,   509,   510,   511,   186,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,  1055,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,     0,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,     0,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   280,   281,   282,
       0,     0,     0,     0,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,     0,     0,   294,   166,   167,
     168,   169,   170,   171,     0,     0,     0,     0,     0,  1056,
       0,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,     0,   174,   734,     0,     0,     0,     0,     0,   505,
     506,   507,   508,   509,   510,   511,  1057,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,     0,     0,
       0,     0,   178,     0,     0,   179,   180,     0,     0,     0,
    1058,     0,     0,     0,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     505,   506,   507,   508,   509,   510,   511,  1059,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,  1065,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1069,     0,     0,   185,     0,
       0,   505,   506,   507,   508,   509,   510,   511,   186,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1070,     0,     0,
     187,   505,   506,   507,   508,   509,   510,   511,     0,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   280,   281,
     282,     0,     0,     0,     0,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,     0,     0,   294,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,   174,  1071,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,   505,   506,
     507,   508,   509,   510,   511,  1072,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,  1073,     0,     0,   505,   506,   507,   508,   509,
     510,   511,   982,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1237,     0,     0,   185,
       0,     0,   505,   506,   507,   508,   509,   510,   511,   186,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,  1480,     0,     0,     0,
       0,   187,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
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
     287,   288,   289,   290,   291,   292,   293,     0,     0,   294,
     166,   167,   168,   169,   170,   171,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   173,     0,     0,     0,     0,
    1481,     0,     0,     0,   174,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,   178,     0,     0,   179,   180,     0,
       0,     0,     0,  1492,     0,     0,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1453,     0,     0,   505,   506,   507,   508,   509,   510,   511,
    1502,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,     0,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1518,     0,     0,
     185,     0,     0,   505,   506,   507,   508,   509,   510,   511,
     186,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,     0,     0,     0,     0,  1519,     0,     0,
       0,     0,   187,   505,   506,   507,   508,   509,   510,   511,
       0,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,     0,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     280,   281,   282,     0,     0,     0,     0,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,     0,     0,
     294,   166,   167,   168,   169,   170,   171,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,     0,     0,     0,
    1520,     0,     0,     0,     0,   174,   505,   506,   507,   508,
     509,   510,   511,     0,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,   178,     0,     0,   179,   180,
     505,   506,   507,   508,   509,   510,   511,   181,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,  1523,     0,
       0,  1458,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1524,     0,     0,     0,     0,
       0,     0,     0,     0,  1017,     0,     0,     0,     0,   505,
     506,   507,   508,   509,   510,   511,  1468,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,  2001,     0,
       0,   185,     0,     0,   505,   506,   507,   508,   509,   510,
     511,   186,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,  1018,     0,     0,
       0,     0,     0,   187,   505,   506,   507,   508,   509,   510,
     511,     0,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,     0,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,     0,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   280,   281,   282,     0,     0,     0,     0,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,     0,
       0,   294,   166,   167,   168,   169,   170,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,     0,     0,
    1469,     0,     0,     0,     0,     0,   174,   505,   506,   507,
     508,   509,   510,   511,     0,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,   795,     0,   178,     0,     0,   179,
     180,   505,   506,   507,   508,   509,   510,   511,   181,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,  1958,   505,   506,   507,   508,   509,   510,   511,
       0,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,   981,   505,   506,   507,   508,   509,   510,
     511,     0,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,   185,     0,     0,   505,   506,   507,   508,   509,
     510,   511,   186,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,     0,   187,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     0,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,   280,   281,   282,     0,     0,     0,     0,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
       0,     0,   294,   166,   167,   168,   169,   170,   171,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,     0,
       0,   989,     0,     0,     0,     0,     0,   174,   505,   506,
     507,   508,   509,   510,   511,     0,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,   990,     0,   178,     0,     0,
     179,   180,   505,   506,   507,   508,   509,   510,   511,   181,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   991,   529,     0,
       0,     0,     0,  1960,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,   506,   507,   508,   509,   510,   511,   992,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   997,
       0,     0,     0,   185,     0,     0,   505,   506,   507,   508,
     509,   510,   511,   186,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,  1001,
       0,     0,     0,     0,     0,   187,   505,   506,   507,   508,
     509,   510,   511,     0,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     0,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   280,   281,   282,     0,     0,     0,     0,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,     0,     0,   294,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,  1002,     0,     0,     0,     0,     0,   174,   505,
     506,   507,   508,   509,   510,   511,     0,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,  1003,     0,   178,     0,
       0,   179,   180,   505,   506,   507,   508,   509,   510,   511,
     181,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,   505,   506,
     507,   508,   509,   510,   511,  1007,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
    1009,     0,     0,     0,   185,     0,     0,   505,   506,   507,
     508,   509,   510,   511,   186,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
    1010,     0,     0,     0,     0,     0,   187,   505,   506,   507,
     508,   509,   510,   511,     0,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
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
     292,   293,     0,     0,   294,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   505,   506,   507,   508,
     509,   510,   511,  1011,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,   505,   506,   507,   508,   509,   510,   511,
       0,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,  1020,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,   505,   506,   507,   508,   509,
     510,   511,  1021,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,   505,   506,   507,   508,   509,   510,   511,  1022,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   505,   506,   507,   508,   509,   510,
     511,  1023,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   505,   506,   507,   508,   509,   510,
     511,  1024,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,   505,   506,   507,   508,   509,   510,   511,     0,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,   505,   506,
     507,   508,   509,   510,   511,     0,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,   505,   506,   507,   508,   509,
     510,   511,     0,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,   505,   506,   507,   508,   509,   510,   511,     0,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,   505,
     506,   507,   508,   509,   510,   511,     0,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   505,   506,   507,   508,   509,   510,   511,
    1025,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,  1026,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,  1027,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,   505,   506,   507,   508,   509,   510,   511,  1031,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,   505,
     506,   507,   508,   509,   510,   511,  1044,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,   506,   507,   508,   509,   510,   511,  1045,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,   506,   507,   508,   509,   510,   511,  1046,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,   505,   506,
     507,   508,   509,   510,   511,  1047,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,   505,   506,   507,   508,   509,
     510,   511,  1048,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,   505,   506,   507,   508,   509,   510,   511,  1049,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,   505,
     506,   507,   508,   509,   510,   511,  1050,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,   505,   506,   507,   508,
     509,   510,   511,  1051,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     505,   506,   507,   508,   509,   510,   511,  1062,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,  1063,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,   505,   506,   507,   508,   509,   510,
     511,  1064,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,   505,
     506,   507,   508,   509,   510,   511,  1068,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,   505,   506,   507,   508,
     509,   510,   511,  1074,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,   506,
     507,   508,   509,   510,   511,  1075,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,   506,
     507,   508,   509,   510,   511,  1076,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,   505,   506,   507,   508,   509,
     510,   511,  1100,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,   505,   506,   507,   508,   509,   510,   511,  1472,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,   505,
     506,   507,   508,   509,   510,   511,  1477,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,   505,   506,   507,   508,
     509,   510,   511,  1478,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,   505,   506,   507,   508,   509,   510,   511,
    1479,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   505,   506,   507,
     508,   509,   510,   511,  1482,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,   505,   506,   507,   508,   509,   510,
     511,  1483,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,   505,   506,   507,   508,   509,   510,   511,  1484,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,   505,   506,   507,   508,
     509,   510,   511,  1485,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,   505,   506,   507,   508,   509,   510,   511,
    1486,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   505,   506,   507,   508,   509,
     510,   511,  1487,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   505,   506,   507,   508,   509,
     510,   511,  1490,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,   505,   506,   507,   508,   509,   510,   511,  1491,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,   505,
     506,   507,   508,   509,   510,   511,  1503,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,   505,   506,   507,   508,
     509,   510,   511,  1504,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,   505,   506,   507,   508,   509,   510,   511,
    1517,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,  1521,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   505,   506,   507,   508,   509,   510,
     511,  1522,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,   505,   506,   507,   508,   509,   510,   511,  1531,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,   505,   506,
     507,   508,   509,   510,   511,  1532,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,   505,   506,   507,   508,   509,   510,   511,
    1533,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,  1534,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   505,   506,   507,   508,   509,   510,   511,  1535,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   505,   506,   507,   508,   509,   510,   511,  1536,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,   505,
     506,   507,   508,   509,   510,   511,  1606,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,   505,   506,   507,   508,
     509,   510,   511,  1808,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,   505,   506,   507,   508,   509,   510,   511,
    1874,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,  1935,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,  1966,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,   506,   507,   508,   509,   510,   511,  1967,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,   505,   506,
     507,   508,   509,   510,   511,  1968,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,   505,   506,   507,   508,   509,
     510,   511,  1969,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
     505,   506,   507,   508,   509,   510,   511,  1970,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,  1979,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   505,
     506,   507,   508,   509,   510,   511,  1996,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   505,
     506,   507,   508,   509,   510,   511,  1997,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,   505,   506,   507,   508,
     509,   510,   511,  1998,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,     0,   529,   505,   506,   507,   508,   509,   510,   511,
    1999,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     505,   506,   507,   508,   509,   510,   511,  2000,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,   505,   506,   507,
     508,   509,   510,   511,  2002,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,   529,   505,   506,   507,   508,   509,   510,
     511,  2003,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,   506,
     507,   508,   509,   510,   511,  2026,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,     0,   529,     0,     0,     0,     0,     0,
       0,     0,  2032,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1809,  1810,
       0,     0,     0,  1811,     0,  1812,     0,     0,     0,  2036,
     505,   506,   507,   508,   509,   510,   511,     0,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,  1813,  1814,
       0,  1815,     0,     0,  2041,     0,   505,   506,   507,   508,
     509,   510,   511,     0,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,  2143,   529,  1346,     0,     0,     0,     0,     0,  1346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     2,  1347,     0,     0,     0,     0,     0,
       0,     0,     0,  1348,     0,     0,  1349,     0,  1350,  1348,
       0,  1351,  1349,  2149,  1350,     0,     0,  1351,     0,     0,
       3,     0,     0,     0,     0,     4,  1352,     0,     0,     0,
       0,     0,  1352,  1353,  1354,     0,     0,     0,     5,  1353,
    1354,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2173,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,  1355,     0,
       0,     0,  1816,  1817,  1355,     0,   593,   594,     0,   595,
    2186,   596,   597,     0,     0,  1356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   598,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2196,     0,     8,
       0,     0,     0,   398,     0,     0,     0,     0,     0,  1357,
       9,    10,    11,     0,     0,  1357,     0,     0,     0,   599,
     600,   601,   602,     0,  2197,     0,     0,     0,   603,     0,
       0,     0,     0,     0,     0,     0,     0,   604,  1358,     0,
       0,     0,     0,   970,  1358,     0,  1359,     0,    12,     0,
      13,  2235,  1359,     0,     0,     0,     0,   605,    14,     0,
       0,     0,     0,     0,     0,   606,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1235,
     607,     0,    15,    16,     0,     0,     0,   608,     0,     0,
     609,     0,     0,   610,   611,     0,     0,    17,     0,     0,
      18,     0,     0,     0,     0,     0,  1360,     0,     0,    19,
     612,     0,  1360,   505,   506,   507,   508,   509,   510,   511,
       0,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,     0,   529,
       0,     0,     0,     0,   613,   614,     0,     0,   615,   616,
       0,     0,     0,     0,   617,     0,   618,     0,     0,     0,
       0,   619,   620,     0,     0,     0,     0,   621,     0,   622,
       0,     0,     0,     0,     0,   623,     0,   624,   625,     0,
       0,     0,     0,   626,   505,   506,   507,   508,   509,   510,
     511,     0,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
     529,   505,   506,   507,   508,   509,   510,   511,     0,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,  1243,
     505,   506,   507,   508,   509,   510,   511,     0,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1787,
       0,     0,     0,     0,   504,     0,     0,     0,     0,     0,
       0,   505,   506,   507,   508,   509,   510,   511,  1234,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,     0,   529,     0,     0,
       0,     0,     0,     0,     0,  1464,     0,     0,     0,     0,
       0,     0,   530,     0,     0,   505,   506,   507,   508,   509,
     510,   511,  1788,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529,     0,     0,     0,     0,     0,     0,     0,   505,
     506,   507,   508,   509,   510,   511,  1012,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,     0,   529,     0,     0,     0,     0,
       0,     0,   505,   506,   507,   508,   509,   510,   511,  1085,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,     0,   529,     0,
       0,     0,     0,     0,     0,   505,   506,   507,   508,   509,
     510,   511,  1305,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
       0,   529
};

static const yytype_int16 yycheck[] =
{
      96,  1104,  1328,   311,  1160,  1447,   305,  1191,   301,   661,
    1120,  1121,   355,  1432,    36,  1430,  1126,   903,   904,  1175,
     843,   154,    49,   909,   154,   911,  1560,    20,     8,   199,
    1186,   968,     5,   199,     4,    20,     3,    36,  1212,    78,
      40,     6,    97,     4,     3,     4,     5,     6,     7,     8,
    1778,   240,     3,    90,    74,     3,   550,     6,    74,     3,
     108,   136,     3,     3,   107,   161,   162,  1772,   305,    18,
     266,    54,    55,   372,   266,     3,   172,   173,   174,   219,
     266,    87,   178,   216,   159,   112,   216,     3,   113,   277,
       3,    74,    71,     3,   136,   134,     3,   197,   274,   204,
      51,   139,    49,     3,     3,     3,   230,   107,   136,   274,
    1831,  1832,   252,  2239,     3,   113,   103,   259,   241,     5,
      98,  1842,  1843,   609,     5,   252,    14,    16,     3,   615,
      18,   617,    67,     3,   258,    18,    71,    85,   280,    20,
     241,    85,  1079,     4,     5,     6,     7,  1562,   271,  2275,
    2276,  1506,  1507,    51,     3,     3,    48,   157,   574,   146,
    1515,  1516,   201,   268,   202,   112,   266,   154,   193,   136,
     271,   149,   192,     3,    84,  2301,   192,    63,  1343,  1344,
     832,     3,     4,     5,     6,     7,     8,   154,    95,   176,
     210,   126,   252,    51,   210,   193,   848,  1362,   294,   395,
     113,   393,    60,   245,   392,   248,   395,   393,   156,   176,
     258,    72,   156,   629,   269,   965,   156,   967,   351,   395,
     240,   258,   261,   184,   240,   395,   167,   210,   193,   395,
     395,   371,   173,   532,   193,  1345,   203,  1393,   217,   167,
     156,   241,  1405,   249,   193,   173,   539,   227,  1404,  1433,
    1971,  1972,  1973,  1974,  1975,  1976,   156,   156,   258,   392,
     393,   150,  1418,   393,  1985,    48,   236,   237,  1989,  1443,
    1804,  1094,  1993,    10,    11,    12,    13,    14,    15,    16,
     172,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   394,    36,
     241,   184,   398,   955,   277,   197,   195,   156,   156,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     395,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   228,   433,   434,   435,
    2068,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,  1773,  1774,
     854,   660,  2067,   459,   460,   392,  1303,   395,   464,   465,
     319,   193,   394,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   394,   492,   493,   494,   392,
     496,   497,   498,   499,   500,   501,   502,   392,  1573,   505,
     506,   507,   508,   509,   197,  1857,    74,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,  1597,   394,   673,   107,   534,   676,
     381,   392,    78,   266,   540,   228,  1609,  1550,   864,   865,
     266,     3,   393,   381,   691,   266,     3,  2178,   874,   351,
    1616,  2182,  1618,     3,    55,   393,  1821,  1822,  1823,  1824,
    1825,  1826,   333,   334,   335,   240,    28,  1227,  1833,  1229,
       3,  1644,  1837,   177,     3,     3,  1841,  1373,   137,  1375,
    1376,   266,  1655,   376,   377,   378,   379,   327,   328,   329,
     330,   277,     3,   277,     3,   921,   922,   923,    87,    28,
    1952,    38,  1675,  2277,    62,  1934,     3,     3,    66,     3,
      99,   215,    71,     3,   133,     5,  1689,  2248,  2249,    71,
    2251,  2252,   393,    51,  1860,  1698,    71,   252,  2302,  2303,
     100,   155,    84,    78,   837,   154,   889,   890,    75,   240,
     164,   200,   210,   252,    51,     0,   135,   124,   125,    87,
     120,    84,   658,   391,   143,   201,   114,  2331,   351,   117,
     393,    99,    71,   100,   107,  1738,    18,   393,   124,   125,
       9,   108,   393,    18,   132,    84,   235,    71,   258,   685,
     686,    20,     3,   120,   690,     3,  1012,  1013,   266,   134,
      84,   697,  1758,   138,   152,   842,   274,   135,  1764,   156,
       3,    78,   160,  1107,   193,   143,  1110,   208,   393,   395,
     155,   395,    76,   393,   157,   261,   392,   393,   393,   164,
      10,    11,    12,    13,    14,    15,    16,   945,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    97,    36,   154,   267,   396,
     187,   216,    97,   242,  1316,   193,   201,   134,   217,   156,
     156,     3,  2114,  1783,    10,    11,    12,    13,    14,    15,
      16,   208,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   153,
      36,   249,   393,   251,    10,   156,  1122,   103,   275,   163,
     806,   807,     3,   809,   242,    39,   394,   395,   814,   216,
       3,    95,   270,   177,   392,   258,   261,   395,   155,   275,
      51,   155,  1895,  2175,   201,    59,   190,  1900,     3,    60,
     246,   183,   269,    51,   241,     3,  1930,  2102,   183,   277,
     146,  2106,    60,  1909,     3,   197,   136,    51,   154,   394,
     395,   215,   197,   159,    18,   139,    60,   252,  1924,     3,
    1926,    13,    14,     3,    16,  2190,   171,    19,   394,   395,
     176,   155,    36,   103,   238,    45,    46,   103,   103,    95,
     395,  2117,  1100,  1092,   261,     3,   102,    10,    11,    12,
      13,    14,    15,    16,  2246,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   918,    36,    78,     3,   146,   395,   202,     3,
     146,   146,   138,   139,   154,   223,   224,     3,   154,   154,
      32,    33,    34,  1080,    36,   219,    51,   221,   281,   155,
     394,   395,  1089,   227,    33,    34,   176,    36,     3,   113,
     176,   176,   394,   395,     3,   393,    82,    83,  2223,  2224,
     197,  2226,  2227,   393,   970,  2038,   972,   281,   252,   394,
     395,   394,   395,   979,   980,   393,   982,   394,   395,     3,
     986,  2054,   394,   395,   394,   395,   202,   993,   994,   995,
     996,   197,   998,   999,  1000,  2061,  2009,     4,     5,  1005,
    1006,     3,  1008,   219,   393,   221,   394,   395,  1014,  1015,
    1016,   227,    28,    29,    30,    31,    32,    33,    34,   392,
      36,     3,  1028,  1029,  1030,   281,  1032,   394,   395,     3,
     246,   247,   394,   395,   394,   395,   281,  1043,   394,   395,
     394,   395,     4,     5,   197,   261,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,   281,  1061,  1203,   281,  2131,  1065,
     281,  1067,   281,  1069,  1070,  1071,  1072,  1073,   596,   597,
     598,   599,   281,   601,   394,   395,   604,   605,   606,  1085,
     245,  1087,  1088,   611,   612,   613,     4,   371,   616,   896,
     897,     3,   899,   900,   901,  1101,    57,    58,   905,   906,
     907,     8,  1108,   910,     9,   395,   394,   395,   393,  1435,
     392,   394,   395,    10,    11,    12,    13,    14,    15,    16,
      36,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   393,    36,
     394,   395,   394,   395,   394,   395,   394,   395,   394,   395,
     394,   395,  1158,   394,   395,   371,   395,  1304,   394,   395,
    1307,   393,  1309,     3,  1311,    10,    11,    12,    13,    14,
      15,    16,    53,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     393,    36,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   393,    36,
     393,  1217,   394,   395,  1220,   394,   395,   394,   395,   393,
    1226,   394,   395,   394,   395,   394,   395,   394,   395,  1235,
     393,  1237,   394,   395,   394,   395,   393,  1243,  1244,   393,
      10,    11,    12,    13,    14,    15,    16,   393,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   393,    36,   394,   395,   394,
     395,   394,   395,   393,    10,    11,    12,    13,    14,    15,
      16,   393,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  1305,
      36,    11,    12,    13,    14,    15,    16,   393,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,  1331,    36,   394,   395,   394,
     395,   394,   395,  1339,    10,    11,    12,    13,    14,    15,
      16,   393,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   393,
      36,   394,   395,   394,   395,    10,    11,    12,    13,    14,
      15,    16,   393,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     393,    36,    10,    11,    12,    13,    14,    15,    16,   393,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   393,    36,  1425,
      10,    11,    12,    13,    14,    15,    16,   393,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   181,    36,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,  1468,    36,   393,  1471,   394,   395,   394,   395,
     394,   395,   394,   395,  1480,  1481,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,  1492,    36,   394,   395,
     394,   395,   394,   395,   393,  1501,  1502,   394,   395,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     393,    36,  1518,  1519,  1520,   394,   395,  1523,  1524,   393,
    1526,   393,  1528,   393,  1530,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   393,
      36,   393,  1548,  1549,    57,    58,   392,   393,    51,   394,
     395,  1557,  1558,     3,     4,     5,     6,     7,     8,   393,
      10,   393,    12,   394,   395,   393,    16,    17,    18,   393,
      20,  1577,   392,   393,   393,  1581,    26,    27,    28,    29,
      30,   394,   395,   394,   395,  1591,   394,   395,   394,   395,
      40,   394,   395,   850,   851,   393,  1096,  1097,   393,  1605,
      50,    51,   393,   393,    54,   393,   393,   393,   393,    59,
      60,    61,    62,    63,  1554,  1555,    66,   393,    68,    69,
      70,   393,   393,    73,    74,   395,    76,    77,    78,   393,
     393,   393,    82,   393,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    96,    36,   393,   393,
     393,   101,   393,   393,   393,   393,   106,   107,   108,   395,
     393,   393,   393,   113,   114,   393,   116,   117,   118,   119,
     393,   393,   122,   393,   124,   125,   126,   127,   393,   129,
     393,   131,   132,    53,   134,   393,   136,   137,   393,   139,
     140,   141,   142,   393,   393,   393,   393,   393,   148,   393,
     150,   393,   152,   153,   393,   155,   156,   157,   158,   159,
     160,   393,   162,   163,   164,   165,   166,    44,   394,   395,
     393,   393,   393,   393,   393,   393,   393,   177,   393,   179,
     393,   181,   393,   393,   393,   393,   393,   393,   393,   393,
     190,   393,   192,   193,   194,   195,   196,   197,   198,   394,
     395,   201,   202,   393,   393,   393,   393,   207,   393,   209,
     210,   211,   393,   213,   393,   215,     3,   217,   218,   219,
     220,    71,   277,   245,     3,     3,   394,   395,   197,     3,
     197,   281,     3,     3,   197,     3,   281,  1793,  1794,   239,
     240,   241,     3,  1799,    28,  1801,     3,     3,     3,   249,
       3,   251,   252,   253,   394,   395,     3,     3,   258,     3,
     260,   261,   262,     3,     3,     3,   266,     3,     3,    36,
     270,   271,     3,   394,   274,   275,   276,   277,   396,   394,
     394,   281,   394,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   394,    36,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     5,
      36,   394,   322,   323,   324,   325,   326,   394,   394,   394,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   394,    36,   394,   394,   394,
     393,     3,     3,     3,  1920,     3,   394,     3,   163,   196,
       3,     3,   277,    42,     5,  1931,    42,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   245,     3,
       3,   391,   392,   393,   394,   395,     3,   397,     3,     5,
     379,     5,     5,   393,   393,   393,  1962,   393,    64,   393,
     393,   393,   393,     3,     3,    10,    11,    12,    13,    14,
      15,    16,  1978,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    36,     3,   394,     3,  2001,   395,     3,   197,   394,
    2006,    51,   197,     3,   197,   281,     3,   198,     3,  2015,
       3,   394,   394,     3,     4,     5,     6,     7,     8,   241,
      10,   394,    12,  2029,  2030,   350,    16,    17,    18,   350,
      20,   350,   394,   350,   350,   393,    26,    27,    28,    29,
      30,   241,   393,   393,   393,   197,   164,   136,   395,   164,
      40,   164,   163,   163,   197,   197,     3,   222,   222,    36,
      50,    51,     3,   245,    54,   245,     5,     5,     5,    59,
      60,    61,    62,    63,     4,   393,    66,     5,    68,    69,
      70,     5,     5,    73,    74,   193,    76,    77,    78,   393,
     396,   213,    82,   268,   197,     3,     3,   140,     3,     3,
     197,     3,    94,     3,    63,    20,    96,   393,    91,   396,
     394,   101,   199,   161,   179,     4,   106,   107,   108,   350,
     350,   393,   393,   113,   114,   350,   116,   117,   118,   119,
     393,   350,   122,     5,   124,   125,   126,   127,  2144,   129,
     350,   131,   132,     5,   134,   393,   136,   137,   350,   139,
     140,   141,   142,   393,   141,  2161,   241,     3,   148,   140,
     150,   394,   152,   153,     3,   155,   156,   157,   158,   159,
     160,   350,   162,   163,   164,   165,   166,   350,   350,     3,
       3,   393,   164,     3,   164,   393,     3,   177,    78,   179,
     394,   181,     3,   394,    60,   140,   394,     3,   245,   197,
     190,   393,   192,   193,   194,   195,   196,   197,   198,   268,
     394,   201,   202,     3,     3,   164,   394,   207,   395,   209,
     210,   211,   393,   213,   393,   215,   393,   217,   218,   219,
     220,   393,   268,   393,   393,   393,   393,  2243,   164,     3,
       6,     4,     4,     4,   393,   395,   212,   164,     3,   239,
     240,   241,     3,   393,    63,   394,   394,   394,   393,   249,
     393,   251,   252,   253,   394,   395,   393,   393,   258,   393,
     260,   261,   262,   393,   148,   163,   266,   394,     3,   393,
     270,   271,   394,    20,   274,   275,   276,   277,   393,   393,
       3,   281,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   394,    36,     3,
     193,    52,     3,   164,     4,     4,   164,   213,     5,   240,
       4,   393,   322,   323,   324,   325,   326,   395,     3,     3,
       3,     3,   394,     3,   393,   118,   268,   393,     3,   394,
     395,   393,   393,   266,   268,   393,   393,     3,   393,   393,
     393,     3,     4,     5,     6,     7,     8,   393,    10,   393,
      12,   393,   393,   140,    16,    17,    18,   393,    20,   393,
       3,   393,   258,   393,    26,    27,    28,    29,    30,    20,
     395,     4,   197,   351,   350,   350,     3,   393,    40,     3,
     394,   391,   392,   393,   394,   395,   394,   397,    50,    51,
     394,     3,    54,     3,     5,   394,   394,    59,    60,    61,
      62,    63,     3,     5,    66,     5,    68,    69,    70,    51,
     393,    73,    74,   393,    76,    77,    78,   394,     4,   393,
      82,    60,    60,   394,   394,   217,   394,   277,   164,   395,
     393,   395,   268,   393,    96,   164,   271,   393,   393,   101,
     393,   393,     3,    88,   106,   107,   108,    63,   395,   394,
     198,   113,   114,   393,   116,   117,   118,   119,   394,     3,
     122,   393,   124,   125,   126,   127,    20,   129,   394,   131,
     132,   394,   134,   394,   136,   137,   393,   139,   140,   141,
     142,    43,    18,     3,     3,   164,   148,   394,   150,   393,
     152,   153,   393,   155,   156,   157,   158,   159,   160,   394,
     162,   163,   164,   165,   166,   394,     3,    60,    78,   393,
     136,     3,   393,   393,   393,   177,     3,   179,    63,   181,
      63,     3,     3,   393,     3,    63,   394,   394,   190,   394,
     192,   193,   194,   195,   196,   197,   198,   350,   350,   201,
     202,   394,   350,   350,   214,   207,   394,   209,   210,   211,
     140,   213,     3,   215,   269,   217,   218,   219,   220,   207,
     394,     3,     3,    77,    60,     5,     5,   394,   131,   156,
     166,   276,   393,   393,     5,   207,     3,   239,   240,   241,
     395,   204,    20,     3,   101,     3,   159,   249,   394,   251,
     252,   253,   394,   394,   394,   394,   258,   394,   260,   261,
     262,   395,     3,   394,   266,   393,     5,     3,   270,   271,
       3,     3,   274,   275,   276,   277,   393,     3,   394,   281,
      10,    11,    12,    13,    14,    15,    16,   393,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   394,    36,   393,     3,   231,
     394,   394,   394,   393,   393,   231,   394,   395,   393,   393,
     322,   323,   324,   325,   326,    13,    14,    15,    16,   395,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   394,    36,     3,
       4,     5,     6,     7,     8,   207,    10,     3,    12,     3,
       3,    20,    16,    17,    18,     3,    20,     3,   394,   180,
     180,     3,    26,    27,    28,    29,    30,   394,   245,   395,
       3,     3,   394,   394,   240,   394,    40,   229,   393,   391,
     392,   393,   394,   395,   393,   397,    50,    51,   393,     3,
      54,   394,   394,     5,   394,    59,    60,    61,    62,    63,
     394,     3,    66,   228,    68,    69,    70,     5,   394,    73,
      74,     3,    76,    77,    78,   393,   151,    97,    82,   174,
     271,   197,   250,   197,   191,   191,     5,     5,   103,  1088,
    1237,   399,    96,  1551,  1861,  1792,   544,   101,  1335,   985,
     129,   662,   106,   107,   108,   669,   559,   534,  1115,   113,
     114,  2265,   116,   117,   118,   119,    91,   388,   122,   860,
     124,   125,   126,   127,   966,   129,  1445,   131,   132,   675,
     134,  1962,   136,   137,  2307,   139,   140,   141,   142,  1930,
    1422,  1434,   165,  1595,   148,   590,   150,   908,   152,   153,
     364,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   925,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,   322,   323,
     324,   325,   326,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   391,   392,   393,
     394,   395,    -1,   397,    50,    51,    -1,    -1,    54,    -1,
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
      -1,    -1,    -1,   395,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   391,   392,   393,   394,   395,
      -1,   397,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
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
      -1,   395,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   391,   392,   393,   394,   395,    -1,   397,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   391,   392,   393,   394,   395,    -1,   397,    50,    51,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   391,
     392,   393,   394,   395,    -1,   397,    50,    51,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   391,   392,   393,
     394,   395,    -1,   397,    50,    51,    -1,    -1,    54,    -1,
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
      -1,    -1,    -1,   395,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   391,   392,   393,   394,   395,
      -1,   397,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
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
      -1,   395,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   391,   392,   393,   394,   395,    -1,   397,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   391,   392,   393,   394,   395,    -1,   397,    50,    51,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   391,
     392,   393,   394,   395,    -1,   397,    50,    51,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   391,   392,   393,
     394,   395,    -1,   397,    50,    51,    -1,    -1,    54,    -1,
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
      89,    -1,    -1,   395,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,   110,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   391,   392,   393,   394,   395,
      -1,   397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     389,   390,    -1,    -1,   393,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    10,    11,    12,    13,    14,    15,    16,    27,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   395,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     178,    36,   395,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
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
     388,   389,   390,    -1,    -1,   393,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,   395,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   395,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     395,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   395,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   263,    -1,    -1,    -1,
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
     387,   388,   389,   390,    -1,    -1,   393,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    10,    11,    12,    13,    14,    15,
      16,    27,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    72,    36,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    89,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     395,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   395,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   395,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,
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
     386,   387,   388,   389,   390,    -1,    -1,   393,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   395,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
     395,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   395,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   395,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
     225,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
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
     385,   386,   387,   388,   389,   390,    -1,    -1,   393,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   395,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   395,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   136,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,
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
     384,   385,   386,   387,   388,   389,   390,    -1,    -1,   393,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     395,    -1,    -1,    -1,    27,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,   395,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     395,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
      -1,    -1,   225,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
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
     383,   384,   385,   386,   387,   388,   389,   390,    -1,    -1,
     393,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
     395,    -1,    -1,    -1,    -1,    27,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   395,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   140,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,   395,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,   394,    -1,    -1,
      -1,    -1,    -1,   225,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   393,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,    27,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,   394,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   113,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,   394,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,   394,    -1,
      -1,    -1,    -1,    -1,   225,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   393,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,   394,    -1,    -1,    -1,    -1,    -1,    27,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,   394,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   394,    36,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   394,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,    -1,   225,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     390,    -1,    -1,   393,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,    27,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,   394,    -1,    77,    -1,
      -1,    80,    81,    10,    11,    12,    13,    14,    15,    16,
      89,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,   225,    10,    11,    12,
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
     389,   390,    -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   394,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   394,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   394,    18,    19,    20,    21,    22,    23,    24,    25,
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
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   394,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   394,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   394,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   394,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   394,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   394,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   394,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   394,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   394,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   394,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   394,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   394,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   394,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   394,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   394,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   394,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   394,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   394,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   394,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   394,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   394,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     394,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   394,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   394,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   394,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   394,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,   394,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   144,   145,
      -1,   147,    -1,    -1,   394,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   394,    36,    18,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    53,    48,
      -1,    56,    51,   394,    53,    -1,    -1,    56,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    71,    -1,    -1,    -1,
      -1,    -1,    71,    78,    79,    -1,    -1,    -1,    86,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,   278,   279,   113,    -1,    61,    62,    -1,    64,
     394,    66,    67,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,    -1,   157,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,   164,
     168,   169,   170,    -1,    -1,   164,    -1,    -1,    -1,   114,
     115,   116,   117,    -1,   394,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   193,    -1,
      -1,    -1,    -1,   253,   193,    -1,   201,    -1,   206,    -1,
     208,   394,   201,    -1,    -1,    -1,    -1,   152,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,
     175,    -1,   240,   241,    -1,    -1,    -1,   182,    -1,    -1,
     185,    -1,    -1,   188,   189,    -1,    -1,   255,    -1,    -1,
     258,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,   267,
     205,    -1,   261,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,   239,   240,    -1,    -1,   243,   244,
      -1,    -1,    -1,    -1,   249,    -1,   251,    -1,    -1,    -1,
      -1,   256,   257,    -1,    -1,    -1,    -1,   262,    -1,   264,
      -1,    -1,    -1,    -1,    -1,   270,    -1,   272,   273,    -1,
      -1,    -1,    -1,   278,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   136,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   124,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    10,    11,    12,    13,    14,
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
     399,   438,   439,   478,   482,   484,   487,   488,   491,   492,
     493,   494,   495,   497,   500,   507,   508,   510,   526,   527,
     536,   539,   541,   542,   543,   566,   569,   576,   577,   580,
     583,   584,   587,   219,   252,   371,   252,     3,    10,    95,
     102,   138,   139,   155,   202,   219,   221,   227,   246,   247,
     261,   371,   548,     3,   479,    95,   139,   155,   202,   219,
     221,   227,   252,   371,   518,     3,     3,     3,    28,   252,
     252,   518,     8,   227,   567,   568,   457,   252,   518,   537,
       3,    95,     0,   391,   490,     3,     3,     3,     3,   393,
     216,   156,   540,     3,   155,     3,     3,    85,   156,     3,
       3,     3,   540,   246,   155,   540,   252,   528,     3,   136,
     154,   176,   203,   480,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,   156,
     103,   146,   154,   159,   176,   519,   171,   395,     3,     3,
     519,     9,    20,     3,   113,   395,     3,     4,     5,     6,
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
     387,   388,   389,   390,   393,   400,   458,   459,     3,   154,
     176,     3,   167,   173,   381,   393,   461,   462,   463,   464,
     467,   477,     3,   399,    54,    55,    74,   210,   277,   392,
     496,   100,   120,    38,    75,   100,   108,   120,   187,   208,
     269,    55,   208,   585,     3,     4,     5,     6,     7,     8,
     193,   394,   578,   579,   139,   202,   281,     3,    51,     3,
     393,   197,     3,   156,   281,   393,    39,    59,   581,   197,
       3,     3,    85,   156,     3,   540,   393,   529,   392,   481,
       3,   480,   136,   395,   281,   281,   281,   281,   197,   281,
      74,   210,   483,   281,   281,     3,     4,   245,     3,   400,
     400,   568,   392,   393,     9,   400,   400,   400,   275,   400,
     437,   392,   393,    36,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   400,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    36,
      51,   460,   136,   159,   395,   395,   392,   460,   393,     3,
     393,   439,   461,   240,   395,    76,   153,   177,   190,   215,
     238,   468,   470,    51,   466,   466,    53,    53,    44,     3,
     108,   258,   498,    71,    84,     3,    84,    71,   217,     3,
      71,    84,    71,   217,     3,    84,     3,    71,    84,    71,
     277,   245,    18,   184,   376,   377,   378,   379,   586,   394,
     395,     3,     3,    61,    62,    64,    66,    67,    82,   114,
     115,   116,   117,   123,   132,   152,   160,   175,   182,   185,
     188,   189,   205,   239,   240,   243,   244,   249,   251,   256,
     257,   262,   264,   270,   272,   273,   278,   562,   197,     3,
      16,   150,   195,   570,   571,   572,     3,   197,   281,     3,
     570,   107,   157,   258,   582,     3,   197,     3,   156,   281,
     585,     3,     3,   530,   136,   245,   531,    28,   274,   440,
     266,   461,     3,     3,     3,     3,     3,     3,     3,     3,
       3,   240,   393,   520,     3,   240,   520,     3,   400,   405,
     409,   400,   400,   437,   124,   125,   275,     3,     3,   396,
     407,   414,   400,    65,   178,   254,   400,   435,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   394,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   394,   400,   400,   400,   394,   400,   400,
     400,   400,   400,   400,    28,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   394,   394,   394,   394,
     394,   400,   400,   394,   394,   394,   400,   400,     5,   394,
     394,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   394,   400,   400,   400,   394,   400,   400,
     400,   400,   400,   400,   400,   394,   400,   400,   400,   400,
     400,     6,    18,   193,   319,   393,    13,    14,    16,    19,
     400,    40,    47,   232,   393,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,     3,   461,     3,   459,     3,   489,     3,   133,   154,
     267,   474,   465,   460,   400,   394,   394,     3,   538,   462,
     177,   215,   471,   463,   163,   196,   469,     3,     3,     5,
     496,    42,    42,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   562,     3,   245,     3,     3,     3,     5,
       3,   379,     5,     5,   277,     5,    63,     5,   579,   393,
     393,   393,   558,   558,   558,   558,   558,   558,   393,   558,
     558,   558,    64,   559,   559,   558,   558,   558,   393,   559,
     558,   559,   393,   393,   393,    18,    36,    78,   113,     3,
     562,     3,     3,     3,   394,   395,   266,   393,     3,     3,
     197,   394,   197,    51,   501,     3,   197,   281,     3,   154,
     216,   351,   392,   393,   564,   565,   394,   395,     4,   236,
     237,   532,   400,   198,   450,   461,   440,   481,   483,     3,
     525,     3,   521,   271,   439,   525,   271,   439,   395,   394,
     253,   124,   125,   400,   400,   394,   400,   406,   439,   136,
     395,   394,   136,   400,   395,   395,   395,   394,   394,   394,
     394,   394,   394,   395,   395,   395,   395,   394,   395,   395,
     395,   394,   394,   394,   394,   395,   395,   394,   395,   394,
     394,   394,    51,   395,   395,   395,   395,   321,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   395,   395,
     395,   394,   395,   350,   350,   350,   394,   395,   394,   395,
     394,   350,   350,   395,   394,   394,   394,   394,   394,   394,
     394,   394,   395,   395,   395,   395,   395,   395,   395,   395,
     394,   395,   394,   394,   394,   395,   394,   395,   394,   395,
     395,   395,   395,   395,   394,   394,   394,     6,   193,   410,
     412,   400,   400,   393,   400,    50,   393,   393,   393,   401,
     396,   440,   136,   395,   460,   164,   164,   164,   439,   474,
     394,    20,   392,   395,   440,   469,   469,   163,   197,   463,
     163,    45,    46,   498,   197,   197,    78,   134,   201,   261,
     562,   562,     3,   222,   222,   557,   562,     3,   245,   245,
       5,     5,   570,   570,     5,   560,   561,   560,   560,     4,
     563,   560,   560,   560,   561,   561,   560,   560,   560,   563,
     561,   560,   561,     5,     5,     5,   193,   396,   393,   400,
     393,   562,   562,   562,   213,   572,   268,     3,   327,   328,
     329,   330,   485,   486,   266,   393,   197,     3,    51,    60,
       3,   223,   224,   140,   502,   266,   393,     3,     3,   197,
      94,     3,    71,    78,   134,   138,   155,   164,   201,   261,
     549,   550,   556,   466,     3,    87,    99,   135,   143,   193,
     242,   277,   393,   533,   534,   535,    63,   179,   453,   440,
      20,   199,   395,   511,   394,   395,   393,   522,   511,   522,
     511,   405,   400,   400,   124,   253,    91,   395,   396,   394,
     400,   400,   400,   136,   161,   436,   436,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   562,   562,
     400,   400,   400,     4,   350,   350,   350,   350,   350,   350,
     400,   400,   400,   400,   393,   393,   393,   350,     5,   350,
       5,   350,   393,   393,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   405,   439,   411,   413,    50,   400,   404,   400,   402,
     408,   403,   408,   439,   141,   441,   461,     3,   474,   140,
     475,   475,   475,   394,   466,   400,     3,     3,   450,   463,
     400,   197,   266,   472,   473,   463,     3,   499,   499,   393,
     164,   164,   393,   557,   557,   562,    18,    39,    48,    51,
      53,    56,    71,    78,    79,   113,   130,   164,   193,   201,
     261,   509,   557,     3,     3,   394,   394,   394,   395,   259,
     280,    82,    83,   394,   395,   394,   394,   394,   394,    78,
     400,   485,    62,    66,   114,   117,   132,   152,   160,   249,
     251,   270,   573,   393,   393,   393,   393,   393,   394,   395,
     268,   485,     3,   266,   393,    60,   574,   140,    40,   107,
     157,   241,   258,   245,   503,   268,   485,   266,   393,   197,
       3,     3,   393,   564,     3,   393,   164,   155,   164,   393,
     393,   164,   393,   394,   395,     3,   439,     4,    87,   249,
       6,     4,     4,   393,   534,   395,     3,     5,   451,   452,
     400,   212,   588,   113,   400,   164,     3,     3,   113,   400,
     524,   395,   511,   511,   124,   400,   393,   406,   140,   394,
     394,   395,   394,   400,   400,   394,   394,   394,   394,   394,
     395,   395,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   395,   394,   393,   393,   393,   393,   393,   393,
     394,   395,   395,   394,   394,   415,   416,   417,   393,   394,
     395,   393,   394,   395,   393,   433,   434,   394,   395,   395,
     395,   394,   394,   395,   395,   394,   395,   394,   395,   394,
     395,   394,   394,   394,   394,   394,   394,   394,   394,   405,
     439,   400,   439,   439,   394,   439,   394,   394,    63,   148,
     445,   440,   163,   393,   393,   393,     3,    20,    20,   392,
     453,   400,   393,   473,   395,   277,   400,   393,   393,     3,
     555,   509,   509,   557,   193,     3,   393,   393,   393,    52,
       3,   393,     4,     4,     5,     6,     7,    72,   333,   334,
     335,   393,   164,   164,   509,   213,    51,    60,     5,   240,
       4,   561,     4,   561,   561,   393,   394,   394,    51,    60,
     485,     3,     3,     3,     3,     3,   393,   394,   393,   268,
     485,   574,     3,     4,     5,     6,     7,     8,    10,    12,
      16,    17,    18,    20,    26,    27,    28,    29,    30,    40,
      50,    51,    54,    59,    60,    61,    62,    63,    66,    68,
      69,    70,    73,    74,    76,    77,    78,    82,    96,   101,
     106,   107,   108,   113,   114,   116,   117,   118,   119,   122,
     124,   125,   126,   127,   129,   131,   132,   134,   136,   137,
     139,   140,   141,   142,   148,   150,   152,   153,   155,   156,
     157,   158,   159,   160,   162,   163,   164,   165,   166,   177,
     179,   181,   190,   192,   193,   194,   195,   196,   197,   198,
     201,   202,   207,   209,   210,   211,   213,   215,   217,   218,
     219,   220,   239,   240,   241,   249,   251,   252,   253,   258,
     260,   261,   262,   266,   270,   271,   274,   275,   276,   277,
     281,   322,   323,   324,   325,   326,   391,   392,   393,   394,
     395,   397,   575,   118,     3,   504,   266,   505,   393,   394,
     268,   485,     3,   266,   393,   140,   549,    78,   134,   201,
     261,   400,   393,   393,   393,     3,   456,   456,   393,   555,
     545,   564,   550,   562,   534,   394,   535,    49,   112,   392,
     443,   443,   395,   181,   395,     3,    28,   589,   258,    20,
     394,   395,   523,   197,   513,     4,   400,   400,   394,   104,
     105,   109,   111,   144,   145,   147,   278,   279,   400,   400,
     400,   419,   420,   418,   421,   422,   423,   400,   400,   351,
     446,   446,   446,   424,   350,     4,     5,   428,   350,     4,
       5,   432,   446,   446,   400,   400,   400,   400,   400,   400,
     400,   400,   394,   394,   394,   394,   394,   400,   442,   400,
     450,   441,     3,   476,   476,   476,   393,   400,   400,     3,
     588,   456,     3,     5,   394,     3,   552,     3,   551,   394,
     395,   509,     5,   400,     5,    51,    78,   201,   261,   400,
     393,   393,   393,   400,   573,    60,   574,   394,     4,   400,
      60,   574,   394,   394,   394,   394,   395,   485,   485,   393,
     394,   124,   574,   574,   574,   574,   574,   574,   217,   395,
     393,   277,   506,   485,   393,   394,   393,   268,   485,   271,
     394,   393,   164,   164,   393,   394,   552,   456,   456,   394,
     395,   394,   551,   394,    48,   172,   197,   228,   351,   544,
     557,   394,     3,   452,   400,   400,   395,   512,   113,   400,
     113,   400,   393,    88,   588,   394,   394,   394,   394,   394,
     394,   446,   446,   446,   446,   446,   446,   394,   395,   394,
      63,   198,   448,   448,   448,   446,   393,   394,   394,   446,
     393,   394,   394,   446,   448,   448,   394,   394,   394,   394,
     394,   395,   394,   394,   443,   277,   395,   444,   453,   445,
     394,   395,   394,   394,     3,    20,   394,    43,    18,   394,
     395,   394,   395,     3,   394,   395,   394,   394,   395,   393,
     393,   164,   394,   394,   394,   394,   394,    51,    60,   574,
     124,   394,   574,   124,     3,   394,   394,   485,   124,   124,
     124,   124,   124,   124,    60,     3,   400,    78,   394,   485,
     485,   393,   394,   136,   545,   564,   400,   393,   393,   555,
     394,   394,   394,     3,   394,     5,    20,   393,     3,    63,
      63,   443,     3,     3,   517,   524,   393,   514,   448,   448,
     448,   448,   448,   448,   400,     3,   447,    63,   394,   394,
     394,   448,   425,   350,   350,   448,   429,   350,   350,   448,
     394,   394,   400,   214,   400,   140,   454,   450,     3,   394,
     400,   269,   207,     3,     3,     5,    57,    58,     5,   400,
     400,    60,   574,   124,   124,   394,   394,    77,   131,   156,
     166,   276,   574,   394,   393,   394,   394,   485,   393,   394,
     552,   551,   394,   207,     5,     3,   107,   248,   204,   268,
     204,    20,   395,   394,     3,   101,   515,   394,   394,   394,
     394,   394,   394,   394,   395,     3,   449,   394,   446,   393,
     393,   394,   446,   393,   393,   394,   394,   443,   230,   258,
     159,   455,   453,     3,   394,   394,   394,   394,   574,   124,
     124,   400,   394,     5,   394,   394,     3,   394,     3,     3,
     393,   393,   393,   400,     3,   394,   395,    90,   258,     3,
     443,   395,   448,   426,   427,   448,   430,   431,   231,   231,
     456,   393,    57,    58,   124,   394,   394,   207,   392,   393,
       3,     3,     3,    20,     3,   516,     3,   394,   446,   446,
     394,   446,   446,   180,   180,     3,   553,   245,     3,     3,
     553,   394,   394,   394,   400,   240,   443,   448,   448,   448,
     448,   394,   395,   393,   392,   393,   393,   394,   393,   229,
     517,   394,   394,   394,   394,   554,     3,     5,     3,   553,
     553,   554,   228,   546,   547,     5,    18,    97,   183,   197,
     394,   393,   394,   394,    18,     3,   394,   395,    97,   269,
     151,   137,   200,   235,   107,   258,   553,   554,   554,   271,
     547,    98,   149,    74,   192,   210,   240,    74,   192,   210,
     240,   394,   174,   113,   193,   113,   193,   554,   250,     4,
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
#line 486 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 492 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 493 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 495 "parser/evoparser.y"
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
#line 508 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 510 "parser/evoparser.y"
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
#line 538 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 546 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 554 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 560 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 567 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 568 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 569 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 570 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 571 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 572 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 573 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 574 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 575 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 576 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 577 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 578 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 579 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 580 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 581 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 582 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 583 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 584 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 585 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 587 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 592 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 593 "parser/evoparser.y"
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
#line 601 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 602 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 603 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 604 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 605 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 606 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 611 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 613 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 616 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 617 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 618 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 619 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 620 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 623 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 624 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 628 "parser/evoparser.y"
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
#line 637 "parser/evoparser.y"
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
#line 655 "parser/evoparser.y"
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
#line 664 "parser/evoparser.y"
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
#line 683 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 684 "parser/evoparser.y"
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
#line 744 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 753 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 759 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 764 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 766 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 768 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 773 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 778 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 786 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 66:
#line 788 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 67:
#line 790 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 68:
#line 792 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 69:
#line 794 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 70:
#line 796 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 71:
#line 798 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 72:
#line 800 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 73:
#line 802 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 74:
#line 805 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 76:
#line 809 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 77:
#line 809 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 78:
#line 810 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 79:
#line 810 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 80:
#line 811 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 81:
#line 812 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 82:
#line 819 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 83:
#line 820 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 84:
#line 827 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 85:
#line 828 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 86:
#line 838 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 87:
#line 842 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 88:
#line 843 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 89:
#line 844 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 90:
#line 845 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 91:
#line 846 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 92:
#line 847 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 848 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 94:
#line 849 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 95:
#line 853 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 96:
#line 854 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 97:
#line 855 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 98:
#line 856 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 99:
#line 857 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 100:
#line 858 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 101:
#line 860 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 102:
#line 861 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 103:
#line 862 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 104:
#line 863 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 105:
#line 864 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 106:
#line 865 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 107:
#line 866 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 108:
#line 867 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 109:
#line 868 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 110:
#line 869 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 111:
#line 870 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 112:
#line 871 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 113:
#line 873 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 114:
#line 874 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 115:
#line 875 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 116:
#line 876 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 117:
#line 877 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 118:
#line 878 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 119:
#line 879 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 120:
#line 880 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 121:
#line 881 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 122:
#line 882 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 123:
#line 883 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 124:
#line 884 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 125:
#line 885 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 126:
#line 886 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 127:
#line 887 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 128:
#line 888 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 129:
#line 890 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 130:
#line 891 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 131:
#line 892 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 132:
#line 893 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 133:
#line 894 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 134:
#line 895 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 135:
#line 898 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 136:
#line 899 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 137:
#line 900 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 138:
#line 901 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 139:
#line 902 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 140:
#line 903 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 141:
#line 904 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 142:
#line 905 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 143:
#line 906 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 907 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 145:
#line 908 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 146:
#line 909 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 147:
#line 910 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 148:
#line 911 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 149:
#line 912 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 150:
#line 913 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 151:
#line 914 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 152:
#line 915 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 153:
#line 916 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 154:
#line 917 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 155:
#line 918 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 156:
#line 919 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 157:
#line 920 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 158:
#line 921 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 159:
#line 922 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 160:
#line 923 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 161:
#line 924 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 162:
#line 925 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 163:
#line 926 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 164:
#line 927 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 165:
#line 928 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 166:
#line 929 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 167:
#line 930 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 168:
#line 931 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 169:
#line 933 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 170:
#line 934 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 171:
#line 935 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 172:
#line 936 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 173:
#line 937 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 174:
#line 938 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 175:
#line 939 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 176:
#line 940 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 177:
#line 942 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 178:
#line 943 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 179:
#line 944 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 180:
#line 945 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 181:
#line 946 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 182:
#line 947 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 183:
#line 948 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 184:
#line 949 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 185:
#line 950 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 186:
#line 951 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 187:
#line 952 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 188:
#line 953 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 189:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 190:
#line 955 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 191:
#line 956 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 192:
#line 957 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 193:
#line 958 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 194:
#line 959 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 195:
#line 960 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 196:
#line 961 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 197:
#line 962 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 198:
#line 963 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 199:
#line 965 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 200:
#line 966 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 201:
#line 967 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 202:
#line 968 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 203:
#line 969 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 204:
#line 971 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 205:
#line 972 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 206:
#line 974 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 207:
#line 975 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 208:
#line 976 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 209:
#line 978 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 210:
#line 979 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 211:
#line 980 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 212:
#line 981 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 213:
#line 988 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 214:
#line 995 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 215:
#line 1002 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 216:
#line 1006 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 217:
#line 1010 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 218:
#line 1014 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 219:
#line 1018 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 220:
#line 1022 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 221:
#line 1028 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 222:
#line 1029 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 223:
#line 1030 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 224:
#line 1034 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 225:
#line 1040 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 226:
#line 1046 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 227:
#line 1047 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 228:
#line 1048 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 229:
#line 1049 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 230:
#line 1050 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 231:
#line 1051 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 232:
#line 1052 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 233:
#line 1053 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 234:
#line 1054 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 235:
#line 1058 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 236:
#line 1060 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 237:
#line 1062 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 238:
#line 1064 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 239:
#line 1068 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 240:
#line 1076 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 241:
#line 1086 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 242:
#line 1087 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 243:
#line 1090 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 244:
#line 1091 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 245:
#line 1095 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 246:
#line 1103 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 247:
#line 1111 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 248:
#line 1119 "parser/evoparser.y"
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

  case 249:
#line 1133 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 250:
#line 1142 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 251:
#line 1147 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 252:
#line 1160 "parser/evoparser.y"
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

  case 254:
#line 1173 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 256:
#line 1175 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 257:
#line 1178 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 258:
#line 1185 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 259:
#line 1193 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 260:
#line 1194 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 261:
#line 1195 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 262:
#line 1198 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1199 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1203 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 268:
#line 1212 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 269:
#line 1214 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 272:
#line 1222 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 273:
#line 1224 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 278:
#line 1236 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 279:
#line 1242 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 280:
#line 1249 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 281:
#line 1257 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 282:
#line 1258 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 283:
#line 1259 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 284:
#line 1260 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 285:
#line 1263 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 286:
#line 1264 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 287:
#line 1265 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 288:
#line 1266 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 289:
#line 1267 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 291:
#line 1271 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 292:
#line 1274 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 293:
#line 1275 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 294:
#line 1278 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1279 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 296:
#line 1280 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 297:
#line 1281 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 298:
#line 1282 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 299:
#line 1283 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 300:
#line 1284 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 301:
#line 1285 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 302:
#line 1286 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 303:
#line 1289 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 304:
#line 1290 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 305:
#line 1292 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 306:
#line 1300 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 307:
#line 1305 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 308:
#line 1306 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 309:
#line 1307 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 310:
#line 1310 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 311:
#line 1311 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 314:
#line 1320 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 315:
#line 1328 "parser/evoparser.y"
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

  case 316:
#line 1337 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 317:
#line 1338 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 318:
#line 1340 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 319:
#line 1349 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 320:
#line 1354 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 321:
#line 1360 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 322:
#line 1367 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 323:
#line 1371 "parser/evoparser.y"
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

  case 324:
#line 1391 "parser/evoparser.y"
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

  case 327:
#line 1417 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 328:
#line 1419 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 329:
#line 1421 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 330:
#line 1423 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 331:
#line 1425 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 332:
#line 1428 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 333:
#line 1429 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 334:
#line 1430 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 335:
#line 1433 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 336:
#line 1434 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 337:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 338:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 339:
#line 1441 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 340:
#line 1442 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 341:
#line 1443 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 344:
#line 1450 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 345:
#line 1451 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 346:
#line 1456 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 347:
#line 1458 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 348:
#line 1460 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 350:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 351:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1468 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 353:
#line 1469 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1472 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 355:
#line 1477 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 356:
#line 1487 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 357:
#line 1494 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 358:
#line 1495 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 359:
#line 1496 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 360:
#line 1497 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 361:
#line 1502 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 362:
#line 1506 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 363:
#line 1508 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 366:
#line 1514 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 367:
#line 1519 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 368:
#line 1526 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 369:
#line 1533 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 371:
#line 1545 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 372:
#line 1546 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 373:
#line 1551 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 374:
#line 1558 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 375:
#line 1565 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 376:
#line 1573 "parser/evoparser.y"
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

  case 377:
#line 1583 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 378:
#line 1591 "parser/evoparser.y"
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

  case 379:
#line 1601 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 380:
#line 1609 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 381:
#line 1618 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 382:
#line 1627 "parser/evoparser.y"
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

  case 383:
#line 1637 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 384:
#line 1645 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 385:
#line 1654 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 386:
#line 1663 "parser/evoparser.y"
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

  case 387:
#line 1673 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 388:
#line 1682 "parser/evoparser.y"
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

  case 389:
#line 1694 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 390:
#line 1699 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 391:
#line 1704 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 392:
#line 1710 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 393:
#line 1717 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 394:
#line 1724 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 395:
#line 1731 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 396:
#line 1741 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 397:
#line 1748 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 398:
#line 1757 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 399:
#line 1764 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 400:
#line 1770 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 401:
#line 1778 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 402:
#line 1784 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 404:
#line 1792 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 405:
#line 1793 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 406:
#line 1794 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 407:
#line 1795 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 408:
#line 1811 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 409:
#line 1812 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 410:
#line 1813 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 411:
#line 1817 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 412:
#line 1823 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 413:
#line 1834 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 414:
#line 1840 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 415:
#line 1847 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 416:
#line 1853 "parser/evoparser.y"
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

  case 417:
#line 1869 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 418:
#line 1876 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 419:
#line 1885 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 420:
#line 1893 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 421:
#line 1899 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 423:
#line 1916 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 424:
#line 1920 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 425:
#line 1929 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 427:
#line 1944 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 428:
#line 1948 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 429:
#line 1953 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 430:
#line 1960 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 431:
#line 1965 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 432:
#line 1972 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 433:
#line 1976 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 434:
#line 1977 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 435:
#line 1983 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 436:
#line 1992 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 437:
#line 1993 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 438:
#line 1994 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 439:
#line 1998 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 440:
#line 1999 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 441:
#line 2000 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 442:
#line 2001 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 443:
#line 2002 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 444:
#line 2003 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 447:
#line 2012 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 448:
#line 2013 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 450:
#line 2018 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 452:
#line 2023 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 453:
#line 2028 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 454:
#line 2037 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 455:
#line 2043 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 456:
#line 2049 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 457:
#line 2056 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 458:
#line 2062 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 459:
#line 2069 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 460:
#line 2075 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 461:
#line 2081 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 462:
#line 2087 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 463:
#line 2093 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 464:
#line 2099 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 465:
#line 2105 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 466:
#line 2111 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 467:
#line 2117 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 468:
#line 2123 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 469:
#line 2129 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 470:
#line 2135 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 471:
#line 2141 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 472:
#line 2147 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 473:
#line 2153 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 474:
#line 2159 "parser/evoparser.y"
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

  case 475:
#line 2172 "parser/evoparser.y"
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

  case 476:
#line 2183 "parser/evoparser.y"
    { ;}
    break;

  case 477:
#line 2184 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 478:
#line 2185 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 479:
#line 2189 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 480:
#line 2197 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 481:
#line 2203 "parser/evoparser.y"
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

  case 483:
#line 2216 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 484:
#line 2216 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 487:
#line 2224 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 488:
#line 2225 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 489:
#line 2226 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 490:
#line 2230 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 491:
#line 2231 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 492:
#line 2232 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 493:
#line 2236 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 494:
#line 2244 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 495:
#line 2253 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 496:
#line 2254 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 497:
#line 2255 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 498:
#line 2256 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 499:
#line 2257 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 503:
#line 2264 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 504:
#line 2268 "parser/evoparser.y"
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

  case 505:
#line 2278 "parser/evoparser.y"
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

  case 506:
#line 2290 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 507:
#line 2291 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 508:
#line 2291 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 509:
#line 2294 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 510:
#line 2295 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 511:
#line 2296 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 512:
#line 2297 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 513:
#line 2301 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 514:
#line 2304 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 515:
#line 2305 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 516:
#line 2306 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 517:
#line 2307 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 518:
#line 2313 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 519:
#line 2319 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 520:
#line 2324 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 521:
#line 2329 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 522:
#line 2333 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 523:
#line 2337 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 524:
#line 2339 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 527:
#line 2345 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 528:
#line 2346 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 529:
#line 2350 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 530:
#line 2351 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 531:
#line 2355 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 532:
#line 2356 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 533:
#line 2357 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 540:
#line 2372 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 541:
#line 2373 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 542:
#line 2374 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 543:
#line 2375 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 544:
#line 2376 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 545:
#line 2377 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 546:
#line 2378 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 547:
#line 2379 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 548:
#line 2384 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 549:
#line 2393 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 550:
#line 2400 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 551:
#line 2401 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 552:
#line 2402 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 553:
#line 2407 "parser/evoparser.y"
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

  case 554:
#line 2418 "parser/evoparser.y"
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

  case 555:
#line 2430 "parser/evoparser.y"
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

  case 556:
#line 2441 "parser/evoparser.y"
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

  case 557:
#line 2456 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 558:
#line 2460 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 559:
#line 2464 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 560:
#line 2465 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 561:
#line 2470 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 562:
#line 2472 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 563:
#line 2474 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 564:
#line 2476 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 565:
#line 2479 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 566:
#line 2480 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 567:
#line 2486 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 568:
#line 2491 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 569:
#line 2493 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 570:
#line 2495 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 571:
#line 2497 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 572:
#line 2499 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 573:
#line 2503 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 574:
#line 2507 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 575:
#line 2508 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 576:
#line 2513 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 577:
#line 2523 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 579:
#line 2536 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 580:
#line 2544 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 581:
#line 2552 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 583:
#line 2560 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 584:
#line 2561 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 585:
#line 2562 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 586:
#line 2563 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 587:
#line 2565 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 588:
#line 2567 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 589:
#line 2569 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 592:
#line 2577 "parser/evoparser.y"
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

  case 593:
#line 2592 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 594:
#line 2600 "parser/evoparser.y"
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

  case 595:
#line 2614 "parser/evoparser.y"
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

  case 596:
#line 2628 "parser/evoparser.y"
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

  case 597:
#line 2642 "parser/evoparser.y"
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

  case 598:
#line 2654 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 599:
#line 2655 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 600:
#line 2656 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 601:
#line 2659 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 602:
#line 2660 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 603:
#line 2663 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 604:
#line 2664 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 605:
#line 2665 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 606:
#line 2666 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 607:
#line 2667 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 608:
#line 2668 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 609:
#line 2669 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 610:
#line 2670 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 611:
#line 2672 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 612:
#line 2674 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 613:
#line 2676 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 614:
#line 2678 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 615:
#line 2680 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 616:
#line 2682 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 617:
#line 2685 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 618:
#line 2686 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 619:
#line 2689 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 620:
#line 2690 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 621:
#line 2693 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 622:
#line 2694 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 624:
#line 2698 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 625:
#line 2699 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 626:
#line 2700 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 627:
#line 2701 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 628:
#line 2702 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 629:
#line 2703 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 630:
#line 2704 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 631:
#line 2705 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 632:
#line 2706 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 633:
#line 2707 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 634:
#line 2708 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 635:
#line 2709 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 636:
#line 2710 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 637:
#line 2711 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 638:
#line 2712 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 639:
#line 2713 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 640:
#line 2714 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 641:
#line 2717 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 642:
#line 2718 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 643:
#line 2721 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 644:
#line 2723 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 645:
#line 2731 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 646:
#line 2732 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 648:
#line 2734 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 649:
#line 2735 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 650:
#line 2736 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 651:
#line 2737 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 652:
#line 2738 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 653:
#line 2739 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 654:
#line 2740 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 655:
#line 2741 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 656:
#line 2742 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 657:
#line 2749 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 658:
#line 2750 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 659:
#line 2751 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 660:
#line 2752 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 661:
#line 2753 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 662:
#line 2754 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 663:
#line 2755 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 664:
#line 2756 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 665:
#line 2757 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 666:
#line 2758 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 667:
#line 2759 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 668:
#line 2760 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 669:
#line 2761 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 670:
#line 2762 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 671:
#line 2763 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 672:
#line 2764 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 673:
#line 2765 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 674:
#line 2766 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 675:
#line 2767 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 676:
#line 2768 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 677:
#line 2769 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 678:
#line 2772 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 679:
#line 2773 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 680:
#line 2774 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 681:
#line 2777 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 682:
#line 2778 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 683:
#line 2781 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 684:
#line 2782 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 685:
#line 2783 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 687:
#line 2787 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 688:
#line 2788 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 689:
#line 2792 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 690:
#line 2793 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 691:
#line 2794 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 692:
#line 2795 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 693:
#line 2796 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 694:
#line 2797 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 695:
#line 2798 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 696:
#line 2799 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 697:
#line 2800 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 698:
#line 2801 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 699:
#line 2802 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 700:
#line 2803 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 701:
#line 2804 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 702:
#line 2805 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 703:
#line 2806 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 704:
#line 2807 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 705:
#line 2808 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 706:
#line 2809 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 707:
#line 2810 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 708:
#line 2811 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 709:
#line 2812 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 710:
#line 2813 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 711:
#line 2814 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 712:
#line 2815 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 713:
#line 2816 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 714:
#line 2817 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 715:
#line 2818 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 716:
#line 2819 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 717:
#line 2820 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 718:
#line 2821 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 719:
#line 2822 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 720:
#line 2823 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 721:
#line 2824 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 722:
#line 2825 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 723:
#line 2826 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 724:
#line 2829 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 725:
#line 2830 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 726:
#line 2834 "parser/evoparser.y"
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

  case 727:
#line 2846 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 728:
#line 2847 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 729:
#line 2848 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 730:
#line 2852 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 731:
#line 2855 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 732:
#line 2856 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 736:
#line 2860 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 737:
#line 2861 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 738:
#line 2869 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 739:
#line 2874 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 740:
#line 2880 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 741:
#line 2886 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 742:
#line 2893 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 743:
#line 2900 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 744:
#line 2906 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 745:
#line 2912 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 746:
#line 2919 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 751:
#line 2935 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 752:
#line 2936 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 753:
#line 2937 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 754:
#line 2938 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 755:
#line 2941 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 756:
#line 2942 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 757:
#line 2943 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 758:
#line 2944 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 759:
#line 2945 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 760:
#line 2946 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 761:
#line 2947 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 762:
#line 2948 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 763:
#line 2949 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 764:
#line 2950 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 773:
#line 2967 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 774:
#line 2968 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 895:
#line 2986 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 896:
#line 2993 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 897:
#line 2998 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 898:
#line 3004 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 899:
#line 3010 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 900:
#line 3016 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 901:
#line 3027 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 902:
#line 3032 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 903:
#line 3038 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 906:
#line 3049 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 907:
#line 3050 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 908:
#line 3051 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 909:
#line 3052 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 910:
#line 3053 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 911:
#line 3054 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 912:
#line 3055 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 913:
#line 3062 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 914:
#line 3067 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 915:
#line 3074 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 916:
#line 3075 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 917:
#line 3078 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 918:
#line 3079 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 919:
#line 3080 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 920:
#line 3083 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 921:
#line 3088 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 922:
#line 3094 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 923:
#line 3103 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 924:
#line 3111 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 925:
#line 3121 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 926:
#line 3126 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 929:
#line 3139 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 930:
#line 3140 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 931:
#line 3141 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 932:
#line 3142 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 933:
#line 3143 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 934:
#line 3144 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 935:
#line 3145 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 936:
#line 3146 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 937:
#line 3149 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 938:
#line 3154 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 939:
#line 3160 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 940:
#line 3170 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 941:
#line 3177 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 942:
#line 3184 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 943:
#line 3192 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 945:
#line 3202 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 947:
#line 3206 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 948:
#line 3207 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11468 "parser/evoparser.tab.c"
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


#line 3210 "parser/evoparser.y"

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
