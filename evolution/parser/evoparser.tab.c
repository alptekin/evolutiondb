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
     SECURITY = 460,
     PERMISSIVE = 461,
     RESTRICTIVE = 462,
     CURRENT_USER = 463,
     SQL_SMALL_RESULT = 464,
     SCHEMA = 465,
     SHARD = 466,
     SHARDS = 467,
     SHARE = 468,
     SKIP = 469,
     SOME = 470,
     SQL_CALC_FOUND_ROWS = 471,
     SQL_BIG_RESULT = 472,
     SIMPLE = 473,
     STDIN = 474,
     STDOUT = 475,
     STRAIGHT_JOIN = 476,
     SMALLINT = 477,
     SET = 478,
     SELECT = 479,
     QUOTE = 480,
     TINYTEXT = 481,
     TINYINT = 482,
     TO = 483,
     TEMPORARY = 484,
     GLOBAL = 485,
     PRESERVE = 486,
     TEXT = 487,
     THAN = 488,
     TIMESTAMP = 489,
     TABLE = 490,
     THEN = 491,
     TRAILING = 492,
     TRUNCATE = 493,
     TINYBLOB = 494,
     TIME = 495,
     UPDATE = 496,
     UNSIGNED = 497,
     UNION = 498,
     UNIQUE = 499,
     UUID = 500,
     ARRAY = 501,
     JSON = 502,
     VIEW = 503,
     USING = 504,
     USE = 505,
     HASH = 506,
     VALIDATE = 507,
     VARCHAR = 508,
     VALUES = 509,
     VARBINARY = 510,
     WHERE = 511,
     WHEN = 512,
     WHILE = 513,
     WITH = 514,
     YEAR = 515,
     YEAR_MONTH = 516,
     ZEROFILL = 517,
     EXISTS = 518,
     FSUBSTRING = 519,
     FTRIM = 520,
     FDATE_ADD = 521,
     FDATE_SUB = 522,
     FDATEDIFF = 523,
     FYEAR = 524,
     FMONTH = 525,
     FDAY = 526,
     FHOUR = 527,
     FMINUTE = 528,
     FSECOND = 529,
     FNOW = 530,
     FLEFT = 531,
     FRIGHT = 532,
     FLPAD = 533,
     FRPAD = 534,
     FREVERSE = 535,
     FREPEAT = 536,
     FINSTR = 537,
     FLOCATE = 538,
     FABS = 539,
     FCEIL = 540,
     FFLOOR = 541,
     FROUND = 542,
     FPOWER = 543,
     FSQRT = 544,
     FMOD = 545,
     FRAND = 546,
     FLOG = 547,
     FLOG10 = 548,
     FSIGN = 549,
     FPI = 550,
     FCAST = 551,
     FCONVERT = 552,
     FNULLIF = 553,
     FIFNULL = 554,
     FIF = 555,
     UNKNOWN = 556,
     FGROUP_CONCAT = 557,
     SEPARATOR = 558,
     FCOUNT = 559,
     FSUM = 560,
     FAVG = 561,
     FMIN = 562,
     FMAX = 563,
     FUPPER = 564,
     FLOWER = 565,
     FLENGTH = 566,
     FCONCAT = 567,
     FREPLACE = 568,
     FCOALESCE = 569,
     FGEN_RANDOM_UUID = 570,
     FGEN_RANDOM_UUID_V7 = 571,
     FSNOWFLAKE_ID = 572,
     FLAST_INSERT_ID = 573,
     FSCOPE_IDENTITY = 574,
     FAT_IDENTITY = 575,
     FAT_LAST_INSERT_ID = 576,
     FEVO_SLEEP = 577,
     FEVO_JITTER = 578,
     FROW_NUMBER = 579,
     FRANK = 580,
     FDENSE_RANK = 581,
     FLEAD = 582,
     FLAG = 583,
     FNTILE = 584,
     FPERCENT_RANK = 585,
     FCUME_DIST = 586,
     OVER = 587,
     PARTITION = 588,
     FJSON_EXTRACT = 589,
     FJSON_UNQUOTE = 590,
     FJSON_TYPE = 591,
     FJSON_LENGTH = 592,
     FJSON_DEPTH = 593,
     FJSON_VALID = 594,
     FJSON_KEYS = 595,
     FJSON_PRETTY = 596,
     FJSON_QUOTE = 597,
     FJSON_SET = 598,
     FJSON_INSERT = 599,
     FJSON_REPLACE = 600,
     FJSON_REMOVE = 601,
     FJSON_CONTAINS = 602,
     FJSON_CONTAINS_PATH = 603,
     FJSON_SEARCH = 604,
     FJSON_OBJECT = 605,
     FJSON_ARRAY = 606,
     FJSON_ARRAYAGG = 607,
     SEQUENCE = 608,
     FNEXTVAL = 609,
     FCURRVAL = 610,
     FSETVAL = 611,
     FLASTVAL = 612,
     START = 613,
     INCREMENT = 614,
     MINVALUE = 615,
     CYCLE = 616,
     FARRAY_LENGTH = 617,
     FUNNEST = 618,
     FEVO_NOTIFY = 619,
     FPG_LISTENING_CHANNELS = 620
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
#define SECURITY 460
#define PERMISSIVE 461
#define RESTRICTIVE 462
#define CURRENT_USER 463
#define SQL_SMALL_RESULT 464
#define SCHEMA 465
#define SHARD 466
#define SHARDS 467
#define SHARE 468
#define SKIP 469
#define SOME 470
#define SQL_CALC_FOUND_ROWS 471
#define SQL_BIG_RESULT 472
#define SIMPLE 473
#define STDIN 474
#define STDOUT 475
#define STRAIGHT_JOIN 476
#define SMALLINT 477
#define SET 478
#define SELECT 479
#define QUOTE 480
#define TINYTEXT 481
#define TINYINT 482
#define TO 483
#define TEMPORARY 484
#define GLOBAL 485
#define PRESERVE 486
#define TEXT 487
#define THAN 488
#define TIMESTAMP 489
#define TABLE 490
#define THEN 491
#define TRAILING 492
#define TRUNCATE 493
#define TINYBLOB 494
#define TIME 495
#define UPDATE 496
#define UNSIGNED 497
#define UNION 498
#define UNIQUE 499
#define UUID 500
#define ARRAY 501
#define JSON 502
#define VIEW 503
#define USING 504
#define USE 505
#define HASH 506
#define VALIDATE 507
#define VARCHAR 508
#define VALUES 509
#define VARBINARY 510
#define WHERE 511
#define WHEN 512
#define WHILE 513
#define WITH 514
#define YEAR 515
#define YEAR_MONTH 516
#define ZEROFILL 517
#define EXISTS 518
#define FSUBSTRING 519
#define FTRIM 520
#define FDATE_ADD 521
#define FDATE_SUB 522
#define FDATEDIFF 523
#define FYEAR 524
#define FMONTH 525
#define FDAY 526
#define FHOUR 527
#define FMINUTE 528
#define FSECOND 529
#define FNOW 530
#define FLEFT 531
#define FRIGHT 532
#define FLPAD 533
#define FRPAD 534
#define FREVERSE 535
#define FREPEAT 536
#define FINSTR 537
#define FLOCATE 538
#define FABS 539
#define FCEIL 540
#define FFLOOR 541
#define FROUND 542
#define FPOWER 543
#define FSQRT 544
#define FMOD 545
#define FRAND 546
#define FLOG 547
#define FLOG10 548
#define FSIGN 549
#define FPI 550
#define FCAST 551
#define FCONVERT 552
#define FNULLIF 553
#define FIFNULL 554
#define FIF 555
#define UNKNOWN 556
#define FGROUP_CONCAT 557
#define SEPARATOR 558
#define FCOUNT 559
#define FSUM 560
#define FAVG 561
#define FMIN 562
#define FMAX 563
#define FUPPER 564
#define FLOWER 565
#define FLENGTH 566
#define FCONCAT 567
#define FREPLACE 568
#define FCOALESCE 569
#define FGEN_RANDOM_UUID 570
#define FGEN_RANDOM_UUID_V7 571
#define FSNOWFLAKE_ID 572
#define FLAST_INSERT_ID 573
#define FSCOPE_IDENTITY 574
#define FAT_IDENTITY 575
#define FAT_LAST_INSERT_ID 576
#define FEVO_SLEEP 577
#define FEVO_JITTER 578
#define FROW_NUMBER 579
#define FRANK 580
#define FDENSE_RANK 581
#define FLEAD 582
#define FLAG 583
#define FNTILE 584
#define FPERCENT_RANK 585
#define FCUME_DIST 586
#define OVER 587
#define PARTITION 588
#define FJSON_EXTRACT 589
#define FJSON_UNQUOTE 590
#define FJSON_TYPE 591
#define FJSON_LENGTH 592
#define FJSON_DEPTH 593
#define FJSON_VALID 594
#define FJSON_KEYS 595
#define FJSON_PRETTY 596
#define FJSON_QUOTE 597
#define FJSON_SET 598
#define FJSON_INSERT 599
#define FJSON_REPLACE 600
#define FJSON_REMOVE 601
#define FJSON_CONTAINS 602
#define FJSON_CONTAINS_PATH 603
#define FJSON_SEARCH 604
#define FJSON_OBJECT 605
#define FJSON_ARRAY 606
#define FJSON_ARRAYAGG 607
#define SEQUENCE 608
#define FNEXTVAL 609
#define FCURRVAL 610
#define FSETVAL 611
#define FLASTVAL 612
#define START 613
#define INCREMENT 614
#define MINVALUE 615
#define CYCLE 616
#define FARRAY_LENGTH 617
#define FUNNEST 618
#define FEVO_NOTIFY 619
#define FPG_LISTENING_CHANNELS 620




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
#line 897 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 910 "parser/evoparser.tab.c"

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
#define YYLAST   12635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  383
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  188
/* YYNRULES -- Number of rules.  */
#define YYNRULES  928
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2279

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   620

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     378,   379,    26,    24,   380,    25,   377,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   376,
       2,   382,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   381,    30,     2,     2,     2,     2,     2,
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
     375
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
     384,     0,    -1,   423,   376,    -1,   423,   376,   384,    -1,
       3,    -1,     3,   377,     3,    -1,    82,   377,     3,    -1,
     176,   378,     3,   379,    84,   378,     4,   379,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   186,
      -1,   385,    24,   385,    -1,   385,    25,   385,    -1,   385,
      26,   385,    -1,   385,    27,   385,    -1,   385,    28,   385,
      -1,   385,    29,   385,    -1,    25,   385,    -1,   378,   385,
     379,    -1,   385,    12,   385,    -1,   385,    10,   385,    -1,
     385,    11,   385,    -1,   385,    21,   385,    -1,   385,    22,
     385,    -1,   385,    30,   385,    -1,   385,    23,   385,    -1,
     385,    32,   385,    -1,   385,    31,   385,    -1,    18,   385,
      -1,    17,   385,    -1,   385,    20,   385,    -1,    -1,   385,
      20,   378,   386,   424,   379,    -1,    -1,   385,    20,    40,
     378,   387,   424,   379,    -1,    -1,   385,    20,   225,   378,
     388,   424,   379,    -1,    -1,   385,    20,    38,   378,   389,
     424,   379,    -1,   385,    20,    40,   378,   393,   379,    -1,
     385,    20,   225,   378,   393,   379,    -1,   385,    15,   186,
      -1,   385,    15,    18,   186,    -1,   385,    15,     6,    -1,
     385,    15,    18,     6,    -1,     8,     9,   385,    -1,   385,
      19,   385,    43,   385,    -1,   385,    18,    19,   385,    43,
     385,    -1,   385,    -1,   385,   380,   390,    -1,   385,    -1,
     385,   380,   391,    -1,    -1,   256,    34,   392,   391,   381,
      -1,   256,    34,   381,    -1,   385,    34,   385,   381,    -1,
     385,    -1,   372,   378,   385,   379,    -1,   372,   378,   385,
     380,   385,   379,    -1,   373,   378,   385,   379,    -1,   374,
     378,   385,   380,   385,   379,    -1,   375,   378,   379,    -1,
      -1,   390,    -1,    -1,   385,    16,   378,   395,   390,   379,
      -1,    -1,   385,    18,    16,   378,   396,   390,   379,    -1,
      -1,   385,    16,   378,   397,   424,   379,    -1,    -1,   385,
      18,    16,   378,   398,   424,   379,    -1,    -1,   273,   378,
     399,   424,   379,    -1,     3,   378,   394,   379,    -1,   314,
     378,    26,   379,    -1,   314,   378,   385,   379,    -1,   315,
     378,   385,   379,    -1,   316,   378,   385,   379,    -1,   317,
     378,   385,   379,    -1,   318,   378,   385,   379,    -1,   312,
     378,   385,   379,    -1,   312,   378,   385,   313,     4,   379,
      -1,    -1,   334,   378,   379,   342,   378,   400,   431,   433,
     379,    -1,    -1,   335,   378,   379,   342,   378,   401,   431,
     433,   379,    -1,    -1,   336,   378,   379,   342,   378,   402,
     431,   433,   379,    -1,    -1,   315,   378,   385,   379,   342,
     378,   403,   431,   433,   379,    -1,    -1,   314,   378,    26,
     379,   342,   378,   404,   431,   433,   379,    -1,    -1,   314,
     378,   385,   379,   342,   378,   405,   431,   433,   379,    -1,
      -1,   316,   378,   385,   379,   342,   378,   406,   431,   433,
     379,    -1,    -1,   317,   378,   385,   379,   342,   378,   407,
     431,   433,   379,    -1,    -1,   318,   378,   385,   379,   342,
     378,   408,   431,   433,   379,    -1,    -1,   337,   378,   385,
     379,   342,   378,   409,   431,   433,   379,    -1,    -1,   337,
     378,   385,   380,     5,   379,   342,   378,   410,   431,   433,
     379,    -1,    -1,   337,   378,   385,   380,     5,   380,     4,
     379,   342,   378,   411,   431,   433,   379,    -1,    -1,   337,
     378,   385,   380,     5,   380,     5,   379,   342,   378,   412,
     431,   433,   379,    -1,    -1,   338,   378,   385,   379,   342,
     378,   413,   431,   433,   379,    -1,    -1,   338,   378,   385,
     380,     5,   379,   342,   378,   414,   431,   433,   379,    -1,
      -1,   338,   378,   385,   380,     5,   380,     4,   379,   342,
     378,   415,   431,   433,   379,    -1,    -1,   338,   378,   385,
     380,     5,   380,     5,   379,   342,   378,   416,   431,   433,
     379,    -1,    -1,   339,   378,     5,   379,   342,   378,   417,
     431,   433,   379,    -1,    -1,   340,   378,   379,   342,   378,
     418,   431,   433,   379,    -1,    -1,   341,   378,   379,   342,
     378,   419,   431,   433,   379,    -1,   274,   378,   385,   380,
     385,   380,   385,   379,    -1,   274,   378,   385,   380,   385,
     379,    -1,   274,   378,   385,   129,   385,   379,    -1,   274,
     378,   385,   129,   385,   133,   385,   379,    -1,   275,   378,
     385,   379,    -1,   275,   378,   420,   385,   129,   385,   379,
      -1,   275,   378,   420,   129,   385,   379,    -1,   319,   378,
     385,   379,    -1,   320,   378,   385,   379,    -1,   321,   378,
     385,   379,    -1,   322,   378,   385,   380,   385,   379,    -1,
     323,   378,   385,   380,   385,   380,   385,   379,    -1,   324,
     378,   385,   380,   385,   379,    -1,   286,   378,   385,   380,
     385,   379,    -1,   287,   378,   385,   380,   385,   379,    -1,
     288,   378,   385,   380,   385,   380,   385,   379,    -1,   289,
     378,   385,   380,   385,   380,   385,   379,    -1,   290,   378,
     385,   379,    -1,   291,   378,   385,   380,   385,   379,    -1,
     292,   378,   385,   380,   385,   379,    -1,   293,   378,   385,
     380,   385,   379,    -1,   294,   378,   385,   379,    -1,   295,
     378,   385,   379,    -1,   296,   378,   385,   379,    -1,   297,
     378,   385,   380,   385,   379,    -1,   297,   378,   385,   379,
      -1,   298,   378,   385,   380,   385,   379,    -1,   299,   378,
     385,   379,    -1,   300,   378,   385,   380,   385,   379,    -1,
     301,   378,   379,    -1,   302,   378,   385,   379,    -1,   303,
     378,   385,   379,    -1,   304,   378,   385,   379,    -1,   305,
     378,   379,    -1,   285,   378,   379,    -1,   278,   378,   385,
     380,   385,   379,    -1,   279,   378,   385,   379,    -1,   280,
     378,   385,   379,    -1,   281,   378,   385,   379,    -1,   282,
     378,   385,   379,    -1,   283,   378,   385,   379,    -1,   284,
     378,   385,   379,    -1,   344,   378,   385,   380,   385,   379,
      -1,   345,   378,   385,   379,    -1,   346,   378,   385,   379,
      -1,   347,   378,   385,   379,    -1,   348,   378,   385,   379,
      -1,   349,   378,   385,   379,    -1,   350,   378,   385,   379,
      -1,   351,   378,   385,   379,    -1,   352,   378,   385,   379,
      -1,   353,   378,   385,   380,   385,   380,   385,   379,    -1,
     354,   378,   385,   380,   385,   380,   385,   379,    -1,   355,
     378,   385,   380,   385,   380,   385,   379,    -1,   356,   378,
     385,   380,   385,   379,    -1,   357,   378,   385,   380,   385,
     379,    -1,   358,   378,   385,   380,   385,   380,   385,   379,
      -1,   359,   378,   385,   380,   385,   380,   385,   379,    -1,
     360,   378,   385,   380,   385,   379,    -1,   360,   378,   385,
     380,   385,   380,   385,   380,   385,   379,    -1,   361,   378,
     385,   379,    -1,   361,   378,   385,   380,   385,   379,    -1,
     361,   378,   385,   380,   385,   380,   385,   379,    -1,   362,
     378,   385,   379,    -1,   364,   378,   385,   379,    -1,   365,
     378,   385,   379,    -1,   366,   378,   385,   380,   385,   379,
      -1,   366,   378,   385,   380,   385,   380,   385,   379,    -1,
     367,   378,   379,    -1,   306,   378,   385,    44,   543,   379,
      -1,   307,   378,   385,   380,   543,   379,    -1,   308,   378,
     385,   380,   385,   379,    -1,   309,   378,   385,   380,   385,
     379,    -1,   310,   378,   385,   380,   385,   380,   385,   379,
      -1,   385,    15,   311,    -1,   322,   378,   385,   380,   385,
     380,   385,   379,    -1,   322,   378,   385,   380,   385,   380,
     385,   380,   385,   379,    -1,   325,   378,   379,    -1,   326,
     378,   379,    -1,   327,   378,   379,    -1,   328,   378,   379,
      -1,   329,   378,   379,    -1,   330,    -1,   331,    -1,   332,
     378,   385,   379,    -1,   333,   378,   385,   380,   385,   379,
      -1,   171,    -1,   247,    -1,    58,    -1,   276,   378,   385,
     380,   421,   379,    -1,   277,   378,   385,   380,   421,   379,
      -1,   154,   385,   270,    -1,   154,   385,    97,    -1,   154,
     385,    98,    -1,   154,   385,   102,    -1,   154,   385,   104,
      -1,   154,   385,   271,    -1,   154,   385,   138,    -1,   154,
     385,   137,    -1,   154,   385,   140,    -1,    70,   385,   422,
     117,    -1,    70,   385,   422,   118,   385,   117,    -1,    70,
     422,   117,    -1,    70,   422,   118,   385,   117,    -1,   267,
     385,   246,   385,    -1,   422,   267,   385,   246,   385,    -1,
     385,    14,   385,    -1,   385,    18,    14,   385,    -1,   385,
      13,   385,    -1,   385,    18,    13,   385,    -1,    65,    -1,
      73,    -1,    74,    -1,   218,    -1,   424,    -1,   234,   442,
     443,    -1,   234,   442,   443,   129,   446,   425,   426,   430,
     435,   438,   439,   440,    -1,   234,   442,   443,   152,     3,
     129,   446,   425,   426,   430,   435,   438,    -1,    -1,   266,
     385,    -1,    -1,   134,    56,   427,   429,    -1,   385,   428,
      -1,   427,   380,   385,   428,    -1,    -1,    42,    -1,   105,
      -1,    -1,   269,   207,    -1,    -1,   141,   385,    -1,    -1,
     343,    56,   432,    -1,     3,    -1,   432,   380,     3,    -1,
      -1,   191,    56,   434,    -1,     3,   428,    -1,   434,   380,
       3,   428,    -1,    -1,   191,    56,   436,    -1,   437,    -1,
     436,   380,   437,    -1,     3,   428,    -1,     3,   377,     3,
     428,    -1,     5,   428,    -1,    -1,   172,   385,    -1,   172,
     385,   380,   385,    -1,   172,   385,   174,   385,    -1,    -1,
     133,   251,    -1,   133,   223,    -1,   133,   251,   224,   173,
      -1,   133,   223,   224,   173,    -1,    -1,   152,   441,    -1,
       3,    -1,   441,   380,     3,    -1,    -1,   442,    38,    -1,
     442,    99,    -1,   442,   103,    -1,   442,   139,    -1,   442,
     231,    -1,   442,   219,    -1,   442,   227,    -1,   442,   226,
      -1,   444,    -1,   443,   380,   444,    -1,    26,    -1,   385,
     445,    -1,    44,     3,    -1,     3,    -1,    -1,   447,    -1,
     446,   380,   447,    -1,   448,    -1,   452,    -1,     3,   445,
     459,    -1,   166,     3,   445,   459,    -1,     3,   377,     3,
     445,   459,    -1,   462,   451,     3,    -1,   449,   451,     3,
      -1,   373,   378,   385,   379,    -1,   373,   378,   385,   379,
     451,     3,    -1,   373,   378,   385,   379,   451,     3,   378,
       3,   379,    -1,   378,   446,   379,    -1,    -1,   160,   378,
     450,   424,   379,    -1,    44,    -1,    -1,   447,   453,   156,
     448,   457,    -1,   447,   231,   448,    -1,   447,   231,   448,
     190,   385,    -1,   447,   455,   454,   156,   448,   458,    -1,
     447,   183,   456,   156,   448,    -1,    -1,   146,    -1,    69,
      -1,    -1,   189,    -1,   170,    -1,   208,    -1,   170,   454,
      -1,   208,   454,    -1,    -1,    -1,   458,    -1,   190,   385,
      -1,   259,   378,   441,   379,    -1,   260,   157,   460,   378,
     461,   379,    -1,   147,   157,   460,   378,   461,   379,    -1,
     126,   157,   460,   378,   461,   379,    -1,    -1,   133,   156,
      -1,    -1,     3,    -1,   461,   380,     3,    -1,   378,   424,
     379,    -1,   463,    -1,   100,   464,   129,     3,   425,   435,
     438,   569,    -1,   464,   169,    -1,   464,   196,    -1,   464,
     147,    -1,    -1,   100,   464,   465,   129,   446,   425,    -1,
       3,   466,    -1,   465,   380,     3,   466,    -1,    -1,   377,
      26,    -1,   100,   464,   129,   465,   259,   446,   425,    -1,
     467,    -1,   101,   245,     3,   468,    -1,   101,   245,   149,
     273,     3,   468,    -1,    -1,    67,    -1,   203,    -1,   469,
      -1,    66,   148,     3,   190,     3,   378,   470,   379,    -1,
      66,   131,   148,     3,   190,     3,   378,   470,   379,    -1,
      66,   148,   149,   273,     3,   190,     3,   378,   470,   379,
      -1,    66,   254,   148,     3,   190,     3,   378,   470,   379,
      -1,    66,   254,   148,   149,   273,     3,   190,     3,   378,
     470,   379,    -1,    66,   148,     3,   190,     3,   259,   261,
     378,   470,   379,    -1,    66,   148,   149,   273,     3,   190,
       3,   259,   261,   378,   470,   379,    -1,    66,   254,   148,
       3,   190,     3,   259,   261,   378,   470,   379,    -1,    66,
     254,   148,   149,   273,     3,   190,     3,   259,   261,   378,
     470,   379,    -1,    66,   148,    78,     3,   190,     3,   378,
     470,   379,    -1,    66,   148,    78,   149,   273,     3,   190,
       3,   378,   470,   379,    -1,    66,   254,   148,    78,     3,
     190,     3,   378,   470,   379,    -1,    66,   254,   148,    78,
     149,   273,     3,   190,     3,   378,   470,   379,    -1,    66,
     148,    78,     3,   190,     3,   259,   261,   378,   470,   379,
      -1,    66,   254,   148,    78,     3,   190,     3,   259,   261,
     378,   470,   379,    -1,     3,    -1,   470,   380,     3,    -1,
     471,    -1,   319,   378,     3,   379,    -1,   320,   378,     3,
     379,    -1,   321,   378,     3,   379,    -1,   322,   378,     3,
     380,     3,   379,    -1,   472,    -1,   101,   148,     3,    -1,
     473,   475,    -1,   248,   245,     3,    -1,   248,   245,     3,
     380,   474,    -1,     3,    -1,   474,   380,     3,    -1,    -1,
     475,    67,    -1,   475,   203,    -1,   475,    48,    46,    -1,
     475,    47,    46,    -1,   476,    -1,   477,    -1,   478,    -1,
     161,     3,    -1,   161,     3,   164,    -1,   163,     3,    -1,
     163,    26,    -1,   162,     3,    -1,   162,     3,   380,     4,
      -1,   479,    -1,   199,   245,     3,    -1,   480,    -1,    39,
     245,     3,    -1,    39,   245,     3,   377,     3,    -1,   489,
      -1,   481,    -1,   488,    -1,    66,   214,     3,   190,     3,
     482,   483,   484,   486,   487,    -1,    -1,    44,   216,    -1,
      44,   217,    -1,    -1,   133,    38,    -1,   133,   234,    -1,
     133,   150,    -1,   133,   251,    -1,   133,   100,    -1,    -1,
     238,   485,    -1,     3,    -1,   485,   380,     3,    -1,    -1,
     259,   378,   385,   379,    -1,    -1,   269,    71,   378,   385,
     379,    -1,   101,   214,     3,   190,     3,    -1,    35,   245,
       3,    36,    64,     3,    71,   378,   385,   379,    -1,    35,
     245,     3,    36,    64,     3,   254,   378,   536,   379,    -1,
      35,   245,     3,    36,    64,     3,   127,   157,   378,   533,
     379,   200,     3,   378,   534,   379,   535,    -1,    35,   245,
       3,    36,    64,     3,    71,   378,   385,   379,    18,   262,
      -1,    35,   245,     3,    36,    64,     3,   127,   157,   378,
     533,   379,   200,     3,   378,   534,   379,   535,    18,   262,
      -1,    35,   245,     3,    36,    64,     3,   194,   157,   378,
     532,   379,    -1,    35,   245,     3,   101,    64,     3,    -1,
      35,   245,     3,   201,    64,     3,   238,     3,    -1,    35,
     245,     3,   113,    64,     3,    -1,    35,   245,     3,    93,
      64,     3,    -1,    35,   245,     3,   262,    64,     3,    -1,
      35,   245,     3,    36,    77,     3,   543,   538,   490,    -1,
      35,   245,     3,   101,    77,     3,    -1,    35,   245,     3,
     101,     3,    -1,    35,   245,     3,   201,    77,     3,   238,
       3,    -1,    35,   245,     3,   201,     3,   238,     3,    -1,
      35,   245,     3,   180,    77,     3,   543,   538,   490,    -1,
      35,   245,     3,   180,     3,   543,   538,   490,    -1,    35,
     245,     3,    68,    77,     3,     3,   543,   538,   490,    -1,
      35,   245,     3,    68,     3,     3,   543,   538,   490,    -1,
      35,   245,     3,   113,   210,     3,   215,    -1,    35,   245,
       3,    93,   210,     3,   215,    -1,    -1,   123,    -1,    37,
       3,    -1,   491,    -1,   150,   499,   500,     3,   501,   264,
     503,   492,   494,   569,    -1,   150,   499,   500,     3,   501,
     424,    -1,    -1,    -1,   192,   157,   251,   493,   498,    -1,
      -1,   190,    81,   495,   496,    -1,    -1,   378,     3,   379,
      -1,   378,     3,   380,     3,    -1,    94,    83,    -1,    -1,
      94,   251,   497,   233,   498,    -1,     3,    20,   385,    -1,
     498,   380,     3,    20,   385,    -1,    -1,   499,   169,    -1,
     499,    96,    -1,   499,   139,    -1,   499,   147,    -1,   152,
      -1,    -1,    -1,   378,   502,   379,    -1,     3,    -1,   502,
     380,     3,    -1,   378,   505,   379,    -1,    -1,   503,   380,
     504,   378,   505,   379,    -1,   385,    -1,   106,    -1,   505,
     380,   385,    -1,   505,   380,   106,    -1,   150,   499,   500,
       3,   233,   506,   492,    -1,     3,    20,   385,    -1,     3,
      20,   106,    -1,   506,   380,     3,    20,   385,    -1,   506,
     380,     3,    20,   106,    -1,   507,    -1,   209,   499,   500,
       3,   501,   264,   503,   492,    -1,   209,   499,   500,     3,
     233,   506,   492,    -1,   209,   499,   500,     3,   501,   424,
     492,    -1,   508,    -1,    -1,    79,     3,   509,   510,   512,
     513,   514,    -1,    -1,   378,   511,   379,    -1,     3,    -1,
     511,   380,     3,    -1,   129,    -1,   238,    -1,     4,    -1,
     229,    -1,   230,    -1,    -1,   515,    -1,   269,   378,   515,
     379,    -1,   378,   515,   379,    -1,   516,    -1,   515,   380,
     516,    -1,   128,    80,    -1,   128,   242,    -1,    92,     4,
      -1,   136,    -1,   136,     6,    -1,   186,     4,    -1,   235,
       4,    -1,    80,    -1,   517,    -1,   251,   518,   446,   233,
     519,   425,   435,   438,   569,    -1,    -1,   499,   169,    -1,
     499,   147,    -1,     3,    20,   385,    -1,     3,   377,     3,
      20,   385,    -1,   519,   380,     3,    20,   385,    -1,   519,
     380,     3,   377,     3,    20,   385,    -1,   201,   245,     3,
     238,     3,    -1,   520,    -1,    66,    88,   521,     3,    -1,
      66,   220,   521,     3,    -1,   101,    88,     3,    -1,   101,
      88,   149,   273,     3,    -1,   101,   220,     3,    -1,   101,
     220,   149,   273,     3,    -1,    -1,   149,   273,    -1,   522,
      -1,    66,    95,     3,    44,   543,    -1,    66,    95,     3,
      44,   543,   106,   385,    -1,    66,    95,     3,    44,   543,
      18,   186,    -1,    66,    95,     3,    44,   543,    71,   378,
     385,   379,    -1,    66,    95,     3,    44,   543,    18,   186,
      71,   378,   385,   379,    -1,   523,    -1,   260,     3,    -1,
     260,    88,     3,    -1,   524,    -1,    66,   529,   245,   521,
       3,   378,   530,   379,   526,   525,    -1,    -1,   165,   378,
       3,   379,    -1,    66,   529,   245,   521,     3,   377,     3,
     378,   530,   379,   526,    -1,    66,   529,   245,   521,     3,
     343,    87,     3,   133,   264,   129,   378,     5,   379,   238,
     378,     5,   379,    -1,    -1,   526,    41,    20,     5,    -1,
     526,    41,     5,    -1,   526,   190,     3,   100,     3,    -1,
     526,   190,     3,   241,     3,    -1,   526,   221,    56,   261,
     378,     3,   379,   222,     5,    -1,   526,   221,    56,   197,
     378,     3,   379,   378,   527,   379,    -1,   526,   343,    56,
     197,   378,     3,   379,    -1,   528,    -1,   527,   380,   528,
      -1,   221,     3,   264,   167,   243,     4,   190,   184,     5,
      -1,   221,     3,   264,   167,   243,   177,   190,   184,     5,
      -1,    66,   529,   245,   521,     3,   378,   530,   379,   545,
      -1,    66,   529,   245,   521,     3,   545,    -1,    66,   529,
     245,   521,     3,   377,     3,   378,   530,   379,   545,    -1,
      66,   529,   245,   521,     3,   377,     3,   545,    -1,    -1,
     239,    -1,   240,   239,    -1,   531,    -1,   530,   380,   531,
      -1,   194,   157,   378,   532,   379,    -1,    64,     3,   194,
     157,   378,   532,   379,    -1,   157,   378,   441,   379,    -1,
     148,   378,   441,   379,    -1,   131,   148,   378,   441,   379,
      -1,   131,   157,   378,   441,   379,    -1,    71,   378,   385,
     379,    -1,    64,     3,    71,   378,   385,   379,    -1,   127,
     157,   378,   533,   379,   200,     3,   378,   534,   379,   535,
      -1,   127,   157,   378,   533,   379,   200,     3,   377,     3,
     378,   534,   379,   535,    -1,    64,     3,   127,   157,   378,
     533,   379,   200,     3,   378,   534,   379,   535,    -1,    64,
       3,   127,   157,   378,   533,   379,   200,     3,   377,     3,
     378,   534,   379,   535,    -1,   254,   378,   536,   379,    -1,
      64,     3,   254,   378,   536,   379,    -1,     3,    -1,   532,
     380,     3,    -1,     3,    -1,   533,   380,     3,    -1,     3,
      -1,   534,   380,     3,    -1,    -1,   535,   190,   100,    67,
      -1,   535,   190,   100,   233,   186,    -1,   535,   190,   100,
     203,    -1,   535,   190,   100,   233,   106,    -1,   535,   190,
     251,    67,    -1,   535,   190,   251,   233,   186,    -1,   535,
     190,   251,   203,    -1,   535,   190,   251,   233,   106,    -1,
     535,   190,   100,   185,    -1,   535,   190,   251,   185,    -1,
     535,   176,   130,    -1,   535,   176,   228,    -1,   535,   176,
     193,    -1,   535,    90,    -1,   535,    18,    90,    -1,   535,
      90,   144,    91,    -1,   535,    90,   144,   142,    -1,     3,
      -1,   536,   380,     3,    -1,    -1,   537,     3,   543,   538,
      -1,    -1,   538,    18,   186,    -1,   538,   186,    -1,   538,
     106,     4,    -1,   538,   106,     5,    -1,   538,   106,     7,
      -1,   538,   106,     6,    -1,   538,   106,   325,   378,   379,
      -1,   538,   106,   326,   378,   379,    -1,   538,   106,   327,
     378,   379,    -1,   538,   106,    65,    -1,   538,   106,   378,
     385,   379,    -1,   538,    41,    -1,   538,    41,   378,     5,
     380,     5,   379,    -1,   538,    41,   378,     5,   379,    -1,
     538,    46,   378,     5,   380,     5,   379,    -1,   538,    46,
     378,     5,   379,    -1,   538,    46,    -1,   538,   254,   157,
      -1,   538,   254,    -1,   538,   194,   157,    -1,   538,   157,
      -1,   538,    72,     4,    -1,   538,    71,   378,   385,   379,
      -1,   538,    64,     3,   254,    -1,   538,    64,     3,   194,
     157,    -1,   538,    64,     3,    71,   378,   385,   379,    -1,
     538,    49,    45,    44,   378,   385,   379,    50,    -1,   538,
      49,    45,    44,   378,   385,   379,    51,    -1,   538,    49,
      45,    44,   378,   385,   379,    -1,   538,    44,   378,   385,
     379,    50,    -1,   538,    44,   378,   385,   379,    51,    -1,
     538,    44,   378,   385,   379,    -1,    -1,   378,     5,   379,
      -1,   378,     5,   380,     5,   379,    -1,    -1,    57,    -1,
      -1,   541,   252,    -1,   541,   272,    -1,    -1,   542,    75,
     233,     4,    -1,   542,    76,     4,    -1,    60,   539,    -1,
     237,   539,   541,    -1,   232,   539,   541,    -1,   182,   539,
     541,    -1,   153,   539,   541,    -1,   145,   539,   541,    -1,
      59,   539,   541,    -1,   198,   539,   541,    -1,   107,   539,
     541,    -1,   125,   539,   541,    -1,   109,   539,   541,    -1,
     110,    -1,   250,    -1,   244,    -1,   108,    -1,   270,    -1,
      75,   539,   542,    -1,   263,   378,     5,   379,   542,    -1,
      57,   539,    -1,   265,   378,     5,   379,    -1,   249,    -1,
      54,    -1,   181,    -1,   175,    -1,   236,   540,   542,    -1,
     242,   540,   542,    -1,   178,   540,   542,    -1,   168,   540,
     542,    -1,   116,   378,   544,   379,   542,    -1,   233,   378,
     544,   379,   542,    -1,    55,    -1,   255,    -1,   257,    -1,
     543,    34,   381,    -1,     4,    -1,   544,   380,     4,    -1,
     546,   451,   424,    -1,    -1,   147,    -1,   209,    -1,   547,
      -1,   233,   220,     3,    -1,   233,   220,   106,    -1,   233,
     548,    -1,   549,    -1,   548,   380,   549,    -1,     8,    20,
     385,    -1,     8,     9,   385,    -1,   550,    -1,    66,   195,
       3,   378,   551,   379,    44,    53,   555,   117,    -1,    66,
     195,     3,   378,   551,   379,    53,   555,   117,    -1,    66,
      10,   209,   195,     3,   378,   551,   379,    44,    53,   555,
     117,    -1,    66,    10,   209,   195,     3,   378,   551,   379,
      53,   555,   117,    -1,    66,   132,     3,   378,   551,   379,
     206,   554,    44,    53,   555,   117,    -1,    66,   132,     3,
     378,   551,   379,   206,   554,    53,   555,   117,    -1,    66,
      10,   209,   132,     3,   378,   551,   379,   206,   554,    44,
      53,   555,   117,    -1,    66,    10,   209,   132,     3,   378,
     551,   379,   206,   554,    53,   555,   117,    -1,    -1,   552,
      -1,   553,    -1,   552,   380,   553,    -1,     3,   543,    -1,
      16,     3,   543,    -1,   188,     3,   543,    -1,   143,     3,
     543,    -1,   145,    -1,   153,    -1,   263,    -1,   242,    -1,
      55,    -1,   125,    -1,   107,    -1,    59,    -1,   110,    -1,
     244,    -1,    -1,   555,   556,    -1,   555,    53,   555,   117,
      -1,   555,   149,   555,   117,   149,    -1,   555,   268,   555,
     117,   268,    -1,   555,   159,   555,   117,   159,    -1,   555,
     124,   555,   117,   124,    -1,   555,    70,   555,   117,    70,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,
      -1,    43,    -1,   234,    -1,   150,    -1,   251,    -1,   100,
      -1,   129,    -1,   266,    -1,   233,    -1,   152,    -1,   264,
      -1,    66,    -1,   101,    -1,   245,    -1,   148,    -1,   246,
      -1,   118,    -1,   112,    -1,    89,    -1,    94,    -1,    61,
      -1,   204,    -1,   158,    -1,   155,    -1,    63,    -1,   187,
      -1,   122,    -1,    62,    -1,   135,    -1,   120,    -1,   188,
      -1,   143,    -1,   133,    -1,    47,    -1,   211,    -1,   202,
      -1,   119,    -1,   213,    -1,    52,    -1,   111,    -1,   210,
      -1,   212,    -1,    44,    -1,   190,    -1,   191,    -1,    56,
      -1,   134,    -1,   141,    -1,   172,    -1,   174,    -1,   156,
      -1,   170,    -1,   208,    -1,   146,    -1,   189,    -1,   130,
      -1,    69,    -1,   183,    -1,   259,    -1,   186,    -1,   106,
      -1,   194,    -1,   157,    -1,   254,    -1,    71,    -1,   127,
      -1,   200,    -1,    67,    -1,   203,    -1,   185,    -1,   145,
      -1,   153,    -1,   263,    -1,   242,    -1,    55,    -1,   125,
      -1,   107,    -1,    59,    -1,   110,    -1,   244,    -1,   232,
      -1,   109,    -1,    75,    -1,   255,    -1,    54,    -1,   253,
      -1,   115,    -1,   151,    -1,    38,    -1,    99,    -1,   273,
      -1,   267,    -1,   269,    -1,   195,    -1,   132,    -1,   206,
      -1,   378,    -1,   379,    -1,   380,    -1,   376,    -1,   377,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    17,    -1,   382,    -1,   314,    -1,   315,    -1,   316,
      -1,   317,    -1,   318,    -1,     8,    -1,   557,    -1,   101,
     195,     3,    -1,   101,   195,   149,   273,     3,    -1,   101,
     132,     3,    -1,   101,   132,   149,   273,     3,    -1,   558,
      -1,    61,     3,   378,   379,    -1,    61,     3,   378,   559,
     379,    -1,   560,    -1,   559,   380,   560,    -1,     5,    -1,
       4,    -1,     7,    -1,   186,    -1,     6,    -1,     3,    -1,
       8,    -1,   561,    -1,    66,   212,     3,   562,   563,   190,
       3,   133,   111,   210,    53,   555,   117,    -1,    52,    -1,
      37,    -1,   150,    -1,   251,    -1,   100,    -1,   564,    -1,
     101,   212,     3,    -1,   101,   212,   149,   273,     3,    -1,
      35,   212,     3,   113,    -1,    35,   212,     3,    93,    -1,
     565,    -1,    66,   363,   521,     3,   566,    -1,    -1,   566,
     567,    -1,   368,   269,     5,    -1,   368,     5,    -1,   369,
      56,     5,    -1,   369,     5,    -1,   370,     5,    -1,   177,
       5,    -1,   371,    -1,    18,   371,    -1,   568,    -1,   101,
     363,     3,    -1,   101,   363,   149,   273,     3,    -1,    35,
     363,     3,   566,    -1,    35,   363,     3,    48,    -1,    35,
     363,     3,    48,   269,     5,    -1,    35,   363,     3,   201,
     238,     3,    -1,    -1,   205,    26,    -1,   205,   570,    -1,
       3,    -1,   570,   380,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   467,   467,   468,   473,   480,   481,   482,   496,   497,
     525,   533,   541,   547,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   580,   580,   589,   589,   591,   591,
     593,   593,   598,   600,   604,   605,   606,   607,   608,   611,
     612,   615,   624,   642,   651,   671,   671,   731,   740,   747,
     751,   753,   755,   760,   765,   772,   773,   776,   776,   777,
     777,   778,   778,   786,   786,   794,   794,   805,   809,   810,
     811,   812,   813,   814,   815,   816,   820,   820,   822,   822,
     824,   824,   827,   827,   829,   829,   831,   831,   833,   833,
     835,   835,   837,   837,   840,   840,   842,   842,   844,   844,
     846,   846,   848,   848,   850,   850,   852,   852,   854,   854,
     857,   857,   859,   859,   861,   861,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   882,   883,   884,   885,   886,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
     900,   901,   902,   903,   904,   905,   906,   907,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   925,   926,   927,   928,   929,   930,
     932,   933,   934,   935,   936,   938,   939,   941,   942,   943,
     945,   946,   947,   948,   955,   962,   969,   973,   977,   981,
     985,   989,   995,   996,   997,  1000,  1006,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1024,  1026,  1028,  1030,
    1034,  1042,  1053,  1054,  1057,  1058,  1061,  1069,  1077,  1085,
    1099,  1109,  1110,  1123,  1139,  1140,  1141,  1142,  1145,  1152,
    1160,  1161,  1162,  1165,  1166,  1169,  1170,  1174,  1175,  1178,
    1180,  1184,  1185,  1188,  1190,  1194,  1195,  1198,  1199,  1202,
    1208,  1215,  1224,  1225,  1226,  1227,  1230,  1231,  1232,  1233,
    1234,  1237,  1238,  1241,  1242,  1245,  1246,  1247,  1248,  1249,
    1250,  1251,  1252,  1253,  1256,  1257,  1258,  1266,  1272,  1273,
    1274,  1277,  1278,  1281,  1282,  1286,  1294,  1304,  1305,  1306,
    1315,  1320,  1326,  1334,  1338,  1338,  1378,  1379,  1383,  1385,
    1387,  1389,  1391,  1395,  1396,  1397,  1400,  1401,  1404,  1405,
    1408,  1409,  1410,  1413,  1414,  1417,  1418,  1422,  1424,  1426,
    1428,  1431,  1432,  1435,  1436,  1439,  1443,  1453,  1461,  1462,
    1463,  1464,  1468,  1472,  1474,  1478,  1478,  1480,  1485,  1492,
    1499,  1511,  1512,  1513,  1517,  1524,  1531,  1539,  1549,  1557,
    1567,  1575,  1584,  1593,  1603,  1611,  1620,  1629,  1639,  1648,
    1660,  1665,  1670,  1676,  1683,  1690,  1697,  1707,  1714,  1723,
    1730,  1736,  1744,  1750,  1758,  1759,  1760,  1761,  1762,  1778,
    1779,  1780,  1783,  1789,  1800,  1806,  1813,  1819,  1835,  1842,
    1851,  1858,  1864,  1875,  1879,  1880,  1884,  1895,  1896,  1897,
    1901,  1902,  1903,  1904,  1905,  1906,  1909,  1911,  1915,  1916,
    1919,  1921,  1924,  1926,  1930,  1939,  1945,  1951,  1958,  1964,
    1971,  1977,  1983,  1989,  1995,  2001,  2007,  2013,  2019,  2025,
    2031,  2037,  2043,  2049,  2055,  2061,  2074,  2086,  2087,  2088,
    2091,  2099,  2105,  2118,  2119,  2119,  2123,  2124,  2127,  2128,
    2129,  2133,  2134,  2134,  2138,  2146,  2156,  2157,  2158,  2159,
    2160,  2163,  2163,  2166,  2167,  2170,  2180,  2193,  2194,  2194,
    2197,  2198,  2199,  2200,  2203,  2207,  2208,  2209,  2210,  2216,
    2219,  2225,  2230,  2236,  2240,  2240,  2245,  2246,  2248,  2249,
    2253,  2254,  2258,  2259,  2260,  2263,  2264,  2265,  2266,  2270,
    2271,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2286,
    2294,  2303,  2304,  2305,  2309,  2320,  2332,  2343,  2358,  2363,
    2367,  2368,  2372,  2374,  2376,  2378,  2382,  2383,  2389,  2393,
    2395,  2397,  2399,  2401,  2406,  2410,  2411,  2415,  2424,  2437,
    2438,  2446,  2454,  2462,  2463,  2464,  2465,  2466,  2467,  2469,
    2471,  2475,  2476,  2479,  2494,  2501,  2516,  2529,  2544,  2557,
    2558,  2559,  2562,  2563,  2566,  2567,  2568,  2569,  2570,  2571,
    2572,  2573,  2574,  2576,  2578,  2580,  2582,  2584,  2588,  2589,
    2592,  2593,  2596,  2597,  2600,  2601,  2602,  2603,  2604,  2605,
    2606,  2607,  2608,  2609,  2610,  2611,  2612,  2613,  2614,  2615,
    2616,  2617,  2620,  2621,  2624,  2624,  2634,  2635,  2636,  2637,
    2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2652,  2653,
    2654,  2655,  2656,  2657,  2658,  2659,  2660,  2661,  2662,  2663,
    2664,  2665,  2666,  2667,  2668,  2669,  2670,  2671,  2672,  2675,
    2676,  2677,  2680,  2681,  2684,  2685,  2686,  2689,  2690,  2691,
    2695,  2696,  2697,  2698,  2699,  2700,  2701,  2702,  2703,  2704,
    2705,  2706,  2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,
    2715,  2716,  2717,  2718,  2719,  2720,  2721,  2722,  2723,  2724,
    2725,  2726,  2727,  2728,  2731,  2732,  2735,  2748,  2749,  2750,
    2754,  2757,  2758,  2759,  2760,  2760,  2762,  2763,  2771,  2775,
    2781,  2787,  2794,  2801,  2807,  2813,  2820,  2829,  2830,  2833,
    2834,  2837,  2838,  2839,  2840,  2843,  2844,  2845,  2846,  2847,
    2848,  2849,  2850,  2851,  2852,  2859,  2860,  2861,  2862,  2863,
    2864,  2865,  2866,  2869,  2870,  2871,  2871,  2871,  2872,  2872,
    2872,  2872,  2872,  2872,  2873,  2873,  2873,  2873,  2873,  2873,
    2873,  2873,  2873,  2874,  2874,  2874,  2874,  2874,  2874,  2874,
    2875,  2875,  2875,  2875,  2876,  2876,  2876,  2876,  2876,  2876,
    2876,  2876,  2876,  2876,  2876,  2876,  2877,  2877,  2877,  2877,
    2877,  2877,  2877,  2877,  2878,  2878,  2878,  2878,  2878,  2878,
    2878,  2878,  2879,  2879,  2879,  2879,  2879,  2879,  2879,  2879,
    2879,  2880,  2880,  2880,  2880,  2880,  2880,  2880,  2880,  2881,
    2881,  2881,  2882,  2882,  2882,  2882,  2882,  2882,  2882,  2882,
    2883,  2883,  2883,  2883,  2883,  2883,  2883,  2884,  2884,  2884,
    2884,  2884,  2884,  2884,  2885,  2885,  2885,  2885,  2886,  2886,
    2886,  2886,  2886,  2886,  2886,  2886,  2886,  2886,  2886,  2886,
    2887,  2887,  2887,  2887,  2887,  2888,  2895,  2899,  2905,  2911,
    2917,  2929,  2933,  2939,  2947,  2948,  2951,  2952,  2953,  2954,
    2955,  2956,  2957,  2964,  2968,  2976,  2977,  2980,  2981,  2982,
    2985,  2989,  2995,  3004,  3012,  3023,  3027,  3036,  3037,  3041,
    3042,  3043,  3044,  3045,  3046,  3047,  3048,  3051,  3055,  3061,
    3071,  3078,  3085,  3093,  3103,  3104,  3105,  3108,  3109
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
  "UNTIL", "POLICY", "SECURITY", "PERMISSIVE", "RESTRICTIVE",
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
     615,   616,   617,   618,   619,   620,    59,    46,    40,    41,
      44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   383,   384,   384,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   386,   385,   387,   385,   388,   385,
     389,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   390,   390,   391,   391,   392,   385,   385,   385,   393,
     385,   385,   385,   385,   385,   394,   394,   395,   385,   396,
     385,   397,   385,   398,   385,   399,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   400,   385,   401,   385,
     402,   385,   403,   385,   404,   385,   405,   385,   406,   385,
     407,   385,   408,   385,   409,   385,   410,   385,   411,   385,
     412,   385,   413,   385,   414,   385,   415,   385,   416,   385,
     417,   385,   418,   385,   419,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   420,   420,   420,   385,   385,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   385,   385,   385,   385,
     422,   422,   385,   385,   385,   385,   385,   385,   385,   385,
     423,   424,   424,   424,   425,   425,   426,   426,   427,   427,
     428,   428,   428,   429,   429,   430,   430,   431,   431,   432,
     432,   433,   433,   434,   434,   435,   435,   436,   436,   437,
     437,   437,   438,   438,   438,   438,   439,   439,   439,   439,
     439,   440,   440,   441,   441,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   443,   443,   443,   444,   445,   445,
     445,   446,   446,   447,   447,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   450,   449,   451,   451,   452,   452,
     452,   452,   452,   453,   453,   453,   454,   454,   455,   455,
     456,   456,   456,   457,   457,   458,   458,   459,   459,   459,
     459,   460,   460,   461,   461,   462,   423,   463,   464,   464,
     464,   464,   463,   465,   465,   466,   466,   463,   423,   467,
     467,   468,   468,   468,   423,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     470,   470,   470,   471,   471,   471,   471,   423,   472,   423,
     473,   473,   474,   474,   475,   475,   475,   475,   475,   423,
     423,   423,   476,   476,   477,   477,   478,   478,   423,   479,
     423,   480,   480,   423,   423,   423,   481,   482,   482,   482,
     483,   483,   483,   483,   483,   483,   484,   484,   485,   485,
     486,   486,   487,   487,   488,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   490,   490,   490,
     423,   491,   491,   492,   493,   492,   494,   494,   495,   495,
     495,   496,   497,   496,   498,   498,   499,   499,   499,   499,
     499,   500,   500,   501,   501,   502,   502,   503,   504,   503,
     505,   505,   505,   505,   491,   506,   506,   506,   506,   423,
     507,   507,   507,   423,   509,   508,   510,   510,   511,   511,
     512,   512,   513,   513,   513,   514,   514,   514,   514,   515,
     515,   516,   516,   516,   516,   516,   516,   516,   516,   423,
     517,   518,   518,   518,   519,   519,   519,   519,   423,   423,
     520,   520,   423,   423,   423,   423,   521,   521,   423,   522,
     522,   522,   522,   522,   423,   523,   523,   423,   524,   525,
     525,   524,   524,   526,   526,   526,   526,   526,   526,   526,
     526,   527,   527,   528,   528,   524,   524,   524,   524,   529,
     529,   529,   530,   530,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   532,   532,
     533,   533,   534,   534,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   536,   536,   537,   531,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   539,
     539,   539,   540,   540,   541,   541,   541,   542,   542,   542,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   544,   544,   545,   546,   546,   546,
     423,   547,   547,   547,   548,   548,   549,   549,   423,   550,
     550,   550,   550,   550,   550,   550,   550,   551,   551,   552,
     552,   553,   553,   553,   553,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   555,   555,   555,   555,   555,
     555,   555,   555,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   423,   557,   557,   557,
     557,   423,   558,   558,   559,   559,   560,   560,   560,   560,
     560,   560,   560,   423,   561,   562,   562,   563,   563,   563,
     423,   564,   564,   423,   423,   423,   565,   566,   566,   567,
     567,   567,   567,   567,   567,   567,   567,   423,   568,   568,
     423,   423,   423,   423,   569,   569,   569,   570,   570
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
#define YYPACT_NINF -1682
static const yytype_int16 yypact[] =
{
   12036,   -87,  -110,   498,  1536,   517, -1682,   -69, -1682,   573,
     586,   560,   254,   270, -1682,    28, -1682,   351,   576,   108,
     674,   302, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682,   693,   714,   727,   729,   370,   546,   610,   764,
     626,   773,   483,   776,   778,   802,   610, -1682,   570,   666,
     610,   571, -1682,    34,    78,   105,   822,   139,   147,   835,
     426,   446,   448,   588,   672,   465, -1682, -1682,   845,   849,
     588,   493,   100,   479, -1682,  6565,   853,   577,    52, -1682,
     861, -1682, 12036,    72,    69,     3,    43,   503,    38,   341,
     601,   881,   854,   910,   540,   750,   488,   658,   557,   496,
     756,   950, -1682,   487,   957,   610,   589,   603,   993, -1682,
   -1682, -1682,  -109, -1682,   753, -1682,   755, -1682, -1682,   757,
   -1682,   766,   824, -1682,   782,    32,   800, -1682,   806, -1682,
   -1682, -1682, -1682, -1682,  1087, -1682,  1092, -1682,   868,  1119,
   10325, 10325, -1682, -1682,  1129,   250, -1682, -1682, -1682, -1682,
    1144, 10325, 10325, 10325, -1682, -1682, -1682,  7693, -1682, -1682,
     788, -1682, -1682, -1682,   807, -1682, -1682, -1682, -1682, -1682,
   -1682,  1160,   832,   843,   859,   884,   921,   938,   956,   958,
     959,   961,   962,   966,   967,   968,   983,   985,   989,   990,
     995,   997,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1040,  1041, -1682, -1682,  1042,
    1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1054,
    1055,  1056,  1057,  1058,  1059,  1083,  1085,  1086,  1088,  1093,
    1094,  1101,  1103,  1105,  1106,  1107,  1111,  1113,  1114,  1115,
    1123,  1124,  1125,  1126,  1127,  1128, 10325, 12454,  -114, -1682,
     866,   622,   623,    44,  1131,  1265,  1132,    45,  -160,   580,
   -1682,  1239, -1682,  1239, -1682, -1682,  1289,  1295, -1682, -1682,
   -1682, -1682,   111,   121,   429,    97,   430,   133,   102,  1307,
    1147,  1227,    66,  1464, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682,   275, -1682,  1467,  1504, -1682, -1682, 12093,  1321,
      86,  1509,  1325,  1243,  1515,    86, -1682, -1682,   -13,  1516,
   -1682,  1330,   492,  1248, -1682,  1527,  1531,   -31,  1512, -1682,
     203,  -149,    52,  1532,  1539,  1540,  1541,  1544,  1545,  1546,
   -1682, -1682, -1682,  1547,  1548,  -136, -1682,  1549,   130, 12577,
   12577, -1682,  1550, 10325, 10325,   979,   979,  1520, 10325,  1799,
      31,  1552,  1555,  1179, -1682, 10325,  6941, 10325, 10325, 10325,
   10325, 10325, 10325, 10325, 10325, 10325,  1182, 10325, 10325, 10325,
   10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325,
   10325, 10325,  1183, 10325, 10325, 10325,  1184, 10325, 10325, 10325,
   10325, 10325, 10325,  8069, 10325, 10325, 10325, 10325, 10325, 10325,
   10325, 10325, 10325, 10325,  1186,  1187,  1188,  1189,  1193, 10325,
   10325,  1194,  1195,  1196, 10325, 10325,  1573,  1207,  1212, 10325,
   10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325,
   10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325,
   10325,  1214, 10325, 10325, 10325,  1217,  2193, -1682, 10325, 10325,
   10325, 10325, 10325,    50,  1220,   631, 10325,  7317, 10325, 10325,
   10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325, 10325,
   10325,  1598, -1682,    52,  1603, 10325,  1604,  1607,   -46, -1682,
     149, 10325,  1233,   278,  1611,    52, -1682, -1682, -1682,   352,
   -1682,    52,  1461,  1441, -1682,  1629,  1632, -1682, -1682,  1633,
    1634,  1635,  1640,  1644,  1645, -1682,  1646,  1647,  1648,  1649,
   12093,  1651,  1424,  1660,  1663,  1666,  1670,  1668,  1306,  1674,
      17,   495,  1680, -1682, -1682, -1682, -1682,   476,  1308,  1309,
   -1682, -1682,  1310,  1310,  1310,  1310,  1310, -1682,  1310, -1682,
    1311,  1310,  1310,  1310,  1636, -1682,  1636, -1682,  1310,  1310,
    1310,  1312,  1636,  1310,  1636, -1682, -1682, -1682, -1682, -1682,
    1313,  1314, -1682,   641,  1691, 12093,  1692,  1693,  1694,  1319,
    1320, -1682,  -100,  1696,  1698,  1517,  1326, -1682, -1682, -1682,
    1518,  1662,  1706,  1521,  1437,  1710,    66,   -97, -1682,   359,
   -1682, -1682,    53, -1682, 10325,  1526,    52,   -96,   603, -1682,
   -1682, -1682, -1682, -1682, -1682,    32, -1682,  1715,  1716,   -62,
   -1682,  1715,   280, -1682,  2834, -1682,  1341, 12577, 11979,   371,
   -1682, 10325, 10325, -1682,  1343, -1682, 10325,  1492,   679, -1682,
   -1682, -1682,  2536,  8445,  3177,  3520,  3863,  2879,  3222,  3565,
    3908,  4251,  4594, -1682,  4206,  4549,  4892,  5235,  4937,  5578,
    5921,  6264,  5280,  5623,  5966,   963,  6309,  8938,  6734, -1682,
    8990,  9034,  9220, -1682, 12498,  6788,  6957,  7006,  7031,  8850,
    1348,  9308,  9333,  9366,  9406,  9590,  9638,  9670,  9695,  7056,
    7110,  7151, -1682, -1682, -1682, -1682, -1682,  9742,  7349,  1386,
    1388,  1390,  1022,  1089,  1356,  1398,  1399,  7394,  9782,  9965,
   10014, 10057, 10082, 10118, 10158, 10341,  7419,  7444,  7486,  7533,
    7712,  7766,  7791,  7816,  1120, 10390, 10419, 10444,  7862, -1682,
    1148, 10494,  7904, -1682, -1682, 12601,  7079,  6656,  8961,  8961,
   -1682,    63, -1682, -1682,  1508, 10325, 10325,  1366, 10325, 12525,
    1367,  1368,  1369, 10325,  1328,  1038,   877,   991,   637,   637,
     741,   741,   741,   741,   645,  1520,  1520,   591, -1682,   -96,
    1620, -1682, -1682,  1371,   149,  1595,  1596,  1597, -1682,  1492,
     -46, 10534, -1682, -1682,    15,   162,   580,  1441,  1441,  1599,
    1567,    52, -1682,  1605, -1682, -1682,    -4, 12093, 12093,  1756,
   -1682,  1551, -1682, -1682, -1682,  1553,  1726, 12093,  1759,  1525,
    1529, -1682, -1682, -1682, -1682, -1682, -1682,  1760, -1682,  1765,
   -1682, -1682,    86,    86,  1766, -1682, -1682, -1682, -1682, -1682,
   -1682,  1768, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682,  1768, -1682, -1682, -1682,  1769,  1772,  1578,  1392,  1400,
   10325,  1401,  1726, 12093, 12093, 12093,  1574,    86,  1522,   119,
     -88,  1591,  1779,   136,  1786,   504,  1658,   -86,  1789,  1790,
    1606, -1682, -1682,  1707,  1792,   399, -1682,  1239, -1682,  1794,
   -1682, -1682, -1682,   -22, 12577,  1742,  1627,   -96, -1682, -1682,
   -1682,  1781,  -140, -1682,   362,  1425, -1682,  -140,  1425,  1610,
   10325, -1682, 10325, -1682, 10325, 12354, 12009,  1720,  8086,  1451,
    1426, 10325, 10325, -1682, 10325, 12290,  1652,  1652, 10325, -1682,
   -1682, -1682, -1682, -1682, -1682, 10325, 10325, 10325, 10325, -1682,
   10325, 10325, 10325, -1682, -1682, -1682, -1682, 10325, 10325, -1682,
   10325, -1682, -1682, -1682, 12093, 12093, 10325, 10325, 10325,  1830,
   -1682,  1493,  1494,  1495,  1496,  1498,  1499, -1682, -1682, -1682,
   10325, 10325, 10325, -1682, 10325,  1465,  1473,  1476,  1500,  1840,
    1513,  1851,  1519,  1479,  1480, 10325, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, 10325, 10325, 10325, 10325, 10325, 10325,
   10325, 10325, -1682, 10325, -1682, -1682, -1682, 10325, -1682, 10325,
   -1682, 10325, -1682, -1682, 10325,  1492,  8961,  8961,  1625, 12551,
   10325, -1682, 10325, 10325,  1492, -1682,  1728,    52,  1857,   -46,
    1730,  1730,  1730,  1485, -1682,   513, 10325,  1862,  1865,  1526,
   -1682, -1682,    52, 10325,   282,    52,  1491,  1713,  1714,  1497,
    1726,  1726, 12093, -1682, -1682, 12035,  1726, -1682,  1869,  1870,
   -1682, -1682,  1501,  1502,   374,   -75,   668,   -75,   -75, -1682,
     386,   -75,   -75,   -75,   668,   668,   -75,   -75,   -75,   404,
     668,   -75,   668,  1503,  1505,  1803, -1682, 10325, 12577,   119,
    1726,  1726,  1726,   670, -1682,  1507, -1682,  1528,  1535,  1537,
    1538,   407, -1682,  1615,   119,  1874,   251,  1825, -1682,  1746,
   -1682, -1682,    -6,  1655,  1622,   119,   252,  1705,  1883,  1894,
    -117,  1895,  1542,  1748,   364,  1543,  1554,  1750,  1556,   410,
   -1682,  1900,  1492, -1682, -1682,  1910,   -20,  1911,  1914,  1915,
    1557,    29, -1682,  1561, -1682,   643, 10325,  1718, -1682,  8821,
    1767,  1922, -1682, -1682,  1923,  9197,  -128, -1682,  -128, -1682,
   -1682, 12577, 12379, -1682, 10325,  1564, 10325, -1682, -1682,  8910,
    1177, 10703, 10325, 10325,  1565,  1569, 10728, 10760, 10790,  8154,
    8179, 10815, 10840, 10865, 10896, 10921, 10946,   -17,    20, 10971,
   10996,  8204,  1570,  1579,  1580,  1582,  1583,  1584,  1585,  1204,
    8238, 11021, 11046, -1682, -1682, -1682,  1586,   414,  1587,   417,
    1588, -1682, -1682, 11074,  8278,  8461,  8526, 11099, 11130,  8567,
    8614,  1229,  1266,  1428, 11161, 11186,  1577,  1589, 10325,  1492,
   10325,  1281,  1492, 12577,  1492,  1590,  1492,  1592,  1593,  1873,
    1811,   -96, -1682, -1682,  1774,  1601,  1602,  1608, -1682,  1930,
   12577,  1947,    42,  1627, -1682, 12577, 10325,  1609, -1682, -1682,
     282, 10325,  1614,  1619,  1967, 12035, 12035,  1726,  1788,  1972,
    1637,  1642,  1643,  1931,  1974,  1650,  1978,   127, -1682, -1682,
   -1682,  1831,  1832, -1682, 12035, -1682, -1682,  1801,   526, -1682,
    1995, -1682, -1682,  1777,  2001, -1682,  2008, -1682, -1682, -1682,
    1653, 11211,   419, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682,   537,   119,  2019,  2020,  2021,  2023, -1682,
    2035,  1667,   421,  1669,  1783,   119, -1682,  1470,  1935, -1682,
   -1682, -1682, -1682, -1682,  2045,  1791,  1671,   424,  1796,   119,
    2048,   264,  1919,   399, -1682,   379, 10325,  1675,  1677,  1681,
    2057,  2057,  1683,  1967,     7,   399, 12093, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682,    29,   427,    29,   -19,   118,  1682,
   -1682,  2148,   561, -1682, -1682, 12577,  1812,  2044, -1682, -1682,
   12577,   433, -1682,  1875, -1682, -1682, 12577,  2064, -1682, 10325,
   -1682, -1682, 10325, -1682, 11236, 11953, -1682, -1682, -1682, -1682,
   -1682, 10325, 10325, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, 10325, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, 10325, 10325, -1682, -1682,  1733,  1733,  1733, -1682,
    1735,   825, -1682,  1739,   828, -1682,  1733,  1733, -1682, 10325,
   10325, 10325, -1682, -1682, 10325, 10325, -1682, 10325, -1682, 10325,
   -1682, 10325, -1682, -1682, -1682, -1682,  1703,  1704,  1281,  1712,
    1719, -1682,  1721, -1682, -1682, 10325, 10325,  1526,  1728, -1682,
    2082,  2082,  2082,  1711, 10325, 10325,  2090,  1718, 12577,  2057,
   -1682, 11267,  2096,  2098, -1682,   455, -1682, -1682, 12035, -1682,
   -1682,  2097, 10325,  2099,  2059,    14, 10325, -1682, -1682, -1682,
   -1682, -1682, -1682,  1727,  1729,  1731, 10325, -1682, -1682, -1682,
     670,  2053, -1682,  1732,  2104, -1682,   668, -1682,   668,   668,
   10325, -1682, -1682,  2060, -1682,   462,  1736,  1740,  1741,  1734,
   -1682,   119, -1682,   119,  1743,   464,  1884, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,  1902, -1682,
    1744,  1745,  1841,   119, -1682,  1747,   471,  1749,  1861,   119,
    1867,   489,  1754,  1976,  1977,  1758, 11292,  2096,  2057,  2057,
   -1682,   491,   497,  2098,   499,   -12, -1682, -1682,  1726,   508,
   -1682, -1682, -1682, -1682,  2137, -1682, -1682,   643, 10325, 10325,
   -1682, -1682,  1761, -1682,  9573, -1682,  9949,  1764,  2063,  1718,
    1770, 11317, 11342, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, 11367, 11392, 11417,  1733,  1733,  1733,  1733,
    1733,  1733,  2491, 11445,  2089,  1955,  1955,  1955,  1733,  1776,
    1802,  1804,  1733,  1778,  1805,  1806,  1733,  1955,  1955, 11470,
   11500, 11532, 11557, 11582,  8654, 11607, 11638, -1682, -1682, -1682,
   -1682, -1682, 12410,   -85, 12577,  1627,  1811, -1682,   510,   512,
     514,  2152, 12577, 12577,  2145, -1682,   536,  2168, -1682,   550,
   -1682,   558, -1682,  2184, -1682,   562, 11663,   564,  1810,  1813,
    2032, -1682, 11688,  1814,  1815,  1816, 11713,   599, -1682,  2227,
   -1682, -1682, 11738, -1682,  2570, -1682, -1682, -1682, -1682,  2187,
     583,   678,   119, -1682, -1682,  2913,  3256,  3599,  3942,  4285,
    4628,  2139,  2194, 10325,  2125, -1682,   696,   119, -1682,   119,
    1848,   698,  2081,     7, 10325,  1850,  1858,  1967, -1682,   702,
     704,   706, -1682,  2226, -1682,   708, -1682,   181,  1860,  2237,
    2185,  2186, -1682,   528, -1682,   118, -1682, 12577, 12577,  2243,
    2245, -1682, 12577, -1682, 12577,  9197,  1871, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682,  1955,  1955,  1955,  1955,  1955,  1955,
   -1682, 10325, -1682,  2247,  2200,  1878,  1879,  1880,  1955, -1682,
    1925,  1926,  1955, -1682,  1927,  1933,  1955,  1893,  1897, -1682,
   -1682, -1682, -1682, -1682, 10325, -1682, -1682, -1682,  2066, 10325,
   -1682,  2144,  1526, -1682,  2275, -1682, -1682,  1905, 10325, -1682,
    2025,  2085,  2288, -1682,  2289, -1682, -1682,  2290,   905, -1682,
    2294, 10325, 10325, -1682, -1682, -1682, -1682, -1682, -1682,  2248,
   -1682,  4971, -1682, -1682,  5314, -1682,  1921, -1682, -1682,   713,
   -1682,  2233,  2180,  2156,  2147,  2039, -1682, -1682, 11763,  1932,
   -1682,   715,   745,   119, -1682,  1934,   308, -1682, 11788,  2096,
    2098,   747,  2108, -1682, -1682, -1682, -1682, -1682,  2304,  2308,
     385,   -67,  2116, -1682, -1682,  2295,  1937,   749,  2311,  2224,
    1940,  1941,  1944,  1945,  1946,  1950, 11816, -1682,  1951,  2327,
   -1682, -1682, -1682,  1953,  1733,  1957,  1962,  1964,  1733,  1963,
    1970,  1971, -1682, -1682, 11841, -1682, 12410,   274,  2201,  1627,
   -1682, -1682, 12577, -1682,  2352, -1682, -1682,  1979, -1682, -1682,
    1984, 11870, 11903, -1682,  5657, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682,  6000, -1682, 10325, -1682, -1682,   777,
    2359, -1682,   804,   833, -1682,  2362, -1682,  1987,  2364,  2366,
    1993,  1996,  2003, 10325,  2384, -1682,   885,   -30, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682,  2385,   118,  2009, -1682,
    1955, -1682, -1682, -1682,  1955, -1682, -1682, -1682, -1682, -1682,
    2166,  2167,  2057, -1682, -1682,  2014, -1682, -1682,   920, -1682,
    6343, -1682, -1682, 11928, -1682,  2015,  2195, -1682,   889, -1682,
   -1682, -1682,  2390,  2393,  2395, 12577,  2380, -1682,  2399, -1682,
   -1682, -1682, -1682,  2400,  2026,  1733,  1733,  2027,  1733,  1733,
    2231,  2234,  2028,  2406, -1682, -1682, -1682, -1682,  2173,  2416,
    2417,  2406,  2046,  2047,  2049, 10325, -1682,  2190,   118, -1682,
    1955,  1955, -1682,  1955,  1955, -1682, -1682, -1682,   890,  2054,
     895,  2056,   939,  2058,  2202, -1682, 12577,  2245, -1682,  2062,
    2065,  2067,  2068, -1682,  2439,  2438,  2442,  2406,  2406, -1682,
    2228,  2443,  1937, -1682, -1682, -1682, -1682,    77, -1682,  2071,
    2073,   941,   943,   109,  2449,   945, -1682, -1682,     0,  2309,
     366,    40, -1682,  2406, -1682, -1682,  2365,  2192, -1682,  2228,
   -1682, -1682,   401, -1682, -1682, -1682,   355,   365,   949,   109,
     109,  2287, -1682, -1682, -1682, -1682, -1682, -1682,     1, -1682,
   -1682, -1682,     9, -1682,  2214, -1682, -1682, -1682, -1682,   109,
      55,  2268,  2272,  2279,  2280,  2460,  2461, -1682, -1682
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1682,  2368,   -95, -1682, -1682, -1682, -1682,  -896,  1282, -1682,
    1431, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,  1530,  2078,
   -1682,  -225,  -630,   987, -1682, -1376, -1682,   680, -1301, -1682,
   -1649, -1682, -1056, -1682,   752, -1271, -1682, -1682, -1358, -1682,
   -1682,  1968,  -287,  -279,  1959,  -510, -1682, -1682,  -299, -1682,
   -1682,   457, -1682, -1682, -1682,  1205,  -786,   279,  -159, -1682,
   -1682, -1682,  2360,  1849, -1682,  1844, -1682, -1108, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1682, -1682, -1682, -1682, -1682, -1211, -1682,  -710,
   -1682, -1682, -1682, -1682, -1682,   295,   531,  2407,  2120, -1682,
    1571, -1682,   613,  1876, -1682, -1682, -1682, -1682, -1682, -1682,
   -1682, -1682, -1112,  1138, -1682, -1682, -1682, -1682,   437, -1682,
   -1682, -1682, -1682,   663, -1682,   290, -1682,  1167,  1156, -1673,
   -1646, -1547, -1681, -1363, -1682, -1062,   376,   166,   -42,  -841,
    -437,  1661, -1135, -1682, -1682, -1682,  2369, -1682,  -334, -1682,
    1684,  1023, -1146, -1682, -1682, -1682, -1682,  1969, -1682, -1682,
   -1682, -1682, -1682,  2181, -1682, -1682, -1469, -1682
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -708
static const yytype_int16 yytable[] =
{
     287,  1322,  1497,  1273,   536,  1364,   518,   918,  1285,  1286,
    1714,   616,  1726,  1712,  1304,   513,  1342,   878,   523,    74,
     362,   820,   846,  1722,  1054,  1094,  1095,  1357,  1805,  1877,
     901,  1100,  1349,  1102,  1180,  1056,    91,   127,   514,   312,
    1875,   324,   325,   326,   327,   328,   329,   487,   293,  1385,
     901,  -707,  1170,  2149,   878,   293,   770,   910,  1154,  2271,
    1379,  1869,  1495,    75,  1170,   379,   380,  1066,   771,  1032,
    1155,   313,   522,   524,  1506,  1507,   385,   386,   387,    76,
     805,   133,   389,   637,   558,  1819,  1723,   617,   511,   605,
    2240,   320,   902,  1529,  1350,  2228,   314,   647,   630,   370,
     545,   806,   606,   162,   315,   552,  1156,  2265,   135,  1154,
     636,    99,   902,   836,  1157,  2267,   316,  1916,  1917,   306,
     307,  1155,  1116,  1067,   541,    52,    77,  2236,  1927,  1928,
    2090,  1518,  1519,  1520,  1521,    55,   550,   618,  1246,   308,
    2246,  1806,   138,    78,  1351,    79,  1766,  1767,   660,   661,
     140,    80,   487,  1878,   901,  1777,  1778,  1156,    53,   888,
    1722,   546,   310,   128,  1158,  1157,   553,  2229,   882,  1046,
     634,  1123,    16,  1134,   547,   539,    81,  1311,  1879,   554,
    1127,   129,   311,   317,  1938,  1059,  2007,  2266,   540,  1128,
    1068,   486,  1522,   511,  2091,  2268,   100,  1312,   542,  2229,
    1556,  2008,   925,   130,   318,   294,   163,   631,  1820,  1880,
     551,   295,   294,  1159,   807,  1158,   902,  1177,   295,  1179,
     525,  2150,  1380,  1723,   330,  1508,  1545,   134,  1352,   607,
     131,   363,  2272,   810,   799,   371,   772,  1555,   619,  1716,
    1171,  -707,   648,   559,   321,  1353,   903,  1160,    92,  1033,
    1069,  1696,  1402,  2230,   136,  2020,  2021,  2022,  2023,  2024,
    2025,  1363,  2241,  1263,  1159,   319,   515,  2231,  1821,  2033,
    1897,   363,  1719,  2037,   608,   309,    54,  2041,   889,    16,
     904,   905,   911,   912,   525,  2230,   847,  1168,   139,   657,
    1124,  2247,  1135,   658,    82,  1939,   141,  1814,   662,  2231,
     668,   672,   674,   675,   676,   677,   678,   679,   680,   681,
     682,  1064,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,  2083,   700,   701,
     702,  1881,   704,   705,   706,   707,   708,   709,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,  1877,
    1870,  1871,  1476,  2082,   727,   728,  1161,   917,  1724,   732,
     733,   773,  1429,   651,   737,   738,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   755,   756,   757,   758,  1829,   760,   761,   762,
    1070,  1071,  1057,   765,   766,   767,   768,   769,  1834,  1430,
    1076,   779,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,  1937,   331,   296,  1496,
     287,   517,  2255,   297,   926,   296,   811,   929,   634,   143,
     297,  1795,  2259,  1845,   560,   561,   562,   563,  1117,  1118,
    1119,  1120,   940,  1840,  1846,  1841,  1110,  1111,  1112,   145,
    1702,   147,  1523,  1524,  1525,  1904,  1905,  1906,  1907,  1908,
    1909,  2154,  -355,  1141,  1847,  2157,  1403,  1918,  1404,   634,
    1142,  1922,  1276,   334,  1536,  1926,  1538,  1539,  1848,   324,
     325,   326,   327,   328,   329,  2088,   115,  1849,   933,   934,
     351,   342,  2253,   543,   548,   623,  2243,  2120,  1879,    88,
     848,    56,   160,   121,  2001,  1526,  1703,   124,   648,  2013,
    1344,  1358,  1368,   161,    16,    89,  -317,  1049,  1082,  1083,
      72,  1369,   817,  1698,  1941,  2121,  1143,  1850,  2223,  1880,
    1144,  2199,  2200,   346,  2201,  2202,   335,  1207,  1208,   914,
    2256,  1277,  1058,  2254,   928,    90,  1288,  1145,   347,    97,
    2260,   849,  1274,  2249,  2250,  1280,  1146,   534,  2257,  2244,
     818,   116,   355,    86,  1730,   352,   935,   936,  2261,  1290,
    1531,   938,  1291,  1704,  1292,   144,    84,  1293,   945,  1532,
     358,  1543,  2269,  -355,  1053,  1856,    87,  1731,  2258,    85,
    1544,  1861,  1294,  1147,  2245,   146,    96,   148,  2262,  1295,
    1296,   488,   489,   490,   491,   492,   493,   494,  1152,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  2192,   510,  2089,   382,   383,  1345,
    1359,  1488,   117,  1705,  1297,  1287,   353,   343,   662,   544,
     549,   624,  1699,  1969,   775,   776,  1387,   777,  1388,   526,
     778,  1881,  1970,  1148,   566,   567,  1883,   813,   525,   877,
    2221,  2222,   330,   503,   504,   505,   506,   507,   508,   509,
    2119,   510,  -476,   149,   101,   878,   508,   509,   102,   510,
    1036,  1037,  1971,  1039,   149,  1299,  2248,  1974,   486,   488,
     489,   490,   491,   492,   493,   494,   104,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   879,   510,  1300,  -476,   150,   105,  -480,  -477,
    1130,  1131,  1301,  -476,   291,  1323,   527,   150,  1997,  1324,
     106,  2152,   107,  2110,  1979,   151,  -323,  2114,   908,   909,
     152,  1173,  1174,  1313,  1314,  -476,   292,   880,   108,  1991,
     528,  1992,   867,  1309,  1310,   109,  1269,   153,   872,   110,
     874,  -480,  -477,   529,  2162,  1315,  1316,   112,  1261,  -480,
    -477,   507,   508,   509,   113,   510,   114,  1325,  2124,   118,
    1326,   119,  1302,  1317,  1316,  1108,  1339,  1340,   530,  1374,
    1375,  -480,  -477,  1450,  1451,  1327,  1453,  1454,  1542,  1340,
    1552,  1340,  2198,  1694,  1340,   120,  1720,  1386,   941,   122,
    1247,   531,  1735,  1736,   123,  1328,   125,  1087,  1088,  1258,
    1091,  1092,  1093,  1329,  2064,   137,  1096,  1097,  1098,  1770,
    1771,  1101,  1774,  1775,  1812,  1813,   155,  1181,   142,  1182,
    2074,  1835,  1340,  1843,  1340,   156,  1189,  1190,   157,  1191,
    1858,  1340,   158,  1196,  2180,  2181,   290,  2183,  2184,   164,
    1197,  1198,  1199,  1200,   304,  1201,  1202,  1203,  1863,  1375,
    1872,  1873,  1204,  1205,   336,  1206,  1874,  1873,  1876,  1813,
     323,  1209,  1210,  1211,   337,  2079,  2049,  1884,  1386,  1943,
    1944,  1945,  1944,  1946,  1944,  1219,  1220,  1221,   338,  1222,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1233,   510,  1330,   339,  1331,  1949,  1873,  2130,   340,  1234,
    1235,  1236,  1237,  1238,  1239,  1240,  1241,  1377,  1242,  1951,
    1952,   344,  1243,  1332,  1244,   345,  1245,  1953,  1954,  1718,
     341,  1956,  1957,  1959,  1960,  1251,   349,  1253,  1253,   856,
     857,   858,   859,   350,   860,  2058,  2059,   862,   863,   864,
     354,  1270,  1977,  1340,   868,   869,   870,   356,  1275,   873,
    2164,  2165,  1045,   488,   489,   490,   491,   492,   493,   494,
     358,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   360,   510,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1321,   510,   368,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1477,   510,   364,  1479,   365,  1480,
     366,  1482,   488,   489,   490,   491,   492,   493,   494,   367,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   369,   510,  1978,  1340,   942,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1391,   510,   373,  1395,  1990,  1340,  1994,  1340,   374,
    1400,  2002,  1952,  2003,  1873,  2004,  1873,  2006,  1954,  1406,
     375,   938,  2068,  1340,  2077,  1340,   376,  1414,  1415,   488,
     489,   490,   491,   492,   493,   494,   377,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   378,   510,  2078,  1340,  2084,  1813,  2095,  1736,
     488,   489,   490,   491,   492,   493,   494,    91,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   384,   510,  1478,  2134,  1340,   488,   489,
     490,   491,   492,   493,   494,   391,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1498,   510,  2136,  1952,   392,  1501,   488,   489,   490,
     491,   492,   493,   494,   393,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     394,   510,  2137,  1954,   488,   489,   490,   491,   492,   493,
     494,   395,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   396,   510,   488,
     489,   490,   491,   492,   493,   494,   516,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   397,   510,  2147,  2148,  2170,  2171,   520,  2203,
    2204,  1706,  2206,  2207,  1060,  1061,   488,   489,   490,   491,
     492,   493,   494,   534,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   398,
     510,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1741,   510,   399,  1742,  2209,  2204,
    2234,  2204,  2235,  2204,  2238,  2239,  1753,  1754,  2263,  2204,
    1266,  1267,  1799,  1800,   400,   537,   401,   402,  1755,   403,
     404,   538,   966,   967,   405,   406,   407,  1762,  1763,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   408,   510,   409,  1779,  1780,  1781,   410,   411,  1782,
    1783,   555,  1784,   412,  1785,   413,  1786,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
    1792,  1794,   427,   428,   429,   430,   431,   432,   433,  1802,
    1803,   998,   999,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   556,  1816,   447,   448,
     449,  1822,   450,   451,   452,   453,   454,   455,   456,   457,
     458,  1826,   459,   460,   461,   462,   463,   464,   488,   489,
     490,   491,   492,   493,   494,  1832,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   465,   510,   466,   467,   557,   468,   565,  1000,  1001,
     568,   469,   470,  1557,  1558,  1559,  1560,  1561,  1562,   471,
    1563,   472,  1564,   473,   474,   475,  1565,  1566,  1567,   476,
    1568,   477,   478,   479,  1569,  1570,  1571,  1572,  1573,  1022,
    1023,   480,   481,   482,   483,   484,   485,   569,  1574,   519,
     521,   604,   612,  1575,  1576,   613,   614,  1577,   615,   621,
     622,   625,  1578,  1579,  1580,  1581,  1582,  1028,  1029,  1583,
     627,  1584,  1585,  1586,   628,   638,  1587,  1588,   633,  1589,
    1590,  1591,   639,   640,   641,  1592,    57,   642,   643,   644,
     645,   646,   650,   653,   510,   663,  1411,  1412,   664,  1593,
     665,   683,   699,   703,  1594,   722,   723,   724,   725,  1595,
    1596,  1597,   726,   729,   730,   731,  1598,  1599,   734,  1600,
    1601,  1602,  1603,  1441,  1442,  1604,   735,  1605,  1606,  1607,
    1608,   736,  1609,   759,  1610,  1611,   763,  1612,   774,  1613,
    1614,   798,  1615,  1616,  1617,  1618,   800,   802,  1466,  1467,
     804,  1619,   812,  1620,   814,  1621,  1622,   821,  1623,  1624,
    1625,  1626,  1627,  1628,    58,  1629,  1630,  1631,  1632,  1633,
     822,    59,   824,  1887,  1888,   825,   826,   827,   828,  1892,
    1634,  1894,  1635,   829,  1636,  1468,  1469,   830,   831,   832,
     833,   834,   835,  1637,   837,  1638,  1639,  1640,  1641,  1642,
    1643,  1644,   838,   839,  1645,  1646,   840,    60,    61,   841,
    1647,   843,  1648,  1649,  1650,   842,  1651,   844,  1652,   845,
    1653,  1654,  1655,  1656,    62,   850,   852,   853,   854,   861,
     871,   875,   876,   865,   881,   883,   884,   885,   886,   890,
     887,   891,  1657,  1658,  1659,   893,   895,   892,   894,   897,
     899,   898,  1660,   900,  1661,  1662,  1663,   915,   921,   923,
     931,  1664,   937,  1665,  1666,  1667,    16,   981,   995,  1668,
     996,    63,   997,  1669,  1670,  1002,  1671,  1672,  1673,  1674,
    1003,  1004,   -71,  1675,  1038,  1041,  1042,  1043,    64,  1047,
      65,  1048,  1050,  1051,  1052,  1062,    66,  1063,  1988,  1072,
     878,  1065,  1077,  1078,  1105,  1080,  1073,  1079,  1074,  1998,
    1081,  1084,  1089,  1106,  1103,    67,    68,  1104,  1107,  1109,
    1113,  1125,  1126,  1115,  1676,  1677,  1678,  1679,  1680,  1129,
      69,  1132,  1136,  1137,  1139,  1140,  1138,  1153,  1165,  1166,
    1400,  1169,  1170,  1175,  1185,  1188,  1193,  1470,  1471,   488,
     489,   490,   491,   492,   493,   494,  2026,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1187,   510,  1212,  1213,  1214,  1215,  1216,  2044,
    1217,  1218,  1226,  1223,  2046,  1227,  1681,  1682,  1683,  1684,
    1685,  1224,  1686,  2052,  1225,  1228,  1229,  1231,  1232,   -73,
    1262,  1230,  1259,  1264,  1268,  1271,  2061,  2062,  1272,  1281,
    1282,  1283,  1305,  1306,  1320,  1284,  1341,  1343,  1346,  1348,
    1307,  1308,  1318,  1356,  1319,  1334,  1361,  1557,  1558,  1559,
    1560,  1561,  1562,  1354,  1563,  1360,  1564,  1362,  1365,    70,
    1565,  1566,  1567,  1376,  1568,  1367,  1335,  1372,  1569,  1570,
    1571,  1572,  1573,  1336,  1378,  1337,  1338,  1381,  1382,  1383,
    1366,  1370,  1574,  1392,  1396,  1397,  1398,  1575,  1576,  1485,
    1489,  1577,  1371,  1493,  1373,  1384,  1578,  1579,  1580,  1581,
    1582,  1386,  1407,  1583,  1416,  1584,  1585,  1586,  1417,  1434,
    1587,  1588,  1486,  1589,  1590,  1591,  1474,  1435,  1436,  1592,
    1437,  1438,  1439,  1440,  1449,  1452,  1455,  1494,  1475,  1481,
    1504,  1483,  1484,  1593,  1509,  1510,  1514,  1515,  1594,  1490,
    1491,  2133,  1517,  1595,  1596,  1597,  1492,  1499,  1527,  1528,
    1598,  1599,  1502,  1600,  1601,  1602,  1603,  1503,  2145,  1604,
    1533,  1844,  1606,  1607,  1608,  1535,  1609,  1530,  1610,  1611,
    1534,  1612,  1537,  1613,  1614,  1511,  1615,  1616,  1617,  1618,
    1512,  1513,  1546,  1547,  1548,  1619,  1549,  1620,  1516,  1621,
    1622,  1540,  1623,  1624,  1625,  1626,  1627,  1628,  1550,  1629,
    1630,  1631,  1632,  1633,  1554,  1551,  1688,  1553,  1689,  1693,
    1691,  1697,  1700,  1707,  1634,  1708,  1635,  1695,  1636,  1709,
    1710,  1713,  1727,  1733,  1734,  1738,   388,  1637,  1740,  1638,
    1639,  1640,  1641,  1642,  1643,  1644,  1764,  1769,  1645,  1646,
    2196,  1773,  1787,  1788,  1647,  1797,  1648,  1649,  1650,  1801,
    1651,  1789,  1652,  1804,  1653,  1654,  1655,  1656,  1790,  1808,
    1791,  1810,  1815,  1818,  1817,  1823,  1828,  1824,  1831,  1825,
    1854,  1830,  1851,  1833,  1839,  1836,  1657,  1658,  1659,  1837,
    1838,  1842,  1860,  1853,  1852,  1857,  1660,  1859,  1661,  1662,
    1663,  1862,  1864,  1865,  1866,  1664,  1867,  1665,  1666,  1667,
    1885,  1889,  1895,  1668,  1896,  1913,  1914,  1669,  1670,  1898,
    1671,  1672,  1673,  1674,  1919,  1947,  1923,  1675,   488,   489,
     490,   491,   492,   493,   494,  1948,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1920,   510,  1921,  1924,  1925,  1950,  1955,  1961,  1963,
    1976,  1962,  1986,  1965,  1966,  1967,  1989,  1987,  1676,  1677,
    1678,  1679,  1680,   488,   489,   490,   491,   492,   493,   494,
    1995,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  1993,   510,  1999,  2005,
    1557,  1558,  1559,  1560,  1561,  1562,  2000,  1563,  2009,  1564,
    2010,  2011,  2012,  1565,  1566,  1567,  2014,  1568,  2015,  2018,
    2027,  1569,  1570,  1571,  1572,  1573,  2029,  2030,  2031,  2032,
    1681,  1682,  1683,  1684,  1685,  1574,  1686,  2035,  2036,  2039,
    1575,  1576,  2042,  2045,  1577,  2040,  2043,  2047,  2050,  1578,
    1579,  1580,  1581,  1582,  2051,  2054,  1583,  2053,  1584,  1585,
    1586,  2055,  2056,  1587,  1588,  2057,  1589,  1590,  1591,  2060,
    2067,  2063,  1592,  2069,  2070,  2071,  2072,  2073,  2085,  2086,
    2076,  2087,  2080,  2092,  2096,  2093,  1593,  2094,  2097,  2099,
    2100,  1594,  1728,  2101,  2102,  2103,  1595,  1596,  1597,  2104,
    2107,  2106,  2109,  1598,  1599,  2111,  1600,  1601,  1602,  1603,
    2112,  2115,  1604,  2113,  1972,  1606,  1607,  1608,  2116,  1609,
    2117,  1610,  1611,  2122,  1612,  2125,  1613,  1614,  2126,  1615,
    1616,  1617,  1618,  2127,  2135,  2138,  2139,  2140,  1619,  2141,
    1620,  2142,  1621,  1622,  2143,  1623,  1624,  1625,  1626,  1627,
    1628,  2144,  1629,  1630,  1631,  1632,  1633,  2146,  2151,  2153,
    2160,  2161,  2163,  2172,  2168,  2169,  2173,  1634,  2174,  1635,
    2175,  1636,  2176,  2178,  2185,  2179,  2182,  2186,  1873,  2187,
    1637,  2189,  1638,  1639,  1640,  1641,  1642,  1643,  1644,  2190,
    2191,  1645,  1646,  2197,  2211,  2193,  2194,  1647,  2195,  1648,
    1649,  1650,  2205,  1651,  2208,  1652,  2210,  1653,  1654,  1655,
    1656,  2213,  2218,  2219,  2214,  2220,  2215,  2216,  2227,  2224,
    2232,  2233,  2237,  2242,  2264,  2240,  2251,  2270,  2273,  1657,
    1658,  1659,  2274,  2275,  2276,  2277,  2278,   659,  1408,  1660,
     305,  1661,  1662,  1663,  1257,  1796,  1942,  1195,  1664,  1886,
    1665,  1666,  1667,   801,   816,  1500,  1668,   919,   361,   920,
    1669,  1670,  2212,  1671,  1672,  1673,  1674,   159,   652,  1178,
    1675,   488,   489,   490,   491,   492,   493,   494,  2017,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1721,   510,  1996,   927,  1729,  2252,
    1701,  1717,  1099,   381,     0,   626,   851,     0,     0,     0,
       0,  1676,  1677,  1678,  1679,  1680,   488,   489,   490,   491,
     492,   493,   494,  1827,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,  1114,   764,  1557,  1558,  1559,  1560,  1561,  1562,     0,
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
    1601,  1602,  1603,     0,     0,  1604,     0,  1975,  1606,  1607,
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
       0,     0,  1657,  1658,  1659,     0,     0,     0,     0,     0,
       0,     0,  1660,     0,  1661,  1662,  1663,     0,     0,     0,
       0,  1664,     0,  1665,  1666,  1667,     0,     0,     0,  1668,
       0,     0,     0,  1669,  1670,     0,  1671,  1672,  1673,  1674,
       0,     0,     0,  1675,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
    1910,  1911,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1676,  1677,  1678,  1679,  1680,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,   943,  1557,  1558,  1559,  1560,
    1561,  1562,     0,  1563,     0,  1564,     0,     0,     0,  1565,
    1566,  1567,     0,  1568,     0,     0,     0,  1569,  1570,  1571,
    1572,  1573,     0,     0,     0,     0,  1681,  1682,  1683,  1684,
    1685,  1574,  1686,     0,     0,     0,  1575,  1576,     0,     0,
    1577,     0,     0,     0,     0,  1578,  1579,  1580,  1581,  1582,
       0,     0,  1583,     0,  1584,  1585,  1586,     0,     0,  1587,
    1588,     0,  1589,  1590,  1591,     0,     0,     0,  1592,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1593,     0,     0,     0,     0,  1594,     0,     0,
       0,     0,  1595,  1596,  1597,     0,     0,     0,     0,  1598,
    1599,     0,  1600,  1601,  1602,  1603,     0,     0,  1604,     0,
    1980,  1606,  1607,  1608,     0,  1609,     0,  1610,  1611,     0,
    1612,     0,  1613,  1614,     0,  1615,  1616,  1617,  1618,     0,
       0,     0,     0,     0,  1619,     0,  1620,     0,  1621,  1622,
       0,  1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,  1630,
    1631,  1632,  1633,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1634,     0,  1635,     0,  1636,     0,     0,
       0,     0,     0,     0,     0,     0,  1637,     0,  1638,  1639,
    1640,  1641,  1642,  1643,  1644,     0,     0,  1645,  1646,     0,
       0,     0,     0,  1647,     0,  1648,  1649,  1650,     0,  1651,
       0,  1652,     0,  1653,  1654,  1655,  1656,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1657,  1658,  1659,     0,     0,
       0,     0,     0,     0,     0,  1660,     0,  1661,  1662,  1663,
       0,     0,     0,     0,  1664,     0,  1665,  1666,  1667,     0,
       0,     0,  1668,     0,     0,     0,  1669,  1670,     0,  1671,
    1672,  1673,  1674,     0,     0,     0,  1675,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,   930,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1676,  1677,  1678,
    1679,  1680,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,   949,  1557,
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
       0,  1604,     0,  1981,  1606,  1607,  1608,     0,  1609,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,  1657,  1658,
    1659,     0,     0,     0,     0,     0,     0,     0,  1660,     0,
    1661,  1662,  1663,     0,     0,     0,     0,  1664,     0,  1665,
    1666,  1667,     0,     0,     0,  1668,     0,     0,     0,  1669,
    1670,     0,  1671,  1672,  1673,  1674,     0,     0,     0,  1675,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,   946,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1676,  1677,  1678,  1679,  1680,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,   950,  1557,  1558,  1559,  1560,  1561,  1562,     0,  1563,
       0,  1564,     0,     0,     0,  1565,  1566,  1567,     0,  1568,
       0,     0,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1681,  1682,  1683,  1684,  1685,  1574,  1686,     0,
       0,     0,  1575,  1576,     0,     0,  1577,     0,     0,     0,
       0,  1578,  1579,  1580,  1581,  1582,     0,     0,  1583,     0,
    1584,  1585,  1586,     0,     0,  1587,  1588,     0,  1589,  1590,
    1591,     0,     0,     0,  1592,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1593,     0,
       0,     0,     0,  1594,     0,     0,     0,     0,  1595,  1596,
    1597,     0,     0,     0,     0,  1598,  1599,     0,  1600,  1601,
    1602,  1603,     0,     0,  1604,     0,  1982,  1606,  1607,  1608,
       0,  1609,     0,  1610,  1611,     0,  1612,     0,  1613,  1614,
       0,  1615,  1616,  1617,  1618,     0,     0,     0,     0,     0,
    1619,     0,  1620,     0,  1621,  1622,     0,  1623,  1624,  1625,
    1626,  1627,  1628,     0,  1629,  1630,  1631,  1632,  1633,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1634,
       0,  1635,     0,  1636,     0,     0,     0,     0,     0,     0,
       0,     0,  1637,     0,  1638,  1639,  1640,  1641,  1642,  1643,
    1644,     0,     0,  1645,  1646,     0,     0,     0,     0,  1647,
       0,  1648,  1649,  1650,     0,  1651,     0,  1652,     0,  1653,
    1654,  1655,  1656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1657,  1658,  1659,     0,     0,     0,     0,     0,     0,
       0,  1660,     0,  1661,  1662,  1663,     0,     0,     0,     0,
    1664,     0,  1665,  1666,  1667,     0,     0,     0,  1668,     0,
       0,     0,  1669,  1670,     0,  1671,  1672,  1673,  1674,     0,
       0,     0,  1675,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
     947,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,  1600,  1601,  1602,  1603,     0,     0,  1604,     0,  1983,
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
       0,     0,     0,     0,  1657,  1658,  1659,     0,     0,     0,
       0,     0,     0,     0,  1660,     0,  1661,  1662,  1663,     0,
       0,     0,     0,  1664,     0,  1665,  1666,  1667,     0,     0,
       0,  1668,     0,     0,     0,  1669,  1670,     0,  1671,  1672,
    1673,  1674,     0,     0,     0,  1675,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,   948,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1676,  1677,  1678,  1679,
    1680,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,   952,  1557,  1558,
    1559,  1560,  1561,  1562,     0,  1563,     0,  1564,     0,     0,
       0,  1565,  1566,  1567,     0,  1568,     0,     0,     0,  1569,
    1570,  1571,  1572,  1573,     0,     0,     0,     0,  1681,  1682,
    1683,  1684,  1685,  1574,  1686,     0,     0,     0,  1575,  1576,
       0,     0,  1577,     0,     0,     0,     0,  1578,  1579,  1580,
    1581,  1582,     0,     0,  1583,     0,  1584,  1585,  1586,     0,
       0,  1587,  1588,     0,  1589,  1590,  1591,     0,     0,     0,
    1592,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1593,     0,     0,     0,     0,  1594,
       0,     0,     0,     0,  1595,  1596,  1597,     0,     0,     0,
       0,  1598,  1599,     0,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1984,  1606,  1607,  1608,     0,  1609,     0,  1610,
    1611,     0,  1612,     0,  1613,  1614,     0,  1615,  1616,  1617,
    1618,     0,     0,     0,     0,     0,  1619,     0,  1620,     0,
    1621,  1622,     0,  1623,  1624,  1625,  1626,  1627,  1628,     0,
    1629,  1630,  1631,  1632,  1633,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1634,     0,  1635,     0,  1636,
       0,     0,     0,     0,     0,     0,     0,     0,  1637,     0,
    1638,  1639,  1640,  1641,  1642,  1643,  1644,     0,     0,  1645,
    1646,     0,     0,     0,     0,  1647,     0,  1648,  1649,  1650,
       0,  1651,     0,  1652,     0,  1653,  1654,  1655,  1656,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1657,  1658,  1659,
       0,     0,     0,     0,     0,     0,     0,  1660,     0,  1661,
    1662,  1663,     0,     0,     0,     0,  1664,     0,  1665,  1666,
    1667,     0,     0,     0,  1668,     0,     0,     0,  1669,  1670,
       0,  1671,  1672,  1673,  1674,     0,     0,     0,  1675,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,   955,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1676,
    1677,  1678,  1679,  1680,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
     953,  1557,  1558,  1559,  1560,  1561,  1562,     0,  1563,     0,
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
    1603,     0,     0,  1604,     0,  1985,  1606,  1607,  1608,     0,
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
    1657,  1658,  1659,     0,     0,     0,     0,     0,     0,     0,
    1660,     0,  1661,  1662,  1663,     0,     0,     0,     0,  1664,
       0,  1665,  1666,  1667,     0,     0,     0,  1668,     0,     0,
       0,  1669,  1670,     0,  1671,  1672,  1673,  1674,     0,     0,
       0,  1675,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,   956,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1676,  1677,  1678,  1679,  1680,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,   954,  1557,  1558,  1559,  1560,  1561,  1562,
       0,  1563,     0,  1564,     0,     0,     0,  1565,  1566,  1567,
       0,  1568,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,
       0,     0,     0,     0,  1681,  1682,  1683,  1684,  1685,  1574,
    1686,     0,     0,     0,  1575,  1576,     0,     0,  1577,     0,
       0,     0,     0,  1578,  1579,  1580,  1581,  1582,     0,     0,
    1583,     0,  1584,  1585,  1586,     0,     0,  1587,  1588,     0,
    1589,  1590,  1591,     0,     0,     0,  1592,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1593,     0,     0,     0,     0,  1594,     0,     0,     0,     0,
    1595,  1596,  1597,     0,     0,     0,     0,  1598,  1599,     0,
    1600,  1601,  1602,  1603,     0,     0,  1604,     0,  2065,  1606,
    1607,  1608,     0,  1609,     0,  1610,  1611,     0,  1612,     0,
    1613,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,     0,
       0,     0,  1619,     0,  1620,     0,  1621,  1622,     0,  1623,
    1624,  1625,  1626,  1627,  1628,     0,  1629,  1630,  1631,  1632,
    1633,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1634,     0,  1635,     0,  1636,     0,     0,     0,     0,
       0,     0,     0,     0,  1637,     0,  1638,  1639,  1640,  1641,
    1642,  1643,  1644,     0,     0,  1645,  1646,     0,     0,     0,
       0,  1647,     0,  1648,  1649,  1650,     0,  1651,     0,  1652,
       0,  1653,  1654,  1655,  1656,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1657,  1658,  1659,     0,     0,     0,     0,
       0,     0,     0,  1660,     0,  1661,  1662,  1663,     0,     0,
       0,     0,  1664,     0,  1665,  1666,  1667,     0,     0,     0,
    1668,     0,     0,     0,  1669,  1670,     0,  1671,  1672,  1673,
    1674,     0,     0,     0,  1675,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,   957,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1676,  1677,  1678,  1679,  1680,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,   959,  1557,  1558,  1559,
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
       0,     0,     0,     0,     0,     0,  1657,  1658,  1659,     0,
       0,     0,     0,     0,     0,     0,  1660,     0,  1661,  1662,
    1663,     0,     0,     0,     0,  1664,     0,  1665,  1666,  1667,
       0,     0,     0,  1668,     0,     0,     0,  1669,  1670,     0,
    1671,  1672,  1673,  1674,     0,     0,     0,  1675,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,   958,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1676,  1677,
    1678,  1679,  1680,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,   963,
    1557,  1558,  1559,  1560,  1561,  1562,     0,  1563,     0,  1564,
       0,     0,     0,  1565,  1566,  1567,     0,  1568,     0,     0,
       0,  1569,  1570,  1571,  1572,  1573,     0,     0,     0,     0,
    1681,  1682,  1683,  1684,  1685,  1574,  1686,     0,     0,     0,
    1575,  1576,     0,     0,  1577,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,     0,     0,  1583,     0,  1584,  1585,
    1586,     0,     0,  1587,  1588,     0,  1589,  1590,  1591,     0,
       0,     0,  1592,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1593,     0,     0,     0,
       0,  1594,     0,     0,     0,     0,  1595,  1596,  1597,     0,
       0,     0,     0,  1598,  1599,     0,  1600,  1601,  1602,  1603,
       0,     0,  1604,     0,  2131,  1606,  1607,  1608,     0,  1609,
       0,  1610,  1611,     0,  1612,     0,  1613,  1614,     0,  1615,
    1616,  1617,  1618,     0,     0,     0,     0,     0,  1619,     0,
    1620,     0,  1621,  1622,     0,  1623,  1624,  1625,  1626,  1627,
    1628,     0,  1629,  1630,  1631,  1632,  1633,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1634,     0,  1635,
       0,  1636,     0,     0,     0,     0,     0,     0,     0,     0,
    1637,     0,  1638,  1639,  1640,  1641,  1642,  1643,  1644,     0,
       0,  1645,  1646,     0,     0,     0,     0,  1647,     0,  1648,
    1649,  1650,     0,  1651,     0,  1652,     0,  1653,  1654,  1655,
    1656,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     510,     0,   964,  1557,  1558,  1559,  1560,  1561,  1562,     0,
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
    1601,  1602,  1603,     0,     0,  1604,     0,  2132,  1606,  1607,
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
       0,     0,  1657,  1658,  1659,     0,     0,     0,     0,     0,
       0,     0,  1660,     0,  1661,  1662,  1663,     0,     0,     0,
       0,  1664,     0,  1665,  1666,  1667,     0,     0,     0,  1668,
       0,     0,     0,  1669,  1670,     0,  1671,  1672,  1673,  1674,
       0,     0,     0,  1675,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,   961,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1676,  1677,  1678,  1679,  1680,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,   965,  1557,  1558,  1559,  1560,
    1561,  1562,     0,  1563,     0,  1564,     0,     0,     0,  1565,
    1566,  1567,     0,  1568,     0,     0,     0,  1569,  1570,  1571,
    1572,  1573,     0,     0,     0,     0,  1681,  1682,  1683,  1684,
    1685,  1574,  1686,     0,     0,     0,  1575,  1576,     0,     0,
    1577,     0,     0,     0,     0,  1578,  1579,  1580,  1581,  1582,
       0,     0,  1583,     0,  1584,  1585,  1586,     0,     0,  1587,
    1588,     0,  1589,  1590,  1591,     0,     0,     0,  1592,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1593,     0,     0,     0,     0,  1594,     0,     0,
       0,     0,  1595,  1596,  1597,     0,     0,     0,     0,  1598,
    1599,     0,  1600,  1601,  1602,  1603,     0,     0,  1604,     0,
    2166,  1606,  1607,  1608,     0,  1609,     0,  1610,  1611,     0,
    1612,     0,  1613,  1614,     0,  1615,  1616,  1617,  1618,     0,
       0,     0,     0,     0,  1619,     0,  1620,     0,  1621,  1622,
       0,  1623,  1624,  1625,  1626,  1627,  1628,     0,  1629,  1630,
    1631,  1632,  1633,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1634,     0,  1635,     0,  1636,     0,     0,
       0,     0,     0,     0,     0,     0,  1637,     0,  1638,  1639,
    1640,  1641,  1642,  1643,  1644,     0,     0,  1645,  1646,     0,
       0,     0,     0,  1647,     0,  1648,  1649,  1650,     0,  1651,
       0,  1652,     0,  1653,  1654,  1655,  1656,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,   166,
     167,   168,   169,   170,     0,  1657,  1658,  1659,     0,     0,
       0,     0,   171,   172,     0,  1660,     0,  1661,  1662,  1663,
     173,   174,     0,     0,  1664,     0,  1665,  1666,  1667,     0,
       0,     0,  1668,   175,     0,     0,  1669,  1670,     0,  1671,
    1672,  1673,  1674,     0,     0,     0,  1675,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     0,     0,     0,   177,     0,     0,   178,   179,
       0,     0,     0,     0,   962,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1676,  1677,  1678,
    1679,  1680,     0,     0,   181,     0,     0,     0,   182,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   968,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1681,
    1682,  1683,  1684,  1685,     0,  1686,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   184,     0,     0,   488,   489,   490,   491,   492,   493,
     494,   185,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   187,     0,     0,     0,     0,     0,
       0,   188,   189,     0,     0,     0,   190,     0,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   191,   510,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   173,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,   669,
       0,     0,     0,     0,     0,     0,   176,     0,     0,     0,
       0,   177,     0,     0,   178,   179,   488,   489,   490,   491,
     492,   493,   494,   180,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   670,   510,   970,     0,     0,   184,     0,     0,
     488,   489,   490,   491,   492,   493,   494,   185,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,   488,   489,   490,   491,   492,   493,   494,   975,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,   671,     0,
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
       0,     0,     0,     0,   171,   172,     0,   976,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   780,     0,   781,     0,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   176,   510,     0,     0,   977,   177,     0,     0,
     178,   179,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,   488,   489,   490,   491,   492,   493,
     494,   978,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   488,
     489,   490,   491,   492,   493,   494,   990,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     991,     0,     0,   184,     0,     0,   488,   489,   490,   491,
     492,   493,   494,   185,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   992,     0,     0,     0,   186,     0,     0,     0,     0,
       0,     0,   782,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,     0,
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
     283,   284,   285,     0,     0,   783,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,     0,     0,     0,     0,     0,     0,   173,     0,
       0,     0,   488,   489,   490,   491,   492,   493,   494,   994,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,   177,     0,     0,   178,   179,     0,     0,
       0,     0,     0,     0,  1005,   180,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,  1014,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1015,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1016,     0,     0,   184,
       0,     0,   488,   489,   490,   491,   492,   493,   494,   185,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   186,     0,  1017,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     388,     0,     0,     0,     0,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,     0,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,     0,   278,   279,   280,
     281,     0,     0,     0,     0,   282,   283,   284,   285,     0,
       0,   286,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,     0,     0,
       0,     0,  1018,     0,   173,   710,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,   177,
       0,     0,   178,   179,     0,     0,  1019,     0,     0,     0,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   488,   489,   490,   491,   492,   493,
     494,  1020,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   488,
     489,   490,   491,   492,   493,   494,  1021,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,  1027,     0,     0,   184,     0,     0,   488,   489,
     490,   491,   492,   493,   494,   185,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1031,     0,     0,   186,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   171,   172,     0,     0,  1186,     0,     0,     0,
     173,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     0,     0,     0,   177,     0,     0,   178,   179,
       0,     0,     0,     0,     0,     0,     0,   180,     0,     0,
       0,     0,     0,     0,  1421,     0,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,  1422,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   944,     0,     0,   488,   489,   490,
     491,   492,   493,   494,  1433,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1443,     0,
       0,   184,     0,     0,   488,   489,   490,   491,   492,   493,
     494,   185,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1459,     0,
       0,     0,     0,   186,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,  1460,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,   176,     0,     0,     0,
       0,   177,     0,     0,   178,   179,     0,     0,     0,     0,
       0,     0,     0,   180,     0,     0,  1461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     488,   489,   490,   491,   492,   493,   494,  1394,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,  1464,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,  -708,  -708,  -708,  -708,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1465,   510,     0,   184,     0,     0,
     488,   489,   490,   491,   492,   493,   494,   185,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1934,     0,     0,     0,     0,   186,
       0,     0,     0,  1409,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,   230,     0,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   979,     0,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,     0,     0,   282,   283,   284,   285,     0,     0,   286,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,     0,   980,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,   176,     0,     0,     0,     0,   177,     0,     0,
     178,   179,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   969,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,     0,   971,
       0,     0,     0,   184,     0,     0,   488,   489,   490,   491,
     492,   493,   494,   185,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   972,     0,   186,   488,   489,   490,   491,
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
     171,   172,     0,     0,     0,     0,     0,     0,   173,   973,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,   177,     0,     0,   178,   179,   488,   489,
     490,   491,   492,   493,   494,   180,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,  1891,
     488,   489,   490,   491,   492,   493,   494,   982,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,   488,   489,   490,   491,   492,
     493,   494,   983,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   984,     0,     0,     0,   184,
       0,     0,   488,   489,   490,   491,   492,   493,   494,   185,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
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
     254,   255,   256,   257,   258,     0,     0,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,     0,   278,   279,   280,
     281,     0,     0,     0,     0,   282,   283,   284,   285,     0,
       0,   286,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,     0,   986,
       0,     0,     0,     0,   173,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,   987,     0,   177,
       0,     0,   178,   179,   488,   489,   490,   491,   492,   493,
     494,   180,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   988,
       0,     0,     0,     0,     0,  1893,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   488,   489,   490,
     491,   492,   493,   494,   989,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,     0,   510,     0,     0,     0,
       0,   993,     0,     0,     0,   184,     0,     0,   488,   489,
     490,   491,   492,   493,   494,   185,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,  1006,     0,     0,     0,     0,     0,   186,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   171,   172,  1007,     0,     0,     0,     0,     0,
     173,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     0,  1008,     0,   177,     0,     0,   178,   179,
     488,   489,   490,   491,   492,   493,   494,   180,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,   488,
     489,   490,   491,   492,   493,   494,  1009,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,   488,   489,   490,   491,   492,   493,
     494,  1010,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1011,     0,     0,
       0,   184,     0,     0,   488,   489,   490,   491,   492,   493,
     494,   185,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,  1012,     0,     0,
       0,     0,     0,   186,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     285,     0,     0,   286,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   488,   489,   490,   491,   492,   493,   494,
    1013,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,     0,   510,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,     0,     0,     0,     0,  1024,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,  1025,     0,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,  1026,   510,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,  1030,   510,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,     0,     0,     0,     0,     0,   488,   489,   490,   491,
     492,   493,   494,  1055,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,  1413,     0,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,  1418,   510,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,  1419,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,  1420,
       0,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1423,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,  1424,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,  1425,   510,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     0,
     510,     0,     0,     0,     0,  1426,     0,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1427,   510,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1428,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1431,   510,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1432,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1444,   510,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1445,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,  1458,     0,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,  1462,   510,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,  1463,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
    1472,     0,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1473,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
    1541,   510,   488,   489,   490,   491,   492,   493,   494,     0,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,  1743,   510,   488,   489,   490,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,     0,     0,     0,     0,  1807,     0,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1868,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  1899,   510,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1900,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  1901,   510,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1902,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  1903,   510,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,  1912,     0,   488,   489,   490,   491,
     492,   493,   494,     0,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,  1929,
     510,   488,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,     0,     0,  1930,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,  1931,     0,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  1932,   510,   488,   489,
     490,   491,   492,   493,   494,     0,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,  1933,   510,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,  1935,   510,     0,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,  1936,     0,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,  1958,   510,     0,     0,     0,     0,     0,     0,
    1744,  1745,     0,  1288,     0,  1746,     0,  1747,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1964,     0,     0,
       0,     1,  1289,     0,     0,     2,  1290,     0,     0,  1291,
       0,  1292,     0,     0,  1293,     0,     0,     0,     0,     0,
    1748,  1749,  1968,  1750,     0,     0,     0,     3,     0,  1294,
       0,     0,     4,     0,     0,     0,  1295,  1296,     0,     0,
       0,     0,     0,     0,     0,     5,     0,  1973,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     0,     0,
       0,  1297,  2075,     0,     0,     0,     0,   570,   571,     0,
     572,     0,   573,   574,     0,     0,     0,     0,  1298,     0,
       0,     0,     0,     0,     0,     0,     0,  2081,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,  1299,     0,     0,  2105,     0,     9,    10,    11,
     576,   577,   578,   579,     0,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,     0,     0,   581,     0,
    2118,  1300,     0,  1751,  1752,   932,     0,     0,     0,  1301,
       0,     0,     0,     0,     0,    12,     0,    13,   582,     0,
       0,     0,     0,     0,     0,    14,   583,     0,     0,  2128,
       0,     0,     0,     0,     0,  1184,     0,     0,     0,     0,
       0,   584,     0,     0,     0,     0,     0,     0,   585,    15,
      16,   586,     0,     0,   587,   588,     0,     0,     0,     0,
       0,     0,  2129,     0,    17,     0,     0,    18,     0,  1302,
       0,   589,     0,     0,     0,     0,    19,     0,     0,     0,
     488,   489,   490,   491,   492,   493,   494,  2167,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,   590,   591,     0,     0,   592,
     593,     0,     0,     0,     0,   594,     0,   595,     0,     0,
       0,     0,   596,   597,     0,     0,     0,     0,   598,     0,
     599,     0,     0,     0,     0,     0,   600,     0,   601,     0,
       0,     0,     0,   602,   488,   489,   490,   491,   492,   493,
     494,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,     0,   510,     0,     0,     0,     0,     0,  1192,
     488,   489,   490,   491,   492,   493,   494,     0,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   510,     0,     0,     0,     0,     0,
       0,     0,  1722,     0,     0,     0,     0,   487,     0,     0,
       0,     0,     0,     0,   488,   489,   490,   491,   492,   493,
     494,  1183,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   510,     0,
       0,     0,     0,     0,     0,     0,  1405,     0,   511,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   488,   489,
     490,   491,   492,   493,   494,  1723,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,   510,     0,     0,   488,   489,   490,   491,   492,
     493,   494,   974,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,     0,   510,
       0,   488,   489,   490,   491,   492,   493,   494,  1040,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510,     0,   488,   489,   490,
     491,   492,   493,   494,  1250,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
       0,   510,   489,   490,   491,   492,   493,   494,     0,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,   510
};

static const yytype_int16 yycheck[] =
{
      95,  1109,  1273,  1059,   303,  1140,   293,   637,  1070,  1071,
    1373,   345,  1388,  1371,  1076,   129,  1124,    34,   297,    88,
     129,   531,     5,    42,   810,   866,   867,  1135,  1497,    41,
     147,   872,    38,   874,   930,    20,     8,     3,   152,    36,
    1713,     3,     4,     5,     6,     7,     8,     3,     3,  1161,
     147,    44,   192,    83,    34,     3,     6,     4,    80,     4,
      80,  1707,    20,   132,   192,   160,   161,    71,    18,     6,
      92,    68,   297,   233,  1285,  1286,   171,   172,   173,   148,
     126,     3,   177,   362,    18,    71,   105,   100,    44,     3,
      90,    48,   209,  1304,   100,    18,    93,   233,   129,    67,
       3,   147,    16,     3,   101,     3,   128,   106,     3,    80,
     259,     3,   209,   550,   136,   106,   113,  1766,  1767,    47,
      48,    92,     3,   127,     3,   212,   195,    18,  1777,  1778,
     197,     4,     5,     6,     7,   245,     3,   150,  1034,    67,
     100,  1499,     3,   212,   150,   214,  1447,  1448,   117,   118,
       3,   220,     3,   165,   147,  1456,  1457,   128,   245,   259,
      42,    64,    93,   129,   186,   136,    64,    90,   605,   799,
     266,   259,   234,   259,    77,    64,   245,   252,   190,    77,
      44,   147,   113,   180,   269,   815,     5,   186,    77,    53,
     194,   286,    65,    44,   261,   186,    88,   272,    77,    90,
    1346,    20,   264,   169,   201,   160,   106,   238,   194,   221,
      77,   166,   160,   235,   260,   186,   209,   927,   166,   929,
     380,   251,   242,   105,   186,  1287,  1334,   149,   234,   143,
     196,   380,   177,   520,   513,   203,   186,  1345,   251,  1374,
     380,   234,   378,   177,   201,   251,   343,   269,   220,   186,
     254,  1359,   380,   176,   149,  1904,  1905,  1906,  1907,  1908,
    1909,   378,   262,  1049,   235,   262,   380,   190,   254,  1918,
    1739,   380,  1384,  1922,   188,   203,   363,  1926,   378,   234,
     377,   378,   229,   230,   380,   176,   269,   917,   149,   384,
     378,   251,   378,   388,   363,   380,   149,  1508,   267,   190,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   821,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,  2000,   423,   424,
     425,   343,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,    41,
    1708,  1709,  1248,  1999,   449,   450,   378,   636,   377,   454,
     455,   311,   379,   233,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,  1532,   482,   483,   484,
     827,   828,   377,   488,   489,   490,   491,   492,  1544,   379,
     837,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,  1792,   379,   373,   377,
     515,   377,    67,   378,   649,   373,   521,   652,   266,     3,
     378,  1487,    67,  1579,   368,   369,   370,   371,   319,   320,
     321,   322,   667,  1551,  1590,  1553,   883,   884,   885,     3,
      71,     3,   325,   326,   327,  1756,  1757,  1758,  1759,  1760,
    1761,  2110,   259,    64,  1610,  2114,  1176,  1768,  1178,   266,
      71,  1772,   190,   132,  1315,  1776,  1317,  1318,  1624,     3,
       4,     5,     6,     7,     8,   100,     3,  1633,   117,   118,
       3,     3,    91,    64,    64,     3,   130,   223,   190,   245,
       5,     3,     9,    66,  1867,   378,   127,    70,   378,  1885,
     259,   259,   148,    20,   234,   245,     3,   804,   852,   853,
       3,   157,   170,   259,  1795,   251,   127,  1673,  2209,   221,
     131,  2180,  2181,    37,  2183,  2184,   195,   974,   975,   634,
     185,   259,   380,   142,   264,    14,    18,   148,    52,    18,
     185,    56,  1062,  2234,  2235,  1065,   157,    44,   203,   193,
     208,    78,   125,     3,     3,    78,   661,   662,   203,    41,
      44,   666,    44,   194,    46,   149,     3,    49,   673,    53,
     377,    44,  2263,   380,   809,  1693,    26,    26,   233,     3,
      53,  1699,    64,   194,   228,   149,   245,   149,   233,    71,
      72,    10,    11,    12,    13,    14,    15,    16,   907,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  2171,    34,   241,   377,   378,   378,
     378,  1261,   149,   254,   106,  1072,   149,   149,   267,   210,
     210,   149,   378,    44,    13,    14,     3,    16,     5,    69,
      19,   343,    53,   254,   379,   380,  1718,   379,   380,    18,
    2207,  2208,   186,    26,    27,    28,    29,    30,    31,    32,
    2046,    34,    96,    96,     0,    34,    31,    32,   376,    34,
     775,   776,  1828,   778,    96,   157,  2233,  1833,   783,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    71,    34,   186,   139,   139,     3,    96,    96,
     216,   217,   194,   147,   147,    55,   146,   139,  1863,    59,
       3,  2107,     3,  2034,  1842,   147,   156,  2038,   379,   380,
     152,   379,   380,    75,    76,   169,   169,   106,   378,  1857,
     170,  1859,   586,   379,   380,   209,  1055,   169,   592,   149,
     594,   139,   139,   183,  2122,   379,   380,     3,  1047,   147,
     147,    30,    31,    32,   148,    34,     3,   107,  2049,     3,
     110,     3,   254,   379,   380,   880,   379,   380,   208,   379,
     380,   169,   169,   379,   380,   125,   379,   380,   379,   380,
     379,   380,  2178,   379,   380,     3,   379,   380,   129,   239,
    1035,   231,   379,   380,   148,   145,   245,   859,   860,  1044,
     862,   863,   864,   153,  1970,     3,   868,   869,   870,     4,
       5,   873,     4,     5,   379,   380,   164,   932,     3,   934,
    1986,   379,   380,   379,   380,   380,   941,   942,     3,   944,
     379,   380,     3,   948,  2155,  2156,     3,  2158,  2159,   380,
     955,   956,   957,   958,     3,   960,   961,   962,   379,   380,
     379,   380,   967,   968,   273,   970,   379,   380,   379,   380,
     377,   976,   977,   978,     3,  1993,  1942,   379,   380,   379,
     380,   379,   380,   379,   380,   990,   991,   992,    44,   994,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1005,    34,   242,     3,   244,   379,   380,  2063,   378,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1152,  1023,   379,
     380,   273,  1027,   263,  1029,   378,  1031,   379,   380,  1376,
     190,   379,   380,   379,   380,  1040,   190,  1042,  1043,   573,
     574,   575,   576,     3,   578,    50,    51,   581,   582,   583,
       3,  1056,   379,   380,   588,   589,   590,   378,  1063,   593,
      50,    51,   381,    10,    11,    12,    13,    14,    15,    16,
     377,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,    34,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1107,    34,   190,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1249,    34,   273,  1252,   273,  1254,
     273,  1256,    10,    11,    12,    13,    14,    15,    16,   273,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   273,    34,   379,   380,   380,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1166,    34,   273,  1169,   379,   380,   379,   380,   273,
    1175,   379,   380,   379,   380,   379,   380,   379,   380,  1184,
       3,  1186,   379,   380,   379,   380,     4,  1192,  1193,    10,
      11,    12,    13,    14,    15,    16,   238,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     3,    34,   379,   380,   379,   380,   379,   380,
      10,    11,    12,    13,    14,    15,    16,     8,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     9,    34,  1250,   379,   380,    10,    11,
      12,    13,    14,    15,    16,   377,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1276,    34,   379,   380,   378,  1281,    10,    11,    12,
      13,    14,    15,    16,    34,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     378,    34,   379,   380,    10,    11,    12,    13,    14,    15,
      16,   378,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   378,    34,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   378,    34,   379,   380,   377,   378,     3,   379,
     380,  1366,   377,   378,   817,   818,    10,    11,    12,    13,
      14,    15,    16,    44,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   378,
      34,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1409,    34,   378,  1412,   379,   380,
     379,   380,   379,   380,   379,   380,  1421,  1422,   379,   380,
    1051,  1052,  1491,  1492,   378,    46,   378,   378,  1433,   378,
     378,    46,   379,   380,   378,   378,   378,  1442,  1443,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   378,    34,   378,  1459,  1460,  1461,   378,   378,  1464,
    1465,    64,  1467,   378,  1469,   378,  1471,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
    1485,  1486,   378,   378,   378,   378,   378,   378,   378,  1494,
    1495,   379,   380,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   269,  1512,   378,   378,
     378,  1516,   378,   378,   378,   378,   378,   378,   378,   378,
     378,  1526,   378,   378,   378,   378,   378,   378,    10,    11,
      12,    13,    14,    15,    16,  1540,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   378,    34,   378,   378,   238,   378,     3,   379,   380,
       3,   378,   378,     3,     4,     5,     6,     7,     8,   378,
      10,   378,    12,   378,   378,   378,    16,    17,    18,   378,
      20,   378,   378,   378,    24,    25,    26,    27,    28,   379,
     380,   378,   378,   378,   378,   378,   378,     3,    38,   378,
     378,   190,     3,    43,    44,   190,   273,    47,     3,     3,
     190,   273,    52,    53,    54,    55,    56,   379,   380,    59,
       3,    61,    62,    63,     3,     3,    66,    67,    26,    69,
      70,    71,     3,     3,     3,    75,    10,     3,     3,     3,
       3,     3,     3,     3,    34,     3,   379,   380,     3,    89,
     381,   379,   379,   379,    94,   379,   379,   379,   379,    99,
     100,   101,   379,   379,   379,   379,   106,   107,     5,   109,
     110,   111,   112,   379,   380,   115,   379,   117,   118,   119,
     120,   379,   122,   379,   124,   125,   379,   127,   378,   129,
     130,     3,   132,   133,   134,   135,     3,     3,   379,   380,
       3,   141,   379,   143,     3,   145,   146,   156,   148,   149,
     150,   151,   152,   153,    88,   155,   156,   157,   158,   159,
     189,    95,     3,  1728,  1729,     3,     3,     3,     3,  1734,
     170,  1736,   172,     3,   174,   379,   380,     3,     3,     3,
       3,     3,     3,   183,     3,   185,   186,   187,   188,   189,
     190,   191,   238,     3,   194,   195,     3,   131,   132,     3,
     200,     3,   202,   203,   204,     5,   206,   371,   208,     5,
     210,   211,   212,   213,   148,     5,   378,   378,   378,   378,
     378,   378,   378,    57,     3,     3,     3,     3,   379,     3,
     380,     3,   232,   233,   234,   379,    44,   190,   190,     3,
     273,   190,   242,     3,   244,   245,   246,   191,     3,     3,
     379,   251,   379,   253,   254,   255,   234,   379,   342,   259,
     342,   195,   342,   263,   264,   379,   266,   267,   268,   269,
     342,   342,   234,   273,   378,   378,   378,   378,   212,   129,
     214,   380,   157,   157,   157,   156,   220,   190,  1853,     3,
      34,   156,     3,   238,   186,     5,   215,   238,   215,  1864,
       5,     5,     4,   381,     5,   239,   240,     5,   378,   378,
     206,   190,     3,   261,   314,   315,   316,   317,   318,     3,
     254,   133,     3,     3,    87,     3,   190,     3,    56,   172,
    1895,    20,   192,   378,    84,   379,   154,   379,   380,    10,
      11,    12,    13,    14,    15,    16,  1911,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   381,    34,     4,   342,   342,   342,   342,  1934,
     342,   342,   342,   378,  1939,     5,   376,   377,   378,   379,
     380,   378,   382,  1948,   378,   342,     5,   378,   378,   234,
       3,   342,   134,   133,   379,     3,  1961,  1962,     3,   378,
     157,   157,     3,     3,    71,   378,   261,     3,    53,   133,
     379,   379,   379,   261,   379,   378,     3,     3,     4,     5,
       6,     7,     8,   238,    10,   190,    12,     3,     3,   363,
      16,    17,    18,     3,    20,   157,   378,   157,    24,    25,
      26,    27,    28,   378,     4,   378,   378,     6,     4,     4,
     378,   378,    38,   205,   157,     3,     3,    43,    44,    56,
     156,    47,   378,     3,   378,   378,    52,    53,    54,    55,
      56,   380,   378,    59,   379,    61,    62,    63,   379,   379,
      66,    67,   141,    69,    70,    71,   379,   378,   378,    75,
     378,   378,   378,   378,   378,   378,   378,    20,   379,   379,
       3,   379,   379,    89,   186,     3,    45,     3,    94,   378,
     378,  2076,     4,    99,   100,   101,   378,   378,   157,   157,
     106,   107,   378,   109,   110,   111,   112,   378,  2093,   115,
       5,   117,   118,   119,   120,     4,   122,   206,   124,   125,
     233,   127,     4,   129,   130,   378,   132,   133,   134,   135,
     378,   378,     3,     3,     3,   141,     3,   143,   378,   145,
     146,   378,   148,   149,   150,   151,   152,   153,     3,   155,
     156,   157,   158,   159,   261,   378,   111,   378,     3,   378,
     259,     3,   133,   378,   170,   378,   172,   261,   174,   378,
       3,   378,   380,   251,    20,   190,   267,   183,     4,   185,
     186,   187,   188,   189,   190,   191,   343,   342,   194,   195,
    2175,   342,   379,   379,   200,     3,   202,   203,   204,   378,
     206,   379,   208,     3,   210,   211,   212,   213,   379,     3,
     379,     3,     5,    44,     5,   378,    53,   378,     4,   378,
     269,   379,   210,    53,   380,   379,   232,   233,   234,   379,
     379,   378,   261,   378,   380,   378,   242,   378,   244,   245,
     246,   264,   378,   157,   157,   251,   378,   253,   254,   255,
       3,   380,   378,   259,    81,    56,   191,   263,   264,   379,
     266,   267,   268,   269,   378,     3,   378,   273,    10,    11,
      12,    13,    14,    15,    16,    20,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   379,    34,   379,   379,   379,    18,     3,   378,   157,
       3,   378,    53,   379,   379,   379,    71,     3,   314,   315,
     316,   317,   318,    10,    11,    12,    13,    14,    15,    16,
     129,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   378,    34,   378,     3,
       3,     4,     5,     6,     7,     8,   378,    10,   378,    12,
       3,    56,    56,    16,    17,    18,     3,    20,     3,   378,
       3,    24,    25,    26,    27,    28,    56,   379,   379,   379,
     376,   377,   378,   379,   380,    38,   382,   342,   342,   342,
      43,    44,   379,   207,    47,   342,   379,   133,     3,    52,
      53,    54,    55,    56,   379,   200,    59,   262,    61,    62,
      63,     3,     3,    66,    67,     5,    69,    70,    71,     5,
     379,    53,    75,    70,   124,   149,   159,   268,   200,     5,
     378,     3,   378,   197,     3,    20,    89,   380,    94,   379,
     379,    94,   174,   379,   379,   379,    99,   100,   101,   379,
       3,   380,   379,   106,   107,   378,   109,   110,   111,   112,
     378,   378,   115,   379,   117,   118,   119,   120,   378,   122,
     379,   124,   125,   152,   127,     3,   129,   130,   379,   132,
     133,   134,   135,   379,     5,     3,   379,     3,   141,     3,
     143,   378,   145,   146,   378,   148,   149,   150,   151,   152,
     153,   378,   155,   156,   157,   158,   159,     3,     3,   380,
     224,   224,   378,     3,   379,   200,     3,   170,     3,   172,
      20,   174,     3,     3,   173,   379,   379,   173,   380,     3,
     183,   238,   185,   186,   187,   188,   189,   190,   191,     3,
       3,   194,   195,   233,   222,   379,   379,   200,   379,   202,
     203,   204,   378,   206,   378,   208,   378,   210,   211,   212,
     213,   379,     3,     5,   379,     3,   379,   379,     5,   221,
     379,   378,     3,   144,   167,    90,   264,   243,   190,   232,
     233,   234,   190,   184,   184,     5,     5,   389,  1186,   242,
     102,   244,   245,   246,  1043,  1488,  1796,   947,   251,  1727,
     253,   254,   255,   515,   525,  1280,   259,   638,   128,   645,
     263,   264,  2197,   266,   267,   268,   269,    90,   378,   928,
     273,    10,    11,    12,    13,    14,    15,    16,  1895,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1386,    34,  1863,   651,   380,  2239,
    1363,  1375,   871,   164,    -1,   354,   567,    -1,    -1,    -1,
      -1,   314,   315,   316,   317,   318,    10,    11,    12,    13,
      14,    15,    16,  1530,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,   887,   379,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,   376,   377,   378,   379,   380,    38,   382,
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
      -1,    -1,   232,   233,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   244,   245,   246,    -1,    -1,    -1,
      -1,   251,    -1,   253,   254,   255,    -1,    -1,    -1,   259,
      -1,    -1,    -1,   263,   264,    -1,   266,   267,   268,   269,
      -1,    -1,    -1,   273,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     379,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   314,   315,   316,   317,   318,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   379,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   376,   377,   378,   379,
     380,    38,   382,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,   122,    -1,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,
      -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,   233,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   244,   245,   246,
      -1,    -1,    -1,    -1,   251,    -1,   253,   254,   255,    -1,
      -1,    -1,   259,    -1,    -1,    -1,   263,   264,    -1,   266,
     267,   268,   269,    -1,    -1,    -1,   273,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,   315,   316,
     317,   318,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   379,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   376,
     377,   378,   379,   380,    38,   382,    -1,    -1,    -1,    43,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,   233,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
     244,   245,   246,    -1,    -1,    -1,    -1,   251,    -1,   253,
     254,   255,    -1,    -1,    -1,   259,    -1,    -1,    -1,   263,
     264,    -1,   266,   267,   268,   269,    -1,    -1,    -1,   273,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,   315,   316,   317,   318,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,   379,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,   376,   377,   378,   379,   380,    38,   382,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    -1,    -1,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,
     101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,
     111,   112,    -1,    -1,   115,    -1,   117,   118,   119,   120,
      -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,   130,
      -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,   143,    -1,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,
      -1,   202,   203,   204,    -1,   206,    -1,   208,    -1,   210,
     211,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   232,   233,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,   244,   245,   246,    -1,    -1,    -1,    -1,
     251,    -1,   253,   254,   255,    -1,    -1,    -1,   259,    -1,
      -1,    -1,   263,   264,    -1,   266,   267,   268,   269,    -1,
      -1,    -1,   273,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   315,   316,   317,   318,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   379,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,   376,   377,   378,   379,   380,
      38,   382,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
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
      -1,    -1,    -1,    -1,   232,   233,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,   244,   245,   246,    -1,
      -1,    -1,    -1,   251,    -1,   253,   254,   255,    -1,    -1,
      -1,   259,    -1,    -1,    -1,   263,   264,    -1,   266,   267,
     268,   269,    -1,    -1,    -1,   273,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   314,   315,   316,   317,
     318,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,   379,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,   376,   377,
     378,   379,   380,    38,   382,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,
      -1,   106,   107,    -1,   109,   110,   111,   112,    -1,    -1,
     115,    -1,   117,   118,   119,   120,    -1,   122,    -1,   124,
     125,    -1,   127,    -1,   129,   130,    -1,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,   204,
      -1,   206,    -1,   208,    -1,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,   233,   234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,
     245,   246,    -1,    -1,    -1,    -1,   251,    -1,   253,   254,
     255,    -1,    -1,    -1,   259,    -1,    -1,    -1,   263,   264,
      -1,   266,   267,   268,   269,    -1,    -1,    -1,   273,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
     315,   316,   317,   318,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     379,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   376,   377,   378,   379,   380,    38,   382,    -1,    -1,
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
     232,   233,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,   244,   245,   246,    -1,    -1,    -1,    -1,   251,
      -1,   253,   254,   255,    -1,    -1,    -1,   259,    -1,    -1,
      -1,   263,   264,    -1,   266,   267,   268,   269,    -1,    -1,
      -1,   273,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,   380,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   314,   315,   316,   317,   318,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,   379,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,   376,   377,   378,   379,   380,    38,
     382,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,
     109,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
     119,   120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,
     129,   130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,   200,    -1,   202,   203,   204,    -1,   206,    -1,   208,
      -1,   210,   211,   212,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,   233,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,   244,   245,   246,    -1,    -1,
      -1,    -1,   251,    -1,   253,   254,   255,    -1,    -1,    -1,
     259,    -1,    -1,    -1,   263,   264,    -1,   266,   267,   268,
     269,    -1,    -1,    -1,   273,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   314,   315,   316,   317,   318,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,   379,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,   376,   377,   378,
     379,   380,    38,   382,    -1,    -1,    -1,    43,    44,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   232,   233,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,   245,
     246,    -1,    -1,    -1,    -1,   251,    -1,   253,   254,   255,
      -1,    -1,    -1,   259,    -1,    -1,    -1,   263,   264,    -1,
     266,   267,   268,   269,    -1,    -1,    -1,   273,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,   315,
     316,   317,   318,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,   379,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
     376,   377,   378,   379,   380,    38,   382,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,
      -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,   122,
      -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,
     143,    -1,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,   194,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,
     203,   204,    -1,   206,    -1,   208,    -1,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,
     233,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,   244,   245,   246,    -1,    -1,    -1,    -1,   251,    -1,
     253,   254,   255,    -1,    -1,    -1,   259,    -1,    -1,    -1,
     263,   264,    -1,   266,   267,   268,   269,    -1,    -1,    -1,
     273,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   314,   315,   316,   317,   318,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   379,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,   376,   377,   378,   379,   380,    38,   382,
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
      -1,    -1,   232,   233,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   244,   245,   246,    -1,    -1,    -1,
      -1,   251,    -1,   253,   254,   255,    -1,    -1,    -1,   259,
      -1,    -1,    -1,   263,   264,    -1,   266,   267,   268,   269,
      -1,    -1,    -1,   273,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   314,   315,   316,   317,   318,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   379,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   376,   377,   378,   379,
     380,    38,   382,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,   122,    -1,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,
      -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,   232,   233,   234,    -1,    -1,
      -1,    -1,    17,    18,    -1,   242,    -1,   244,   245,   246,
      25,    26,    -1,    -1,   251,    -1,   253,   254,   255,    -1,
      -1,    -1,   259,    38,    -1,    -1,   263,   264,    -1,   266,
     267,   268,   269,    -1,    -1,    -1,   273,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,   380,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,   315,   316,
     317,   318,    -1,    -1,    99,    -1,    -1,    -1,   103,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   380,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,
     377,   378,   379,   380,    -1,   382,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   186,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   218,   219,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,   231,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   256,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    -1,   312,    -1,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,    -1,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,    -1,   364,
     365,   366,   367,    -1,    -1,    -1,    -1,   372,   373,   374,
     375,    -1,    -1,   378,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    74,    10,    11,    12,    13,
      14,    15,    16,    82,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   171,    34,   380,    -1,    -1,   176,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   186,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,
      -1,    10,    11,    12,    13,    14,    15,    16,   380,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,    -1,   312,    -1,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,    -1,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    -1,   364,   365,   366,   367,    -1,
      -1,    -1,    -1,   372,   373,   374,   375,    -1,    -1,   378,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,   380,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    65,    34,    -1,    -1,   380,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   380,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,   176,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   186,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,    -1,   312,
      -1,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
      -1,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
      -1,   364,   365,   366,   367,    -1,    -1,    -1,    -1,   372,
     373,   374,   375,    -1,    -1,   378,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    82,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   380,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   380,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,   176,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   186,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,    -1,   380,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,    -1,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,    -1,   312,    -1,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,    -1,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,    -1,   364,   365,   366,
     367,    -1,    -1,    -1,    -1,   372,   373,   374,   375,    -1,
      -1,   378,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,   380,    -1,    25,    26,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    74,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   380,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   380,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,   380,    -1,    -1,   176,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   186,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    -1,   218,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
      -1,   312,    -1,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,    -1,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,    -1,   364,   365,   366,   367,    -1,    -1,    -1,
      -1,   372,   373,   374,   375,    -1,    -1,   378,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,   380,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   380,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   380,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      -1,   176,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   186,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      -1,    -1,    -1,   218,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    -1,   312,    -1,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,    -1,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,    -1,   364,
     365,   366,   367,    -1,    -1,    -1,    -1,   372,   373,   374,
     375,    -1,    -1,   378,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,   380,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   106,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,   380,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   380,    34,    -1,   176,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   186,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,   133,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,    -1,   312,    -1,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   313,    -1,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    -1,   364,   365,   366,   367,    -1,
      -1,    -1,    -1,   372,   373,   374,   375,    -1,    -1,   378,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,   379,
      -1,    -1,    -1,   176,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   186,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,   218,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,    -1,   312,
      -1,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
      -1,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
      -1,   364,   365,   366,   367,    -1,    -1,    -1,    -1,   372,
     373,   374,   375,    -1,    -1,   378,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,   379,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    10,    11,
      12,    13,    14,    15,    16,    82,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      10,    11,    12,    13,    14,    15,    16,   379,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   379,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,   176,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   186,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,
      -1,   218,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,    -1,   312,    -1,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,    -1,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,    -1,   364,   365,   366,
     367,    -1,    -1,    -1,    -1,   372,   373,   374,   375,    -1,
      -1,   378,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,   379,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,   379,    -1,    70,
      -1,    -1,    73,    74,    10,    11,    12,    13,    14,    15,
      16,    82,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,   379,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   379,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,   379,    -1,    -1,    -1,   176,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   186,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,    -1,    -1,    -1,    -1,   218,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
      -1,   312,    -1,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,    -1,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,    -1,   364,   365,   366,   367,    -1,    -1,    -1,
      -1,   372,   373,   374,   375,    -1,    -1,   378,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,   379,    -1,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,   379,    -1,    70,    -1,    -1,    73,    74,
      10,    11,    12,    13,    14,    15,    16,    82,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   379,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   379,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,
      -1,   176,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   186,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,
      -1,    -1,    -1,   218,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    -1,   312,    -1,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,    -1,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,    -1,   364,
     365,   366,   367,    -1,    -1,    -1,    -1,   372,   373,   374,
     375,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     379,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,   379,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   379,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   379,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   379,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   379,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   379,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,   379,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,   379,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   379,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   379,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   379,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,   379,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     379,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   379,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     379,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   379,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     379,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   379,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,   379,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   379,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,   379,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
     379,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   379,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     379,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   379,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,   379,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   379,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   379,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   379,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   379,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   379,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   379,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   379,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   379,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,   379,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   379,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   379,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   379,    34,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,   379,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   379,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    -1,    18,    -1,   102,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,
      -1,    35,    37,    -1,    -1,    39,    41,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
     137,   138,   379,   140,    -1,    -1,    -1,    61,    -1,    64,
      -1,    -1,    66,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,   379,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,   106,   379,    -1,    -1,    -1,    -1,    54,    55,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   379,    -1,   161,   162,   163,
     107,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     379,   186,    -1,   270,   271,   246,    -1,    -1,    -1,   194,
      -1,    -1,    -1,    -1,    -1,   199,    -1,   201,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   153,    -1,    -1,   379,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,   175,   233,
     234,   178,    -1,    -1,   181,   182,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   248,    -1,    -1,   251,    -1,   254,
      -1,   198,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   379,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,   232,   233,    -1,    -1,   236,
     237,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,    -1,
      -1,    -1,   249,   250,    -1,    -1,    -1,    -1,   255,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,    -1,   265,    -1,
      -1,    -1,    -1,   270,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,   129,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   117,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   105,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    44,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    10,    11,    12,    13,    14,    15,    16,    43,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    10,    11,    12,
      13,    14,    15,    16,    43,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    61,    66,    79,   100,   101,   150,   161,
     162,   163,   199,   201,   209,   233,   234,   248,   251,   260,
     384,   423,   424,   463,   467,   469,   472,   473,   476,   477,
     478,   479,   480,   481,   488,   489,   491,   507,   508,   517,
     520,   522,   523,   524,   547,   550,   557,   558,   561,   564,
     565,   568,   212,   245,   363,   245,     3,    10,    88,    95,
     131,   132,   148,   195,   212,   214,   220,   239,   240,   254,
     363,   529,     3,   464,    88,   132,   148,   195,   212,   214,
     220,   245,   363,   499,     3,     3,     3,    26,   245,   245,
     499,     8,   220,   548,   549,   442,   245,   499,   518,     3,
      88,     0,   376,   475,     3,     3,     3,     3,   378,   209,
     149,   521,     3,   148,     3,     3,    78,   149,     3,     3,
       3,   521,   239,   148,   521,   245,   509,     3,   129,   147,
     169,   196,   465,     3,   149,     3,   149,     3,     3,   149,
       3,   149,     3,     3,   149,     3,   149,     3,   149,    96,
     139,   147,   152,   169,   500,   164,   380,     3,     3,   500,
       9,    20,     3,   106,   380,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    38,    65,    70,    73,    74,
      82,    99,   103,   139,   176,   186,   218,   219,   226,   227,
     231,   256,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     312,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   364,   365,
     366,   367,   372,   373,   374,   375,   378,   385,   443,   444,
       3,   147,   169,     3,   160,   166,   373,   378,   446,   447,
     448,   449,   452,   462,     3,   384,    47,    48,    67,   203,
      93,   113,    36,    68,    93,   101,   113,   180,   201,   262,
      48,   201,   566,   377,     3,     4,     5,     6,     7,     8,
     186,   379,   559,   560,   132,   195,   273,     3,    44,     3,
     378,   190,     3,   149,   273,   378,    37,    52,   562,   190,
       3,     3,    78,   149,     3,   521,   378,   510,   377,   466,
       3,   465,   129,   380,   273,   273,   273,   273,   190,   273,
      67,   203,   468,   273,   273,     3,     4,   238,     3,   385,
     385,   549,   377,   378,     9,   385,   385,   385,   267,   385,
     422,   377,   378,    34,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   385,     3,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      34,    44,   445,   129,   152,   380,   380,   377,   445,   378,
       3,   378,   424,   446,   233,   380,    69,   146,   170,   183,
     208,   231,   453,   455,    44,   451,   451,    46,    46,    64,
      77,     3,    77,    64,   210,     3,    64,    77,    64,   210,
       3,    77,     3,    64,    77,    64,   269,   238,    18,   177,
     368,   369,   370,   371,   567,     3,   379,   380,     3,     3,
      54,    55,    57,    59,    60,    75,   107,   108,   109,   110,
     116,   125,   145,   153,   168,   175,   178,   181,   182,   198,
     232,   233,   236,   237,   242,   244,   249,   250,   255,   257,
     263,   265,   270,   543,   190,     3,    16,   143,   188,   551,
     552,   553,     3,   190,   273,     3,   551,   100,   150,   251,
     563,     3,   190,     3,   149,   273,   566,     3,     3,   511,
     129,   238,   512,    26,   266,   425,   259,   446,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   233,   378,   501,
       3,   233,   501,     3,   385,   390,   394,   385,   385,   422,
     117,   118,   267,     3,     3,   381,   392,   399,   385,    58,
     171,   247,   385,   420,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   379,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   379,
     385,   385,   385,   379,   385,   385,   385,   385,   385,   385,
      26,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   379,   379,   379,   379,   379,   385,   385,   379,
     379,   379,   385,   385,     5,   379,   379,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   379,
     385,   385,   385,   379,   379,   385,   385,   385,   385,   385,
       6,    18,   186,   311,   378,    13,    14,    16,    19,   385,
      38,    40,   225,   378,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,     3,   446,
       3,   444,     3,   474,     3,   126,   147,   260,   459,   450,
     445,   385,   379,   379,     3,   519,   447,   170,   208,   456,
     448,   156,   189,   454,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   543,     3,   238,     3,
       3,     3,     5,     3,   371,     5,     5,   269,     5,    56,
       5,   560,   378,   378,   378,   539,   539,   539,   539,   539,
     539,   378,   539,   539,   539,    57,   540,   540,   539,   539,
     539,   378,   540,   539,   540,   378,   378,    18,    34,    71,
     106,     3,   543,     3,     3,     3,   379,   380,   259,   378,
       3,     3,   190,   379,   190,    44,   482,     3,   190,   273,
       3,   147,   209,   343,   377,   378,   545,   546,   379,   380,
       4,   229,   230,   513,   385,   191,   435,   446,   425,   466,
     468,     3,   506,     3,   502,   264,   424,   506,   264,   424,
     380,   379,   246,   117,   118,   385,   385,   379,   385,   391,
     424,   129,   380,   379,   129,   385,   380,   380,   380,   379,
     379,   379,   379,   379,   379,   380,   380,   380,   380,   379,
     380,   380,   380,   379,   379,   379,   379,   380,   380,   379,
     380,   379,   379,   379,    44,   380,   380,   380,   380,   313,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     380,   380,   380,   379,   380,   342,   342,   342,   379,   380,
     379,   380,   379,   342,   342,   380,   379,   379,   379,   379,
     379,   379,   379,   379,   380,   380,   380,   380,   380,   380,
     380,   380,   379,   380,   379,   379,   379,   380,   379,   380,
     379,   380,     6,   186,   395,   397,   385,   385,   378,   385,
      43,   378,   378,   378,   386,   381,   425,   129,   380,   445,
     157,   157,   157,   424,   459,   379,    20,   377,   380,   425,
     454,   454,   156,   190,   448,   156,    71,   127,   194,   254,
     543,   543,     3,   215,   215,   538,   543,     3,   238,   238,
       5,     5,   551,   551,     5,   541,   542,   541,   541,     4,
     544,   541,   541,   541,   542,   542,   541,   541,   541,   544,
     542,   541,   542,     5,     5,   186,   381,   378,   385,   378,
     543,   543,   543,   206,   553,   261,     3,   319,   320,   321,
     322,   470,   471,   259,   378,   190,     3,    44,    53,     3,
     216,   217,   133,   483,   259,   378,     3,     3,   190,    87,
       3,    64,    71,   127,   131,   148,   157,   194,   254,   530,
     531,   537,   451,     3,    80,    92,   128,   136,   186,   235,
     269,   378,   514,   515,   516,    56,   172,   438,   425,    20,
     192,   380,   492,   379,   380,   378,   503,   492,   503,   492,
     390,   385,   385,   117,   246,    84,   380,   381,   379,   385,
     385,   385,   129,   154,   421,   421,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   543,   543,   385,
     385,   385,     4,   342,   342,   342,   342,   342,   342,   385,
     385,   385,   385,   378,   378,   378,   342,     5,   342,     5,
     342,   378,   378,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   390,   424,   396,   398,
      43,   385,   389,   385,   387,   393,   388,   393,   424,   134,
     426,   446,     3,   459,   133,   460,   460,   460,   379,   451,
     385,     3,     3,   435,   448,   385,   190,   259,   457,   458,
     448,   378,   157,   157,   378,   538,   538,   543,    18,    37,
      41,    44,    46,    49,    64,    71,    72,   106,   123,   157,
     186,   194,   254,   490,   538,     3,     3,   379,   379,   379,
     380,   252,   272,    75,    76,   379,   380,   379,   379,   379,
      71,   385,   470,    55,    59,   107,   110,   125,   145,   153,
     242,   244,   263,   554,   378,   378,   378,   378,   378,   379,
     380,   261,   470,     3,   259,   378,    53,   555,   133,    38,
     100,   150,   234,   251,   238,   484,   261,   470,   259,   378,
     190,     3,     3,   378,   545,     3,   378,   157,   148,   157,
     378,   378,   157,   378,   379,   380,     3,   424,     4,    80,
     242,     6,     4,     4,   378,   515,   380,     3,     5,   436,
     437,   385,   205,   569,   106,   385,   157,     3,     3,   106,
     385,   505,   380,   492,   492,   117,   385,   378,   391,   133,
     379,   379,   380,   379,   385,   385,   379,   379,   379,   379,
     379,   380,   380,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   380,   379,   378,   378,   378,   378,   378,
     378,   379,   380,   380,   379,   379,   400,   401,   402,   378,
     379,   380,   378,   379,   380,   378,   418,   419,   379,   380,
     380,   380,   379,   379,   380,   380,   379,   380,   379,   380,
     379,   380,   379,   379,   379,   379,   390,   424,   385,   424,
     424,   379,   424,   379,   379,    56,   141,   430,   425,   156,
     378,   378,   378,     3,    20,    20,   377,   438,   385,   378,
     458,   385,   378,   378,     3,   536,   490,   490,   538,   186,
       3,   378,   378,   378,    45,     3,   378,     4,     4,     5,
       6,     7,    65,   325,   326,   327,   378,   157,   157,   490,
     206,    44,    53,     5,   233,     4,   542,     4,   542,   542,
     378,   379,   379,    44,    53,   470,     3,     3,     3,     3,
       3,   378,   379,   378,   261,   470,   555,     3,     4,     5,
       6,     7,     8,    10,    12,    16,    17,    18,    20,    24,
      25,    26,    27,    28,    38,    43,    44,    47,    52,    53,
      54,    55,    56,    59,    61,    62,    63,    66,    67,    69,
      70,    71,    75,    89,    94,    99,   100,   101,   106,   107,
     109,   110,   111,   112,   115,   117,   118,   119,   120,   122,
     124,   125,   127,   129,   130,   132,   133,   134,   135,   141,
     143,   145,   146,   148,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   159,   170,   172,   174,   183,   185,   186,
     187,   188,   189,   190,   191,   194,   195,   200,   202,   203,
     204,   206,   208,   210,   211,   212,   213,   232,   233,   234,
     242,   244,   245,   246,   251,   253,   254,   255,   259,   263,
     264,   266,   267,   268,   269,   273,   314,   315,   316,   317,
     318,   376,   377,   378,   379,   380,   382,   556,   111,     3,
     485,   259,   486,   378,   379,   261,   470,     3,   259,   378,
     133,   530,    71,   127,   194,   254,   385,   378,   378,   378,
       3,   441,   441,   378,   536,   526,   545,   531,   543,   515,
     379,   516,    42,   105,   377,   428,   428,   380,   174,   380,
       3,    26,   570,   251,    20,   379,   380,   504,   190,   494,
       4,   385,   385,   379,    97,    98,   102,   104,   137,   138,
     140,   270,   271,   385,   385,   385,   404,   405,   403,   406,
     407,   408,   385,   385,   343,   431,   431,   431,   409,   342,
       4,     5,   413,   342,     4,     5,   417,   431,   431,   385,
     385,   385,   385,   385,   385,   385,   385,   379,   379,   379,
     379,   379,   385,   427,   385,   435,   426,     3,   461,   461,
     461,   378,   385,   385,     3,   569,   441,   379,     3,   533,
       3,   532,   379,   380,   490,     5,   385,     5,    44,    71,
     194,   254,   385,   378,   378,   378,   385,   554,    53,   555,
     379,     4,   385,    53,   555,   379,   379,   379,   379,   380,
     470,   470,   378,   379,   117,   555,   555,   555,   555,   555,
     555,   210,   380,   378,   269,   487,   470,   378,   379,   378,
     261,   470,   264,   379,   378,   157,   157,   378,   379,   533,
     441,   441,   379,   380,   379,   532,   379,    41,   165,   190,
     221,   343,   525,   538,   379,     3,   437,   385,   385,   380,
     493,   106,   385,   106,   385,   378,    81,   569,   379,   379,
     379,   379,   379,   379,   431,   431,   431,   431,   431,   431,
     379,   380,   379,    56,   191,   433,   433,   433,   431,   378,
     379,   379,   431,   378,   379,   379,   431,   433,   433,   379,
     379,   379,   379,   379,   380,   379,   379,   428,   269,   380,
     429,   438,   430,   379,   380,   379,   379,     3,    20,   379,
      18,   379,   380,   379,   380,     3,   379,   380,   379,   379,
     380,   378,   378,   157,   379,   379,   379,   379,   379,    44,
      53,   555,   117,   379,   555,   117,     3,   379,   379,   470,
     117,   117,   117,   117,   117,   117,    53,     3,   385,    71,
     379,   470,   470,   378,   379,   129,   526,   545,   385,   378,
     378,   536,   379,   379,   379,     3,   379,     5,    20,   378,
       3,    56,    56,   428,     3,     3,   498,   505,   378,   495,
     433,   433,   433,   433,   433,   433,   385,     3,   432,    56,
     379,   379,   379,   433,   410,   342,   342,   433,   414,   342,
     342,   433,   379,   379,   385,   207,   385,   133,   439,   435,
       3,   379,   385,   262,   200,     3,     3,     5,    50,    51,
       5,   385,   385,    53,   555,   117,   117,   379,   379,    70,
     124,   149,   159,   268,   555,   379,   378,   379,   379,   470,
     378,   379,   533,   532,   379,   200,     5,     3,   100,   241,
     197,   261,   197,    20,   380,   379,     3,    94,   496,   379,
     379,   379,   379,   379,   379,   379,   380,     3,   434,   379,
     431,   378,   378,   379,   431,   378,   378,   379,   379,   428,
     223,   251,   152,   440,   438,     3,   379,   379,   379,   379,
     555,   117,   117,   385,   379,     5,   379,   379,     3,   379,
       3,     3,   378,   378,   378,   385,     3,   379,   380,    83,
     251,     3,   428,   380,   433,   411,   412,   433,   415,   416,
     224,   224,   441,   378,    50,    51,   117,   379,   379,   200,
     377,   378,     3,     3,     3,    20,     3,   497,     3,   379,
     431,   431,   379,   431,   431,   173,   173,     3,   534,   238,
       3,     3,   534,   379,   379,   379,   385,   233,   428,   433,
     433,   433,   433,   379,   380,   378,   377,   378,   378,   379,
     378,   222,   498,   379,   379,   379,   379,   535,     3,     5,
       3,   534,   534,   535,   221,   527,   528,     5,    18,    90,
     176,   190,   379,   378,   379,   379,    18,     3,   379,   380,
      90,   262,   144,   130,   193,   228,   100,   251,   534,   535,
     535,   264,   528,    91,   142,    67,   185,   203,   233,    67,
     185,   203,   233,   379,   167,   106,   186,   106,   186,   535,
     243,     4,   177,   190,   190,   184,   184,     5,     5
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
#line 474 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 480 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 481 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 483 "parser/evoparser.y"
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
#line 496 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 498 "parser/evoparser.y"
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
#line 526 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 534 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 542 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 548 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 555 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 556 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 557 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 558 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 559 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 560 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 561 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 562 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 563 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 564 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 565 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 566 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 567 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 568 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 569 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 570 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 571 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 572 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 573 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 575 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 580 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 581 "parser/evoparser.y"
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
#line 589 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 590 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 591 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 592 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 593 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 594 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 599 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 601 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 604 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 605 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 606 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 607 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 608 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 611 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 612 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 616 "parser/evoparser.y"
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
#line 625 "parser/evoparser.y"
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
#line 643 "parser/evoparser.y"
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
#line 652 "parser/evoparser.y"
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
#line 671 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 672 "parser/evoparser.y"
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
#line 732 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 741 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 747 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 752 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 754 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 756 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 761 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 766 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 772 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 776 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 776 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 777 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 777 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 778 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 779 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 786 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 787 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 794 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 795 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 805 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 809 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 810 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 811 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 812 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 813 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 814 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 815 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 816 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 820 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 821 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 822 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 823 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 824 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 825 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 827 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 828 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 829 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 830 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 831 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 832 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 833 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 834 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 835 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 836 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 837 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 838 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 840 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 841 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 842 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 843 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 844 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 845 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 846 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 847 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 848 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 849 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 850 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 851 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 852 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 853 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 854 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 855 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 857 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 858 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 859 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 860 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 861 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 862 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 865 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 866 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 867 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 868 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 869 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 870 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 871 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 872 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 873 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 874 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 875 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 876 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 877 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 878 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 879 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 880 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 881 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 882 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 883 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 884 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 885 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 886 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 887 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 888 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 889 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 890 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 891 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 892 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 893 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 894 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 895 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 896 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 897 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 898 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 900 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 901 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 902 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 903 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 904 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 905 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 906 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 907 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 909 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 910 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 911 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 913 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 914 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 915 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 916 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 917 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 918 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 919 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 920 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 921 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 922 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 923 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 924 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 925 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 926 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 927 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 928 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 929 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 930 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 932 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 933 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 934 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 935 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 936 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 938 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 939 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 941 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 942 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 943 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 945 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 946 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 947 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 948 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 955 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 962 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 969 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 973 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 977 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 981 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 985 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 989 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 995 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 996 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 997 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 1001 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 1007 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 1013 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 1014 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 1015 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 1016 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 1017 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 1018 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 1019 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 1020 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 1021 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 1025 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 1027 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 1029 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 1031 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 1035 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1043 "parser/evoparser.y"
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
#line 1053 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1054 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1057 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1058 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1062 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1070 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1078 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1086 "parser/evoparser.y"
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
#line 1100 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 241:
#line 1109 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 242:
#line 1114 "parser/evoparser.y"
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
#line 1127 "parser/evoparser.y"
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
#line 1140 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 247:
#line 1142 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 248:
#line 1145 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 249:
#line 1152 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 250:
#line 1160 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1161 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 252:
#line 1162 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1165 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 254:
#line 1166 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 1170 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1179 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 260:
#line 1181 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 263:
#line 1189 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 264:
#line 1191 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 269:
#line 1203 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 270:
#line 1209 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 271:
#line 1216 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 272:
#line 1224 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 273:
#line 1225 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1226 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1227 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 276:
#line 1230 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 277:
#line 1231 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 278:
#line 1232 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 279:
#line 1233 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 280:
#line 1234 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 282:
#line 1238 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 283:
#line 1241 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 284:
#line 1242 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1245 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1246 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 287:
#line 1247 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 288:
#line 1248 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 289:
#line 1249 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 290:
#line 1250 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 291:
#line 1251 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 292:
#line 1252 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 293:
#line 1253 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 294:
#line 1256 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 295:
#line 1257 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1259 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 297:
#line 1267 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 298:
#line 1272 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 299:
#line 1273 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 300:
#line 1274 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 301:
#line 1277 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1278 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 305:
#line 1287 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 306:
#line 1295 "parser/evoparser.y"
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
#line 1304 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 308:
#line 1305 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 309:
#line 1307 "parser/evoparser.y"
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
#line 1316 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 311:
#line 1321 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 312:
#line 1327 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 313:
#line 1334 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 314:
#line 1338 "parser/evoparser.y"
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
#line 1358 "parser/evoparser.y"
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
#line 1384 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 319:
#line 1386 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 320:
#line 1388 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 321:
#line 1390 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 322:
#line 1392 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 323:
#line 1395 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1396 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 326:
#line 1400 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 327:
#line 1401 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 328:
#line 1404 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 329:
#line 1405 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 330:
#line 1408 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 331:
#line 1409 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 332:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 335:
#line 1417 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 336:
#line 1418 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 337:
#line 1423 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 338:
#line 1425 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1427 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 341:
#line 1431 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1432 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 343:
#line 1435 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1436 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 345:
#line 1439 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 346:
#line 1444 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 347:
#line 1454 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 348:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 349:
#line 1462 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 350:
#line 1463 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 351:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1469 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 353:
#line 1473 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1475 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 357:
#line 1481 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 358:
#line 1486 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 359:
#line 1493 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1500 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1512 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 363:
#line 1513 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 364:
#line 1518 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 365:
#line 1525 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 366:
#line 1532 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 367:
#line 1540 "parser/evoparser.y"
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
#line 1550 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 369:
#line 1558 "parser/evoparser.y"
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
#line 1568 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 371:
#line 1576 "parser/evoparser.y"
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
#line 1585 "parser/evoparser.y"
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
#line 1594 "parser/evoparser.y"
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
#line 1604 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 375:
#line 1612 "parser/evoparser.y"
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
#line 1621 "parser/evoparser.y"
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
#line 1630 "parser/evoparser.y"
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
#line 1640 "parser/evoparser.y"
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
#line 1649 "parser/evoparser.y"
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
#line 1661 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 381:
#line 1666 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 382:
#line 1671 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 383:
#line 1677 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 384:
#line 1684 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 385:
#line 1691 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 386:
#line 1698 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 387:
#line 1708 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 388:
#line 1715 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 389:
#line 1724 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 390:
#line 1731 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 391:
#line 1737 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 392:
#line 1745 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 393:
#line 1751 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 395:
#line 1759 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 396:
#line 1760 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 397:
#line 1761 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 398:
#line 1762 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 399:
#line 1778 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 400:
#line 1779 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 401:
#line 1780 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 402:
#line 1784 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 403:
#line 1790 "parser/evoparser.y"
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
#line 1801 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 405:
#line 1807 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 406:
#line 1814 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 407:
#line 1820 "parser/evoparser.y"
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
#line 1836 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 409:
#line 1843 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1852 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 411:
#line 1859 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 412:
#line 1865 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 413:
#line 1875 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 414:
#line 1879 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 415:
#line 1880 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 416:
#line 1886 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 417:
#line 1895 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 418:
#line 1896 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 419:
#line 1897 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 420:
#line 1901 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 421:
#line 1902 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 422:
#line 1903 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 423:
#line 1904 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 424:
#line 1905 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 425:
#line 1906 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 428:
#line 1915 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 429:
#line 1916 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 431:
#line 1921 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 433:
#line 1926 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 434:
#line 1931 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 435:
#line 1940 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 436:
#line 1946 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 437:
#line 1952 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 438:
#line 1959 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 439:
#line 1965 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 440:
#line 1972 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 441:
#line 1978 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 442:
#line 1984 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 443:
#line 1990 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 444:
#line 1996 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 445:
#line 2002 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 446:
#line 2008 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 447:
#line 2014 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 448:
#line 2020 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 449:
#line 2026 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 450:
#line 2032 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 451:
#line 2038 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 452:
#line 2044 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 453:
#line 2050 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 454:
#line 2056 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 455:
#line 2062 "parser/evoparser.y"
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

  case 456:
#line 2075 "parser/evoparser.y"
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

  case 457:
#line 2086 "parser/evoparser.y"
    { ;}
    break;

  case 458:
#line 2087 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 459:
#line 2088 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 460:
#line 2092 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 461:
#line 2100 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 462:
#line 2106 "parser/evoparser.y"
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
#line 2119 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 465:
#line 2119 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 468:
#line 2127 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 469:
#line 2128 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 470:
#line 2129 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 471:
#line 2133 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 472:
#line 2134 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 473:
#line 2135 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 474:
#line 2139 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 475:
#line 2147 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 476:
#line 2156 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 477:
#line 2157 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 478:
#line 2158 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 479:
#line 2159 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 480:
#line 2160 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 484:
#line 2167 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 485:
#line 2171 "parser/evoparser.y"
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
#line 2181 "parser/evoparser.y"
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
#line 2193 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 488:
#line 2194 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 489:
#line 2194 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 490:
#line 2197 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 491:
#line 2198 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 492:
#line 2199 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 493:
#line 2200 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 494:
#line 2204 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 495:
#line 2207 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 496:
#line 2208 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 497:
#line 2209 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 498:
#line 2210 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 499:
#line 2216 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 500:
#line 2222 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 501:
#line 2227 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 502:
#line 2232 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 503:
#line 2236 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 504:
#line 2240 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 505:
#line 2242 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 508:
#line 2248 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 509:
#line 2249 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 510:
#line 2253 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 511:
#line 2254 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 512:
#line 2258 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 513:
#line 2259 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 514:
#line 2260 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 521:
#line 2275 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 522:
#line 2276 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 523:
#line 2277 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 524:
#line 2278 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 525:
#line 2279 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 526:
#line 2280 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 527:
#line 2281 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 528:
#line 2282 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 529:
#line 2287 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 530:
#line 2296 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 531:
#line 2303 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 532:
#line 2304 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 533:
#line 2305 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 534:
#line 2310 "parser/evoparser.y"
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
#line 2321 "parser/evoparser.y"
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
#line 2333 "parser/evoparser.y"
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
#line 2344 "parser/evoparser.y"
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
#line 2359 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 539:
#line 2363 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 540:
#line 2367 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 541:
#line 2368 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 542:
#line 2373 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 543:
#line 2375 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 544:
#line 2377 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 545:
#line 2379 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 546:
#line 2382 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 547:
#line 2383 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 548:
#line 2389 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 549:
#line 2394 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 550:
#line 2396 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 551:
#line 2398 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 552:
#line 2400 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 553:
#line 2402 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 554:
#line 2406 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 555:
#line 2410 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 556:
#line 2411 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 557:
#line 2416 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 558:
#line 2426 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 560:
#line 2439 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 561:
#line 2447 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 562:
#line 2455 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 564:
#line 2463 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 565:
#line 2464 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 566:
#line 2465 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 567:
#line 2466 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 568:
#line 2468 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 569:
#line 2470 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 570:
#line 2472 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 573:
#line 2480 "parser/evoparser.y"
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
#line 2495 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 575:
#line 2503 "parser/evoparser.y"
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
#line 2517 "parser/evoparser.y"
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
#line 2531 "parser/evoparser.y"
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
#line 2545 "parser/evoparser.y"
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
#line 2557 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 580:
#line 2558 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 581:
#line 2559 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 582:
#line 2562 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 583:
#line 2563 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 584:
#line 2566 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 585:
#line 2567 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 586:
#line 2568 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 587:
#line 2569 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 588:
#line 2570 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 589:
#line 2571 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 590:
#line 2572 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 591:
#line 2573 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 592:
#line 2575 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 593:
#line 2577 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 594:
#line 2579 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 595:
#line 2581 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 596:
#line 2583 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 597:
#line 2585 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 598:
#line 2588 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 599:
#line 2589 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 600:
#line 2592 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 601:
#line 2593 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 602:
#line 2596 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 603:
#line 2597 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 605:
#line 2601 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 606:
#line 2602 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 607:
#line 2603 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 608:
#line 2604 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 609:
#line 2605 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 610:
#line 2606 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 611:
#line 2607 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 612:
#line 2608 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 613:
#line 2609 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 614:
#line 2610 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 615:
#line 2611 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 616:
#line 2612 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 617:
#line 2613 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 618:
#line 2614 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 619:
#line 2615 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 620:
#line 2616 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 621:
#line 2617 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 622:
#line 2620 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 623:
#line 2621 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 624:
#line 2624 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 625:
#line 2626 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 626:
#line 2634 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 627:
#line 2635 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 629:
#line 2637 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 630:
#line 2638 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 631:
#line 2639 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 632:
#line 2640 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 633:
#line 2641 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 634:
#line 2642 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 635:
#line 2643 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 636:
#line 2644 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 637:
#line 2645 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 638:
#line 2652 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 639:
#line 2653 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 640:
#line 2654 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 641:
#line 2655 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 642:
#line 2656 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 643:
#line 2657 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 644:
#line 2658 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 645:
#line 2659 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 646:
#line 2660 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 647:
#line 2661 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 648:
#line 2662 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 649:
#line 2663 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 650:
#line 2664 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 651:
#line 2665 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 652:
#line 2666 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 653:
#line 2667 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 654:
#line 2668 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 655:
#line 2669 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 656:
#line 2670 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 657:
#line 2671 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 658:
#line 2672 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 659:
#line 2675 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 660:
#line 2676 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 661:
#line 2677 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 662:
#line 2680 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 663:
#line 2681 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 664:
#line 2684 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 665:
#line 2685 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 666:
#line 2686 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 668:
#line 2690 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 669:
#line 2691 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 670:
#line 2695 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 671:
#line 2696 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 672:
#line 2697 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 673:
#line 2698 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 674:
#line 2699 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 675:
#line 2700 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 676:
#line 2701 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 677:
#line 2702 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 678:
#line 2703 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 679:
#line 2704 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 680:
#line 2705 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 681:
#line 2706 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 682:
#line 2707 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 683:
#line 2708 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 684:
#line 2709 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 685:
#line 2710 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 686:
#line 2711 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 687:
#line 2712 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 688:
#line 2713 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 689:
#line 2714 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 690:
#line 2715 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 691:
#line 2716 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 692:
#line 2717 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 693:
#line 2718 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 694:
#line 2719 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 695:
#line 2720 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 696:
#line 2721 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 697:
#line 2722 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 698:
#line 2723 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 699:
#line 2724 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 700:
#line 2725 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 701:
#line 2726 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 702:
#line 2727 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 703:
#line 2728 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 704:
#line 2731 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 705:
#line 2732 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 706:
#line 2736 "parser/evoparser.y"
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
#line 2748 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 708:
#line 2749 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 709:
#line 2750 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 710:
#line 2754 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 711:
#line 2757 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 712:
#line 2758 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 716:
#line 2762 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 717:
#line 2763 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 718:
#line 2771 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 719:
#line 2776 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 720:
#line 2782 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 721:
#line 2788 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 722:
#line 2795 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 723:
#line 2802 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 724:
#line 2808 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 725:
#line 2814 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 726:
#line 2821 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 731:
#line 2837 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 732:
#line 2838 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 733:
#line 2839 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 734:
#line 2840 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 735:
#line 2843 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 736:
#line 2844 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 737:
#line 2845 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 738:
#line 2846 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 739:
#line 2847 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 740:
#line 2848 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 741:
#line 2849 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 742:
#line 2850 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 743:
#line 2851 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 744:
#line 2852 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 753:
#line 2869 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 754:
#line 2870 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 875:
#line 2888 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 876:
#line 2895 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 877:
#line 2900 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 878:
#line 2906 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 879:
#line 2912 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 880:
#line 2918 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 881:
#line 2929 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 882:
#line 2934 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 883:
#line 2940 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 886:
#line 2951 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 887:
#line 2952 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 888:
#line 2953 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 889:
#line 2954 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 890:
#line 2955 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 891:
#line 2956 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 892:
#line 2957 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 893:
#line 2964 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 894:
#line 2969 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 895:
#line 2976 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 896:
#line 2977 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 897:
#line 2980 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 898:
#line 2981 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 899:
#line 2982 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 900:
#line 2985 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 901:
#line 2990 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 902:
#line 2996 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 903:
#line 3005 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 904:
#line 3013 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 905:
#line 3023 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 906:
#line 3028 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 909:
#line 3041 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 910:
#line 3042 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 911:
#line 3043 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 912:
#line 3044 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 913:
#line 3045 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 914:
#line 3046 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 915:
#line 3047 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 916:
#line 3048 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 917:
#line 3051 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 918:
#line 3056 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 919:
#line 3062 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 920:
#line 3072 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 921:
#line 3079 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 922:
#line 3086 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 923:
#line 3094 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 925:
#line 3104 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 927:
#line 3108 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 928:
#line 3109 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11015 "parser/evoparser.tab.c"
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


#line 3112 "parser/evoparser.y"

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
