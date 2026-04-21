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
     LESS = 406,
     LONGTEXT = 407,
     LOW_PRIORITY = 408,
     LEFT = 409,
     LEADING = 410,
     LIMIT = 411,
     LOCKED = 412,
     OFFSET = 413,
     LONGBLOB = 414,
     MATCH = 415,
     MAXVALUE = 416,
     MEDIUMTEXT = 417,
     MINUS = 418,
     MODIFY = 419,
     MEDIUMBLOB = 420,
     MEDIUMINT = 421,
     NATURAL = 422,
     NODE = 423,
     NO_ACTION = 424,
     NULLX = 425,
     OPEN = 426,
     OUT = 427,
     OUTER = 428,
     ON = 429,
     ORDER = 430,
     ONDUPLICATE = 431,
     PARTIAL = 432,
     PRIMARY = 433,
     PROCEDURE = 434,
     QUICK = 435,
     RANGE = 436,
     REAL = 437,
     RECLAIM = 438,
     REFERENCES = 439,
     RENAME = 440,
     RESIGNAL = 441,
     RESTRICT = 442,
     RETURN = 443,
     RETURNING = 444,
     RETURNS = 445,
     ROLLUP = 446,
     RIGHT = 447,
     REPLACE = 448,
     ROW = 449,
     SIGNAL = 450,
     TRIGGER = 451,
     UNTIL = 452,
     SQL_SMALL_RESULT = 453,
     SCHEMA = 454,
     SHARD = 455,
     SHARDS = 456,
     SHARE = 457,
     SKIP = 458,
     SOME = 459,
     SQL_CALC_FOUND_ROWS = 460,
     SQL_BIG_RESULT = 461,
     SIMPLE = 462,
     STDIN = 463,
     STDOUT = 464,
     STRAIGHT_JOIN = 465,
     SMALLINT = 466,
     SET = 467,
     SELECT = 468,
     QUOTE = 469,
     TINYTEXT = 470,
     TINYINT = 471,
     TO = 472,
     TEMPORARY = 473,
     GLOBAL = 474,
     PRESERVE = 475,
     TEXT = 476,
     THAN = 477,
     TIMESTAMP = 478,
     TABLE = 479,
     THEN = 480,
     TRAILING = 481,
     TRUNCATE = 482,
     TINYBLOB = 483,
     TIME = 484,
     UPDATE = 485,
     UNSIGNED = 486,
     UNION = 487,
     UNIQUE = 488,
     UUID = 489,
     ARRAY = 490,
     JSON = 491,
     VIEW = 492,
     USING = 493,
     USE = 494,
     HASH = 495,
     VALIDATE = 496,
     VARCHAR = 497,
     VALUES = 498,
     VARBINARY = 499,
     WHERE = 500,
     WHEN = 501,
     WHILE = 502,
     WITH = 503,
     YEAR = 504,
     YEAR_MONTH = 505,
     ZEROFILL = 506,
     EXISTS = 507,
     FSUBSTRING = 508,
     FTRIM = 509,
     FDATE_ADD = 510,
     FDATE_SUB = 511,
     FDATEDIFF = 512,
     FYEAR = 513,
     FMONTH = 514,
     FDAY = 515,
     FHOUR = 516,
     FMINUTE = 517,
     FSECOND = 518,
     FNOW = 519,
     FLEFT = 520,
     FRIGHT = 521,
     FLPAD = 522,
     FRPAD = 523,
     FREVERSE = 524,
     FREPEAT = 525,
     FINSTR = 526,
     FLOCATE = 527,
     FABS = 528,
     FCEIL = 529,
     FFLOOR = 530,
     FROUND = 531,
     FPOWER = 532,
     FSQRT = 533,
     FMOD = 534,
     FRAND = 535,
     FLOG = 536,
     FLOG10 = 537,
     FSIGN = 538,
     FPI = 539,
     FCAST = 540,
     FCONVERT = 541,
     FNULLIF = 542,
     FIFNULL = 543,
     FIF = 544,
     UNKNOWN = 545,
     FGROUP_CONCAT = 546,
     SEPARATOR = 547,
     FCOUNT = 548,
     FSUM = 549,
     FAVG = 550,
     FMIN = 551,
     FMAX = 552,
     FUPPER = 553,
     FLOWER = 554,
     FLENGTH = 555,
     FCONCAT = 556,
     FREPLACE = 557,
     FCOALESCE = 558,
     FGEN_RANDOM_UUID = 559,
     FGEN_RANDOM_UUID_V7 = 560,
     FSNOWFLAKE_ID = 561,
     FLAST_INSERT_ID = 562,
     FSCOPE_IDENTITY = 563,
     FAT_IDENTITY = 564,
     FAT_LAST_INSERT_ID = 565,
     FEVO_SLEEP = 566,
     FEVO_JITTER = 567,
     FROW_NUMBER = 568,
     FRANK = 569,
     FDENSE_RANK = 570,
     FLEAD = 571,
     FLAG = 572,
     FNTILE = 573,
     FPERCENT_RANK = 574,
     FCUME_DIST = 575,
     OVER = 576,
     PARTITION = 577,
     FJSON_EXTRACT = 578,
     FJSON_UNQUOTE = 579,
     FJSON_TYPE = 580,
     FJSON_LENGTH = 581,
     FJSON_DEPTH = 582,
     FJSON_VALID = 583,
     FJSON_KEYS = 584,
     FJSON_PRETTY = 585,
     FJSON_QUOTE = 586,
     FJSON_SET = 587,
     FJSON_INSERT = 588,
     FJSON_REPLACE = 589,
     FJSON_REMOVE = 590,
     FJSON_CONTAINS = 591,
     FJSON_CONTAINS_PATH = 592,
     FJSON_SEARCH = 593,
     FJSON_OBJECT = 594,
     FJSON_ARRAY = 595,
     FJSON_ARRAYAGG = 596,
     SEQUENCE = 597,
     FNEXTVAL = 598,
     FCURRVAL = 599,
     FSETVAL = 600,
     FLASTVAL = 601,
     START = 602,
     INCREMENT = 603,
     MINVALUE = 604,
     CYCLE = 605,
     FARRAY_LENGTH = 606,
     FUNNEST = 607
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
#define LESS 406
#define LONGTEXT 407
#define LOW_PRIORITY 408
#define LEFT 409
#define LEADING 410
#define LIMIT 411
#define LOCKED 412
#define OFFSET 413
#define LONGBLOB 414
#define MATCH 415
#define MAXVALUE 416
#define MEDIUMTEXT 417
#define MINUS 418
#define MODIFY 419
#define MEDIUMBLOB 420
#define MEDIUMINT 421
#define NATURAL 422
#define NODE 423
#define NO_ACTION 424
#define NULLX 425
#define OPEN 426
#define OUT 427
#define OUTER 428
#define ON 429
#define ORDER 430
#define ONDUPLICATE 431
#define PARTIAL 432
#define PRIMARY 433
#define PROCEDURE 434
#define QUICK 435
#define RANGE 436
#define REAL 437
#define RECLAIM 438
#define REFERENCES 439
#define RENAME 440
#define RESIGNAL 441
#define RESTRICT 442
#define RETURN 443
#define RETURNING 444
#define RETURNS 445
#define ROLLUP 446
#define RIGHT 447
#define REPLACE 448
#define ROW 449
#define SIGNAL 450
#define TRIGGER 451
#define UNTIL 452
#define SQL_SMALL_RESULT 453
#define SCHEMA 454
#define SHARD 455
#define SHARDS 456
#define SHARE 457
#define SKIP 458
#define SOME 459
#define SQL_CALC_FOUND_ROWS 460
#define SQL_BIG_RESULT 461
#define SIMPLE 462
#define STDIN 463
#define STDOUT 464
#define STRAIGHT_JOIN 465
#define SMALLINT 466
#define SET 467
#define SELECT 468
#define QUOTE 469
#define TINYTEXT 470
#define TINYINT 471
#define TO 472
#define TEMPORARY 473
#define GLOBAL 474
#define PRESERVE 475
#define TEXT 476
#define THAN 477
#define TIMESTAMP 478
#define TABLE 479
#define THEN 480
#define TRAILING 481
#define TRUNCATE 482
#define TINYBLOB 483
#define TIME 484
#define UPDATE 485
#define UNSIGNED 486
#define UNION 487
#define UNIQUE 488
#define UUID 489
#define ARRAY 490
#define JSON 491
#define VIEW 492
#define USING 493
#define USE 494
#define HASH 495
#define VALIDATE 496
#define VARCHAR 497
#define VALUES 498
#define VARBINARY 499
#define WHERE 500
#define WHEN 501
#define WHILE 502
#define WITH 503
#define YEAR 504
#define YEAR_MONTH 505
#define ZEROFILL 506
#define EXISTS 507
#define FSUBSTRING 508
#define FTRIM 509
#define FDATE_ADD 510
#define FDATE_SUB 511
#define FDATEDIFF 512
#define FYEAR 513
#define FMONTH 514
#define FDAY 515
#define FHOUR 516
#define FMINUTE 517
#define FSECOND 518
#define FNOW 519
#define FLEFT 520
#define FRIGHT 521
#define FLPAD 522
#define FRPAD 523
#define FREVERSE 524
#define FREPEAT 525
#define FINSTR 526
#define FLOCATE 527
#define FABS 528
#define FCEIL 529
#define FFLOOR 530
#define FROUND 531
#define FPOWER 532
#define FSQRT 533
#define FMOD 534
#define FRAND 535
#define FLOG 536
#define FLOG10 537
#define FSIGN 538
#define FPI 539
#define FCAST 540
#define FCONVERT 541
#define FNULLIF 542
#define FIFNULL 543
#define FIF 544
#define UNKNOWN 545
#define FGROUP_CONCAT 546
#define SEPARATOR 547
#define FCOUNT 548
#define FSUM 549
#define FAVG 550
#define FMIN 551
#define FMAX 552
#define FUPPER 553
#define FLOWER 554
#define FLENGTH 555
#define FCONCAT 556
#define FREPLACE 557
#define FCOALESCE 558
#define FGEN_RANDOM_UUID 559
#define FGEN_RANDOM_UUID_V7 560
#define FSNOWFLAKE_ID 561
#define FLAST_INSERT_ID 562
#define FSCOPE_IDENTITY 563
#define FAT_IDENTITY 564
#define FAT_LAST_INSERT_ID 565
#define FEVO_SLEEP 566
#define FEVO_JITTER 567
#define FROW_NUMBER 568
#define FRANK 569
#define FDENSE_RANK 570
#define FLEAD 571
#define FLAG 572
#define FNTILE 573
#define FPERCENT_RANK 574
#define FCUME_DIST 575
#define OVER 576
#define PARTITION 577
#define FJSON_EXTRACT 578
#define FJSON_UNQUOTE 579
#define FJSON_TYPE 580
#define FJSON_LENGTH 581
#define FJSON_DEPTH 582
#define FJSON_VALID 583
#define FJSON_KEYS 584
#define FJSON_PRETTY 585
#define FJSON_QUOTE 586
#define FJSON_SET 587
#define FJSON_INSERT 588
#define FJSON_REPLACE 589
#define FJSON_REMOVE 590
#define FJSON_CONTAINS 591
#define FJSON_CONTAINS_PATH 592
#define FJSON_SEARCH 593
#define FJSON_OBJECT 594
#define FJSON_ARRAY 595
#define FJSON_ARRAYAGG 596
#define SEQUENCE 597
#define FNEXTVAL 598
#define FCURRVAL 599
#define FSETVAL 600
#define FLASTVAL 601
#define START 602
#define INCREMENT 603
#define MINVALUE 604
#define CYCLE 605
#define FARRAY_LENGTH 606
#define FUNNEST 607




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
#line 871 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 884 "parser/evoparser.tab.c"

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
#define YYFINAL  87
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  370
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  175
/* YYNRULES -- Number of rules.  */
#define YYNRULES  887
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   607

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     365,   366,    26,    24,   367,    25,   364,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   363,
       2,   369,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   368,    30,     2,     2,     2,     2,     2,
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
     355,   356,   357,   358,   359,   360,   361,   362
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
     232,   237,   244,   249,   250,   252,   253,   260,   261,   269,
     270,   277,   278,   286,   287,   293,   298,   303,   308,   313,
     318,   323,   328,   333,   340,   341,   351,   352,   362,   363,
     373,   374,   385,   386,   397,   398,   409,   410,   421,   422,
     433,   434,   445,   446,   457,   458,   471,   472,   487,   488,
     503,   504,   515,   516,   529,   530,   545,   546,   561,   562,
     573,   574,   584,   585,   595,   604,   611,   618,   627,   632,
     640,   647,   652,   657,   662,   669,   678,   685,   692,   699,
     708,   717,   722,   729,   736,   743,   748,   753,   758,   765,
     770,   777,   782,   789,   793,   798,   803,   808,   812,   816,
     823,   828,   833,   838,   843,   848,   853,   860,   865,   870,
     875,   880,   885,   890,   895,   900,   909,   918,   927,   934,
     941,   950,   959,   966,   977,   982,   989,   998,  1003,  1008,
    1013,  1020,  1029,  1033,  1040,  1047,  1054,  1061,  1070,  1074,
    1083,  1094,  1098,  1102,  1106,  1110,  1114,  1116,  1118,  1123,
    1130,  1132,  1134,  1136,  1143,  1150,  1154,  1158,  1162,  1166,
    1170,  1174,  1178,  1182,  1186,  1191,  1198,  1202,  1208,  1213,
    1219,  1223,  1228,  1232,  1237,  1239,  1241,  1243,  1245,  1249,
    1262,  1275,  1276,  1279,  1280,  1285,  1288,  1293,  1294,  1296,
    1298,  1299,  1302,  1303,  1306,  1307,  1311,  1313,  1317,  1318,
    1322,  1325,  1330,  1331,  1335,  1337,  1341,  1344,  1349,  1352,
    1353,  1356,  1361,  1366,  1367,  1370,  1373,  1378,  1383,  1384,
    1387,  1389,  1393,  1394,  1397,  1400,  1403,  1406,  1409,  1412,
    1415,  1418,  1420,  1424,  1426,  1429,  1432,  1434,  1435,  1437,
    1441,  1443,  1445,  1449,  1455,  1459,  1463,  1468,  1475,  1485,
    1489,  1490,  1496,  1498,  1499,  1505,  1509,  1515,  1522,  1528,
    1529,  1531,  1533,  1534,  1536,  1538,  1540,  1543,  1546,  1547,
    1548,  1550,  1553,  1558,  1565,  1572,  1579,  1580,  1583,  1584,
    1586,  1590,  1594,  1596,  1605,  1608,  1611,  1614,  1615,  1622,
    1625,  1630,  1631,  1634,  1642,  1644,  1648,  1654,  1656,  1665,
    1675,  1686,  1696,  1708,  1719,  1732,  1744,  1758,  1768,  1780,
    1791,  1804,  1816,  1829,  1831,  1835,  1837,  1842,  1847,  1852,
    1859,  1861,  1865,  1868,  1872,  1878,  1880,  1884,  1885,  1888,
    1891,  1895,  1899,  1901,  1905,  1907,  1911,  1917,  1919,  1930,
    1941,  1959,  1972,  1992,  2004,  2011,  2020,  2027,  2034,  2041,
    2051,  2058,  2064,  2073,  2081,  2091,  2100,  2111,  2121,  2122,
    2124,  2127,  2129,  2140,  2147,  2148,  2149,  2155,  2156,  2161,
    2162,  2166,  2171,  2174,  2175,  2181,  2185,  2191,  2192,  2195,
    2198,  2201,  2204,  2206,  2207,  2208,  2212,  2214,  2218,  2222,
    2223,  2230,  2232,  2234,  2238,  2242,  2250,  2254,  2258,  2264,
    2270,  2272,  2281,  2289,  2297,  2299,  2300,  2308,  2309,  2313,
    2315,  2319,  2321,  2323,  2325,  2327,  2329,  2330,  2332,  2337,
    2341,  2343,  2347,  2350,  2353,  2356,  2358,  2361,  2364,  2367,
    2369,  2371,  2381,  2382,  2385,  2388,  2392,  2398,  2404,  2412,
    2418,  2420,  2425,  2430,  2434,  2440,  2444,  2450,  2451,  2454,
    2456,  2462,  2470,  2478,  2488,  2500,  2502,  2505,  2509,  2511,
    2521,  2533,  2552,  2553,  2558,  2562,  2568,  2574,  2584,  2595,
    2603,  2605,  2609,  2619,  2629,  2639,  2646,  2658,  2667,  2668,
    2670,  2673,  2675,  2679,  2685,  2693,  2698,  2703,  2709,  2715,
    2720,  2727,  2739,  2753,  2767,  2783,  2788,  2795,  2797,  2801,
    2803,  2807,  2809,  2813,  2814,  2819,  2825,  2830,  2836,  2841,
    2847,  2852,  2858,  2863,  2868,  2872,  2876,  2880,  2883,  2887,
    2892,  2897,  2899,  2903,  2904,  2909,  2910,  2914,  2917,  2921,
    2925,  2929,  2933,  2939,  2945,  2951,  2955,  2961,  2964,  2972,
    2978,  2986,  2992,  2995,  2999,  3002,  3006,  3009,  3013,  3019,
    3024,  3030,  3038,  3047,  3056,  3064,  3071,  3078,  3084,  3085,
    3089,  3095,  3096,  3098,  3099,  3102,  3105,  3106,  3111,  3115,
    3118,  3122,  3126,  3130,  3134,  3138,  3142,  3146,  3150,  3154,
    3158,  3160,  3162,  3164,  3166,  3168,  3172,  3178,  3181,  3186,
    3188,  3190,  3192,  3194,  3198,  3202,  3206,  3210,  3216,  3222,
    3224,  3226,  3228,  3232,  3234,  3238,  3242,  3243,  3245,  3247,
    3249,  3253,  3257,  3260,  3262,  3266,  3270,  3274,  3276,  3287,
    3297,  3310,  3322,  3335,  3347,  3362,  3376,  3377,  3379,  3381,
    3385,  3388,  3392,  3396,  3400,  3402,  3404,  3406,  3408,  3410,
    3412,  3414,  3416,  3418,  3420,  3421,  3424,  3429,  3435,  3441,
    3447,  3453,  3459,  3461,  3463,  3465,  3467,  3469,  3471,  3473,
    3475,  3477,  3479,  3481,  3483,  3485,  3487,  3489,  3491,  3493,
    3495,  3497,  3499,  3501,  3503,  3505,  3507,  3509,  3511,  3513,
    3515,  3517,  3519,  3521,  3523,  3525,  3527,  3529,  3531,  3533,
    3535,  3537,  3539,  3541,  3543,  3545,  3547,  3549,  3551,  3553,
    3555,  3557,  3559,  3561,  3563,  3565,  3567,  3569,  3571,  3573,
    3575,  3577,  3579,  3581,  3583,  3585,  3587,  3589,  3591,  3593,
    3595,  3597,  3599,  3601,  3603,  3605,  3607,  3609,  3611,  3613,
    3615,  3617,  3619,  3621,  3623,  3625,  3627,  3629,  3631,  3633,
    3635,  3637,  3639,  3641,  3643,  3645,  3647,  3649,  3651,  3653,
    3655,  3657,  3659,  3661,  3663,  3665,  3667,  3669,  3671,  3673,
    3675,  3677,  3679,  3681,  3683,  3685,  3687,  3689,  3691,  3693,
    3695,  3697,  3699,  3701,  3703,  3705,  3707,  3711,  3717,  3721,
    3727,  3729,  3734,  3740,  3742,  3746,  3748,  3750,  3752,  3754,
    3756,  3758,  3760,  3762,  3776,  3778,  3780,  3782,  3784,  3786,
    3788,  3792,  3798,  3803,  3808,  3810,  3816,  3817,  3820,  3824,
    3827,  3831,  3834,  3837,  3840,  3842,  3845,  3847,  3851,  3857,
    3862,  3867,  3874,  3881,  3882,  3885,  3888,  3890
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     371,     0,    -1,   410,   363,    -1,   410,   363,   371,    -1,
       3,    -1,     3,   364,     3,    -1,    82,   364,     3,    -1,
     170,   365,     3,   366,    84,   365,     4,   366,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   180,
      -1,   372,    24,   372,    -1,   372,    25,   372,    -1,   372,
      26,   372,    -1,   372,    27,   372,    -1,   372,    28,   372,
      -1,   372,    29,   372,    -1,    25,   372,    -1,   365,   372,
     366,    -1,   372,    12,   372,    -1,   372,    10,   372,    -1,
     372,    11,   372,    -1,   372,    21,   372,    -1,   372,    22,
     372,    -1,   372,    30,   372,    -1,   372,    23,   372,    -1,
     372,    32,   372,    -1,   372,    31,   372,    -1,    18,   372,
      -1,    17,   372,    -1,   372,    20,   372,    -1,    -1,   372,
      20,   365,   373,   411,   366,    -1,    -1,   372,    20,    40,
     365,   374,   411,   366,    -1,    -1,   372,    20,   214,   365,
     375,   411,   366,    -1,    -1,   372,    20,    38,   365,   376,
     411,   366,    -1,   372,    20,    40,   365,   380,   366,    -1,
     372,    20,   214,   365,   380,   366,    -1,   372,    15,   180,
      -1,   372,    15,    18,   180,    -1,   372,    15,     6,    -1,
     372,    15,    18,     6,    -1,     8,     9,   372,    -1,   372,
      19,   372,    43,   372,    -1,   372,    18,    19,   372,    43,
     372,    -1,   372,    -1,   372,   367,   377,    -1,   372,    -1,
     372,   367,   378,    -1,    -1,   245,    34,   379,   378,   368,
      -1,   245,    34,   368,    -1,   372,    34,   372,   368,    -1,
     372,    -1,   361,   365,   372,   366,    -1,   361,   365,   372,
     367,   372,   366,    -1,   362,   365,   372,   366,    -1,    -1,
     377,    -1,    -1,   372,    16,   365,   382,   377,   366,    -1,
      -1,   372,    18,    16,   365,   383,   377,   366,    -1,    -1,
     372,    16,   365,   384,   411,   366,    -1,    -1,   372,    18,
      16,   365,   385,   411,   366,    -1,    -1,   262,   365,   386,
     411,   366,    -1,     3,   365,   381,   366,    -1,   303,   365,
      26,   366,    -1,   303,   365,   372,   366,    -1,   304,   365,
     372,   366,    -1,   305,   365,   372,   366,    -1,   306,   365,
     372,   366,    -1,   307,   365,   372,   366,    -1,   301,   365,
     372,   366,    -1,   301,   365,   372,   302,     4,   366,    -1,
      -1,   323,   365,   366,   331,   365,   387,   418,   420,   366,
      -1,    -1,   324,   365,   366,   331,   365,   388,   418,   420,
     366,    -1,    -1,   325,   365,   366,   331,   365,   389,   418,
     420,   366,    -1,    -1,   304,   365,   372,   366,   331,   365,
     390,   418,   420,   366,    -1,    -1,   303,   365,    26,   366,
     331,   365,   391,   418,   420,   366,    -1,    -1,   303,   365,
     372,   366,   331,   365,   392,   418,   420,   366,    -1,    -1,
     305,   365,   372,   366,   331,   365,   393,   418,   420,   366,
      -1,    -1,   306,   365,   372,   366,   331,   365,   394,   418,
     420,   366,    -1,    -1,   307,   365,   372,   366,   331,   365,
     395,   418,   420,   366,    -1,    -1,   326,   365,   372,   366,
     331,   365,   396,   418,   420,   366,    -1,    -1,   326,   365,
     372,   367,     5,   366,   331,   365,   397,   418,   420,   366,
      -1,    -1,   326,   365,   372,   367,     5,   367,     4,   366,
     331,   365,   398,   418,   420,   366,    -1,    -1,   326,   365,
     372,   367,     5,   367,     5,   366,   331,   365,   399,   418,
     420,   366,    -1,    -1,   327,   365,   372,   366,   331,   365,
     400,   418,   420,   366,    -1,    -1,   327,   365,   372,   367,
       5,   366,   331,   365,   401,   418,   420,   366,    -1,    -1,
     327,   365,   372,   367,     5,   367,     4,   366,   331,   365,
     402,   418,   420,   366,    -1,    -1,   327,   365,   372,   367,
       5,   367,     5,   366,   331,   365,   403,   418,   420,   366,
      -1,    -1,   328,   365,     5,   366,   331,   365,   404,   418,
     420,   366,    -1,    -1,   329,   365,   366,   331,   365,   405,
     418,   420,   366,    -1,    -1,   330,   365,   366,   331,   365,
     406,   418,   420,   366,    -1,   263,   365,   372,   367,   372,
     367,   372,   366,    -1,   263,   365,   372,   367,   372,   366,
      -1,   263,   365,   372,   129,   372,   366,    -1,   263,   365,
     372,   129,   372,   133,   372,   366,    -1,   264,   365,   372,
     366,    -1,   264,   365,   407,   372,   129,   372,   366,    -1,
     264,   365,   407,   129,   372,   366,    -1,   308,   365,   372,
     366,    -1,   309,   365,   372,   366,    -1,   310,   365,   372,
     366,    -1,   311,   365,   372,   367,   372,   366,    -1,   312,
     365,   372,   367,   372,   367,   372,   366,    -1,   313,   365,
     372,   367,   372,   366,    -1,   275,   365,   372,   367,   372,
     366,    -1,   276,   365,   372,   367,   372,   366,    -1,   277,
     365,   372,   367,   372,   367,   372,   366,    -1,   278,   365,
     372,   367,   372,   367,   372,   366,    -1,   279,   365,   372,
     366,    -1,   280,   365,   372,   367,   372,   366,    -1,   281,
     365,   372,   367,   372,   366,    -1,   282,   365,   372,   367,
     372,   366,    -1,   283,   365,   372,   366,    -1,   284,   365,
     372,   366,    -1,   285,   365,   372,   366,    -1,   286,   365,
     372,   367,   372,   366,    -1,   286,   365,   372,   366,    -1,
     287,   365,   372,   367,   372,   366,    -1,   288,   365,   372,
     366,    -1,   289,   365,   372,   367,   372,   366,    -1,   290,
     365,   366,    -1,   291,   365,   372,   366,    -1,   292,   365,
     372,   366,    -1,   293,   365,   372,   366,    -1,   294,   365,
     366,    -1,   274,   365,   366,    -1,   267,   365,   372,   367,
     372,   366,    -1,   268,   365,   372,   366,    -1,   269,   365,
     372,   366,    -1,   270,   365,   372,   366,    -1,   271,   365,
     372,   366,    -1,   272,   365,   372,   366,    -1,   273,   365,
     372,   366,    -1,   333,   365,   372,   367,   372,   366,    -1,
     334,   365,   372,   366,    -1,   335,   365,   372,   366,    -1,
     336,   365,   372,   366,    -1,   337,   365,   372,   366,    -1,
     338,   365,   372,   366,    -1,   339,   365,   372,   366,    -1,
     340,   365,   372,   366,    -1,   341,   365,   372,   366,    -1,
     342,   365,   372,   367,   372,   367,   372,   366,    -1,   343,
     365,   372,   367,   372,   367,   372,   366,    -1,   344,   365,
     372,   367,   372,   367,   372,   366,    -1,   345,   365,   372,
     367,   372,   366,    -1,   346,   365,   372,   367,   372,   366,
      -1,   347,   365,   372,   367,   372,   367,   372,   366,    -1,
     348,   365,   372,   367,   372,   367,   372,   366,    -1,   349,
     365,   372,   367,   372,   366,    -1,   349,   365,   372,   367,
     372,   367,   372,   367,   372,   366,    -1,   350,   365,   372,
     366,    -1,   350,   365,   372,   367,   372,   366,    -1,   350,
     365,   372,   367,   372,   367,   372,   366,    -1,   351,   365,
     372,   366,    -1,   353,   365,   372,   366,    -1,   354,   365,
     372,   366,    -1,   355,   365,   372,   367,   372,   366,    -1,
     355,   365,   372,   367,   372,   367,   372,   366,    -1,   356,
     365,   366,    -1,   295,   365,   372,    44,   517,   366,    -1,
     296,   365,   372,   367,   517,   366,    -1,   297,   365,   372,
     367,   372,   366,    -1,   298,   365,   372,   367,   372,   366,
      -1,   299,   365,   372,   367,   372,   367,   372,   366,    -1,
     372,    15,   300,    -1,   311,   365,   372,   367,   372,   367,
     372,   366,    -1,   311,   365,   372,   367,   372,   367,   372,
     367,   372,   366,    -1,   314,   365,   366,    -1,   315,   365,
     366,    -1,   316,   365,   366,    -1,   317,   365,   366,    -1,
     318,   365,   366,    -1,   319,    -1,   320,    -1,   321,   365,
     372,   366,    -1,   322,   365,   372,   367,   372,   366,    -1,
     165,    -1,   236,    -1,    58,    -1,   265,   365,   372,   367,
     408,   366,    -1,   266,   365,   372,   367,   408,   366,    -1,
     154,   372,   259,    -1,   154,   372,    97,    -1,   154,   372,
      98,    -1,   154,   372,   102,    -1,   154,   372,   104,    -1,
     154,   372,   260,    -1,   154,   372,   138,    -1,   154,   372,
     137,    -1,   154,   372,   140,    -1,    70,   372,   409,   117,
      -1,    70,   372,   409,   118,   372,   117,    -1,    70,   409,
     117,    -1,    70,   409,   118,   372,   117,    -1,   256,   372,
     235,   372,    -1,   409,   256,   372,   235,   372,    -1,   372,
      14,   372,    -1,   372,    18,    14,   372,    -1,   372,    13,
     372,    -1,   372,    18,    13,   372,    -1,    65,    -1,    73,
      -1,    74,    -1,   411,    -1,   223,   429,   430,    -1,   223,
     429,   430,   129,   433,   412,   413,   417,   422,   425,   426,
     427,    -1,   223,   429,   430,   152,     3,   129,   433,   412,
     413,   417,   422,   425,    -1,    -1,   255,   372,    -1,    -1,
     134,    56,   414,   416,    -1,   372,   415,    -1,   414,   367,
     372,   415,    -1,    -1,    42,    -1,   105,    -1,    -1,   258,
     201,    -1,    -1,   141,   372,    -1,    -1,   332,    56,   419,
      -1,     3,    -1,   419,   367,     3,    -1,    -1,   185,    56,
     421,    -1,     3,   415,    -1,   421,   367,     3,   415,    -1,
      -1,   185,    56,   423,    -1,   424,    -1,   423,   367,   424,
      -1,     3,   415,    -1,     3,   364,     3,   415,    -1,     5,
     415,    -1,    -1,   166,   372,    -1,   166,   372,   367,   372,
      -1,   166,   372,   168,   372,    -1,    -1,   133,   240,    -1,
     133,   212,    -1,   133,   240,   213,   167,    -1,   133,   212,
     213,   167,    -1,    -1,   152,   428,    -1,     3,    -1,   428,
     367,     3,    -1,    -1,   429,    38,    -1,   429,    99,    -1,
     429,   103,    -1,   429,   139,    -1,   429,   220,    -1,   429,
     208,    -1,   429,   216,    -1,   429,   215,    -1,   431,    -1,
     430,   367,   431,    -1,    26,    -1,   372,   432,    -1,    44,
       3,    -1,     3,    -1,    -1,   434,    -1,   433,   367,   434,
      -1,   435,    -1,   439,    -1,     3,   432,   446,    -1,     3,
     364,     3,   432,   446,    -1,   449,   438,     3,    -1,   436,
     438,     3,    -1,   362,   365,   372,   366,    -1,   362,   365,
     372,   366,   438,     3,    -1,   362,   365,   372,   366,   438,
       3,   365,     3,   366,    -1,   365,   433,   366,    -1,    -1,
     160,   365,   437,   411,   366,    -1,    44,    -1,    -1,   434,
     440,   156,   435,   444,    -1,   434,   220,   435,    -1,   434,
     220,   435,   184,   372,    -1,   434,   442,   441,   156,   435,
     445,    -1,   434,   177,   443,   156,   435,    -1,    -1,   146,
      -1,    69,    -1,    -1,   183,    -1,   164,    -1,   202,    -1,
     164,   441,    -1,   202,   441,    -1,    -1,    -1,   445,    -1,
     184,   372,    -1,   248,   365,   428,   366,    -1,   249,   157,
     447,   365,   448,   366,    -1,   147,   157,   447,   365,   448,
     366,    -1,   126,   157,   447,   365,   448,   366,    -1,    -1,
     133,   156,    -1,    -1,     3,    -1,   448,   367,     3,    -1,
     365,   411,   366,    -1,   450,    -1,   100,   451,   129,     3,
     412,   422,   425,   543,    -1,   451,   163,    -1,   451,   190,
      -1,   451,   147,    -1,    -1,   100,   451,   452,   129,   433,
     412,    -1,     3,   453,    -1,   452,   367,     3,   453,    -1,
      -1,   364,    26,    -1,   100,   451,   129,   452,   248,   433,
     412,    -1,   454,    -1,   101,   234,     3,    -1,   101,   234,
     149,   262,     3,    -1,   455,    -1,    66,   148,     3,   184,
       3,   365,   456,   366,    -1,    66,   131,   148,     3,   184,
       3,   365,   456,   366,    -1,    66,   148,   149,   262,     3,
     184,     3,   365,   456,   366,    -1,    66,   243,   148,     3,
     184,     3,   365,   456,   366,    -1,    66,   243,   148,   149,
     262,     3,   184,     3,   365,   456,   366,    -1,    66,   148,
       3,   184,     3,   248,   250,   365,   456,   366,    -1,    66,
     148,   149,   262,     3,   184,     3,   248,   250,   365,   456,
     366,    -1,    66,   243,   148,     3,   184,     3,   248,   250,
     365,   456,   366,    -1,    66,   243,   148,   149,   262,     3,
     184,     3,   248,   250,   365,   456,   366,    -1,    66,   148,
      78,     3,   184,     3,   365,   456,   366,    -1,    66,   148,
      78,   149,   262,     3,   184,     3,   365,   456,   366,    -1,
      66,   243,   148,    78,     3,   184,     3,   365,   456,   366,
      -1,    66,   243,   148,    78,   149,   262,     3,   184,     3,
     365,   456,   366,    -1,    66,   148,    78,     3,   184,     3,
     248,   250,   365,   456,   366,    -1,    66,   243,   148,    78,
       3,   184,     3,   248,   250,   365,   456,   366,    -1,     3,
      -1,   456,   367,     3,    -1,   457,    -1,   308,   365,     3,
     366,    -1,   309,   365,     3,   366,    -1,   310,   365,     3,
     366,    -1,   311,   365,     3,   367,     3,   366,    -1,   458,
      -1,   101,   148,     3,    -1,   459,   461,    -1,   237,   234,
       3,    -1,   237,   234,     3,   367,   460,    -1,     3,    -1,
     460,   367,     3,    -1,    -1,   461,    67,    -1,   461,   197,
      -1,   461,    48,    46,    -1,   461,    47,    46,    -1,   462,
      -1,   193,   234,     3,    -1,   463,    -1,    39,   234,     3,
      -1,    39,   234,     3,   364,     3,    -1,   464,    -1,    35,
     234,     3,    36,    64,     3,    71,   365,   372,   366,    -1,
      35,   234,     3,    36,    64,     3,   243,   365,   510,   366,
      -1,    35,   234,     3,    36,    64,     3,   127,   157,   365,
     507,   366,   194,     3,   365,   508,   366,   509,    -1,    35,
     234,     3,    36,    64,     3,    71,   365,   372,   366,    18,
     251,    -1,    35,   234,     3,    36,    64,     3,   127,   157,
     365,   507,   366,   194,     3,   365,   508,   366,   509,    18,
     251,    -1,    35,   234,     3,    36,    64,     3,   188,   157,
     365,   506,   366,    -1,    35,   234,     3,   101,    64,     3,
      -1,    35,   234,     3,   195,    64,     3,   227,     3,    -1,
      35,   234,     3,   113,    64,     3,    -1,    35,   234,     3,
      93,    64,     3,    -1,    35,   234,     3,   251,    64,     3,
      -1,    35,   234,     3,    36,    77,     3,   517,   512,   465,
      -1,    35,   234,     3,   101,    77,     3,    -1,    35,   234,
       3,   101,     3,    -1,    35,   234,     3,   195,    77,     3,
     227,     3,    -1,    35,   234,     3,   195,     3,   227,     3,
      -1,    35,   234,     3,   174,    77,     3,   517,   512,   465,
      -1,    35,   234,     3,   174,     3,   517,   512,   465,    -1,
      35,   234,     3,    68,    77,     3,     3,   517,   512,   465,
      -1,    35,   234,     3,    68,     3,     3,   517,   512,   465,
      -1,    -1,   123,    -1,    37,     3,    -1,   466,    -1,   150,
     474,   475,     3,   476,   253,   478,   467,   469,   543,    -1,
     150,   474,   475,     3,   476,   411,    -1,    -1,    -1,   186,
     157,   240,   468,   473,    -1,    -1,   184,    81,   470,   471,
      -1,    -1,   365,     3,   366,    -1,   365,     3,   367,     3,
      -1,    94,    83,    -1,    -1,    94,   240,   472,   222,   473,
      -1,     3,    20,   372,    -1,   473,   367,     3,    20,   372,
      -1,    -1,   474,   163,    -1,   474,    96,    -1,   474,   139,
      -1,   474,   147,    -1,   152,    -1,    -1,    -1,   365,   477,
     366,    -1,     3,    -1,   477,   367,     3,    -1,   365,   480,
     366,    -1,    -1,   478,   367,   479,   365,   480,   366,    -1,
     372,    -1,   106,    -1,   480,   367,   372,    -1,   480,   367,
     106,    -1,   150,   474,   475,     3,   222,   481,   467,    -1,
       3,    20,   372,    -1,     3,    20,   106,    -1,   481,   367,
       3,    20,   372,    -1,   481,   367,     3,    20,   106,    -1,
     482,    -1,   203,   474,   475,     3,   476,   253,   478,   467,
      -1,   203,   474,   475,     3,   222,   481,   467,    -1,   203,
     474,   475,     3,   476,   411,   467,    -1,   483,    -1,    -1,
      79,     3,   484,   485,   487,   488,   489,    -1,    -1,   365,
     486,   366,    -1,     3,    -1,   486,   367,     3,    -1,   129,
      -1,   227,    -1,     4,    -1,   218,    -1,   219,    -1,    -1,
     490,    -1,   258,   365,   490,   366,    -1,   365,   490,   366,
      -1,   491,    -1,   490,   367,   491,    -1,   128,    80,    -1,
     128,   231,    -1,    92,     4,    -1,   136,    -1,   136,     6,
      -1,   180,     4,    -1,   224,     4,    -1,    80,    -1,   492,
      -1,   240,   493,   433,   222,   494,   412,   422,   425,   543,
      -1,    -1,   474,   163,    -1,   474,   147,    -1,     3,    20,
     372,    -1,     3,   364,     3,    20,   372,    -1,   494,   367,
       3,    20,   372,    -1,   494,   367,     3,   364,     3,    20,
     372,    -1,   195,   234,     3,   227,     3,    -1,   495,    -1,
      66,    88,   496,     3,    -1,    66,   209,   496,     3,    -1,
     101,    88,     3,    -1,   101,    88,   149,   262,     3,    -1,
     101,   209,     3,    -1,   101,   209,   149,   262,     3,    -1,
      -1,   149,   262,    -1,   497,    -1,    66,    95,     3,    44,
     517,    -1,    66,    95,     3,    44,   517,   106,   372,    -1,
      66,    95,     3,    44,   517,    18,   180,    -1,    66,    95,
       3,    44,   517,    71,   365,   372,   366,    -1,    66,    95,
       3,    44,   517,    18,   180,    71,   365,   372,   366,    -1,
     498,    -1,   249,     3,    -1,   249,    88,     3,    -1,   499,
      -1,    66,   503,   234,   496,     3,   365,   504,   366,   500,
      -1,    66,   503,   234,   496,     3,   364,     3,   365,   504,
     366,   500,    -1,    66,   503,   234,   496,     3,   332,    87,
       3,   133,   253,   129,   365,     5,   366,   227,   365,     5,
     366,    -1,    -1,   500,    41,    20,     5,    -1,   500,    41,
       5,    -1,   500,   184,     3,   100,     3,    -1,   500,   184,
       3,   230,     3,    -1,   500,   210,    56,   250,   365,     3,
     366,   211,     5,    -1,   500,   210,    56,   191,   365,     3,
     366,   365,   501,   366,    -1,   500,   332,    56,   191,   365,
       3,   366,    -1,   502,    -1,   501,   367,   502,    -1,   210,
       3,   253,   161,   232,     4,   184,   178,     5,    -1,   210,
       3,   253,   161,   232,   171,   184,   178,     5,    -1,    66,
     503,   234,   496,     3,   365,   504,   366,   519,    -1,    66,
     503,   234,   496,     3,   519,    -1,    66,   503,   234,   496,
       3,   364,     3,   365,   504,   366,   519,    -1,    66,   503,
     234,   496,     3,   364,     3,   519,    -1,    -1,   228,    -1,
     229,   228,    -1,   505,    -1,   504,   367,   505,    -1,   188,
     157,   365,   506,   366,    -1,    64,     3,   188,   157,   365,
     506,   366,    -1,   157,   365,   428,   366,    -1,   148,   365,
     428,   366,    -1,   131,   148,   365,   428,   366,    -1,   131,
     157,   365,   428,   366,    -1,    71,   365,   372,   366,    -1,
      64,     3,    71,   365,   372,   366,    -1,   127,   157,   365,
     507,   366,   194,     3,   365,   508,   366,   509,    -1,   127,
     157,   365,   507,   366,   194,     3,   364,     3,   365,   508,
     366,   509,    -1,    64,     3,   127,   157,   365,   507,   366,
     194,     3,   365,   508,   366,   509,    -1,    64,     3,   127,
     157,   365,   507,   366,   194,     3,   364,     3,   365,   508,
     366,   509,    -1,   243,   365,   510,   366,    -1,    64,     3,
     243,   365,   510,   366,    -1,     3,    -1,   506,   367,     3,
      -1,     3,    -1,   507,   367,     3,    -1,     3,    -1,   508,
     367,     3,    -1,    -1,   509,   184,   100,    67,    -1,   509,
     184,   100,   222,   180,    -1,   509,   184,   100,   197,    -1,
     509,   184,   100,   222,   106,    -1,   509,   184,   240,    67,
      -1,   509,   184,   240,   222,   180,    -1,   509,   184,   240,
     197,    -1,   509,   184,   240,   222,   106,    -1,   509,   184,
     100,   179,    -1,   509,   184,   240,   179,    -1,   509,   170,
     130,    -1,   509,   170,   217,    -1,   509,   170,   187,    -1,
     509,    90,    -1,   509,    18,    90,    -1,   509,    90,   144,
      91,    -1,   509,    90,   144,   142,    -1,     3,    -1,   510,
     367,     3,    -1,    -1,   511,     3,   517,   512,    -1,    -1,
     512,    18,   180,    -1,   512,   180,    -1,   512,   106,     4,
      -1,   512,   106,     5,    -1,   512,   106,     7,    -1,   512,
     106,     6,    -1,   512,   106,   314,   365,   366,    -1,   512,
     106,   315,   365,   366,    -1,   512,   106,   316,   365,   366,
      -1,   512,   106,    65,    -1,   512,   106,   365,   372,   366,
      -1,   512,    41,    -1,   512,    41,   365,     5,   367,     5,
     366,    -1,   512,    41,   365,     5,   366,    -1,   512,    46,
     365,     5,   367,     5,   366,    -1,   512,    46,   365,     5,
     366,    -1,   512,    46,    -1,   512,   243,   157,    -1,   512,
     243,    -1,   512,   188,   157,    -1,   512,   157,    -1,   512,
      72,     4,    -1,   512,    71,   365,   372,   366,    -1,   512,
      64,     3,   243,    -1,   512,    64,     3,   188,   157,    -1,
     512,    64,     3,    71,   365,   372,   366,    -1,   512,    49,
      45,    44,   365,   372,   366,    50,    -1,   512,    49,    45,
      44,   365,   372,   366,    51,    -1,   512,    49,    45,    44,
     365,   372,   366,    -1,   512,    44,   365,   372,   366,    50,
      -1,   512,    44,   365,   372,   366,    51,    -1,   512,    44,
     365,   372,   366,    -1,    -1,   365,     5,   366,    -1,   365,
       5,   367,     5,   366,    -1,    -1,    57,    -1,    -1,   515,
     241,    -1,   515,   261,    -1,    -1,   516,    75,   222,     4,
      -1,   516,    76,     4,    -1,    60,   513,    -1,   226,   513,
     515,    -1,   221,   513,   515,    -1,   176,   513,   515,    -1,
     153,   513,   515,    -1,   145,   513,   515,    -1,    59,   513,
     515,    -1,   192,   513,   515,    -1,   107,   513,   515,    -1,
     125,   513,   515,    -1,   109,   513,   515,    -1,   110,    -1,
     239,    -1,   233,    -1,   108,    -1,   259,    -1,    75,   513,
     516,    -1,   252,   365,     5,   366,   516,    -1,    57,   513,
      -1,   254,   365,     5,   366,    -1,   238,    -1,    54,    -1,
     175,    -1,   169,    -1,   225,   514,   516,    -1,   231,   514,
     516,    -1,   172,   514,   516,    -1,   162,   514,   516,    -1,
     116,   365,   518,   366,   516,    -1,   222,   365,   518,   366,
     516,    -1,    55,    -1,   244,    -1,   246,    -1,   517,    34,
     368,    -1,     4,    -1,   518,   367,     4,    -1,   520,   438,
     411,    -1,    -1,   147,    -1,   203,    -1,   521,    -1,   222,
     209,     3,    -1,   222,   209,   106,    -1,   222,   522,    -1,
     523,    -1,   522,   367,   523,    -1,     8,    20,   372,    -1,
       8,     9,   372,    -1,   524,    -1,    66,   189,     3,   365,
     525,   366,    44,    53,   529,   117,    -1,    66,   189,     3,
     365,   525,   366,    53,   529,   117,    -1,    66,    10,   203,
     189,     3,   365,   525,   366,    44,    53,   529,   117,    -1,
      66,    10,   203,   189,     3,   365,   525,   366,    53,   529,
     117,    -1,    66,   132,     3,   365,   525,   366,   200,   528,
      44,    53,   529,   117,    -1,    66,   132,     3,   365,   525,
     366,   200,   528,    53,   529,   117,    -1,    66,    10,   203,
     132,     3,   365,   525,   366,   200,   528,    44,    53,   529,
     117,    -1,    66,    10,   203,   132,     3,   365,   525,   366,
     200,   528,    53,   529,   117,    -1,    -1,   526,    -1,   527,
      -1,   526,   367,   527,    -1,     3,   517,    -1,    16,     3,
     517,    -1,   182,     3,   517,    -1,   143,     3,   517,    -1,
     145,    -1,   153,    -1,   252,    -1,   231,    -1,    55,    -1,
     125,    -1,   107,    -1,    59,    -1,   110,    -1,   233,    -1,
      -1,   529,   530,    -1,   529,    53,   529,   117,    -1,   529,
     149,   529,   117,   149,    -1,   529,   257,   529,   117,   257,
      -1,   529,   159,   529,   117,   159,    -1,   529,   124,   529,
     117,   124,    -1,   529,    70,   529,   117,    70,    -1,     3,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,    20,
      -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,    43,
      -1,   223,    -1,   150,    -1,   240,    -1,   100,    -1,   129,
      -1,   255,    -1,   222,    -1,   152,    -1,   253,    -1,    66,
      -1,   101,    -1,   234,    -1,   148,    -1,   235,    -1,   118,
      -1,   112,    -1,    89,    -1,    94,    -1,    61,    -1,   198,
      -1,   158,    -1,   155,    -1,    63,    -1,   181,    -1,   122,
      -1,    62,    -1,   135,    -1,   120,    -1,   182,    -1,   143,
      -1,   133,    -1,    47,    -1,   205,    -1,   196,    -1,   119,
      -1,   207,    -1,    52,    -1,   111,    -1,   204,    -1,   206,
      -1,    44,    -1,   184,    -1,   185,    -1,    56,    -1,   134,
      -1,   141,    -1,   166,    -1,   168,    -1,   156,    -1,   164,
      -1,   202,    -1,   146,    -1,   183,    -1,   130,    -1,    69,
      -1,   177,    -1,   248,    -1,   180,    -1,   106,    -1,   188,
      -1,   157,    -1,   243,    -1,    71,    -1,   127,    -1,   194,
      -1,    67,    -1,   197,    -1,   179,    -1,   145,    -1,   153,
      -1,   252,    -1,   231,    -1,    55,    -1,   125,    -1,   107,
      -1,    59,    -1,   110,    -1,   233,    -1,   221,    -1,   109,
      -1,    75,    -1,   244,    -1,    54,    -1,   242,    -1,   115,
      -1,   151,    -1,    38,    -1,    99,    -1,   262,    -1,   256,
      -1,   258,    -1,   189,    -1,   132,    -1,   200,    -1,   365,
      -1,   366,    -1,   367,    -1,   363,    -1,   364,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    17,
      -1,   369,    -1,   303,    -1,   304,    -1,   305,    -1,   306,
      -1,   307,    -1,     8,    -1,   531,    -1,   101,   189,     3,
      -1,   101,   189,   149,   262,     3,    -1,   101,   132,     3,
      -1,   101,   132,   149,   262,     3,    -1,   532,    -1,    61,
       3,   365,   366,    -1,    61,     3,   365,   533,   366,    -1,
     534,    -1,   533,   367,   534,    -1,     5,    -1,     4,    -1,
       7,    -1,   180,    -1,     6,    -1,     3,    -1,     8,    -1,
     535,    -1,    66,   206,     3,   536,   537,   184,     3,   133,
     111,   204,    53,   529,   117,    -1,    52,    -1,    37,    -1,
     150,    -1,   240,    -1,   100,    -1,   538,    -1,   101,   206,
       3,    -1,   101,   206,   149,   262,     3,    -1,    35,   206,
       3,   113,    -1,    35,   206,     3,    93,    -1,   539,    -1,
      66,   352,   496,     3,   540,    -1,    -1,   540,   541,    -1,
     357,   258,     5,    -1,   357,     5,    -1,   358,    56,     5,
      -1,   358,     5,    -1,   359,     5,    -1,   171,     5,    -1,
     360,    -1,    18,   360,    -1,   542,    -1,   101,   352,     3,
      -1,   101,   352,   149,   262,     3,    -1,    35,   352,     3,
     540,    -1,    35,   352,     3,    48,    -1,    35,   352,     3,
      48,   258,     5,    -1,    35,   352,     3,   195,   227,     3,
      -1,    -1,   199,    26,    -1,   199,   544,    -1,     3,    -1,
     544,   367,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   450,   450,   451,   456,   463,   464,   465,   479,   480,
     498,   506,   514,   520,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   553,   553,   562,   562,   564,   564,
     566,   566,   571,   573,   577,   578,   579,   580,   581,   584,
     585,   588,   589,   594,   596,   610,   610,   649,   658,   665,
     669,   671,   673,   677,   678,   681,   681,   682,   682,   683,
     683,   691,   691,   699,   699,   710,   714,   715,   716,   717,
     718,   719,   720,   721,   725,   725,   727,   727,   729,   729,
     732,   732,   734,   734,   736,   736,   738,   738,   740,   740,
     742,   742,   745,   745,   747,   747,   749,   749,   751,   751,
     753,   753,   755,   755,   757,   757,   759,   759,   762,   762,
     764,   764,   766,   766,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   805,   806,
     807,   808,   809,   810,   811,   812,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   834,   835,   837,   838,
     839,   840,   841,   843,   844,   846,   847,   848,   850,   851,
     852,   853,   860,   867,   874,   878,   882,   886,   890,   894,
     900,   901,   902,   905,   911,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   929,   931,   933,   935,   939,   947,
     958,   959,   962,   963,   966,   974,   982,   993,  1003,  1004,
    1017,  1033,  1034,  1035,  1036,  1039,  1046,  1054,  1055,  1056,
    1059,  1060,  1063,  1064,  1068,  1069,  1072,  1074,  1078,  1079,
    1082,  1084,  1088,  1089,  1092,  1093,  1096,  1102,  1109,  1118,
    1119,  1120,  1121,  1124,  1125,  1126,  1127,  1128,  1131,  1132,
    1135,  1136,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,
    1147,  1150,  1151,  1152,  1160,  1166,  1167,  1168,  1171,  1172,
    1175,  1176,  1180,  1187,  1188,  1189,  1198,  1203,  1209,  1217,
    1221,  1221,  1261,  1262,  1266,  1268,  1270,  1272,  1274,  1278,
    1279,  1280,  1283,  1284,  1287,  1288,  1291,  1292,  1293,  1296,
    1297,  1300,  1301,  1305,  1307,  1309,  1311,  1314,  1315,  1318,
    1319,  1322,  1326,  1336,  1344,  1345,  1346,  1347,  1351,  1355,
    1357,  1361,  1361,  1363,  1368,  1375,  1382,  1392,  1399,  1406,
    1414,  1424,  1432,  1442,  1450,  1459,  1468,  1478,  1486,  1495,
    1504,  1514,  1523,  1535,  1540,  1545,  1551,  1558,  1565,  1572,
    1582,  1589,  1598,  1605,  1611,  1619,  1625,  1633,  1634,  1635,
    1636,  1637,  1641,  1648,  1657,  1664,  1670,  1681,  1684,  1690,
    1696,  1703,  1709,  1716,  1722,  1728,  1734,  1740,  1746,  1752,
    1758,  1764,  1770,  1776,  1782,  1788,  1794,  1800,  1808,  1809,
    1810,  1813,  1821,  1827,  1840,  1841,  1841,  1845,  1846,  1849,
    1850,  1851,  1855,  1856,  1856,  1860,  1868,  1878,  1879,  1880,
    1881,  1882,  1885,  1885,  1888,  1889,  1892,  1902,  1915,  1916,
    1916,  1919,  1920,  1921,  1922,  1925,  1929,  1930,  1931,  1932,
    1938,  1941,  1947,  1952,  1958,  1962,  1962,  1967,  1968,  1970,
    1971,  1975,  1976,  1980,  1981,  1982,  1985,  1986,  1987,  1988,
    1992,  1993,  1997,  1998,  1999,  2000,  2001,  2002,  2003,  2004,
    2008,  2016,  2025,  2026,  2027,  2031,  2042,  2054,  2065,  2080,
    2085,  2089,  2090,  2094,  2096,  2098,  2100,  2104,  2105,  2111,
    2115,  2117,  2119,  2121,  2123,  2128,  2132,  2133,  2137,  2146,
    2156,  2164,  2172,  2173,  2174,  2175,  2176,  2177,  2179,  2181,
    2185,  2186,  2189,  2204,  2211,  2226,  2239,  2254,  2267,  2268,
    2269,  2272,  2273,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2286,  2288,  2290,  2292,  2294,  2298,  2299,  2302,
    2303,  2306,  2307,  2310,  2311,  2312,  2313,  2314,  2315,  2316,
    2317,  2318,  2319,  2320,  2321,  2322,  2323,  2324,  2325,  2326,
    2327,  2330,  2331,  2334,  2334,  2344,  2345,  2346,  2347,  2348,
    2349,  2350,  2351,  2352,  2353,  2354,  2355,  2362,  2363,  2364,
    2365,  2366,  2367,  2368,  2369,  2370,  2371,  2372,  2373,  2374,
    2375,  2376,  2377,  2378,  2379,  2380,  2381,  2382,  2385,  2386,
    2387,  2390,  2391,  2394,  2395,  2396,  2399,  2400,  2401,  2405,
    2406,  2407,  2408,  2409,  2410,  2411,  2412,  2413,  2414,  2415,
    2416,  2417,  2418,  2419,  2420,  2421,  2422,  2423,  2424,  2425,
    2426,  2427,  2428,  2429,  2430,  2431,  2432,  2433,  2434,  2435,
    2436,  2437,  2438,  2441,  2442,  2445,  2458,  2459,  2460,  2464,
    2467,  2468,  2469,  2470,  2470,  2472,  2473,  2481,  2485,  2491,
    2497,  2504,  2511,  2517,  2523,  2530,  2539,  2540,  2543,  2544,
    2547,  2548,  2549,  2550,  2553,  2554,  2555,  2556,  2557,  2558,
    2559,  2560,  2561,  2562,  2569,  2570,  2571,  2572,  2573,  2574,
    2575,  2576,  2579,  2580,  2581,  2581,  2581,  2582,  2582,  2582,
    2582,  2582,  2582,  2583,  2583,  2583,  2583,  2583,  2583,  2583,
    2583,  2583,  2584,  2584,  2584,  2584,  2584,  2584,  2584,  2585,
    2585,  2585,  2585,  2586,  2586,  2586,  2586,  2586,  2586,  2586,
    2586,  2586,  2586,  2586,  2586,  2587,  2587,  2587,  2587,  2587,
    2587,  2587,  2587,  2588,  2588,  2588,  2588,  2588,  2588,  2588,
    2588,  2589,  2589,  2589,  2589,  2589,  2589,  2589,  2589,  2589,
    2590,  2590,  2590,  2590,  2590,  2590,  2590,  2590,  2591,  2591,
    2591,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2593,
    2593,  2593,  2593,  2593,  2593,  2593,  2594,  2594,  2594,  2594,
    2594,  2594,  2594,  2595,  2595,  2595,  2595,  2596,  2596,  2596,
    2596,  2596,  2596,  2596,  2596,  2596,  2596,  2596,  2596,  2597,
    2597,  2597,  2597,  2597,  2598,  2605,  2609,  2615,  2621,  2627,
    2639,  2643,  2649,  2657,  2658,  2661,  2662,  2663,  2664,  2665,
    2666,  2667,  2674,  2678,  2686,  2687,  2690,  2691,  2692,  2695,
    2699,  2705,  2714,  2722,  2733,  2737,  2746,  2747,  2751,  2752,
    2753,  2754,  2755,  2756,  2757,  2758,  2761,  2765,  2771,  2781,
    2788,  2795,  2803,  2813,  2814,  2815,  2818,  2819
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
  "INTERVAL", "ITERATE", "JOIN", "KEY", "LEAVE", "LOOP", "LATERAL", "LESS",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED",
  "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS",
  "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
  "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL",
  "PRIMARY", "PROCEDURE", "QUICK", "RANGE", "REAL", "RECLAIM",
  "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT", "RETURN", "RETURNING",
  "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW", "SIGNAL", "TRIGGER",
  "UNTIL", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE",
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
  "INCREMENT", "MINVALUE", "CYCLE", "FARRAY_LENGTH", "FUNNEST", "';'",
  "'.'", "'('", "')'", "','", "']'", "'='", "$accept", "stmt_list", "expr",
  "@1", "@2", "@3", "@4", "val_list", "array_val_list", "@5",
  "any_array_arg", "opt_val_list", "@6", "@7", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21",
  "@22", "@23", "@24", "@25", "@26", "@27", "@28", "@29", "@30",
  "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_window_partition",
  "window_partition_list", "opt_window_orderby", "window_orderby_list",
  "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_for_update", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "lateral_subquery", "@31", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "create_index_stmt", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "truncate_extra_tables",
  "opt_truncate_options", "reclaim_table_stmt", "analyze_table_stmt",
  "alter_table_stmt", "opt_col_position", "insert_stmt", "opt_ondupupdate",
  "@32", "opt_on_conflict", "opt_conflict_target", "conflict_action",
  "@33", "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@34", "insert_vals",
  "insert_asgn_list", "replace_stmt", "copy_stmt", "@35", "opt_copy_cols",
  "copy_col_list", "copy_direction", "copy_target", "opt_copy_options",
  "copy_option_list", "copy_option", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
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
     605,   606,   607,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   370,   371,   371,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   373,   372,   374,   372,   375,   372,
     376,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   377,   377,   378,   378,   379,   372,   372,   372,   380,
     372,   372,   372,   381,   381,   382,   372,   383,   372,   384,
     372,   385,   372,   386,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   387,   372,   388,   372,   389,   372,
     390,   372,   391,   372,   392,   372,   393,   372,   394,   372,
     395,   372,   396,   372,   397,   372,   398,   372,   399,   372,
     400,   372,   401,   372,   402,   372,   403,   372,   404,   372,
     405,   372,   406,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     407,   407,   407,   372,   372,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   372,   372,   372,   372,   409,   409,
     372,   372,   372,   372,   372,   372,   372,   410,   411,   411,
     411,   412,   412,   413,   413,   414,   414,   415,   415,   415,
     416,   416,   417,   417,   418,   418,   419,   419,   420,   420,
     421,   421,   422,   422,   423,   423,   424,   424,   424,   425,
     425,   425,   425,   426,   426,   426,   426,   426,   427,   427,
     428,   428,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   430,   430,   430,   431,   432,   432,   432,   433,   433,
     434,   434,   435,   435,   435,   435,   435,   435,   435,   435,
     437,   436,   438,   438,   439,   439,   439,   439,   439,   440,
     440,   440,   441,   441,   442,   442,   443,   443,   443,   444,
     444,   445,   445,   446,   446,   446,   446,   447,   447,   448,
     448,   449,   410,   450,   451,   451,   451,   451,   450,   452,
     452,   453,   453,   450,   410,   454,   454,   410,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   456,   456,   457,   457,   457,   457,
     410,   458,   410,   459,   459,   460,   460,   461,   461,   461,
     461,   461,   410,   462,   410,   463,   463,   410,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   465,   465,
     465,   410,   466,   466,   467,   468,   467,   469,   469,   470,
     470,   470,   471,   472,   471,   473,   473,   474,   474,   474,
     474,   474,   475,   475,   476,   476,   477,   477,   478,   479,
     478,   480,   480,   480,   480,   466,   481,   481,   481,   481,
     410,   482,   482,   482,   410,   484,   483,   485,   485,   486,
     486,   487,   487,   488,   488,   488,   489,   489,   489,   489,
     490,   490,   491,   491,   491,   491,   491,   491,   491,   491,
     410,   492,   493,   493,   493,   494,   494,   494,   494,   410,
     410,   495,   495,   410,   410,   410,   410,   496,   496,   410,
     497,   497,   497,   497,   497,   410,   498,   498,   410,   499,
     499,   499,   500,   500,   500,   500,   500,   500,   500,   500,
     501,   501,   502,   502,   499,   499,   499,   499,   503,   503,
     503,   504,   504,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   506,   506,   507,
     507,   508,   508,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   510,   510,   511,   505,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   513,   513,
     513,   514,   514,   515,   515,   515,   516,   516,   516,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   518,   518,   519,   520,   520,   520,   410,
     521,   521,   521,   522,   522,   523,   523,   410,   524,   524,
     524,   524,   524,   524,   524,   524,   525,   525,   526,   526,
     527,   527,   527,   527,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   529,   529,   529,   529,   529,   529,
     529,   529,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   410,   531,   531,   531,   531,
     410,   532,   532,   533,   533,   534,   534,   534,   534,   534,
     534,   534,   410,   535,   536,   536,   537,   537,   537,   410,
     538,   538,   410,   410,   410,   539,   540,   540,   541,   541,
     541,   541,   541,   541,   541,   541,   410,   542,   542,   410,
     410,   410,   410,   543,   543,   543,   544,   544
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
       4,     6,     4,     0,     1,     0,     6,     0,     7,     0,
       6,     0,     7,     0,     5,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     0,     9,     0,     9,     0,     9,
       0,    10,     0,    10,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    12,     0,    14,     0,    14,
       0,    10,     0,    12,     0,    14,     0,    14,     0,    10,
       0,     9,     0,     9,     8,     6,     6,     8,     4,     7,
       6,     4,     4,     4,     6,     8,     6,     6,     6,     8,
       8,     4,     6,     6,     6,     4,     4,     4,     6,     4,
       6,     4,     6,     3,     4,     4,     4,     3,     3,     6,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     8,     8,     8,     6,     6,
       8,     8,     6,    10,     4,     6,     8,     4,     4,     4,
       6,     8,     3,     6,     6,     6,     6,     8,     3,     8,
      10,     3,     3,     3,     3,     3,     1,     1,     4,     6,
       1,     1,     1,     6,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     6,     3,     5,     4,     5,
       3,     4,     3,     4,     1,     1,     1,     1,     3,    12,
      12,     0,     2,     0,     4,     2,     4,     0,     1,     1,
       0,     2,     0,     2,     0,     3,     1,     3,     0,     3,
       2,     4,     0,     3,     1,     3,     2,     4,     2,     0,
       2,     4,     4,     0,     2,     2,     4,     4,     0,     2,
       1,     3,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     2,     2,     1,     0,     1,     3,
       1,     1,     3,     5,     3,     3,     4,     6,     9,     3,
       0,     5,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     8,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     3,     5,     1,     8,     9,
      10,     9,    11,    10,    12,    11,    13,     9,    11,    10,
      12,    11,    12,     1,     3,     1,     4,     4,     4,     6,
       1,     3,     2,     3,     5,     1,     3,     0,     2,     2,
       3,     3,     1,     3,     1,     3,     5,     1,    10,    10,
      17,    12,    19,    11,     6,     8,     6,     6,     6,     9,
       6,     5,     8,     7,     9,     8,    10,     9,     0,     1,
       2,     1,    10,     6,     0,     0,     5,     0,     4,     0,
       3,     4,     2,     0,     5,     3,     5,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     1,     3,     3,     0,
       6,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     0,     7,     0,     3,     1,
       3,     1,     1,     1,     1,     1,     0,     1,     4,     3,
       1,     3,     2,     2,     2,     1,     2,     2,     2,     1,
       1,     9,     0,     2,     2,     3,     5,     5,     7,     5,
       1,     4,     4,     3,     5,     3,     5,     0,     2,     1,
       5,     7,     7,     9,    11,     1,     2,     3,     1,     9,
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
       1,     1,     3,     1,     3,     3,     0,     1,     1,     1,
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
       1,     1,     1,    13,     1,     1,     1,     1,     1,     1,
       3,     5,     4,     4,     1,     5,     0,     2,     3,     2,
       3,     2,     2,     2,     1,     2,     1,     3,     5,     4,
       4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   538,     0,   347,     0,   437,     0,
       0,   437,     0,   282,     0,   437,     0,     0,     0,   237,
     342,   354,   357,   380,   387,   392,   394,   397,   421,   460,
     464,   490,   500,   509,   515,   518,   669,   677,   835,   840,
     852,   859,   864,   876,     0,     0,     0,     0,     0,     0,
     507,     0,     0,     0,     0,     0,     0,   507,   539,     0,
       0,   507,     0,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,   443,     0,     0,   672,
     673,     0,     0,     0,     0,   516,     0,     1,     2,   382,
       0,     0,   866,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   540,     0,     0,
     507,   467,   351,     0,   346,   344,   345,     0,   503,     0,
     838,     0,   381,   836,     0,   860,     0,   505,     0,   355,
       0,   877,     0,   439,   440,   441,   442,   438,     0,   393,
       0,     0,     0,     0,   670,   671,     0,     4,     9,    10,
      12,    11,     8,     0,     0,     0,   293,   283,   234,     0,
     235,   236,     0,   284,   285,   286,     0,    13,   288,   290,
     289,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   297,   238,   291,   383,
     441,   438,   297,     0,     0,     0,     0,   298,   300,   313,
     301,   313,   517,     3,     0,     0,   388,   389,   863,   862,
       0,     0,     0,     0,     0,     0,     0,     0,   880,     0,
     879,     0,   850,   846,   845,   849,   847,   851,   848,   841,
       0,   843,     0,     0,   508,   501,     0,     0,   686,     0,
       0,     0,     0,   686,   855,   854,     0,   502,     0,     0,
       0,   866,     0,     0,     0,     0,   349,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   444,     0,
     444,   676,   675,   674,     0,    63,     0,    32,    31,    20,
       0,     0,     0,     0,     0,    55,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,     0,   336,   310,
       0,     0,     0,     0,     0,   321,   320,   324,   328,   325,
       0,     0,   322,   312,     0,     0,   391,   390,     0,     0,
       0,     0,     0,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     874,   867,   396,   842,     0,     0,     0,   650,   659,   618,
     618,   618,   618,   618,   643,   618,   640,     0,   618,   618,
     618,   621,   652,   621,   651,   618,   618,   618,     0,   621,
     618,   621,   642,   649,   641,   660,   661,     0,     0,   644,
     510,     0,     0,     0,     0,     0,     0,   687,   688,     0,
       0,     0,     0,     0,   858,   856,   857,     0,     0,     0,
       0,     0,   865,   666,   469,     0,   471,   472,     0,   352,
       0,   262,     0,   241,   351,   504,   839,   837,   861,   506,
     356,   878,     0,     0,     0,   499,     0,     0,     5,    51,
      64,     0,    48,     0,     0,   226,     0,     0,     6,     0,
      57,     0,     0,     0,   212,   210,   211,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,   203,
     204,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,    21,    23,    24,
      22,   232,   230,    46,     0,    44,   198,    65,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    33,    25,    26,
      28,    14,    15,    16,    17,    18,    19,    27,    30,    29,
       0,   295,   241,     0,   292,   385,   384,   297,     0,     0,
       0,   302,     0,     0,   341,   309,     0,   241,   299,   322,
     322,     0,   315,     0,   323,     0,   305,   304,     0,     0,
       0,     0,   407,   404,   410,   406,   585,     0,     0,     0,
       0,   408,   881,   882,   875,   873,   869,     0,   871,     0,
     872,   844,   686,   686,     0,   647,   623,   629,   626,   623,
     623,     0,   623,   623,   623,   622,   626,   626,   623,   623,
     623,     0,   626,   623,   626,     0,     0,     0,     0,     0,
       0,     0,   690,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   667,
     668,     0,     0,   583,   535,   313,   468,     0,   473,   474,
     475,   476,   242,     0,   269,   241,   348,   350,     0,   424,
     446,     0,     0,   423,   424,     0,   424,     0,    75,     0,
     224,     0,     0,     0,     0,    53,     0,     0,     0,     0,
     128,     0,     0,     0,     0,     0,   160,   161,   162,   163,
     164,   165,     0,     0,     0,     0,   141,     0,     0,     0,
     145,   146,   147,   149,     0,     0,   151,     0,   154,   155,
     156,     0,     0,     0,     0,     0,     0,    82,    76,    77,
      78,    79,    80,    81,   131,   132,   133,     0,     0,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   168,   169,   170,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,   184,
       0,   187,   188,   189,     0,    60,     0,    62,    47,    45,
       0,     0,   233,   231,    67,     0,     0,    40,    36,    38,
       0,    58,   243,     0,     0,   336,   338,   338,   338,     0,
     306,     0,     0,     0,   262,   326,   327,     0,     0,   329,
       0,     0,     0,     0,     0,   585,   585,     0,   418,   585,
     413,     0,     0,   868,   870,     0,     0,     0,   635,   645,
     637,   639,   663,     0,   638,   634,   633,   656,   655,   632,
     636,   631,     0,   653,   630,   654,     0,     0,   512,   662,
       0,   511,     0,   691,   693,   692,     0,   689,     0,   373,
       0,     0,     0,     0,     0,   375,     0,     0,     0,     0,
       0,   704,     0,     0,     0,     0,     0,     0,     0,   666,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   541,
       0,     0,   470,   489,     0,     0,   485,     0,     0,     0,
       0,   466,   477,   480,     0,     0,   883,   353,     0,     0,
       0,   455,   445,     0,     0,   424,   462,   424,   463,    52,
     228,     0,   227,     0,     0,     0,    56,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    86,    88,     0,     0,     0,     0,     0,
     120,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    59,     0,     0,     0,     0,     0,     0,   252,   241,
     386,   303,     0,     0,     0,     0,   311,     0,   495,     0,
       0,   269,   318,   316,     0,     0,   314,   330,     0,     0,
       0,     0,     0,   418,   418,   585,     0,     0,   597,     0,
     602,     0,     0,     0,     0,     0,   419,   606,   587,     0,
     604,   415,   418,   405,   412,     0,     0,   619,     0,   624,
     625,     0,     0,   626,     0,   626,   626,   648,     0,     0,
       0,   698,   701,   700,   702,   699,   694,   695,   697,   703,
     696,     0,     0,     0,     0,     0,     0,   358,     0,     0,
       0,     0,     0,     0,   704,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   583,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   522,   583,     0,   665,   484,
     482,   483,   486,   487,   488,     0,     0,     0,   247,   247,
     263,   264,   270,     0,   343,   457,   456,     0,     0,   447,
     452,   451,     0,   449,   427,   461,   225,   229,     0,    54,
       0,   126,   125,     0,   130,     0,     0,   213,   214,   159,
     137,   138,     0,     0,   142,   143,   144,   148,   150,   152,
     193,   194,   195,   196,     0,    83,    92,    94,    90,    96,
      98,   100,   134,     0,     0,   136,   209,   254,   254,   254,
     102,     0,     0,   110,     0,     0,   118,   254,   254,   166,
       0,     0,     0,   178,   179,     0,     0,   182,     0,   185,
       0,   190,     0,    61,    66,    70,     0,     0,    50,     0,
       0,    42,     0,    43,    35,     0,     0,   262,   243,   337,
       0,     0,     0,   307,     0,     0,     0,   883,   331,     0,
     317,     0,     0,     0,   581,     0,   409,   417,   418,   586,
     420,     0,     0,     0,     0,     0,     0,   607,   588,   589,
     591,   590,   595,     0,     0,     0,     0,   605,   603,   414,
       0,     0,   704,     0,     0,   628,   657,   664,   658,   646,
       0,   513,   359,     0,   704,     0,     0,     0,     0,     0,
     374,     0,   367,     0,     0,     0,     0,   712,   713,   714,
     716,   715,   834,   719,   720,   721,   827,   718,   717,   822,
     823,   824,   825,   826,   809,   722,   763,   754,   759,   704,
     805,   795,   766,   798,   741,   748,   745,   732,   788,   777,
     704,   785,   803,   739,   740,   810,   726,   733,   781,   797,
     802,   799,   760,   738,   807,   679,   737,   757,   750,   747,
     704,   796,   786,   727,   776,   815,   753,   767,   749,   768,
     752,   791,   774,   735,   704,   724,   808,   730,   792,   744,
     771,   783,   743,   704,   772,   769,   770,   778,   790,   780,
     746,   751,   775,   764,   765,   782,   814,   787,   756,   789,
     742,   816,   773,   761,   755,   762,   758,   801,   729,   723,
     794,   800,   734,   736,   725,   806,   784,   804,   779,   793,
     731,   728,   812,   704,   813,   811,   829,   830,   831,   832,
     833,   820,   821,   817,   818,   819,   828,   705,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,     0,     0,
       0,   519,   534,   542,   585,     0,   479,   481,   248,   249,
       0,   266,   268,     0,     0,     0,   886,   884,   885,   425,
       0,   448,     0,     0,     0,   883,     0,     0,     0,   129,
     216,   217,   218,   219,   222,   221,   223,   215,   220,     0,
       0,     0,   254,   254,   254,   254,   254,   254,     0,     0,
       0,   258,   258,   258,   254,     0,     0,     0,   254,     0,
       0,     0,   254,   258,   258,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    72,    41,    37,    39,   247,   250,
     253,   269,   252,   339,     0,     0,     0,     0,   496,   497,
       0,   491,     0,   398,   559,     0,   557,     0,   399,     0,
     416,     0,     0,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,     0,   704,     0,   620,   627,     0,   704,
       0,   363,   376,   377,   378,     0,     0,     0,     0,   360,
     678,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,   522,     0,     0,     0,     0,
     549,     0,     0,     0,   546,     0,   545,     0,   555,     0,
       0,     0,     0,   584,   478,   247,   265,   272,   271,     0,
       0,   459,   458,   454,   453,     0,   429,   422,     7,   127,
     124,   139,   140,   197,   258,   258,   258,   258,   258,   258,
     199,     0,   135,     0,     0,     0,     0,     0,   258,   104,
       0,     0,   258,   112,     0,     0,   258,     0,     0,   175,
     176,   177,   180,   181,     0,   186,   191,   245,     0,     0,
     244,   273,   262,   335,     0,   334,   333,     0,     0,   332,
       0,     0,     0,   403,     0,   582,   599,     0,   617,   601,
       0,     0,     0,   610,   608,   592,   593,   594,   596,     0,
     704,     0,   681,   514,     0,   683,     0,   371,   368,     0,
     706,     0,     0,     0,     0,     0,   704,   365,     0,     0,
       0,   362,     0,   520,   536,     0,     0,     0,     0,     0,
     547,   548,   281,   543,   524,     0,     0,     0,     0,   267,
     887,     0,   426,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   255,     0,    85,    87,    89,     0,
     254,     0,     0,     0,   254,     0,     0,     0,   121,   123,
       0,   251,   247,     0,   278,   269,   340,   308,   498,   401,
       0,   560,   558,     0,   615,   616,     0,     0,     0,   704,
       0,   680,   682,   379,   364,   711,   710,   707,   709,   708,
       0,   372,   370,     0,     0,   550,     0,     0,   556,     0,
     523,     0,     0,     0,     0,     0,     0,     0,   450,     0,
       0,   428,    93,    95,    91,    97,    99,   101,   200,     0,
     247,   259,   103,   258,   106,   108,   111,   258,   114,   116,
     119,   183,   246,   275,   274,     0,   239,   240,     0,   598,
     600,   614,   611,     0,   685,   853,   366,     0,     0,   544,
       0,   525,   526,     0,     0,     0,   435,     0,   430,     0,
     432,   433,   257,   260,     0,     0,   254,   254,     0,   254,
     254,     0,     0,   279,     0,   612,   613,   684,     0,     0,
       0,     0,     0,     0,     0,     0,   431,     0,   247,   105,
     258,   258,   113,   258,   258,   277,   276,   561,     0,     0,
       0,     0,     0,     0,     0,   529,   436,     0,   261,     0,
       0,     0,     0,   563,     0,     0,     0,     0,     0,   563,
       0,     0,   434,   107,   109,   115,   117,   400,   562,     0,
       0,     0,     0,   551,     0,     0,   530,   527,     0,   577,
       0,     0,   521,     0,   563,   563,     0,     0,   528,     0,
     578,   402,     0,   574,   576,   575,     0,     0,     0,   553,
     552,     0,   531,   579,   580,   564,   572,   566,     0,   568,
     573,   570,     0,   563,     0,   567,   565,   571,   569,   554,
       0,     0,     0,     0,     0,     0,     0,   532,   533
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   619,  1000,  1202,  1204,  1200,   620,   896,   631,
    1203,   621,   990,  1196,   991,  1197,   632,  1387,  1388,  1389,
    1694,  1692,  1693,  1695,  1696,  1697,  1704,  1960,  2076,  2077,
    1708,  1964,  2079,  2080,  1712,  1397,  1398,   638,  1143,   362,
      18,    19,   601,  1208,  1729,  1661,  1870,  1427,  1701,  1954,
    1845,  2031,   874,  1330,  1331,  1116,  1974,  2046,  1647,    81,
     267,   268,   482,   276,   277,   278,   279,   772,   504,   280,
     501,   785,   502,   781,  1226,  1227,   771,  1213,  1734,   281,
      20,    64,   117,   336,    21,    22,  1074,  1075,    23,    24,
     766,    89,    25,    26,    27,  1251,    28,  1121,  1820,  1675,
    1945,  2021,  2097,  1942,    73,   138,   614,   881,  1125,  1673,
    1342,   879,    29,    30,   111,   334,   595,   598,   871,  1111,
    1112,  1113,    31,    84,   777,    32,    97,    33,    34,    35,
    1651,  2145,  2146,    62,  1098,  1099,  1747,  1745,  2108,  2137,
    1445,  1100,  1028,   815,   826,  1038,  1039,   570,  1043,   864,
     865,    36,    79,    80,    37,   576,   577,   578,  1281,  1295,
    1627,    38,    39,   310,   311,    40,   326,   587,    41,    42,
     300,   531,    43,  1334,  1668
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1622
static const yytype_int16 yypact[] =
{
   11829,  -146,  -112,   122, 11669,   183, -1622,  1157, -1622,   -41,
     217, -1622,    29, -1622,   228,    10,   435,   196,   115, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622,   529,   534,   609,   643,   119,   451,
     457,   694,   562,   705,   110,   711,   715,   457, -1622,   433,
     576,   457,   524, -1622,   526,   381,   407,   726,   426,   431,
     492,   504,   513,   602,   757,   760,   602,   178,    91,   409,
   -1622,  6289,   808,   552,    63, -1622,   816, -1622, 11829,    54,
     599,   468,    -5,   471,    45,   349,   579,   842,   813,   852,
     515,   685,   544,   616,   533,    79,   881, -1622,   418,   901,
     457,   564,   557,   961, -1622, -1622, -1622,   -83, -1622,   686,
   -1622,   706, -1622, -1622,   713, -1622,   724, -1622,   727, -1622,
     729, -1622,   738, -1622, -1622, -1622, -1622, -1622,  1013, -1622,
     809,  1039,  9919,  9919, -1622, -1622,  1036,   331, -1622, -1622,
   -1622, -1622,  1042,  9919,  9919,  9919, -1622, -1622, -1622,  7378,
   -1622, -1622,   695, -1622, -1622, -1622,   688, -1622, -1622, -1622,
   -1622, -1622,  1032,   704,   712,   728,   743,   768,   791,   807,
     823,   827,   851,   853,   877,   879,   888,   923,   927,   929,
     936,   939,   963,   965,   967,   972,   987,  1000,  1009,  1011,
    1012,  1014,  1015,  1016,  1017,  1018,  1019,  1021,  1022,  1023,
    1024,  1025,  1027,  1028,  1029,  1031,  1033,  1035,  1037,  1038,
    1040,  1041,  1043,  1044,  1045,  1046,  1047,  1048, -1622, -1622,
    1049,  1050,  1057,  1059,  1063,  1067,  1069,  1070,  1071,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1087,  1088,  1089,
    1090,  1093,  1094,  1096,  1097,  1098,  1099,  1105,  1106,  1108,
    1112,  1113,  1116,  1120,  1121,  9919, 12138,   -85, -1622,   959,
      74,    80,    42,  1122,  1124,    62,   161,  1131, -1622,  1252,
   -1622,  1252, -1622, -1622,  1295,  1332, -1622, -1622, -1622, -1622,
     587,    94,  1333,   101,  1337,    95,   102,  1343,  1246,  1281,
     106,  1507, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
     365, -1622,  1508,  1512, -1622, -1622, 11888,  1334,   428,  1513,
    1342,  1255,  1518,   428, -1622, -1622,   -30, -1622,  1345,   545,
    1265, -1622,  1531,  1533,   -38,  1515, -1622,   195,   159,    63,
    1536,  1541,  1548,  1549,  1550,  1552,  1554,  1557,  -153,  1564,
     211,  4396,  4396, -1622,  1570,  9919,  9919,  1155,  1155,  1540,
    9919,  1100,   394,  1575,  1577,  1214, -1622,  9919,  6652,  9919,
    9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  1219,  9919,
    9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,
    9919,  9919,  9919,  9919,  1220,  9919,  9919,  9919,  1221,  9919,
    9919,  9919,  9919,  9919,  9919,  7741,  9919,  9919,  9919,  9919,
    9919,  9919,  9919,  9919,  9919,  9919,  1222,  1233,  1234,  1238,
    1239,  9919,  9919,  1240,  1242,  1248,  9919,  9919,  1607,  1250,
    1266,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,
    9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,
    9919,  9919,  9919,  1271,  9919,  9919,  8483, -1622,  9919,  9919,
    9919,  9919,  9919,   167,  1273,   748,  9919,  7015,  9919,  9919,
    9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919,
    9919,  1636, -1622,    63,  1637,  9919,  1638,  1639,   -47, -1622,
    9919,  1277,   370,  1642,    63, -1622, -1622, -1622,   323, -1622,
      63,  1493,  1467, -1622,  1648,  1649, -1622, -1622,  1651,  1655,
    1656,  1657,  1659, -1622,  1660,  1661,  1664, 11888,  1669,  1446,
    1671,  1673,  1681,  1695,  1709,  1354,  1723,    20,   135,  1741,
   -1622, -1622, -1622, -1622,   155,  1382,  1383, -1622, -1622,  1384,
    1384,  1384,  1384,  1384, -1622,  1384, -1622,  1385,  1384,  1384,
    1384,  1694, -1622,  1694, -1622,  1384,  1384,  1384,  1387,  1694,
    1384,  1694, -1622, -1622, -1622, -1622, -1622,  1388,  1389, -1622,
      93,  1752, 11888,  1753,  1754,  1755,  1393,  1394, -1622,  -158,
    1759,  1760,  1580,  1399, -1622, -1622, -1622,  1582,  1764,  1584,
    1509,  1766,   106,  -123, -1622,   385, -1622, -1622,    25, -1622,
    9919,  1585,    63,   182,   557, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622,  1769,  1770,  -124, -1622,  1769,   235, -1622,  1711,
   -1622,  1408,  4396,  2086,   403, -1622,  9919,  9919, -1622,  1409,
   -1622,  9919,  1558,   573, -1622, -1622, -1622,  8565,  8104,  2041,
    2371,  2701,  8590,  8630,  8659,  8846,  8895,  8939, -1622,  3031,
    3361,  3691,  4021,  9008,  4351,  4681,  5011,  9033,  9209,  9258,
     242,  5341,  9297,  5671, -1622,  9322,  9366,  9391, -1622, 12173,
    6001,  6046,  6452,  6501,  8216,  1418,  9572,  9621,  9655,  9680,
    9740,  9765,  9935,  9984,  6668,  6717,  6742, -1622, -1622, -1622,
   -1622, -1622, 10013,  6767,  1454,  1455,  1456,   605,   656,  1423,
    1459,  1468,  6815, 10038, 10098, 10123, 10284, 10309, 10341, 10371,
   10396,  6851,  7047,  7092,  7117,  7142,  7178,  7212,  7397,   771,
   10421, 10447, 10472,  7451, -1622,   931, 10497, -1622,  4725,  5054,
    5383,  5713,  5713, -1622,    49, -1622, -1622,  1578,  9919,  9919,
    1437,  9919,  3736,  1438,  1442,  1444,  9919,  1469,  1599,  1679,
     882,   845,   845,   795,   795,   795,   795,   775,  1540,  1540,
     123, -1622,   182,  1688, -1622, -1622,  1451,   445,  1662,  1663,
    1665, -1622,  1558, 10522, -1622, -1622,    12,   215,  1131,  1467,
    1467,  1668,  1641,    63, -1622,  1672, -1622, -1622,   -32, 11888,
   11888,  1818, -1622, -1622, -1622, -1622,  1789, 11888,  1824,  1602,
    1603, -1622, -1622, -1622, -1622, -1622, -1622,  1828, -1622,  1829,
   -1622, -1622,   428,   428,  1831, -1622, -1622, -1622, -1622, -1622,
   -1622,  1833, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622,  1833, -1622, -1622, -1622,  1834,  1840,  1658,  1478,  1483,
    9919,  1487,  1789, 11888, 11888, 11888,  1653,   428,  1606,   166,
     193,  1676,  1858,    73,  1859,   198,  1861,  1862,  1682, -1622,
   -1622,  1780,  1865,  1207, -1622,  1252, -1622,  1866, -1622, -1622,
   -1622,   676,  4396,  1814,  1705,   182, -1622, -1622,  1852,  -139,
   -1622,   408,  1510, -1622,  -139,  1510,  1687,  9919, -1622,  9919,
   -1622,  9919,  3076,  2416,  1790,  7476,  1511,  1514,  9919,  9919,
   -1622,  9919,  2746,  1722,  1722,  9919, -1622, -1622, -1622, -1622,
   -1622, -1622,  9919,  9919,  9919,  9919, -1622,  9919,  9919,  9919,
   -1622, -1622, -1622, -1622,  9919,  9919, -1622,  9919, -1622, -1622,
   -1622, 11888, 11888,  9919,  9919,  9919,  1874, -1622,  1553,  1555,
    1559,  1560,  1561,  1562, -1622, -1622, -1622,  9919,  9919,  9919,
   -1622,  9919,  1516,  1520,  1537,  1565,  1878,  1573,  1896,  1583,
    1544,  1546,  9919, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622,  9919,  9919,  9919,  9919,  9919,  9919,  9919,  9919, -1622,
    9919, -1622, -1622, -1622,  9919, -1622,  9919, -1622, -1622, -1622,
    9919,  1558,  5713,  5713,  1693,  4066,  9919, -1622,  9919,  9919,
    1558, -1622,  1785,    63,  1921,   -47,  1792,  1792,  1792,  1566,
     449,  9919,  1923,  1924,  1585, -1622, -1622,    63,  9919,   -72,
      63,  1563,  1773,  1791,  1586,  1789,  1789, 11888, 11744,  1789,
   -1622,  1939,  1946, -1622, -1622,  1587,  1589,   447,   462,   672,
     462,   462, -1622,   456,   462,   462,   462,   672,   672,   462,
     462,   462,   473,   672,   462,   672,  1591,  1592,  1879, -1622,
    9919,  4396,   166,  1789,  1789,  1789,   597, -1622,  1594, -1622,
    1595,  1596,  1597,  1598,   481, -1622,  1714,   166,  1963,   199,
    1922, -1622,  1841,  1728,   166,   201,  1795,  1977,  1978,  -116,
    1980,  1622,  1832,   465,  1626,  1631,  1842,  1632,   484, -1622,
    1995,  1558, -1622, -1622,  1996,   -12,  1997,  1998,  2000,  1640,
     641, -1622,  1634, -1622,   528,  9919,  1807, -1622,  8467,  1850,
    2005, -1622, -1622,  2009,  8830,  -130, -1622,  -130, -1622, -1622,
    4396,  3406, -1622,  9919,  1650,  9919, -1622, -1622,  8302,   983,
   10547,  9919,  9919,  1647,  1652, 10572, 10597, 10633,  7501,  7541,
   10658, 10690, 10720, 10745, 10770, 10796,   -23,   -17, 10821, 10846,
    7570,  1654,  1670,  1674,  1677,  1683,  1684,  1712,  1060,  7758,
   10871, 10896, -1622, -1622, -1622,  1715,   495,  1716,   521,  1717,
   -1622, -1622, 10921,  7826,  7851,  7904, 10946, 10982,  7929,  8120,
    1139,  1183,  1209, 11007,  1692,  1708,  9919,  1558,  9919,  1075,
    1558,  4396,  1558,  1710,  1558,  1713,  1718,  1960,  1876,   182,
   -1622, -1622,  1868,  1720,  1721,  1724, -1622,  2022,  4396,  2006,
      18,  1705, -1622,  4396,  9919,  1725, -1622, -1622,   -72,  9919,
    1738,  1762,  2024, 11744, 11744,  1789,  1849,  2034,  1767,  1768,
    1772,  1993,  2044,  1774,  2079,   103, -1622, -1622, -1622,  1930,
    1931, -1622, 11744, -1622, -1622,  1919,   596, -1622,  2124, -1622,
   -1622,  1909,  2136, -1622,  2137, -1622, -1622, -1622,  1782, 11039,
     535, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622,   690,   166,  2145,  2146,  2147,  2155, -1622,  2156,  1798,
     553,  1799,  1910,   166, -1622,  1413,  2055,  1802,   556,  1918,
     166,  2166,   205,  2042,  1207, -1622,   -13,  9919,  1811,  1813,
    1817,  2180,  2180,  1821,  2024,   497,  1207, 11888, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622,   641,   558,   641,   -20,    76,
    1823, -1622,  1236,   514, -1622, -1622,  4396,  1951,  2172, -1622,
   -1622,  4396,   560, -1622,  2010, -1622, -1622,  4396,  2191, -1622,
    9919, -1622, -1622,  9919, -1622, 11069, 11817, -1622, -1622, -1622,
   -1622, -1622,  9919,  9919, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622,  9919, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622,  9919,  9919, -1622, -1622,  1864,  1864,  1864,
   -1622,  1867,   811, -1622,  1869,   859, -1622,  1864,  1864, -1622,
    9919,  9919,  9919, -1622, -1622,  9919,  9919, -1622,  9919, -1622,
    9919, -1622,  9919, -1622, -1622, -1622,  1835,  1836,  1075,  1837,
    1838, -1622,  1839, -1622, -1622,  9919,  9919,  1585,  1785, -1622,
    2194,  2194,  2194,  1843,  9919,  9919,  2196,  1807,  4396,  2180,
   -1622, 11094,  2203,  2206, -1622,   566, -1622, -1622, 11744, -1622,
   -1622,  2205,  9919,  2208,  2167,     4,  9919, -1622, -1622, -1622,
   -1622, -1622, -1622,  1851,  1855,  1856,  9919, -1622, -1622, -1622,
     597,  2161, -1622,  1857,  2211, -1622,   672, -1622,   672,   672,
    9919, -1622, -1622,  2169, -1622,   569,  1860,  1873,  1875,  1877,
   -1622,   166, -1622,   166,  1881,   572,  1788, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,  2027,   166,
   -1622,  1884,   600,  1889,  1982,   166,  1981,   603,  1890,  2099,
    2100,  1893, 11119,  2203,  2180,  2180, -1622,   614,   652,  2206,
     654,    16, -1622, -1622,  1789,   658, -1622, -1622, -1622, -1622,
    2257, -1622, -1622,   528,  9919,  9919, -1622, -1622,  1895, -1622,
    9193, -1622,  9556,  1900,  2197,  1807,  1906, 11145, 11170, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, 11195,
   11220, 11245,  1864,  1864,  1864,  1864,  1864,  1864,  1667, 11270,
    2223,  2095,  2095,  2095,  1864,  1916,  1917,  1925,  1864,  1920,
    1926,  1927,  1864,  2095,  2095, 11295, 11331, 11356, 11388, 11418,
    8185, 11443, 11468, -1622, -1622, -1622, -1622, -1622, 12073,  -162,
    4396,  1705,  1876, -1622,   660,   662,   682,  2284,  4396,  4396,
    2268, -1622,   689,  2271, -1622,   691, -1622,   696, -1622,  2287,
   -1622,   698, 11494,   701,  1929,  1940,  2139, -1622, 11519,  1938,
    1942,  1943, 11544,   700, -1622,  2118, -1622, -1622, 11569, -1622,
    2448, -1622, -1622, -1622, -1622,  2307,   769,   773,   166, -1622,
   -1622,  2778,  3108,  3438,  3768,  4098,  4428,  2258,   778,   166,
   -1622,   166,  1948,   780,  2188,   497,  9919,  1954,  1961,  2024,
   -1622,   824,   907,   909, -1622,  2324, -1622,   913, -1622,   519,
    2325,  2273,  2274,  8119, -1622,    76, -1622,  4396,  4396,  2328,
    2329, -1622,  4396, -1622,  4396,  8830,  1968, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622,  2095,  2095,  2095,  2095,  2095,  2095,
   -1622,  9919, -1622,  2331,  2279,  1970,  1971,  1972,  2095, -1622,
    2011,  2012,  2095, -1622,  2013,  2014,  2095,  1984,  1988, -1622,
   -1622, -1622, -1622, -1622,  9919, -1622, -1622, -1622,  2154,  9919,
   -1622,  2213,  1585, -1622,  2344, -1622, -1622,  1990,  9919, -1622,
    2097,  2163,  2356, -1622,  2360, -1622, -1622,  2359,  1091, -1622,
    2362,  9919,  9919, -1622, -1622, -1622, -1622, -1622, -1622,  2312,
   -1622,  4758, -1622, -1622,  5088, -1622,  2002, -1622, -1622,   917,
   -1622,  2299,  2248,  2228,  2219,  2122, -1622, -1622,   919,   924,
     166, -1622,  2023,    16, -1622, 11594,  2203,  2206,   933,  2210,
   -1622, -1622, -1622, -1622, -1622,  2401,   -29,   -76,  2216, -1622,
   -1622,  2389,  2043,   940,  2408,  2318,  2047,  2048,  2049,  2050,
    2051,  2052, 11619, -1622,  2053,  2430, -1622, -1622, -1622,  2083,
    1864,  2054,  2092,  2093,  1864,  2096,  2098,  2101, -1622, -1622,
   11644, -1622, 12073,   332,  2310,  1705, -1622, -1622,  4396, -1622,
    2466, -1622, -1622,  2104, -1622, -1622,  2105, 11680, 11705, -1622,
    5418, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
    5748, -1622, -1622,   943,  2472, -1622,   945,   947, -1622,  2475,
   -1622,  2476,  2477,  2123,  2125,  2128,  9919,  2486, -1622,   949,
       6, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,  2491,
      76,  2129, -1622,  2095, -1622, -1622, -1622,  2095, -1622, -1622,
   -1622, -1622, -1622,  2285,  2286,  2180, -1622, -1622,  2132, -1622,
   -1622,  1267, -1622,  6078, -1622, -1622, -1622,  2140,  2311, -1622,
     958, -1622, -1622,  2505,  2509,  2510,  4396,  2496, -1622,  2517,
   -1622, -1622, -1622, -1622,  2518,  2158,  1864,  1864,  2159,  1864,
    1864,  2355,  2361,  2160,  2523, -1622, -1622, -1622,  2302,  2527,
    2528,  2523,  2168,  2170,  2173,  9919, -1622,  2313,    76, -1622,
    2095,  2095, -1622,  2095,  2095, -1622, -1622, -1622,   969,  2175,
     975,  2176,   976,  2178,  2321, -1622,  4396,  2329, -1622,  2179,
    2184,  2185,  2186, -1622,  2530,  2533,  2541,  2523,  2523, -1622,
    2336,  2548,  2043, -1622, -1622, -1622, -1622,   395, -1622,  2190,
    2199,   981,   991,   555,  2558,   993, -1622, -1622,    -6,  2418,
     310,   371, -1622,  2523, -1622, -1622,  2479,  2323, -1622,  2336,
   -1622, -1622,   344, -1622, -1622, -1622,   355,   356,   995,   555,
     555,  2410, -1622, -1622, -1622, -1622, -1622, -1622,    -3, -1622,
   -1622, -1622,     0, -1622,  2342, -1622, -1622, -1622, -1622,   555,
      37,  2395,  2400,  2407,  2409,  2581,  2583, -1622, -1622
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1622,  2502,   -81, -1622, -1622, -1622, -1622,  -860,  1457, -1622,
    1609, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,  1691,  2241,
   -1622,  -212,  -595,  1181, -1622, -1325, -1622,   878, -1194, -1622,
   -1621, -1622, -1012, -1622,   948, -1218, -1622, -1622, -1307, -1622,
   -1622,  2130,  -262,  -263,  2119,  -466, -1622, -1622,  -275, -1622,
   -1622,   588, -1622, -1622, -1622,  1390,  1612,   362,   -59, -1622,
   -1622, -1622,  2506,  2016, -1622, -1622, -1061, -1622, -1622, -1622,
   -1622, -1622, -1622, -1622, -1622, -1198, -1622,  -844, -1622, -1622,
   -1622, -1622, -1622,   505,   108,  2545,  2276, -1622,  1739, -1622,
     798,  2018, -1622, -1622, -1622, -1622, -1622, -1622, -1622, -1622,
   -1077,  1308, -1622, -1622, -1622, -1622,   412, -1622, -1622, -1622,
     843, -1622,   480, -1622,  1336,  1325, -1585, -1613, -1382, -1428,
   -1305, -1622, -1011,   490,   219,   154,  -806,  -389,  1812, -1082,
   -1622, -1622, -1622,  2501, -1622,  -304, -1622,  1809,  1179, -1058,
   -1622, -1622, -1622, -1622,  2126, -1622, -1622, -1622, -1622, -1622,
    2326, -1622, -1622, -1378, -1622
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -667
static const yytype_int16 yytable[] =
{
     266,  1270,  1221,  1437,  1662,  1648,   505,  1305,   876,  1650,
     488,   838,   492,  -492,  1233,  1234,  1290,   838,  1252,   583,
    1047,  1048,  1658,  1298,   859,   806,  1053,  1129,  1055,   868,
    1801,   859,  1011,  1326,   782,  1446,  1447,    77,  1435,  1021,
    1126,  2191,  1128,   298,   483,   457,   339,  1119,   302,   303,
     304,   305,   306,   307,  1469,   988,  1119,  1809,  1638,  1741,
      44,   351,   352,   491,  1807,   272,   272,   484,  1320,   612,
     584,  2011,   357,   358,   359,  1755,   603,  -494,   361,   768,
     860,  1846,  1847,  -493,  2160,  1659,   481,   860,    45,  2070,
     848,   596,  1857,  1858,   144,  1022,  1868,   510,   517,    13,
     769,   284,   285,  2185,   513,   519,  2187,  1458,  1459,  1460,
    1461,   837,  1224,   101,  1639,  2013,   324,  1080,  1658,    76,
     585,   286,    47,    83,   525,    48,  1081,   838,   796,   882,
    1194,   325,  1742,   458,   459,   460,   461,   462,   463,   464,
     808,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,  1023,   480,   302,   303,
     304,   305,   306,   307,   839,   514,   520,  1002,  1462,  1069,
    -492,   511,   518,   733,  2014,  1640,  1225,  2186,   515,   521,
    2188,  1659,  1014,   842,   456,   734,    63,   142,   102,   597,
     299,   809,  1756,    74,  1702,  1703,    87,   145,   143,   840,
    1810,  2012,   770,  1713,  1714,  1869,    46,   849,  2192,   861,
     586,  1024,   613,  1946,  1947,  1948,  1949,  1950,  1951,  1321,
     762,  1485,   273,   273,  1448,   308,  1811,  1959,  1120,   989,
    1641,  1963,  1495,  1652,  -494,  1967,  1496,  1343,    78,  1632,
    -493,   862,   863,   869,   870,  2161,  2071,  1757,  1655,  1304,
    1750,   287,   458,   459,   460,   461,   462,   463,   464,   103,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   622,   480,   526,   807,   623,
    1117,  1344,   485,  1345,   340,    13,   633,   637,   639,   640,
     641,   642,   643,   644,   645,   646,   647,  1827,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,  2006,   665,   666,   667,  1019,   669,   670,
     671,   672,   673,   674,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   308,  1416,  1802,  1803,   875,
     692,   693,  2007,  1370,  1660,   697,   698,   735,  1812,  1371,
     702,   703,   704,   705,   706,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,  -492,   725,   726,  -492,  1012,   728,   729,   730,
     731,   732,  1436,   493,   118,   742,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
    1025,  1026,   883,  1867,   266,   886,   487,   602,  1029,   773,
     120,   309,  2075,  2148,  1765,  1731,  2078,  1463,  1464,  1465,
     897,   328,  2175,  2179,   274,   274,  1770,   275,   275,   123,
    1776,   572,  1777,   616,   125,  2173,  -494,   600,    85,  -494,
    2163,  1076,  -493,  -351,   573,  -493,  1083,  1292,   457,  1299,
     600,    75,  -313,  1634,  1063,  1064,  1065,  1476,    13,  1478,
    1479,  1781,    82,   527,   528,   529,   530,   736,  1466,   106,
     600,  2166,  1782,   109,  1070,  1071,  1072,  1073,    88,  2119,
    2120,   312,  2121,  2122,    94,  2149,  2174,   779,   885,   481,
    1939,  1001,  1783,   503,  1928,   127,   329,  2164,  1834,  1835,
    1836,  1837,  1838,  1839,   290,  1005,  1784,   129,  1035,  1036,
    1848,   625,   626,  1871,  1852,  1785,   131,  1666,  1856,   872,
     890,   891,   332,    86,  1934,   780,   340,  2165,   494,   112,
     119,  1328,    90,  1329,  2176,  2180,   291,    91,   313,  1935,
    1667,  -666,  1156,  1157,  2043,   892,   893,   320,   589,   494,
     895,  1222,  2177,  2181,  1228,  1786,   121,   902,  1077,   335,
    1009,   292,  -351,  1084,  1293,  2150,  1300,   330,  1788,   293,
    1635,   574,  2044,  2156,  1793,   124,   613,  2178,  2182,  2151,
     126,   294,  1013,   458,   459,   460,   461,   462,   463,   464,
    1101,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,    96,   480,   923,   924,
     575,  2167,    92,  1309,  1428,   458,   459,   460,   461,   462,
     463,   464,  1310,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,  1235,   480,
    1471,   128,   295,  1813,   859,  2149,    93,  2042,   133,  1472,
     627,   508,  1271,   130,    95,   113,  1272,   992,   993,   627,
     995,   107,   132,   296,   509,   456,   458,   459,   460,   461,
     462,   463,   464,   114,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   115,
     480,   134,   288,   321,   590,   354,   355,    98,   133,   270,
     860,  2143,   898,  1259,  1273,  2073,  1901,  1274,   100,  2112,
      99,  1904,   289,  1924,   104,   271,   116,  1909,   105,   297,
    -666,  1103,  1275,  1260,   108,  2150,  2169,  2170,  1918,   122,
    1919,   533,   534,  1104,  1483,  1217,   775,   494,  2083,  2151,
    1209,   134,  1276,  1484,  1899,  2141,  2142,  1261,  1262,   135,
    1277,   866,   867,  1900,   136,  2189,  1103,  2047,   110,  1061,
     139,   738,   739,   140,   740,   137,  2033,   741,  1104,  1105,
    2037,  2168,   827,  2118,  1122,  1123,   146,  1106,   832,  1195,
     834,   458,   459,   460,   461,   462,   463,   464,  1206,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,  1105,   480,   478,   479,  1130,   480,
    1131,   269,  1106,  1257,  1258,  1706,  1707,  1138,  1139,   282,
    1140,  1107,  1263,  1264,  1145,   477,   478,   479,  1278,   480,
    1279,  1146,  1147,  1148,  1149,   301,  1150,  1151,  1152,  1265,
    1264,   314,  1990,  1153,  1154,   315,  1155,  1287,  1288,  1280,
    1315,  1316,  1158,  1159,  1160,   317,  1107,   316,  2000,  2003,
    1975,  1391,  1392,  1710,  1711,  1108,  1168,  1169,  1170,   319,
    1171,   473,   474,   475,   476,   477,   478,   479,   322,   480,
     318,  1182,  2100,  2101,   327,  2103,  2104,  1394,  1395,  1318,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,   323,  1191,
    1108,  1482,  1288,  1192,   331,  1193,   471,   472,   473,   474,
     475,   476,   477,   478,   479,  1199,   480,  1201,  1201,  1492,
    1288,   335,  1630,  1288,  1656,  1327,  1671,  1672,  1654,   333,
    1218,  2053,  1748,  1749,  1109,  1771,  1288,  1223,  1779,  1288,
     899,   458,   459,   460,   461,   462,   463,   464,   341,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   337,   480,  1790,  1288,   342,  1795,
    1316,   955,   956,  1040,  1041,   343,  1044,  1045,  1046,  1269,
    1804,  1805,  1049,  1050,  1051,  1417,   344,  1054,  1419,   345,
    1420,   346,  1422,   458,   459,   460,   461,   462,   463,   464,
     347,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   348,   480,  1806,  1805,
    1808,  1749,   957,   958,  1814,  1327,  1873,  1874,  1875,  1874,
     816,   817,   818,   819,  1332,   820,   349,  1336,   822,   823,
     824,  1110,   350,  1341,    77,   828,   829,   830,  1876,  1874,
     833,   356,  1347,   364,   895,  1879,  1805,  1881,  1882,   363,
    1355,  1356,  1883,  1884,  1886,  1887,   365,  1889,  1890,   366,
     458,   459,   460,   461,   462,   463,   464,   367,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   368,   480,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   369,   480,
     458,   459,   460,   461,   462,   463,   464,  1418,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   370,   480,  1907,  1288,   979,   980,  1908,
    1288,  1984,  1985,  1438,  1917,  1288,  1921,  1288,  1441,   458,
     459,   460,   461,   462,   463,   464,   371,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   372,   480,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   373,   480,
    1929,  1882,   374,   458,   459,   460,   461,   462,   463,   464,
     495,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   375,   480,   376,   458,
     459,   460,   461,   462,   463,   464,  1642,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   377,   480,   378,    65,   458,   459,   460,   461,
     462,   463,   464,   379,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,  1677,
     480,  1090,  1678,  1930,  1805,  1931,  1805,   496,  1091,  1933,
    1884,  1689,  1690,  1994,  1288,  2001,  1288,  -319,   380,    66,
    2002,  1288,   381,  1691,   382,   497,   503,   985,   986,  2008,
    1749,   383,  1698,  1699,   384,    67,  2018,  1672,   498,  2056,
    1288,  2058,  1882,  2059,  1884,  2068,  2069,  2085,  2086,  1715,
    1716,  1717,  2090,  2091,  1718,  1719,   486,  1720,   385,  1721,
     386,  1722,   387,   499,  1092,  2123,  2124,   388,  1093,  2126,
    2127,   506,  2129,  2124,  1728,  1730,    68,  2154,  2124,  1352,
    1353,   500,   389,  1738,  1739,  1094,   360,  2155,  2124,  2158,
    2159,  2183,  2124,    69,  1095,   390,    70,  1015,  1016,  1214,
    1215,  1752,  1735,  1736,   391,  1758,   392,   393,   507,   394,
     395,   396,   397,   398,   399,  1762,   400,   401,   402,   403,
     404,    71,   405,   406,   407,  1096,   408,   512,   409,  1768,
     410,   516,   411,   412,  1664,   413,   414,   522,   415,   416,
     417,   418,   419,   420,   421,   422,  1497,  1498,  1499,  1500,
    1501,  1502,   423,  1503,   424,  1504,  1382,  1383,   425,  1505,
    1506,  1507,   426,  1508,   427,   428,   429,  1509,  1510,  1511,
    1512,  1513,   430,   431,   432,   433,   434,   435,   436,   437,
    1097,  1514,   438,   439,   440,   441,  1515,  1516,   442,   443,
    1517,   444,   445,   446,   447,  1518,  1519,  1520,  1521,  1522,
     448,   449,  1523,   450,  1524,  1525,  1526,   451,   452,  1527,
    1528,   453,  1529,  1530,  1531,   454,   455,   489,  1532,   490,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,  1533,   480,   523,  1407,  1408,  1534,   524,    72,
     532,   535,  1535,  1536,  1537,   536,   579,   581,   571,  1538,
    1539,   582,  1540,  1541,  1542,  1543,   580,   591,  1544,   588,
    1545,  1546,  1547,  1548,   593,  1549,   594,  1550,  1551,   604,
    1552,   599,  1553,  1554,   605,  1555,  1556,  1557,  1558,  1409,
    1410,   606,   607,   608,  1559,   609,  1560,   610,  1561,  1562,
     611,  1563,  1564,  1565,  1566,  1567,  1568,   615,  1569,  1570,
    1571,  1572,  1573,   618,   480,  1411,  1412,  1574,   628,  1575,
     629,  1576,   630,  1817,  1818,   648,   664,   668,   687,  1822,
    1577,  1824,  1578,  1579,  1580,  1581,  1582,  1583,  1584,   688,
     689,  1585,  1586,  1665,   690,   691,   694,  1587,   695,  1588,
    1589,  1590,   699,  1591,   696,  1592,   700,  1593,  1594,  1595,
    1596,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   701,   480,  1597,  1598,  1599,   724,   737,   761,
     763,   765,   767,   774,  1600,   776,  1601,  1602,  1603,   783,
     784,   786,   787,  1604,   788,  1605,  1606,  1607,   789,   790,
     791,  1608,   792,   793,   794,  1609,  1610,   795,  1611,  1612,
    1613,  1614,   797,   798,   799,  1615,   800,   458,   459,   460,
     461,   462,   463,   464,   801,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     802,   480,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   803,   480,   804,  1925,  1616,  1617,  1618,  1619,
    1620,   458,   459,   460,   461,   462,   463,   464,   805,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,  1341,   480,   810,   812,   813,   814,
     821,   825,   831,   835,   836,   841,   843,   844,   845,   846,
    1952,   847,   850,   851,   852,   853,   854,   855,   856,   858,
     873,   857,   878,   880,   888,   894,  1621,  1622,  1623,  1624,
    1625,    13,  1626,  1970,   938,   952,   953,   954,  1972,   959,
     960,  1497,  1498,  1499,  1500,  1501,  1502,  1978,  1503,   961,
    1504,   -69,   994,   997,  1505,  1506,  1507,   998,  1508,   999,
    1987,  1988,  1509,  1510,  1511,  1512,  1513,  1003,  1004,  1006,
    1007,  1027,  1008,   838,  1017,  1018,  1514,  1030,  1020,  1031,
    1032,  1515,  1516,  1033,  1034,  1517,  1037,  1042,  1058,  1056,
    1518,  1519,  1520,  1521,  1522,  1057,  1059,  1523,  1060,  1524,
    1525,  1526,  1062,  1066,  1527,  1528,  1068,  1529,  1530,  1531,
    1078,  1079,  1082,  1532,  1085,  1086,  1087,  1088,  1089,  1102,
    1114,  1115,  1118,  1119,  1134,  1124,  1142,  1533,  1161,  1136,
    1137,  1172,  1534,  1176,  1162,  1173,  1163,  1535,  1536,  1537,
    1164,  1165,  1166,  1167,  1538,  1539,  1175,  1540,  1541,  1542,
    1543,  1178,  1174,  1544,  1177,  1780,  1546,  1547,  1548,  1180,
    1549,  1181,  1550,  1551,  1179,  1552,   -71,  1553,  1554,  1207,
    1555,  1556,  1557,  1558,  1210,  1212,  1219,  1220,  1229,  1559,
    1230,  1560,  1216,  1561,  1562,  2066,  1563,  1564,  1565,  1566,
    1567,  1568,  1253,  1569,  1570,  1571,  1572,  1573,  1231,  1254,
    1268,  1232,  1574,  1255,  1575,  1256,  1576,  1266,  1267,  1282,
    1283,  1284,  1285,  1286,  1289,  1577,  1291,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,  1296,  1294,  1585,  1586,  1297,  1301,
    1302,  1303,  1587,  1306,  1588,  1589,  1590,  1307,  1591,  1308,
    1592,  1311,  1593,  1594,  1595,  1596,  1312,  1314,  1317,  1313,
    1319,  1327,  1323,  1322,  1324,  1325,  1333,  1337,  1338,  1597,
    1598,  1599,  1339,  1357,  2116,  1348,  1425,  1426,  1358,  1600,
    1375,  1601,  1602,  1603,  1429,  1433,  1434,  1444,  1604,  1449,
    1605,  1606,  1607,  1840,  1841,  1376,  1608,  1450,  1454,  1377,
    1609,  1610,  1378,  1611,  1612,  1613,  1614,  1455,  1379,  1380,
    1615,   458,   459,   460,   461,   462,   463,   464,  1414,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,  1415,   480,  1421,  1381,   887,  1423,
    1390,  1393,  1396,  1457,  1424,  1430,  1431,  1467,  1468,  1432,
    1439,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,  1442,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,  1470,
     480,  1497,  1498,  1499,  1500,  1501,  1502,  1443,  1503,  1473,
    1504,  1474,  1451,  1452,  1505,  1506,  1507,  1453,  1508,  1456,
    1475,  1477,  1509,  1510,  1511,  1512,  1513,  1480,  1486,  1487,
    1488,  1621,  1622,  1623,  1624,  1625,  1514,  1626,  1489,  1490,
    1494,  1515,  1516,  1491,  1493,  1517,  1628,  1629,  1631,  1633,
    1518,  1519,  1520,  1521,  1522,  1636,  1643,  1523,  1644,  1524,
    1525,  1526,  1645,  1646,  1527,  1528,  1649,  1529,  1530,  1531,
    1663,  1669,  1670,  1532,  1674,  1676,  1700,  1733,  1705,  1740,
    1709,  1723,  1724,  1725,  1726,  1727,  1744,  1533,  1737,  1746,
    1751,  1754,  1534,  1753,  1764,  1767,  1759,  1535,  1536,  1537,
    1760,  1761,  1769,  1766,  1538,  1539,  1772,  1540,  1541,  1542,
    1543,  1787,  1792,  1544,  1794,  1902,  1546,  1547,  1548,  1773,
    1549,  1774,  1550,  1551,  1775,  1552,  1778,  1553,  1554,  1789,
    1555,  1556,  1557,  1558,  1791,  1796,  1797,  1798,  1799,  1559,
    1815,  1560,  1819,  1561,  1562,  1825,  1563,  1564,  1565,  1566,
    1567,  1568,  1828,  1569,  1570,  1571,  1572,  1573,  1826,  1843,
    1844,  1849,  1574,  1850,  1575,  1853,  1576,  1877,  1878,  1880,
    1885,  1851,  1854,  1855,  1891,  1577,  1893,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,  1895,  1892,  1585,  1586,  1896,  1897,
    1906,  1916,  1587,  1920,  1588,  1589,  1590,  1922,  1591,  1926,
    1592,   889,  1593,  1594,  1595,  1596,  1927,  1932,  1936,  1937,
    1938,  1940,  1941,  1944,  1953,  1955,  1956,  1957,  1958,  1597,
    1598,  1599,  1961,  1962,  1965,  1966,  1973,  1976,  1979,  1600,
    1968,  1601,  1602,  1603,  1969,  1971,  1977,  1980,  1604,  1981,
    1605,  1606,  1607,  1982,  1983,  1989,  1608,  1986,  1993,  1995,
    1609,  1610,  1996,  1611,  1612,  1613,  1614,  1997,  1998,  1999,
    1615,   458,   459,   460,   461,   462,   463,   464,  2004,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,  2009,   480,  2010,  2015,   903,  2016,
    2017,  2019,  2020,  2022,  2023,  2024,  2025,  2026,  2027,  2034,
    2029,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,  2030,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,  2032,
     480,  1497,  1498,  1499,  1500,  1501,  1502,  2035,  1503,  2036,
    1504,  2038,  2045,  2039,  1505,  1506,  1507,  2040,  1508,  2048,
    2049,  2050,  1509,  1510,  1511,  1512,  1513,  2057,  2060,  2061,
    2062,  1621,  1622,  1623,  1624,  1625,  1514,  1626,  2063,  2067,
    2064,  1515,  1516,  2065,  2072,  1517,  2074,  2084,  2081,  2082,
    1518,  1519,  1520,  1521,  1522,  2089,  2088,  1523,  2092,  1524,
    1525,  1526,  2093,  2094,  1527,  1528,  2095,  1529,  1530,  1531,
    2096,  2098,  2105,  1532,  2099,  2102,  2107,  1805,  2106,  2109,
    2110,  2111,  2131,  2138,  2113,  2117,  2114,  1533,  2139,  2115,
    2125,  2128,  1534,  2130,  2140,  2133,  2144,  1535,  1536,  1537,
    2134,  2135,  2136,  2147,  1538,  1539,  2152,  1540,  1541,  1542,
    1543,  2157,  2162,  1544,  2153,  1905,  1546,  1547,  1548,  2160,
    1549,  2184,  1550,  1551,  2190,  1552,  2171,  1553,  1554,  2193,
    1555,  1556,  1557,  1558,  2194,  2195,  2197,  2196,  2198,  1559,
     283,  1560,  1349,  1561,  1562,  1144,  1563,  1564,  1565,  1566,
    1567,  1568,   624,  1569,  1570,  1571,  1572,  1573,  1205,  1732,
    1872,  1816,  1574,   778,  1575,   764,  1576,  1211,  1440,   338,
     877,   141,  2132,  1943,  1127,  1577,   617,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,   884,  1657,  1585,  1586,  1923,  2172,
    1637,  1653,  1587,  1052,  1588,  1589,  1590,   353,  1591,  1763,
    1592,  1133,  1593,  1594,  1595,  1596,  1067,   592,     0,     0,
     811,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   904,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,  1141,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1910,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   905,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1132,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1911,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   912,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1346,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1912,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   913,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,   996,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1913,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,  1198,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1914,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   915,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1915,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   917,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   459,   460,   461,   462,
     463,   464,     0,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1991,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   918,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   460,   461,   462,   463,
     464,     0,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,     0,
       0,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  1992,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   919,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,     0,     0,
       0,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  2054,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   925,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,  -667,  -667,  -667,  -667,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,     0,     0,
       0,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  2055,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
    1598,  1599,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,  1601,  1602,  1603,     0,     0,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,     0,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   927,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,  1497,  1498,  1499,  1500,  1501,  1502,     0,  1503,     0,
    1504,     0,     0,     0,  1505,  1506,  1507,     0,  1508,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,  1514,  1626,     0,     0,
       0,  1515,  1516,     0,     0,  1517,     0,     0,     0,     0,
    1518,  1519,  1520,  1521,  1522,     0,     0,  1523,     0,  1524,
    1525,  1526,     0,     0,  1527,  1528,     0,  1529,  1530,  1531,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,     0,
       0,     0,  1534,     0,     0,     0,     0,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,  1539,     0,  1540,  1541,  1542,
    1543,     0,     0,  1544,     0,  2087,  1546,  1547,  1548,     0,
    1549,     0,  1550,  1551,     0,  1552,     0,  1553,  1554,     0,
    1555,  1556,  1557,  1558,     0,     0,     0,     0,     0,  1559,
       0,  1560,     0,  1561,  1562,     0,  1563,  1564,  1565,  1566,
    1567,  1568,     0,  1569,  1570,  1571,  1572,  1573,     0,     0,
       0,     0,  1574,     0,  1575,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,     0,     0,  1585,  1586,     0,     0,
       0,     0,  1587,     0,  1588,  1589,  1590,     0,  1591,     0,
    1592,     0,  1593,  1594,  1595,  1596,     0,     0,     0,     0,
       0,     0,   147,   148,   149,   150,   151,   152,     0,  1597,
    1598,  1599,     0,     0,     0,     0,   153,   154,     0,  1600,
       0,  1601,  1602,  1603,   155,   156,     0,     0,  1604,     0,
    1605,  1606,  1607,     0,     0,     0,  1608,   157,     0,     0,
    1609,  1610,     0,  1611,  1612,  1613,  1614,     0,     0,     0,
    1615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,     0,   159,
       0,     0,   160,   161,     0,     0,     0,     0,   932,     0,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1616,  1617,  1618,  1619,  1620,     0,     0,   163,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1621,  1622,  1623,  1624,  1625,     0,  1626,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,   458,   459,   460,   461,   462,   463,   464,   167,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,   169,   170,     0,     0,     0,   171,
       0,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   172,   480,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,     0,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
       0,     0,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   260,   261,   262,     0,     0,     0,     0,
     263,   264,     0,     0,   265,   147,   148,   149,   150,   151,
     152,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,   155,   458,   459,
     460,   461,   462,   463,   464,     0,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,     0,     0,
     634,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   458,   459,   460,
     461,   462,   463,   464,   162,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,   458,   459,   460,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   635,     0,   934,
       0,     0,   166,     0,     0,   458,   459,   460,   461,   462,
     463,   464,   167,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   459,   460,   461,   462,   463,   464,   935,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,   636,     0,
       0,     0,     0,     0,     0,     0,     0,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,     0,   211,     0,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,     0,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   260,   261,   262,     0,
       0,     0,     0,   263,   264,     0,     0,   265,   147,   148,
     149,   150,   151,   152,     0,     0,     0,     0,     0,     0,
       0,     0,   153,   154,     0,   947,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   743,     0,   744,     0,   458,   459,   460,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     158,   480,     0,     0,   948,   159,     0,     0,   160,   161,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,     0,   458,   459,   460,   461,   462,   463,   464,   949,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,   458,   459,   460,
     461,   462,   463,   464,   951,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,     0,     0,     0,
       0,     0,   962,     0,     0,   166,     0,     0,   458,   459,
     460,   461,   462,   463,   464,   167,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,   971,     0,
       0,     0,   458,   459,   460,   461,   462,   463,   464,   745,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,     0,   211,     0,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,     0,     0,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   260,
     261,   262,     0,     0,     0,     0,   263,   264,     0,     0,
     746,   147,   148,   149,   150,   151,   152,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   154,     0,     0,     0,
       0,     0,     0,   155,     0,     0,     0,   458,   459,   460,
     461,   462,   463,   464,   972,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,   159,     0,
       0,   160,   161,     0,     0,     0,     0,     0,     0,   973,
     162,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   974,   480,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   975,
     480,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   976,     0,     0,   166,     0,
       0,   458,   459,   460,   461,   462,   463,   464,   167,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,     0,   977,
     458,   459,   460,   461,   462,   463,   464,     0,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,   211,
       0,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,     0,
       0,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   260,   261,   262,     0,     0,     0,     0,   263,
     264,     0,     0,   265,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,   978,     0,   155,   675,   458,   459,
     460,   461,   462,   463,   464,     0,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,   984,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,   459,   460,   461,
     462,   463,   464,  1135,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,   458,   459,   460,   461,   462,   463,   464,  1362,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1363,     0,
       0,   166,     0,     0,   458,   459,   460,   461,   462,   463,
     464,   167,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,  1374,   480,   458,
     459,   460,   461,   462,   463,   464,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,     0,   211,     0,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,     0,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   260,   261,   262,     0,     0,
       0,     0,   263,   264,     0,     0,   265,   147,   148,   149,
     150,   151,   152,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   154,     0,     0,  1384,     0,     0,     0,   155,
     458,   459,   460,   461,   462,   463,   464,  1236,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,     0,     0,     0,     0,
    1238,     0,     0,  1239,     0,  1240,     0,     0,  1241,   158,
       0,     0,     0,     0,   159,     0,     0,   160,   161,     0,
       0,     0,     0,  1242,     0,     0,   162,     0,     0,     0,
    1243,  1244,     0,  1400,     0,   458,   459,   460,   461,   462,
     463,   464,     0,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,  1401,   480,
       0,     0,     0,     0,     0,  1245,   458,   459,   460,   461,
     462,   463,   464,   901,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1402,     0,     0,   166,     0,  1247,     0,     0,     0,
       0,     0,     0,     0,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1405,     0,     0,  1248,
       0,     0,     0,     0,     0,     0,     0,  1249,     0,     0,
       0,     0,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1250,     0,     0,     0,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,     0,   211,     0,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,  1350,     0,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   260,   261,
     262,     0,     0,     0,     0,   263,   264,     0,     0,   265,
     147,   148,   149,   150,   151,   152,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,     0,  1406,     0,     0,
       0,     0,   155,   458,   459,   460,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,   936,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,   159,     0,     0,
     160,   161,     0,     0,     0,     0,     0,     0,     0,   162,
       0,     0,  1864,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1335,     0,   458,   459,   460,   461,   462,
     463,   464,   937,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
     458,   459,   460,   461,   462,   463,   464,     0,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     458,   459,   460,   461,   462,   463,   464,   167,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,     0,     0,  1351,   458,
     459,   460,   461,   462,   463,   464,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,     0,   211,     0,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,     0,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   260,   261,   262,     0,     0,     0,     0,   263,   264,
       0,     0,   265,   147,   148,   149,   150,   151,   152,     0,
       0,     0,     0,     0,     0,     0,     0,   153,   154,   727,
       0,     0,     0,     0,     0,   155,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,   458,   459,   460,   461,   462,
     463,   464,   162,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,   900,     0,     0,     0,     0,  1340,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   458,
     459,   460,   461,   462,   463,   464,   906,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   907,     0,     0,     0,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,   458,   459,
     460,   461,   462,   463,   464,   908,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,   458,   459,   460,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
       0,   211,     0,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   260,   261,   262,     0,     0,     0,
       0,   263,   264,     0,     0,   265,   147,   148,   149,   150,
     151,   152,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   154,   909,     0,     0,     0,     0,     0,   155,   458,
     459,   460,   461,   462,   463,   464,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,   910,     0,   159,     0,     0,   160,   161,   458,   459,
     460,   461,   462,   463,   464,   162,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,     0,  1821,
       0,     0,     0,     0,     0,   911,     0,   458,   459,   460,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,     0,     0,     0,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,   916,     0,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   920,
     480,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,   211,     0,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,     0,     0,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   260,   261,   262,
       0,     0,     0,     0,   263,   264,     0,     0,   265,   147,
     148,   149,   150,   151,   152,     0,     0,     0,     0,     0,
       0,     0,     0,   153,   154,   921,     0,     0,     0,     0,
       0,   155,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,   922,     0,   159,     0,     0,   160,
     161,   458,   459,   460,   461,   462,   463,   464,   162,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,     0,     0,
       0,     0,  1823,   926,     0,   458,   459,   460,   461,   462,
     463,   464,     0,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   928,   480,
     458,   459,   460,   461,   462,   463,   464,     0,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,     0,     0,     0,
       0,     0,   929,     0,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,   460,   461,   462,   463,   464,   930,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,   458,   459,   460,   461,   462,
     463,   464,     0,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,     0,   211,     0,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,     0,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     260,   261,   262,     0,     0,     0,     0,   263,   264,     0,
       0,   265,   147,   148,   149,   150,   151,   152,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   939,     0,
       0,     0,     0,     0,   155,   458,   459,   460,   461,   462,
     463,   464,     0,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,   940,     0,   159,
       0,     0,   160,   161,   458,   459,   460,   461,   462,   463,
     464,   162,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,     0,
       0,   941,     0,   458,   459,   460,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   942,   480,   458,   459,
     460,   461,   462,   463,   464,     0,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,   943,     0,   458,   459,
     460,   461,   462,   463,   464,     0,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   944,   480,   458,   459,   460,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,     0,     0,
       0,     0,     0,     0,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,     0,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
       0,     0,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   260,   261,   262,     0,     0,     0,     0,
     263,   264,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   458,   459,   460,   461,   462,   463,
     464,   945,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,   458,
     459,   460,   461,   462,   463,   464,     0,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,     0,     0,     0,     0,     0,
     946,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,     0,     0,   950,
       0,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   963,   480,   458,   459,   460,   461,
     462,   463,   464,     0,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,   458,   459,   460,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,     0,   458,   459,   460,
     461,   462,   463,   464,   964,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,   458,   459,   460,   461,   462,   463,   464,   965,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,   458,   459,   460,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,   458,   459,   460,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,   458,   459,   460,   461,   462,   463,   464,     0,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,   458,   459,   460,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,   459,   460,   461,   462,   463,   464,
     966,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,   458,   459,
     460,   461,   462,   463,   464,   967,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,     0,     0,
     458,   459,   460,   461,   462,   463,   464,   968,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,     0,     0,     0,     0,
     458,   459,   460,   461,   462,   463,   464,   969,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,   458,   459,   460,   461,   462,
     463,   464,   970,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
     458,   459,   460,   461,   462,   463,   464,   981,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,     0,   458,   459,   460,   461,
     462,   463,   464,   982,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,   458,   459,   460,   461,   462,   463,   464,   983,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,   458,   459,   460,   461,
     462,   463,   464,   987,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,   458,   459,   460,   461,   462,   463,   464,  1010,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,   458,   459,   460,   461,
     462,   463,   464,  1354,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,   458,   459,   460,   461,   462,   463,   464,  1359,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,   458,   459,   460,   461,
     462,   463,   464,  1360,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   458,   459,   460,   461,   462,   463,   464,  1361,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,     0,   480,   458,   459,   460,
     461,   462,   463,   464,  1364,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
       0,   480,     0,     0,     0,     0,     0,     0,     0,   458,
     459,   460,   461,   462,   463,   464,  1365,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,     0,     0,     0,     0,   458,
     459,   460,   461,   462,   463,   464,  1366,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,   458,   459,   460,   461,   462,   463,
     464,  1367,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,   458,
     459,   460,   461,   462,   463,   464,  1368,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,     0,   458,   459,   460,   461,   462,
     463,   464,  1369,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
     458,   459,   460,   461,   462,   463,   464,  1372,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,   458,   459,   460,   461,   462,
     463,   464,  1373,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
     458,   459,   460,   461,   462,   463,   464,  1385,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,   458,   459,   460,   461,   462,
     463,   464,  1386,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
     458,   459,   460,   461,   462,   463,   464,  1399,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,   458,   459,   460,   461,   462,
     463,   464,  1403,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   459,   460,   461,   462,   463,   464,  1404,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,     0,   480,   458,   459,   460,   461,
     462,   463,   464,  1413,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,     0,
     480,     0,     0,     0,     0,     0,     0,     0,   458,   459,
     460,   461,   462,   463,   464,  1481,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,   458,   459,
     460,   461,   462,   463,   464,  1679,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,   458,   459,   460,   461,   462,   463,   464,
    1743,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,   458,   459,
     460,   461,   462,   463,   464,  1800,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,   458,   459,   460,   461,   462,   463,
     464,  1829,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,   458,
     459,   460,   461,   462,   463,   464,  1830,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,   458,   459,   460,   461,   462,   463,
     464,  1831,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,   458,
     459,   460,   461,   462,   463,   464,  1832,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,   458,   459,   460,   461,   462,   463,
     464,  1833,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,   458,
     459,   460,   461,   462,   463,   464,  1842,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,     0,   480,   458,   459,   460,   461,   462,   463,
     464,  1859,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,     0,   480,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,   460,   461,   462,   463,   464,  1860,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,     0,   480,   458,   459,   460,   461,   462,
     463,   464,  1861,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1862,     0,     0,    50,     0,     0,
       0,     0,  1236,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1237,     0,     0,  1863,  1238,     0,     0,  1239,     0,
    1240,     0,     0,  1241,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,     0,     0,     0,     0,  1242,  1865,
       0,     0,     0,     0,     0,  1243,  1244,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,   460,
     461,   462,   463,   464,  1866,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
    1245,   480,     0,     0,     0,     0,     0,     0,    55,     0,
    1888,     0,     0,     0,     1,     0,     0,  1246,     2,     0,
       0,     0,     0,     0,     0,    56,     0,     0,    57,     0,
       0,     0,     0,     0,     0,  1894,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     4,     0,    58,    59,     0,
       0,  1247,     0,     0,     0,     0,     0,     0,     5,     0,
    1898,     0,    60,     0,  1680,  1681,     0,     0,     0,  1682,
       0,  1683,     0,     0,  1248,     0,     0,     0,     0,     6,
       7,     0,  1249,     0,     0,  1903,     0,     0,     0,     0,
       0,     0,   537,   538,     0,   539,     0,   540,   541,     0,
       0,     0,     0,     0,  1684,  1685,     0,  1686,     0,     0,
    2005,     0,     0,   542,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,  2028,     0,  1250,     0,     0,
       0,     0,     0,     0,     0,   543,   544,   545,   546,     0,
       0,     0,     0,     0,   547,     0,     0,     0,     0,     0,
    2041,     0,     0,   548,     0,     0,     0,     0,     0,     0,
       0,    61,     9,     0,    10,     0,     0,     0,     0,     0,
       0,     0,    11,   549,     0,     0,     0,     0,     0,     0,
       0,   550,     0,     0,     0,     0,  2051,     0,     0,     0,
     551,    12,    13,     0,     0,     0,     0,   552,     0,     0,
     553,     0,     0,   554,   555,     0,    14,     0,     0,    15,
       0,  2052,     0,     0,     0,     0,  1687,  1688,    16,     0,
     556,     0,     0,   458,   459,   460,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,     0,   557,
     558,     0,     0,   559,   560,  1658,     0,     0,     0,   561,
       0,   562,     0,     0,     0,     0,   563,   564,     0,     0,
       0,     0,   565,     0,   566,     0,     0,     0,     0,     0,
     567,   457,   568,     0,     0,     0,     0,   569,   458,   459,
     460,   461,   462,   463,   464,     0,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,     0,   480,     0,     0,     0,     0,     0,  1659,     0,
       0,     0,   481,   458,   459,   460,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,     0,   480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   931
};

static const yytype_int16 yycheck[] =
{
      81,  1062,  1014,  1221,  1329,  1312,   281,  1089,   603,  1314,
     272,    34,   275,     3,  1025,  1026,  1077,    34,  1029,   323,
     826,   827,    42,  1084,   147,     5,   832,   887,   834,     4,
    1643,   147,    20,  1110,   500,  1233,  1234,     8,    20,    71,
     884,     4,   886,    48,   129,     3,   129,   186,     3,     4,
       5,     6,     7,     8,  1252,     6,   186,    41,    71,  1437,
     206,   142,   143,   275,  1649,     3,     3,   152,    80,   222,
     100,   100,   153,   154,   155,    71,   339,     3,   159,   126,
     203,  1702,  1703,     3,    90,   105,    44,   203,   234,    83,
     248,   129,  1713,  1714,     3,   127,   258,     3,     3,   223,
     147,    47,    48,   106,     3,     3,   106,     4,     5,     6,
       7,    18,   184,     3,   127,   191,    37,    44,    42,    11,
     150,    67,   234,    15,    18,     3,    53,    34,   517,   253,
     990,    52,  1439,    10,    11,    12,    13,    14,    15,    16,
       5,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   188,    34,     3,     4,
       5,     6,     7,     8,    71,    64,    64,   762,    65,     3,
     160,    77,    77,     6,   250,   188,   248,   180,    77,    77,
     180,   105,   777,   572,   265,    18,     3,     9,    78,   227,
     195,    56,   188,   234,  1388,  1389,     0,   106,    20,   106,
     184,   230,   249,  1397,  1398,   367,   352,   365,   171,   332,
     240,   243,   365,  1834,  1835,  1836,  1837,  1838,  1839,   231,
     483,  1282,   160,   160,  1235,   180,   210,  1848,   367,   180,
     243,  1852,  1293,  1315,   160,  1856,  1294,   367,   209,  1300,
     160,   364,   365,   218,   219,   251,   240,   243,  1325,   365,
    1448,   197,    10,    11,    12,    13,    14,    15,    16,   149,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   356,    34,   171,   258,   360,
     875,  1125,   367,  1127,   367,   223,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,  1675,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,  1926,   395,   396,   397,   783,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   180,  1196,  1644,  1645,   602,
     421,   422,  1927,   366,   364,   426,   427,   180,   332,   366,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   362,   454,   455,   365,   364,   458,   459,   460,
     461,   462,   364,   222,     3,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     789,   790,   614,  1728,   485,   617,   364,   248,   797,   490,
       3,   366,  2033,    18,  1472,  1427,  2037,   314,   315,   316,
     632,     3,    67,    67,   362,   362,  1484,   365,   365,     3,
    1491,     3,  1493,   222,     3,    91,   362,   255,     3,   365,
     130,   248,   362,   248,    16,   365,   248,   248,     3,   248,
     255,   234,     3,   248,   843,   844,   845,  1263,   223,  1265,
    1266,  1519,   234,   357,   358,   359,   360,   300,   365,    57,
     255,   100,  1530,    61,   308,   309,   310,   311,   363,  2100,
    2101,   132,  2103,  2104,   365,    90,   142,   164,   253,    44,
    1815,   368,  1550,    44,  1799,     3,    78,   187,  1692,  1693,
    1694,  1695,  1696,  1697,    36,   767,  1564,     3,   812,   813,
    1704,   117,   118,  1731,  1708,  1573,     3,     3,  1712,   600,
     117,   118,   110,    88,     5,   202,   367,   217,   367,     3,
     149,     3,     3,     5,   179,   179,    68,     3,   189,    20,
      26,    44,   931,   932,   212,   626,   627,     3,     3,   367,
     631,  1017,   197,   197,  1020,  1613,   149,   638,   365,   364,
     772,    93,   367,   365,   365,   170,   365,   149,  1629,   101,
     365,   143,   240,    18,  1635,   149,   365,   222,   222,   184,
     149,   113,   367,    10,    11,    12,    13,    14,    15,    16,
     865,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   149,    34,   366,   367,
     182,   240,     3,   148,  1209,    10,    11,    12,    13,    14,
      15,    16,   157,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1027,    34,
      44,   149,   174,  1654,   147,    90,     3,  1972,    96,    53,
     256,    64,    55,   149,   203,   129,    59,   738,   739,   256,
     741,   228,   149,   195,    77,   746,    10,    11,    12,    13,
      14,    15,    16,   147,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   163,
      34,   139,    93,   149,   149,   364,   365,     3,    96,   147,
     203,  2129,   129,   241,   107,  2030,  1764,   110,     3,  2091,
     148,  1769,   113,  1795,     3,   163,   190,  1778,     3,   251,
     223,    80,   125,   261,   148,   170,  2154,  2155,  1789,     3,
    1791,   366,   367,    92,    44,  1010,   366,   367,  2045,   184,
    1003,   139,   145,    53,    44,  2127,  2128,    75,    76,   147,
     153,   366,   367,    53,   152,  2183,    80,  1975,   234,   840,
       3,    13,    14,     3,    16,   163,  1960,    19,    92,   128,
    1964,  2153,   553,  2098,   366,   367,   367,   136,   559,   991,
     561,    10,    11,    12,    13,    14,    15,    16,  1000,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   128,    34,    31,    32,   889,    34,
     891,     3,   136,   366,   367,     4,     5,   898,   899,     3,
     901,   180,   366,   367,   905,    30,    31,    32,   231,    34,
     233,   912,   913,   914,   915,   364,   917,   918,   919,   366,
     367,   262,  1900,   924,   925,     3,   927,   366,   367,   252,
     366,   367,   933,   934,   935,     3,   180,    44,  1916,  1920,
    1872,   366,   367,     4,     5,   224,   947,   948,   949,   184,
     951,    26,    27,    28,    29,    30,    31,    32,   262,    34,
     365,   962,  2076,  2077,     3,  2079,  2080,   366,   367,  1101,
     971,   972,   973,   974,   975,   976,   977,   978,   365,   980,
     224,   366,   367,   984,     3,   986,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   996,    34,   998,   999,   366,
     367,   364,   366,   367,   366,   367,   366,   367,  1317,   365,
    1011,  1989,   366,   367,   258,   366,   367,  1018,   366,   367,
     367,    10,    11,    12,    13,    14,    15,    16,   262,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     3,    34,   366,   367,   262,   366,
     367,   366,   367,   819,   820,   262,   822,   823,   824,  1060,
     366,   367,   828,   829,   830,  1197,   262,   833,  1200,   262,
    1202,   262,  1204,    10,    11,    12,    13,    14,    15,    16,
     262,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,    34,   366,   367,
     366,   367,   366,   367,   366,   367,   366,   367,   366,   367,
     540,   541,   542,   543,  1115,   545,   227,  1118,   548,   549,
     550,   365,     3,  1124,     8,   555,   556,   557,   366,   367,
     560,     9,  1133,   365,  1135,   366,   367,   366,   367,   364,
    1141,  1142,   366,   367,   366,   367,    34,   366,   367,   365,
      10,    11,    12,    13,    14,    15,    16,   365,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   365,    34,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   365,    34,
      10,    11,    12,    13,    14,    15,    16,  1198,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   365,    34,   366,   367,   366,   367,   366,
     367,    50,    51,  1224,   366,   367,   366,   367,  1229,    10,
      11,    12,    13,    14,    15,    16,   365,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   365,    34,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   365,    34,
     366,   367,   365,    10,    11,    12,    13,    14,    15,    16,
      69,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   365,    34,   365,    10,
      11,    12,    13,    14,    15,    16,  1307,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   365,    34,   365,    88,    10,    11,    12,    13,
      14,    15,    16,   365,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,  1350,
      34,    64,  1353,   366,   367,   366,   367,   146,    71,   366,
     367,  1362,  1363,   366,   367,   366,   367,   156,   365,   132,
     366,   367,   365,  1374,   365,   164,    44,   366,   367,   366,
     367,   365,  1383,  1384,   365,   148,   366,   367,   177,   366,
     367,   366,   367,   366,   367,   366,   367,    50,    51,  1400,
    1401,  1402,   364,   365,  1405,  1406,   367,  1408,   365,  1410,
     365,  1412,   365,   202,   127,   366,   367,   365,   131,   364,
     365,    46,   366,   367,  1425,  1426,   189,   366,   367,   366,
     367,   220,   365,  1434,  1435,   148,   256,   366,   367,   366,
     367,   366,   367,   206,   157,   365,   209,   779,   780,  1007,
    1008,  1452,  1431,  1432,   365,  1456,   365,   365,    46,   365,
     365,   365,   365,   365,   365,  1466,   365,   365,   365,   365,
     365,   234,   365,   365,   365,   188,   365,    64,   365,  1480,
     365,    64,   365,   365,   168,   365,   365,    64,   365,   365,
     365,   365,   365,   365,   365,   365,     3,     4,     5,     6,
       7,     8,   365,    10,   365,    12,   366,   367,   365,    16,
      17,    18,   365,    20,   365,   365,   365,    24,    25,    26,
      27,    28,   365,   365,   365,   365,   365,   365,   365,   365,
     243,    38,   365,   365,   365,   365,    43,    44,   365,   365,
      47,   365,   365,   365,   365,    52,    53,    54,    55,    56,
     365,   365,    59,   365,    61,    62,    63,   365,   365,    66,
      67,   365,    69,    70,    71,   365,   365,   365,    75,   365,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    89,    34,   258,   366,   367,    94,   227,   352,
       3,     3,    99,   100,   101,     3,     3,   262,   184,   106,
     107,     3,   109,   110,   111,   112,   184,   262,   115,   184,
     117,   118,   119,   120,     3,   122,     3,   124,   125,     3,
     127,    26,   129,   130,     3,   132,   133,   134,   135,   366,
     367,     3,     3,     3,   141,     3,   143,     3,   145,   146,
       3,   148,   149,   150,   151,   152,   153,     3,   155,   156,
     157,   158,   159,     3,    34,   366,   367,   164,     3,   166,
       3,   168,   368,  1664,  1665,   366,   366,   366,   366,  1670,
     177,  1672,   179,   180,   181,   182,   183,   184,   185,   366,
     366,   188,   189,   367,   366,   366,   366,   194,   366,   196,
     197,   198,     5,   200,   366,   202,   366,   204,   205,   206,
     207,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   366,    34,   221,   222,   223,   366,   365,     3,
       3,     3,     3,   366,   231,     3,   233,   234,   235,   156,
     183,     3,     3,   240,     3,   242,   243,   244,     3,     3,
       3,   248,     3,     3,     3,   252,   253,     3,   255,   256,
     257,   258,     3,   227,     3,   262,     3,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       5,    34,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     3,    34,   360,  1796,   303,   304,   305,   306,
     307,    10,    11,    12,    13,    14,    15,    16,     5,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1825,    34,     5,   365,   365,   365,
     365,    57,   365,   365,   365,     3,     3,     3,     3,   366,
    1841,   367,     3,     3,   184,   366,   184,     3,   184,     3,
     185,   262,     3,     3,   366,   366,   363,   364,   365,   366,
     367,   223,   369,  1864,   366,   331,   331,   331,  1869,   366,
     331,     3,     4,     5,     6,     7,     8,  1878,    10,   331,
      12,   223,   365,   365,    16,    17,    18,   365,    20,   365,
    1891,  1892,    24,    25,    26,    27,    28,   129,   367,   157,
     157,     3,   157,    34,   156,   184,    38,     3,   156,   227,
     227,    43,    44,     5,     5,    47,     5,     4,   180,     5,
      52,    53,    54,    55,    56,     5,   368,    59,   365,    61,
      62,    63,   365,   200,    66,    67,   250,    69,    70,    71,
     184,     3,     3,    75,     3,     3,   184,    87,     3,     3,
      56,   166,    20,   186,    84,   365,   154,    89,     4,   368,
     366,   365,    94,     5,   331,   365,   331,    99,   100,   101,
     331,   331,   331,   331,   106,   107,   331,   109,   110,   111,
     112,     5,   365,   115,   331,   117,   118,   119,   120,   365,
     122,   365,   124,   125,   331,   127,   223,   129,   130,   134,
     132,   133,   134,   135,     3,   133,     3,     3,   365,   141,
     157,   143,   366,   145,   146,  2016,   148,   149,   150,   151,
     152,   153,     3,   155,   156,   157,   158,   159,   157,     3,
      71,   365,   164,   366,   166,   366,   168,   366,   366,   365,
     365,   365,   365,   365,   250,   177,     3,   179,   180,   181,
     182,   183,   184,   185,   133,    53,   188,   189,   250,   184,
       3,     3,   194,     3,   196,   197,   198,   365,   200,   157,
     202,   365,   204,   205,   206,   207,   365,   365,     3,   157,
       4,   367,     4,     6,     4,   365,   199,   157,     3,   221,
     222,   223,     3,   366,  2095,   365,    56,   141,   366,   231,
     366,   233,   234,   235,   156,     3,    20,     3,   240,   180,
     242,   243,   244,   366,   367,   365,   248,     3,    45,   365,
     252,   253,   365,   255,   256,   257,   258,     3,   365,   365,
     262,    10,    11,    12,    13,    14,    15,    16,   366,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   366,    34,   366,   365,   367,   366,
     365,   365,   365,     4,   366,   365,   365,   157,   157,   365,
     365,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,   365,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   200,
      34,     3,     4,     5,     6,     7,     8,   365,    10,     5,
      12,   222,   365,   365,    16,    17,    18,   365,    20,   365,
       4,     4,    24,    25,    26,    27,    28,   365,     3,     3,
       3,   363,   364,   365,   366,   367,    38,   369,     3,     3,
     250,    43,    44,   365,   365,    47,   111,   365,   250,     3,
      52,    53,    54,    55,    56,   133,   365,    59,   365,    61,
      62,    63,   365,     3,    66,    67,   365,    69,    70,    71,
     367,   240,    20,    75,   184,     4,   332,     3,   331,     3,
     331,   366,   366,   366,   366,   366,     3,    89,   365,     3,
       5,    44,    94,     5,    53,     4,   365,    99,   100,   101,
     365,   365,    53,   366,   106,   107,   366,   109,   110,   111,
     112,   204,   250,   115,   253,   117,   118,   119,   120,   366,
     122,   366,   124,   125,   367,   127,   365,   129,   130,   365,
     132,   133,   134,   135,   365,   365,   157,   157,   365,   141,
       3,   143,   367,   145,   146,   365,   148,   149,   150,   151,
     152,   153,   366,   155,   156,   157,   158,   159,    81,    56,
     185,   365,   164,   366,   166,   365,   168,     3,    20,    18,
       3,   366,   366,   366,   365,   177,   157,   179,   180,   181,
     182,   183,   184,   185,   366,   365,   188,   189,   366,   366,
       3,    53,   194,   365,   196,   197,   198,   129,   200,   365,
     202,   235,   204,   205,   206,   207,   365,     3,     3,    56,
      56,     3,     3,   365,     3,    56,   366,   366,   366,   221,
     222,   223,   331,   331,   331,   331,   133,     3,   251,   231,
     366,   233,   234,   235,   366,   201,   366,   194,   240,     3,
     242,   243,   244,     3,     5,    53,   248,     5,   366,    70,
     252,   253,   124,   255,   256,   257,   258,   149,   159,   257,
     262,    10,    11,    12,    13,    14,    15,    16,   365,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   194,    34,     5,   191,   367,    20,
     367,     3,    94,   366,   366,   366,   366,   366,   366,   365,
     367,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   366,
      34,     3,     4,     5,     6,     7,     8,   365,    10,   366,
      12,   365,   152,   365,    16,    17,    18,   366,    20,     3,
     366,   366,    24,    25,    26,    27,    28,     5,     3,     3,
       3,   363,   364,   365,   366,   367,    38,   369,   365,     3,
     365,    43,    44,   365,     3,    47,   367,   365,   213,   213,
      52,    53,    54,    55,    56,   194,   366,    59,     3,    61,
      62,    63,     3,     3,    66,    67,    20,    69,    70,    71,
       3,     3,   167,    75,   366,   366,     3,   367,   167,   227,
       3,     3,   211,     3,   366,   222,   366,    89,     5,   366,
     365,   365,    94,   365,     3,   366,   210,    99,   100,   101,
     366,   366,   366,     5,   106,   107,   366,   109,   110,   111,
     112,     3,   144,   115,   365,   117,   118,   119,   120,    90,
     122,   161,   124,   125,   232,   127,   253,   129,   130,   184,
     132,   133,   134,   135,   184,   178,     5,   178,     5,   141,
      88,   143,  1135,   145,   146,   904,   148,   149,   150,   151,
     152,   153,   361,   155,   156,   157,   158,   159,   999,  1428,
    1732,  1663,   164,   494,   166,   485,   168,  1005,  1228,   113,
     604,    76,  2117,  1825,   885,   177,   350,   179,   180,   181,
     182,   183,   184,   185,   616,  1327,   188,   189,  1795,  2159,
    1304,  1316,   194,   831,   196,   197,   198,   146,   200,  1470,
     202,   235,   204,   205,   206,   207,   847,   331,    -1,    -1,
     534,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,   129,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    43,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    43,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    38,   369,    -1,    -1,
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
      -1,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,   194,    -1,   196,   197,   198,    -1,   200,    -1,
     202,    -1,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,   221,
     222,   223,    -1,    -1,    -1,    -1,    17,    18,    -1,   231,
      -1,   233,   234,   235,    25,    26,    -1,    -1,   240,    -1,
     242,   243,   244,    -1,    -1,    -1,   248,    38,    -1,    -1,
     252,   253,    -1,   255,   256,   257,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,    -1,    -1,    99,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   367,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,   365,   366,   367,    -1,   369,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   180,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,   220,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   245,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,    -1,
     301,    -1,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
      -1,    -1,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,    -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
     361,   362,    -1,    -1,   365,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    74,    10,    11,    12,
      13,    14,    15,    16,    82,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   367,
      -1,    -1,   170,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   180,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   367,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,    -1,   301,    -1,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,    -1,    -1,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    -1,   353,   354,   355,   356,    -1,
      -1,    -1,    -1,   361,   362,    -1,    -1,   365,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,   367,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      65,    34,    -1,    -1,   367,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   367,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   367,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,   367,    -1,    -1,   170,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   180,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   214,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    -1,   301,    -1,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,    -1,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,    -1,   353,   354,
     355,   356,    -1,    -1,    -1,    -1,   361,   362,    -1,    -1,
     365,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   367,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,   367,
      82,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   367,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   367,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   367,    -1,    -1,   170,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   180,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,   367,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,    -1,   301,
      -1,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,    -1,
      -1,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,   361,
     362,    -1,    -1,   365,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,   367,    -1,    25,    26,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    74,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   367,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   367,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,   170,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   180,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   367,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,    -1,   301,    -1,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,    -1,    -1,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,    -1,   353,   354,   355,   356,    -1,    -1,
      -1,    -1,   361,   362,    -1,    -1,   365,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,   367,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    18,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    82,    -1,    -1,    -1,
      71,    72,    -1,   367,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   367,    34,
      -1,    -1,    -1,    -1,    -1,   106,    10,    11,    12,    13,
      14,    15,    16,   129,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   367,    -1,    -1,   170,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,    -1,    -1,    -1,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,    -1,   301,    -1,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   133,    -1,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    -1,   353,   354,   355,
     356,    -1,    -1,    -1,    -1,   361,   362,    -1,    -1,   365,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,   367,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,   367,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   180,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,   366,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,    -1,   301,    -1,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,    -1,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,    -1,
     353,   354,   355,   356,    -1,    -1,    -1,    -1,   361,   362,
      -1,    -1,   365,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   366,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    10,    11,    12,    13,    14,
      15,    16,    82,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,   366,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   366,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
      -1,   301,    -1,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,    -1,    -1,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    -1,   353,   354,   355,   356,    -1,    -1,    -1,
      -1,   361,   362,    -1,    -1,   365,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   366,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,   366,    -1,    70,    -1,    -1,    73,    74,    10,    11,
      12,    13,    14,    15,    16,    82,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   180,   366,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   366,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,    -1,   301,    -1,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,    -1,    -1,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,    -1,   353,   354,   355,   356,
      -1,    -1,    -1,    -1,   361,   362,    -1,    -1,   365,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,   366,    -1,    -1,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,   366,    -1,    70,    -1,    -1,    73,
      74,    10,    11,    12,    13,    14,    15,    16,    82,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,   106,   366,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   366,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,   366,    -1,    -1,    -1,   180,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,    -1,   301,    -1,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,    -1,    -1,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,    -1,   353,
     354,   355,   356,    -1,    -1,    -1,    -1,   361,   362,    -1,
      -1,   365,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   366,    -1,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,   366,    -1,    70,
      -1,    -1,    73,    74,    10,    11,    12,    13,    14,    15,
      16,    82,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   366,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   366,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,   366,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   366,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,    -1,
     301,    -1,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
      -1,    -1,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,    -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
     361,   362,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   366,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
     366,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,   366,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   366,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    10,    11,    12,
      13,    14,    15,    16,   366,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   366,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     366,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   366,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    10,    11,    12,    13,
      14,    15,    16,   366,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   366,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   366,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   366,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   366,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   366,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   366,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   366,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   366,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   366,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   366,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   366,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   366,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   366,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     366,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   366,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    10,    11,    12,    13,    14,    15,
      16,   366,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   366,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   366,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   366,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   366,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   366,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   366,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    18,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,   366,    41,    -1,    -1,    44,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    64,   366,
      -1,    -1,    -1,    -1,    -1,    71,    72,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   366,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     106,    34,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,
     366,    -1,    -1,    -1,    35,    -1,    -1,   123,    39,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,   228,   229,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
     366,    -1,   243,    -1,    97,    98,    -1,    -1,    -1,   102,
      -1,   104,    -1,    -1,   180,    -1,    -1,    -1,    -1,   100,
     101,    -1,   188,    -1,    -1,   366,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,    -1,    -1,
     366,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,   366,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
     366,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,   193,    -1,   195,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,
     162,   222,   223,    -1,    -1,    -1,    -1,   169,    -1,    -1,
     172,    -1,    -1,   175,   176,    -1,   237,    -1,    -1,   240,
      -1,   366,    -1,    -1,    -1,    -1,   259,   260,   249,    -1,
     192,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,   221,
     222,    -1,    -1,   225,   226,    42,    -1,    -1,    -1,   231,
      -1,   233,    -1,    -1,    -1,    -1,   238,   239,    -1,    -1,
      -1,    -1,   244,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,     3,   254,    -1,    -1,    -1,    -1,   259,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    61,    66,    79,   100,   101,   150,   193,
     195,   203,   222,   223,   237,   240,   249,   371,   410,   411,
     450,   454,   455,   458,   459,   462,   463,   464,   466,   482,
     483,   492,   495,   497,   498,   499,   521,   524,   531,   532,
     535,   538,   539,   542,   206,   234,   352,   234,     3,    10,
      88,    95,   131,   132,   148,   189,   206,   209,   228,   229,
     243,   352,   503,     3,   451,    88,   132,   148,   189,   206,
     209,   234,   352,   474,   234,   234,   474,     8,   209,   522,
     523,   429,   234,   474,   493,     3,    88,     0,   363,   461,
       3,     3,     3,     3,   365,   203,   149,   496,     3,   148,
       3,     3,    78,   149,     3,     3,   496,   228,   148,   496,
     234,   484,     3,   129,   147,   163,   190,   452,     3,   149,
       3,   149,     3,     3,   149,     3,   149,     3,   149,     3,
     149,     3,   149,    96,   139,   147,   152,   163,   475,     3,
       3,   475,     9,    20,     3,   106,   367,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    38,    65,    70,
      73,    74,    82,    99,   103,   139,   170,   180,   208,   215,
     216,   220,   245,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   301,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   353,
     354,   355,   356,   361,   362,   365,   372,   430,   431,     3,
     147,   163,     3,   160,   362,   365,   433,   434,   435,   436,
     439,   449,     3,   371,    47,    48,    67,   197,    93,   113,
      36,    68,    93,   101,   113,   174,   195,   251,    48,   195,
     540,   364,     3,     4,     5,     6,     7,     8,   180,   366,
     533,   534,   132,   189,   262,     3,    44,     3,   365,   184,
       3,   149,   262,   365,    37,    52,   536,     3,     3,    78,
     149,     3,   496,   365,   485,   364,   453,     3,   452,   129,
     367,   262,   262,   262,   262,   262,   262,   262,     3,   227,
       3,   372,   372,   523,   364,   365,     9,   372,   372,   372,
     256,   372,   409,   364,   365,    34,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   372,     3,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      34,    44,   432,   129,   152,   367,   367,   364,   432,   365,
     365,   411,   433,   222,   367,    69,   146,   164,   177,   202,
     220,   440,   442,    44,   438,   438,    46,    46,    64,    77,
       3,    77,    64,     3,    64,    77,    64,     3,    77,     3,
      64,    77,    64,   258,   227,    18,   171,   357,   358,   359,
     360,   541,     3,   366,   367,     3,     3,    54,    55,    57,
      59,    60,    75,   107,   108,   109,   110,   116,   125,   145,
     153,   162,   169,   172,   175,   176,   192,   221,   222,   225,
     226,   231,   233,   238,   239,   244,   246,   252,   254,   259,
     517,   184,     3,    16,   143,   182,   525,   526,   527,     3,
     184,   262,     3,   525,   100,   150,   240,   537,   184,     3,
     149,   262,   540,     3,     3,   486,   129,   227,   487,    26,
     255,   412,   248,   433,     3,     3,     3,     3,     3,     3,
       3,     3,   222,   365,   476,     3,   222,   476,     3,   372,
     377,   381,   372,   372,   409,   117,   118,   256,     3,     3,
     368,   379,   386,   372,    58,   165,   236,   372,   407,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   366,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   366,   372,   372,   372,   366,   372,
     372,   372,   372,   372,   372,    26,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   366,   366,   366,
     366,   366,   372,   372,   366,   366,   366,   372,   372,     5,
     366,   366,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   366,   372,   372,   366,   372,   372,
     372,   372,   372,     6,    18,   180,   300,   365,    13,    14,
      16,    19,   372,    38,    40,   214,   365,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,     3,   433,     3,   431,     3,   460,     3,   126,   147,
     249,   446,   437,   372,   366,   366,     3,   494,   434,   164,
     202,   443,   435,   156,   183,   441,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   517,     3,   227,     3,
       3,     3,     5,     3,   360,     5,     5,   258,     5,    56,
       5,   534,   365,   365,   365,   513,   513,   513,   513,   513,
     513,   365,   513,   513,   513,    57,   514,   514,   513,   513,
     513,   365,   514,   513,   514,   365,   365,    18,    34,    71,
     106,     3,   517,     3,     3,     3,   366,   367,   248,   365,
       3,     3,   184,   366,   184,     3,   184,   262,     3,   147,
     203,   332,   364,   365,   519,   520,   366,   367,     4,   218,
     219,   488,   372,   185,   422,   433,   412,   453,     3,   481,
       3,   477,   253,   411,   481,   253,   411,   367,   366,   235,
     117,   118,   372,   372,   366,   372,   378,   411,   129,   367,
     366,   129,   372,   367,   367,   367,   366,   366,   366,   366,
     366,   366,   367,   367,   367,   367,   366,   367,   367,   367,
     366,   366,   366,   366,   367,   367,   366,   367,   366,   366,
     366,    44,   367,   367,   367,   367,   302,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   367,   367,   367,
     366,   367,   331,   331,   331,   366,   367,   366,   367,   366,
     331,   331,   367,   366,   366,   366,   366,   366,   366,   366,
     366,   367,   367,   367,   367,   367,   367,   367,   367,   366,
     367,   366,   366,   366,   367,   366,   367,   366,     6,   180,
     382,   384,   372,   372,   365,   372,    43,   365,   365,   365,
     373,   368,   412,   129,   367,   432,   157,   157,   157,   411,
     366,    20,   364,   367,   412,   441,   441,   156,   184,   435,
     156,    71,   127,   188,   243,   517,   517,     3,   512,   517,
       3,   227,   227,     5,     5,   525,   525,     5,   515,   516,
     515,   515,     4,   518,   515,   515,   515,   516,   516,   515,
     515,   515,   518,   516,   515,   516,     5,     5,   180,   368,
     365,   372,   365,   517,   517,   517,   200,   527,   250,     3,
     308,   309,   310,   311,   456,   457,   248,   365,   184,     3,
      44,    53,     3,   248,   365,     3,     3,   184,    87,     3,
      64,    71,   127,   131,   148,   157,   188,   243,   504,   505,
     511,   438,     3,    80,    92,   128,   136,   180,   224,   258,
     365,   489,   490,   491,    56,   166,   425,   412,    20,   186,
     367,   467,   366,   367,   365,   478,   467,   478,   467,   377,
     372,   372,   117,   235,    84,   367,   368,   366,   372,   372,
     372,   129,   154,   408,   408,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   517,   517,   372,   372,
     372,     4,   331,   331,   331,   331,   331,   331,   372,   372,
     372,   372,   365,   365,   365,   331,     5,   331,     5,   331,
     365,   365,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   377,   411,   383,   385,    43,   372,
     376,   372,   374,   380,   375,   380,   411,   134,   413,   433,
       3,   446,   133,   447,   447,   447,   366,   438,   372,     3,
       3,   422,   435,   372,   184,   248,   444,   445,   435,   365,
     157,   157,   365,   512,   512,   517,    18,    37,    41,    44,
      46,    49,    64,    71,    72,   106,   123,   157,   180,   188,
     243,   465,   512,     3,     3,   366,   366,   366,   367,   241,
     261,    75,    76,   366,   367,   366,   366,   366,    71,   372,
     456,    55,    59,   107,   110,   125,   145,   153,   231,   233,
     252,   528,   365,   365,   365,   365,   365,   366,   367,   250,
     456,     3,   248,   365,    53,   529,   133,   250,   456,   248,
     365,   184,     3,     3,   365,   519,     3,   365,   157,   148,
     157,   365,   365,   157,   365,   366,   367,     3,   411,     4,
      80,   231,     6,     4,     4,   365,   490,   367,     3,     5,
     423,   424,   372,   199,   543,   106,   372,   157,     3,     3,
     106,   372,   480,   367,   467,   467,   117,   372,   365,   378,
     133,   366,   366,   367,   366,   372,   372,   366,   366,   366,
     366,   366,   367,   367,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   367,   366,   365,   365,   365,   365,
     365,   365,   366,   367,   367,   366,   366,   387,   388,   389,
     365,   366,   367,   365,   366,   367,   365,   405,   406,   366,
     367,   367,   367,   366,   366,   367,   367,   366,   367,   366,
     367,   366,   367,   366,   366,   366,   377,   411,   372,   411,
     411,   366,   411,   366,   366,    56,   141,   417,   412,   156,
     365,   365,   365,     3,    20,    20,   364,   425,   372,   365,
     445,   372,   365,   365,     3,   510,   465,   465,   512,   180,
       3,   365,   365,   365,    45,     3,   365,     4,     4,     5,
       6,     7,    65,   314,   315,   316,   365,   157,   157,   465,
     200,    44,    53,     5,   222,     4,   516,     4,   516,   516,
     365,   366,   366,    44,    53,   456,     3,     3,     3,     3,
       3,   365,   366,   365,   250,   456,   529,     3,     4,     5,
       6,     7,     8,    10,    12,    16,    17,    18,    20,    24,
      25,    26,    27,    28,    38,    43,    44,    47,    52,    53,
      54,    55,    56,    59,    61,    62,    63,    66,    67,    69,
      70,    71,    75,    89,    94,    99,   100,   101,   106,   107,
     109,   110,   111,   112,   115,   117,   118,   119,   120,   122,
     124,   125,   127,   129,   130,   132,   133,   134,   135,   141,
     143,   145,   146,   148,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   159,   164,   166,   168,   177,   179,   180,
     181,   182,   183,   184,   185,   188,   189,   194,   196,   197,
     198,   200,   202,   204,   205,   206,   207,   221,   222,   223,
     231,   233,   234,   235,   240,   242,   243,   244,   248,   252,
     253,   255,   256,   257,   258,   262,   303,   304,   305,   306,
     307,   363,   364,   365,   366,   367,   369,   530,   111,   365,
     366,   250,   456,     3,   248,   365,   133,   504,    71,   127,
     188,   243,   372,   365,   365,   365,     3,   428,   428,   365,
     510,   500,   519,   505,   517,   490,   366,   491,    42,   105,
     364,   415,   415,   367,   168,   367,     3,    26,   544,   240,
      20,   366,   367,   479,   184,   469,     4,   372,   372,   366,
      97,    98,   102,   104,   137,   138,   140,   259,   260,   372,
     372,   372,   391,   392,   390,   393,   394,   395,   372,   372,
     332,   418,   418,   418,   396,   331,     4,     5,   400,   331,
       4,     5,   404,   418,   418,   372,   372,   372,   372,   372,
     372,   372,   372,   366,   366,   366,   366,   366,   372,   414,
     372,   422,   413,     3,   448,   448,   448,   365,   372,   372,
       3,   543,   428,   366,     3,   507,     3,   506,   366,   367,
     465,     5,   372,     5,    44,    71,   188,   243,   372,   365,
     365,   365,   372,   528,    53,   529,   366,     4,   372,    53,
     529,   366,   366,   366,   366,   367,   456,   456,   365,   366,
     117,   529,   529,   529,   529,   529,   529,   204,   456,   365,
     366,   365,   250,   456,   253,   366,   365,   157,   157,   365,
     366,   507,   428,   428,   366,   367,   366,   506,   366,    41,
     184,   210,   332,   512,   366,     3,   424,   372,   372,   367,
     468,   106,   372,   106,   372,   365,    81,   543,   366,   366,
     366,   366,   366,   366,   418,   418,   418,   418,   418,   418,
     366,   367,   366,    56,   185,   420,   420,   420,   418,   365,
     366,   366,   418,   365,   366,   366,   418,   420,   420,   366,
     366,   366,   366,   366,   367,   366,   366,   415,   258,   367,
     416,   425,   417,   366,   367,   366,   366,     3,    20,   366,
      18,   366,   367,   366,   367,     3,   366,   367,   366,   366,
     367,   365,   365,   157,   366,   366,   366,   366,   366,    44,
      53,   529,   117,   366,   529,   117,     3,   366,   366,   456,
     117,   117,   117,   117,   117,   117,    53,   366,   456,   456,
     365,   366,   129,   500,   519,   372,   365,   365,   510,   366,
     366,   366,     3,   366,     5,    20,     3,    56,    56,   415,
       3,     3,   473,   480,   365,   470,   420,   420,   420,   420,
     420,   420,   372,     3,   419,    56,   366,   366,   366,   420,
     397,   331,   331,   420,   401,   331,   331,   420,   366,   366,
     372,   201,   372,   133,   426,   422,     3,   366,   372,   251,
     194,     3,     3,     5,    50,    51,     5,   372,   372,    53,
     529,   117,   117,   366,   366,    70,   124,   149,   159,   257,
     529,   366,   366,   456,   365,   366,   507,   506,   366,   194,
       5,   100,   230,   191,   250,   191,    20,   367,   366,     3,
      94,   471,   366,   366,   366,   366,   366,   366,   366,   367,
       3,   421,   366,   418,   365,   365,   366,   418,   365,   365,
     366,   366,   415,   212,   240,   152,   427,   425,     3,   366,
     366,   366,   366,   529,   117,   117,   366,     5,   366,   366,
       3,     3,     3,   365,   365,   365,   372,     3,   366,   367,
      83,   240,     3,   415,   367,   420,   398,   399,   420,   402,
     403,   213,   213,   428,   365,    50,    51,   117,   366,   194,
     364,   365,     3,     3,     3,    20,     3,   472,     3,   366,
     418,   418,   366,   418,   418,   167,   167,     3,   508,   227,
       3,     3,   508,   366,   366,   366,   372,   222,   415,   420,
     420,   420,   420,   366,   367,   365,   364,   365,   365,   366,
     365,   211,   473,   366,   366,   366,   366,   509,     3,     5,
       3,   508,   508,   509,   210,   501,   502,     5,    18,    90,
     170,   184,   366,   365,   366,   366,    18,     3,   366,   367,
      90,   251,   144,   130,   187,   217,   100,   240,   508,   509,
     509,   253,   502,    91,   142,    67,   179,   197,   222,    67,
     179,   197,   222,   366,   161,   106,   180,   106,   180,   509,
     232,     4,   171,   184,   184,   178,   178,     5,     5
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
#line 457 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 463 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 464 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 466 "parser/evoparser.y"
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
#line 479 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 481 "parser/evoparser.y"
    {
        char *sv = (yyvsp[(1) - (1)].strval);
        int slen = (int)strlen(sv);
        emit("STRING %s", sv);
        /* Strip surrounding quotes before insertion */
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            char stripped[1024];
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
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
#line 499 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 507 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 515 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 521 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 528 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 529 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 530 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 531 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 532 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 533 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 534 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 535 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 536 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 537 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 538 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 539 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 540 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 541 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 542 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 543 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 544 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 545 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 546 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 548 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 553 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 554 "parser/evoparser.y"
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
#line 562 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 563 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 564 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 565 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 566 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 567 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 572 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 574 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 577 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 578 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 579 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 580 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 581 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 584 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 585 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 588 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 52:
#line 589 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 53:
#line 595 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.arrListCount < MAX_IN_LIST) g_expr.arrListExprs[g_expr.arrListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 54:
#line 597 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.arrListCount < MAX_IN_LIST) {
          int _i; for (_i = g_expr.arrListCount; _i > 0; _i--) g_expr.arrListExprs[_i] = g_expr.arrListExprs[_i - 1];
          g_expr.arrListExprs[0] = (yyvsp[(1) - (3)].exprval); g_expr.arrListCount++;
      } ;}
    break;

  case 55:
#line 610 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 611 "parser/evoparser.y"
    {
        g_in_array_literal--;
        char _arrbuf[4096];
        int _p = 0;
        if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '{';
        for (int _i = 0; _i < g_expr.arrListCount; _i++) {
            if (_i > 0 && _p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = ',';
            ExprNode *_en = g_expr.arrListExprs[_i];
            if (!_en) continue;
            if (_en->type == EXPR_LITERAL_INT)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "%d", _en->val.intval);
            else if (_en->type == EXPR_LITERAL_FLOAT)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "%g", _en->val.floatval);
            else if (_en->type == EXPR_LITERAL_BOOL)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "%s",
                               _en->val.intval ? "true" : "false");
            else if (_en->type == EXPR_LITERAL_NULL)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "NULL");
            else if (_en->type == EXPR_LITERAL_STR) {
                if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '"';
                for (const char *_s = _en->val.strval; *_s && _p < (int)sizeof(_arrbuf) - 2; _s++) {
                    if (*_s == '"' || *_s == '\\') _arrbuf[_p++] = '\\';
                    _arrbuf[_p++] = *_s;
                }
                if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '"';
            } else {
                /* Non-literal element (column ref, func call) — defer to
                 * runtime evaluation via expr_make_array_literal. Emit
                 * display placeholder in the INSERT field text. */
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "NULL");
            }
        }
        if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '}';
        _arrbuf[_p] = '\0';
        GetInsertions(_arrbuf);
        emit("ARRLIT %d", (yyvsp[(4) - (5)].intval));
        (yyval.exprval) = expr_make_array_literal(g_expr.arrListExprs, g_expr.arrListCount);
    ;}
    break;

  case 57:
#line 650 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 659 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 665 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 670 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 672 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 674 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 677 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 65:
#line 681 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 66:
#line 681 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 67:
#line 682 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 682 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 683 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 70:
#line 684 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 71:
#line 691 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 692 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 699 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 700 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 75:
#line 710 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 76:
#line 714 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 77:
#line 715 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 78:
#line 716 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 79:
#line 717 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 718 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 719 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 720 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 83:
#line 721 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 84:
#line 725 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 85:
#line 726 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 86:
#line 727 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 87:
#line 728 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 88:
#line 729 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 89:
#line 730 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 90:
#line 732 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 91:
#line 733 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 92:
#line 734 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 93:
#line 735 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 94:
#line 736 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 95:
#line 737 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 96:
#line 738 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 739 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 98:
#line 740 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 741 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 100:
#line 742 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 743 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 102:
#line 745 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 746 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 104:
#line 747 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 105:
#line 748 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 749 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 107:
#line 750 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 751 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 109:
#line 752 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 753 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 111:
#line 754 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 112:
#line 755 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 113:
#line 756 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 114:
#line 757 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 115:
#line 758 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 116:
#line 759 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 117:
#line 760 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 762 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 119:
#line 763 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 120:
#line 764 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 121:
#line 765 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 122:
#line 766 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 123:
#line 767 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 124:
#line 770 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 125:
#line 771 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 126:
#line 772 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 127:
#line 773 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 128:
#line 774 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 129:
#line 775 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 130:
#line 776 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 131:
#line 777 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 132:
#line 778 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 133:
#line 779 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 780 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 135:
#line 781 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 136:
#line 782 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 783 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 138:
#line 784 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 139:
#line 785 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 140:
#line 786 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 141:
#line 787 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 142:
#line 788 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 143:
#line 789 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 144:
#line 790 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 145:
#line 791 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 146:
#line 792 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 147:
#line 793 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 148:
#line 794 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 149:
#line 795 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 150:
#line 796 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 151:
#line 797 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 152:
#line 798 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 153:
#line 799 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 154:
#line 800 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 155:
#line 801 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 156:
#line 802 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 157:
#line 803 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 158:
#line 805 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 159:
#line 806 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 160:
#line 807 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 161:
#line 808 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 162:
#line 809 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 163:
#line 810 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 164:
#line 811 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 165:
#line 812 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 166:
#line 814 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 167:
#line 815 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 168:
#line 816 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 169:
#line 817 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 170:
#line 818 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 171:
#line 819 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 172:
#line 820 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 173:
#line 821 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 174:
#line 822 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 175:
#line 823 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 176:
#line 824 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 177:
#line 825 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 178:
#line 826 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 179:
#line 827 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 180:
#line 828 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 181:
#line 829 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 182:
#line 830 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 183:
#line 831 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 184:
#line 832 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 185:
#line 833 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 186:
#line 834 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 835 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 188:
#line 837 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 189:
#line 838 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 190:
#line 839 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 191:
#line 840 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 192:
#line 841 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 193:
#line 843 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 194:
#line 844 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 195:
#line 846 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 196:
#line 847 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 197:
#line 848 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 198:
#line 850 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 199:
#line 851 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 200:
#line 852 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 201:
#line 853 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 202:
#line 860 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 203:
#line 867 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 204:
#line 874 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 205:
#line 878 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 206:
#line 882 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 886 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 890 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 209:
#line 894 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 210:
#line 900 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 211:
#line 901 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 212:
#line 902 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 213:
#line 906 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 214:
#line 912 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 215:
#line 918 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 216:
#line 919 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 217:
#line 920 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 218:
#line 921 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 922 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 923 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 221:
#line 924 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 222:
#line 925 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 223:
#line 926 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 930 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 225:
#line 932 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 226:
#line 934 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 936 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 228:
#line 940 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 229:
#line 948 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 230:
#line 958 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 231:
#line 959 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 232:
#line 962 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 233:
#line 963 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 234:
#line 967 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 235:
#line 975 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 236:
#line 983 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 994 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 238:
#line 1003 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 239:
#line 1008 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 240:
#line 1021 "parser/evoparser.y"
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

  case 242:
#line 1034 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 244:
#line 1036 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 245:
#line 1039 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 246:
#line 1046 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 247:
#line 1054 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 248:
#line 1055 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 249:
#line 1056 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 250:
#line 1059 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1064 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 256:
#line 1073 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 257:
#line 1075 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 260:
#line 1083 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 261:
#line 1085 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 266:
#line 1097 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 267:
#line 1103 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 268:
#line 1110 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 269:
#line 1118 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 270:
#line 1119 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 271:
#line 1120 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 272:
#line 1121 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 273:
#line 1124 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 274:
#line 1125 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 275:
#line 1126 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 276:
#line 1127 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 277:
#line 1128 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 279:
#line 1132 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 280:
#line 1135 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 281:
#line 1136 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 282:
#line 1139 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 283:
#line 1140 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 284:
#line 1141 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 285:
#line 1142 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 286:
#line 1143 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 287:
#line 1144 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 288:
#line 1145 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 289:
#line 1146 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 290:
#line 1147 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 291:
#line 1150 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 292:
#line 1151 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 293:
#line 1153 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 294:
#line 1161 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 295:
#line 1166 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 296:
#line 1167 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 297:
#line 1168 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 298:
#line 1171 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 299:
#line 1172 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1181 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 303:
#line 1187 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 304:
#line 1188 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 305:
#line 1190 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 306:
#line 1199 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 307:
#line 1204 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 308:
#line 1210 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 309:
#line 1217 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 310:
#line 1221 "parser/evoparser.y"
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

  case 311:
#line 1241 "parser/evoparser.y"
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

  case 314:
#line 1267 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 315:
#line 1269 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 316:
#line 1271 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 317:
#line 1273 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 318:
#line 1275 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 319:
#line 1278 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 320:
#line 1279 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 321:
#line 1280 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 322:
#line 1283 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 323:
#line 1284 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 324:
#line 1287 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1288 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 326:
#line 1291 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 327:
#line 1292 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 328:
#line 1293 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 331:
#line 1300 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 332:
#line 1301 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 333:
#line 1306 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 334:
#line 1308 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 335:
#line 1310 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1314 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 338:
#line 1315 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1318 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1319 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 341:
#line 1322 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 342:
#line 1327 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 343:
#line 1337 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 344:
#line 1344 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 345:
#line 1345 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 346:
#line 1346 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 347:
#line 1347 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 348:
#line 1352 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 349:
#line 1356 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 350:
#line 1358 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 353:
#line 1364 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 354:
#line 1369 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 355:
#line 1376 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 356:
#line 1383 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 357:
#line 1393 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 358:
#line 1400 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 359:
#line 1407 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 360:
#line 1415 "parser/evoparser.y"
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

  case 361:
#line 1425 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 362:
#line 1433 "parser/evoparser.y"
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

  case 363:
#line 1443 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 364:
#line 1451 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 365:
#line 1460 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 366:
#line 1469 "parser/evoparser.y"
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

  case 367:
#line 1479 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 368:
#line 1487 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 369:
#line 1496 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 370:
#line 1505 "parser/evoparser.y"
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

  case 371:
#line 1515 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 372:
#line 1524 "parser/evoparser.y"
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

  case 373:
#line 1536 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 374:
#line 1541 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 375:
#line 1546 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 376:
#line 1552 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 377:
#line 1559 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 378:
#line 1566 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 379:
#line 1573 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 380:
#line 1583 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 381:
#line 1590 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 382:
#line 1599 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 383:
#line 1606 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 384:
#line 1612 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 385:
#line 1620 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 386:
#line 1626 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 388:
#line 1634 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 389:
#line 1635 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 390:
#line 1636 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 391:
#line 1637 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 392:
#line 1642 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 393:
#line 1649 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 394:
#line 1658 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 395:
#line 1665 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 396:
#line 1671 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 397:
#line 1681 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 398:
#line 1685 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 399:
#line 1691 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 400:
#line 1697 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 401:
#line 1704 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 402:
#line 1710 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 403:
#line 1717 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 404:
#line 1723 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 405:
#line 1729 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 406:
#line 1735 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 407:
#line 1741 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 408:
#line 1747 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 409:
#line 1753 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 410:
#line 1759 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 411:
#line 1765 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 412:
#line 1771 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 413:
#line 1777 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 414:
#line 1783 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 415:
#line 1789 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 416:
#line 1795 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 417:
#line 1801 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 418:
#line 1808 "parser/evoparser.y"
    { ;}
    break;

  case 419:
#line 1809 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 420:
#line 1810 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 421:
#line 1814 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 422:
#line 1822 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 423:
#line 1828 "parser/evoparser.y"
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

  case 425:
#line 1841 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 426:
#line 1841 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 429:
#line 1849 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 430:
#line 1850 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 431:
#line 1851 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 432:
#line 1855 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 433:
#line 1856 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 434:
#line 1857 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 435:
#line 1861 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 436:
#line 1869 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 437:
#line 1878 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 438:
#line 1879 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 439:
#line 1880 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 440:
#line 1881 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 441:
#line 1882 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 445:
#line 1889 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 446:
#line 1893 "parser/evoparser.y"
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

  case 447:
#line 1903 "parser/evoparser.y"
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

  case 448:
#line 1915 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 449:
#line 1916 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 450:
#line 1916 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 451:
#line 1919 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 452:
#line 1920 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 453:
#line 1921 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 454:
#line 1922 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 455:
#line 1926 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 456:
#line 1929 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 457:
#line 1930 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 458:
#line 1931 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 459:
#line 1932 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 460:
#line 1938 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 461:
#line 1944 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 462:
#line 1949 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 463:
#line 1954 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 464:
#line 1958 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 465:
#line 1962 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 466:
#line 1964 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 469:
#line 1970 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 470:
#line 1971 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1975 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 472:
#line 1976 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 473:
#line 1980 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 474:
#line 1981 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 475:
#line 1982 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 482:
#line 1997 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 483:
#line 1998 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 484:
#line 1999 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 485:
#line 2000 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 486:
#line 2001 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 487:
#line 2002 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 488:
#line 2003 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 489:
#line 2004 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 490:
#line 2009 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 491:
#line 2018 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 492:
#line 2025 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 493:
#line 2026 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 494:
#line 2027 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 495:
#line 2032 "parser/evoparser.y"
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

  case 496:
#line 2043 "parser/evoparser.y"
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

  case 497:
#line 2055 "parser/evoparser.y"
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

  case 498:
#line 2066 "parser/evoparser.y"
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

  case 499:
#line 2081 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 500:
#line 2085 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 501:
#line 2089 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 502:
#line 2090 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 503:
#line 2095 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 504:
#line 2097 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 505:
#line 2099 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 506:
#line 2101 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 507:
#line 2104 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 508:
#line 2105 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 509:
#line 2111 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 510:
#line 2116 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 511:
#line 2118 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 512:
#line 2120 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 513:
#line 2122 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 514:
#line 2124 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 515:
#line 2128 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 516:
#line 2132 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 517:
#line 2133 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 518:
#line 2138 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 519:
#line 2148 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 520:
#line 2157 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 521:
#line 2165 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 523:
#line 2173 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 524:
#line 2174 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 525:
#line 2175 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 526:
#line 2176 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 527:
#line 2178 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 528:
#line 2180 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 529:
#line 2182 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 532:
#line 2190 "parser/evoparser.y"
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

  case 533:
#line 2205 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 534:
#line 2213 "parser/evoparser.y"
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

  case 535:
#line 2227 "parser/evoparser.y"
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

  case 536:
#line 2241 "parser/evoparser.y"
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

  case 537:
#line 2255 "parser/evoparser.y"
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

  case 538:
#line 2267 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 539:
#line 2268 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 540:
#line 2269 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 541:
#line 2272 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 542:
#line 2273 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 543:
#line 2276 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 544:
#line 2277 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 545:
#line 2278 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 546:
#line 2279 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 547:
#line 2280 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 548:
#line 2281 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 549:
#line 2282 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 550:
#line 2283 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 551:
#line 2285 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 552:
#line 2287 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 553:
#line 2289 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 554:
#line 2291 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 555:
#line 2293 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 556:
#line 2295 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 557:
#line 2298 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 558:
#line 2299 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 559:
#line 2302 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 560:
#line 2303 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 561:
#line 2306 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 562:
#line 2307 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 564:
#line 2311 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 565:
#line 2312 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 566:
#line 2313 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 567:
#line 2314 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 568:
#line 2315 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 569:
#line 2316 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 570:
#line 2317 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 571:
#line 2318 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 572:
#line 2319 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 573:
#line 2320 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 574:
#line 2321 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 575:
#line 2322 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 576:
#line 2323 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 577:
#line 2324 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 578:
#line 2325 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 579:
#line 2326 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 580:
#line 2327 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 581:
#line 2330 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 582:
#line 2331 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 583:
#line 2334 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 584:
#line 2336 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 585:
#line 2344 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 586:
#line 2345 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 588:
#line 2347 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 589:
#line 2348 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 590:
#line 2349 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 591:
#line 2350 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 592:
#line 2351 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 593:
#line 2352 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 594:
#line 2353 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 595:
#line 2354 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 596:
#line 2355 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 597:
#line 2362 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 598:
#line 2363 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 599:
#line 2364 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 600:
#line 2365 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 601:
#line 2366 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 602:
#line 2367 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 603:
#line 2368 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 604:
#line 2369 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 605:
#line 2370 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 606:
#line 2371 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 607:
#line 2372 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 608:
#line 2373 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 609:
#line 2374 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 610:
#line 2375 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 611:
#line 2376 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 612:
#line 2377 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 613:
#line 2378 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 614:
#line 2379 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 615:
#line 2380 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 616:
#line 2381 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 617:
#line 2382 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 618:
#line 2385 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 619:
#line 2386 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 620:
#line 2387 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 621:
#line 2390 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 622:
#line 2391 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 623:
#line 2394 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 624:
#line 2395 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 625:
#line 2396 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 627:
#line 2400 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 628:
#line 2401 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 629:
#line 2405 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 630:
#line 2406 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 631:
#line 2407 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 632:
#line 2408 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 633:
#line 2409 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 634:
#line 2410 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 635:
#line 2411 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 636:
#line 2412 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 637:
#line 2413 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 638:
#line 2414 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 639:
#line 2415 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 640:
#line 2416 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 641:
#line 2417 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 642:
#line 2418 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 643:
#line 2419 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 644:
#line 2420 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 645:
#line 2421 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 646:
#line 2422 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 647:
#line 2423 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 648:
#line 2424 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 649:
#line 2425 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 650:
#line 2426 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 651:
#line 2427 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 652:
#line 2428 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 653:
#line 2429 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 654:
#line 2430 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 655:
#line 2431 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 656:
#line 2432 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 657:
#line 2433 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 658:
#line 2434 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 659:
#line 2435 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 660:
#line 2436 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 661:
#line 2437 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 662:
#line 2438 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 663:
#line 2441 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 664:
#line 2442 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 665:
#line 2446 "parser/evoparser.y"
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

  case 666:
#line 2458 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 667:
#line 2459 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 668:
#line 2460 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 669:
#line 2464 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 670:
#line 2467 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 671:
#line 2468 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 675:
#line 2472 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 676:
#line 2473 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 677:
#line 2481 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 678:
#line 2486 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 679:
#line 2492 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 680:
#line 2498 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 681:
#line 2505 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 682:
#line 2512 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 683:
#line 2518 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 684:
#line 2524 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 685:
#line 2531 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 690:
#line 2547 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 691:
#line 2548 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 692:
#line 2549 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 693:
#line 2550 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 694:
#line 2553 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 695:
#line 2554 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 696:
#line 2555 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 697:
#line 2556 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 698:
#line 2557 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 699:
#line 2558 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 700:
#line 2559 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 701:
#line 2560 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 702:
#line 2561 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 703:
#line 2562 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 712:
#line 2579 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 713:
#line 2580 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 834:
#line 2598 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 835:
#line 2605 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 836:
#line 2610 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 837:
#line 2616 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 838:
#line 2622 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 839:
#line 2628 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 840:
#line 2639 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 841:
#line 2644 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 842:
#line 2650 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 845:
#line 2661 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 846:
#line 2662 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 847:
#line 2663 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 848:
#line 2664 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 849:
#line 2665 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 850:
#line 2666 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 851:
#line 2667 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 852:
#line 2674 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 853:
#line 2679 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 854:
#line 2686 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 855:
#line 2687 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 856:
#line 2690 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 857:
#line 2691 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 858:
#line 2692 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 859:
#line 2695 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 860:
#line 2700 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 861:
#line 2706 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 862:
#line 2715 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 863:
#line 2723 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 864:
#line 2733 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 865:
#line 2738 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 868:
#line 2751 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 869:
#line 2752 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 870:
#line 2753 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 871:
#line 2754 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 872:
#line 2755 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 873:
#line 2756 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 874:
#line 2757 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 875:
#line 2758 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 876:
#line 2761 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 877:
#line 2766 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 878:
#line 2772 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 879:
#line 2782 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 880:
#line 2789 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 881:
#line 2796 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 882:
#line 2804 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 884:
#line 2814 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 886:
#line 2818 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 887:
#line 2819 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10510 "parser/evoparser.tab.c"
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


#line 2822 "parser/evoparser.y"

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
