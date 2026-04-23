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
     SHIFT = 275,
     MOD = 276,
     JSON_ARROW_TEXT = 277,
     JSON_ARROW = 278,
     UMINUS = 279,
     ALTER = 280,
     ADD = 281,
     AFTER = 282,
     ALL = 283,
     ANALYZE = 284,
     ANY = 285,
     AUTO_INCREMENT = 286,
     ASC = 287,
     AND = 288,
     AS = 289,
     ALWAYS = 290,
     IDENTITY = 291,
     CONTINUE = 292,
     RESTART = 293,
     GENERATED = 294,
     STORED = 295,
     VIRTUAL = 296,
     BEFORE = 297,
     BEGINWORK = 298,
     BLOB = 299,
     BOOLEAN = 300,
     BY = 301,
     BINARY = 302,
     BOTH = 303,
     BIGINT = 304,
     BIT = 305,
     CALL = 306,
     CLOSE = 307,
     CURSOR = 308,
     CONSTRAINT = 309,
     CURRENT_TIMESTAMP = 310,
     CREATE = 311,
     CASCADE = 312,
     CHANGE = 313,
     CROSS = 314,
     CASE = 315,
     CHECK = 316,
     COMMENT = 317,
     CURRENT_DATE = 318,
     CURRENT_TIME = 319,
     CHAR = 320,
     COLLATE = 321,
     COLUMN = 322,
     CONCURRENTLY = 323,
     COPY = 324,
     CSV = 325,
     CONFLICT = 326,
     EXCLUDED = 327,
     NOTHING = 328,
     AGAINST = 329,
     MATERIALIZED = 330,
     REFRESH = 331,
     OF = 332,
     DATABASE = 333,
     DECLARE = 334,
     DEFERRABLE = 335,
     DEFERRED = 336,
     DELIMITER = 337,
     DISABLE = 338,
     DO = 339,
     DOMAIN = 340,
     DELAYED = 341,
     DAY_HOUR = 342,
     DAY_MICROSECOND = 343,
     DISTINCT = 344,
     DELETE = 345,
     DROP = 346,
     DAY_MINUTE = 347,
     DISTINCTROW = 348,
     DAY_SECOND = 349,
     DESC = 350,
     DEFAULT = 351,
     DOUBLE = 352,
     DATETIME = 353,
     DECIMAL = 354,
     DATE = 355,
     EACH = 356,
     ELSEIF = 357,
     ENABLE = 358,
     ESCAPED = 359,
     EXCEPT = 360,
     ENUM = 361,
     END = 362,
     ELSE = 363,
     EXECUTE = 364,
     EXIT = 365,
     EXPLAIN = 366,
     FETCH = 367,
     FIRST = 368,
     FOREACH = 369,
     FLOAT = 370,
     FORCE = 371,
     FOREIGN = 372,
     FORMAT = 373,
     FROM = 374,
     FULL = 375,
     FULLTEXT = 376,
     FUNCTION = 377,
     FOR = 378,
     GROUP = 379,
     HANDLER = 380,
     HEADER = 381,
     HOUR_MINUTE = 382,
     HOUR_MICROSECOND = 383,
     HIGH_PRIORITY = 384,
     HOUR_SECOND = 385,
     HAVING = 386,
     IMMEDIATE = 387,
     INOUT = 388,
     INITIALLY = 389,
     INTEGER = 390,
     INNER = 391,
     IGNORE = 392,
     INDEX = 393,
     IF = 394,
     INSERT = 395,
     INTERSECT = 396,
     INTO = 397,
     INT = 398,
     INTERVAL = 399,
     ITERATE = 400,
     JOIN = 401,
     KEY = 402,
     LEAVE = 403,
     LOOP = 404,
     LATERAL = 405,
     LISTEN = 406,
     NOTIFY = 407,
     UNLISTEN = 408,
     SELF = 409,
     INHERITS = 410,
     ONLY = 411,
     LESS = 412,
     LONGTEXT = 413,
     LOW_PRIORITY = 414,
     LEFT = 415,
     LEADING = 416,
     LIMIT = 417,
     LOCKED = 418,
     OFFSET = 419,
     LONGBLOB = 420,
     MATCH = 421,
     MAXVALUE = 422,
     MEDIUMTEXT = 423,
     MINUS = 424,
     MODIFY = 425,
     MEDIUMBLOB = 426,
     MEDIUMINT = 427,
     NATURAL = 428,
     NODE = 429,
     NO_ACTION = 430,
     NULLX = 431,
     OPEN = 432,
     OUT = 433,
     OUTER = 434,
     ON = 435,
     ORDER = 436,
     ONDUPLICATE = 437,
     PARTIAL = 438,
     PRIMARY = 439,
     PROCEDURE = 440,
     QUICK = 441,
     RANGE = 442,
     REAL = 443,
     RECLAIM = 444,
     REFERENCES = 445,
     RENAME = 446,
     RESIGNAL = 447,
     RESTRICT = 448,
     RETURN = 449,
     RETURNING = 450,
     RETURNS = 451,
     ROLLUP = 452,
     RIGHT = 453,
     REPLACE = 454,
     ROW = 455,
     SIGNAL = 456,
     TRIGGER = 457,
     UNTIL = 458,
     POLICY = 459,
     LEVEL = 460,
     SECURITY = 461,
     PERMISSIVE = 462,
     RESTRICTIVE = 463,
     CURRENT_USER = 464,
     SQL_SMALL_RESULT = 465,
     SCHEMA = 466,
     SHARD = 467,
     SHARDS = 468,
     SHARE = 469,
     SKIP = 470,
     SOME = 471,
     SQL_CALC_FOUND_ROWS = 472,
     SQL_BIG_RESULT = 473,
     SIMPLE = 474,
     STDIN = 475,
     STDOUT = 476,
     STRAIGHT_JOIN = 477,
     SMALLINT = 478,
     SET = 479,
     SELECT = 480,
     QUOTE = 481,
     TINYTEXT = 482,
     TINYINT = 483,
     TO = 484,
     TEMPORARY = 485,
     GLOBAL = 486,
     PRESERVE = 487,
     TEXT = 488,
     THAN = 489,
     TIMESTAMP = 490,
     TABLE = 491,
     THEN = 492,
     TRAILING = 493,
     TRUNCATE = 494,
     TINYBLOB = 495,
     TIME = 496,
     UPDATE = 497,
     UNSIGNED = 498,
     UNION = 499,
     UNIQUE = 500,
     UUID = 501,
     ARRAY = 502,
     JSON = 503,
     VIEW = 504,
     USING = 505,
     USE = 506,
     HASH = 507,
     VALIDATE = 508,
     VARCHAR = 509,
     VALUES = 510,
     VARBINARY = 511,
     WHERE = 512,
     WHEN = 513,
     WHILE = 514,
     WITH = 515,
     YEAR = 516,
     YEAR_MONTH = 517,
     ZEROFILL = 518,
     EXISTS = 519,
     FSUBSTRING = 520,
     FTRIM = 521,
     FDATE_ADD = 522,
     FDATE_SUB = 523,
     FDATEDIFF = 524,
     FYEAR = 525,
     FMONTH = 526,
     FDAY = 527,
     FHOUR = 528,
     FMINUTE = 529,
     FSECOND = 530,
     FNOW = 531,
     FLEFT = 532,
     FRIGHT = 533,
     FLPAD = 534,
     FRPAD = 535,
     FREVERSE = 536,
     FREPEAT = 537,
     FINSTR = 538,
     FLOCATE = 539,
     FABS = 540,
     FCEIL = 541,
     FFLOOR = 542,
     FROUND = 543,
     FPOWER = 544,
     FSQRT = 545,
     FMOD = 546,
     FRAND = 547,
     FLOG = 548,
     FLOG10 = 549,
     FSIGN = 550,
     FPI = 551,
     FCAST = 552,
     FCONVERT = 553,
     FNULLIF = 554,
     FIFNULL = 555,
     FIF = 556,
     UNKNOWN = 557,
     FGROUP_CONCAT = 558,
     SEPARATOR = 559,
     FCOUNT = 560,
     FSUM = 561,
     FAVG = 562,
     FMIN = 563,
     FMAX = 564,
     FUPPER = 565,
     FLOWER = 566,
     FLENGTH = 567,
     FCONCAT = 568,
     FREPLACE = 569,
     FCOALESCE = 570,
     FGEN_RANDOM_UUID = 571,
     FGEN_RANDOM_UUID_V7 = 572,
     FSNOWFLAKE_ID = 573,
     FLAST_INSERT_ID = 574,
     FSCOPE_IDENTITY = 575,
     FAT_IDENTITY = 576,
     FAT_LAST_INSERT_ID = 577,
     FEVO_SLEEP = 578,
     FEVO_JITTER = 579,
     FROW_NUMBER = 580,
     FRANK = 581,
     FDENSE_RANK = 582,
     FLEAD = 583,
     FLAG = 584,
     FNTILE = 585,
     FPERCENT_RANK = 586,
     FCUME_DIST = 587,
     OVER = 588,
     PARTITION = 589,
     FJSON_EXTRACT = 590,
     FJSON_UNQUOTE = 591,
     FJSON_TYPE = 592,
     FJSON_LENGTH = 593,
     FJSON_DEPTH = 594,
     FJSON_VALID = 595,
     FJSON_KEYS = 596,
     FJSON_PRETTY = 597,
     FJSON_QUOTE = 598,
     FJSON_SET = 599,
     FJSON_INSERT = 600,
     FJSON_REPLACE = 601,
     FJSON_REMOVE = 602,
     FJSON_CONTAINS = 603,
     FJSON_CONTAINS_PATH = 604,
     FJSON_SEARCH = 605,
     FJSON_OBJECT = 606,
     FJSON_ARRAY = 607,
     FJSON_ARRAYAGG = 608,
     SEQUENCE = 609,
     FNEXTVAL = 610,
     FCURRVAL = 611,
     FSETVAL = 612,
     FLASTVAL = 613,
     START = 614,
     INCREMENT = 615,
     MINVALUE = 616,
     CYCLE = 617,
     FARRAY_LENGTH = 618,
     FUNNEST = 619,
     FEVO_NOTIFY = 620,
     FPG_LISTENING_CHANNELS = 621
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
#define SHIFT 275
#define MOD 276
#define JSON_ARROW_TEXT 277
#define JSON_ARROW 278
#define UMINUS 279
#define ALTER 280
#define ADD 281
#define AFTER 282
#define ALL 283
#define ANALYZE 284
#define ANY 285
#define AUTO_INCREMENT 286
#define ASC 287
#define AND 288
#define AS 289
#define ALWAYS 290
#define IDENTITY 291
#define CONTINUE 292
#define RESTART 293
#define GENERATED 294
#define STORED 295
#define VIRTUAL 296
#define BEFORE 297
#define BEGINWORK 298
#define BLOB 299
#define BOOLEAN 300
#define BY 301
#define BINARY 302
#define BOTH 303
#define BIGINT 304
#define BIT 305
#define CALL 306
#define CLOSE 307
#define CURSOR 308
#define CONSTRAINT 309
#define CURRENT_TIMESTAMP 310
#define CREATE 311
#define CASCADE 312
#define CHANGE 313
#define CROSS 314
#define CASE 315
#define CHECK 316
#define COMMENT 317
#define CURRENT_DATE 318
#define CURRENT_TIME 319
#define CHAR 320
#define COLLATE 321
#define COLUMN 322
#define CONCURRENTLY 323
#define COPY 324
#define CSV 325
#define CONFLICT 326
#define EXCLUDED 327
#define NOTHING 328
#define AGAINST 329
#define MATERIALIZED 330
#define REFRESH 331
#define OF 332
#define DATABASE 333
#define DECLARE 334
#define DEFERRABLE 335
#define DEFERRED 336
#define DELIMITER 337
#define DISABLE 338
#define DO 339
#define DOMAIN 340
#define DELAYED 341
#define DAY_HOUR 342
#define DAY_MICROSECOND 343
#define DISTINCT 344
#define DELETE 345
#define DROP 346
#define DAY_MINUTE 347
#define DISTINCTROW 348
#define DAY_SECOND 349
#define DESC 350
#define DEFAULT 351
#define DOUBLE 352
#define DATETIME 353
#define DECIMAL 354
#define DATE 355
#define EACH 356
#define ELSEIF 357
#define ENABLE 358
#define ESCAPED 359
#define EXCEPT 360
#define ENUM 361
#define END 362
#define ELSE 363
#define EXECUTE 364
#define EXIT 365
#define EXPLAIN 366
#define FETCH 367
#define FIRST 368
#define FOREACH 369
#define FLOAT 370
#define FORCE 371
#define FOREIGN 372
#define FORMAT 373
#define FROM 374
#define FULL 375
#define FULLTEXT 376
#define FUNCTION 377
#define FOR 378
#define GROUP 379
#define HANDLER 380
#define HEADER 381
#define HOUR_MINUTE 382
#define HOUR_MICROSECOND 383
#define HIGH_PRIORITY 384
#define HOUR_SECOND 385
#define HAVING 386
#define IMMEDIATE 387
#define INOUT 388
#define INITIALLY 389
#define INTEGER 390
#define INNER 391
#define IGNORE 392
#define INDEX 393
#define IF 394
#define INSERT 395
#define INTERSECT 396
#define INTO 397
#define INT 398
#define INTERVAL 399
#define ITERATE 400
#define JOIN 401
#define KEY 402
#define LEAVE 403
#define LOOP 404
#define LATERAL 405
#define LISTEN 406
#define NOTIFY 407
#define UNLISTEN 408
#define SELF 409
#define INHERITS 410
#define ONLY 411
#define LESS 412
#define LONGTEXT 413
#define LOW_PRIORITY 414
#define LEFT 415
#define LEADING 416
#define LIMIT 417
#define LOCKED 418
#define OFFSET 419
#define LONGBLOB 420
#define MATCH 421
#define MAXVALUE 422
#define MEDIUMTEXT 423
#define MINUS 424
#define MODIFY 425
#define MEDIUMBLOB 426
#define MEDIUMINT 427
#define NATURAL 428
#define NODE 429
#define NO_ACTION 430
#define NULLX 431
#define OPEN 432
#define OUT 433
#define OUTER 434
#define ON 435
#define ORDER 436
#define ONDUPLICATE 437
#define PARTIAL 438
#define PRIMARY 439
#define PROCEDURE 440
#define QUICK 441
#define RANGE 442
#define REAL 443
#define RECLAIM 444
#define REFERENCES 445
#define RENAME 446
#define RESIGNAL 447
#define RESTRICT 448
#define RETURN 449
#define RETURNING 450
#define RETURNS 451
#define ROLLUP 452
#define RIGHT 453
#define REPLACE 454
#define ROW 455
#define SIGNAL 456
#define TRIGGER 457
#define UNTIL 458
#define POLICY 459
#define LEVEL 460
#define SECURITY 461
#define PERMISSIVE 462
#define RESTRICTIVE 463
#define CURRENT_USER 464
#define SQL_SMALL_RESULT 465
#define SCHEMA 466
#define SHARD 467
#define SHARDS 468
#define SHARE 469
#define SKIP 470
#define SOME 471
#define SQL_CALC_FOUND_ROWS 472
#define SQL_BIG_RESULT 473
#define SIMPLE 474
#define STDIN 475
#define STDOUT 476
#define STRAIGHT_JOIN 477
#define SMALLINT 478
#define SET 479
#define SELECT 480
#define QUOTE 481
#define TINYTEXT 482
#define TINYINT 483
#define TO 484
#define TEMPORARY 485
#define GLOBAL 486
#define PRESERVE 487
#define TEXT 488
#define THAN 489
#define TIMESTAMP 490
#define TABLE 491
#define THEN 492
#define TRAILING 493
#define TRUNCATE 494
#define TINYBLOB 495
#define TIME 496
#define UPDATE 497
#define UNSIGNED 498
#define UNION 499
#define UNIQUE 500
#define UUID 501
#define ARRAY 502
#define JSON 503
#define VIEW 504
#define USING 505
#define USE 506
#define HASH 507
#define VALIDATE 508
#define VARCHAR 509
#define VALUES 510
#define VARBINARY 511
#define WHERE 512
#define WHEN 513
#define WHILE 514
#define WITH 515
#define YEAR 516
#define YEAR_MONTH 517
#define ZEROFILL 518
#define EXISTS 519
#define FSUBSTRING 520
#define FTRIM 521
#define FDATE_ADD 522
#define FDATE_SUB 523
#define FDATEDIFF 524
#define FYEAR 525
#define FMONTH 526
#define FDAY 527
#define FHOUR 528
#define FMINUTE 529
#define FSECOND 530
#define FNOW 531
#define FLEFT 532
#define FRIGHT 533
#define FLPAD 534
#define FRPAD 535
#define FREVERSE 536
#define FREPEAT 537
#define FINSTR 538
#define FLOCATE 539
#define FABS 540
#define FCEIL 541
#define FFLOOR 542
#define FROUND 543
#define FPOWER 544
#define FSQRT 545
#define FMOD 546
#define FRAND 547
#define FLOG 548
#define FLOG10 549
#define FSIGN 550
#define FPI 551
#define FCAST 552
#define FCONVERT 553
#define FNULLIF 554
#define FIFNULL 555
#define FIF 556
#define UNKNOWN 557
#define FGROUP_CONCAT 558
#define SEPARATOR 559
#define FCOUNT 560
#define FSUM 561
#define FAVG 562
#define FMIN 563
#define FMAX 564
#define FUPPER 565
#define FLOWER 566
#define FLENGTH 567
#define FCONCAT 568
#define FREPLACE 569
#define FCOALESCE 570
#define FGEN_RANDOM_UUID 571
#define FGEN_RANDOM_UUID_V7 572
#define FSNOWFLAKE_ID 573
#define FLAST_INSERT_ID 574
#define FSCOPE_IDENTITY 575
#define FAT_IDENTITY 576
#define FAT_LAST_INSERT_ID 577
#define FEVO_SLEEP 578
#define FEVO_JITTER 579
#define FROW_NUMBER 580
#define FRANK 581
#define FDENSE_RANK 582
#define FLEAD 583
#define FLAG 584
#define FNTILE 585
#define FPERCENT_RANK 586
#define FCUME_DIST 587
#define OVER 588
#define PARTITION 589
#define FJSON_EXTRACT 590
#define FJSON_UNQUOTE 591
#define FJSON_TYPE 592
#define FJSON_LENGTH 593
#define FJSON_DEPTH 594
#define FJSON_VALID 595
#define FJSON_KEYS 596
#define FJSON_PRETTY 597
#define FJSON_QUOTE 598
#define FJSON_SET 599
#define FJSON_INSERT 600
#define FJSON_REPLACE 601
#define FJSON_REMOVE 602
#define FJSON_CONTAINS 603
#define FJSON_CONTAINS_PATH 604
#define FJSON_SEARCH 605
#define FJSON_OBJECT 606
#define FJSON_ARRAY 607
#define FJSON_ARRAYAGG 608
#define SEQUENCE 609
#define FNEXTVAL 610
#define FCURRVAL 611
#define FSETVAL 612
#define FLASTVAL 613
#define START 614
#define INCREMENT 615
#define MINVALUE 616
#define CYCLE 617
#define FARRAY_LENGTH 618
#define FUNNEST 619
#define FEVO_NOTIFY 620
#define FPG_LISTENING_CHANNELS 621




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
#line 899 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 912 "parser/evoparser.tab.c"

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
#define YYFINAL  101
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  384
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  188
/* YYNRULES -- Number of rules.  */
#define YYNRULES  928
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2279

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   621

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     379,   380,    26,    24,   381,    25,   378,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   377,
       2,   383,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   382,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    18,    19,    20,    23,    29,    31,    32,    33,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
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
     375,   376
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
     232,   237,   244,   249,   256,   260,   261,   263,   264,   271,
     272,   280,   281,   288,   289,   297,   298,   304,   309,   314,
     319,   324,   329,   334,   339,   344,   351,   352,   362,   363,
     373,   374,   384,   385,   396,   397,   408,   409,   420,   421,
     432,   433,   444,   445,   456,   457,   468,   469,   482,   483,
     498,   499,   514,   515,   526,   527,   540,   541,   556,   557,
     572,   573,   584,   585,   595,   596,   606,   615,   622,   629,
     638,   643,   651,   658,   663,   668,   673,   680,   689,   696,
     703,   710,   719,   728,   733,   740,   747,   754,   759,   764,
     769,   776,   781,   788,   793,   800,   804,   809,   814,   819,
     823,   827,   834,   839,   844,   849,   854,   859,   864,   871,
     876,   881,   886,   891,   896,   901,   906,   911,   920,   929,
     938,   945,   952,   961,   970,   977,   988,   993,  1000,  1009,
    1014,  1019,  1024,  1031,  1040,  1044,  1051,  1058,  1065,  1072,
    1081,  1085,  1094,  1105,  1109,  1113,  1117,  1121,  1125,  1127,
    1129,  1134,  1141,  1143,  1145,  1147,  1154,  1161,  1165,  1169,
    1173,  1177,  1181,  1185,  1189,  1193,  1197,  1202,  1209,  1213,
    1219,  1224,  1230,  1234,  1239,  1243,  1248,  1250,  1252,  1254,
    1256,  1258,  1262,  1275,  1288,  1289,  1292,  1293,  1298,  1301,
    1306,  1307,  1309,  1311,  1312,  1315,  1316,  1319,  1320,  1324,
    1326,  1330,  1331,  1335,  1338,  1343,  1344,  1348,  1350,  1354,
    1357,  1362,  1365,  1366,  1369,  1374,  1379,  1380,  1383,  1386,
    1391,  1396,  1397,  1400,  1402,  1406,  1407,  1410,  1413,  1416,
    1419,  1422,  1425,  1428,  1431,  1433,  1437,  1439,  1442,  1445,
    1447,  1448,  1450,  1454,  1456,  1458,  1462,  1467,  1473,  1477,
    1481,  1486,  1493,  1503,  1507,  1508,  1514,  1516,  1517,  1523,
    1527,  1533,  1540,  1546,  1547,  1549,  1551,  1552,  1554,  1556,
    1558,  1561,  1564,  1565,  1566,  1568,  1571,  1576,  1583,  1590,
    1597,  1598,  1601,  1602,  1604,  1608,  1612,  1614,  1623,  1626,
    1629,  1632,  1633,  1640,  1643,  1648,  1649,  1652,  1660,  1662,
    1667,  1674,  1675,  1677,  1679,  1681,  1690,  1700,  1711,  1721,
    1733,  1744,  1757,  1769,  1783,  1793,  1805,  1816,  1829,  1841,
    1854,  1856,  1860,  1862,  1867,  1872,  1877,  1884,  1886,  1890,
    1893,  1897,  1903,  1905,  1909,  1910,  1913,  1916,  1920,  1924,
    1926,  1928,  1930,  1933,  1937,  1940,  1943,  1946,  1951,  1953,
    1957,  1959,  1963,  1969,  1971,  1973,  1975,  1986,  1987,  1990,
    1993,  1994,  1997,  2000,  2003,  2006,  2009,  2010,  2013,  2015,
    2019,  2020,  2025,  2026,  2032,  2038,  2049,  2060,  2078,  2091,
    2111,  2123,  2130,  2139,  2146,  2153,  2160,  2170,  2177,  2183,
    2192,  2200,  2210,  2219,  2230,  2240,  2248,  2256,  2257,  2259,
    2262,  2264,  2275,  2282,  2283,  2284,  2290,  2291,  2296,  2297,
    2301,  2306,  2309,  2310,  2316,  2320,  2326,  2327,  2330,  2333,
    2336,  2339,  2341,  2342,  2343,  2347,  2349,  2353,  2357,  2358,
    2365,  2367,  2369,  2373,  2377,  2385,  2389,  2393,  2399,  2405,
    2407,  2416,  2424,  2432,  2434,  2435,  2443,  2444,  2448,  2450,
    2454,  2456,  2458,  2460,  2462,  2464,  2465,  2467,  2472,  2476,
    2478,  2482,  2485,  2488,  2491,  2493,  2496,  2499,  2502,  2504,
    2506,  2516,  2517,  2520,  2523,  2527,  2533,  2539,  2547,  2553,
    2555,  2560,  2565,  2569,  2575,  2579,  2585,  2586,  2589,  2591,
    2597,  2605,  2613,  2623,  2635,  2637,  2640,  2644,  2646,  2657,
    2658,  2663,  2675,  2694,  2695,  2700,  2704,  2710,  2716,  2726,
    2737,  2745,  2747,  2751,  2761,  2771,  2781,  2788,  2800,  2809,
    2810,  2812,  2815,  2817,  2821,  2827,  2835,  2840,  2845,  2851,
    2857,  2862,  2869,  2881,  2895,  2909,  2925,  2930,  2937,  2939,
    2943,  2945,  2949,  2951,  2955,  2956,  2961,  2967,  2972,  2978,
    2983,  2989,  2994,  3000,  3005,  3010,  3014,  3018,  3022,  3025,
    3029,  3034,  3039,  3041,  3045,  3046,  3051,  3052,  3056,  3059,
    3063,  3067,  3071,  3075,  3081,  3087,  3093,  3097,  3103,  3106,
    3114,  3120,  3128,  3134,  3137,  3141,  3144,  3148,  3151,  3155,
    3161,  3166,  3172,  3180,  3189,  3198,  3206,  3213,  3220,  3226,
    3227,  3231,  3237,  3238,  3240,  3241,  3244,  3247,  3248,  3253,
    3257,  3260,  3264,  3268,  3272,  3276,  3280,  3284,  3288,  3292,
    3296,  3300,  3302,  3304,  3306,  3308,  3310,  3314,  3320,  3323,
    3328,  3330,  3332,  3334,  3336,  3340,  3344,  3348,  3352,  3358,
    3364,  3366,  3368,  3370,  3374,  3376,  3380,  3384,  3385,  3387,
    3389,  3391,  3395,  3399,  3402,  3404,  3408,  3412,  3416,  3418,
    3429,  3439,  3452,  3464,  3477,  3489,  3504,  3518,  3519,  3521,
    3523,  3527,  3530,  3534,  3538,  3542,  3544,  3546,  3548,  3550,
    3552,  3554,  3556,  3558,  3560,  3562,  3563,  3566,  3571,  3577,
    3583,  3589,  3595,  3601,  3603,  3605,  3607,  3609,  3611,  3613,
    3615,  3617,  3619,  3621,  3623,  3625,  3627,  3629,  3631,  3633,
    3635,  3637,  3639,  3641,  3643,  3645,  3647,  3649,  3651,  3653,
    3655,  3657,  3659,  3661,  3663,  3665,  3667,  3669,  3671,  3673,
    3675,  3677,  3679,  3681,  3683,  3685,  3687,  3689,  3691,  3693,
    3695,  3697,  3699,  3701,  3703,  3705,  3707,  3709,  3711,  3713,
    3715,  3717,  3719,  3721,  3723,  3725,  3727,  3729,  3731,  3733,
    3735,  3737,  3739,  3741,  3743,  3745,  3747,  3749,  3751,  3753,
    3755,  3757,  3759,  3761,  3763,  3765,  3767,  3769,  3771,  3773,
    3775,  3777,  3779,  3781,  3783,  3785,  3787,  3789,  3791,  3793,
    3795,  3797,  3799,  3801,  3803,  3805,  3807,  3809,  3811,  3813,
    3815,  3817,  3819,  3821,  3823,  3825,  3827,  3829,  3831,  3833,
    3835,  3837,  3839,  3841,  3843,  3845,  3847,  3849,  3853,  3859,
    3863,  3869,  3871,  3876,  3882,  3884,  3888,  3890,  3892,  3894,
    3896,  3898,  3900,  3902,  3904,  3918,  3920,  3922,  3924,  3926,
    3928,  3930,  3934,  3940,  3945,  3950,  3952,  3958,  3959,  3962,
    3966,  3969,  3973,  3976,  3979,  3982,  3984,  3987,  3989,  3993,
    3999,  4004,  4009,  4016,  4023,  4024,  4027,  4030,  4032
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     385,     0,    -1,   424,   377,    -1,   424,   377,   385,    -1,
       3,    -1,     3,   378,     3,    -1,    82,   378,     3,    -1,
     176,   379,     3,   380,    84,   379,     4,   380,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   186,
      -1,   386,    24,   386,    -1,   386,    25,   386,    -1,   386,
      26,   386,    -1,   386,    27,   386,    -1,   386,    28,   386,
      -1,   386,    29,   386,    -1,    25,   386,    -1,   379,   386,
     380,    -1,   386,    12,   386,    -1,   386,    10,   386,    -1,
     386,    11,   386,    -1,   386,    21,   386,    -1,   386,    22,
     386,    -1,   386,    30,   386,    -1,   386,    23,   386,    -1,
     386,    32,   386,    -1,   386,    31,   386,    -1,    18,   386,
      -1,    17,   386,    -1,   386,    20,   386,    -1,    -1,   386,
      20,   379,   387,   425,   380,    -1,    -1,   386,    20,    40,
     379,   388,   425,   380,    -1,    -1,   386,    20,   226,   379,
     389,   425,   380,    -1,    -1,   386,    20,    38,   379,   390,
     425,   380,    -1,   386,    20,    40,   379,   394,   380,    -1,
     386,    20,   226,   379,   394,   380,    -1,   386,    15,   186,
      -1,   386,    15,    18,   186,    -1,   386,    15,     6,    -1,
     386,    15,    18,     6,    -1,     8,     9,   386,    -1,   386,
      19,   386,    43,   386,    -1,   386,    18,    19,   386,    43,
     386,    -1,   386,    -1,   386,   381,   391,    -1,   386,    -1,
     386,   381,   392,    -1,    -1,   257,    34,   393,   392,   382,
      -1,   257,    34,   382,    -1,   386,    34,   386,   382,    -1,
     386,    -1,   373,   379,   386,   380,    -1,   373,   379,   386,
     381,   386,   380,    -1,   374,   379,   386,   380,    -1,   375,
     379,   386,   381,   386,   380,    -1,   376,   379,   380,    -1,
      -1,   391,    -1,    -1,   386,    16,   379,   396,   391,   380,
      -1,    -1,   386,    18,    16,   379,   397,   391,   380,    -1,
      -1,   386,    16,   379,   398,   425,   380,    -1,    -1,   386,
      18,    16,   379,   399,   425,   380,    -1,    -1,   274,   379,
     400,   425,   380,    -1,     3,   379,   395,   380,    -1,   315,
     379,    26,   380,    -1,   315,   379,   386,   380,    -1,   316,
     379,   386,   380,    -1,   317,   379,   386,   380,    -1,   318,
     379,   386,   380,    -1,   319,   379,   386,   380,    -1,   313,
     379,   386,   380,    -1,   313,   379,   386,   314,     4,   380,
      -1,    -1,   335,   379,   380,   343,   379,   401,   432,   434,
     380,    -1,    -1,   336,   379,   380,   343,   379,   402,   432,
     434,   380,    -1,    -1,   337,   379,   380,   343,   379,   403,
     432,   434,   380,    -1,    -1,   316,   379,   386,   380,   343,
     379,   404,   432,   434,   380,    -1,    -1,   315,   379,    26,
     380,   343,   379,   405,   432,   434,   380,    -1,    -1,   315,
     379,   386,   380,   343,   379,   406,   432,   434,   380,    -1,
      -1,   317,   379,   386,   380,   343,   379,   407,   432,   434,
     380,    -1,    -1,   318,   379,   386,   380,   343,   379,   408,
     432,   434,   380,    -1,    -1,   319,   379,   386,   380,   343,
     379,   409,   432,   434,   380,    -1,    -1,   338,   379,   386,
     380,   343,   379,   410,   432,   434,   380,    -1,    -1,   338,
     379,   386,   381,     5,   380,   343,   379,   411,   432,   434,
     380,    -1,    -1,   338,   379,   386,   381,     5,   381,     4,
     380,   343,   379,   412,   432,   434,   380,    -1,    -1,   338,
     379,   386,   381,     5,   381,     5,   380,   343,   379,   413,
     432,   434,   380,    -1,    -1,   339,   379,   386,   380,   343,
     379,   414,   432,   434,   380,    -1,    -1,   339,   379,   386,
     381,     5,   380,   343,   379,   415,   432,   434,   380,    -1,
      -1,   339,   379,   386,   381,     5,   381,     4,   380,   343,
     379,   416,   432,   434,   380,    -1,    -1,   339,   379,   386,
     381,     5,   381,     5,   380,   343,   379,   417,   432,   434,
     380,    -1,    -1,   340,   379,     5,   380,   343,   379,   418,
     432,   434,   380,    -1,    -1,   341,   379,   380,   343,   379,
     419,   432,   434,   380,    -1,    -1,   342,   379,   380,   343,
     379,   420,   432,   434,   380,    -1,   275,   379,   386,   381,
     386,   381,   386,   380,    -1,   275,   379,   386,   381,   386,
     380,    -1,   275,   379,   386,   129,   386,   380,    -1,   275,
     379,   386,   129,   386,   133,   386,   380,    -1,   276,   379,
     386,   380,    -1,   276,   379,   421,   386,   129,   386,   380,
      -1,   276,   379,   421,   129,   386,   380,    -1,   320,   379,
     386,   380,    -1,   321,   379,   386,   380,    -1,   322,   379,
     386,   380,    -1,   323,   379,   386,   381,   386,   380,    -1,
     324,   379,   386,   381,   386,   381,   386,   380,    -1,   325,
     379,   386,   381,   386,   380,    -1,   287,   379,   386,   381,
     386,   380,    -1,   288,   379,   386,   381,   386,   380,    -1,
     289,   379,   386,   381,   386,   381,   386,   380,    -1,   290,
     379,   386,   381,   386,   381,   386,   380,    -1,   291,   379,
     386,   380,    -1,   292,   379,   386,   381,   386,   380,    -1,
     293,   379,   386,   381,   386,   380,    -1,   294,   379,   386,
     381,   386,   380,    -1,   295,   379,   386,   380,    -1,   296,
     379,   386,   380,    -1,   297,   379,   386,   380,    -1,   298,
     379,   386,   381,   386,   380,    -1,   298,   379,   386,   380,
      -1,   299,   379,   386,   381,   386,   380,    -1,   300,   379,
     386,   380,    -1,   301,   379,   386,   381,   386,   380,    -1,
     302,   379,   380,    -1,   303,   379,   386,   380,    -1,   304,
     379,   386,   380,    -1,   305,   379,   386,   380,    -1,   306,
     379,   380,    -1,   286,   379,   380,    -1,   279,   379,   386,
     381,   386,   380,    -1,   280,   379,   386,   380,    -1,   281,
     379,   386,   380,    -1,   282,   379,   386,   380,    -1,   283,
     379,   386,   380,    -1,   284,   379,   386,   380,    -1,   285,
     379,   386,   380,    -1,   345,   379,   386,   381,   386,   380,
      -1,   346,   379,   386,   380,    -1,   347,   379,   386,   380,
      -1,   348,   379,   386,   380,    -1,   349,   379,   386,   380,
      -1,   350,   379,   386,   380,    -1,   351,   379,   386,   380,
      -1,   352,   379,   386,   380,    -1,   353,   379,   386,   380,
      -1,   354,   379,   386,   381,   386,   381,   386,   380,    -1,
     355,   379,   386,   381,   386,   381,   386,   380,    -1,   356,
     379,   386,   381,   386,   381,   386,   380,    -1,   357,   379,
     386,   381,   386,   380,    -1,   358,   379,   386,   381,   386,
     380,    -1,   359,   379,   386,   381,   386,   381,   386,   380,
      -1,   360,   379,   386,   381,   386,   381,   386,   380,    -1,
     361,   379,   386,   381,   386,   380,    -1,   361,   379,   386,
     381,   386,   381,   386,   381,   386,   380,    -1,   362,   379,
     386,   380,    -1,   362,   379,   386,   381,   386,   380,    -1,
     362,   379,   386,   381,   386,   381,   386,   380,    -1,   363,
     379,   386,   380,    -1,   365,   379,   386,   380,    -1,   366,
     379,   386,   380,    -1,   367,   379,   386,   381,   386,   380,
      -1,   367,   379,   386,   381,   386,   381,   386,   380,    -1,
     368,   379,   380,    -1,   307,   379,   386,    44,   544,   380,
      -1,   308,   379,   386,   381,   544,   380,    -1,   309,   379,
     386,   381,   386,   380,    -1,   310,   379,   386,   381,   386,
     380,    -1,   311,   379,   386,   381,   386,   381,   386,   380,
      -1,   386,    15,   312,    -1,   323,   379,   386,   381,   386,
     381,   386,   380,    -1,   323,   379,   386,   381,   386,   381,
     386,   381,   386,   380,    -1,   326,   379,   380,    -1,   327,
     379,   380,    -1,   328,   379,   380,    -1,   329,   379,   380,
      -1,   330,   379,   380,    -1,   331,    -1,   332,    -1,   333,
     379,   386,   380,    -1,   334,   379,   386,   381,   386,   380,
      -1,   171,    -1,   248,    -1,    58,    -1,   277,   379,   386,
     381,   422,   380,    -1,   278,   379,   386,   381,   422,   380,
      -1,   154,   386,   271,    -1,   154,   386,    97,    -1,   154,
     386,    98,    -1,   154,   386,   102,    -1,   154,   386,   104,
      -1,   154,   386,   272,    -1,   154,   386,   138,    -1,   154,
     386,   137,    -1,   154,   386,   140,    -1,    70,   386,   423,
     117,    -1,    70,   386,   423,   118,   386,   117,    -1,    70,
     423,   117,    -1,    70,   423,   118,   386,   117,    -1,   268,
     386,   247,   386,    -1,   423,   268,   386,   247,   386,    -1,
     386,    14,   386,    -1,   386,    18,    14,   386,    -1,   386,
      13,   386,    -1,   386,    18,    13,   386,    -1,    65,    -1,
      73,    -1,    74,    -1,   219,    -1,   425,    -1,   235,   443,
     444,    -1,   235,   443,   444,   129,   447,   426,   427,   431,
     436,   439,   440,   441,    -1,   235,   443,   444,   152,     3,
     129,   447,   426,   427,   431,   436,   439,    -1,    -1,   267,
     386,    -1,    -1,   134,    56,   428,   430,    -1,   386,   429,
      -1,   428,   381,   386,   429,    -1,    -1,    42,    -1,   105,
      -1,    -1,   270,   207,    -1,    -1,   141,   386,    -1,    -1,
     344,    56,   433,    -1,     3,    -1,   433,   381,     3,    -1,
      -1,   191,    56,   435,    -1,     3,   429,    -1,   435,   381,
       3,   429,    -1,    -1,   191,    56,   437,    -1,   438,    -1,
     437,   381,   438,    -1,     3,   429,    -1,     3,   378,     3,
     429,    -1,     5,   429,    -1,    -1,   172,   386,    -1,   172,
     386,   381,   386,    -1,   172,   386,   174,   386,    -1,    -1,
     133,   252,    -1,   133,   224,    -1,   133,   252,   225,   173,
      -1,   133,   224,   225,   173,    -1,    -1,   152,   442,    -1,
       3,    -1,   442,   381,     3,    -1,    -1,   443,    38,    -1,
     443,    99,    -1,   443,   103,    -1,   443,   139,    -1,   443,
     232,    -1,   443,   220,    -1,   443,   228,    -1,   443,   227,
      -1,   445,    -1,   444,   381,   445,    -1,    26,    -1,   386,
     446,    -1,    44,     3,    -1,     3,    -1,    -1,   448,    -1,
     447,   381,   448,    -1,   449,    -1,   453,    -1,     3,   446,
     460,    -1,   166,     3,   446,   460,    -1,     3,   378,     3,
     446,   460,    -1,   463,   452,     3,    -1,   450,   452,     3,
      -1,   374,   379,   386,   380,    -1,   374,   379,   386,   380,
     452,     3,    -1,   374,   379,   386,   380,   452,     3,   379,
       3,   380,    -1,   379,   447,   380,    -1,    -1,   160,   379,
     451,   425,   380,    -1,    44,    -1,    -1,   448,   454,   156,
     449,   458,    -1,   448,   232,   449,    -1,   448,   232,   449,
     190,   386,    -1,   448,   456,   455,   156,   449,   459,    -1,
     448,   183,   457,   156,   449,    -1,    -1,   146,    -1,    69,
      -1,    -1,   189,    -1,   170,    -1,   208,    -1,   170,   455,
      -1,   208,   455,    -1,    -1,    -1,   459,    -1,   190,   386,
      -1,   260,   379,   442,   380,    -1,   261,   157,   461,   379,
     462,   380,    -1,   147,   157,   461,   379,   462,   380,    -1,
     126,   157,   461,   379,   462,   380,    -1,    -1,   133,   156,
      -1,    -1,     3,    -1,   462,   381,     3,    -1,   379,   425,
     380,    -1,   464,    -1,   100,   465,   129,     3,   426,   436,
     439,   570,    -1,   465,   169,    -1,   465,   196,    -1,   465,
     147,    -1,    -1,   100,   465,   466,   129,   447,   426,    -1,
       3,   467,    -1,   466,   381,     3,   467,    -1,    -1,   378,
      26,    -1,   100,   465,   129,   466,   260,   447,   426,    -1,
     468,    -1,   101,   246,     3,   469,    -1,   101,   246,   149,
     274,     3,   469,    -1,    -1,    67,    -1,   203,    -1,   470,
      -1,    66,   148,     3,   190,     3,   379,   471,   380,    -1,
      66,   131,   148,     3,   190,     3,   379,   471,   380,    -1,
      66,   148,   149,   274,     3,   190,     3,   379,   471,   380,
      -1,    66,   255,   148,     3,   190,     3,   379,   471,   380,
      -1,    66,   255,   148,   149,   274,     3,   190,     3,   379,
     471,   380,    -1,    66,   148,     3,   190,     3,   260,   262,
     379,   471,   380,    -1,    66,   148,   149,   274,     3,   190,
       3,   260,   262,   379,   471,   380,    -1,    66,   255,   148,
       3,   190,     3,   260,   262,   379,   471,   380,    -1,    66,
     255,   148,   149,   274,     3,   190,     3,   260,   262,   379,
     471,   380,    -1,    66,   148,    78,     3,   190,     3,   379,
     471,   380,    -1,    66,   148,    78,   149,   274,     3,   190,
       3,   379,   471,   380,    -1,    66,   255,   148,    78,     3,
     190,     3,   379,   471,   380,    -1,    66,   255,   148,    78,
     149,   274,     3,   190,     3,   379,   471,   380,    -1,    66,
     148,    78,     3,   190,     3,   260,   262,   379,   471,   380,
      -1,    66,   255,   148,    78,     3,   190,     3,   260,   262,
     379,   471,   380,    -1,     3,    -1,   471,   381,     3,    -1,
     472,    -1,   320,   379,     3,   380,    -1,   321,   379,     3,
     380,    -1,   322,   379,     3,   380,    -1,   323,   379,     3,
     381,     3,   380,    -1,   473,    -1,   101,   148,     3,    -1,
     474,   476,    -1,   249,   246,     3,    -1,   249,   246,     3,
     381,   475,    -1,     3,    -1,   475,   381,     3,    -1,    -1,
     476,    67,    -1,   476,   203,    -1,   476,    48,    46,    -1,
     476,    47,    46,    -1,   477,    -1,   478,    -1,   479,    -1,
     161,     3,    -1,   161,     3,   164,    -1,   163,     3,    -1,
     163,    26,    -1,   162,     3,    -1,   162,     3,   381,     4,
      -1,   480,    -1,   199,   246,     3,    -1,   481,    -1,    39,
     246,     3,    -1,    39,   246,     3,   378,     3,    -1,   490,
      -1,   482,    -1,   489,    -1,    66,   214,     3,   190,     3,
     483,   484,   485,   487,   488,    -1,    -1,    44,   217,    -1,
      44,   218,    -1,    -1,   133,    38,    -1,   133,   235,    -1,
     133,   150,    -1,   133,   252,    -1,   133,   100,    -1,    -1,
     239,   486,    -1,     3,    -1,   486,   381,     3,    -1,    -1,
     260,   379,   386,   380,    -1,    -1,   270,    71,   379,   386,
     380,    -1,   101,   214,     3,   190,     3,    -1,    35,   246,
       3,    36,    64,     3,    71,   379,   386,   380,    -1,    35,
     246,     3,    36,    64,     3,   255,   379,   537,   380,    -1,
      35,   246,     3,    36,    64,     3,   127,   157,   379,   534,
     380,   200,     3,   379,   535,   380,   536,    -1,    35,   246,
       3,    36,    64,     3,    71,   379,   386,   380,    18,   263,
      -1,    35,   246,     3,    36,    64,     3,   127,   157,   379,
     534,   380,   200,     3,   379,   535,   380,   536,    18,   263,
      -1,    35,   246,     3,    36,    64,     3,   194,   157,   379,
     533,   380,    -1,    35,   246,     3,   101,    64,     3,    -1,
      35,   246,     3,   201,    64,     3,   239,     3,    -1,    35,
     246,     3,   113,    64,     3,    -1,    35,   246,     3,    93,
      64,     3,    -1,    35,   246,     3,   263,    64,     3,    -1,
      35,   246,     3,    36,    77,     3,   544,   539,   491,    -1,
      35,   246,     3,   101,    77,     3,    -1,    35,   246,     3,
     101,     3,    -1,    35,   246,     3,   201,    77,     3,   239,
       3,    -1,    35,   246,     3,   201,     3,   239,     3,    -1,
      35,   246,     3,   180,    77,     3,   544,   539,   491,    -1,
      35,   246,     3,   180,     3,   544,   539,   491,    -1,    35,
     246,     3,    68,    77,     3,     3,   544,   539,   491,    -1,
      35,   246,     3,    68,     3,     3,   544,   539,   491,    -1,
      35,   246,     3,   113,   210,   215,   216,    -1,    35,   246,
       3,    93,   210,   215,   216,    -1,    -1,   123,    -1,    37,
       3,    -1,   492,    -1,   150,   500,   501,     3,   502,   265,
     504,   493,   495,   570,    -1,   150,   500,   501,     3,   502,
     425,    -1,    -1,    -1,   192,   157,   252,   494,   499,    -1,
      -1,   190,    81,   496,   497,    -1,    -1,   379,     3,   380,
      -1,   379,     3,   381,     3,    -1,    94,    83,    -1,    -1,
      94,   252,   498,   234,   499,    -1,     3,    20,   386,    -1,
     499,   381,     3,    20,   386,    -1,    -1,   500,   169,    -1,
     500,    96,    -1,   500,   139,    -1,   500,   147,    -1,   152,
      -1,    -1,    -1,   379,   503,   380,    -1,     3,    -1,   503,
     381,     3,    -1,   379,   506,   380,    -1,    -1,   504,   381,
     505,   379,   506,   380,    -1,   386,    -1,   106,    -1,   506,
     381,   386,    -1,   506,   381,   106,    -1,   150,   500,   501,
       3,   234,   507,   493,    -1,     3,    20,   386,    -1,     3,
      20,   106,    -1,   507,   381,     3,    20,   386,    -1,   507,
     381,     3,    20,   106,    -1,   508,    -1,   209,   500,   501,
       3,   502,   265,   504,   493,    -1,   209,   500,   501,     3,
     234,   507,   493,    -1,   209,   500,   501,     3,   502,   425,
     493,    -1,   509,    -1,    -1,    79,     3,   510,   511,   513,
     514,   515,    -1,    -1,   379,   512,   380,    -1,     3,    -1,
     512,   381,     3,    -1,   129,    -1,   239,    -1,     4,    -1,
     230,    -1,   231,    -1,    -1,   516,    -1,   270,   379,   516,
     380,    -1,   379,   516,   380,    -1,   517,    -1,   516,   381,
     517,    -1,   128,    80,    -1,   128,   243,    -1,    92,     4,
      -1,   136,    -1,   136,     6,    -1,   186,     4,    -1,   236,
       4,    -1,    80,    -1,   518,    -1,   252,   519,   447,   234,
     520,   426,   436,   439,   570,    -1,    -1,   500,   169,    -1,
     500,   147,    -1,     3,    20,   386,    -1,     3,   378,     3,
      20,   386,    -1,   520,   381,     3,    20,   386,    -1,   520,
     381,     3,   378,     3,    20,   386,    -1,   201,   246,     3,
     239,     3,    -1,   521,    -1,    66,    88,   522,     3,    -1,
      66,   221,   522,     3,    -1,   101,    88,     3,    -1,   101,
      88,   149,   274,     3,    -1,   101,   221,     3,    -1,   101,
     221,   149,   274,     3,    -1,    -1,   149,   274,    -1,   523,
      -1,    66,    95,     3,    44,   544,    -1,    66,    95,     3,
      44,   544,   106,   386,    -1,    66,    95,     3,    44,   544,
      18,   186,    -1,    66,    95,     3,    44,   544,    71,   379,
     386,   380,    -1,    66,    95,     3,    44,   544,    18,   186,
      71,   379,   386,   380,    -1,   524,    -1,   261,     3,    -1,
     261,    88,     3,    -1,   525,    -1,    66,   530,   246,   522,
       3,   379,   531,   380,   527,   526,    -1,    -1,   165,   379,
       3,   380,    -1,    66,   530,   246,   522,     3,   378,     3,
     379,   531,   380,   527,    -1,    66,   530,   246,   522,     3,
     344,    87,     3,   133,   265,   129,   379,     5,   380,   239,
     379,     5,   380,    -1,    -1,   527,    41,    20,     5,    -1,
     527,    41,     5,    -1,   527,   190,     3,   100,     3,    -1,
     527,   190,     3,   242,     3,    -1,   527,   222,    56,   262,
     379,     3,   380,   223,     5,    -1,   527,   222,    56,   197,
     379,     3,   380,   379,   528,   380,    -1,   527,   344,    56,
     197,   379,     3,   380,    -1,   529,    -1,   528,   381,   529,
      -1,   222,     3,   265,   167,   244,     4,   190,   184,     5,
      -1,   222,     3,   265,   167,   244,   177,   190,   184,     5,
      -1,    66,   530,   246,   522,     3,   379,   531,   380,   546,
      -1,    66,   530,   246,   522,     3,   546,    -1,    66,   530,
     246,   522,     3,   378,     3,   379,   531,   380,   546,    -1,
      66,   530,   246,   522,     3,   378,     3,   546,    -1,    -1,
     240,    -1,   241,   240,    -1,   532,    -1,   531,   381,   532,
      -1,   194,   157,   379,   533,   380,    -1,    64,     3,   194,
     157,   379,   533,   380,    -1,   157,   379,   442,   380,    -1,
     148,   379,   442,   380,    -1,   131,   148,   379,   442,   380,
      -1,   131,   157,   379,   442,   380,    -1,    71,   379,   386,
     380,    -1,    64,     3,    71,   379,   386,   380,    -1,   127,
     157,   379,   534,   380,   200,     3,   379,   535,   380,   536,
      -1,   127,   157,   379,   534,   380,   200,     3,   378,     3,
     379,   535,   380,   536,    -1,    64,     3,   127,   157,   379,
     534,   380,   200,     3,   379,   535,   380,   536,    -1,    64,
       3,   127,   157,   379,   534,   380,   200,     3,   378,     3,
     379,   535,   380,   536,    -1,   255,   379,   537,   380,    -1,
      64,     3,   255,   379,   537,   380,    -1,     3,    -1,   533,
     381,     3,    -1,     3,    -1,   534,   381,     3,    -1,     3,
      -1,   535,   381,     3,    -1,    -1,   536,   190,   100,    67,
      -1,   536,   190,   100,   234,   186,    -1,   536,   190,   100,
     203,    -1,   536,   190,   100,   234,   106,    -1,   536,   190,
     252,    67,    -1,   536,   190,   252,   234,   186,    -1,   536,
     190,   252,   203,    -1,   536,   190,   252,   234,   106,    -1,
     536,   190,   100,   185,    -1,   536,   190,   252,   185,    -1,
     536,   176,   130,    -1,   536,   176,   229,    -1,   536,   176,
     193,    -1,   536,    90,    -1,   536,    18,    90,    -1,   536,
      90,   144,    91,    -1,   536,    90,   144,   142,    -1,     3,
      -1,   537,   381,     3,    -1,    -1,   538,     3,   544,   539,
      -1,    -1,   539,    18,   186,    -1,   539,   186,    -1,   539,
     106,     4,    -1,   539,   106,     5,    -1,   539,   106,     7,
      -1,   539,   106,     6,    -1,   539,   106,   326,   379,   380,
      -1,   539,   106,   327,   379,   380,    -1,   539,   106,   328,
     379,   380,    -1,   539,   106,    65,    -1,   539,   106,   379,
     386,   380,    -1,   539,    41,    -1,   539,    41,   379,     5,
     381,     5,   380,    -1,   539,    41,   379,     5,   380,    -1,
     539,    46,   379,     5,   381,     5,   380,    -1,   539,    46,
     379,     5,   380,    -1,   539,    46,    -1,   539,   255,   157,
      -1,   539,   255,    -1,   539,   194,   157,    -1,   539,   157,
      -1,   539,    72,     4,    -1,   539,    71,   379,   386,   380,
      -1,   539,    64,     3,   255,    -1,   539,    64,     3,   194,
     157,    -1,   539,    64,     3,    71,   379,   386,   380,    -1,
     539,    49,    45,    44,   379,   386,   380,    50,    -1,   539,
      49,    45,    44,   379,   386,   380,    51,    -1,   539,    49,
      45,    44,   379,   386,   380,    -1,   539,    44,   379,   386,
     380,    50,    -1,   539,    44,   379,   386,   380,    51,    -1,
     539,    44,   379,   386,   380,    -1,    -1,   379,     5,   380,
      -1,   379,     5,   381,     5,   380,    -1,    -1,    57,    -1,
      -1,   542,   253,    -1,   542,   273,    -1,    -1,   543,    75,
     234,     4,    -1,   543,    76,     4,    -1,    60,   540,    -1,
     238,   540,   542,    -1,   233,   540,   542,    -1,   182,   540,
     542,    -1,   153,   540,   542,    -1,   145,   540,   542,    -1,
      59,   540,   542,    -1,   198,   540,   542,    -1,   107,   540,
     542,    -1,   125,   540,   542,    -1,   109,   540,   542,    -1,
     110,    -1,   251,    -1,   245,    -1,   108,    -1,   271,    -1,
      75,   540,   543,    -1,   264,   379,     5,   380,   543,    -1,
      57,   540,    -1,   266,   379,     5,   380,    -1,   250,    -1,
      54,    -1,   181,    -1,   175,    -1,   237,   541,   543,    -1,
     243,   541,   543,    -1,   178,   541,   543,    -1,   168,   541,
     543,    -1,   116,   379,   545,   380,   543,    -1,   234,   379,
     545,   380,   543,    -1,    55,    -1,   256,    -1,   258,    -1,
     544,    34,   382,    -1,     4,    -1,   545,   381,     4,    -1,
     547,   452,   425,    -1,    -1,   147,    -1,   209,    -1,   548,
      -1,   234,   221,     3,    -1,   234,   221,   106,    -1,   234,
     549,    -1,   550,    -1,   549,   381,   550,    -1,     8,    20,
     386,    -1,     8,     9,   386,    -1,   551,    -1,    66,   195,
       3,   379,   552,   380,    44,    53,   556,   117,    -1,    66,
     195,     3,   379,   552,   380,    53,   556,   117,    -1,    66,
      10,   209,   195,     3,   379,   552,   380,    44,    53,   556,
     117,    -1,    66,    10,   209,   195,     3,   379,   552,   380,
      53,   556,   117,    -1,    66,   132,     3,   379,   552,   380,
     206,   555,    44,    53,   556,   117,    -1,    66,   132,     3,
     379,   552,   380,   206,   555,    53,   556,   117,    -1,    66,
      10,   209,   132,     3,   379,   552,   380,   206,   555,    44,
      53,   556,   117,    -1,    66,    10,   209,   132,     3,   379,
     552,   380,   206,   555,    53,   556,   117,    -1,    -1,   553,
      -1,   554,    -1,   553,   381,   554,    -1,     3,   544,    -1,
      16,     3,   544,    -1,   188,     3,   544,    -1,   143,     3,
     544,    -1,   145,    -1,   153,    -1,   264,    -1,   243,    -1,
      55,    -1,   125,    -1,   107,    -1,    59,    -1,   110,    -1,
     245,    -1,    -1,   556,   557,    -1,   556,    53,   556,   117,
      -1,   556,   149,   556,   117,   149,    -1,   556,   269,   556,
     117,   269,    -1,   556,   159,   556,   117,   159,    -1,   556,
     124,   556,   117,   124,    -1,   556,    70,   556,   117,    70,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,
      -1,    43,    -1,   235,    -1,   150,    -1,   252,    -1,   100,
      -1,   129,    -1,   267,    -1,   234,    -1,   152,    -1,   265,
      -1,    66,    -1,   101,    -1,   246,    -1,   148,    -1,   247,
      -1,   118,    -1,   112,    -1,    89,    -1,    94,    -1,    61,
      -1,   204,    -1,   158,    -1,   155,    -1,    63,    -1,   187,
      -1,   122,    -1,    62,    -1,   135,    -1,   120,    -1,   188,
      -1,   143,    -1,   133,    -1,    47,    -1,   211,    -1,   202,
      -1,   119,    -1,   213,    -1,    52,    -1,   111,    -1,   210,
      -1,   212,    -1,    44,    -1,   190,    -1,   191,    -1,    56,
      -1,   134,    -1,   141,    -1,   172,    -1,   174,    -1,   156,
      -1,   170,    -1,   208,    -1,   146,    -1,   189,    -1,   130,
      -1,    69,    -1,   183,    -1,   260,    -1,   186,    -1,   106,
      -1,   194,    -1,   157,    -1,   255,    -1,    71,    -1,   127,
      -1,   200,    -1,    67,    -1,   203,    -1,   185,    -1,   145,
      -1,   153,    -1,   264,    -1,   243,    -1,    55,    -1,   125,
      -1,   107,    -1,    59,    -1,   110,    -1,   245,    -1,   233,
      -1,   109,    -1,    75,    -1,   256,    -1,    54,    -1,   254,
      -1,   115,    -1,   151,    -1,    38,    -1,    99,    -1,   274,
      -1,   268,    -1,   270,    -1,   195,    -1,   132,    -1,   206,
      -1,   379,    -1,   380,    -1,   381,    -1,   377,    -1,   378,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    17,    -1,   383,    -1,   315,    -1,   316,    -1,   317,
      -1,   318,    -1,   319,    -1,     8,    -1,   558,    -1,   101,
     195,     3,    -1,   101,   195,   149,   274,     3,    -1,   101,
     132,     3,    -1,   101,   132,   149,   274,     3,    -1,   559,
      -1,    61,     3,   379,   380,    -1,    61,     3,   379,   560,
     380,    -1,   561,    -1,   560,   381,   561,    -1,     5,    -1,
       4,    -1,     7,    -1,   186,    -1,     6,    -1,     3,    -1,
       8,    -1,   562,    -1,    66,   212,     3,   563,   564,   190,
       3,   133,   111,   210,    53,   556,   117,    -1,    52,    -1,
      37,    -1,   150,    -1,   252,    -1,   100,    -1,   565,    -1,
     101,   212,     3,    -1,   101,   212,   149,   274,     3,    -1,
      35,   212,     3,   113,    -1,    35,   212,     3,    93,    -1,
     566,    -1,    66,   364,   522,     3,   567,    -1,    -1,   567,
     568,    -1,   369,   270,     5,    -1,   369,     5,    -1,   370,
      56,     5,    -1,   370,     5,    -1,   371,     5,    -1,   177,
       5,    -1,   372,    -1,    18,   372,    -1,   569,    -1,   101,
     364,     3,    -1,   101,   364,   149,   274,     3,    -1,    35,
     364,     3,   567,    -1,    35,   364,     3,    48,    -1,    35,
     364,     3,    48,   270,     5,    -1,    35,   364,     3,   201,
     239,     3,    -1,    -1,   205,    26,    -1,   205,   571,    -1,
       3,    -1,   571,   381,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   465,   465,   466,   471,   478,   479,   480,   494,   495,
     523,   531,   539,   545,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   578,   578,   587,   587,   589,   589,
     591,   591,   596,   598,   602,   603,   604,   605,   606,   609,
     610,   613,   622,   640,   649,   669,   669,   729,   738,   745,
     749,   751,   753,   758,   763,   770,   771,   774,   774,   775,
     775,   776,   776,   784,   784,   792,   792,   803,   807,   808,
     809,   810,   811,   812,   813,   814,   818,   818,   820,   820,
     822,   822,   825,   825,   827,   827,   829,   829,   831,   831,
     833,   833,   835,   835,   838,   838,   840,   840,   842,   842,
     844,   844,   846,   846,   848,   848,   850,   850,   852,   852,
     855,   855,   857,   857,   859,   859,   863,   864,   865,   866,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     898,   899,   900,   901,   902,   903,   904,   905,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     930,   931,   932,   933,   934,   936,   937,   939,   940,   941,
     943,   944,   945,   946,   953,   960,   967,   971,   975,   979,
     983,   987,   993,   994,   995,   998,  1004,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1022,  1024,  1026,  1028,
    1032,  1040,  1051,  1052,  1055,  1056,  1059,  1067,  1075,  1083,
    1097,  1107,  1108,  1121,  1137,  1138,  1139,  1140,  1143,  1150,
    1158,  1159,  1160,  1163,  1164,  1167,  1168,  1172,  1173,  1176,
    1178,  1182,  1183,  1186,  1188,  1192,  1193,  1196,  1197,  1200,
    1206,  1213,  1222,  1223,  1224,  1225,  1228,  1229,  1230,  1231,
    1232,  1235,  1236,  1239,  1240,  1243,  1244,  1245,  1246,  1247,
    1248,  1249,  1250,  1251,  1254,  1255,  1256,  1264,  1270,  1271,
    1272,  1275,  1276,  1279,  1280,  1284,  1292,  1302,  1303,  1304,
    1313,  1318,  1324,  1332,  1336,  1336,  1376,  1377,  1381,  1383,
    1385,  1387,  1389,  1393,  1394,  1395,  1398,  1399,  1402,  1403,
    1406,  1407,  1408,  1411,  1412,  1415,  1416,  1420,  1422,  1424,
    1426,  1429,  1430,  1433,  1434,  1437,  1441,  1451,  1459,  1460,
    1461,  1462,  1466,  1470,  1472,  1476,  1476,  1478,  1483,  1490,
    1497,  1509,  1510,  1511,  1515,  1522,  1529,  1537,  1547,  1555,
    1565,  1573,  1582,  1591,  1601,  1609,  1618,  1627,  1637,  1646,
    1658,  1663,  1668,  1674,  1681,  1688,  1695,  1705,  1712,  1721,
    1728,  1734,  1742,  1748,  1756,  1757,  1758,  1759,  1760,  1776,
    1777,  1778,  1781,  1787,  1798,  1804,  1811,  1817,  1833,  1840,
    1849,  1856,  1862,  1873,  1877,  1878,  1882,  1893,  1894,  1895,
    1899,  1900,  1901,  1902,  1903,  1904,  1907,  1909,  1913,  1914,
    1917,  1919,  1922,  1924,  1928,  1937,  1943,  1949,  1956,  1962,
    1969,  1975,  1981,  1987,  1993,  1999,  2005,  2011,  2017,  2023,
    2029,  2035,  2041,  2047,  2053,  2059,  2065,  2073,  2074,  2075,
    2078,  2086,  2092,  2105,  2106,  2106,  2110,  2111,  2114,  2115,
    2116,  2120,  2121,  2121,  2125,  2133,  2143,  2144,  2145,  2146,
    2147,  2150,  2150,  2153,  2154,  2157,  2167,  2180,  2181,  2181,
    2184,  2185,  2186,  2187,  2190,  2194,  2195,  2196,  2197,  2203,
    2206,  2212,  2217,  2223,  2227,  2227,  2232,  2233,  2235,  2236,
    2240,  2241,  2245,  2246,  2247,  2250,  2251,  2252,  2253,  2257,
    2258,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2273,
    2281,  2290,  2291,  2292,  2296,  2307,  2319,  2330,  2345,  2350,
    2354,  2355,  2359,  2361,  2363,  2365,  2369,  2370,  2376,  2380,
    2382,  2384,  2386,  2388,  2393,  2397,  2398,  2402,  2411,  2424,
    2425,  2433,  2441,  2449,  2450,  2451,  2452,  2453,  2454,  2456,
    2458,  2462,  2463,  2466,  2481,  2488,  2503,  2516,  2531,  2544,
    2545,  2546,  2549,  2550,  2553,  2554,  2555,  2556,  2557,  2558,
    2559,  2560,  2561,  2563,  2565,  2567,  2569,  2571,  2575,  2576,
    2579,  2580,  2583,  2584,  2587,  2588,  2589,  2590,  2591,  2592,
    2593,  2594,  2595,  2596,  2597,  2598,  2599,  2600,  2601,  2602,
    2603,  2604,  2607,  2608,  2611,  2611,  2621,  2622,  2623,  2624,
    2625,  2626,  2627,  2628,  2629,  2630,  2631,  2632,  2639,  2640,
    2641,  2642,  2643,  2644,  2645,  2646,  2647,  2648,  2649,  2650,
    2651,  2652,  2653,  2654,  2655,  2656,  2657,  2658,  2659,  2662,
    2663,  2664,  2667,  2668,  2671,  2672,  2673,  2676,  2677,  2678,
    2682,  2683,  2684,  2685,  2686,  2687,  2688,  2689,  2690,  2691,
    2692,  2693,  2694,  2695,  2696,  2697,  2698,  2699,  2700,  2701,
    2702,  2703,  2704,  2705,  2706,  2707,  2708,  2709,  2710,  2711,
    2712,  2713,  2714,  2715,  2718,  2719,  2722,  2735,  2736,  2737,
    2741,  2744,  2745,  2746,  2747,  2747,  2749,  2750,  2758,  2762,
    2768,  2774,  2781,  2788,  2794,  2800,  2807,  2816,  2817,  2820,
    2821,  2824,  2825,  2826,  2827,  2830,  2831,  2832,  2833,  2834,
    2835,  2836,  2837,  2838,  2839,  2846,  2847,  2848,  2849,  2850,
    2851,  2852,  2853,  2856,  2857,  2858,  2858,  2858,  2859,  2859,
    2859,  2859,  2859,  2859,  2860,  2860,  2860,  2860,  2860,  2860,
    2860,  2860,  2860,  2861,  2861,  2861,  2861,  2861,  2861,  2861,
    2862,  2862,  2862,  2862,  2863,  2863,  2863,  2863,  2863,  2863,
    2863,  2863,  2863,  2863,  2863,  2863,  2864,  2864,  2864,  2864,
    2864,  2864,  2864,  2864,  2865,  2865,  2865,  2865,  2865,  2865,
    2865,  2865,  2866,  2866,  2866,  2866,  2866,  2866,  2866,  2866,
    2866,  2867,  2867,  2867,  2867,  2867,  2867,  2867,  2867,  2868,
    2868,  2868,  2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,
    2870,  2870,  2870,  2870,  2870,  2870,  2870,  2871,  2871,  2871,
    2871,  2871,  2871,  2871,  2872,  2872,  2872,  2872,  2873,  2873,
    2873,  2873,  2873,  2873,  2873,  2873,  2873,  2873,  2873,  2873,
    2874,  2874,  2874,  2874,  2874,  2875,  2882,  2886,  2892,  2898,
    2904,  2916,  2920,  2926,  2934,  2935,  2938,  2939,  2940,  2941,
    2942,  2943,  2944,  2951,  2955,  2963,  2964,  2967,  2968,  2969,
    2972,  2976,  2982,  2991,  2999,  3010,  3014,  3023,  3024,  3028,
    3029,  3030,  3031,  3032,  3033,  3034,  3035,  3038,  3042,  3048,
    3058,  3065,  3072,  3080,  3090,  3091,  3092,  3095,  3096
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "REGEXP", "LIKE",
  "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON", "'|'", "'&'", "SHIFT",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "JSON_ARROW_TEXT",
  "JSON_ARROW", "UMINUS", "'['", "ALTER", "ADD", "AFTER", "ALL", "ANALYZE",
  "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS", "ALWAYS", "IDENTITY",
  "CONTINUE", "RESTART", "GENERATED", "STORED", "VIRTUAL", "BEFORE",
  "BEGINWORK", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CALL", "CLOSE", "CURSOR", "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE",
  "CASCADE", "CHANGE", "CROSS", "CASE", "CHECK", "COMMENT", "CURRENT_DATE",
  "CURRENT_TIME", "CHAR", "COLLATE", "COLUMN", "CONCURRENTLY", "COPY",
  "CSV", "CONFLICT", "EXCLUDED", "NOTHING", "AGAINST", "MATERIALIZED",
  "REFRESH", "OF", "DATABASE", "DECLARE", "DEFERRABLE", "DEFERRED",
  "DELIMITER", "DISABLE", "DO", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE", "ESCAPED", "EXCEPT",
  "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN", "FETCH", "FIRST",
  "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FORMAT", "FROM", "FULL",
  "FULLTEXT", "FUNCTION", "FOR", "GROUP", "HANDLER", "HEADER",
  "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND",
  "HAVING", "IMMEDIATE", "INOUT", "INITIALLY", "INTEGER", "INNER",
  "IGNORE", "INDEX", "IF", "INSERT", "INTERSECT", "INTO", "INT",
  "INTERVAL", "ITERATE", "JOIN", "KEY", "LEAVE", "LOOP", "LATERAL",
  "LISTEN", "NOTIFY", "UNLISTEN", "SELF", "INHERITS", "ONLY", "LESS",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED",
  "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS",
  "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
  "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL",
  "PRIMARY", "PROCEDURE", "QUICK", "RANGE", "REAL", "RECLAIM",
  "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT", "RETURN", "RETURNING",
  "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW", "SIGNAL", "TRIGGER",
  "UNTIL", "POLICY", "LEVEL", "SECURITY", "PERMISSIVE", "RESTRICTIVE",
  "CURRENT_USER", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE",
  "SKIP", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE",
  "STDIN", "STDOUT", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "QUOTE",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT",
  "THAN", "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB",
  "TIME", "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "ARRAY", "JSON",
  "VIEW", "USING", "USE", "HASH", "VALIDATE", "VARCHAR", "VALUES",
  "VARBINARY", "WHERE", "WHEN", "WHILE", "WITH", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FDATEDIFF", "FYEAR", "FMONTH", "FDAY", "FHOUR", "FMINUTE", "FSECOND",
  "FNOW", "FLEFT", "FRIGHT", "FLPAD", "FRPAD", "FREVERSE", "FREPEAT",
  "FINSTR", "FLOCATE", "FABS", "FCEIL", "FFLOOR", "FROUND", "FPOWER",
  "FSQRT", "FMOD", "FRAND", "FLOG", "FLOG10", "FSIGN", "FPI", "FCAST",
  "FCONVERT", "FNULLIF", "FIFNULL", "FIF", "UNKNOWN", "FGROUP_CONCAT",
  "SEPARATOR", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER",
  "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
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
  "FEVO_NOTIFY", "FPG_LISTENING_CHANNELS", "';'", "'.'", "'('", "')'",
  "','", "']'", "'='", "$accept", "stmt_list", "expr", "@1", "@2", "@3",
  "@4", "val_list", "array_val_list", "@5", "any_array_arg",
  "opt_val_list", "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13",
  "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23",
  "@24", "@25", "@26", "@27", "@28", "@29", "@30", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_window_partition", "window_partition_list",
  "opt_window_orderby", "window_orderby_list", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_for_update",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "lateral_subquery", "@31", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "opt_drop_cascade", "create_index_stmt",
  "index_col_list", "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "truncate_extra_tables", "opt_truncate_options", "listen_stmt",
  "unlisten_stmt", "notify_stmt", "reclaim_table_stmt",
  "analyze_table_stmt", "create_policy_stmt", "opt_policy_as",
  "opt_policy_for", "opt_policy_to", "policy_role_list",
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
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,    91,   280,   281,   282,   283,   284,
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
     615,   616,   617,   618,   619,   620,   621,    59,    46,    40,
      41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   384,   385,   385,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   387,   386,   388,   386,   389,   386,
     390,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   391,   391,   392,   392,   393,   386,   386,   386,   394,
     386,   386,   386,   386,   386,   395,   395,   396,   386,   397,
     386,   398,   386,   399,   386,   400,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   401,   386,   402,   386,
     403,   386,   404,   386,   405,   386,   406,   386,   407,   386,
     408,   386,   409,   386,   410,   386,   411,   386,   412,   386,
     413,   386,   414,   386,   415,   386,   416,   386,   417,   386,
     418,   386,   419,   386,   420,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   421,   421,   421,   386,   386,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   386,   386,   386,   386,
     423,   423,   386,   386,   386,   386,   386,   386,   386,   386,
     424,   425,   425,   425,   426,   426,   427,   427,   428,   428,
     429,   429,   429,   430,   430,   431,   431,   432,   432,   433,
     433,   434,   434,   435,   435,   436,   436,   437,   437,   438,
     438,   438,   439,   439,   439,   439,   440,   440,   440,   440,
     440,   441,   441,   442,   442,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   444,   444,   444,   445,   446,   446,
     446,   447,   447,   448,   448,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   451,   450,   452,   452,   453,   453,
     453,   453,   453,   454,   454,   454,   455,   455,   456,   456,
     457,   457,   457,   458,   458,   459,   459,   460,   460,   460,
     460,   461,   461,   462,   462,   463,   424,   464,   465,   465,
     465,   465,   464,   466,   466,   467,   467,   464,   424,   468,
     468,   469,   469,   469,   424,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     471,   471,   471,   472,   472,   472,   472,   424,   473,   424,
     474,   474,   475,   475,   476,   476,   476,   476,   476,   424,
     424,   424,   477,   477,   478,   478,   479,   479,   424,   480,
     424,   481,   481,   424,   424,   424,   482,   483,   483,   483,
     484,   484,   484,   484,   484,   484,   485,   485,   486,   486,
     487,   487,   488,   488,   489,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   491,   491,   491,
     424,   492,   492,   493,   494,   493,   495,   495,   496,   496,
     496,   497,   498,   497,   499,   499,   500,   500,   500,   500,
     500,   501,   501,   502,   502,   503,   503,   504,   505,   504,
     506,   506,   506,   506,   492,   507,   507,   507,   507,   424,
     508,   508,   508,   424,   510,   509,   511,   511,   512,   512,
     513,   513,   514,   514,   514,   515,   515,   515,   515,   516,
     516,   517,   517,   517,   517,   517,   517,   517,   517,   424,
     518,   519,   519,   519,   520,   520,   520,   520,   424,   424,
     521,   521,   424,   424,   424,   424,   522,   522,   424,   523,
     523,   523,   523,   523,   424,   524,   524,   424,   525,   526,
     526,   525,   525,   527,   527,   527,   527,   527,   527,   527,
     527,   528,   528,   529,   529,   525,   525,   525,   525,   530,
     530,   530,   531,   531,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   533,   533,
     534,   534,   535,   535,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   537,   537,   538,   532,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   540,
     540,   540,   541,   541,   542,   542,   542,   543,   543,   543,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   545,   545,   546,   547,   547,   547,
     424,   548,   548,   548,   549,   549,   550,   550,   424,   551,
     551,   551,   551,   551,   551,   551,   551,   552,   552,   553,
     553,   554,   554,   554,   554,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   556,   556,   556,   556,   556,
     556,   556,   556,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   424,   558,   558,   558,
     558,   424,   559,   559,   560,   560,   561,   561,   561,   561,
     561,   561,   561,   424,   562,   563,   563,   564,   564,   564,
     424,   565,   565,   424,   424,   424,   566,   567,   567,   568,
     568,   568,   568,   568,   568,   568,   568,   424,   569,   569,
     424,   424,   424,   424,   570,   570,   570,   571,   571
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
       4,     6,     4,     6,     3,     0,     1,     0,     6,     0,
       7,     0,     6,     0,     7,     0,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     0,     9,     0,     9,
       0,     9,     0,    10,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    12,     0,    14,
       0,    14,     0,    10,     0,    12,     0,    14,     0,    14,
       0,    10,     0,     9,     0,     9,     8,     6,     6,     8,
       4,     7,     6,     4,     4,     4,     6,     8,     6,     6,
       6,     8,     8,     4,     6,     6,     6,     4,     4,     4,
       6,     4,     6,     4,     6,     3,     4,     4,     4,     3,
       3,     6,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     4,     4,     4,     4,     4,     4,     8,     8,     8,
       6,     6,     8,     8,     6,    10,     4,     6,     8,     4,
       4,     4,     6,     8,     3,     6,     6,     6,     6,     8,
       3,     8,    10,     3,     3,     3,     3,     3,     1,     1,
       4,     6,     1,     1,     1,     6,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     6,     3,     5,
       4,     5,     3,     4,     3,     4,     1,     1,     1,     1,
       1,     3,    12,    12,     0,     2,     0,     4,     2,     4,
       0,     1,     1,     0,     2,     0,     2,     0,     3,     1,
       3,     0,     3,     2,     4,     0,     3,     1,     3,     2,
       4,     2,     0,     2,     4,     4,     0,     2,     2,     4,
       4,     0,     2,     1,     3,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     2,     2,     1,
       0,     1,     3,     1,     1,     3,     4,     5,     3,     3,
       4,     6,     9,     3,     0,     5,     1,     0,     5,     3,
       5,     6,     5,     0,     1,     1,     0,     1,     1,     1,
       2,     2,     0,     0,     1,     2,     4,     6,     6,     6,
       0,     2,     0,     1,     3,     3,     1,     8,     2,     2,
       2,     0,     6,     2,     4,     0,     2,     7,     1,     4,
       6,     0,     1,     1,     1,     8,     9,    10,     9,    11,
      10,    12,    11,    13,     9,    11,    10,    12,    11,    12,
       1,     3,     1,     4,     4,     4,     6,     1,     3,     2,
       3,     5,     1,     3,     0,     2,     2,     3,     3,     1,
       1,     1,     2,     3,     2,     2,     2,     4,     1,     3,
       1,     3,     5,     1,     1,     1,    10,     0,     2,     2,
       0,     2,     2,     2,     2,     2,     0,     2,     1,     3,
       0,     4,     0,     5,     5,    10,    10,    17,    12,    19,
      11,     6,     8,     6,     6,     6,     9,     6,     5,     8,
       7,     9,     8,    10,     9,     7,     7,     0,     1,     2,
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
       1,     1,     1,     3,     1,     3,     3,     0,     1,     1,
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
       0,     0,     0,     0,   579,     0,   351,     0,   476,     0,
       0,     0,     0,     0,   476,     0,   285,     0,   531,     0,
       0,     0,   240,   346,   358,   364,   387,   394,   399,   400,
     401,   408,   410,   414,   415,   413,   460,   499,   503,   529,
     539,   548,   554,   557,   710,   718,   876,   881,   893,   900,
     905,   917,     0,     0,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,   546,   580,     0,     0,
     546,     0,   504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   482,   402,   406,   404,   405,     0,     0,
     482,     0,     0,   713,   714,     0,     0,     0,     0,   555,
       0,     1,     2,   389,     0,     0,   907,   411,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   581,     0,     0,   546,   506,   355,     0,   350,
     348,   349,     0,   542,     0,   879,     0,   388,   877,     0,
     901,     0,     0,   544,     0,   361,     0,   918,     0,   478,
     479,   480,   481,   477,     0,   403,     0,   409,     0,     0,
       0,     0,   711,   712,     0,     4,     9,    10,    12,    11,
       8,     0,     0,     0,   296,   286,   236,     0,   237,   238,
       0,   287,   288,   289,     0,    13,   239,   291,   293,   292,
     290,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   300,   241,   294,
     390,   533,   532,   300,     0,     0,     0,     0,     0,   301,
     303,   317,   304,   317,   556,     3,     0,     0,   395,   396,
     904,   903,     0,     0,     0,     0,     0,     0,     0,     0,
     921,     0,   920,     0,   891,   887,   886,   890,   888,   892,
     889,   882,     0,   884,     0,     0,   547,   540,     0,     0,
     727,     0,     0,     0,     0,   727,   896,   895,     0,     0,
     541,     0,     0,     0,   907,     0,     0,     0,     0,   353,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     362,   363,   359,     0,     0,   483,   407,     0,   483,   717,
     716,   715,     0,    65,     0,    32,    31,    20,     0,     0,
       0,     0,     0,    55,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   299,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,     0,     0,   340,   314,
     300,     0,     0,     0,     0,     0,   325,   324,   328,   332,
     329,     0,     0,   326,   316,     0,     0,   398,   397,     0,
       0,     0,     0,     0,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   915,   908,   412,   883,     0,     0,     0,
     691,   700,   659,   659,   659,   659,   659,   684,   659,   681,
       0,   659,   659,   659,   662,   693,   662,   692,   659,   659,
     659,     0,   662,   659,   662,   683,   690,   682,   701,   702,
       0,     0,   685,   549,     0,     0,     0,     0,     0,     0,
     728,   729,     0,     0,     0,     0,     0,   899,   897,   898,
       0,   417,     0,     0,     0,     0,   906,   707,   508,     0,
     510,   511,     0,   356,     0,   265,     0,   244,   355,   543,
     880,   878,   902,   434,   545,   361,   919,     0,     0,     0,
     538,     0,     0,     5,    51,    66,     0,    48,     0,     0,
     228,     0,     0,     6,     0,    57,     0,     0,     0,   214,
     212,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   203,   204,   205,   206,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   194,
       0,     0,     0,    64,    21,    23,    24,    22,   234,   232,
      46,     0,    44,   200,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    33,    25,    26,    28,    14,    15,
      16,    17,    18,    19,    27,    30,    29,     0,   298,   244,
       0,   295,   392,   391,   300,     0,     0,     0,   305,     0,
     340,     0,   345,   313,     0,   244,   302,   326,   326,     0,
     319,     0,   327,     0,   309,   308,     0,     0,     0,     0,
     444,     0,   441,   447,   443,     0,   626,     0,     0,     0,
       0,   445,   922,   923,   916,   914,   910,     0,   912,     0,
     913,   885,   727,   727,     0,   688,   664,   670,   667,   664,
     664,     0,   664,   664,   664,   663,   667,   667,   664,   664,
     664,     0,   667,   664,   667,     0,     0,     0,     0,     0,
       0,     0,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   420,     0,     0,     0,
       0,   708,   709,     0,     0,   624,   576,   317,   507,     0,
     512,   513,   514,   515,   245,     0,   272,   244,   352,   354,
     360,     0,   463,   485,     0,     0,   462,   463,     0,   463,
       0,    77,     0,   226,     0,     0,     0,     0,    53,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,   162,
     163,   164,   165,   166,   167,     0,     0,     0,     0,   143,
       0,     0,     0,   147,   148,   149,   151,     0,     0,   153,
       0,   156,   157,   158,     0,     0,     0,     0,     0,     0,
      84,    78,    79,    80,    81,    82,    83,   133,   134,   135,
       0,     0,     0,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,   171,   172,
     173,   174,   175,   176,     0,     0,     0,     0,     0,     0,
       0,     0,   186,     0,   189,   190,   191,     0,    60,     0,
      62,     0,    47,    45,     0,     0,   235,   233,    69,     0,
       0,    40,    36,    38,     0,    58,   246,     0,     0,   340,
     342,   342,   342,     0,   306,   310,     0,     0,     0,   265,
     330,   331,     0,     0,   333,     0,     0,     0,     0,     0,
     626,   626,     0,   456,   455,   457,   626,   450,     0,     0,
     909,   911,     0,     0,     0,   676,   686,   678,   680,   704,
       0,   679,   675,   674,   697,   696,   673,   677,   672,     0,
     694,   671,   695,     0,     0,   551,   703,     0,   550,     0,
     732,   734,   733,     0,   730,     0,   380,     0,     0,     0,
       0,     0,   382,     0,     0,     0,     0,     0,   745,     0,
     418,   419,     0,   426,     0,     0,     0,     0,     0,     0,
     707,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     582,     0,     0,   509,   528,     0,     0,   524,     0,     0,
       0,     0,   505,   516,   519,     0,     0,   924,   357,     0,
       0,     0,   494,   484,     0,     0,   463,   501,   463,   502,
      52,   230,     0,   229,     0,     0,     0,    56,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    88,    90,     0,     0,     0,     0,
       0,   122,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    59,     0,     0,     0,     0,     0,     0,
     255,   244,   393,   307,     0,     0,     0,     0,   315,     0,
     534,     0,     0,   272,   322,   320,     0,     0,   318,   334,
       0,     0,     0,     0,     0,   457,   457,   626,     0,     0,
     638,     0,   643,     0,     0,     0,     0,     0,   458,   647,
     628,     0,   645,   452,   457,   442,   449,     0,     0,   660,
       0,   665,   666,     0,     0,   667,     0,   667,   667,   689,
       0,     0,     0,   739,   742,   741,   743,   740,   735,   736,
     738,   744,   737,     0,     0,     0,     0,     0,     0,   365,
       0,     0,     0,     0,     0,     0,   745,     0,     0,   421,
     425,   423,   422,   424,     0,   430,     0,     0,     0,     0,
       0,     0,     0,   624,   578,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   563,   624,     0,   706,   523,   521,
     522,   525,   526,   527,     0,     0,     0,   250,   250,   266,
     267,   273,     0,   347,   496,   495,     0,     0,   486,   491,
     490,     0,   488,   466,   500,   227,   231,     0,    54,     0,
     128,   127,     0,   132,     0,     0,   215,   216,   161,   139,
     140,     0,     0,   144,   145,   146,   150,   152,   154,   195,
     196,   197,   198,     0,    85,    94,    96,    92,    98,   100,
     102,   136,     0,     0,   138,   211,   257,   257,   257,   104,
       0,     0,   112,     0,     0,   120,   257,   257,   168,     0,
       0,     0,   180,   181,     0,     0,   184,     0,   187,     0,
     192,     0,    61,    63,    68,    72,     0,     0,    50,     0,
       0,    42,     0,    43,    35,     0,     0,   265,   246,   341,
       0,     0,     0,   311,     0,     0,     0,   924,   335,     0,
     321,     0,     0,     0,   622,     0,   446,   454,   457,   627,
     459,     0,     0,     0,     0,     0,     0,   648,   629,   630,
     632,   631,   636,     0,     0,     0,     0,   646,   644,   451,
       0,     0,   745,     0,     0,   669,   698,   705,   699,   687,
       0,   552,   366,     0,   745,     0,     0,     0,     0,     0,
     381,     0,   374,     0,     0,     0,     0,   753,   754,   755,
     757,   756,   875,   760,   761,   762,   868,   759,   758,   863,
     864,   865,   866,   867,   850,   763,   804,   795,   800,   745,
     846,   836,   807,   839,   782,   789,   786,   773,   829,   818,
     745,   826,   844,   780,   781,   851,   767,   774,   822,   838,
     843,   840,   801,   779,   848,   720,   778,   798,   791,   788,
     745,   837,   827,   768,   817,   856,   794,   808,   790,   809,
     793,   832,   815,   776,   745,   765,   849,   771,   833,   785,
     812,   824,   784,   745,   813,   810,   811,   819,   831,   821,
     787,   792,   816,   805,   806,   823,   855,   828,   797,   830,
     783,   857,   814,   802,   796,   803,   799,   842,   770,   764,
     835,   841,   775,   777,   766,   847,   825,   845,   820,   834,
     772,   769,   853,   745,   854,   852,   870,   871,   872,   873,
     874,   861,   862,   858,   859,   860,   869,   746,     0,   428,
     427,     0,   432,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     283,     0,     0,     0,     0,   559,   575,   583,   626,     0,
     518,   520,   251,   252,     0,   269,   271,     0,     0,     0,
     927,   925,   926,   464,     0,   487,     0,     0,     0,   924,
       0,     0,     0,   131,   218,   219,   220,   221,   224,   223,
     225,   217,   222,     0,     0,     0,   257,   257,   257,   257,
     257,   257,     0,     0,     0,   261,   261,   261,   257,     0,
       0,     0,   257,     0,     0,     0,   257,   261,   261,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    74,    41,
      37,    39,   250,   253,   256,   272,   255,   343,     0,     0,
       0,     0,   535,   536,     0,   530,     0,   435,   600,     0,
     598,     0,   436,     0,   453,     0,     0,     0,     0,     0,
       0,   650,     0,     0,     0,     0,     0,     0,   745,     0,
     661,   668,     0,   745,     0,   370,   383,   384,   385,     0,
       0,     0,     0,   367,   719,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   416,     0,     0,   376,     0,
       0,     0,     0,   563,     0,     0,     0,     0,   590,     0,
       0,     0,   587,     0,   586,     0,   596,     0,     0,     0,
       0,     0,   558,   625,   517,   250,   268,   275,   274,     0,
       0,   498,   497,   493,   492,     0,   468,   461,     7,   129,
     126,   141,   142,   199,   261,   261,   261,   261,   261,   261,
     201,     0,   137,     0,     0,     0,     0,     0,   261,   106,
       0,     0,   261,   114,     0,     0,   261,     0,     0,   177,
     178,   179,   182,   183,     0,   188,   193,   248,     0,     0,
     247,   276,   265,   339,     0,   338,   337,     0,     0,   336,
       0,     0,     0,   440,     0,   623,   640,     0,   658,   642,
       0,     0,     0,   651,   649,   633,   634,   635,   637,     0,
     745,     0,   722,   553,     0,   724,     0,   378,   375,     0,
     747,     0,     0,     0,     0,     0,   745,   429,     0,     0,
     372,     0,     0,     0,   369,     0,   561,   577,     0,     0,
       0,     0,     0,   588,   589,   284,   584,   565,     0,     0,
       0,     0,     0,   270,   928,     0,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,   258,     0,
      87,    89,    91,     0,   257,     0,     0,     0,   257,     0,
       0,     0,   123,   125,     0,   254,   250,     0,   281,   272,
     344,   312,   537,   438,     0,   601,   599,     0,   656,   657,
       0,     0,     0,   745,     0,   721,   723,   386,   371,   752,
     751,   748,   750,   749,     0,   431,     0,   379,   377,     0,
       0,   591,     0,     0,   597,     0,   564,     0,     0,     0,
       0,     0,     0,     0,     0,   489,     0,     0,   467,    95,
      97,    93,    99,   101,   103,   202,     0,   250,   262,   105,
     261,   108,   110,   113,   261,   116,   118,   121,   185,   249,
     278,   277,     0,   242,   243,     0,   639,   641,   655,   652,
       0,   726,   894,     0,   373,     0,     0,   585,     0,   560,
     566,   567,     0,     0,     0,   474,     0,   469,     0,   471,
     472,   260,   263,     0,     0,   257,   257,     0,   257,   257,
       0,     0,   282,     0,   653,   654,   725,   433,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,   250,   107,
     261,   261,   115,   261,   261,   280,   279,   602,     0,     0,
       0,     0,     0,     0,     0,   570,   475,     0,   264,     0,
       0,     0,     0,   604,     0,     0,     0,     0,     0,   604,
       0,     0,   473,   109,   111,   117,   119,   437,   603,     0,
       0,     0,     0,   592,     0,     0,   571,   568,     0,   618,
       0,     0,   562,     0,   604,   604,     0,     0,   569,     0,
     619,   439,     0,   615,   617,   616,     0,     0,     0,   594,
     593,     0,   572,   620,   621,   605,   613,   607,     0,   609,
     614,   611,     0,   604,     0,   608,   606,   612,   610,   595,
       0,     0,     0,     0,     0,     0,     0,   573,   574
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   654,  1044,  1254,  1256,  1252,   655,   939,   666,
    1255,   656,  1034,  1248,  1035,  1249,   667,  1446,  1447,  1448,
    1758,  1756,  1757,  1759,  1760,  1761,  1768,  2034,  2155,  2156,
    1772,  2038,  2158,  2159,  1776,  1456,  1457,   673,  1194,   390,
      21,    22,   635,  1260,  1793,  1725,  1940,  1487,  1765,  2028,
    1915,  2108,   916,  1389,  1390,  1167,  2048,  2123,  1711,    95,
     288,   289,   512,   298,   299,   300,   301,   809,   535,   302,
     532,   823,   533,   819,  1278,  1279,   808,  1265,  1798,   303,
      23,    73,   132,   359,    24,   372,    25,  1121,  1122,    26,
      27,   803,   103,    28,    29,    30,    31,    32,    33,   896,
    1133,  1355,  1690,  1692,  1855,    34,    35,  1303,    36,  1172,
    1890,  1739,  2019,  2098,  2177,  2016,    83,   154,   649,   924,
    1176,  1737,  1401,   922,    37,    38,   126,   357,   629,   632,
     913,  1162,  1163,  1164,    39,    98,   815,    40,   111,    41,
      42,    43,  1882,  1715,  2225,  2226,    71,  1149,  1150,  1811,
    1809,  2188,  2217,  1505,  1151,  1075,   855,   866,  1085,  1086,
     603,  1090,   906,   907,    44,    93,    94,    45,   609,   610,
     611,  1333,  1347,  1687,    46,    47,   332,   333,    48,   348,
     620,    49,    50,   322,   564,    51,  1393,  1732
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2065
static const yytype_int16 yypact[] =
{
   12011,   -82,  -102,   176,  1294,   190, -2065,   351, -2065,   263,
     451,   175,   277,   305, -2065,    24, -2065,   346,   623,   130,
     501,   250, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065,   627,   629,   639,   649,   258,   458,   530,   657,
     536,   693,   425,   715,   744,   747,   530, -2065,   446,   613,
     530,   521, -2065,    45,    83,    86,   756,   139,   487,   760,
     492,   502,   504,   577,   610,   390, -2065, -2065,   774,   777,
     577,   656,   469,   405, -2065,  6527,   787,   634,    51, -2065,
     793, -2065, 12011,    87,   456,   460,    23,   420,    37,    17,
     534,   808,   762,   827,   457,   648,   505,   571,   477,   507,
     669,   845, -2065,   438,   861,   530,   491,   506,   871, -2065,
   -2065, -2065,  -110, -2065,   624, -2065,   642, -2065, -2065,   644,
   -2065,   659,   697, -2065,   661,    96,   670, -2065,   672, -2065,
   -2065, -2065, -2065, -2065,   966, -2065,   927, -2065,   725,   968,
   10297, 10297, -2065, -2065,   946,   348, -2065, -2065, -2065, -2065,
     971, 10297, 10297, 10297, -2065, -2065, -2065,  7658, -2065, -2065,
     618, -2065, -2065, -2065,   635, -2065, -2065, -2065, -2065, -2065,
   -2065,   992,   660,   676,   711,   717,   720,   728,   746,   754,
     770,   806,   817,   833,   843,   851,   867,   876,   907,   923,
     983,   994,   996,   998,  1006,  1007,  1008,  1009,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1025,  1040,  1041,  1043,  1044,
    1045,  1048,  1049,  1050,  1051,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1064,  1065, -2065, -2065,  1078,
    1080,  1087,  1089,  1093,  1097,  1099,  1100,  1101,  1107,  1108,
    1109,  1111,  1112,  1113,  1114,  1115,  1119,  1120,  1123,  1124,
    1126,  1128,  1135,  1138,  1142,  1143,  1146,  1151,  1152,  1154,
    1157,  1158,  1159,  1160,  1161,  1162, 10297, 12471,  -106, -2065,
     647,   640,   652,    14,  1163,  1027,  1164,    44,  -160,   599,
   -2065,  1079, -2065,  1079, -2065, -2065,  1259,  1279, -2065, -2065,
   -2065, -2065,   433,   121,   447,   517,   448,   177,   519,  1266,
    1131,  1096,    66,  1368, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065,   373, -2065,  1541,  1542, -2065, -2065, 12109,   975,
     450,  1544,  1358,  1276,  1549,   450, -2065, -2065,   334,  1550,
   -2065,  1364,   510,  1281, -2065,  1558,  1559,    53,  1539, -2065,
     297,  -179,    51,  1567,  1568,  1570,  1575,  1577,  1580,  1582,
   -2065, -2065, -2065,  1585,  1592,   -26, -2065,  1593,   198, 12594,
   12594, -2065,  1594, 10297, 10297,   979,   979,  1565, 10297, 11879,
       2,  1598,  1601,  1229, -2065, 10297,  6904, 10297, 10297, 10297,
   10297, 10297, 10297, 10297, 10297, 10297,  1237, 10297, 10297, 10297,
   10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297,
   10297, 10297,  1240, 10297, 10297, 10297,  1241, 10297, 10297, 10297,
   10297, 10297, 10297,  8035, 10297, 10297, 10297, 10297, 10297, 10297,
   10297, 10297, 10297, 10297,  1242,  1243,  1244,  1245,  1246, 10297,
   10297,  1248,  1250,  1252, 10297, 10297,  1630,  1256,  1257, 10297,
   10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297,
   10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297,
   10297,  1258, 10297, 10297, 10297,  1274,  2498, -2065, 10297, 10297,
   10297, 10297, 10297,    50,  1277,   658, 10297,  7281, 10297, 10297,
   10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297, 10297,
   10297,  1650, -2065,    51,  1652, 10297,  1659,  1661,   367, -2065,
     140, 10297,  1286,   403,  1668,    51, -2065, -2065, -2065,   328,
   -2065,    51,  1516,  1484, -2065,  1671,  1672, -2065, -2065,  1673,
    1674,  1675,  1676,  1677,  1466, -2065,  1679,  1680,  1681,  1470,
   12109,  1683,  1448,  1685,  1686,  1690,  1689,  1692,  1324,  1693,
      15,   132,  1694, -2065, -2065, -2065, -2065,   641,  1318,  1322,
   -2065, -2065,  1326,  1326,  1326,  1326,  1326, -2065,  1326, -2065,
    1327,  1326,  1326,  1326,  1651, -2065,  1651, -2065,  1326,  1326,
    1326,  1328,  1651,  1326,  1651, -2065, -2065, -2065, -2065, -2065,
    1331,  1335, -2065,   651,  1712, 12109,  1713,  1715,  1716,  1340,
    1342, -2065,  -173,  1725,  1726,  1540,  1359, -2065, -2065, -2065,
    1569,  1711,  1754,  1571,  1486,  1759,    66,   -83, -2065,   408,
   -2065, -2065,    32, -2065, 10297,  1572,    51,  -152,   506, -2065,
   -2065, -2065, -2065, -2065, -2065,    96, -2065,  1761,  1762,   235,
   -2065,  1761,   295, -2065,  1799, -2065,  1386, 12594, 11952,   371,
   -2065, 10297, 10297, -2065,  1387, -2065, 10297,  1533,   591, -2065,
   -2065, -2065,  2842,  8412,  2109,  2453,  2797,  3186,  3530,  3874,
    4218,  4562,  4906, -2065,  3141,  3485,  3829,  4173,  5250,  4517,
    4861,  5205,  5594,  5938,  8535,   679,  5549,  8581,  5893, -2065,
    8622,  8812,  8862, -2065, 12515,  6237,  6282,  6626,  6657,  8441,
    1390,  8898,  8923,  8958,  8999,  9183,  9239,  9270,  9295,  6696,
    6751,  6920, -2065, -2065, -2065, -2065, -2065,  9335,  6969,  1428,
    1441,  1459,   963,  1022,  1423,  1461,  1462,  6998,  9376,  9559,
    9642,  9667,  9712,  9753,  9936,  9985,  7029,  7073,  7115,  7313,
    7346,  7371,  7401,  7450,  1090, 10030, 10055, 10089,  7498, -2065,
    1116, 10130,  7677, -2065, -2065, 12618,  9608,  8508, 11902, 11902,
   -2065,    61, -2065, -2065,  1573, 10297, 10297,  1427, 10297, 12542,
    1453,  1463,  1464, 10297,  1384,  1424,   877,   991,   786,   786,
     763,   763,   763,   763,   710,  1565,  1565,    80, -2065,  -152,
    1678, -2065, -2065,  1460,   140,  1688,  1698,  1700, -2065,  1533,
     367, 10313, -2065, -2065,    41,  -116,   599,  1484,  1484,  1702,
    1656,    51, -2065,  1703, -2065, -2065,   -11, 12109, 12109,  1860,
   -2065,  1649, -2065, -2065, -2065,  1657,  1840, 12109,  1872,  1637,
    1638, -2065, -2065, -2065, -2065, -2065, -2065,  1873, -2065,  1874,
   -2065, -2065,   450,   450,  1875, -2065, -2065, -2065, -2065, -2065,
   -2065,  1877, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065,  1877, -2065, -2065, -2065,  1878,  1879,  1699,  1504,  1510,
   10297,  1511,  1840, 12109, 12109, 12109,  1687,   450,  1632,   129,
    -137,  1705,  1889,   142,  1898,   587,  1769,  -133,  1901,  1905,
    1719, -2065, -2065,  1825,  1913,     9, -2065,  1079, -2065,  1914,
   -2065, -2065, -2065,   393, 12594,  1862,  1748,  -152, -2065, -2065,
   -2065,  1902,  -153, -2065,   442,  1545, -2065,  -153,  1545,  1729,
   10297, -2065, 10297, -2065, 10297, 12371, 11993,  1839,  7735,  1543,
    1546, 10297, 10297, -2065, 10297, 12290,  1773,  1773, 10297, -2065,
   -2065, -2065, -2065, -2065, -2065, 10297, 10297, 10297, 10297, -2065,
   10297, 10297, 10297, -2065, -2065, -2065, -2065, 10297, 10297, -2065,
   10297, -2065, -2065, -2065, 12109, 12109, 10297, 10297, 10297,  1924,
   -2065,  1586,  1587,  1588,  1589,  1591,  1596, -2065, -2065, -2065,
   10297, 10297, 10297, -2065, 10297,  1556,  1557,  1561,  1599,  1932,
    1603,  1936,  1604,  1578,  1579, 10297, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, 10297, 10297, 10297, 10297, 10297, 10297,
   10297, 10297, -2065, 10297, -2065, -2065, -2065, 10297, -2065, 10297,
   -2065, 10297, -2065, -2065, 10297,  1533, 11902, 11902,  1714, 12568,
   10297, -2065, 10297, 10297,  1533, -2065,  1814,    51,  1949,   367,
    1827,  1827,  1827,  1590, -2065,   172, 10297,  1962,  1964,  1572,
   -2065, -2065,    51, 10297,   -38,    51,  1605,  1815,  1818,  1607,
    1840,  1840, 12109, -2065, -2065, 12010,  1840, -2065,  1977,  1979,
   -2065, -2065,  1608,  1611,   445,   303,   753,   303,   303, -2065,
     452,   303,   303,   303,   753,   753,   303,   303,   303,   454,
     753,   303,   753,  1624,  1625,  1912, -2065, 10297, 12594,   129,
    1840,  1840,  1840,   607, -2065,  1627, -2065,  1628,  1629,  1631,
    1633,   461, -2065,  1747,   129,  2008,   209,  1960, -2065,  1882,
   -2065, -2065,   391,  1778,  1757,   129,   219,  1830,  2018,  2019,
     -88,  2020,  1645,  1868,   397,  1647,  1658,  1871,  1662,   463,
   -2065,  2033,  1533, -2065, -2065,  2036,   -30,  2037,  2038,  2041,
    1670,   414, -2065,  1682, -2065,   565, 10297,  1846, -2065,  8789,
    1896,  2055, -2065, -2065,  2056,  9166,  -143, -2065,  -143, -2065,
   -2065, 12594, 12402, -2065, 10297,  1691, 10297, -2065, -2065,  8486,
    1179, 10362, 10297, 10297,  1684,  1695, 10393, 10418, 10466,  7765,
    7790, 10507, 10676, 10701, 10733, 10765, 10790,   -19,    19, 10829,
   10854,  7827,  1696,  1704,  1706,  1707,  1709,  1718,  1727,  1213,
    7870, 10879, 10904, -2065, -2065, -2065,  1728,   488,  1731,   496,
    1736, -2065, -2065, 10929,  8052,  8108,  8138, 10954, 10979,  8163,
    8204,  1238,  1269,  1722, 11004, 11039,  1701,  1721, 10297,  1533,
   10297,  1329,  1533, 12594,  1533,  1737,  1533,  1746,  1764,  2004,
    1920,  -152, -2065, -2065,  1906,  1763,  1766,  1770, -2065,  2062,
   12594,  2046,    43,  1748, -2065, 12594, 10297,  1771, -2065, -2065,
     -38, 10297,  1772,  1774,  2064, 12010, 12010,  1840,  1883,  2065,
    1775,  1776,  1777,  2026,  2069,  1779,  2070,   154, -2065, -2065,
   -2065,  1916,  1925, -2065, 12010, -2065, -2065,  1886,   546, -2065,
    2079, -2065, -2065,  1859,  2090, -2065,  2091, -2065, -2065, -2065,
    1785, 11064,   498, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065,   580,   129,  2102,  2113,  2143,  2149, -2065,
    2154,  1786,   509,  1787,  1907,   129, -2065,  1457,  2057, -2065,
   -2065, -2065, -2065, -2065,  2164,  1910,  1792,   511,  1911,   129,
    2169,   255,  2042,     9, -2065,    26, 10297,  1795,  1797,  1798,
    2175,  2175,  1800,  2064,    18,     9, 12109, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065,   414,   513,   414,   -20,   125,  1801,
   -2065,  1148,   499, -2065, -2065, 12594,  1929,  2163, -2065, -2065,
   12594,   532, -2065,  1994, -2065, -2065, 12594,  2181, -2065, 10297,
   -2065, -2065, 10297, -2065, 11096, 11854, -2065, -2065, -2065, -2065,
   -2065, 10297, 10297, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, 10297, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, 10297, 10297, -2065, -2065,  1842,  1842,  1842, -2065,
    1845,   910, -2065,  1847,   925, -2065,  1842,  1842, -2065, 10297,
   10297, 10297, -2065, -2065, 10297, 10297, -2065, 10297, -2065, 10297,
   -2065, 10297, -2065, -2065, -2065, -2065,  1807,  1809,  1329,  1817,
    1819, -2065,  1821, -2065, -2065, 10297, 10297,  1572,  1814, -2065,
    2199,  2199,  2199,  1824, 10297, 10297,  2204,  1846, 12594,  2175,
   -2065, 11128,  2206,  2207, -2065,   557, -2065, -2065, 12010, -2065,
   -2065,  2212, 10297,  2213,  2167,   292, 10297, -2065, -2065, -2065,
   -2065, -2065, -2065,  1841,  1849,  1850, 10297, -2065, -2065, -2065,
     607,  2166, -2065,  1853,  2226, -2065,   753, -2065,   753,   753,
   10297, -2065, -2065,  2183, -2065,   560,  1854,  1857,  1858,  1864,
   -2065,   129, -2065,   129,  1867,   562,  1844, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,  2029, -2065,
    1880,  1869,  1982,   129, -2065,  1881,   576,  1885,  1991,   129,
    1997,   582,  1887,  2099,  2108,  1888, 11153,  2206,  2175,  2175,
   -2065,   677,   681,  2207,   683,   -17, -2065, -2065,  1840,   685,
   -2065, -2065, -2065, -2065,  2265, -2065, -2065,   565, 10297, 10297,
   -2065, -2065,  1890, -2065,  9543, -2065,  9920,  1891,  2191,  1846,
    1893, 11192, 11217, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, 11242, 11267, 11292,  1842,  1842,  1842,  1842,
    1842,  1842,  1767, 11317,  2218,  2078,  2078,  2078,  1842,  1897,
    1895,  1899,  1842,  1904,  1900,  1921,  1842,  2078,  2078, 11342,
   11367, 11402, 11427, 11459,  8245, 11491, 11516, -2065, -2065, -2065,
   -2065, -2065, 12427,  -131, 12594,  1748,  1920, -2065,   687,   689,
     698,  2275, 12594, 12594,  2261, -2065,   704,  2266, -2065,   712,
   -2065,   714, -2065,  2282, -2065,   771, 11555,   773,  1917,  1923,
    2129, -2065, 11580,  1931,  1934,  1939, 11605,   611, -2065,  2188,
   -2065, -2065, 11630, -2065,  2532, -2065, -2065, -2065, -2065,  2287,
     776,   803,   129, -2065, -2065,  2876,  3220,  3564,  3908,  4252,
    4596,  2238,  2289, 10297,  2222, -2065,   807,   129, -2065,   129,
    1930,   834,  2187,    18, 10297,  1945,  1946,  2064, -2065,   836,
     838,   840, -2065,  2301, -2065,   893, -2065,   575,  1947,  2324,
    2272,  2274, -2065,   694, -2065,   125, -2065, 12594, 12594,  2329,
    2332, -2065, 12594, -2065, 12594,  9166,  1963, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065,  2078,  2078,  2078,  2078,  2078,  2078,
   -2065, 10297, -2065,  2345,  2293,  1970,  1971,  1972,  2078, -2065,
    2010,  2011,  2078, -2065,  2012,  2013,  2078,  1981,  1983, -2065,
   -2065, -2065, -2065, -2065, 10297, -2065, -2065, -2065,  2150, 10297,
   -2065,  2231,  1572, -2065,  2356, -2065, -2065,  1985, 10297, -2065,
    2103,  2168,  2364, -2065,  2366, -2065, -2065,  2365,  1037, -2065,
    2367, 10297, 10297, -2065, -2065, -2065, -2065, -2065, -2065,  2327,
   -2065,  4940, -2065, -2065,  5284, -2065,  2001, -2065, -2065,   895,
   -2065,  2314,  2262,  2236,  2228,  2120, -2065, -2065, 11655,  2014,
   -2065,   897,   926,   129, -2065,  2016,   -13, -2065, 11680,  2206,
    2207,   928,  2197, -2065, -2065, -2065, -2065, -2065,  2397,  2400,
     340,   -47,  2208, -2065, -2065,  2384,  2025,   930,  2404,  2315,
    2028,  2030,  2031,  2032,  2034,  2035, 11705, -2065,  2039,  2410,
   -2065, -2065, -2065,  2044,  1842,  2040,  2047,  2045,  1842,  2048,
    2049,  2050, -2065, -2065, 11730, -2065, 12427,   -62,  2264,  1748,
   -2065, -2065, 12594, -2065,  2414, -2065, -2065,  2052, -2065, -2065,
    2058, 11765, 11790, -2065,  5628, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065,  5972, -2065, 10297, -2065, -2065,   932,
    2413, -2065,   935,   938, -2065,  2426, -2065,  2059,  2433,  2434,
    2066,  2067,  2068, 10297,  2438, -2065,   940,   -45, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065,  2446,   125,  2073, -2065,
    2078, -2065, -2065, -2065,  2078, -2065, -2065, -2065, -2065, -2065,
    2225,  2234,  2175, -2065, -2065,  2072, -2065, -2065,  1273, -2065,
    6316, -2065, -2065, 11822, -2065,  2080,  2270, -2065,   950, -2065,
   -2065, -2065,  2458,  2483,  2485, 12594,  2469, -2065,  2488, -2065,
   -2065, -2065, -2065,  2489,  2114,  1842,  1842,  2115,  1842,  1842,
    2320,  2323,  2116,  2495, -2065, -2065, -2065, -2065,  2260,  2497,
    2499,  2495,  2121,  2135,  2151, 10297, -2065,  2299,   125, -2065,
    2078,  2078, -2065,  2078,  2078, -2065, -2065, -2065,   951,  2155,
     955,  2162,   956,  2172,  2322, -2065, 12594,  2332, -2065,  2173,
    2174,  2182,  2184, -2065,  2540,  2541,  2544,  2495,  2495, -2065,
    2333,  2556,  2025, -2065, -2065, -2065, -2065,   104, -2065,  2192,
    2194,   959,   961,   107,  2560,   965, -2065, -2065,   -15,  2430,
     333,   -12, -2065,  2495, -2065, -2065,  2487,  2313, -2065,  2333,
   -2065, -2065,   401, -2065, -2065, -2065,    64,   355,   987,   107,
     107,  2415, -2065, -2065, -2065, -2065, -2065, -2065,    90, -2065,
   -2065, -2065,   362, -2065,  2336, -2065, -2065, -2065, -2065,   107,
      75,  2391,  2393,  2405,  2406,  2587,  2591, -2065, -2065
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2065,  2502,   -95, -2065, -2065, -2065, -2065,  -896,  1411, -2065,
    1562, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,  1653,  2217,
   -2065,  -225,  -630,  1121, -2065, -1376, -2065,   812, -1301, -2065,
   -1649, -2065, -1056, -2065,   883, -1271, -2065, -2065, -1358, -2065,
   -2065,  2096,  -287,  -279,  2087,  -510, -2065, -2065,  -299, -2065,
   -2065,   561, -2065, -2065, -2065,  1333,  -781,   329,  -108, -2065,
   -2065, -2065,  2486,  1978, -2065,  1973, -2065, -1108, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -2065, -2065, -2065, -2065, -2065, -1234, -2065,  -892,
   -2065, -2065, -2065, -2065, -2065,   418,   707,  2527,  2241, -2065,
    1697, -2065,   727,  1969, -2065, -2065, -2065, -2065, -2065, -2065,
   -2065, -2065, -1106,  1249, -2065, -2065, -2065, -2065,   106, -2065,
   -2065, -2065, -2065,   761, -2065,   384, -2065,  1264,  1253, -1644,
   -1650, -1432, -2064, -1363, -2065, -1062,   377,  -405,   213,  -841,
    -437,  1758, -1135, -2065, -2065, -2065,  2466, -2065,  -334, -2065,
    1749,  1104, -1146, -2065, -2065, -2065, -2065,  2081, -2065, -2065,
   -2065, -2065, -2065,  2283, -2065, -2065, -1467, -2065
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -708
static const yytype_int16 yytable[] =
{
     287,  1322,  1497,  1273,   536,  1364,   518,   918,  1285,  1286,
    1714,   616,  1726,  1712,  1304,   878,  1342,   487,   523,   362,
     846,   820,  1722,   513,  1877,  1094,  1095,  1357,  1877,  1054,
    1805,  1100,    91,  1102,  1180,  1177,   910,  1179,  2149,  1170,
     324,   325,   326,   327,   328,   329,   514,   293,   127,  1170,
    1379,  1506,  1507,   878,   293,  1385,   770,  1869,   511,   901,
    1066,  1056,  -707,  1495,   901,   379,   380,  1032,   771,  1875,
    1529,   320,   522,  1141,   524,  2240,   385,   386,   387,  2271,
    1142,   636,   389,   637,   558,  1723,   133,   888,  2246,   135,
     488,   489,   490,   491,   492,   493,   494,  1702,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   836,   510,   634,  1067,  1916,  1917,   660,
     661,   902,  2228,  1123,   541,  2236,   902,  1134,  1927,  1928,
      52,  2255,  1116,    99,   306,   307,  1143,   848,  1246,  1938,
    1144,  1806,   138,   487,    55,  2223,  1766,  1767,  1878,   334,
    2090,   634,  1276,  1703,   308,  1777,  1778,  1145,  1518,  1519,
    1520,  1521,  2120,   370,    53,   901,  1146,  1722,   882,  1046,
    2249,  2250,   121,  1879,   128,  -317,   124,  1879,    86,    56,
     550,   867,   630,  1068,   511,  1059,  1127,   872,   849,   874,
    2121,   486,   129,    72,  2229,  1128,  2265,  2229,   542,  2269,
    1556,    87,   363,  1147,   294,  1880,   889,  2150,   647,  1880,
     295,   294,   335,  1380,   130,  2091,   534,   295,   100,  1522,
    1704,   525,  1277,   330,   321,  1508,  1545,   902,  1171,   525,
    1723,   355,   134,   810,   799,   136,   772,  1555,  1402,  1716,
    2247,   131,  1124,   559,  1069,    92,  1135,  1033,  2241,  2256,
    1939,  1696,  2272,  -707,   551,  2020,  2021,  2022,  2023,  2024,
    2025,   903,   911,   912,  1148,  1058,    84,  2257,  1263,  2033,
     662,   363,  1897,  2037,  1814,   515,  2266,  2041,  1719,    16,
    2230,  1705,    54,  2230,  1403,   847,  1404,  1168,   139,   657,
     309,  1363,   631,   658,  2231,   904,   905,  2231,  2258,   371,
     668,   672,   674,   675,   676,   677,   678,   679,   680,   681,
     682,  1064,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,  1881,   700,   701,
     702,  1881,   704,   705,   706,   707,   708,   709,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,  2082,
    1870,  1871,  1476,   648,   727,   728,  2083,   917,  1724,   732,
     733,  1429,   773,  1819,   737,   738,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   755,   756,   757,   758,  1829,   760,   761,   762,
    1070,  1071,   517,   765,   766,   767,   768,   769,  1834,  1430,
    1076,   779,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,  1937,   331,   296,  1057,
     287,  1496,  2259,   297,   926,   296,   811,   929,   115,  1349,
     297,  1795,   651,  1845,   617,   560,   561,   562,   563,    74,
    2088,   351,   940,  1840,  1846,  1841,  1110,  1111,  1112,  1117,
    1118,  1119,  1120,   605,    85,  1904,  1905,  1906,  1907,  1908,
    1909,  2154,  1045,  2243,  1847,  2157,   606,  1918,  2267,  1344,
      16,  1922,   162,  1154,  1536,  1926,  1538,  1539,  1848,  1358,
    1523,  1524,  1525,    75,   618,  1155,  1820,  1849,   933,   934,
     140,  1350,  2253,   805,  1154,   143,   312,   539,   817,    76,
     925,   101,  1730,   116,  2001,   145,  1155,   147,   342,  2013,
     540,   543,   548,   623,   806,  1698,   352,  1049,  1082,  1083,
     545,  1156,   552,    88,  1941,  1731,  2244,  1850,   313,  1157,
      16,  2199,  2200,  1526,  2201,  2202,   818,  1207,  1208,   914,
    2260,  1351,  1156,  2254,   346,  1368,    77,  1821,  2268,   310,
    1157,    89,  1274,   314,  1369,  1280,  1311,  -355,  2261,   347,
     928,   315,  2245,    78,   634,    79,   935,   936,  1387,   311,
    1388,   938,    80,   316,   117,   163,  1312,   648,   945,  1158,
    2007,   546,  2089,   553,  1053,  1856,   619,   353,  1345,  2262,
    1531,  1861,    96,   607,   547,  2008,   554,    81,  1359,  1532,
    1158,   488,   489,   490,   491,   492,   493,   494,  1152,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1543,   510,  1352,   102,   807,  1159,
     104,  1488,   105,  1544,  1699,  1287,   141,   108,   608,   662,
     317,   144,   106,  1353,   324,   325,   326,   327,   328,   329,
    1159,   146,   107,   148,   343,  1969,  1883,   544,   549,   624,
     112,   318,  1323,  1160,  1970,   160,  1324,   109,   526,   877,
    2119,   775,   776,   149,   777,   358,   161,   778,  -355,   110,
    1036,  1037,  1971,  1039,   113,   878,   122,  1974,   486,   488,
     489,   490,   491,   492,   493,   494,   114,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1288,   510,  1325,    82,   150,  1326,   118,  -476,
     941,    90,   879,   319,   151,    97,   382,   383,  1997,   152,
     149,  2152,  1327,  2110,  1979,  1290,  -480,  2114,  1291,  2192,
    1292,   508,   509,  1293,   510,   527,   153,   119,  -477,  1991,
     120,  1992,  1328,   566,   567,  -323,  1269,   880,  1294,   137,
    1329,   123,  -476,   142,  2162,  1295,  1296,   125,  1261,   528,
    -476,   156,  1161,   150,   155,  2221,  2222,   157,  2124,  -480,
     158,   291,   529,   813,   525,  1108,   164,  -480,   908,   909,
     290,  -477,  -476,   507,   508,   509,   304,   510,   323,  -477,
    1297,  2248,  2198,   292,  1130,  1131,   338,   530,   336,  -480,
    1247,   337,   503,   504,   505,   506,   507,   508,   509,  1258,
     510,  -477,  1173,  1174,  2064,  1309,  1310,   330,  1313,  1314,
     339,   531,  1315,  1316,  1317,  1316,   340,  1181,   341,  1182,
    2074,  1339,  1340,  1374,  1375,   344,  1189,  1190,   350,  1191,
    1330,  1299,  1331,  1196,  2180,  2181,   345,  2183,  2184,   349,
    1197,  1198,  1199,  1200,   354,  1201,  1202,  1203,  1450,  1451,
     356,  1332,  1204,  1205,   360,  1206,  1453,  1454,  1542,  1340,
    1300,  1209,  1210,  1211,   358,  2079,  2049,   368,  1301,  1552,
    1340,  1694,  1340,  1720,  1386,  1219,  1220,  1221,   364,  1222,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1233,   510,  1735,  1736,  1770,  1771,   365,  2130,   366,  1234,
    1235,  1236,  1237,  1238,  1239,  1240,  1241,  1377,  1242,  1774,
    1775,   376,  1243,   367,  1244,   369,  1245,  1812,  1813,  1718,
    1835,  1340,  1843,  1340,   373,  1251,   374,  1253,  1253,  1302,
     856,   857,   858,   859,    91,   860,  1858,  1340,   862,   863,
     864,  1270,  1863,  1375,   377,   868,   869,   870,  1275,   375,
     873,   378,   942,   488,   489,   490,   491,   492,   493,   494,
     384,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   391,   510,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1321,   510,   392,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1477,   510,   393,  1479,   516,  1480,
     520,  1482,   488,   489,   490,   491,   492,   493,   494,   394,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   395,   510,  1872,  1873,   966,
     967,  1874,  1873,  1876,  1813,  1884,  1386,  1943,  1944,  1945,
    1944,  1391,  1087,  1088,  1395,  1091,  1092,  1093,  1946,  1944,
    1400,  1096,  1097,  1098,  1949,  1873,  1101,  2058,  2059,  1406,
     396,   938,  1951,  1952,  1953,  1954,   397,  1414,  1415,   398,
     488,   489,   490,   491,   492,   493,   494,   399,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   534,   510,   400,   488,   489,   490,   491,
     492,   493,   494,   401,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   402,
     510,  1956,  1957,  1959,  1960,  1478,  1977,  1340,   488,   489,
     490,   491,   492,   493,   494,   604,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1498,   510,  1978,  1340,   403,  1501,  1990,  1340,   488,
     489,   490,   491,   492,   493,   494,   404,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   405,   510,  1994,  1340,  2002,  1952,  2003,  1873,
    2004,  1873,   406,   488,   489,   490,   491,   492,   493,   494,
     407,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   408,   510,   488,   489,
     490,   491,   492,   493,   494,   409,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1706,   510,  2006,  1954,  2068,  1340,  2077,  1340,   488,
     489,   490,   491,   492,   493,   494,   410,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   411,   510,    57,   537,  2078,  1340,  2084,  1813,
    2095,  1736,  2134,  1340,  1741,  2136,  1952,  1742,  2137,  1954,
    2147,  2148,  1728,  2164,  2165,   538,  1753,  1754,  2170,  2171,
     555,  2203,  2204,  2206,  2207,   557,  2209,  2204,  1755,  2234,
    2204,  2235,  2204,   998,   999,  2238,  2239,  1762,  1763,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   412,   510,  1779,  1780,  1781,  2263,  2204,  1782,
    1783,   565,  1784,   413,  1785,   414,  1786,   415,  1060,  1061,
    1266,  1267,    58,  1799,  1800,   416,   417,   418,   419,    59,
    1792,  1794,   420,   421,   422,   423,   424,   425,   426,  1802,
    1803,   556,  1000,  1001,   427,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,  1816,   510,   428,
     429,  1822,   430,   431,   432,    60,    61,   433,   434,   435,
     436,  1826,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,    62,   447,   448,  1832,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   449,   510,   450,
    1557,  1558,  1559,  1560,  1561,  1562,   451,  1563,   452,  1564,
    1022,  1023,   453,  1565,  1566,  1567,   454,  1568,   455,   456,
     457,  1569,  1570,  1571,  1572,  1573,   458,   459,   460,    63,
     461,   462,   463,   464,   465,  1574,  1028,  1029,   466,   467,
    1575,  1576,   468,   469,  1577,   470,    64,   471,    65,  1578,
    1579,  1580,  1581,  1582,   472,    66,  1583,   473,  1584,  1585,
    1586,   474,   475,  1587,  1588,   476,  1589,  1590,  1591,  1729,
     477,   478,  1592,   479,    67,    68,   480,   481,   482,   483,
     484,   485,   519,   521,   568,   569,  1593,   612,   613,    69,
     614,  1594,   615,   621,   622,   625,  1595,  1596,  1597,  1411,
    1412,   627,   628,  1598,  1599,   633,  1600,  1601,  1602,  1603,
     638,   639,  1604,   640,  1605,  1606,  1607,  1608,   641,  1609,
     642,  1610,  1611,   643,  1612,   644,  1613,  1614,   645,  1615,
    1616,  1617,  1618,  1441,  1442,   646,   650,   653,  1619,   510,
    1620,   663,  1621,  1622,   664,  1623,  1624,  1625,  1626,  1627,
    1628,   665,  1629,  1630,  1631,  1632,  1633,   683,  1466,  1467,
     699,   703,   722,   723,   724,   725,   726,  1634,   729,  1635,
     730,  1636,   731,  1887,  1888,   734,   735,   736,   759,  1892,
    1637,  1894,  1638,  1639,  1640,  1641,  1642,  1643,  1644,  1468,
    1469,  1645,  1646,   798,   763,   800,   774,  1647,    70,  1648,
    1649,  1650,   802,  1651,   804,  1652,   812,  1653,  1654,  1655,
    1656,   814,   821,   822,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   837,   838,   839,   840,
    1657,  1658,  1659,   841,   842,   843,   844,   852,   845,   850,
    1660,   853,  1661,  1662,  1663,   854,   861,   871,   865,  1664,
     875,  1665,  1666,  1667,   876,   881,   883,  1668,   884,   885,
     886,  1669,  1670,   887,  1671,  1672,  1673,  1674,   890,   891,
     892,  1675,   488,   489,   490,   491,   492,   493,   494,   893,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   895,   510,   897,  1988,   894,
     899,   898,   900,   915,   921,   923,   931,   937,    16,  1998,
     981,   995,  1676,  1677,  1678,  1679,  1680,   488,   489,   490,
     491,   492,   493,   494,   996,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1400,   510,   997,  1002,  1003,  1004,  1038,  1047,   -71,   488,
     489,   490,   491,   492,   493,   494,  2026,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1041,   510,  1681,  1682,  1683,  1684,  1685,  2044,
    1686,  1048,  1042,  1043,  2046,  1050,  1063,  1557,  1558,  1559,
    1560,  1561,  1562,  2052,  1563,  1051,  1564,  1052,  1062,  1065,
    1565,  1566,  1567,  1072,  1568,  1073,  2061,  2062,  1569,  1570,
    1571,  1572,  1573,  1074,   878,  1077,  1078,  1079,  1080,  1081,
    1084,  1089,  1574,  1103,  1104,  1105,  1106,  1575,  1576,  1107,
    1109,  1577,  1126,  1113,  1115,  1125,  1578,  1579,  1580,  1581,
    1582,  1129,  1132,  1583,  1136,  1584,  1585,  1586,  1137,  1138,
    1587,  1588,  1139,  1589,  1590,  1591,  1140,  1153,  1165,  1592,
    1166,  1170,  1169,  1185,  1175,  1187,  1188,  1193,  1212,  1213,
    1214,  1215,  1216,  1593,  1217,  1223,  1224,  1227,  1594,  1218,
    1225,  1229,  1226,  1595,  1596,  1597,  1228,  1230,  1259,   -73,
    1598,  1599,  1262,  1600,  1601,  1602,  1603,  1231,  1232,  1604,
    1264,  1844,  1606,  1607,  1608,  1271,  1609,  1272,  1610,  1611,
    1268,  1612,  1282,  1613,  1614,  1283,  1615,  1616,  1617,  1618,
    1305,  2133,  1306,  1320,  1281,  1619,  1284,  1620,  1307,  1621,
    1622,  1308,  1623,  1624,  1625,  1626,  1627,  1628,  2145,  1629,
    1630,  1631,  1632,  1633,  1318,  1319,  1334,  1335,  1336,  1341,
    1337,  1343,  1338,  1346,  1634,  1348,  1635,  1354,  1636,  1356,
    1360,  1361,  1362,  1365,  1366,  1367,  1370,  1637,  1372,  1638,
    1639,  1640,  1641,  1642,  1643,  1644,  1376,  1371,  1645,  1646,
    1378,  1373,  1382,  1381,  1647,  1383,  1648,  1649,  1650,  1384,
    1651,  1392,  1652,  1396,  1653,  1654,  1655,  1656,  1397,  1398,
    1485,  1486,  1489,  1386,  1416,  1493,  1494,  1504,  1510,  1509,
    1407,  1514,  1515,  1527,  1517,  1417,  1434,  1657,  1658,  1659,
    2196,  1474,  1528,  1435,  1533,  1436,  1437,  1660,  1438,  1661,
    1662,  1663,  1530,  1534,  1535,  1537,  1664,  1439,  1665,  1666,
    1667,  1475,  1470,  1471,  1668,  1546,  1440,  1449,  1669,  1670,
    1452,  1671,  1672,  1673,  1674,  1455,  1547,  1481,  1675,   488,
     489,   490,   491,   492,   493,   494,  1483,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1490,   510,  1484,  1491,  1548,  1910,  1911,  1492,
    1499,  1502,  1549,  1503,  1511,  1512,  1513,  1550,  1516,  1676,
    1677,  1678,  1679,  1680,  1540,  1551,  1553,  1689,  1688,  1554,
    1691,  1693,  1697,  1695,  1707,  1700,  1708,  1709,  1710,  1713,
     930,  1733,  1727,  1734,  1738,  1740,  1764,  1787,  1769,  1788,
    1773,  1557,  1558,  1559,  1560,  1561,  1562,  1789,  1563,  1790,
    1564,  1791,  1797,  1801,  1565,  1566,  1567,  1804,  1568,  1808,
    1810,  1818,  1569,  1570,  1571,  1572,  1573,  1815,  1817,  1828,
    1823,  1681,  1682,  1683,  1684,  1685,  1574,  1686,  1824,  1825,
    1831,  1575,  1576,  1830,  1836,  1577,  1833,  1837,  1838,  1851,
    1578,  1579,  1580,  1581,  1582,  1839,  1842,  1583,  1853,  1584,
    1585,  1586,  1854,  1860,  1587,  1588,  1865,  1589,  1590,  1591,
    1857,  1852,  1862,  1592,  1859,  1866,  1864,  1867,  1885,  1914,
    1895,  1889,  1896,  1898,  1913,  1920,  1919,  1593,  1947,  1921,
    1924,  1948,  1594,  1923,  1950,  1955,  1963,  1595,  1596,  1597,
    1976,  1986,  1987,  1989,  1598,  1599,  1961,  1600,  1601,  1602,
    1603,  1925,  1962,  1604,  2005,  1972,  1606,  1607,  1608,  1993,
    1609,  1965,  1610,  1611,  1966,  1612,  1995,  1613,  1614,  1967,
    1615,  1616,  1617,  1618,  1999,  2000,  2009,  2010,  2011,  1619,
    2012,  1620,  2014,  1621,  1622,  2015,  1623,  1624,  1625,  1626,
    1627,  1628,  2018,  1629,  1630,  1631,  1632,  1633,  2027,  2029,
    2030,  2031,  2032,  2035,  2036,  2039,  2040,  2045,  1634,  2050,
    1635,  2042,  1636,  2043,  2047,  2051,  2053,  2055,  2054,  2056,
    2057,  1637,  2060,  1638,  1639,  1640,  1641,  1642,  1643,  1644,
    2063,  2067,  1645,  1646,  2069,  2071,  2070,  2072,  1647,  2073,
    1648,  1649,  1650,  2076,  1651,  2080,  1652,  2085,  1653,  1654,
    1655,  1656,  2086,  2087,  2093,  2092,  2094,  2096,  2099,  2097,
    2100,  2101,  2102,  2107,  2103,  2104,  2122,  2125,  2135,  2111,
    2106,  1657,  1658,  1659,  2109,  2113,  2112,  2115,  2116,  2138,
    2117,  1660,  2126,  1661,  1662,  1663,  2140,  2141,  2127,  2139,
    1664,  2146,  1665,  1666,  1667,  2142,  2143,  2144,  1668,  2151,
    2160,  2163,  1669,  1670,  2153,  1671,  1672,  1673,  1674,  2161,
    2168,  2172,  1675,   488,   489,   490,   491,   492,   493,   494,
    2169,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  2173,   510,  2174,  2175,
     946,  2176,  2178,  2185,  2179,  2182,  2186,  1873,  2187,  2189,
    2190,  2193,  2191,  1676,  1677,  1678,  1679,  1680,   488,   489,
     490,   491,   492,   493,   494,  2194,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  2195,   510,  2197,  2205,  1557,  1558,  1559,  1560,  1561,
    1562,  2208,  1563,  2218,  1564,  2211,  2219,  2220,  1565,  1566,
    1567,  2210,  1568,  2213,  2214,  2224,  1569,  1570,  1571,  1572,
    1573,  2227,  2215,  2237,  2216,  1681,  1682,  1683,  1684,  1685,
    1574,  1686,  2232,  2233,  2242,  1575,  1576,  2240,  2251,  1577,
    2270,  2273,  2264,  2274,  1578,  1579,  1580,  1581,  1582,  2275,
    2276,  1583,  2277,  1584,  1585,  1586,  2278,  1408,  1587,  1588,
    1195,  1589,  1590,  1591,   305,  1257,   659,  1592,  1942,  1796,
    1886,   801,   816,  1500,   361,  2212,   919,   159,   920,   652,
     927,  1593,  2017,  2252,  1996,  1178,  1594,  1701,  1717,  1099,
     381,  1595,  1596,  1597,  1827,  1721,  1114,   626,  1598,  1599,
       0,  1600,  1601,  1602,  1603,     0,     0,  1604,   851,  1975,
    1606,  1607,  1608,     0,  1609,     0,  1610,  1611,     0,  1612,
       0,  1613,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,
       0,     0,     0,  1619,     0,  1620,     0,  1621,  1622,     0,
    1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,  1630,  1631,
    1632,  1633,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1634,     0,  1635,     0,  1636,     0,     0,     0,
       0,     0,     0,     0,     0,  1637,     0,  1638,  1639,  1640,
    1641,  1642,  1643,  1644,     0,     0,  1645,  1646,     0,     0,
       0,     0,  1647,     0,  1648,  1649,  1650,     0,  1651,     0,
    1652,     0,  1653,  1654,  1655,  1656,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1657,  1658,  1659,     0,     0,
       0,     0,     0,     0,     0,  1660,     0,  1661,  1662,  1663,
       0,     0,     0,     0,  1664,     0,  1665,  1666,  1667,     0,
       0,     0,  1668,     0,     0,     0,  1669,  1670,     0,  1671,
    1672,  1673,  1674,     0,     0,     0,  1675,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,   947,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1676,  1677,  1678,
    1679,  1680,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,   764,  1557,
    1558,  1559,  1560,  1561,  1562,     0,  1563,     0,  1564,     0,
       0,     0,  1565,  1566,  1567,     0,  1568,     0,     0,     0,
    1569,  1570,  1571,  1572,  1573,     0,     0,     0,     0,  1681,
    1682,  1683,  1684,  1685,  1574,  1686,     0,     0,     0,  1575,
    1576,     0,     0,  1577,     0,     0,     0,     0,  1578,  1579,
    1580,  1581,  1582,     0,     0,  1583,     0,  1584,  1585,  1586,
       0,     0,  1587,  1588,     0,  1589,  1590,  1591,     0,     0,
       0,  1592,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1593,     0,     0,     0,     0,
    1594,     0,     0,     0,     0,  1595,  1596,  1597,     0,     0,
       0,     0,  1598,  1599,     0,  1600,  1601,  1602,  1603,     0,
       0,  1604,     0,  1980,  1606,  1607,  1608,     0,  1609,     0,
    1610,  1611,     0,  1612,     0,  1613,  1614,     0,  1615,  1616,
    1617,  1618,     0,     0,     0,     0,     0,  1619,     0,  1620,
       0,  1621,  1622,     0,  1623,  1624,  1625,  1626,  1627,  1628,
       0,  1629,  1630,  1631,  1632,  1633,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1634,     0,  1635,     0,
    1636,     0,     0,     0,     0,     0,     0,     0,     0,  1637,
       0,  1638,  1639,  1640,  1641,  1642,  1643,  1644,     0,     0,
    1645,  1646,     0,     0,     0,     0,  1647,     0,  1648,  1649,
    1650,     0,  1651,     0,  1652,     0,  1653,  1654,  1655,  1656,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1657,
    1658,  1659,     0,     0,     0,     0,     0,     0,     0,  1660,
       0,  1661,  1662,  1663,     0,     0,     0,     0,  1664,     0,
    1665,  1666,  1667,     0,     0,     0,  1668,     0,     0,     0,
    1669,  1670,     0,  1671,  1672,  1673,  1674,     0,     0,     0,
    1675,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,   948,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1676,  1677,  1678,  1679,  1680,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,   943,  1557,  1558,  1559,  1560,  1561,  1562,     0,
    1563,     0,  1564,     0,     0,     0,  1565,  1566,  1567,     0,
    1568,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,     0,
       0,     0,     0,  1681,  1682,  1683,  1684,  1685,  1574,  1686,
       0,     0,     0,  1575,  1576,     0,     0,  1577,     0,     0,
       0,     0,  1578,  1579,  1580,  1581,  1582,     0,     0,  1583,
       0,  1584,  1585,  1586,     0,     0,  1587,  1588,     0,  1589,
    1590,  1591,     0,     0,     0,  1592,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1593,
       0,     0,     0,     0,  1594,     0,     0,     0,     0,  1595,
    1596,  1597,     0,     0,     0,     0,  1598,  1599,     0,  1600,
    1601,  1602,  1603,     0,     0,  1604,     0,  1981,  1606,  1607,
    1608,     0,  1609,     0,  1610,  1611,     0,  1612,     0,  1613,
    1614,     0,  1615,  1616,  1617,  1618,     0,     0,     0,     0,
       0,  1619,     0,  1620,     0,  1621,  1622,     0,  1623,  1624,
    1625,  1626,  1627,  1628,     0,  1629,  1630,  1631,  1632,  1633,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1634,     0,  1635,     0,  1636,     0,     0,     0,     0,     0,
       0,     0,     0,  1637,     0,  1638,  1639,  1640,  1641,  1642,
    1643,  1644,     0,     0,  1645,  1646,     0,     0,     0,     0,
    1647,     0,  1648,  1649,  1650,     0,  1651,     0,  1652,     0,
    1653,  1654,  1655,  1656,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1657,  1658,  1659,     0,     0,     0,     0,
       0,     0,     0,  1660,     0,  1661,  1662,  1663,     0,     0,
       0,     0,  1664,     0,  1665,  1666,  1667,     0,     0,     0,
    1668,     0,     0,     0,  1669,  1670,     0,  1671,  1672,  1673,
    1674,     0,     0,     0,  1675,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,   955,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1676,  1677,  1678,  1679,  1680,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,   949,  1557,  1558,  1559,
    1560,  1561,  1562,     0,  1563,     0,  1564,     0,     0,     0,
    1565,  1566,  1567,     0,  1568,     0,     0,     0,  1569,  1570,
    1571,  1572,  1573,     0,     0,     0,     0,  1681,  1682,  1683,
    1684,  1685,  1574,  1686,     0,     0,     0,  1575,  1576,     0,
       0,  1577,     0,     0,     0,     0,  1578,  1579,  1580,  1581,
    1582,     0,     0,  1583,     0,  1584,  1585,  1586,     0,     0,
    1587,  1588,     0,  1589,  1590,  1591,     0,     0,     0,  1592,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1593,     0,     0,     0,     0,  1594,     0,
       0,     0,     0,  1595,  1596,  1597,     0,     0,     0,     0,
    1598,  1599,     0,  1600,  1601,  1602,  1603,     0,     0,  1604,
       0,  1982,  1606,  1607,  1608,     0,  1609,     0,  1610,  1611,
       0,  1612,     0,  1613,  1614,     0,  1615,  1616,  1617,  1618,
       0,     0,     0,     0,     0,  1619,     0,  1620,     0,  1621,
    1622,     0,  1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,
    1630,  1631,  1632,  1633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1634,     0,  1635,     0,  1636,     0,
       0,     0,     0,     0,     0,     0,     0,  1637,     0,  1638,
    1639,  1640,  1641,  1642,  1643,  1644,     0,     0,  1645,  1646,
       0,     0,     0,     0,  1647,     0,  1648,  1649,  1650,     0,
    1651,     0,  1652,     0,  1653,  1654,  1655,  1656,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1657,  1658,  1659,
       0,     0,     0,     0,     0,     0,     0,  1660,     0,  1661,
    1662,  1663,     0,     0,     0,     0,  1664,     0,  1665,  1666,
    1667,     0,     0,     0,  1668,     0,     0,     0,  1669,  1670,
       0,  1671,  1672,  1673,  1674,     0,     0,     0,  1675,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,   956,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1676,
    1677,  1678,  1679,  1680,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
     950,  1557,  1558,  1559,  1560,  1561,  1562,     0,  1563,     0,
    1564,     0,     0,     0,  1565,  1566,  1567,     0,  1568,     0,
       0,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,     0,
       0,  1681,  1682,  1683,  1684,  1685,  1574,  1686,     0,     0,
       0,  1575,  1576,     0,     0,  1577,     0,     0,     0,     0,
    1578,  1579,  1580,  1581,  1582,     0,     0,  1583,     0,  1584,
    1585,  1586,     0,     0,  1587,  1588,     0,  1589,  1590,  1591,
       0,     0,     0,  1592,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1593,     0,     0,
       0,     0,  1594,     0,     0,     0,     0,  1595,  1596,  1597,
       0,     0,     0,     0,  1598,  1599,     0,  1600,  1601,  1602,
    1603,     0,     0,  1604,     0,  1983,  1606,  1607,  1608,     0,
    1609,     0,  1610,  1611,     0,  1612,     0,  1613,  1614,     0,
    1615,  1616,  1617,  1618,     0,     0,     0,     0,     0,  1619,
       0,  1620,     0,  1621,  1622,     0,  1623,  1624,  1625,  1626,
    1627,  1628,     0,  1629,  1630,  1631,  1632,  1633,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1634,     0,
    1635,     0,  1636,     0,     0,     0,     0,     0,     0,     0,
       0,  1637,     0,  1638,  1639,  1640,  1641,  1642,  1643,  1644,
       0,     0,  1645,  1646,     0,     0,     0,     0,  1647,     0,
    1648,  1649,  1650,     0,  1651,     0,  1652,     0,  1653,  1654,
    1655,  1656,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1657,  1658,  1659,     0,     0,     0,     0,     0,     0,
       0,  1660,     0,  1661,  1662,  1663,     0,     0,     0,     0,
    1664,     0,  1665,  1666,  1667,     0,     0,     0,  1668,     0,
       0,     0,  1669,  1670,     0,  1671,  1672,  1673,  1674,     0,
       0,     0,  1675,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
     957,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1676,  1677,  1678,  1679,  1680,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,   951,  1557,  1558,  1559,  1560,  1561,
    1562,     0,  1563,     0,  1564,     0,     0,     0,  1565,  1566,
    1567,     0,  1568,     0,     0,     0,  1569,  1570,  1571,  1572,
    1573,     0,     0,     0,     0,  1681,  1682,  1683,  1684,  1685,
    1574,  1686,     0,     0,     0,  1575,  1576,     0,     0,  1577,
       0,     0,     0,     0,  1578,  1579,  1580,  1581,  1582,     0,
       0,  1583,     0,  1584,  1585,  1586,     0,     0,  1587,  1588,
       0,  1589,  1590,  1591,     0,     0,     0,  1592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1593,     0,     0,     0,     0,  1594,     0,     0,     0,
       0,  1595,  1596,  1597,     0,     0,     0,     0,  1598,  1599,
       0,  1600,  1601,  1602,  1603,     0,     0,  1604,     0,  1984,
    1606,  1607,  1608,     0,  1609,     0,  1610,  1611,     0,  1612,
       0,  1613,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,
       0,     0,     0,  1619,     0,  1620,     0,  1621,  1622,     0,
    1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,  1630,  1631,
    1632,  1633,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1634,     0,  1635,     0,  1636,     0,     0,     0,
       0,     0,     0,     0,     0,  1637,     0,  1638,  1639,  1640,
    1641,  1642,  1643,  1644,     0,     0,  1645,  1646,     0,     0,
       0,     0,  1647,     0,  1648,  1649,  1650,     0,  1651,     0,
    1652,     0,  1653,  1654,  1655,  1656,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1657,  1658,  1659,     0,     0,
       0,     0,     0,     0,     0,  1660,     0,  1661,  1662,  1663,
       0,     0,     0,     0,  1664,     0,  1665,  1666,  1667,     0,
       0,     0,  1668,     0,     0,     0,  1669,  1670,     0,  1671,
    1672,  1673,  1674,     0,     0,     0,  1675,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,   958,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1676,  1677,  1678,
    1679,  1680,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,   952,  1557,
    1558,  1559,  1560,  1561,  1562,     0,  1563,     0,  1564,     0,
       0,     0,  1565,  1566,  1567,     0,  1568,     0,     0,     0,
    1569,  1570,  1571,  1572,  1573,     0,     0,     0,     0,  1681,
    1682,  1683,  1684,  1685,  1574,  1686,     0,     0,     0,  1575,
    1576,     0,     0,  1577,     0,     0,     0,     0,  1578,  1579,
    1580,  1581,  1582,     0,     0,  1583,     0,  1584,  1585,  1586,
       0,     0,  1587,  1588,     0,  1589,  1590,  1591,     0,     0,
       0,  1592,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1593,     0,     0,     0,     0,
    1594,     0,     0,     0,     0,  1595,  1596,  1597,     0,     0,
       0,     0,  1598,  1599,     0,  1600,  1601,  1602,  1603,     0,
       0,  1604,     0,  1985,  1606,  1607,  1608,     0,  1609,     0,
    1610,  1611,     0,  1612,     0,  1613,  1614,     0,  1615,  1616,
    1617,  1618,     0,     0,     0,     0,     0,  1619,     0,  1620,
       0,  1621,  1622,     0,  1623,  1624,  1625,  1626,  1627,  1628,
       0,  1629,  1630,  1631,  1632,  1633,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1634,     0,  1635,     0,
    1636,     0,     0,     0,     0,     0,     0,     0,     0,  1637,
       0,  1638,  1639,  1640,  1641,  1642,  1643,  1644,     0,     0,
    1645,  1646,     0,     0,     0,     0,  1647,     0,  1648,  1649,
    1650,     0,  1651,     0,  1652,     0,  1653,  1654,  1655,  1656,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1657,
    1658,  1659,     0,     0,     0,     0,     0,     0,     0,  1660,
       0,  1661,  1662,  1663,     0,     0,     0,     0,  1664,     0,
    1665,  1666,  1667,     0,     0,     0,  1668,     0,     0,     0,
    1669,  1670,     0,  1671,  1672,  1673,  1674,     0,     0,     0,
    1675,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,   960,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1676,  1677,  1678,  1679,  1680,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,   953,  1557,  1558,  1559,  1560,  1561,  1562,     0,
    1563,     0,  1564,     0,     0,     0,  1565,  1566,  1567,     0,
    1568,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,     0,
       0,     0,     0,  1681,  1682,  1683,  1684,  1685,  1574,  1686,
       0,     0,     0,  1575,  1576,     0,     0,  1577,     0,     0,
       0,     0,  1578,  1579,  1580,  1581,  1582,     0,     0,  1583,
       0,  1584,  1585,  1586,     0,     0,  1587,  1588,     0,  1589,
    1590,  1591,     0,     0,     0,  1592,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1593,
       0,     0,     0,     0,  1594,     0,     0,     0,     0,  1595,
    1596,  1597,     0,     0,     0,     0,  1598,  1599,     0,  1600,
    1601,  1602,  1603,     0,     0,  1604,     0,  2065,  1606,  1607,
    1608,     0,  1609,     0,  1610,  1611,     0,  1612,     0,  1613,
    1614,     0,  1615,  1616,  1617,  1618,     0,     0,     0,     0,
       0,  1619,     0,  1620,     0,  1621,  1622,     0,  1623,  1624,
    1625,  1626,  1627,  1628,     0,  1629,  1630,  1631,  1632,  1633,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1634,     0,  1635,     0,  1636,     0,     0,     0,     0,     0,
       0,     0,     0,  1637,     0,  1638,  1639,  1640,  1641,  1642,
    1643,  1644,     0,     0,  1645,  1646,     0,     0,     0,     0,
    1647,     0,  1648,  1649,  1650,     0,  1651,     0,  1652,     0,
    1653,  1654,  1655,  1656,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1657,  1658,  1659,     0,     0,     0,     0,
       0,     0,     0,  1660,     0,  1661,  1662,  1663,     0,     0,
       0,     0,  1664,     0,  1665,  1666,  1667,     0,     0,     0,
    1668,     0,     0,     0,  1669,  1670,     0,  1671,  1672,  1673,
    1674,     0,     0,     0,  1675,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,   961,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1676,  1677,  1678,  1679,  1680,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,   954,  1557,  1558,  1559,
    1560,  1561,  1562,     0,  1563,     0,  1564,     0,     0,     0,
    1565,  1566,  1567,     0,  1568,     0,     0,     0,  1569,  1570,
    1571,  1572,  1573,     0,     0,     0,     0,  1681,  1682,  1683,
    1684,  1685,  1574,  1686,     0,     0,     0,  1575,  1576,     0,
       0,  1577,     0,     0,     0,     0,  1578,  1579,  1580,  1581,
    1582,     0,     0,  1583,     0,  1584,  1585,  1586,     0,     0,
    1587,  1588,     0,  1589,  1590,  1591,     0,     0,     0,  1592,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1593,     0,     0,     0,     0,  1594,     0,
       0,     0,     0,  1595,  1596,  1597,     0,     0,     0,     0,
    1598,  1599,     0,  1600,  1601,  1602,  1603,     0,     0,  1604,
       0,  2066,  1606,  1607,  1608,     0,  1609,     0,  1610,  1611,
       0,  1612,     0,  1613,  1614,     0,  1615,  1616,  1617,  1618,
       0,     0,     0,     0,     0,  1619,     0,  1620,     0,  1621,
    1622,     0,  1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,
    1630,  1631,  1632,  1633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1634,     0,  1635,     0,  1636,     0,
       0,     0,     0,     0,     0,     0,     0,  1637,     0,  1638,
    1639,  1640,  1641,  1642,  1643,  1644,     0,     0,  1645,  1646,
       0,     0,     0,     0,  1647,     0,  1648,  1649,  1650,     0,
    1651,     0,  1652,     0,  1653,  1654,  1655,  1656,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1657,  1658,  1659,
       0,     0,     0,     0,     0,     0,     0,  1660,     0,  1661,
    1662,  1663,     0,     0,     0,     0,  1664,     0,  1665,  1666,
    1667,     0,     0,     0,  1668,     0,     0,     0,  1669,  1670,
       0,  1671,  1672,  1673,  1674,     0,     0,     0,  1675,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,   962,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1676,
    1677,  1678,  1679,  1680,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
     959,  1557,  1558,  1559,  1560,  1561,  1562,     0,  1563,     0,
    1564,     0,     0,     0,  1565,  1566,  1567,     0,  1568,     0,
       0,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,     0,
       0,  1681,  1682,  1683,  1684,  1685,  1574,  1686,     0,     0,
       0,  1575,  1576,     0,     0,  1577,     0,     0,     0,     0,
    1578,  1579,  1580,  1581,  1582,     0,     0,  1583,     0,  1584,
    1585,  1586,     0,     0,  1587,  1588,     0,  1589,  1590,  1591,
       0,     0,     0,  1592,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1593,     0,     0,
       0,     0,  1594,     0,     0,     0,     0,  1595,  1596,  1597,
       0,     0,     0,     0,  1598,  1599,     0,  1600,  1601,  1602,
    1603,     0,     0,  1604,     0,  2131,  1606,  1607,  1608,     0,
    1609,     0,  1610,  1611,     0,  1612,     0,  1613,  1614,     0,
    1615,  1616,  1617,  1618,     0,     0,     0,     0,     0,  1619,
       0,  1620,     0,  1621,  1622,     0,  1623,  1624,  1625,  1626,
    1627,  1628,     0,  1629,  1630,  1631,  1632,  1633,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1634,     0,
    1635,     0,  1636,     0,     0,     0,     0,     0,     0,     0,
       0,  1637,     0,  1638,  1639,  1640,  1641,  1642,  1643,  1644,
       0,     0,  1645,  1646,     0,     0,     0,     0,  1647,     0,
    1648,  1649,  1650,     0,  1651,     0,  1652,     0,  1653,  1654,
    1655,  1656,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1657,  1658,  1659,     0,     0,     0,     0,     0,     0,
       0,  1660,     0,  1661,  1662,  1663,     0,     0,     0,     0,
    1664,     0,  1665,  1666,  1667,     0,     0,     0,  1668,     0,
       0,     0,  1669,  1670,     0,  1671,  1672,  1673,  1674,     0,
       0,     0,  1675,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
     968,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1676,  1677,  1678,  1679,  1680,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,   963,  1557,  1558,  1559,  1560,  1561,
    1562,     0,  1563,     0,  1564,     0,     0,     0,  1565,  1566,
    1567,     0,  1568,     0,     0,     0,  1569,  1570,  1571,  1572,
    1573,     0,     0,     0,     0,  1681,  1682,  1683,  1684,  1685,
    1574,  1686,     0,     0,     0,  1575,  1576,     0,     0,  1577,
       0,     0,     0,     0,  1578,  1579,  1580,  1581,  1582,     0,
       0,  1583,     0,  1584,  1585,  1586,     0,     0,  1587,  1588,
       0,  1589,  1590,  1591,     0,     0,     0,  1592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1593,     0,     0,     0,     0,  1594,     0,     0,     0,
       0,  1595,  1596,  1597,     0,     0,     0,     0,  1598,  1599,
       0,  1600,  1601,  1602,  1603,     0,     0,  1604,     0,  2132,
    1606,  1607,  1608,     0,  1609,     0,  1610,  1611,     0,  1612,
       0,  1613,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,
       0,     0,     0,  1619,     0,  1620,     0,  1621,  1622,     0,
    1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,  1630,  1631,
    1632,  1633,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1634,     0,  1635,     0,  1636,     0,     0,     0,
       0,     0,     0,     0,     0,  1637,     0,  1638,  1639,  1640,
    1641,  1642,  1643,  1644,     0,     0,  1645,  1646,     0,     0,
       0,     0,  1647,     0,  1648,  1649,  1650,     0,  1651,     0,
    1652,     0,  1653,  1654,  1655,  1656,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1657,  1658,  1659,     0,     0,
       0,     0,     0,     0,     0,  1660,     0,  1661,  1662,  1663,
       0,     0,     0,     0,  1664,     0,  1665,  1666,  1667,     0,
       0,     0,  1668,     0,     0,     0,  1669,  1670,     0,  1671,
    1672,  1673,  1674,     0,     0,     0,  1675,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,   970,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1676,  1677,  1678,
    1679,  1680,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,   964,  1557,
    1558,  1559,  1560,  1561,  1562,     0,  1563,     0,  1564,     0,
       0,     0,  1565,  1566,  1567,     0,  1568,     0,     0,     0,
    1569,  1570,  1571,  1572,  1573,     0,     0,     0,     0,  1681,
    1682,  1683,  1684,  1685,  1574,  1686,     0,     0,     0,  1575,
    1576,     0,     0,  1577,     0,     0,     0,     0,  1578,  1579,
    1580,  1581,  1582,     0,     0,  1583,     0,  1584,  1585,  1586,
       0,     0,  1587,  1588,     0,  1589,  1590,  1591,     0,     0,
       0,  1592,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1593,     0,     0,     0,     0,
    1594,     0,     0,     0,     0,  1595,  1596,  1597,     0,     0,
       0,     0,  1598,  1599,     0,  1600,  1601,  1602,  1603,     0,
       0,  1604,     0,  2166,  1606,  1607,  1608,     0,  1609,     0,
    1610,  1611,     0,  1612,     0,  1613,  1614,     0,  1615,  1616,
    1617,  1618,     0,     0,     0,     0,     0,  1619,     0,  1620,
       0,  1621,  1622,     0,  1623,  1624,  1625,  1626,  1627,  1628,
       0,  1629,  1630,  1631,  1632,  1633,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1634,     0,  1635,     0,
    1636,     0,     0,     0,     0,     0,     0,     0,     0,  1637,
       0,  1638,  1639,  1640,  1641,  1642,  1643,  1644,     0,     0,
    1645,  1646,     0,     0,     0,     0,  1647,     0,  1648,  1649,
    1650,     0,  1651,     0,  1652,     0,  1653,  1654,  1655,  1656,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,     0,     0,     0,  1657,
    1658,  1659,   173,   174,     0,     0,     0,     0,     0,  1660,
       0,  1661,  1662,  1663,     0,   175,     0,     0,  1664,     0,
    1665,  1666,  1667,     0,     0,     0,  1668,     0,     0,     0,
    1669,  1670,     0,  1671,  1672,  1673,  1674,     0,     0,     0,
    1675,     0,   176,     0,     0,     0,     0,   177,     0,     0,
     178,   179,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,   975,     0,
       0,     0,     0,     0,     0,     0,   181,     0,     0,     0,
     182,  1676,  1677,  1678,  1679,  1680,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,   976,     0,     0,   183,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,  1681,  1682,  1683,  1684,  1685,     0,  1686,
       0,     0,     0,   184,     0,     0,   488,   489,   490,   491,
     492,   493,   494,   185,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   187,     0,     0,
       0,     0,     0,     0,   188,   189,     0,     0,     0,   190,
       0,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   191,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
     230,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,     0,     0,
     282,   283,   284,   285,     0,     0,   286,   165,   166,   167,
     168,   169,   170,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   172,     0,     0,     0,     0,     0,     0,   173,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,   669,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,   177,     0,     0,   178,   179,   488,
     489,   490,   491,   492,   493,   494,   180,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,   977,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,   978,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   670,     0,   990,     0,     0,
     184,     0,     0,   488,   489,   490,   491,   492,   493,   494,
     185,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     0,   488,   489,   490,   491,   492,
     493,   494,   991,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,   671,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,     0,     0,   282,   283,   284,
     285,     0,     0,   286,   165,   166,   167,   168,   169,   170,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   172,
       0,   992,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   780,
       0,   781,     0,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   176,   510,     0,     0,
     994,   177,     0,     0,   178,   179,   488,   489,   490,   491,
     492,   493,   494,   180,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,  1005,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
    1014,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1015,     0,     0,   184,     0,     0,
     488,   489,   490,   491,   492,   493,   494,   185,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1016,     0,     0,     0,
     186,     0,     0,     0,     0,     0,     0,   782,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,     0,   230,     0,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,     0,     0,   282,   283,   284,   285,     0,     0,
     783,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,     0,     0,     0,
       0,     0,     0,   173,     0,     0,     0,   488,   489,   490,
     491,   492,   493,   494,  1017,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,  1018,   177,     0,
       0,   178,   179,     0,     0,     0,     0,     0,     0,     0,
     180,     0,     0,     0,     0,   488,   489,   490,   491,   492,
     493,   494,  1019,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,   488,   489,   490,   491,   492,
     493,   494,  1020,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,  1021,     0,     0,   184,     0,     0,   488,   489,   490,
     491,   492,   493,   494,   185,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,     0,  1027,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   388,     0,     0,     0,
       0,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,     0,   278,   279,   280,   281,     0,     0,     0,
       0,   282,   283,   284,   285,     0,     0,   286,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,   171,   172,     0,     0,     0,     0,  1031,     0,
     173,   710,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     0,     0,     0,   177,     0,     0,   178,   179,
       0,     0,     0,     0,     0,     0,  1186,   180,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,  1421,     0,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1422,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1433,     0,
       0,   184,     0,     0,   488,   489,   490,   491,   492,   493,
     494,   185,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1443,     0,     0,   186,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,     0,   230,     0,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,     0,
     278,   279,   280,   281,     0,     0,     0,     0,   282,   283,
     284,   285,     0,     0,   286,   165,   166,   167,   168,   169,
     170,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,     0,     0,  1459,     0,     0,     0,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,   176,     0,     0,
       0,     0,   177,     0,     0,   178,   179,     0,     0,  1460,
       0,     0,     0,     0,   180,     0,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,  1461,
     510,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   944,   510,     0,  1464,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1465,     0,     0,   184,     0,
       0,   488,   489,   490,   491,   492,   493,   494,   185,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,  1409,
       0,     0,     0,     0,     0,     0,  1934,     0,     0,     0,
       0,   186,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,     0,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   979,     0,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,     0,   278,   279,   280,
     281,     0,     0,     0,     0,   282,   283,   284,   285,     0,
       0,   286,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,   980,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,   177,
       0,     0,   178,   179,     0,     0,  1410,     0,     0,     0,
       0,   180,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1394,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   488,   489,
     490,   491,   492,   493,   494,   965,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,   969,     0,     0,     0,   184,     0,     0,   488,   489,
     490,   491,   492,   493,   494,   185,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   971,     0,     0,     0,     0,     0,   186,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
       0,     0,   282,   283,   284,   285,     0,     0,   286,   165,
     166,   167,   168,   169,   170,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,     0,     0,     0,     0,     0,
       0,   173,   972,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,     0,     0,     0,     0,   177,     0,     0,   178,
     179,     0,   973,     0,     0,     0,     0,     0,   180,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1399,   510,     0,     0,     0,     0,   982,     0,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   983,   510,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,   984,     0,
       0,     0,   184,     0,     0,   488,   489,   490,   491,   492,
     493,   494,   185,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,   186,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,   230,
       0,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
       0,   278,   279,   280,   281,     0,     0,     0,     0,   282,
     283,   284,   285,     0,     0,   286,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,     0,   986,     0,     0,     0,     0,   173,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,   177,     0,     0,   178,   179,     0,   987,
     490,   491,   492,   493,   494,   180,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,  1891,
     988,     0,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   989,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   993,     0,     0,     0,   184,
       0,     0,   488,   489,   490,   491,   492,   493,   494,   185,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
       0,     0,   186,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,     0,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,     0,   278,   279,
     280,   281,     0,     0,     0,     0,   282,   283,   284,   285,
       0,     0,   286,   165,   166,   167,   168,   169,   170,     0,
       0,     0,     0,     0,     0,     0,     0,   171,   172,  1007,
       0,     0,     0,     0,     0,   173,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,     0,     0,     0,
     177,     0,     0,   178,   179,   488,   489,   490,   491,   492,
     493,   494,   180,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,  1008,     0,     0,     0,  1893,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     488,   489,   490,   491,   492,   493,   494,  1009,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,  1010,     0,     0,     0,   184,     0,     0,   488,
     489,   490,   491,   492,   493,   494,   185,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1011,     0,     0,     0,     0,     0,   186,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,   230,     0,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,     0,     0,   282,   283,   284,   285,     0,     0,   286,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,  1012,     0,     0,     0,
       0,     0,   173,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,     0,     0,  1013,     0,   177,     0,     0,
     178,   179,   488,   489,   490,   491,   492,   493,   494,   180,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,   488,   489,   490,   491,   492,   493,   494,
    1024,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,   488,   489,
     490,   491,   492,   493,   494,  1025,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1026,
       0,     0,     0,   184,     0,     0,   488,   489,   490,   491,
     492,   493,   494,   185,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1030,     0,     0,     0,     0,     0,   186,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
     230,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,     0,     0,
     282,   283,   284,   285,     0,     0,   286,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   488,   489,   490,   491,
     492,   493,   494,  1055,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
       0,     0,  1413,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,  1418,     0,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,  1419,   510,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   488,
     489,   490,   491,   492,   493,   494,  1420,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,  1423,   510,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   488,
     489,   490,   491,   492,   493,   494,  1424,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,  1425,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,   488,   489,   490,   491,
     492,   493,   494,  1426,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,   488,   489,
     490,   491,   492,   493,   494,  1427,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,   488,   489,   490,   491,   492,   493,   494,
    1428,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   488,   489,   490,   491,   492,   493,   494,  1431,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,   488,   489,   490,
     491,   492,   493,   494,  1432,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,   488,   489,   490,   491,   492,   493,   494,  1444,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,   488,   489,   490,
     491,   492,   493,   494,  1445,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,   488,   489,   490,   491,   492,   493,   494,  1458,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,   488,   489,   490,
     491,   492,   493,   494,  1462,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,   488,   489,   490,   491,   492,   493,   494,  1463,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,   488,   489,   490,
     491,   492,   493,   494,  1472,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   488,   489,   490,   491,   492,   493,   494,  1473,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,   488,   489,   490,
     491,   492,   493,   494,  1541,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,   488,
     489,   490,   491,   492,   493,   494,  1743,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,     0,
       0,   488,   489,   490,   491,   492,   493,   494,  1807,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,   488,   489,   490,   491,
     492,   493,   494,  1868,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   488,   489,   490,   491,   492,
     493,   494,  1899,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,  1900,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,   488,   489,   490,   491,   492,
     493,   494,  1901,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,  1902,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,   488,   489,   490,   491,   492,
     493,   494,  1903,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,  1912,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,   488,   489,   490,   491,   492,
     493,   494,  1929,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,  1930,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   488,   489,   490,   491,   492,
     493,   494,  1931,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,  1932,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,   488,   489,   490,   491,   492,   493,   494,  1933,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,   488,   489,   490,   491,   492,   493,
     494,  1935,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   488,
     489,   490,   491,   492,   493,   494,  1936,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,  -708,  -708,  -708,  -708,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1958,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1744,  1745,     0,     0,     0,  1746,     0,  1747,     0,
    1964,     0,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1968,   510,     0,     0,     0,
       0,  1748,  1749,     0,  1750,     0,     0,     0,     0,     0,
       0,     0,     0,   488,   489,   490,   491,   492,   493,   494,
    1973,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,  1288,     0,
       0,     0,     0,     0,     0,  2075,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,  1289,     0,     0,
       2,  1290,     0,     0,  1291,     0,  1292,     0,     0,  1293,
    2081,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,  1294,     0,     0,     4,     0,     0,
       0,  1295,  1296,     0,     0,  2105,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2118,     6,     7,     0,     0,     0,  1297,     0,     0,     0,
       0,     0,     0,     0,     0,  1751,  1752,     0,     0,     0,
       0,     0,     0,  1298,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2128,     0,   388,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,   570,   571,     0,   572,  1299,   573,   574,
    2129,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1300,     0,     0,   932,
       0,     0,  2167,     0,  1301,     0,     0,     0,     0,     0,
      12,     0,    13,     0,     0,     0,   576,   577,   578,   579,
      14,     0,     0,     0,     0,   580,     0,     0,     0,     0,
       0,     0,     0,     0,   581,     0,     0,     0,     0,     0,
    1184,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
      17,     0,   583,    18,     0,  1302,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,   584,     0,     0,
       0,     0,     0,     0,   585,     0,     0,   586,     0,     0,
     587,   588,     0,     0,     0,     0,     0,     0,     0,     0,
     488,   489,   490,   491,   492,   493,   494,   589,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   590,   591,     0,     0,   592,   593,     0,     0,
       0,     0,   594,     0,   595,     0,     0,     0,     0,   596,
     597,     0,     0,     0,     0,   598,     0,   599,     0,     0,
       0,     0,     0,   600,     0,   601,     0,     0,     0,     0,
     602,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
       0,     0,   488,   489,   490,   491,   492,   493,   494,  1192,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,  1722,
       0,     0,     0,     0,   487,     0,     0,     0,     0,     0,
       0,   488,   489,   490,   491,   492,   493,   494,  1183,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   511,     0,     0,     0,  1405,
       0,     0,     0,     0,     0,   488,   489,   490,   491,   492,
     493,   494,  1723,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,   488,   489,   490,   491,   492,   493,   494,   974,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,   488,   489,
     490,   491,   492,   493,   494,  1040,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,   488,   489,   490,   491,   492,   493,
     494,  1250,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510
};

static const yytype_int16 yycheck[] =
{
      95,  1109,  1273,  1059,   303,  1140,   293,   637,  1070,  1071,
    1373,   345,  1388,  1371,  1076,    34,  1124,     3,   297,   129,
       5,   531,    42,   129,    41,   866,   867,  1135,    41,   810,
    1497,   872,     8,   874,   930,   927,     4,   929,    83,   192,
       3,     4,     5,     6,     7,     8,   152,     3,     3,   192,
      80,  1285,  1286,    34,     3,  1161,     6,  1707,    44,   147,
      71,    20,    44,    20,   147,   160,   161,     6,    18,  1713,
    1304,    48,   297,    64,   234,    90,   171,   172,   173,     4,
      71,   260,   177,   362,    18,   105,     3,   260,   100,     3,
      10,    11,    12,    13,    14,    15,    16,    71,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   550,    34,   267,   127,  1766,  1767,   117,
     118,   209,    18,   260,     3,    18,   209,   260,  1777,  1778,
     212,    67,     3,     3,    47,    48,   127,     5,  1034,   270,
     131,  1499,     3,     3,   246,  2209,  1447,  1448,   165,   132,
     197,   267,   190,   127,    67,  1456,  1457,   148,     4,     5,
       6,     7,   224,    67,   246,   147,   157,    42,   605,   799,
    2234,  2235,    66,   190,   129,     3,    70,   190,     3,     3,
       3,   586,   129,   194,    44,   815,    44,   592,    56,   594,
     252,   286,   147,     3,    90,    53,   106,    90,    77,  2263,
    1346,    26,   381,   194,   160,   222,   379,   252,   234,   222,
     166,   160,   195,   243,   169,   262,    44,   166,    88,    65,
     194,   381,   260,   186,   201,  1287,  1334,   209,   381,   381,
     105,   125,   149,   520,   513,   149,   186,  1345,   381,  1374,
     252,   196,   379,   177,   255,   221,   379,   186,   263,   185,
     381,  1359,   177,   235,    77,  1904,  1905,  1906,  1907,  1908,
    1909,   344,   230,   231,   255,   381,     3,   203,  1049,  1918,
     268,   381,  1739,  1922,  1508,   381,   186,  1926,  1384,   235,
     176,   255,   364,   176,  1176,   270,  1178,   917,   149,   384,
     203,   379,   239,   388,   190,   378,   379,   190,   234,   203,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   821,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   344,   423,   424,
     425,   344,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,  1999,
    1708,  1709,  1248,   379,   449,   450,  2000,   636,   378,   454,
     455,   380,   312,    71,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,  1532,   482,   483,   484,
     827,   828,   378,   488,   489,   490,   491,   492,  1544,   380,
     837,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,  1792,   380,   374,   378,
     515,   378,    67,   379,   649,   374,   521,   652,     3,    38,
     379,  1487,   234,  1579,   100,   369,   370,   371,   372,    88,
     100,     3,   667,  1551,  1590,  1553,   883,   884,   885,   320,
     321,   322,   323,     3,     3,  1756,  1757,  1758,  1759,  1760,
    1761,  2110,   382,   130,  1610,  2114,    16,  1768,   106,   260,
     235,  1772,     3,    80,  1315,  1776,  1317,  1318,  1624,   260,
     326,   327,   328,   132,   150,    92,   194,  1633,   117,   118,
       3,   100,    91,   126,    80,     3,    36,    64,   170,   148,
     265,     0,     3,    78,  1867,     3,    92,     3,     3,  1885,
      77,    64,    64,     3,   147,   260,    78,   804,   852,   853,
       3,   128,     3,   246,  1795,    26,   193,  1673,    68,   136,
     235,  2180,  2181,   379,  2183,  2184,   208,   974,   975,   634,
     185,   150,   128,   142,    37,   148,   195,   255,   186,    93,
     136,   246,  1062,    93,   157,  1065,   253,   260,   203,    52,
     265,   101,   229,   212,   267,   214,   661,   662,     3,   113,
       5,   666,   221,   113,   149,   106,   273,   379,   673,   186,
       5,    64,   242,    64,   809,  1693,   252,   149,   379,   234,
      44,  1699,   246,   143,    77,    20,    77,   246,   379,    53,
     186,    10,    11,    12,    13,    14,    15,    16,   907,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    44,    34,   235,   377,   261,   236,
       3,  1261,     3,    53,   379,  1072,   149,   379,   188,   268,
     180,   149,     3,   252,     3,     4,     5,     6,     7,     8,
     236,   149,     3,   149,   149,    44,  1718,   210,   210,   149,
       3,   201,    55,   270,    53,     9,    59,   209,    69,    18,
    2046,    13,    14,    96,    16,   378,    20,    19,   381,   149,
     775,   776,  1828,   778,   148,    34,   240,  1833,   783,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    18,    34,   107,   364,   139,   110,     3,    96,
     129,    14,    71,   263,   147,    18,   378,   379,  1863,   152,
      96,  2107,   125,  2034,  1842,    41,    96,  2038,    44,  2171,
      46,    31,    32,    49,    34,   146,   169,     3,    96,  1857,
       3,  1859,   145,   380,   381,   156,  1055,   106,    64,     3,
     153,   148,   139,     3,  2122,    71,    72,   246,  1047,   170,
     147,   381,   379,   139,   164,  2207,  2208,     3,  2049,   139,
       3,   147,   183,   380,   381,   880,   381,   147,   380,   381,
       3,   139,   169,    30,    31,    32,     3,    34,   378,   147,
     106,  2233,  2178,   169,   217,   218,    44,   208,   274,   169,
    1035,     3,    26,    27,    28,    29,    30,    31,    32,  1044,
      34,   169,   380,   381,  1970,   380,   381,   186,    75,    76,
       3,   232,   380,   381,   380,   381,   379,   932,   190,   934,
    1986,   380,   381,   380,   381,   274,   941,   942,     3,   944,
     243,   157,   245,   948,  2155,  2156,   379,  2158,  2159,   190,
     955,   956,   957,   958,     3,   960,   961,   962,   380,   381,
     379,   264,   967,   968,     3,   970,   380,   381,   380,   381,
     186,   976,   977,   978,   378,  1993,  1942,   190,   194,   380,
     381,   380,   381,   380,   381,   990,   991,   992,   274,   994,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1005,    34,   380,   381,     4,     5,   274,  2063,   274,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1152,  1023,     4,
       5,     4,  1027,   274,  1029,   274,  1031,   380,   381,  1376,
     380,   381,   380,   381,   274,  1040,   274,  1042,  1043,   255,
     573,   574,   575,   576,     8,   578,   380,   381,   581,   582,
     583,  1056,   380,   381,   239,   588,   589,   590,  1063,     3,
     593,     3,   381,    10,    11,    12,    13,    14,    15,    16,
       9,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   378,    34,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1107,    34,   379,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1249,    34,    34,  1252,   381,  1254,
       3,  1256,    10,    11,    12,    13,    14,    15,    16,   379,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   379,    34,   380,   381,   380,
     381,   380,   381,   380,   381,   380,   381,   380,   381,   380,
     381,  1166,   859,   860,  1169,   862,   863,   864,   380,   381,
    1175,   868,   869,   870,   380,   381,   873,    50,    51,  1184,
     379,  1186,   380,   381,   380,   381,   379,  1192,  1193,   379,
      10,    11,    12,    13,    14,    15,    16,   379,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    44,    34,   379,    10,    11,    12,    13,
      14,    15,    16,   379,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   379,
      34,   380,   381,   380,   381,  1250,   380,   381,    10,    11,
      12,    13,    14,    15,    16,   190,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1276,    34,   380,   381,   379,  1281,   380,   381,    10,
      11,    12,    13,    14,    15,    16,   379,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   379,    34,   380,   381,   380,   381,   380,   381,
     380,   381,   379,    10,    11,    12,    13,    14,    15,    16,
     379,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   379,    34,    10,    11,
      12,    13,    14,    15,    16,   379,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1366,    34,   380,   381,   380,   381,   380,   381,    10,
      11,    12,    13,    14,    15,    16,   379,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   379,    34,    10,    46,   380,   381,   380,   381,
     380,   381,   380,   381,  1409,   380,   381,  1412,   380,   381,
     380,   381,   174,    50,    51,    46,  1421,  1422,   378,   379,
      64,   380,   381,   378,   379,   239,   380,   381,  1433,   380,
     381,   380,   381,   380,   381,   380,   381,  1442,  1443,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   379,    34,  1459,  1460,  1461,   380,   381,  1464,
    1465,     3,  1467,   379,  1469,   379,  1471,   379,   817,   818,
    1051,  1052,    88,  1491,  1492,   379,   379,   379,   379,    95,
    1485,  1486,   379,   379,   379,   379,   379,   379,   379,  1494,
    1495,   270,   380,   381,   379,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  1512,    34,   379,
     379,  1516,   379,   379,   379,   131,   132,   379,   379,   379,
     379,  1526,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   148,   379,   379,  1540,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   379,    34,   379,
       3,     4,     5,     6,     7,     8,   379,    10,   379,    12,
     380,   381,   379,    16,    17,    18,   379,    20,   379,   379,
     379,    24,    25,    26,    27,    28,   379,   379,   379,   195,
     379,   379,   379,   379,   379,    38,   380,   381,   379,   379,
      43,    44,   379,   379,    47,   379,   212,   379,   214,    52,
      53,    54,    55,    56,   379,   221,    59,   379,    61,    62,
      63,   379,   379,    66,    67,   379,    69,    70,    71,   381,
     379,   379,    75,   379,   240,   241,   379,   379,   379,   379,
     379,   379,   379,   379,     3,     3,    89,     3,   190,   255,
     274,    94,     3,     3,   190,   274,    99,   100,   101,   380,
     381,     3,     3,   106,   107,    26,   109,   110,   111,   112,
       3,     3,   115,     3,   117,   118,   119,   120,     3,   122,
       3,   124,   125,     3,   127,     3,   129,   130,     3,   132,
     133,   134,   135,   380,   381,     3,     3,     3,   141,    34,
     143,     3,   145,   146,     3,   148,   149,   150,   151,   152,
     153,   382,   155,   156,   157,   158,   159,   380,   380,   381,
     380,   380,   380,   380,   380,   380,   380,   170,   380,   172,
     380,   174,   380,  1728,  1729,     5,   380,   380,   380,  1734,
     183,  1736,   185,   186,   187,   188,   189,   190,   191,   380,
     381,   194,   195,     3,   380,     3,   379,   200,   364,   202,
     203,   204,     3,   206,     3,   208,   380,   210,   211,   212,
     213,     3,   156,   189,     3,     3,     3,     3,     3,     3,
       3,   215,     3,     3,     3,   215,     3,   239,     3,     3,
     233,   234,   235,     3,     5,     3,   372,   379,     5,     5,
     243,   379,   245,   246,   247,   379,   379,   379,    57,   252,
     379,   254,   255,   256,   379,     3,     3,   260,     3,     3,
     380,   264,   265,   381,   267,   268,   269,   270,     3,     3,
     190,   274,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    44,    34,     3,  1853,   190,
     274,   190,     3,   191,     3,     3,   380,   380,   235,  1864,
     380,   343,   315,   316,   317,   318,   319,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1895,    34,   343,   380,   343,   343,   379,   129,   235,    10,
      11,    12,    13,    14,    15,    16,  1911,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   379,    34,   377,   378,   379,   380,   381,  1934,
     383,   381,   379,   379,  1939,   157,   190,     3,     4,     5,
       6,     7,     8,  1948,    10,   157,    12,   157,   156,   156,
      16,    17,    18,     3,    20,   216,  1961,  1962,    24,    25,
      26,    27,    28,   216,    34,     3,   239,   239,     5,     5,
       5,     4,    38,     5,     5,   186,   382,    43,    44,   379,
     379,    47,     3,   206,   262,   190,    52,    53,    54,    55,
      56,     3,   133,    59,     3,    61,    62,    63,     3,   190,
      66,    67,    87,    69,    70,    71,     3,     3,    56,    75,
     172,   192,    20,    84,   379,   382,   380,   154,     4,   343,
     343,   343,   343,    89,   343,   379,   379,     5,    94,   343,
     379,     5,   343,    99,   100,   101,   343,   343,   134,   235,
     106,   107,     3,   109,   110,   111,   112,   379,   379,   115,
     133,   117,   118,   119,   120,     3,   122,     3,   124,   125,
     380,   127,   157,   129,   130,   157,   132,   133,   134,   135,
       3,  2076,     3,    71,   379,   141,   379,   143,   380,   145,
     146,   380,   148,   149,   150,   151,   152,   153,  2093,   155,
     156,   157,   158,   159,   380,   380,   379,   379,   379,   262,
     379,     3,   379,    53,   170,   133,   172,   239,   174,   262,
     190,     3,     3,     3,   379,   157,   379,   183,   157,   185,
     186,   187,   188,   189,   190,   191,     3,   379,   194,   195,
       4,   379,     4,     6,   200,     4,   202,   203,   204,   379,
     206,   205,   208,   157,   210,   211,   212,   213,     3,     3,
      56,   141,   156,   381,   380,     3,    20,     3,     3,   186,
     379,    45,     3,   157,     4,   380,   380,   233,   234,   235,
    2175,   380,   157,   379,     5,   379,   379,   243,   379,   245,
     246,   247,   206,   234,     4,     4,   252,   379,   254,   255,
     256,   380,   380,   381,   260,     3,   379,   379,   264,   265,
     379,   267,   268,   269,   270,   379,     3,   380,   274,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   379,    34,   380,   379,     3,   380,   381,   379,
     379,   379,     3,   379,   379,   379,   379,     3,   379,   315,
     316,   317,   318,   319,   379,   379,   379,     3,   111,   262,
     260,   379,     3,   262,   379,   133,   379,   379,     3,   379,
     381,   252,   381,    20,   190,     4,   344,   380,   343,   380,
     343,     3,     4,     5,     6,     7,     8,   380,    10,   380,
      12,   380,     3,   379,    16,    17,    18,     3,    20,     3,
       3,    44,    24,    25,    26,    27,    28,     5,     5,    53,
     379,   377,   378,   379,   380,   381,    38,   383,   379,   379,
       4,    43,    44,   380,   380,    47,    53,   380,   380,   210,
      52,    53,    54,    55,    56,   381,   379,    59,   379,    61,
      62,    63,   270,   262,    66,    67,   157,    69,    70,    71,
     379,   381,   265,    75,   379,   157,   379,   379,     3,   191,
     379,   381,    81,   380,    56,   380,   379,    89,     3,   380,
     380,    20,    94,   379,    18,     3,   157,    99,   100,   101,
       3,    53,     3,    71,   106,   107,   379,   109,   110,   111,
     112,   380,   379,   115,     3,   117,   118,   119,   120,   379,
     122,   380,   124,   125,   380,   127,   129,   129,   130,   380,
     132,   133,   134,   135,   379,   379,   379,     3,    56,   141,
      56,   143,     3,   145,   146,     3,   148,   149,   150,   151,
     152,   153,   379,   155,   156,   157,   158,   159,     3,    56,
     380,   380,   380,   343,   343,   343,   343,   207,   170,     3,
     172,   380,   174,   380,   133,   380,   263,     3,   200,     3,
       5,   183,     5,   185,   186,   187,   188,   189,   190,   191,
      53,   380,   194,   195,    70,   149,   124,   159,   200,   269,
     202,   203,   204,   379,   206,   379,   208,   200,   210,   211,
     212,   213,     5,     3,    20,   197,   381,     3,   380,    94,
     380,   380,   380,     3,   380,   380,   152,     3,     5,   379,
     381,   233,   234,   235,   380,   380,   379,   379,   379,     3,
     380,   243,   380,   245,   246,   247,     3,     3,   380,   380,
     252,     3,   254,   255,   256,   379,   379,   379,   260,     3,
     225,   379,   264,   265,   381,   267,   268,   269,   270,   225,
     380,     3,   274,    10,    11,    12,    13,    14,    15,    16,
     200,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,    34,     3,    20,
     381,     3,     3,   173,   380,   380,   173,   381,     3,   239,
       3,   380,     3,   315,   316,   317,   318,   319,    10,    11,
      12,    13,    14,    15,    16,   380,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   380,    34,   234,   379,     3,     4,     5,     6,     7,
       8,   379,    10,     3,    12,   223,     5,     3,    16,    17,
      18,   379,    20,   380,   380,   222,    24,    25,    26,    27,
      28,     5,   380,     3,   380,   377,   378,   379,   380,   381,
      38,   383,   380,   379,   144,    43,    44,    90,   265,    47,
     244,   190,   167,   190,    52,    53,    54,    55,    56,   184,
     184,    59,     5,    61,    62,    63,     5,  1186,    66,    67,
     947,    69,    70,    71,   102,  1043,   389,    75,  1796,  1488,
    1727,   515,   525,  1280,   128,  2197,   638,    90,   645,   378,
     651,    89,  1895,  2239,  1863,   928,    94,  1363,  1375,   871,
     164,    99,   100,   101,  1530,  1386,   887,   354,   106,   107,
      -1,   109,   110,   111,   112,    -1,    -1,   115,   567,   117,
     118,   119,   120,    -1,   122,    -1,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,
      -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,    -1,
     208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   243,    -1,   245,   246,   247,
      -1,    -1,    -1,    -1,   252,    -1,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,   264,   265,    -1,   267,
     268,   269,   270,    -1,    -1,    -1,   274,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,   316,   317,
     318,   319,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   380,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   377,
     378,   379,   380,   381,    38,   383,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
     194,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,
     204,    -1,   206,    -1,   208,    -1,   210,   211,   212,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
      -1,   245,   246,   247,    -1,    -1,    -1,    -1,   252,    -1,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
     264,   265,    -1,   267,   268,   269,   270,    -1,    -1,    -1,
     274,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,   316,   317,   318,   319,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   380,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,   377,   378,   379,   380,   381,    38,   383,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
     100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,
     130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,
     200,    -1,   202,   203,   204,    -1,   206,    -1,   208,    -1,
     210,   211,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   234,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,   245,   246,   247,    -1,    -1,
      -1,    -1,   252,    -1,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,   265,    -1,   267,   268,   269,
     270,    -1,    -1,    -1,   274,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,   316,   317,   318,   319,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,   380,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,   377,   378,   379,
     380,   381,    38,   383,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,    -1,   109,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,    -1,   124,   125,
      -1,   127,    -1,   129,   130,    -1,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,
     206,    -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   234,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,   245,
     246,   247,    -1,    -1,    -1,    -1,   252,    -1,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,   265,
      -1,   267,   268,   269,   270,    -1,    -1,    -1,   274,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
     316,   317,   318,   319,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     380,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   377,   378,   379,   380,   381,    38,   383,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
     172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,    -1,
     202,   203,   204,    -1,   206,    -1,   208,    -1,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,   245,   246,   247,    -1,    -1,    -1,    -1,
     252,    -1,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,   264,   265,    -1,   267,   268,   269,   270,    -1,
      -1,    -1,   274,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,   316,   317,   318,   319,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   380,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,   377,   378,   379,   380,   381,
      38,   383,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
      -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,    -1,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,
      -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,    -1,
     208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   243,    -1,   245,   246,   247,
      -1,    -1,    -1,    -1,   252,    -1,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,   264,   265,    -1,   267,
     268,   269,   270,    -1,    -1,    -1,   274,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,   316,   317,
     318,   319,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   380,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   377,
     378,   379,   380,   381,    38,   383,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
     194,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,
     204,    -1,   206,    -1,   208,    -1,   210,   211,   212,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
      -1,   245,   246,   247,    -1,    -1,    -1,    -1,   252,    -1,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
     264,   265,    -1,   267,   268,   269,   270,    -1,    -1,    -1,
     274,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,   316,   317,   318,   319,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   380,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,   377,   378,   379,   380,   381,    38,   383,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
     100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,
     130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,
     200,    -1,   202,   203,   204,    -1,   206,    -1,   208,    -1,
     210,   211,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   234,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,   245,   246,   247,    -1,    -1,
      -1,    -1,   252,    -1,   254,   255,   256,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   264,   265,    -1,   267,   268,   269,
     270,    -1,    -1,    -1,   274,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,   316,   317,   318,   319,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,   380,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,   377,   378,   379,
     380,   381,    38,   383,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,    -1,   109,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,    -1,   124,   125,
      -1,   127,    -1,   129,   130,    -1,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,
     206,    -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   234,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,   245,
     246,   247,    -1,    -1,    -1,    -1,   252,    -1,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,   265,
      -1,   267,   268,   269,   270,    -1,    -1,    -1,   274,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
     316,   317,   318,   319,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     380,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   377,   378,   379,   380,   381,    38,   383,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
     172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,    -1,
     202,   203,   204,    -1,   206,    -1,   208,    -1,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,   245,   246,   247,    -1,    -1,    -1,    -1,
     252,    -1,   254,   255,   256,    -1,    -1,    -1,   260,    -1,
      -1,    -1,   264,   265,    -1,   267,   268,   269,   270,    -1,
      -1,    -1,   274,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,   316,   317,   318,   319,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   380,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,   377,   378,   379,   380,   381,
      38,   383,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
      -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,    -1,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,
      -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,    -1,
     208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   243,    -1,   245,   246,   247,
      -1,    -1,    -1,    -1,   252,    -1,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,   264,   265,    -1,   267,
     268,   269,   270,    -1,    -1,    -1,   274,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,   316,   317,
     318,   319,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   380,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   377,
     378,   379,   380,   381,    38,   383,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
     194,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,
     204,    -1,   206,    -1,   208,    -1,   210,   211,   212,   213,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   233,
     234,   235,    25,    26,    -1,    -1,    -1,    -1,    -1,   243,
      -1,   245,   246,   247,    -1,    38,    -1,    -1,   252,    -1,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,
     264,   265,    -1,   267,   268,   269,   270,    -1,    -1,    -1,
     274,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
     103,   315,   316,   317,   318,   319,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,   381,    -1,    -1,   139,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,   377,   378,   379,   380,   381,    -1,   383,
      -1,    -1,    -1,   176,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   186,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,   232,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   257,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,    -1,
     313,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    -1,   365,   366,   367,   368,    -1,    -1,    -1,    -1,
     373,   374,   375,   376,    -1,    -1,   379,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    10,
      11,    12,    13,    14,    15,    16,    82,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,   381,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,   381,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   381,    -1,    -1,
     176,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     186,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,    -1,   313,    -1,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,    -1,    -1,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    -1,   365,
     366,   367,   368,    -1,    -1,    -1,    -1,   373,   374,   375,
     376,    -1,    -1,   379,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,   381,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    40,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    65,    34,    -1,    -1,
     381,    70,    -1,    -1,    73,    74,    10,    11,    12,    13,
      14,    15,    16,    82,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   381,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
     381,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   381,    -1,    -1,   176,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   186,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,   226,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,    -1,   313,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,    -1,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    -1,   365,   366,   367,   368,
      -1,    -1,    -1,    -1,   373,   374,   375,   376,    -1,    -1,
     379,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   381,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,   381,    70,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,   176,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   186,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,   381,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
      -1,   313,    -1,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    -1,    -1,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    -1,   365,   366,   367,   368,    -1,    -1,    -1,
      -1,   373,   374,   375,   376,    -1,    -1,   379,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,   381,    -1,
      25,    26,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,   381,    82,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,   381,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   381,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,
      -1,   176,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   186,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,   219,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    -1,   313,    -1,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    -1,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,    -1,
     365,   366,   367,   368,    -1,    -1,    -1,    -1,   373,   374,
     375,   376,    -1,    -1,   379,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,   381,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,   381,
      -1,    -1,    -1,    -1,    82,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   381,
      34,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   129,    34,    -1,   381,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,   176,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   186,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
      -1,   219,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,    -1,   313,    -1,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   314,    -1,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,    -1,   365,   366,   367,
     368,    -1,    -1,    -1,    -1,   373,   374,   375,   376,    -1,
      -1,   379,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    74,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    82,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   106,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   380,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,   380,    -1,    -1,    -1,   176,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   186,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,   219,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,    -1,   313,    -1,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,    -1,    -1,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,    -1,   365,   366,   367,   368,    -1,    -1,
      -1,    -1,   373,   374,   375,   376,    -1,    -1,   379,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   380,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      74,    -1,   380,    -1,    -1,    -1,    -1,    -1,    82,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   106,    34,    -1,    -1,    -1,    -1,   380,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   380,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      -1,    -1,   176,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   186,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    -1,    -1,    -1,    -1,   219,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,    -1,   313,
      -1,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
      -1,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
      -1,   365,   366,   367,   368,    -1,    -1,    -1,    -1,   373,
     374,   375,   376,    -1,    -1,   379,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,   380,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,   380,
      12,    13,    14,    15,    16,    82,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     380,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   380,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,   176,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   186,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,   219,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,    -1,   313,    -1,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,    -1,    -1,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,    -1,   365,   366,
     367,   368,    -1,    -1,    -1,    -1,   373,   374,   375,   376,
      -1,    -1,   379,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   380,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    10,    11,    12,    13,    14,
      15,    16,    82,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   380,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   380,    -1,    -1,    -1,   176,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   186,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,   219,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,    -1,   313,    -1,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,    -1,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,    -1,   365,   366,   367,   368,    -1,
      -1,    -1,    -1,   373,   374,   375,   376,    -1,    -1,   379,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,   380,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,   380,    -1,    70,    -1,    -1,
      73,    74,    10,    11,    12,    13,    14,    15,    16,    82,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     380,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   380,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    -1,    -1,   176,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   186,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,   219,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,    -1,
     313,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    -1,   365,   366,   367,   368,    -1,    -1,    -1,    -1,
     373,   374,   375,   376,    -1,    -1,   379,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   380,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   380,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   380,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   380,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   380,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   380,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     380,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   380,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   380,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   380,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   380,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   380,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   380,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   380,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   380,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   380,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   380,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   380,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   380,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   380,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   380,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,   102,    -1,   104,    -1,
     380,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   380,    34,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     380,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    18,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    37,    -1,    -1,
      39,    41,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    64,    -1,    -1,    66,    -1,    -1,
      -1,    71,    72,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,   100,   101,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   271,   272,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,   268,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    -1,    54,    55,    -1,    57,   157,    59,    60,
     380,    -1,   161,   162,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,   247,
      -1,    -1,   380,    -1,   194,    -1,    -1,    -1,    -1,    -1,
     199,    -1,   201,    -1,    -1,    -1,   107,   108,   109,   110,
     209,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   234,   235,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
     249,    -1,   153,   252,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,   178,    -1,    -1,
     181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   198,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,   234,    -1,    -1,   237,   238,    -1,    -1,
      -1,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,   250,
     251,    -1,    -1,    -1,    -1,   256,    -1,   258,    -1,    -1,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,
     271,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   129,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   117,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   105,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    44,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    10,    11,
      12,    13,    14,    15,    16,    43,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    10,    11,    12,    13,    14,    15,
      16,    43,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    61,    66,    79,   100,   101,   150,   161,
     162,   163,   199,   201,   209,   234,   235,   249,   252,   261,
     385,   424,   425,   464,   468,   470,   473,   474,   477,   478,
     479,   480,   481,   482,   489,   490,   492,   508,   509,   518,
     521,   523,   524,   525,   548,   551,   558,   559,   562,   565,
     566,   569,   212,   246,   364,   246,     3,    10,    88,    95,
     131,   132,   148,   195,   212,   214,   221,   240,   241,   255,
     364,   530,     3,   465,    88,   132,   148,   195,   212,   214,
     221,   246,   364,   500,     3,     3,     3,    26,   246,   246,
     500,     8,   221,   549,   550,   443,   246,   500,   519,     3,
      88,     0,   377,   476,     3,     3,     3,     3,   379,   209,
     149,   522,     3,   148,     3,     3,    78,   149,     3,     3,
       3,   522,   240,   148,   522,   246,   510,     3,   129,   147,
     169,   196,   466,     3,   149,     3,   149,     3,     3,   149,
       3,   149,     3,     3,   149,     3,   149,     3,   149,    96,
     139,   147,   152,   169,   501,   164,   381,     3,     3,   501,
       9,    20,     3,   106,   381,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    38,    65,    70,    73,    74,
      82,    99,   103,   139,   176,   186,   219,   220,   227,   228,
     232,   257,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     313,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   365,   366,
     367,   368,   373,   374,   375,   376,   379,   386,   444,   445,
       3,   147,   169,     3,   160,   166,   374,   379,   447,   448,
     449,   450,   453,   463,     3,   385,    47,    48,    67,   203,
      93,   113,    36,    68,    93,   101,   113,   180,   201,   263,
      48,   201,   567,   378,     3,     4,     5,     6,     7,     8,
     186,   380,   560,   561,   132,   195,   274,     3,    44,     3,
     379,   190,     3,   149,   274,   379,    37,    52,   563,   190,
       3,     3,    78,   149,     3,   522,   379,   511,   378,   467,
       3,   466,   129,   381,   274,   274,   274,   274,   190,   274,
      67,   203,   469,   274,   274,     3,     4,   239,     3,   386,
     386,   550,   378,   379,     9,   386,   386,   386,   268,   386,
     423,   378,   379,    34,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   386,     3,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      34,    44,   446,   129,   152,   381,   381,   378,   446,   379,
       3,   379,   425,   447,   234,   381,    69,   146,   170,   183,
     208,   232,   454,   456,    44,   452,   452,    46,    46,    64,
      77,     3,    77,    64,   210,     3,    64,    77,    64,   210,
       3,    77,     3,    64,    77,    64,   270,   239,    18,   177,
     369,   370,   371,   372,   568,     3,   380,   381,     3,     3,
      54,    55,    57,    59,    60,    75,   107,   108,   109,   110,
     116,   125,   145,   153,   168,   175,   178,   181,   182,   198,
     233,   234,   237,   238,   243,   245,   250,   251,   256,   258,
     264,   266,   271,   544,   190,     3,    16,   143,   188,   552,
     553,   554,     3,   190,   274,     3,   552,   100,   150,   252,
     564,     3,   190,     3,   149,   274,   567,     3,     3,   512,
     129,   239,   513,    26,   267,   426,   260,   447,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   234,   379,   502,
       3,   234,   502,     3,   386,   391,   395,   386,   386,   423,
     117,   118,   268,     3,     3,   382,   393,   400,   386,    58,
     171,   248,   386,   421,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   380,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   380,
     386,   386,   386,   380,   386,   386,   386,   386,   386,   386,
      26,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   380,   380,   380,   380,   380,   386,   386,   380,
     380,   380,   386,   386,     5,   380,   380,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   380,
     386,   386,   386,   380,   380,   386,   386,   386,   386,   386,
       6,    18,   186,   312,   379,    13,    14,    16,    19,   386,
      38,    40,   226,   379,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,     3,   447,
       3,   445,     3,   475,     3,   126,   147,   261,   460,   451,
     446,   386,   380,   380,     3,   520,   448,   170,   208,   457,
     449,   156,   189,   455,     3,     3,     3,     3,     3,     3,
       3,   215,     3,     3,     3,   215,   544,     3,   239,     3,
       3,     3,     5,     3,   372,     5,     5,   270,     5,    56,
       5,   561,   379,   379,   379,   540,   540,   540,   540,   540,
     540,   379,   540,   540,   540,    57,   541,   541,   540,   540,
     540,   379,   541,   540,   541,   379,   379,    18,    34,    71,
     106,     3,   544,     3,     3,     3,   380,   381,   260,   379,
       3,     3,   190,   380,   190,    44,   483,     3,   190,   274,
       3,   147,   209,   344,   378,   379,   546,   547,   380,   381,
       4,   230,   231,   514,   386,   191,   436,   447,   426,   467,
     469,     3,   507,     3,   503,   265,   425,   507,   265,   425,
     381,   380,   247,   117,   118,   386,   386,   380,   386,   392,
     425,   129,   381,   380,   129,   386,   381,   381,   381,   380,
     380,   380,   380,   380,   380,   381,   381,   381,   381,   380,
     381,   381,   381,   380,   380,   380,   380,   381,   381,   380,
     381,   380,   380,   380,    44,   381,   381,   381,   381,   314,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     381,   381,   381,   380,   381,   343,   343,   343,   380,   381,
     380,   381,   380,   343,   343,   381,   380,   380,   380,   380,
     380,   380,   380,   380,   381,   381,   381,   381,   381,   381,
     381,   381,   380,   381,   380,   380,   380,   381,   380,   381,
     380,   381,     6,   186,   396,   398,   386,   386,   379,   386,
      43,   379,   379,   379,   387,   382,   426,   129,   381,   446,
     157,   157,   157,   425,   460,   380,    20,   378,   381,   426,
     455,   455,   156,   190,   449,   156,    71,   127,   194,   255,
     544,   544,     3,   216,   216,   539,   544,     3,   239,   239,
       5,     5,   552,   552,     5,   542,   543,   542,   542,     4,
     545,   542,   542,   542,   543,   543,   542,   542,   542,   545,
     543,   542,   543,     5,     5,   186,   382,   379,   386,   379,
     544,   544,   544,   206,   554,   262,     3,   320,   321,   322,
     323,   471,   472,   260,   379,   190,     3,    44,    53,     3,
     217,   218,   133,   484,   260,   379,     3,     3,   190,    87,
       3,    64,    71,   127,   131,   148,   157,   194,   255,   531,
     532,   538,   452,     3,    80,    92,   128,   136,   186,   236,
     270,   379,   515,   516,   517,    56,   172,   439,   426,    20,
     192,   381,   493,   380,   381,   379,   504,   493,   504,   493,
     391,   386,   386,   117,   247,    84,   381,   382,   380,   386,
     386,   386,   129,   154,   422,   422,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   544,   544,   386,
     386,   386,     4,   343,   343,   343,   343,   343,   343,   386,
     386,   386,   386,   379,   379,   379,   343,     5,   343,     5,
     343,   379,   379,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   391,   425,   397,   399,
      43,   386,   390,   386,   388,   394,   389,   394,   425,   134,
     427,   447,     3,   460,   133,   461,   461,   461,   380,   452,
     386,     3,     3,   436,   449,   386,   190,   260,   458,   459,
     449,   379,   157,   157,   379,   539,   539,   544,    18,    37,
      41,    44,    46,    49,    64,    71,    72,   106,   123,   157,
     186,   194,   255,   491,   539,     3,     3,   380,   380,   380,
     381,   253,   273,    75,    76,   380,   381,   380,   380,   380,
      71,   386,   471,    55,    59,   107,   110,   125,   145,   153,
     243,   245,   264,   555,   379,   379,   379,   379,   379,   380,
     381,   262,   471,     3,   260,   379,    53,   556,   133,    38,
     100,   150,   235,   252,   239,   485,   262,   471,   260,   379,
     190,     3,     3,   379,   546,     3,   379,   157,   148,   157,
     379,   379,   157,   379,   380,   381,     3,   425,     4,    80,
     243,     6,     4,     4,   379,   516,   381,     3,     5,   437,
     438,   386,   205,   570,   106,   386,   157,     3,     3,   106,
     386,   506,   381,   493,   493,   117,   386,   379,   392,   133,
     380,   380,   381,   380,   386,   386,   380,   380,   380,   380,
     380,   381,   381,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   381,   380,   379,   379,   379,   379,   379,
     379,   380,   381,   381,   380,   380,   401,   402,   403,   379,
     380,   381,   379,   380,   381,   379,   419,   420,   380,   381,
     381,   381,   380,   380,   381,   381,   380,   381,   380,   381,
     380,   381,   380,   380,   380,   380,   391,   425,   386,   425,
     425,   380,   425,   380,   380,    56,   141,   431,   426,   156,
     379,   379,   379,     3,    20,    20,   378,   439,   386,   379,
     459,   386,   379,   379,     3,   537,   491,   491,   539,   186,
       3,   379,   379,   379,    45,     3,   379,     4,     4,     5,
       6,     7,    65,   326,   327,   328,   379,   157,   157,   491,
     206,    44,    53,     5,   234,     4,   543,     4,   543,   543,
     379,   380,   380,    44,    53,   471,     3,     3,     3,     3,
       3,   379,   380,   379,   262,   471,   556,     3,     4,     5,
       6,     7,     8,    10,    12,    16,    17,    18,    20,    24,
      25,    26,    27,    28,    38,    43,    44,    47,    52,    53,
      54,    55,    56,    59,    61,    62,    63,    66,    67,    69,
      70,    71,    75,    89,    94,    99,   100,   101,   106,   107,
     109,   110,   111,   112,   115,   117,   118,   119,   120,   122,
     124,   125,   127,   129,   130,   132,   133,   134,   135,   141,
     143,   145,   146,   148,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   159,   170,   172,   174,   183,   185,   186,
     187,   188,   189,   190,   191,   194,   195,   200,   202,   203,
     204,   206,   208,   210,   211,   212,   213,   233,   234,   235,
     243,   245,   246,   247,   252,   254,   255,   256,   260,   264,
     265,   267,   268,   269,   270,   274,   315,   316,   317,   318,
     319,   377,   378,   379,   380,   381,   383,   557,   111,     3,
     486,   260,   487,   379,   380,   262,   471,     3,   260,   379,
     133,   531,    71,   127,   194,   255,   386,   379,   379,   379,
       3,   442,   442,   379,   537,   527,   546,   532,   544,   516,
     380,   517,    42,   105,   378,   429,   429,   381,   174,   381,
       3,    26,   571,   252,    20,   380,   381,   505,   190,   495,
       4,   386,   386,   380,    97,    98,   102,   104,   137,   138,
     140,   271,   272,   386,   386,   386,   405,   406,   404,   407,
     408,   409,   386,   386,   344,   432,   432,   432,   410,   343,
       4,     5,   414,   343,     4,     5,   418,   432,   432,   386,
     386,   386,   386,   386,   386,   386,   386,   380,   380,   380,
     380,   380,   386,   428,   386,   436,   427,     3,   462,   462,
     462,   379,   386,   386,     3,   570,   442,   380,     3,   534,
       3,   533,   380,   381,   491,     5,   386,     5,    44,    71,
     194,   255,   386,   379,   379,   379,   386,   555,    53,   556,
     380,     4,   386,    53,   556,   380,   380,   380,   380,   381,
     471,   471,   379,   380,   117,   556,   556,   556,   556,   556,
     556,   210,   381,   379,   270,   488,   471,   379,   380,   379,
     262,   471,   265,   380,   379,   157,   157,   379,   380,   534,
     442,   442,   380,   381,   380,   533,   380,    41,   165,   190,
     222,   344,   526,   539,   380,     3,   438,   386,   386,   381,
     494,   106,   386,   106,   386,   379,    81,   570,   380,   380,
     380,   380,   380,   380,   432,   432,   432,   432,   432,   432,
     380,   381,   380,    56,   191,   434,   434,   434,   432,   379,
     380,   380,   432,   379,   380,   380,   432,   434,   434,   380,
     380,   380,   380,   380,   381,   380,   380,   429,   270,   381,
     430,   439,   431,   380,   381,   380,   380,     3,    20,   380,
      18,   380,   381,   380,   381,     3,   380,   381,   380,   380,
     381,   379,   379,   157,   380,   380,   380,   380,   380,    44,
      53,   556,   117,   380,   556,   117,     3,   380,   380,   471,
     117,   117,   117,   117,   117,   117,    53,     3,   386,    71,
     380,   471,   471,   379,   380,   129,   527,   546,   386,   379,
     379,   537,   380,   380,   380,     3,   380,     5,    20,   379,
       3,    56,    56,   429,     3,     3,   499,   506,   379,   496,
     434,   434,   434,   434,   434,   434,   386,     3,   433,    56,
     380,   380,   380,   434,   411,   343,   343,   434,   415,   343,
     343,   434,   380,   380,   386,   207,   386,   133,   440,   436,
       3,   380,   386,   263,   200,     3,     3,     5,    50,    51,
       5,   386,   386,    53,   556,   117,   117,   380,   380,    70,
     124,   149,   159,   269,   556,   380,   379,   380,   380,   471,
     379,   380,   534,   533,   380,   200,     5,     3,   100,   242,
     197,   262,   197,    20,   381,   380,     3,    94,   497,   380,
     380,   380,   380,   380,   380,   380,   381,     3,   435,   380,
     432,   379,   379,   380,   432,   379,   379,   380,   380,   429,
     224,   252,   152,   441,   439,     3,   380,   380,   380,   380,
     556,   117,   117,   386,   380,     5,   380,   380,     3,   380,
       3,     3,   379,   379,   379,   386,     3,   380,   381,    83,
     252,     3,   429,   381,   434,   412,   413,   434,   416,   417,
     225,   225,   442,   379,    50,    51,   117,   380,   380,   200,
     378,   379,     3,     3,     3,    20,     3,   498,     3,   380,
     432,   432,   380,   432,   432,   173,   173,     3,   535,   239,
       3,     3,   535,   380,   380,   380,   386,   234,   429,   434,
     434,   434,   434,   380,   381,   379,   378,   379,   379,   380,
     379,   223,   499,   380,   380,   380,   380,   536,     3,     5,
       3,   535,   535,   536,   222,   528,   529,     5,    18,    90,
     176,   190,   380,   379,   380,   380,    18,     3,   380,   381,
      90,   263,   144,   130,   193,   229,   100,   252,   535,   536,
     536,   265,   529,    91,   142,    67,   185,   203,   234,    67,
     185,   203,   234,   380,   167,   106,   186,   106,   186,   536,
     244,     4,   177,   190,   190,   184,   184,     5,     5
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
#line 472 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 478 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 479 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 481 "parser/evoparser.y"
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
#line 494 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 496 "parser/evoparser.y"
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
#line 524 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 532 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 540 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 546 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 553 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 554 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 555 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 556 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 557 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 558 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 559 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 560 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 561 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 562 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 563 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 564 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 565 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 566 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 567 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 568 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 569 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 570 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 571 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 573 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 578 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 579 "parser/evoparser.y"
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
#line 587 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 588 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 589 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 590 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 591 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 592 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 597 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 599 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 602 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 603 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 604 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 605 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 606 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 609 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 610 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 614 "parser/evoparser.y"
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
#line 623 "parser/evoparser.y"
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
#line 641 "parser/evoparser.y"
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
#line 650 "parser/evoparser.y"
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
#line 669 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 670 "parser/evoparser.y"
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
#line 730 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 739 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 745 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 750 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 752 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 754 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 759 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 764 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 770 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 774 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 774 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 775 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 775 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 776 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 777 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 784 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 785 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 792 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 793 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 803 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 807 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 808 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 809 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 810 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 811 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 812 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 813 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 814 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 818 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 819 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 820 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 821 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 822 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 823 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 825 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 826 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 827 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 828 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 829 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 830 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 831 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 832 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 833 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 834 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 835 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 836 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 838 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 839 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 840 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 841 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 842 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 843 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 844 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 845 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 846 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 847 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 848 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 849 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 850 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 851 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 852 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 853 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 855 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 856 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 857 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 858 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 859 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 860 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 863 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 864 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 865 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 866 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 867 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 868 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 869 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 870 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 871 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 872 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 873 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 874 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 875 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 876 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 877 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 878 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 879 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 880 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 881 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 882 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 883 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 884 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 885 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 886 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 887 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 888 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 889 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 890 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 891 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 892 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 893 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 894 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 895 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 896 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 898 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 899 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 900 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 901 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 902 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 903 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 904 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 905 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 907 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 908 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 909 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 910 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 911 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 913 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 914 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 915 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 916 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 917 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 918 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 919 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 920 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 921 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 922 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 923 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 924 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 925 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 926 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 927 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 928 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 930 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 931 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 932 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 933 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 934 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 936 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 937 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 939 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 940 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 941 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 943 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 944 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 945 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 946 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 953 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 960 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 967 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 971 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 975 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 979 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 983 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 987 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 993 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 994 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 995 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 999 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 1005 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 1011 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 1012 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 1013 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 1014 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 1015 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 1016 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 1017 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 1018 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 1019 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 1023 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 1025 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 1027 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 1029 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 1033 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1041 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 232:
#line 1051 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1052 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1055 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1056 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1060 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1068 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1076 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1084 "parser/evoparser.y"
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

  case 240:
#line 1098 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 241:
#line 1107 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 242:
#line 1112 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 243:
#line 1125 "parser/evoparser.y"
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

  case 245:
#line 1138 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 247:
#line 1140 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 248:
#line 1143 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 249:
#line 1150 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 250:
#line 1158 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1159 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 252:
#line 1160 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1163 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 254:
#line 1164 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 1168 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1177 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 260:
#line 1179 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 263:
#line 1187 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 264:
#line 1189 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 269:
#line 1201 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 270:
#line 1207 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 271:
#line 1214 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 272:
#line 1222 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 273:
#line 1223 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1224 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1225 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 276:
#line 1228 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 277:
#line 1229 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 278:
#line 1230 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 279:
#line 1231 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 280:
#line 1232 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 282:
#line 1236 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 283:
#line 1239 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 284:
#line 1240 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1243 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1244 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 287:
#line 1245 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 288:
#line 1246 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 289:
#line 1247 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 290:
#line 1248 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 291:
#line 1249 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 292:
#line 1250 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 293:
#line 1251 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 294:
#line 1254 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 295:
#line 1255 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1257 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 297:
#line 1265 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 298:
#line 1270 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 299:
#line 1271 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 300:
#line 1272 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 301:
#line 1275 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1276 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 305:
#line 1285 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 306:
#line 1293 "parser/evoparser.y"
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

  case 307:
#line 1302 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 308:
#line 1303 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 309:
#line 1305 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 310:
#line 1314 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 311:
#line 1319 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 312:
#line 1325 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 313:
#line 1332 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 314:
#line 1336 "parser/evoparser.y"
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

  case 315:
#line 1356 "parser/evoparser.y"
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

  case 318:
#line 1382 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 319:
#line 1384 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 320:
#line 1386 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 321:
#line 1388 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 322:
#line 1390 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 323:
#line 1393 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1394 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1395 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 326:
#line 1398 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 327:
#line 1399 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 328:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 329:
#line 1403 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 330:
#line 1406 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 331:
#line 1407 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 332:
#line 1408 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 335:
#line 1415 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 336:
#line 1416 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 337:
#line 1421 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 338:
#line 1423 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1425 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 341:
#line 1429 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1430 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 343:
#line 1433 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1434 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 345:
#line 1437 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 346:
#line 1442 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 347:
#line 1452 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 348:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 349:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 350:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 351:
#line 1462 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1467 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 353:
#line 1471 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1473 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 357:
#line 1479 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 358:
#line 1484 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 359:
#line 1491 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1498 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1510 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 363:
#line 1511 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 364:
#line 1516 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 365:
#line 1523 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 366:
#line 1530 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 367:
#line 1538 "parser/evoparser.y"
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

  case 368:
#line 1548 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 369:
#line 1556 "parser/evoparser.y"
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

  case 370:
#line 1566 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 371:
#line 1574 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 372:
#line 1583 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 373:
#line 1592 "parser/evoparser.y"
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

  case 374:
#line 1602 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 375:
#line 1610 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 376:
#line 1619 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 377:
#line 1628 "parser/evoparser.y"
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

  case 378:
#line 1638 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 379:
#line 1647 "parser/evoparser.y"
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

  case 380:
#line 1659 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 381:
#line 1664 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 382:
#line 1669 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 383:
#line 1675 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 384:
#line 1682 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 385:
#line 1689 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 386:
#line 1696 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 387:
#line 1706 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 388:
#line 1713 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 389:
#line 1722 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 390:
#line 1729 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 391:
#line 1735 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 392:
#line 1743 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 393:
#line 1749 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 395:
#line 1757 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 396:
#line 1758 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 397:
#line 1759 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 398:
#line 1760 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 399:
#line 1776 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 400:
#line 1777 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 401:
#line 1778 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 402:
#line 1782 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 403:
#line 1788 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 404:
#line 1799 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 405:
#line 1805 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 406:
#line 1812 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 407:
#line 1818 "parser/evoparser.y"
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

  case 408:
#line 1834 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 409:
#line 1841 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1850 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 411:
#line 1857 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 412:
#line 1863 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 413:
#line 1873 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 414:
#line 1877 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 415:
#line 1878 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 416:
#line 1884 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 417:
#line 1893 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 418:
#line 1894 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 419:
#line 1895 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 420:
#line 1899 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 421:
#line 1900 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 422:
#line 1901 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 423:
#line 1902 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 424:
#line 1903 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 425:
#line 1904 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 428:
#line 1913 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 429:
#line 1914 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 431:
#line 1919 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 433:
#line 1924 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 434:
#line 1929 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 435:
#line 1938 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 436:
#line 1944 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 437:
#line 1950 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 438:
#line 1957 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 439:
#line 1963 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 440:
#line 1970 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 441:
#line 1976 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 442:
#line 1982 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 443:
#line 1988 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 444:
#line 1994 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 445:
#line 2000 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 446:
#line 2006 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 447:
#line 2012 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 448:
#line 2018 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 449:
#line 2024 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 450:
#line 2030 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 451:
#line 2036 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 452:
#line 2042 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 453:
#line 2048 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 454:
#line 2054 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 455:
#line 2060 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s ENABLE RLS", (yyvsp[(3) - (7)].strval));
        AlterTableToggleRLS((yyvsp[(3) - (7)].strval), 1);
        free((yyvsp[(3) - (7)].strval));
    ;}
    break;

  case 456:
#line 2066 "parser/evoparser.y"
    {
        emit("ALTER TABLE %s DISABLE RLS", (yyvsp[(3) - (7)].strval));
        AlterTableToggleRLS((yyvsp[(3) - (7)].strval), 0);
        free((yyvsp[(3) - (7)].strval));
    ;}
    break;

  case 457:
#line 2073 "parser/evoparser.y"
    { ;}
    break;

  case 458:
#line 2074 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 459:
#line 2075 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 460:
#line 2079 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 461:
#line 2087 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 462:
#line 2093 "parser/evoparser.y"
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

  case 464:
#line 2106 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 465:
#line 2106 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 468:
#line 2114 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 469:
#line 2115 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 470:
#line 2116 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 471:
#line 2120 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 472:
#line 2121 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 473:
#line 2122 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 474:
#line 2126 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 475:
#line 2134 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 476:
#line 2143 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 477:
#line 2144 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 478:
#line 2145 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 479:
#line 2146 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 480:
#line 2147 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 484:
#line 2154 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 485:
#line 2158 "parser/evoparser.y"
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

  case 486:
#line 2168 "parser/evoparser.y"
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

  case 487:
#line 2180 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 488:
#line 2181 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 489:
#line 2181 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 490:
#line 2184 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 491:
#line 2185 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 492:
#line 2186 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 493:
#line 2187 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 494:
#line 2191 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 495:
#line 2194 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 496:
#line 2195 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 497:
#line 2196 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 498:
#line 2197 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 499:
#line 2203 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 500:
#line 2209 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 501:
#line 2214 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 502:
#line 2219 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 503:
#line 2223 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 504:
#line 2227 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 505:
#line 2229 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 508:
#line 2235 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 509:
#line 2236 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 510:
#line 2240 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 511:
#line 2241 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 512:
#line 2245 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 513:
#line 2246 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 514:
#line 2247 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 521:
#line 2262 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 522:
#line 2263 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 523:
#line 2264 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 524:
#line 2265 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 525:
#line 2266 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 526:
#line 2267 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 527:
#line 2268 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 528:
#line 2269 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 529:
#line 2274 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 530:
#line 2283 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 531:
#line 2290 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 532:
#line 2291 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 533:
#line 2292 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 534:
#line 2297 "parser/evoparser.y"
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

  case 535:
#line 2308 "parser/evoparser.y"
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

  case 536:
#line 2320 "parser/evoparser.y"
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

  case 537:
#line 2331 "parser/evoparser.y"
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

  case 538:
#line 2346 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 539:
#line 2350 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 540:
#line 2354 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 541:
#line 2355 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 542:
#line 2360 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 543:
#line 2362 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 544:
#line 2364 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 545:
#line 2366 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 546:
#line 2369 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 547:
#line 2370 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 548:
#line 2376 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 549:
#line 2381 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 550:
#line 2383 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 551:
#line 2385 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 552:
#line 2387 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 553:
#line 2389 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 554:
#line 2393 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 555:
#line 2397 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 556:
#line 2398 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 557:
#line 2403 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 558:
#line 2413 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 560:
#line 2426 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 561:
#line 2434 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 562:
#line 2442 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 564:
#line 2450 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 565:
#line 2451 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 566:
#line 2452 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 567:
#line 2453 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 568:
#line 2455 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 569:
#line 2457 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 570:
#line 2459 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 573:
#line 2467 "parser/evoparser.y"
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

  case 574:
#line 2482 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 575:
#line 2490 "parser/evoparser.y"
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

  case 576:
#line 2504 "parser/evoparser.y"
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

  case 577:
#line 2518 "parser/evoparser.y"
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

  case 578:
#line 2532 "parser/evoparser.y"
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

  case 579:
#line 2544 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 580:
#line 2545 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 581:
#line 2546 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 582:
#line 2549 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 583:
#line 2550 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 584:
#line 2553 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 585:
#line 2554 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 586:
#line 2555 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 587:
#line 2556 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 588:
#line 2557 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 589:
#line 2558 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 590:
#line 2559 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 591:
#line 2560 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 592:
#line 2562 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 593:
#line 2564 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 594:
#line 2566 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 595:
#line 2568 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 596:
#line 2570 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 597:
#line 2572 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 598:
#line 2575 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 599:
#line 2576 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 600:
#line 2579 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 601:
#line 2580 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 602:
#line 2583 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 603:
#line 2584 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 605:
#line 2588 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 606:
#line 2589 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 607:
#line 2590 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 608:
#line 2591 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 609:
#line 2592 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 610:
#line 2593 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 611:
#line 2594 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 612:
#line 2595 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 613:
#line 2596 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 614:
#line 2597 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 615:
#line 2598 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 616:
#line 2599 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 617:
#line 2600 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 618:
#line 2601 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 619:
#line 2602 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 620:
#line 2603 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 621:
#line 2604 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 622:
#line 2607 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 623:
#line 2608 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 624:
#line 2611 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 625:
#line 2613 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 626:
#line 2621 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 627:
#line 2622 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 629:
#line 2624 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 630:
#line 2625 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 631:
#line 2626 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 632:
#line 2627 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 633:
#line 2628 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 634:
#line 2629 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 635:
#line 2630 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 636:
#line 2631 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 637:
#line 2632 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 638:
#line 2639 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 639:
#line 2640 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 640:
#line 2641 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 641:
#line 2642 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 642:
#line 2643 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 643:
#line 2644 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 644:
#line 2645 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 645:
#line 2646 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 646:
#line 2647 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 647:
#line 2648 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 648:
#line 2649 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 649:
#line 2650 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 650:
#line 2651 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 651:
#line 2652 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 652:
#line 2653 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 653:
#line 2654 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 654:
#line 2655 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 655:
#line 2656 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 656:
#line 2657 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 657:
#line 2658 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 658:
#line 2659 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 659:
#line 2662 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 660:
#line 2663 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 661:
#line 2664 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 662:
#line 2667 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 663:
#line 2668 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 664:
#line 2671 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 665:
#line 2672 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 666:
#line 2673 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 668:
#line 2677 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 669:
#line 2678 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 670:
#line 2682 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 671:
#line 2683 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 672:
#line 2684 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 673:
#line 2685 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 674:
#line 2686 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 675:
#line 2687 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 676:
#line 2688 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 677:
#line 2689 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 678:
#line 2690 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 679:
#line 2691 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 680:
#line 2692 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 681:
#line 2693 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 682:
#line 2694 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 683:
#line 2695 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 684:
#line 2696 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 685:
#line 2697 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 686:
#line 2698 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 687:
#line 2699 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 688:
#line 2700 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 689:
#line 2701 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 690:
#line 2702 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 691:
#line 2703 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 692:
#line 2704 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 693:
#line 2705 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 694:
#line 2706 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 695:
#line 2707 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 696:
#line 2708 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 697:
#line 2709 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 698:
#line 2710 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 699:
#line 2711 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 700:
#line 2712 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 701:
#line 2713 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 702:
#line 2714 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 703:
#line 2715 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 704:
#line 2718 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 705:
#line 2719 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 706:
#line 2723 "parser/evoparser.y"
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

  case 707:
#line 2735 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 708:
#line 2736 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 709:
#line 2737 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 710:
#line 2741 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 711:
#line 2744 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 712:
#line 2745 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 716:
#line 2749 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 717:
#line 2750 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 718:
#line 2758 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 719:
#line 2763 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 720:
#line 2769 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 721:
#line 2775 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 722:
#line 2782 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 723:
#line 2789 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 724:
#line 2795 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 725:
#line 2801 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 726:
#line 2808 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 731:
#line 2824 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 732:
#line 2825 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 733:
#line 2826 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 734:
#line 2827 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 735:
#line 2830 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 736:
#line 2831 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 737:
#line 2832 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 738:
#line 2833 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 739:
#line 2834 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 740:
#line 2835 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 741:
#line 2836 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 742:
#line 2837 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 743:
#line 2838 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 744:
#line 2839 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 753:
#line 2856 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 754:
#line 2857 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 875:
#line 2875 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 876:
#line 2882 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 877:
#line 2887 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 878:
#line 2893 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 879:
#line 2899 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 880:
#line 2905 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 881:
#line 2916 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 882:
#line 2921 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 883:
#line 2927 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 886:
#line 2938 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 887:
#line 2939 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 888:
#line 2940 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 889:
#line 2941 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 890:
#line 2942 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 891:
#line 2943 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 892:
#line 2944 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 893:
#line 2951 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 894:
#line 2956 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 895:
#line 2963 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 896:
#line 2964 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 897:
#line 2967 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 898:
#line 2968 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 899:
#line 2969 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 900:
#line 2972 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 901:
#line 2977 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 902:
#line 2983 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 903:
#line 2992 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 904:
#line 3000 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 905:
#line 3010 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 906:
#line 3015 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 909:
#line 3028 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 910:
#line 3029 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 911:
#line 3030 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 912:
#line 3031 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 913:
#line 3032 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 914:
#line 3033 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 915:
#line 3034 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 916:
#line 3035 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 917:
#line 3038 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 918:
#line 3043 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 919:
#line 3049 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 920:
#line 3059 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 921:
#line 3066 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 922:
#line 3073 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 923:
#line 3081 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 925:
#line 3091 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 927:
#line 3095 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 928:
#line 3096 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11010 "parser/evoparser.tab.c"
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


#line 3099 "parser/evoparser.y"

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
