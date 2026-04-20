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
     JSON = 490,
     VIEW = 491,
     USING = 492,
     USE = 493,
     HASH = 494,
     VALIDATE = 495,
     VARCHAR = 496,
     VALUES = 497,
     VARBINARY = 498,
     WHERE = 499,
     WHEN = 500,
     WHILE = 501,
     WITH = 502,
     YEAR = 503,
     YEAR_MONTH = 504,
     ZEROFILL = 505,
     EXISTS = 506,
     FSUBSTRING = 507,
     FTRIM = 508,
     FDATE_ADD = 509,
     FDATE_SUB = 510,
     FDATEDIFF = 511,
     FYEAR = 512,
     FMONTH = 513,
     FDAY = 514,
     FHOUR = 515,
     FMINUTE = 516,
     FSECOND = 517,
     FNOW = 518,
     FLEFT = 519,
     FRIGHT = 520,
     FLPAD = 521,
     FRPAD = 522,
     FREVERSE = 523,
     FREPEAT = 524,
     FINSTR = 525,
     FLOCATE = 526,
     FABS = 527,
     FCEIL = 528,
     FFLOOR = 529,
     FROUND = 530,
     FPOWER = 531,
     FSQRT = 532,
     FMOD = 533,
     FRAND = 534,
     FLOG = 535,
     FLOG10 = 536,
     FSIGN = 537,
     FPI = 538,
     FCAST = 539,
     FCONVERT = 540,
     FNULLIF = 541,
     FIFNULL = 542,
     FIF = 543,
     UNKNOWN = 544,
     FGROUP_CONCAT = 545,
     SEPARATOR = 546,
     FCOUNT = 547,
     FSUM = 548,
     FAVG = 549,
     FMIN = 550,
     FMAX = 551,
     FUPPER = 552,
     FLOWER = 553,
     FLENGTH = 554,
     FCONCAT = 555,
     FREPLACE = 556,
     FCOALESCE = 557,
     FGEN_RANDOM_UUID = 558,
     FGEN_RANDOM_UUID_V7 = 559,
     FSNOWFLAKE_ID = 560,
     FLAST_INSERT_ID = 561,
     FSCOPE_IDENTITY = 562,
     FAT_IDENTITY = 563,
     FAT_LAST_INSERT_ID = 564,
     FEVO_SLEEP = 565,
     FEVO_JITTER = 566,
     FROW_NUMBER = 567,
     FRANK = 568,
     FDENSE_RANK = 569,
     FLEAD = 570,
     FLAG = 571,
     FNTILE = 572,
     FPERCENT_RANK = 573,
     FCUME_DIST = 574,
     OVER = 575,
     PARTITION = 576,
     FJSON_EXTRACT = 577,
     FJSON_UNQUOTE = 578,
     FJSON_TYPE = 579,
     FJSON_LENGTH = 580,
     FJSON_DEPTH = 581,
     FJSON_VALID = 582,
     FJSON_KEYS = 583,
     FJSON_PRETTY = 584,
     FJSON_QUOTE = 585,
     FJSON_SET = 586,
     FJSON_INSERT = 587,
     FJSON_REPLACE = 588,
     FJSON_REMOVE = 589,
     FJSON_CONTAINS = 590,
     FJSON_CONTAINS_PATH = 591,
     FJSON_SEARCH = 592,
     FJSON_OBJECT = 593,
     FJSON_ARRAY = 594,
     FJSON_ARRAYAGG = 595,
     SEQUENCE = 596,
     FNEXTVAL = 597,
     FCURRVAL = 598,
     FSETVAL = 599,
     FLASTVAL = 600,
     START = 601,
     INCREMENT = 602,
     MINVALUE = 603,
     CYCLE = 604
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
#define JSON 490
#define VIEW 491
#define USING 492
#define USE 493
#define HASH 494
#define VALIDATE 495
#define VARCHAR 496
#define VALUES 497
#define VARBINARY 498
#define WHERE 499
#define WHEN 500
#define WHILE 501
#define WITH 502
#define YEAR 503
#define YEAR_MONTH 504
#define ZEROFILL 505
#define EXISTS 506
#define FSUBSTRING 507
#define FTRIM 508
#define FDATE_ADD 509
#define FDATE_SUB 510
#define FDATEDIFF 511
#define FYEAR 512
#define FMONTH 513
#define FDAY 514
#define FHOUR 515
#define FMINUTE 516
#define FSECOND 517
#define FNOW 518
#define FLEFT 519
#define FRIGHT 520
#define FLPAD 521
#define FRPAD 522
#define FREVERSE 523
#define FREPEAT 524
#define FINSTR 525
#define FLOCATE 526
#define FABS 527
#define FCEIL 528
#define FFLOOR 529
#define FROUND 530
#define FPOWER 531
#define FSQRT 532
#define FMOD 533
#define FRAND 534
#define FLOG 535
#define FLOG10 536
#define FSIGN 537
#define FPI 538
#define FCAST 539
#define FCONVERT 540
#define FNULLIF 541
#define FIFNULL 542
#define FIF 543
#define UNKNOWN 544
#define FGROUP_CONCAT 545
#define SEPARATOR 546
#define FCOUNT 547
#define FSUM 548
#define FAVG 549
#define FMIN 550
#define FMAX 551
#define FUPPER 552
#define FLOWER 553
#define FLENGTH 554
#define FCONCAT 555
#define FREPLACE 556
#define FCOALESCE 557
#define FGEN_RANDOM_UUID 558
#define FGEN_RANDOM_UUID_V7 559
#define FSNOWFLAKE_ID 560
#define FLAST_INSERT_ID 561
#define FSCOPE_IDENTITY 562
#define FAT_IDENTITY 563
#define FAT_LAST_INSERT_ID 564
#define FEVO_SLEEP 565
#define FEVO_JITTER 566
#define FROW_NUMBER 567
#define FRANK 568
#define FDENSE_RANK 569
#define FLEAD 570
#define FLAG 571
#define FNTILE 572
#define FPERCENT_RANK 573
#define FCUME_DIST 574
#define OVER 575
#define PARTITION 576
#define FJSON_EXTRACT 577
#define FJSON_UNQUOTE 578
#define FJSON_TYPE 579
#define FJSON_LENGTH 580
#define FJSON_DEPTH 581
#define FJSON_VALID 582
#define FJSON_KEYS 583
#define FJSON_PRETTY 584
#define FJSON_QUOTE 585
#define FJSON_SET 586
#define FJSON_INSERT 587
#define FJSON_REPLACE 588
#define FJSON_REMOVE 589
#define FJSON_CONTAINS 590
#define FJSON_CONTAINS_PATH 591
#define FJSON_SEARCH 592
#define FJSON_OBJECT 593
#define FJSON_ARRAY 594
#define FJSON_ARRAYAGG 595
#define SEQUENCE 596
#define FNEXTVAL 597
#define FCURRVAL 598
#define FSETVAL 599
#define FLASTVAL 600
#define START 601
#define INCREMENT 602
#define MINVALUE 603
#define CYCLE 604




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
#line 69 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 864 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 877 "parser/evoparser.tab.c"

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
#define YYLAST   11426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  365
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  871
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2160

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   604

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     361,   362,    26,    24,   363,    25,   360,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   359,
       2,   364,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
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
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358
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
     144,   145,   153,   157,   162,   166,   171,   175,   181,   188,
     190,   194,   195,   197,   198,   205,   206,   214,   215,   222,
     223,   231,   232,   238,   243,   248,   253,   258,   263,   268,
     273,   278,   285,   286,   296,   297,   307,   308,   318,   319,
     330,   331,   342,   343,   354,   355,   366,   367,   378,   379,
     390,   391,   402,   403,   416,   417,   432,   433,   448,   449,
     460,   461,   474,   475,   490,   491,   506,   507,   518,   519,
     529,   530,   540,   549,   556,   563,   572,   577,   585,   592,
     597,   602,   607,   614,   623,   630,   637,   644,   653,   662,
     667,   674,   681,   688,   693,   698,   703,   710,   715,   722,
     727,   734,   738,   743,   748,   753,   757,   761,   768,   773,
     778,   783,   788,   793,   798,   805,   810,   815,   820,   825,
     830,   835,   840,   845,   854,   863,   872,   879,   886,   895,
     904,   911,   922,   927,   934,   943,   948,   953,   958,   965,
     974,   978,   985,   992,   999,  1006,  1015,  1019,  1028,  1039,
    1043,  1047,  1051,  1055,  1059,  1061,  1063,  1068,  1075,  1077,
    1079,  1081,  1088,  1095,  1099,  1103,  1107,  1111,  1115,  1119,
    1123,  1127,  1131,  1136,  1143,  1147,  1153,  1158,  1164,  1168,
    1173,  1177,  1182,  1184,  1186,  1188,  1190,  1194,  1207,  1220,
    1221,  1224,  1225,  1230,  1233,  1238,  1239,  1241,  1243,  1244,
    1247,  1248,  1251,  1252,  1256,  1258,  1262,  1263,  1267,  1270,
    1275,  1276,  1280,  1282,  1286,  1289,  1294,  1297,  1298,  1301,
    1306,  1311,  1312,  1315,  1318,  1323,  1328,  1329,  1332,  1334,
    1338,  1339,  1342,  1345,  1348,  1351,  1354,  1357,  1360,  1363,
    1365,  1369,  1371,  1374,  1377,  1379,  1380,  1382,  1386,  1388,
    1390,  1394,  1400,  1404,  1408,  1412,  1413,  1419,  1421,  1422,
    1428,  1432,  1438,  1445,  1451,  1452,  1454,  1456,  1457,  1459,
    1461,  1463,  1466,  1469,  1470,  1471,  1473,  1476,  1481,  1488,
    1495,  1502,  1503,  1506,  1507,  1509,  1513,  1517,  1519,  1528,
    1531,  1534,  1537,  1538,  1545,  1548,  1553,  1554,  1557,  1565,
    1567,  1571,  1577,  1579,  1588,  1598,  1609,  1619,  1631,  1642,
    1655,  1667,  1681,  1691,  1703,  1714,  1727,  1739,  1752,  1754,
    1758,  1760,  1765,  1770,  1775,  1782,  1784,  1788,  1791,  1795,
    1801,  1803,  1807,  1808,  1811,  1814,  1818,  1822,  1824,  1828,
    1830,  1834,  1840,  1842,  1853,  1864,  1882,  1895,  1915,  1927,
    1934,  1943,  1950,  1957,  1964,  1974,  1981,  1987,  1996,  2004,
    2014,  2023,  2034,  2044,  2045,  2047,  2050,  2052,  2063,  2070,
    2071,  2072,  2078,  2079,  2084,  2085,  2089,  2094,  2097,  2098,
    2104,  2108,  2114,  2115,  2118,  2121,  2124,  2127,  2129,  2130,
    2131,  2135,  2137,  2141,  2145,  2146,  2153,  2155,  2157,  2161,
    2165,  2173,  2177,  2181,  2187,  2193,  2195,  2204,  2212,  2220,
    2222,  2223,  2231,  2232,  2236,  2238,  2242,  2244,  2246,  2248,
    2250,  2252,  2253,  2255,  2260,  2264,  2266,  2270,  2273,  2276,
    2279,  2281,  2284,  2287,  2290,  2292,  2294,  2304,  2305,  2308,
    2311,  2315,  2321,  2327,  2335,  2341,  2343,  2348,  2353,  2357,
    2363,  2367,  2373,  2374,  2377,  2379,  2385,  2393,  2401,  2411,
    2423,  2425,  2428,  2432,  2434,  2444,  2456,  2475,  2476,  2481,
    2485,  2491,  2497,  2507,  2518,  2526,  2528,  2532,  2542,  2552,
    2562,  2569,  2581,  2590,  2591,  2593,  2596,  2598,  2602,  2608,
    2616,  2621,  2626,  2632,  2638,  2643,  2650,  2662,  2676,  2690,
    2706,  2711,  2718,  2720,  2724,  2726,  2730,  2732,  2736,  2737,
    2742,  2748,  2753,  2759,  2764,  2770,  2775,  2781,  2786,  2791,
    2795,  2799,  2803,  2806,  2810,  2815,  2820,  2822,  2826,  2827,
    2832,  2833,  2837,  2840,  2844,  2848,  2852,  2856,  2862,  2868,
    2874,  2878,  2884,  2887,  2895,  2901,  2909,  2915,  2918,  2922,
    2925,  2929,  2932,  2936,  2942,  2947,  2953,  2961,  2970,  2979,
    2987,  2994,  3001,  3007,  3008,  3012,  3018,  3019,  3021,  3022,
    3025,  3028,  3029,  3034,  3038,  3041,  3045,  3049,  3053,  3057,
    3061,  3065,  3069,  3073,  3077,  3081,  3083,  3085,  3087,  3089,
    3091,  3095,  3101,  3104,  3109,  3111,  3113,  3115,  3117,  3121,
    3125,  3129,  3133,  3139,  3145,  3147,  3149,  3151,  3153,  3157,
    3161,  3162,  3164,  3166,  3168,  3172,  3176,  3179,  3181,  3185,
    3189,  3193,  3195,  3206,  3216,  3229,  3241,  3254,  3266,  3281,
    3295,  3296,  3298,  3300,  3304,  3307,  3311,  3315,  3319,  3321,
    3323,  3325,  3327,  3329,  3331,  3333,  3335,  3337,  3339,  3340,
    3343,  3348,  3354,  3360,  3366,  3372,  3378,  3380,  3382,  3384,
    3386,  3388,  3390,  3392,  3394,  3396,  3398,  3400,  3402,  3404,
    3406,  3408,  3410,  3412,  3414,  3416,  3418,  3420,  3422,  3424,
    3426,  3428,  3430,  3432,  3434,  3436,  3438,  3440,  3442,  3444,
    3446,  3448,  3450,  3452,  3454,  3456,  3458,  3460,  3462,  3464,
    3466,  3468,  3470,  3472,  3474,  3476,  3478,  3480,  3482,  3484,
    3486,  3488,  3490,  3492,  3494,  3496,  3498,  3500,  3502,  3504,
    3506,  3508,  3510,  3512,  3514,  3516,  3518,  3520,  3522,  3524,
    3526,  3528,  3530,  3532,  3534,  3536,  3538,  3540,  3542,  3544,
    3546,  3548,  3550,  3552,  3554,  3556,  3558,  3560,  3562,  3564,
    3566,  3568,  3570,  3572,  3574,  3576,  3578,  3580,  3582,  3584,
    3586,  3588,  3590,  3592,  3594,  3596,  3598,  3600,  3602,  3604,
    3606,  3608,  3610,  3612,  3614,  3616,  3618,  3620,  3622,  3624,
    3626,  3630,  3636,  3640,  3646,  3648,  3653,  3659,  3661,  3665,
    3667,  3669,  3671,  3673,  3675,  3677,  3679,  3681,  3695,  3697,
    3699,  3701,  3703,  3705,  3707,  3711,  3717,  3722,  3727,  3729,
    3735,  3736,  3739,  3743,  3746,  3750,  3753,  3756,  3759,  3761,
    3764,  3766,  3770,  3776,  3781,  3786,  3793,  3800,  3801,  3804,
    3807,  3809
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     366,     0,    -1,   402,   359,    -1,   402,   359,   366,    -1,
       3,    -1,     3,   360,     3,    -1,    81,   360,     3,    -1,
     169,   361,     3,   362,    83,   361,     4,   362,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   179,
      -1,   367,    24,   367,    -1,   367,    25,   367,    -1,   367,
      26,   367,    -1,   367,    27,   367,    -1,   367,    28,   367,
      -1,   367,    29,   367,    -1,    25,   367,    -1,   361,   367,
     362,    -1,   367,    12,   367,    -1,   367,    10,   367,    -1,
     367,    11,   367,    -1,   367,    21,   367,    -1,   367,    22,
     367,    -1,   367,    30,   367,    -1,   367,    23,   367,    -1,
     367,    32,   367,    -1,   367,    31,   367,    -1,    18,   367,
      -1,    17,   367,    -1,   367,    20,   367,    -1,    -1,   367,
      20,   361,   368,   403,   362,    -1,    -1,   367,    20,    39,
     361,   369,   403,   362,    -1,    -1,   367,    20,   213,   361,
     370,   403,   362,    -1,    -1,   367,    20,    37,   361,   371,
     403,   362,    -1,   367,    15,   179,    -1,   367,    15,    18,
     179,    -1,   367,    15,     6,    -1,   367,    15,    18,     6,
      -1,     8,     9,   367,    -1,   367,    19,   367,    42,   367,
      -1,   367,    18,    19,   367,    42,   367,    -1,   367,    -1,
     367,   363,   372,    -1,    -1,   372,    -1,    -1,   367,    16,
     361,   374,   372,   362,    -1,    -1,   367,    18,    16,   361,
     375,   372,   362,    -1,    -1,   367,    16,   361,   376,   403,
     362,    -1,    -1,   367,    18,    16,   361,   377,   403,   362,
      -1,    -1,   260,   361,   378,   403,   362,    -1,     3,   361,
     373,   362,    -1,   301,   361,    26,   362,    -1,   301,   361,
     367,   362,    -1,   302,   361,   367,   362,    -1,   303,   361,
     367,   362,    -1,   304,   361,   367,   362,    -1,   305,   361,
     367,   362,    -1,   299,   361,   367,   362,    -1,   299,   361,
     367,   300,     4,   362,    -1,    -1,   321,   361,   362,   329,
     361,   379,   410,   412,   362,    -1,    -1,   322,   361,   362,
     329,   361,   380,   410,   412,   362,    -1,    -1,   323,   361,
     362,   329,   361,   381,   410,   412,   362,    -1,    -1,   302,
     361,   367,   362,   329,   361,   382,   410,   412,   362,    -1,
      -1,   301,   361,    26,   362,   329,   361,   383,   410,   412,
     362,    -1,    -1,   301,   361,   367,   362,   329,   361,   384,
     410,   412,   362,    -1,    -1,   303,   361,   367,   362,   329,
     361,   385,   410,   412,   362,    -1,    -1,   304,   361,   367,
     362,   329,   361,   386,   410,   412,   362,    -1,    -1,   305,
     361,   367,   362,   329,   361,   387,   410,   412,   362,    -1,
      -1,   324,   361,   367,   362,   329,   361,   388,   410,   412,
     362,    -1,    -1,   324,   361,   367,   363,     5,   362,   329,
     361,   389,   410,   412,   362,    -1,    -1,   324,   361,   367,
     363,     5,   363,     4,   362,   329,   361,   390,   410,   412,
     362,    -1,    -1,   324,   361,   367,   363,     5,   363,     5,
     362,   329,   361,   391,   410,   412,   362,    -1,    -1,   325,
     361,   367,   362,   329,   361,   392,   410,   412,   362,    -1,
      -1,   325,   361,   367,   363,     5,   362,   329,   361,   393,
     410,   412,   362,    -1,    -1,   325,   361,   367,   363,     5,
     363,     4,   362,   329,   361,   394,   410,   412,   362,    -1,
      -1,   325,   361,   367,   363,     5,   363,     5,   362,   329,
     361,   395,   410,   412,   362,    -1,    -1,   326,   361,     5,
     362,   329,   361,   396,   410,   412,   362,    -1,    -1,   327,
     361,   362,   329,   361,   397,   410,   412,   362,    -1,    -1,
     328,   361,   362,   329,   361,   398,   410,   412,   362,    -1,
     261,   361,   367,   363,   367,   363,   367,   362,    -1,   261,
     361,   367,   363,   367,   362,    -1,   261,   361,   367,   128,
     367,   362,    -1,   261,   361,   367,   128,   367,   132,   367,
     362,    -1,   262,   361,   367,   362,    -1,   262,   361,   399,
     367,   128,   367,   362,    -1,   262,   361,   399,   128,   367,
     362,    -1,   306,   361,   367,   362,    -1,   307,   361,   367,
     362,    -1,   308,   361,   367,   362,    -1,   309,   361,   367,
     363,   367,   362,    -1,   310,   361,   367,   363,   367,   363,
     367,   362,    -1,   311,   361,   367,   363,   367,   362,    -1,
     273,   361,   367,   363,   367,   362,    -1,   274,   361,   367,
     363,   367,   362,    -1,   275,   361,   367,   363,   367,   363,
     367,   362,    -1,   276,   361,   367,   363,   367,   363,   367,
     362,    -1,   277,   361,   367,   362,    -1,   278,   361,   367,
     363,   367,   362,    -1,   279,   361,   367,   363,   367,   362,
      -1,   280,   361,   367,   363,   367,   362,    -1,   281,   361,
     367,   362,    -1,   282,   361,   367,   362,    -1,   283,   361,
     367,   362,    -1,   284,   361,   367,   363,   367,   362,    -1,
     284,   361,   367,   362,    -1,   285,   361,   367,   363,   367,
     362,    -1,   286,   361,   367,   362,    -1,   287,   361,   367,
     363,   367,   362,    -1,   288,   361,   362,    -1,   289,   361,
     367,   362,    -1,   290,   361,   367,   362,    -1,   291,   361,
     367,   362,    -1,   292,   361,   362,    -1,   272,   361,   362,
      -1,   265,   361,   367,   363,   367,   362,    -1,   266,   361,
     367,   362,    -1,   267,   361,   367,   362,    -1,   268,   361,
     367,   362,    -1,   269,   361,   367,   362,    -1,   270,   361,
     367,   362,    -1,   271,   361,   367,   362,    -1,   331,   361,
     367,   363,   367,   362,    -1,   332,   361,   367,   362,    -1,
     333,   361,   367,   362,    -1,   334,   361,   367,   362,    -1,
     335,   361,   367,   362,    -1,   336,   361,   367,   362,    -1,
     337,   361,   367,   362,    -1,   338,   361,   367,   362,    -1,
     339,   361,   367,   362,    -1,   340,   361,   367,   363,   367,
     363,   367,   362,    -1,   341,   361,   367,   363,   367,   363,
     367,   362,    -1,   342,   361,   367,   363,   367,   363,   367,
     362,    -1,   343,   361,   367,   363,   367,   362,    -1,   344,
     361,   367,   363,   367,   362,    -1,   345,   361,   367,   363,
     367,   363,   367,   362,    -1,   346,   361,   367,   363,   367,
     363,   367,   362,    -1,   347,   361,   367,   363,   367,   362,
      -1,   347,   361,   367,   363,   367,   363,   367,   363,   367,
     362,    -1,   348,   361,   367,   362,    -1,   348,   361,   367,
     363,   367,   362,    -1,   348,   361,   367,   363,   367,   363,
     367,   362,    -1,   349,   361,   367,   362,    -1,   351,   361,
     367,   362,    -1,   352,   361,   367,   362,    -1,   353,   361,
     367,   363,   367,   362,    -1,   353,   361,   367,   363,   367,
     363,   367,   362,    -1,   354,   361,   362,    -1,   293,   361,
     367,    43,   509,   362,    -1,   294,   361,   367,   363,   509,
     362,    -1,   295,   361,   367,   363,   367,   362,    -1,   296,
     361,   367,   363,   367,   362,    -1,   297,   361,   367,   363,
     367,   363,   367,   362,    -1,   367,    15,   298,    -1,   309,
     361,   367,   363,   367,   363,   367,   362,    -1,   309,   361,
     367,   363,   367,   363,   367,   363,   367,   362,    -1,   312,
     361,   362,    -1,   313,   361,   362,    -1,   314,   361,   362,
      -1,   315,   361,   362,    -1,   316,   361,   362,    -1,   317,
      -1,   318,    -1,   319,   361,   367,   362,    -1,   320,   361,
     367,   363,   367,   362,    -1,   164,    -1,   235,    -1,    57,
      -1,   263,   361,   367,   363,   400,   362,    -1,   264,   361,
     367,   363,   400,   362,    -1,   153,   367,   257,    -1,   153,
     367,    96,    -1,   153,   367,    97,    -1,   153,   367,   101,
      -1,   153,   367,   103,    -1,   153,   367,   258,    -1,   153,
     367,   137,    -1,   153,   367,   136,    -1,   153,   367,   139,
      -1,    69,   367,   401,   116,    -1,    69,   367,   401,   117,
     367,   116,    -1,    69,   401,   116,    -1,    69,   401,   117,
     367,   116,    -1,   254,   367,   234,   367,    -1,   401,   254,
     367,   234,   367,    -1,   367,    14,   367,    -1,   367,    18,
      14,   367,    -1,   367,    13,   367,    -1,   367,    18,    13,
     367,    -1,    64,    -1,    72,    -1,    73,    -1,   403,    -1,
     222,   421,   422,    -1,   222,   421,   422,   128,   425,   404,
     405,   409,   414,   417,   418,   419,    -1,   222,   421,   422,
     151,     3,   128,   425,   404,   405,   409,   414,   417,    -1,
      -1,   253,   367,    -1,    -1,   133,    55,   406,   408,    -1,
     367,   407,    -1,   406,   363,   367,   407,    -1,    -1,    41,
      -1,   104,    -1,    -1,   256,   200,    -1,    -1,   140,   367,
      -1,    -1,   330,    55,   411,    -1,     3,    -1,   411,   363,
       3,    -1,    -1,   184,    55,   413,    -1,     3,   407,    -1,
     413,   363,     3,   407,    -1,    -1,   184,    55,   415,    -1,
     416,    -1,   415,   363,   416,    -1,     3,   407,    -1,     3,
     360,     3,   407,    -1,     5,   407,    -1,    -1,   165,   367,
      -1,   165,   367,   363,   367,    -1,   165,   367,   167,   367,
      -1,    -1,   132,   239,    -1,   132,   211,    -1,   132,   239,
     212,   166,    -1,   132,   211,   212,   166,    -1,    -1,   151,
     420,    -1,     3,    -1,   420,   363,     3,    -1,    -1,   421,
      37,    -1,   421,    98,    -1,   421,   102,    -1,   421,   138,
      -1,   421,   219,    -1,   421,   207,    -1,   421,   215,    -1,
     421,   214,    -1,   423,    -1,   422,   363,   423,    -1,    26,
      -1,   367,   424,    -1,    43,     3,    -1,     3,    -1,    -1,
     426,    -1,   425,   363,   426,    -1,   427,    -1,   431,    -1,
       3,   424,   438,    -1,     3,   360,     3,   424,   438,    -1,
     441,   430,     3,    -1,   428,   430,     3,    -1,   361,   425,
     362,    -1,    -1,   159,   361,   429,   403,   362,    -1,    43,
      -1,    -1,   426,   432,   155,   427,   436,    -1,   426,   219,
     427,    -1,   426,   219,   427,   183,   367,    -1,   426,   434,
     433,   155,   427,   437,    -1,   426,   176,   435,   155,   427,
      -1,    -1,   145,    -1,    68,    -1,    -1,   182,    -1,   163,
      -1,   201,    -1,   163,   433,    -1,   201,   433,    -1,    -1,
      -1,   437,    -1,   183,   367,    -1,   246,   361,   420,   362,
      -1,   247,   156,   439,   361,   440,   362,    -1,   146,   156,
     439,   361,   440,   362,    -1,   125,   156,   439,   361,   440,
     362,    -1,    -1,   132,   155,    -1,    -1,     3,    -1,   440,
     363,     3,    -1,   361,   403,   362,    -1,   442,    -1,    99,
     443,   128,     3,   404,   414,   417,   535,    -1,   443,   162,
      -1,   443,   189,    -1,   443,   146,    -1,    -1,    99,   443,
     444,   128,   425,   404,    -1,     3,   445,    -1,   444,   363,
       3,   445,    -1,    -1,   360,    26,    -1,    99,   443,   128,
     444,   246,   425,   404,    -1,   446,    -1,   100,   233,     3,
      -1,   100,   233,   148,   260,     3,    -1,   447,    -1,    65,
     147,     3,   183,     3,   361,   448,   362,    -1,    65,   130,
     147,     3,   183,     3,   361,   448,   362,    -1,    65,   147,
     148,   260,     3,   183,     3,   361,   448,   362,    -1,    65,
     242,   147,     3,   183,     3,   361,   448,   362,    -1,    65,
     242,   147,   148,   260,     3,   183,     3,   361,   448,   362,
      -1,    65,   147,     3,   183,     3,   246,   248,   361,   448,
     362,    -1,    65,   147,   148,   260,     3,   183,     3,   246,
     248,   361,   448,   362,    -1,    65,   242,   147,     3,   183,
       3,   246,   248,   361,   448,   362,    -1,    65,   242,   147,
     148,   260,     3,   183,     3,   246,   248,   361,   448,   362,
      -1,    65,   147,    77,     3,   183,     3,   361,   448,   362,
      -1,    65,   147,    77,   148,   260,     3,   183,     3,   361,
     448,   362,    -1,    65,   242,   147,    77,     3,   183,     3,
     361,   448,   362,    -1,    65,   242,   147,    77,   148,   260,
       3,   183,     3,   361,   448,   362,    -1,    65,   147,    77,
       3,   183,     3,   246,   248,   361,   448,   362,    -1,    65,
     242,   147,    77,     3,   183,     3,   246,   248,   361,   448,
     362,    -1,     3,    -1,   448,   363,     3,    -1,   449,    -1,
     306,   361,     3,   362,    -1,   307,   361,     3,   362,    -1,
     308,   361,     3,   362,    -1,   309,   361,     3,   363,     3,
     362,    -1,   450,    -1,   100,   147,     3,    -1,   451,   453,
      -1,   236,   233,     3,    -1,   236,   233,     3,   363,   452,
      -1,     3,    -1,   452,   363,     3,    -1,    -1,   453,    66,
      -1,   453,   196,    -1,   453,    47,    45,    -1,   453,    46,
      45,    -1,   454,    -1,   192,   233,     3,    -1,   455,    -1,
      38,   233,     3,    -1,    38,   233,     3,   360,     3,    -1,
     456,    -1,    34,   233,     3,    35,    63,     3,    70,   361,
     367,   362,    -1,    34,   233,     3,    35,    63,     3,   242,
     361,   502,   362,    -1,    34,   233,     3,    35,    63,     3,
     126,   156,   361,   499,   362,   193,     3,   361,   500,   362,
     501,    -1,    34,   233,     3,    35,    63,     3,    70,   361,
     367,   362,    18,   249,    -1,    34,   233,     3,    35,    63,
       3,   126,   156,   361,   499,   362,   193,     3,   361,   500,
     362,   501,    18,   249,    -1,    34,   233,     3,    35,    63,
       3,   187,   156,   361,   498,   362,    -1,    34,   233,     3,
     100,    63,     3,    -1,    34,   233,     3,   194,    63,     3,
     226,     3,    -1,    34,   233,     3,   112,    63,     3,    -1,
      34,   233,     3,    92,    63,     3,    -1,    34,   233,     3,
     249,    63,     3,    -1,    34,   233,     3,    35,    76,     3,
     509,   504,   457,    -1,    34,   233,     3,   100,    76,     3,
      -1,    34,   233,     3,   100,     3,    -1,    34,   233,     3,
     194,    76,     3,   226,     3,    -1,    34,   233,     3,   194,
       3,   226,     3,    -1,    34,   233,     3,   173,    76,     3,
     509,   504,   457,    -1,    34,   233,     3,   173,     3,   509,
     504,   457,    -1,    34,   233,     3,    67,    76,     3,     3,
     509,   504,   457,    -1,    34,   233,     3,    67,     3,     3,
     509,   504,   457,    -1,    -1,   122,    -1,    36,     3,    -1,
     458,    -1,   149,   466,   467,     3,   468,   251,   470,   459,
     461,   535,    -1,   149,   466,   467,     3,   468,   403,    -1,
      -1,    -1,   185,   156,   239,   460,   465,    -1,    -1,   183,
      80,   462,   463,    -1,    -1,   361,     3,   362,    -1,   361,
       3,   363,     3,    -1,    93,    82,    -1,    -1,    93,   239,
     464,   221,   465,    -1,     3,    20,   367,    -1,   465,   363,
       3,    20,   367,    -1,    -1,   466,   162,    -1,   466,    95,
      -1,   466,   138,    -1,   466,   146,    -1,   151,    -1,    -1,
      -1,   361,   469,   362,    -1,     3,    -1,   469,   363,     3,
      -1,   361,   472,   362,    -1,    -1,   470,   363,   471,   361,
     472,   362,    -1,   367,    -1,   105,    -1,   472,   363,   367,
      -1,   472,   363,   105,    -1,   149,   466,   467,     3,   221,
     473,   459,    -1,     3,    20,   367,    -1,     3,    20,   105,
      -1,   473,   363,     3,    20,   367,    -1,   473,   363,     3,
      20,   105,    -1,   474,    -1,   202,   466,   467,     3,   468,
     251,   470,   459,    -1,   202,   466,   467,     3,   221,   473,
     459,    -1,   202,   466,   467,     3,   468,   403,   459,    -1,
     475,    -1,    -1,    78,     3,   476,   477,   479,   480,   481,
      -1,    -1,   361,   478,   362,    -1,     3,    -1,   478,   363,
       3,    -1,   128,    -1,   226,    -1,     4,    -1,   217,    -1,
     218,    -1,    -1,   482,    -1,   256,   361,   482,   362,    -1,
     361,   482,   362,    -1,   483,    -1,   482,   363,   483,    -1,
     127,    79,    -1,   127,   230,    -1,    91,     4,    -1,   135,
      -1,   135,     6,    -1,   179,     4,    -1,   223,     4,    -1,
      79,    -1,   484,    -1,   239,   485,   425,   221,   486,   404,
     414,   417,   535,    -1,    -1,   466,   162,    -1,   466,   146,
      -1,     3,    20,   367,    -1,     3,   360,     3,    20,   367,
      -1,   486,   363,     3,    20,   367,    -1,   486,   363,     3,
     360,     3,    20,   367,    -1,   194,   233,     3,   226,     3,
      -1,   487,    -1,    65,    87,   488,     3,    -1,    65,   208,
     488,     3,    -1,   100,    87,     3,    -1,   100,    87,   148,
     260,     3,    -1,   100,   208,     3,    -1,   100,   208,   148,
     260,     3,    -1,    -1,   148,   260,    -1,   489,    -1,    65,
      94,     3,    43,   509,    -1,    65,    94,     3,    43,   509,
     105,   367,    -1,    65,    94,     3,    43,   509,    18,   179,
      -1,    65,    94,     3,    43,   509,    70,   361,   367,   362,
      -1,    65,    94,     3,    43,   509,    18,   179,    70,   361,
     367,   362,    -1,   490,    -1,   247,     3,    -1,   247,    87,
       3,    -1,   491,    -1,    65,   495,   233,   488,     3,   361,
     496,   362,   492,    -1,    65,   495,   233,   488,     3,   360,
       3,   361,   496,   362,   492,    -1,    65,   495,   233,   488,
       3,   330,    86,     3,   132,   251,   128,   361,     5,   362,
     226,   361,     5,   362,    -1,    -1,   492,    40,    20,     5,
      -1,   492,    40,     5,    -1,   492,   183,     3,    99,     3,
      -1,   492,   183,     3,   229,     3,    -1,   492,   209,    55,
     248,   361,     3,   362,   210,     5,    -1,   492,   209,    55,
     190,   361,     3,   362,   361,   493,   362,    -1,   492,   330,
      55,   190,   361,     3,   362,    -1,   494,    -1,   493,   363,
     494,    -1,   209,     3,   251,   160,   231,     4,   183,   177,
       5,    -1,   209,     3,   251,   160,   231,   170,   183,   177,
       5,    -1,    65,   495,   233,   488,     3,   361,   496,   362,
     511,    -1,    65,   495,   233,   488,     3,   511,    -1,    65,
     495,   233,   488,     3,   360,     3,   361,   496,   362,   511,
      -1,    65,   495,   233,   488,     3,   360,     3,   511,    -1,
      -1,   227,    -1,   228,   227,    -1,   497,    -1,   496,   363,
     497,    -1,   187,   156,   361,   498,   362,    -1,    63,     3,
     187,   156,   361,   498,   362,    -1,   156,   361,   420,   362,
      -1,   147,   361,   420,   362,    -1,   130,   147,   361,   420,
     362,    -1,   130,   156,   361,   420,   362,    -1,    70,   361,
     367,   362,    -1,    63,     3,    70,   361,   367,   362,    -1,
     126,   156,   361,   499,   362,   193,     3,   361,   500,   362,
     501,    -1,   126,   156,   361,   499,   362,   193,     3,   360,
       3,   361,   500,   362,   501,    -1,    63,     3,   126,   156,
     361,   499,   362,   193,     3,   361,   500,   362,   501,    -1,
      63,     3,   126,   156,   361,   499,   362,   193,     3,   360,
       3,   361,   500,   362,   501,    -1,   242,   361,   502,   362,
      -1,    63,     3,   242,   361,   502,   362,    -1,     3,    -1,
     498,   363,     3,    -1,     3,    -1,   499,   363,     3,    -1,
       3,    -1,   500,   363,     3,    -1,    -1,   501,   183,    99,
      66,    -1,   501,   183,    99,   221,   179,    -1,   501,   183,
      99,   196,    -1,   501,   183,    99,   221,   105,    -1,   501,
     183,   239,    66,    -1,   501,   183,   239,   221,   179,    -1,
     501,   183,   239,   196,    -1,   501,   183,   239,   221,   105,
      -1,   501,   183,    99,   178,    -1,   501,   183,   239,   178,
      -1,   501,   169,   129,    -1,   501,   169,   216,    -1,   501,
     169,   186,    -1,   501,    89,    -1,   501,    18,    89,    -1,
     501,    89,   143,    90,    -1,   501,    89,   143,   141,    -1,
       3,    -1,   502,   363,     3,    -1,    -1,   503,     3,   509,
     504,    -1,    -1,   504,    18,   179,    -1,   504,   179,    -1,
     504,   105,     4,    -1,   504,   105,     5,    -1,   504,   105,
       7,    -1,   504,   105,     6,    -1,   504,   105,   312,   361,
     362,    -1,   504,   105,   313,   361,   362,    -1,   504,   105,
     314,   361,   362,    -1,   504,   105,    64,    -1,   504,   105,
     361,   367,   362,    -1,   504,    40,    -1,   504,    40,   361,
       5,   363,     5,   362,    -1,   504,    40,   361,     5,   362,
      -1,   504,    45,   361,     5,   363,     5,   362,    -1,   504,
      45,   361,     5,   362,    -1,   504,    45,    -1,   504,   242,
     156,    -1,   504,   242,    -1,   504,   187,   156,    -1,   504,
     156,    -1,   504,    71,     4,    -1,   504,    70,   361,   367,
     362,    -1,   504,    63,     3,   242,    -1,   504,    63,     3,
     187,   156,    -1,   504,    63,     3,    70,   361,   367,   362,
      -1,   504,    48,    44,    43,   361,   367,   362,    49,    -1,
     504,    48,    44,    43,   361,   367,   362,    50,    -1,   504,
      48,    44,    43,   361,   367,   362,    -1,   504,    43,   361,
     367,   362,    49,    -1,   504,    43,   361,   367,   362,    50,
      -1,   504,    43,   361,   367,   362,    -1,    -1,   361,     5,
     362,    -1,   361,     5,   363,     5,   362,    -1,    -1,    56,
      -1,    -1,   507,   240,    -1,   507,   259,    -1,    -1,   508,
      74,   221,     4,    -1,   508,    75,     4,    -1,    59,   505,
      -1,   225,   505,   507,    -1,   220,   505,   507,    -1,   175,
     505,   507,    -1,   152,   505,   507,    -1,   144,   505,   507,
      -1,    58,   505,   507,    -1,   191,   505,   507,    -1,   106,
     505,   507,    -1,   124,   505,   507,    -1,   108,   505,   507,
      -1,   109,    -1,   238,    -1,   232,    -1,   107,    -1,   257,
      -1,    74,   505,   508,    -1,   250,   361,     5,   362,   508,
      -1,    56,   505,    -1,   252,   361,     5,   362,    -1,   237,
      -1,    53,    -1,   174,    -1,   168,    -1,   224,   506,   508,
      -1,   230,   506,   508,    -1,   171,   506,   508,    -1,   161,
     506,   508,    -1,   115,   361,   510,   362,   508,    -1,   221,
     361,   510,   362,   508,    -1,    54,    -1,   243,    -1,   244,
      -1,     4,    -1,   510,   363,     4,    -1,   512,   430,   403,
      -1,    -1,   146,    -1,   202,    -1,   513,    -1,   221,   208,
       3,    -1,   221,   208,   105,    -1,   221,   514,    -1,   515,
      -1,   514,   363,   515,    -1,     8,    20,   367,    -1,     8,
       9,   367,    -1,   516,    -1,    65,   188,     3,   361,   517,
     362,    43,    52,   521,   116,    -1,    65,   188,     3,   361,
     517,   362,    52,   521,   116,    -1,    65,    10,   202,   188,
       3,   361,   517,   362,    43,    52,   521,   116,    -1,    65,
      10,   202,   188,     3,   361,   517,   362,    52,   521,   116,
      -1,    65,   131,     3,   361,   517,   362,   199,   520,    43,
      52,   521,   116,    -1,    65,   131,     3,   361,   517,   362,
     199,   520,    52,   521,   116,    -1,    65,    10,   202,   131,
       3,   361,   517,   362,   199,   520,    43,    52,   521,   116,
      -1,    65,    10,   202,   131,     3,   361,   517,   362,   199,
     520,    52,   521,   116,    -1,    -1,   518,    -1,   519,    -1,
     518,   363,   519,    -1,     3,   509,    -1,    16,     3,   509,
      -1,   181,     3,   509,    -1,   142,     3,   509,    -1,   144,
      -1,   152,    -1,   250,    -1,   230,    -1,    54,    -1,   124,
      -1,   106,    -1,    58,    -1,   109,    -1,   232,    -1,    -1,
     521,   522,    -1,   521,    52,   521,   116,    -1,   521,   148,
     521,   116,   148,    -1,   521,   255,   521,   116,   255,    -1,
     521,   158,   521,   116,   158,    -1,   521,   123,   521,   116,
     123,    -1,   521,    69,   521,   116,    69,    -1,     3,    -1,
       4,    -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,
      18,    -1,    10,    -1,    12,    -1,    16,    -1,    42,    -1,
     222,    -1,   149,    -1,   239,    -1,    99,    -1,   128,    -1,
     253,    -1,   221,    -1,   151,    -1,   251,    -1,    65,    -1,
     100,    -1,   233,    -1,   147,    -1,   234,    -1,   117,    -1,
     111,    -1,    88,    -1,    93,    -1,    60,    -1,   197,    -1,
     157,    -1,   154,    -1,    62,    -1,   180,    -1,   121,    -1,
      61,    -1,   134,    -1,   119,    -1,   181,    -1,   142,    -1,
     132,    -1,    46,    -1,   204,    -1,   195,    -1,   118,    -1,
     206,    -1,    51,    -1,   110,    -1,   203,    -1,   205,    -1,
      43,    -1,   183,    -1,   184,    -1,    55,    -1,   133,    -1,
     140,    -1,   165,    -1,   167,    -1,   155,    -1,   163,    -1,
     201,    -1,   145,    -1,   182,    -1,   129,    -1,    68,    -1,
     176,    -1,   246,    -1,   179,    -1,   105,    -1,   187,    -1,
     156,    -1,   242,    -1,    70,    -1,   126,    -1,   193,    -1,
      66,    -1,   196,    -1,   178,    -1,   144,    -1,   152,    -1,
     250,    -1,   230,    -1,    54,    -1,   124,    -1,   106,    -1,
      58,    -1,   109,    -1,   232,    -1,   220,    -1,   108,    -1,
      74,    -1,   243,    -1,    53,    -1,   241,    -1,   114,    -1,
     150,    -1,    37,    -1,    98,    -1,   260,    -1,   254,    -1,
     256,    -1,   188,    -1,   131,    -1,   199,    -1,   361,    -1,
     362,    -1,   363,    -1,   359,    -1,   360,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    17,    -1,
     364,    -1,   301,    -1,   302,    -1,   303,    -1,   304,    -1,
     305,    -1,     8,    -1,   523,    -1,   100,   188,     3,    -1,
     100,   188,   148,   260,     3,    -1,   100,   131,     3,    -1,
     100,   131,   148,   260,     3,    -1,   524,    -1,    60,     3,
     361,   362,    -1,    60,     3,   361,   525,   362,    -1,   526,
      -1,   525,   363,   526,    -1,     5,    -1,     4,    -1,     7,
      -1,   179,    -1,     6,    -1,     3,    -1,     8,    -1,   527,
      -1,    65,   205,     3,   528,   529,   183,     3,   132,   110,
     203,    52,   521,   116,    -1,    51,    -1,    36,    -1,   149,
      -1,   239,    -1,    99,    -1,   530,    -1,   100,   205,     3,
      -1,   100,   205,   148,   260,     3,    -1,    34,   205,     3,
     112,    -1,    34,   205,     3,    92,    -1,   531,    -1,    65,
     350,   488,     3,   532,    -1,    -1,   532,   533,    -1,   355,
     256,     5,    -1,   355,     5,    -1,   356,    55,     5,    -1,
     356,     5,    -1,   357,     5,    -1,   170,     5,    -1,   358,
      -1,    18,   358,    -1,   534,    -1,   100,   350,     3,    -1,
     100,   350,   148,   260,     3,    -1,    34,   350,     3,   532,
      -1,    34,   350,     3,    47,    -1,    34,   350,     3,    47,
     256,     5,    -1,    34,   350,     3,   194,   226,     3,    -1,
      -1,   198,    26,    -1,   198,   536,    -1,     3,    -1,   536,
     363,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   444,   444,   445,   450,   457,   458,   459,   473,   474,
     492,   500,   508,   514,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   547,   547,   556,   556,   558,   558,
     560,   560,   564,   565,   566,   567,   568,   571,   572,   575,
     576,   579,   580,   583,   583,   584,   584,   585,   585,   593,
     593,   601,   601,   612,   616,   617,   618,   619,   620,   621,
     622,   623,   627,   627,   629,   629,   631,   631,   634,   634,
     636,   636,   638,   638,   640,   640,   642,   642,   644,   644,
     647,   647,   649,   649,   651,   651,   653,   653,   655,   655,
     657,   657,   659,   659,   661,   661,   664,   664,   666,   666,
     668,   668,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   707,   708,   709,   710,
     711,   712,   713,   714,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   739,   740,   741,   742,
     743,   745,   746,   748,   749,   750,   752,   753,   754,   755,
     762,   769,   776,   780,   784,   788,   792,   796,   802,   803,
     804,   807,   813,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   831,   833,   835,   837,   841,   849,   860,   861,
     864,   865,   868,   876,   884,   895,   905,   906,   919,   935,
     936,   937,   938,   941,   948,   956,   957,   958,   961,   962,
     965,   966,   970,   971,   974,   976,   980,   981,   984,   986,
     990,   991,   994,   995,   998,  1004,  1011,  1020,  1021,  1022,
    1023,  1026,  1027,  1028,  1029,  1030,  1033,  1034,  1037,  1038,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1052,
    1053,  1054,  1062,  1068,  1069,  1070,  1073,  1074,  1077,  1078,
    1082,  1089,  1090,  1091,  1100,  1104,  1104,  1144,  1145,  1149,
    1151,  1153,  1155,  1157,  1161,  1162,  1163,  1166,  1167,  1170,
    1171,  1174,  1175,  1176,  1179,  1180,  1183,  1184,  1188,  1190,
    1192,  1194,  1197,  1198,  1201,  1202,  1205,  1209,  1219,  1227,
    1228,  1229,  1230,  1234,  1238,  1240,  1244,  1244,  1246,  1251,
    1258,  1265,  1275,  1282,  1289,  1297,  1307,  1315,  1325,  1333,
    1342,  1351,  1361,  1369,  1378,  1387,  1397,  1406,  1418,  1423,
    1428,  1434,  1441,  1448,  1455,  1465,  1472,  1481,  1488,  1494,
    1502,  1508,  1516,  1517,  1518,  1519,  1520,  1524,  1531,  1540,
    1547,  1553,  1564,  1567,  1573,  1579,  1586,  1592,  1599,  1605,
    1611,  1617,  1623,  1629,  1635,  1641,  1647,  1653,  1659,  1665,
    1671,  1677,  1683,  1691,  1692,  1693,  1696,  1704,  1710,  1723,
    1724,  1724,  1728,  1729,  1732,  1733,  1734,  1738,  1739,  1739,
    1743,  1751,  1761,  1762,  1763,  1764,  1765,  1768,  1768,  1771,
    1772,  1775,  1785,  1798,  1799,  1799,  1802,  1803,  1804,  1805,
    1808,  1812,  1813,  1814,  1815,  1821,  1824,  1830,  1835,  1841,
    1845,  1845,  1850,  1851,  1853,  1854,  1858,  1859,  1863,  1864,
    1865,  1868,  1869,  1870,  1871,  1875,  1876,  1880,  1881,  1882,
    1883,  1884,  1885,  1886,  1887,  1891,  1899,  1908,  1909,  1910,
    1914,  1925,  1937,  1948,  1963,  1968,  1972,  1973,  1977,  1979,
    1981,  1983,  1987,  1988,  1994,  1998,  2000,  2002,  2004,  2006,
    2011,  2015,  2016,  2020,  2029,  2039,  2047,  2055,  2056,  2057,
    2058,  2059,  2060,  2062,  2064,  2068,  2069,  2072,  2087,  2094,
    2109,  2122,  2137,  2150,  2151,  2152,  2155,  2156,  2159,  2160,
    2161,  2162,  2163,  2164,  2165,  2166,  2167,  2169,  2171,  2173,
    2175,  2177,  2181,  2182,  2185,  2186,  2189,  2190,  2193,  2194,
    2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,  2203,  2204,
    2205,  2206,  2207,  2208,  2209,  2210,  2213,  2214,  2217,  2217,
    2227,  2228,  2229,  2230,  2231,  2232,  2233,  2234,  2235,  2236,
    2237,  2238,  2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,
    2263,  2264,  2265,  2268,  2269,  2270,  2273,  2274,  2277,  2278,
    2279,  2282,  2283,  2284,  2288,  2289,  2290,  2291,  2292,  2293,
    2294,  2295,  2296,  2297,  2298,  2299,  2300,  2301,  2302,  2303,
    2304,  2305,  2306,  2307,  2308,  2309,  2310,  2311,  2312,  2313,
    2314,  2315,  2316,  2317,  2318,  2319,  2320,  2323,  2324,  2327,
    2340,  2341,  2342,  2346,  2349,  2350,  2351,  2352,  2352,  2354,
    2355,  2363,  2367,  2373,  2379,  2386,  2393,  2399,  2405,  2412,
    2421,  2422,  2425,  2426,  2429,  2430,  2431,  2432,  2435,  2436,
    2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,  2451,  2452,
    2453,  2454,  2455,  2456,  2457,  2458,  2461,  2462,  2463,  2463,
    2463,  2464,  2464,  2464,  2464,  2464,  2464,  2465,  2465,  2465,
    2465,  2465,  2465,  2465,  2465,  2465,  2466,  2466,  2466,  2466,
    2466,  2466,  2466,  2467,  2467,  2467,  2467,  2468,  2468,  2468,
    2468,  2468,  2468,  2468,  2468,  2468,  2468,  2468,  2468,  2469,
    2469,  2469,  2469,  2469,  2469,  2469,  2469,  2470,  2470,  2470,
    2470,  2470,  2470,  2470,  2470,  2471,  2471,  2471,  2471,  2471,
    2471,  2471,  2471,  2471,  2472,  2472,  2472,  2472,  2472,  2472,
    2472,  2472,  2473,  2473,  2473,  2474,  2474,  2474,  2474,  2474,
    2474,  2474,  2474,  2475,  2475,  2475,  2475,  2475,  2475,  2475,
    2476,  2476,  2476,  2476,  2476,  2476,  2476,  2477,  2477,  2477,
    2477,  2478,  2478,  2478,  2478,  2478,  2478,  2478,  2478,  2478,
    2478,  2478,  2478,  2479,  2479,  2479,  2479,  2479,  2480,  2487,
    2491,  2497,  2503,  2509,  2521,  2525,  2531,  2539,  2540,  2543,
    2544,  2545,  2546,  2547,  2548,  2549,  2556,  2560,  2568,  2569,
    2572,  2573,  2574,  2577,  2581,  2587,  2596,  2604,  2615,  2619,
    2628,  2629,  2633,  2634,  2635,  2636,  2637,  2638,  2639,  2640,
    2643,  2647,  2653,  2663,  2670,  2677,  2685,  2695,  2696,  2697,
    2700,  2701
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
  "JSON_ARROW", "UMINUS", "ALTER", "ADD", "AFTER", "ALL", "ANALYZE", "ANY",
  "AUTO_INCREMENT", "ASC", "AND", "AS", "ALWAYS", "IDENTITY", "CONTINUE",
  "RESTART", "GENERATED", "STORED", "VIRTUAL", "BEFORE", "BEGINWORK",
  "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT", "CALL",
  "CLOSE", "CURSOR", "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE",
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
  "TIME", "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "JSON", "VIEW",
  "USING", "USE", "HASH", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY",
  "WHERE", "WHEN", "WHILE", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FDATEDIFF",
  "FYEAR", "FMONTH", "FDAY", "FHOUR", "FMINUTE", "FSECOND", "FNOW",
  "FLEFT", "FRIGHT", "FLPAD", "FRPAD", "FREVERSE", "FREPEAT", "FINSTR",
  "FLOCATE", "FABS", "FCEIL", "FFLOOR", "FROUND", "FPOWER", "FSQRT",
  "FMOD", "FRAND", "FLOG", "FLOG10", "FSIGN", "FPI", "FCAST", "FCONVERT",
  "FNULLIF", "FIFNULL", "FIF", "UNKNOWN", "FGROUP_CONCAT", "SEPARATOR",
  "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH",
  "FCONCAT", "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID",
  "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID", "FLAST_INSERT_ID",
  "FSCOPE_IDENTITY", "FAT_IDENTITY", "FAT_LAST_INSERT_ID", "FEVO_SLEEP",
  "FEVO_JITTER", "FROW_NUMBER", "FRANK", "FDENSE_RANK", "FLEAD", "FLAG",
  "FNTILE", "FPERCENT_RANK", "FCUME_DIST", "OVER", "PARTITION",
  "FJSON_EXTRACT", "FJSON_UNQUOTE", "FJSON_TYPE", "FJSON_LENGTH",
  "FJSON_DEPTH", "FJSON_VALID", "FJSON_KEYS", "FJSON_PRETTY",
  "FJSON_QUOTE", "FJSON_SET", "FJSON_INSERT", "FJSON_REPLACE",
  "FJSON_REMOVE", "FJSON_CONTAINS", "FJSON_CONTAINS_PATH", "FJSON_SEARCH",
  "FJSON_OBJECT", "FJSON_ARRAY", "FJSON_ARRAYAGG", "SEQUENCE", "FNEXTVAL",
  "FCURRVAL", "FSETVAL", "FLASTVAL", "START", "INCREMENT", "MINVALUE",
  "CYCLE", "';'", "'.'", "'('", "')'", "','", "'='", "$accept",
  "stmt_list", "expr", "@1", "@2", "@3", "@4", "val_list", "opt_val_list",
  "@5", "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15",
  "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25",
  "@26", "@27", "@28", "@29", "trim_ltb", "interval_exp", "case_list",
  "stmt", "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_window_partition",
  "window_partition_list", "opt_window_orderby", "window_orderby_list",
  "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_for_update", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "lateral_subquery", "@30", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "create_index_stmt", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "truncate_extra_tables",
  "opt_truncate_options", "reclaim_table_stmt", "analyze_table_stmt",
  "alter_table_stmt", "opt_col_position", "insert_stmt", "opt_ondupupdate",
  "@31", "opt_on_conflict", "opt_conflict_target", "conflict_action",
  "@32", "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@33", "insert_vals",
  "insert_asgn_list", "replace_stmt", "copy_stmt", "@34", "opt_copy_cols",
  "copy_col_list", "copy_direction", "copy_target", "opt_copy_options",
  "copy_option_list", "copy_option", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_table_options", "shard_range_list", "shard_range_def",
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@35", "column_atts", "opt_length", "opt_binary",
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
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,    59,
      46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   365,   366,   366,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   368,   367,   369,   367,   370,   367,
     371,   367,   367,   367,   367,   367,   367,   367,   367,   372,
     372,   373,   373,   374,   367,   375,   367,   376,   367,   377,
     367,   378,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   379,   367,   380,   367,   381,   367,   382,   367,
     383,   367,   384,   367,   385,   367,   386,   367,   387,   367,
     388,   367,   389,   367,   390,   367,   391,   367,   392,   367,
     393,   367,   394,   367,   395,   367,   396,   367,   397,   367,
     398,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   399,   399,
     399,   367,   367,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   367,   367,   367,   367,   401,   401,   367,   367,
     367,   367,   367,   367,   367,   402,   403,   403,   403,   404,
     404,   405,   405,   406,   406,   407,   407,   407,   408,   408,
     409,   409,   410,   410,   411,   411,   412,   412,   413,   413,
     414,   414,   415,   415,   416,   416,   416,   417,   417,   417,
     417,   418,   418,   418,   418,   418,   419,   419,   420,   420,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   422,
     422,   422,   423,   424,   424,   424,   425,   425,   426,   426,
     427,   427,   427,   427,   427,   429,   428,   430,   430,   431,
     431,   431,   431,   431,   432,   432,   432,   433,   433,   434,
     434,   435,   435,   435,   436,   436,   437,   437,   438,   438,
     438,   438,   439,   439,   440,   440,   441,   402,   442,   443,
     443,   443,   443,   442,   444,   444,   445,   445,   442,   402,
     446,   446,   402,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   448,   448,
     448,   449,   449,   449,   449,   402,   450,   402,   451,   451,
     452,   452,   453,   453,   453,   453,   453,   402,   454,   402,
     455,   455,   402,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   457,   457,   457,   402,   458,   458,   459,
     460,   459,   461,   461,   462,   462,   462,   463,   464,   463,
     465,   465,   466,   466,   466,   466,   466,   467,   467,   468,
     468,   469,   469,   470,   471,   470,   472,   472,   472,   472,
     458,   473,   473,   473,   473,   402,   474,   474,   474,   402,
     476,   475,   477,   477,   478,   478,   479,   479,   480,   480,
     480,   481,   481,   481,   481,   482,   482,   483,   483,   483,
     483,   483,   483,   483,   483,   402,   484,   485,   485,   485,
     486,   486,   486,   486,   402,   402,   487,   487,   402,   402,
     402,   402,   488,   488,   402,   489,   489,   489,   489,   489,
     402,   490,   490,   402,   491,   491,   491,   492,   492,   492,
     492,   492,   492,   492,   492,   493,   493,   494,   494,   491,
     491,   491,   491,   495,   495,   495,   496,   496,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   498,   498,   499,   499,   500,   500,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   502,   502,   503,   497,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   505,   505,   505,   506,   506,   507,   507,
     507,   508,   508,   508,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   510,   510,   511,
     512,   512,   512,   402,   513,   513,   513,   514,   514,   515,
     515,   402,   516,   516,   516,   516,   516,   516,   516,   516,
     517,   517,   518,   518,   519,   519,   519,   519,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   521,   521,
     521,   521,   521,   521,   521,   521,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   402,
     523,   523,   523,   523,   402,   524,   524,   525,   525,   526,
     526,   526,   526,   526,   526,   526,   402,   527,   528,   528,
     529,   529,   529,   402,   530,   530,   402,   402,   402,   531,
     532,   532,   533,   533,   533,   533,   533,   533,   533,   533,
     402,   534,   534,   402,   402,   402,   402,   535,   535,   535,
     536,   536
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     3,     8,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     0,     6,     0,     7,     0,     7,
       0,     7,     3,     4,     3,     4,     3,     5,     6,     1,
       3,     0,     1,     0,     6,     0,     7,     0,     6,     0,
       7,     0,     5,     4,     4,     4,     4,     4,     4,     4,
       4,     6,     0,     9,     0,     9,     0,     9,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    12,     0,    14,     0,    14,     0,    10,
       0,    12,     0,    14,     0,    14,     0,    10,     0,     9,
       0,     9,     8,     6,     6,     8,     4,     7,     6,     4,
       4,     4,     6,     8,     6,     6,     6,     8,     8,     4,
       6,     6,     6,     4,     4,     4,     6,     4,     6,     4,
       6,     3,     4,     4,     4,     3,     3,     6,     4,     4,
       4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
       4,     4,     4,     8,     8,     8,     6,     6,     8,     8,
       6,    10,     4,     6,     8,     4,     4,     4,     6,     8,
       3,     6,     6,     6,     6,     8,     3,     8,    10,     3,
       3,     3,     3,     3,     1,     1,     4,     6,     1,     1,
       1,     6,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     6,     3,     5,     4,     5,     3,     4,
       3,     4,     1,     1,     1,     1,     3,    12,    12,     0,
       2,     0,     4,     2,     4,     0,     1,     1,     0,     2,
       0,     2,     0,     3,     1,     3,     0,     3,     2,     4,
       0,     3,     1,     3,     2,     4,     2,     0,     2,     4,
       4,     0,     2,     2,     4,     4,     0,     2,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     2,     2,     1,     0,     1,     3,     1,     1,
       3,     5,     3,     3,     3,     0,     5,     1,     0,     5,
       3,     5,     6,     5,     0,     1,     1,     0,     1,     1,
       1,     2,     2,     0,     0,     1,     2,     4,     6,     6,
       6,     0,     2,     0,     1,     3,     3,     1,     8,     2,
       2,     2,     0,     6,     2,     4,     0,     2,     7,     1,
       3,     5,     1,     8,     9,    10,     9,    11,    10,    12,
      11,    13,     9,    11,    10,    12,    11,    12,     1,     3,
       1,     4,     4,     4,     6,     1,     3,     2,     3,     5,
       1,     3,     0,     2,     2,     3,     3,     1,     3,     1,
       3,     5,     1,    10,    10,    17,    12,    19,    11,     6,
       8,     6,     6,     6,     9,     6,     5,     8,     7,     9,
       8,    10,     9,     0,     1,     2,     1,    10,     6,     0,
       0,     5,     0,     4,     0,     3,     4,     2,     0,     5,
       3,     5,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       0,     7,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     0,     1,     4,     3,     1,     3,     2,     2,     2,
       1,     2,     2,     2,     1,     1,     9,     0,     2,     2,
       3,     5,     5,     7,     5,     1,     4,     4,     3,     5,
       3,     5,     0,     2,     1,     5,     7,     7,     9,    11,
       1,     2,     3,     1,     9,    11,    18,     0,     4,     3,
       5,     5,     9,    10,     7,     1,     3,     9,     9,     9,
       6,    11,     8,     0,     1,     2,     1,     3,     5,     7,
       4,     4,     5,     5,     4,     6,    11,    13,    13,    15,
       4,     6,     1,     3,     1,     3,     1,     3,     0,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     4,     3,
       3,     3,     2,     3,     4,     4,     1,     3,     0,     4,
       0,     3,     2,     3,     3,     3,     3,     5,     5,     5,
       3,     5,     2,     7,     5,     7,     5,     2,     3,     2,
       3,     2,     3,     5,     4,     5,     7,     8,     8,     7,
       6,     6,     5,     0,     3,     5,     0,     1,     0,     2,
       2,     0,     4,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     5,     2,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     5,     5,     1,     1,     1,     1,     3,     3,
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
       1,     1,     1,     1,     1,     1,     1,    13,     1,     1,
       1,     1,     1,     1,     3,     5,     4,     4,     1,     5,
       0,     2,     3,     2,     3,     2,     2,     2,     1,     2,
       1,     3,     5,     4,     4,     6,     6,     0,     2,     2,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   523,     0,   332,     0,   422,     0,
       0,   422,     0,   270,     0,   422,     0,     0,     0,   225,
     327,   339,   342,   365,   372,   377,   379,   382,   406,   445,
     449,   475,   485,   494,   500,   503,   653,   661,   819,   824,
     836,   843,   848,   860,     0,     0,     0,     0,     0,     0,
     492,     0,     0,     0,     0,     0,     0,   492,   524,     0,
       0,   492,     0,   450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   428,     0,     0,   428,     0,     0,   656,
     657,     0,     0,     0,     0,   501,     0,     1,     2,   367,
       0,     0,   850,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   525,     0,     0,
     492,   452,   336,     0,   331,   329,   330,     0,   488,     0,
     822,     0,   366,   820,     0,   844,     0,   490,     0,   340,
       0,   861,     0,   424,   425,   426,   427,   423,     0,   378,
       0,     0,     0,     0,   654,   655,     0,     4,     9,    10,
      12,    11,     8,     0,     0,     0,   281,   271,   222,     0,
     223,   224,     0,   272,   273,   274,     0,    13,   276,   278,
     277,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,   195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,   226,   279,   368,   426,   423,   285,
       0,     0,     0,   286,   288,   298,   289,   298,   502,     3,
       0,     0,   373,   374,   847,   846,     0,     0,     0,     0,
       0,     0,     0,     0,   864,     0,   863,     0,   834,   830,
     829,   833,   831,   835,   832,   825,     0,   827,     0,     0,
     493,   486,     0,     0,   670,     0,     0,     0,     0,   670,
     839,   838,     0,   487,     0,     0,     0,   850,     0,     0,
       0,     0,   334,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   429,     0,   429,   660,   659,   658,
       0,    51,     0,    32,    31,    20,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     284,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
     321,   295,     0,     0,     0,     0,   306,   305,   309,   313,
     310,     0,     0,   307,   297,     0,     0,   376,   375,     0,
       0,     0,     0,     0,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   858,   851,   381,   826,     0,     0,     0,   635,   644,
     603,   603,   603,   603,   603,   628,   603,   625,     0,   603,
     603,   603,   606,   637,   606,   636,   603,   603,   603,     0,
     606,   603,   606,   627,   634,   626,   645,   646,     0,     0,
     629,   495,     0,     0,     0,     0,     0,     0,   671,   672,
       0,     0,     0,     0,     0,   842,   840,   841,     0,     0,
       0,     0,     0,   849,   650,   454,     0,   456,   457,     0,
     337,     0,   250,     0,   229,   336,   489,   823,   821,   845,
     491,   341,   862,     0,     0,     0,   484,     0,     0,     5,
      49,    52,     0,    46,     0,     0,   214,     0,     0,     6,
       0,     0,     0,   200,   198,   199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,    21,    23,    24,    22,   220,   218,
      44,     0,    42,   186,    53,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    33,    25,    26,    28,    14,    15,
      16,    17,    18,    19,    27,    30,    29,   283,   229,     0,
     280,   370,   369,   285,     0,     0,     0,   290,     0,   326,
     294,     0,   229,   287,   307,   307,     0,   300,     0,   308,
       0,   293,   292,     0,     0,     0,     0,   392,   389,   395,
     391,   570,     0,     0,     0,     0,   393,   865,   866,   859,
     857,   853,     0,   855,     0,   856,   828,   670,   670,     0,
     632,   608,   614,   611,   608,   608,     0,   608,   608,   608,
     607,   611,   611,   608,   608,   608,     0,   611,   608,   611,
       0,     0,     0,     0,     0,     0,   674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   651,   652,     0,     0,   568,   520,   298,
     453,     0,   458,   459,   460,   461,   230,     0,   257,   229,
     333,   335,     0,   409,   431,     0,     0,   408,   409,     0,
     409,     0,    63,     0,   212,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   148,   149,
     150,   151,   152,   153,     0,     0,     0,     0,   129,     0,
       0,     0,   133,   134,   135,   137,     0,     0,   139,     0,
     142,   143,   144,     0,     0,     0,     0,     0,     0,    70,
      64,    65,    66,    67,    68,    69,   119,   120,   121,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,   175,   176,   177,     0,    45,    43,     0,
       0,   221,   219,    55,     0,     0,    40,    36,    38,     0,
     231,     0,     0,   321,   323,   323,   323,     0,     0,     0,
       0,   250,   311,   312,     0,     0,   314,     0,     0,     0,
       0,     0,   570,   570,     0,   403,   570,   398,     0,     0,
     852,   854,     0,     0,     0,   620,   630,   622,   624,   647,
       0,   623,   619,   618,   641,   640,   617,   621,   616,     0,
     638,   615,   639,     0,     0,   497,     0,   496,     0,   675,
     677,   676,     0,   673,     0,   358,     0,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,   688,     0,     0,
       0,     0,     0,     0,     0,   650,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   526,     0,     0,   455,   474,
       0,     0,   470,     0,     0,     0,     0,   451,   462,   465,
       0,     0,   867,   338,     0,     0,     0,   440,   430,     0,
       0,   409,   447,   409,   448,    50,   216,     0,   215,     0,
       0,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    74,    76,     0,
       0,     0,     0,     0,   108,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,   240,   229,
     371,   291,     0,     0,     0,     0,   296,   480,     0,     0,
     257,   303,   301,     0,     0,   299,   315,     0,     0,     0,
       0,     0,   403,   403,   570,     0,     0,   582,     0,   587,
       0,     0,     0,     0,     0,   404,   591,   572,     0,   589,
     400,   403,   390,   397,     0,     0,   604,     0,   609,   610,
       0,     0,   611,     0,   611,   611,   633,     0,     0,     0,
     682,   685,   684,   686,   683,   678,   679,   681,   687,   680,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,     0,   688,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   568,   522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   507,   568,     0,   649,   469,   467,
     468,   471,   472,   473,     0,     0,     0,   235,   235,   251,
     252,   258,     0,   328,   442,   441,     0,     0,   432,   437,
     436,     0,   434,   412,   446,   213,   217,     0,     0,   114,
     113,     0,   118,     0,     0,   201,   202,   147,   125,   126,
       0,     0,   130,   131,   132,   136,   138,   140,   181,   182,
     183,   184,     0,    71,    80,    82,    78,    84,    86,    88,
     122,     0,     0,   124,   197,   242,   242,   242,    90,     0,
       0,    98,     0,     0,   106,   242,   242,   154,     0,     0,
       0,   166,   167,     0,     0,   170,     0,   173,     0,   178,
       0,    54,    58,     0,     0,    48,     0,     0,     0,    35,
       0,     0,   250,   231,   322,     0,     0,     0,     0,     0,
       0,   867,   316,     0,   302,     0,     0,     0,   566,     0,
     394,   402,   403,   571,   405,     0,     0,     0,     0,     0,
       0,   592,   573,   574,   576,   575,   580,     0,     0,     0,
       0,   590,   588,   399,     0,     0,   688,     0,     0,   613,
     642,   648,   643,   631,     0,   498,   344,     0,   688,     0,
       0,     0,     0,     0,   359,     0,   352,     0,     0,     0,
       0,   696,   697,   698,   700,   699,   818,   703,   704,   705,
     811,   702,   701,   806,   807,   808,   809,   810,   793,   706,
     747,   738,   743,   688,   789,   779,   750,   782,   725,   732,
     729,   716,   772,   761,   688,   769,   787,   723,   724,   794,
     710,   717,   765,   781,   786,   783,   744,   722,   791,   663,
     721,   741,   734,   731,   688,   780,   770,   711,   760,   799,
     737,   751,   733,   752,   736,   775,   758,   719,   688,   708,
     792,   714,   776,   728,   755,   767,   727,   688,   756,   753,
     754,   762,   774,   764,   730,   735,   759,   748,   749,   766,
     798,   771,   740,   773,   726,   800,   757,   745,   739,   746,
     742,   785,   713,   707,   778,   784,   718,   720,   709,   790,
     768,   788,   763,   777,   715,   712,   796,   688,   797,   795,
     813,   814,   815,   816,   817,   804,   805,   801,   802,   803,
     812,   689,     0,     0,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,     0,     0,     0,     0,   504,   519,   527,   570,     0,
     464,   466,   236,   237,     0,   254,   256,     0,     0,     0,
     870,   868,   869,   410,     0,   433,     0,     0,     0,   867,
       0,     0,     0,   117,   204,   205,   206,   207,   210,   209,
     211,   203,   208,     0,     0,     0,   242,   242,   242,   242,
     242,   242,     0,     0,     0,   246,   246,   246,   242,     0,
       0,     0,   242,     0,     0,     0,   242,   246,   246,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    60,    41,
      37,    39,   235,   238,   241,   257,   240,   324,     0,     0,
       0,   481,   482,     0,   476,     0,   383,   544,     0,   542,
       0,   384,     0,   401,     0,     0,     0,     0,     0,     0,
     594,     0,     0,     0,     0,     0,     0,   688,     0,   605,
     612,     0,   688,     0,   348,   361,   362,   363,     0,     0,
       0,     0,   345,   662,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,     0,     0,     0,     0,   507,     0,
       0,     0,     0,   534,     0,     0,     0,   531,     0,   530,
       0,   540,     0,     0,     0,     0,   569,   463,   235,   253,
     260,   259,     0,     0,   444,   443,   439,   438,     0,   414,
     407,     7,   115,   112,   127,   128,   185,   246,   246,   246,
     246,   246,   246,   187,     0,   123,     0,     0,     0,     0,
       0,   246,    92,     0,     0,   246,   100,     0,     0,   246,
       0,     0,   163,   164,   165,   168,   169,     0,   174,   179,
     233,     0,     0,   232,   261,   250,   320,     0,   319,   318,
       0,   317,     0,     0,     0,   388,     0,   567,   584,     0,
     602,   586,     0,     0,     0,   595,   593,   577,   578,   579,
     581,     0,   688,     0,   665,   499,     0,   667,     0,   356,
     353,     0,   690,     0,     0,     0,     0,     0,   688,   350,
       0,     0,     0,   347,     0,   505,   521,     0,     0,     0,
       0,     0,   532,   533,   269,   528,   509,     0,     0,     0,
       0,   255,   871,     0,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   243,     0,    73,    75,
      77,     0,   242,     0,     0,     0,   242,     0,     0,     0,
     109,   111,     0,   239,   235,     0,   266,   257,   325,   483,
     386,     0,   545,   543,     0,   600,   601,     0,     0,     0,
     688,     0,   664,   666,   364,   349,   695,   694,   691,   693,
     692,     0,   357,   355,     0,     0,   535,     0,     0,   541,
       0,   508,     0,     0,     0,     0,     0,     0,     0,   435,
       0,     0,   413,    81,    83,    79,    85,    87,    89,   188,
       0,   235,   247,    91,   246,    94,    96,    99,   246,   102,
     104,   107,   171,   234,   263,   262,     0,   227,   228,     0,
     583,   585,   599,   596,     0,   669,   837,   351,     0,     0,
     529,     0,   510,   511,     0,     0,     0,   420,     0,   415,
       0,   417,   418,   245,   248,     0,     0,   242,   242,     0,
     242,   242,     0,     0,   267,     0,   597,   598,   668,     0,
       0,     0,     0,     0,     0,     0,     0,   416,     0,   235,
      93,   246,   246,   101,   246,   246,   265,   264,   546,     0,
       0,     0,     0,     0,     0,     0,   514,   421,     0,   249,
       0,     0,     0,     0,   548,     0,     0,     0,     0,     0,
     548,     0,     0,   419,    95,    97,   103,   105,   385,   547,
       0,     0,     0,     0,   536,     0,     0,   515,   512,     0,
     562,     0,     0,   506,     0,   548,   548,     0,     0,   513,
       0,   563,   387,     0,   559,   561,   560,     0,     0,     0,
     538,   537,     0,   516,   564,   565,   549,   557,   551,     0,
     553,   558,   555,     0,   548,     0,   552,   550,   556,   554,
     539,     0,     0,     0,     0,     0,     0,     0,   517,   518
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   610,   979,  1174,  1175,  1173,   611,   612,   969,
    1169,   970,  1170,   621,  1355,  1356,  1357,  1658,  1656,  1657,
    1659,  1660,  1661,  1668,  1922,  2037,  2038,  1672,  1926,  2040,
    2041,  1676,  1365,  1366,   627,  1117,   358,    18,    19,   592,
    1178,  1693,  1625,  1833,  1392,  1665,  1916,  1808,  1992,   858,
    1299,  1300,  1092,  1936,  2007,  1611,    81,   264,   265,   474,
     272,   273,   274,   275,   758,   495,   276,   492,   770,   493,
     766,  1195,  1196,   757,  1183,  1698,   277,    20,    64,   117,
     332,    21,    22,  1050,  1051,    23,    24,   752,    89,    25,
      26,    27,  1220,    28,  1097,  1783,  1639,  1907,  1982,  2058,
    1904,    73,   138,   605,   865,  1101,  1637,  1311,   863,    29,
      30,   111,   330,   586,   589,   855,  1087,  1088,  1089,    31,
      84,   762,    32,    97,    33,    34,    35,  1615,  2106,  2107,
      62,  1074,  1075,  1710,  1708,  2069,  2098,  1409,  1076,  1005,
     800,   811,  1015,  1016,   561,  1020,   848,   849,    36,    79,
      80,    37,   567,   568,   569,  1250,  1264,  1591,    38,    39,
     306,   307,    40,   322,   578,    41,    42,   296,   522,    43,
    1303,  1632
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1597
static const yytype_int16 yypact[] =
{
   10766,   -70,   -62,   257, 10711,   274, -1597,   501, -1597,   105,
     109, -1597,    22, -1597,   205,    38,    83,   517,    82, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597,   448,   555,   569,   637,   191,   482,
     512,   708,   577,   726,   189,   735,   771,   512, -1597,   515,
     601,   512,   523, -1597,   433,    65,   327,   788,   409,   425,
     432,   434,   437,   744,   798,   802,   744,   454,    90,   444,
   -1597,  6211,   809,   582,    39, -1597,   820, -1597, 10766,   445,
     334,   698,   -19,   478,    31,   -37,   584,   839,   804,   864,
     530,   710,   479,   638,   540,   492,   902, -1597,   436,   943,
     512,   562,   590,   967, -1597, -1597, -1597,   -96, -1597,   696,
   -1597,   736, -1597, -1597,   758, -1597,   773, -1597,   783, -1597,
     806, -1597,   822, -1597, -1597, -1597, -1597, -1597,  1008, -1597,
     880,  1108,  9731,  9731, -1597, -1597,  1110,  -260, -1597, -1597,
   -1597, -1597,  1120,  9731,  9731,  9731, -1597, -1597, -1597,  7267,
   -1597, -1597,   761, -1597, -1597, -1597,   784, -1597, -1597, -1597,
   -1597, -1597,   792,   818,   842,   884,   894,   915,   917,   925,
     933,   935,   937,   958,   973,   977,   981,   990,   994,   998,
    1014,  1015,  1017,  1018,  1019,  1020,  1023,  1024,  1029,  1035,
    1036,  1038,  1042,  1043,  1046,  1052,  1066,  1068,  1069,  1070,
    1071,  1076,  1080,  1081,  1082,  1083,  1086,  1091,  1092,  1094,
    1099,  1104,  1106,  1109,  1115,  1116,  1117, -1597, -1597,  1118,
    1122,  1125,  1132,  1139,  1140,  1141,  1143,  1145,  1147,  1148,
    1149,  1150,  1151,  1152,  1153,  1154,  1156,  1165,  1168,  1169,
    1170,  1171,  1173,  1177,  1179,  1181,  1189,  1190,  1191,  1193,
    1195,  1196,  9731, 11270,  -102, -1597,   904,    48,    49,    47,
    1197,    14,  -173,  1101, -1597,  1344, -1597,  1344, -1597, -1597,
    1389,  1417, -1597, -1597, -1597, -1597,    96,   457,  1418,   732,
    1496,   458,   794,  1500,  1308,  1339,    59,  1563, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597,   266, -1597,  1564,  1565,
   -1597, -1597, 10923,  1386,    37,  1568,  1392,  1316,  1574,    37,
   -1597, -1597,   404, -1597,  1395,   498,  1320, -1597,  1581,  1582,
      46,  1561, -1597,   493,  -136,    39,  1585,  1586,  1589,  1594,
    1595,  1596,  1605,  1632,   273,  1633,   317, 11394, 11394, -1597,
    1634,  9731,  9731,  1200,  1200, -1597,  9731,  1706,   460,  1635,
    1637, -1597,  9731,  6563,  9731,  9731,  9731,  9731,  9731,  9731,
    9731,  9731,  9731,  1277,  9731,  9731,  9731,  9731,  9731,  9731,
    9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  1291,
    9731,  9731,  9731,  1307,  9731,  9731,  9731,  9731,  9731,  9731,
    7619,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,
    9731,  1332,  1333,  1334,  1335,  1336,  9731,  9731,  1343,  1346,
    1347,  9731,  9731,  1665,  1348,  1349,  9731,  9731,  9731,  9731,
    9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,
    9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  1350,  2361,
   -1597,  9731,  9731,  9731,  9731,  9731,    41,  1345,   739,  9731,
    6915,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,  9731,
    9731,  9731,  9731,  1710, -1597,    39,  1711,  9731,  1712,  1736,
     -58, -1597,  1388,   332,  1745,    39, -1597, -1597, -1597,   391,
   -1597,    39,  1597,  1576, -1597,  1753,  1757, -1597, -1597,  1763,
    1764,  1765,  1766,  1767, -1597,  1768,  1772,  1773, 10923,  1774,
    1552,  1778,  1779,  1781,  1780,  1783,  1429,  1788,     9,   500,
    1791, -1597, -1597, -1597, -1597,   561,  1433,  1439, -1597, -1597,
    1440,  1440,  1440,  1440,  1440, -1597,  1440, -1597,  1443,  1440,
    1440,  1440,  1752, -1597,  1752, -1597,  1440,  1440,  1440,  1448,
    1752,  1440,  1752, -1597, -1597, -1597, -1597, -1597,  1449,  1461,
   -1597,   632,  1820, 10923,  1821,  1823,  1824,  1466,  1468, -1597,
     -82,  1826,  1829,  1650,  1472, -1597, -1597, -1597,  1655,  1836,
    1657,  1584,  1838,    59,   321, -1597,   400, -1597, -1597,    52,
   -1597,  9731,  1666,    39,    91,   590, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597,  1846,  1849,   -68, -1597,  1846,   375, -1597,
    1136, -1597,  1495, 11394, 10764,   570, -1597,  9731,  9731, -1597,
    1497,  1640,    93, -1597, -1597, -1597,  2689,  7971,  1162,  1186,
    1591,  3017,  3345,  3673,  4001,  4329,  4657, -1597,  1636,  1661,
    1990,  2316,  4985,  2644,  2972,  3300,  5313,  5641,  7695,   118,
    3628,  7722,  3956, -1597,  7795,  7819,  7842, -1597, 11318,  4284,
    4612,  4940,  5268,  2033,  1502,  7990,  8048,  8082,  8105,  8148,
    8187,  8343,  8411,  5596,  5924,  5969, -1597, -1597, -1597, -1597,
   -1597,  8450,  6315,  1538,  1543,  1544,   227,   589,  1512,  1546,
    1547,  6373,  8493,  8516,  8540,  8696,  8739,  8771,  8795,  8861,
    6421,  6579,  6627,  6661,  6684,  6733,  6781,  6945,   643,  8885,
    9049,  9099,  6987, -1597, -1597,  7488,  7051,  7007,  7752,  7752,
   -1597,    54, -1597, -1597,  1656,  9731,  9731,  1519,  9731, 11344,
    1522,  1529,  1536,  9731,  1394,  1602,  1789,  1920,   913,   913,
     729,   729,   729,   729,   772, -1597, -1597, -1597,    91,  1770,
   -1597, -1597,  1540,   157,  1743,  1749,  1750, -1597,  1640, -1597,
   -1597,    34,   196,  1101,  1576,  1576,  1746,  1724,    39, -1597,
    1754, -1597, -1597,   364, 10923, 10923,  1905, -1597, -1597, -1597,
   -1597, -1597, 10923,  1907,  1685,  1686, -1597, -1597, -1597, -1597,
   -1597, -1597,  1909, -1597,  1917, -1597, -1597,    37,    37,  1918,
   -1597, -1597, -1597, -1597, -1597, -1597,  1922, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597,  1922, -1597, -1597, -1597,
    1923,  1924,  1748,  1570,  9731,  1578, -1597, 10923, 10923, 10923,
    1738,    37,  1687,   123,   165,  1782,  1950,   125,  1952,   187,
    1953,  1958,  1785, -1597, -1597,  1876,  1960,   394, -1597,  1344,
   -1597,  1961, -1597, -1597, -1597,   456, 11394,  1911,  1807,    91,
   -1597, -1597,  1954,  -141, -1597,   459,  1612, -1597,  -141,  1612,
    1792,  9731, -1597,  9731, -1597,  9731, 11171, 10865,  1898,  1620,
    9731,  9731, -1597,  9731, 11097,  1831,  1831,  9731, -1597, -1597,
   -1597, -1597, -1597, -1597,  9731,  9731,  9731,  9731, -1597,  9731,
    9731,  9731, -1597, -1597, -1597, -1597,  9731,  9731, -1597,  9731,
   -1597, -1597, -1597, 10923, 10923,  9731,  9731,  9731,  1981, -1597,
    1660,  1667,  1669,  1678,  1694,  1696, -1597, -1597, -1597,  9731,
    9731,  9731, -1597,  9731,  1625,  1668,  1670,  1697,  1989,  1698,
    2023,  1701,  1671,  1672,  9731, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597,  9731,  9731,  9731,  9731,  9731,  9731,  9731,
    9731, -1597,  9731, -1597, -1597, -1597,  9731, -1597, -1597,  9731,
    1640,  7752,  7752,  1812, 11369,  9731, -1597, -1597, -1597,  1640,
    1862,    39,  2032,   -58,  1904,  1904,  1904,  1675,  9731,  2047,
    2063,  1666, -1597, -1597,    39,  9731,   -94,    39,  1713,  1928,
    1930,  1715, -1597, -1597, 10923,   407, -1597, -1597,  2064,  2075,
   -1597, -1597,  1717,  1718,   468,   451,   766,   451,   451, -1597,
     497,   451,   451,   451,   766,   766,   451,   451,   451,   499,
     766,   451,   766,  1725,  1726,  2024,  9731, 11394,   123, -1597,
   -1597, -1597,   579, -1597,  1734, -1597,  1742,  1744,  1751,  1760,
     521, -1597,  1856,   123,  2103,   226,  2057, -1597,  1978,  1865,
     123,   270,  1931,  2112,  2119,    66,  2121,  1771,  1972,   551,
    1775,  1776,  1973,  1777,   524, -1597,  2137,  1640, -1597, -1597,
    2138,     1,  2135,  2139,  2140,  1784,   614, -1597,  1786, -1597,
     742,  9731,  1948, -1597,  8323,  1991,  2145, -1597, -1597,  2147,
    8675,  -139, -1597,  -139, -1597, -1597, 11394, 11208, -1597,  9731,
    1790, -1597,  7637,   757,  9124,  9731,  9731,  1793,  1794,  9148,
    9189,  9214,  7030,  7087,  9238,  9402,  9477,  9501,  9559,  9583,
    1795,  1797,  9606,  9747,  7111,  1798,  1800,  1801,  1805,  1806,
    1808,  1811,   906,  7135,  9795,  9822, -1597, -1597, -1597,  1816,
     526,  1817,   534,  1819, -1597, -1597,  9846,  7291,  7341,  7376,
    9904,  9928,  7399,  7441,   953,  1026,  1049,  1825,  1828,  9731,
    1640,  9731,  1301,  1640,  1640,  1640,  1830,  2097,  2014,    91,
   -1597, -1597,  2013,  1834,  1839,  1840, -1597, 11394,  2165,    64,
    1807, -1597, 11394,  9731,  1841, -1597, -1597,   -94,  9731,  1842,
    1843,  2203,   407,   407, -1597,  2029,  2208,  1857,  1863,  1864,
    2182,  2224,  1868,  2227,    92, -1597, -1597, -1597,  2077,  2078,
   -1597,   407, -1597, -1597,  2036,   656, -1597,  2231, -1597, -1597,
    2016,  2234, -1597,  2235, -1597, -1597, -1597,  1879,  9951,   549,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
     673,   123,  2239,  2247,  2248,  2251, -1597,  2252,  1895,   586,
    1896,  2011,   123, -1597,  1340,  2153,  1906,   591,  2017,   123,
    2269,   281,  2141,   394, -1597,   388,  9731,  1913,  1914,  1915,
    2274,  2274,  1919,  2203,    42,   394, 10923, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597,   614,   596,   614,   -17,   435,  1916,
   -1597,  1112,   152, -1597, -1597, 11394,  2039,  2261, -1597, -1597,
   11394,   624, -1597,  2099, -1597, -1597, 11394,  2279,  9731, -1597,
   -1597,  9731, -1597, 10092, 10733, -1597, -1597, -1597, -1597, -1597,
    9731,  9731, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597,  9731, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597,  9731,  9731, -1597, -1597,  1959,  1959,  1959, -1597,  1955,
     850, -1597,  1962,   984, -1597,  1959,  1959, -1597,  9731,  9731,
    9731, -1597, -1597,  9731,  9731, -1597,  9731, -1597,  9731, -1597,
    9731, -1597, -1597,  1926,  1932,  1301,  1934,  1938,  1939, -1597,
    9731,  9731,  1666,  1862, -1597,  2287,  2287,  2287,  9731,  9731,
    2289,  1948, 11394,  2274, -1597, 10115,  2290,  2299, -1597,   628,
   -1597, -1597,   407, -1597, -1597,  2298,  9731,  2300,  2266,    -7,
    9731, -1597, -1597, -1597, -1597, -1597, -1597,  1949,  1951,  1956,
    9731, -1597, -1597, -1597,   579,  2262, -1597,  1987,  2309, -1597,
     766, -1597,   766,   766,  9731, -1597, -1597,  2270, -1597,   636,
    1988,  1992,  1993,  1994, -1597,   123, -1597,   123,  1963,   641,
    1737, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597,  2120,   123, -1597,  1995,   652,  1997,  2104,   123,
    2100,   654,  1998,  2204,  2205,  2001, 10140,  2290,  2274,  2274,
   -1597,   658,   660,  2299,   662,   -22, -1597, -1597, -1597,   664,
   -1597, -1597, -1597, -1597,  2360, -1597, -1597,   742,  9731,  9731,
   -1597, -1597,  2002, -1597,  9027, -1597,  9379,  2003,  2314,  1948,
    2040, 10167, 10191, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, 10214, 10249, 10273,  1959,  1959,  1959,  1959,
    1959,  1959,  1073, 10296,  2323,  2220,  2220,  2220,  1959,  2045,
    2046,  2050,  1959,  2053,  2054,  2060,  1959,  2220,  2220, 10319,
   10342, 10365, 10388, 10411,  7465, 10437, 10460, -1597, -1597, -1597,
   -1597, -1597, 11231,  -181, 11394,  1807,  2014, -1597,   667,   669,
     745, 11394, 11394,  2387, -1597,   747,  2397, -1597,   751, -1597,
     753, -1597,  2420, -1597,   808, 10485,   871,  2070,  2071,  2277,
   -1597, 10512,  2072,  2076,  2079, 10536,   675, -1597,  2065, -1597,
   -1597, 10559, -1597,  2393, -1597, -1597, -1597, -1597,  2434,   873,
     876,   123, -1597, -1597,  2721,  3049,  3377,  3705,  4033,  4361,
    2388,   879,   123, -1597,   123,  2081,   881,  2315,    42,  9731,
    2088,  2089,  2203, -1597,   885,   889,   891, -1597,  2449, -1597,
     895, -1597,   510,  2453,  2402,  2405, 10864, -1597,   435, -1597,
   11394, 11394,  2461,  2462, -1597, 11394, -1597, 11394,  8675,  2105,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597,  2220,  2220,  2220,
    2220,  2220,  2220, -1597,  9731, -1597,  2465,  2414,  2108,  2109,
    2110,  2220, -1597,  2144,  2146,  2220, -1597,  2148,  2149,  2220,
    2114,  2117, -1597, -1597, -1597, -1597, -1597,  9731, -1597, -1597,
   -1597,  2280,  9731, -1597,  2342,  1666, -1597,  2479, -1597, -1597,
    9731, -1597,  2236,  2291,  2480, -1597,  2484, -1597, -1597,  2483,
    1210, -1597,  2485,  9731,  9731, -1597, -1597, -1597, -1597, -1597,
   -1597,  2437, -1597,  4689, -1597, -1597,  5017, -1597,  2132, -1597,
   -1597,   900, -1597,  2426,  2373,  2349,  2347,  2245, -1597, -1597,
     903,   910,   123, -1597,  2152,   -22, -1597, 10594,  2290,  2299,
     912,  2313, -1597, -1597, -1597, -1597, -1597,  2503,   -33,   -95,
    2325, -1597, -1597,  2498,  2157,   918,  2520,  2435,  2167,  2168,
    2169,  2170,  2172,  2174, 10618, -1597,  2176,  2543, -1597, -1597,
   -1597,  2190,  1959,  2192,  2193,  2195,  1959,  2194,  2198,  2199,
   -1597, -1597, 10641, -1597, 11231,   -53,  2411,  1807, -1597, 11394,
   -1597,  2560, -1597, -1597,  2202, -1597, -1597,  2206, 10664, 10687,
   -1597,  5345, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597,  5673, -1597, -1597,   920,  2561, -1597,   922,   928, -1597,
    2562, -1597,  2564,  2567,  2217,  2218,  2221,  9731,  2580, -1597,
     938,   180, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
    2581,   435,  2222, -1597,  2220, -1597, -1597, -1597,  2220, -1597,
   -1597, -1597, -1597, -1597,  2375,  2379,  2274, -1597, -1597,  2232,
   -1597, -1597,  1254, -1597,  6001, -1597, -1597, -1597,  2233,  2407,
   -1597,   945, -1597, -1597,  2598,  2599,  2600, 11394,  2584, -1597,
    2602, -1597, -1597, -1597, -1597,  2603,  2246,  1959,  1959,  2249,
    1959,  1959,  2441,  2443,  2253,  2607, -1597, -1597, -1597,  2386,
    2614,  2615,  2607,  2257,  2258,  2259,  9731, -1597,  2401,   435,
   -1597,  2220,  2220, -1597,  2220,  2220, -1597, -1597, -1597,   949,
    2263,   947,  2267,   951,  2268,  2421, -1597, 11394,  2462, -1597,
    2271,  2275,  2276,  2278, -1597,  2627,  2636,  2639,  2607,  2607,
   -1597,  2436,  2645,  2157, -1597, -1597, -1597, -1597,   455, -1597,
    2318,  2317,   974,   978,   507,  2648,   991, -1597, -1597,   -32,
    2509,   333,   441, -1597,  2607, -1597, -1597,  2572,  2430, -1597,
    2436, -1597, -1597,   381, -1597, -1597, -1597,    13,   505,   999,
     507,   507,  2517, -1597, -1597, -1597, -1597, -1597, -1597,   -14,
   -1597, -1597, -1597,   -13, -1597,  2451, -1597, -1597, -1597, -1597,
     507,    29,  2500,  2501,  2508,  2510,  2681,  2683, -1597, -1597
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1597,  2601,   -81, -1597, -1597, -1597, -1597,  -802, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1597, -1597, -1597,  1804,  2334, -1597,  -213,  -586,
    1299, -1597, -1295, -1597,   997, -1172, -1597, -1596, -1597,  -989,
   -1597,  1079, -1186, -1597, -1597, -1276, -1597, -1597,  2255,  -258,
    -259,  2237,  -476, -1597, -1597,  -271, -1597, -1597,   605, -1597,
   -1597, -1597,  1533,  1759,   386,   -23, -1597, -1597, -1597,  2621,
    2155, -1597, -1597, -1037, -1597, -1597, -1597, -1597, -1597, -1597,
   -1597, -1597, -1138, -1597,  -825, -1597, -1597, -1597, -1597, -1597,
     657,   721,  2660,  2394, -1597,  1874, -1597,   956,  2154, -1597,
   -1597, -1597, -1597, -1597, -1597, -1597, -1597,  -917,  1455, -1597,
   -1597, -1597, -1597,   513, -1597, -1597, -1597,  1001, -1597,   640,
   -1597,  1489,  1480, -1558, -1576, -1256, -1584, -1263, -1597,  -993,
     461,   169,    95,  -790,  -406,  1964, -1058, -1597, -1597, -1597,
    2620, -1597,  -300, -1597,  1937,  1337, -1035, -1597, -1597, -1597,
   -1597,  2244, -1597, -1597, -1597, -1597, -1597,  2450, -1597, -1597,
   -1376, -1597
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -651
static const yytype_int16 yytable[] =
{
     263,  1239,  1190,  1626,  1401,  1612,   496,  1274,   860,  1202,
    1203,   480,   483,  1221,   791,   767,  1259,   269,  1772,   574,
    1614,  1024,  1025,  1267,  1622,  1704,   475,  1030,   294,  1032,
      77,  1764,   335,  2152,   298,   299,   300,   301,   302,   303,
     563,  -477,   269,  1102,  1095,  1104,  1095,   720,   484,   476,
     450,  -479,  -478,   564,   988,  1770,   852,  2121,   482,   721,
     967,   347,   348,  1718,  1410,  1411,  1972,   754,   118,  1105,
    1809,  1810,   353,   354,   355,  1831,   594,   516,   357,  2136,
    1289,  1820,  1821,  1433,  1399,  -650,    85,  1623,   755,  1193,
     473,  2146,  2148,   144,   308,  1974,  1422,  1423,  1424,  1425,
     350,   351,   781,   451,   452,   453,   454,   455,   456,   457,
     593,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,  1045,  1705,   451,   452,
     453,   454,   455,   456,   457,    44,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   309,  1194,  1975,    13,  1630,  1426,   826,  2004,   499,
     450,  1773,   980,    45,   832,  2147,  2149,  1167,  1056,  1295,
      86,    47,   500,   270,   587,   295,   991,  1057,  1631,   565,
    1719,   449,  1832,   866,  1666,  1667,  2005,  1774,   843,   756,
     485,  2137,   101,  1677,  1678,   145,  1973,  -477,   270,  2153,
     473,  1908,  1909,  1910,  1911,  1912,  1913,  -479,  -478,  2138,
     304,  1412,   843,   119,  1449,  1921,   748,  2122,   566,  1925,
     722,   880,  1096,  1929,  1312,  1459,  1616,   336,  1460,   517,
      78,  1290,  1596,   968,  2139,  1720,    13,   451,   452,   453,
     454,   455,   456,   457,   844,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
      48,   477,  2031,  1790,  -650,   792,   102,   336,   844,   853,
     854,   613,   588,  1093,  1713,   614,  1313,    63,  1314,   833,
      46,   622,   626,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   996,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,  1775,   654,
     655,   656,  1967,   658,   659,   660,   661,   662,   663,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     120,  1968,  1765,  1766,   859,   681,   682,   103,    74,   723,
     686,   687,    75,  1624,   591,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,  1383,  1002,  1003,
     715,   716,   717,   718,   719,   271,  1006,  1619,   729,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   867,   305,   989,   870,   263,  1830,  2036,  -477,
     271,  1728,  2039,  1695,  1427,  1428,  1429,   479,   879,  -479,
    -478,  1052,   123,  1733,   518,   519,   520,   521,  1739,  2032,
    1740,  1039,  1040,  1041,  1400,  1205,   284,  1273,   125,  1046,
    1047,  1048,  1049,  1059,   998,   127,   112,   129,    82,   324,
     131,    88,  1440,  1206,  1442,  1443,   285,  1207,  1744,   591,
    1208,    90,  1209,  1430,   485,  1210,   881,  1066,  1602,  1745,
     501,   508,  2124,   142,  1067,  2080,  2081,   843,  2082,  2083,
    1211,  2134,  1261,  2109,   143,   121,  1622,  1212,  1213,  1746,
     905,   906,   316,  1901,  1797,  1798,  1799,  1800,  1801,  1802,
     999,   280,   281,  1747,   603,   983,  1811,  1012,  1013,  1890,
    1815,   580,  1748,   575,  1819,   793,  2104,  1130,  1131,  1834,
     856,   282,  1214,   325,  1603,  1896,  1268,    87,  1191,  2125,
    1068,  1197,  2135,   844,  1069,  2117,  1053,  1598,   320,  1215,
    1897,  2130,  2131,   502,   509,  1079,   876,   877,   607,  1623,
    2127,  1070,  1749,   321,  2110,   987,   884,  1080,  1060,  2126,
    1071,  1000,    94,   576,   764,   794,  1751,   124,    91,   990,
    2150,   113,  1756,  1216,   298,   299,   300,   301,   302,   303,
     106,  2140,    92,   126,   109,  1604,   616,   617,  1077,   114,
     128,  1072,   130,  1081,   326,   132,  1217,  1262,    65,   937,
     938,  1082,   765,  1393,  1218,   115,  2110,    13,  1204,   451,
     452,   453,   454,   455,   456,   457,  1001,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   116,   328,  2111,  1776,   869,   317,   524,   525,
    1605,  1269,    66,  1240,   604,  1083,  1073,  1241,  2112,  2003,
      93,   283,  1599,   577,   971,   972,   581,   974,    67,  1219,
     822,   845,   449,   451,   452,   453,   454,   455,   456,   457,
      96,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,  2111,   133,   604,  1084,
    2128,   846,   847,  2141,    95,  1242,   874,   875,  1243,    68,
    2112,  1228,  1863,  1079,   760,   485,  2034,  1866,  1278,  1435,
    1886,  2142,   823,  1244,  1871,  1080,    69,  1279,  1436,    70,
    1229,    98,  1085,   812,   618,  1880,  1447,  1881,  1861,   817,
     134,   819,  1179,  1245,    99,  1448,  2143,  1862,   267,   100,
    2044,  1246,    76,   286,    71,   504,    83,   824,   104,  -336,
     304,  1081,   107,  1037,   268,  1297,   591,  1298,   108,  1082,
    1994,  2008,   725,   726,  1998,   727,   110,  1168,   728,   470,
     471,   472,   850,   851,  2079,   287,  1176,   451,   452,   453,
     454,   455,   456,   457,   105,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     288,   122,  1106,  1083,  1107,   505,  2073,   510,   289,  1112,
    1113,   139,  1114,   471,   472,   140,  1119,   146,   506,  1247,
     290,  1248,   266,  1120,  1121,  1122,  1123,  1086,  1124,  1125,
    1126,  1098,  1099,   278,   618,  1127,  1128,  1951,  1129,  1249,
    1226,  1227,  2102,  2103,  1132,  1133,  1134,  1084,   297,   133,
    1230,  1231,   311,  1961,   310,  1964,  1937,   312,  1142,  1143,
    1144,    72,  1145,   331,  1670,  1671,  -336,   511,  2129,  1232,
    1233,  1234,  1233,  1156,  1287,  2061,  2062,   313,  2064,  2065,
     512,   291,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1618,  1165,   134,  1256,  1257,  1166,  1284,  1285,  1359,  1360,
     135,   314,   292,   315,  1172,   136,  1362,  1363,   318,  1017,
    1018,   319,  1021,  1022,  1023,   323,   137,  1187,  1026,  1027,
    1028,  1446,  1257,  1031,  1192,  2014,   451,   452,   453,   454,
     455,   456,   457,   329,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   466,
     467,   468,   469,   470,   471,   472,   327,   293,  1456,  1257,
     331,   939,   940,  1594,  1257,  1238,   337,  1384,  1620,  1296,
    1386,  1387,  1388,   451,   452,   453,   454,   455,   456,   457,
     333,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,  1635,  1636,  1674,  1675,
    1711,  1712,   801,   802,   803,   804,   338,   805,  1734,  1257,
     807,   808,   809,  1742,  1257,   961,   962,   813,   814,   815,
    1301,   344,   818,  1305,  1753,  1257,  1758,  1285,   339,  1310,
    1767,  1768,  1769,  1768,  1771,  1712,  1777,  1296,  1316,  1836,
    1837,  1838,  1837,   340,  1323,  1324,   451,   452,   453,   454,
     455,   456,   457,   341,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   451,
     452,   453,   454,   455,   456,   457,   342,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   343,   451,   452,   453,   454,   455,   456,   457,
    1385,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   345,  1839,  1837,  1841,
    1768,   346,  1402,  1843,  1844,  1845,  1846,  1405,    77,  1320,
    1321,   359,   451,   452,   453,   454,   455,   456,   457,   352,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   360,   451,   452,   453,   454,
     455,   456,   457,   361,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   486,
    1848,  1849,   451,   452,   453,   454,   455,   456,   457,   362,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,  1606,   451,   452,   453,   454,
     455,   456,   457,   363,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,  1851,  1852,  1869,  1257,  1641,  1870,  1257,
    1642,  1879,  1257,  1883,  1257,   364,   487,  1891,  1844,  1653,
    1654,  1892,  1768,  1893,  1768,   365,  -304,  1895,  1846,  1945,
    1946,  1655,  1955,  1257,   488,  1962,  1257,   478,  1350,  1351,
    1662,  1663,  1963,  1257,  1969,  1712,   366,   489,   367,  1628,
    1979,  1636,  2017,  1257,  2019,  1844,   368,  1679,  1680,  1681,
    2020,  1846,  1682,  1683,   369,  1684,   370,  1685,   371,  1686,
    2029,  2030,   490,  2046,  2047,  2051,  2052,  2087,  2088,  1692,
    1694,  2084,  2085,  2090,  2085,  1375,  1376,  1701,  1702,   372,
     491,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   373,  1715,  2115,  2085,   374,  1721,
    2116,  2085,   375,  1461,  1462,  1463,  1464,  1465,  1466,  1725,
    1467,   376,  1468,  2119,  2120,   377,  1469,  1470,  1471,   378,
    1472,  2144,  2085,  1731,  1473,  1474,  1475,  1476,  1477,   992,
     993,  1184,  1185,  1699,  1700,   379,   380,  1478,   381,   382,
     383,   384,  1479,  1480,   385,   386,  1481,   494,  1377,  1378,
     387,  1482,  1483,  1484,  1485,  1486,   388,   389,  1487,   390,
    1488,  1489,  1490,   391,   392,  1491,  1492,   393,  1493,  1494,
    1495,  1379,  1380,   394,  1496,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   395,  1497,   396,
     397,   398,   399,  1498,   497,  1803,  1804,   400,  1499,  1500,
    1501,   401,   402,   403,   404,  1502,  1503,   405,  1504,  1505,
    1506,  1507,   406,   407,  1508,   408,  1509,  1510,  1511,  1512,
     409,  1513,   498,  1514,  1515,   410,  1516,   411,  1517,  1518,
     412,  1519,  1520,  1521,  1522,  1629,   413,   414,   415,   416,
    1523,   503,  1524,   417,  1525,  1526,   418,  1527,  1528,  1529,
    1530,  1531,  1532,   419,  1533,  1534,  1535,  1536,  1537,   871,
     420,   421,   422,  1538,   423,  1539,   424,  1540,   425,   426,
     427,   428,   429,   430,   431,   432,  1541,   433,  1542,  1543,
    1544,  1545,  1546,  1547,  1548,   885,   434,  1549,  1550,   435,
     436,   437,   438,  1551,   439,  1552,  1553,  1554,   440,  1555,
     441,  1556,   442,  1557,  1558,  1559,  1560,  1780,  1781,   886,
     443,   444,   445,  1785,   446,  1787,   447,   448,   481,   507,
    1561,  1562,  1563,   513,   514,   515,   523,   526,   527,   562,
    1564,   570,  1565,  1566,  1567,   571,   572,   573,   579,  1568,
     582,  1569,  1570,  1571,   584,   585,  1572,   590,   595,   596,
    1573,  1574,   597,  1575,  1576,  1577,  1578,   598,   599,   600,
    1579,   451,   452,   453,   454,   455,   456,   457,   601,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   602,   606,   609,   619,   637,
     620,  1580,  1581,  1582,  1583,  1584,   451,   452,   453,   454,
     455,   456,   457,   653,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   657,
     688,   451,   452,   453,   454,   455,   456,   457,  1887,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   676,   677,   678,   679,   680,  1585,
    1586,  1587,  1588,  1589,  1590,   683,   724,  1310,   684,   685,
     689,   690,   713,   747,   749,   751,   451,   452,   453,   454,
     455,   456,   457,  1914,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   753,
    1461,  1462,  1463,  1464,  1465,  1466,  1932,  1467,   761,  1468,
     759,  1934,   768,  1469,  1470,  1471,   771,  1472,   769,  1939,
     772,  1473,  1474,  1475,  1476,  1477,   773,   774,   775,   776,
     777,   778,  1948,  1949,  1478,   779,   780,   782,   783,  1479,
    1480,   784,   785,  1481,   786,   787,   788,   789,  1482,  1483,
    1484,  1485,  1486,   790,   797,  1487,   795,  1488,  1489,  1490,
     798,   799,  1491,  1492,   806,  1493,  1494,  1495,   810,   816,
     820,  1496,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   821,   825,   827,  1497,   828,   829,   830,   834,
    1498,   831,   835,   836,   837,  1499,  1500,  1501,   838,   839,
     840,   842,  1502,  1503,   841,  1504,  1505,  1506,  1507,   862,
     857,  1508,   864,  1743,  1510,  1511,  1512,   872,  1513,   878,
    1514,  1515,    13,  1516,   920,  1517,  1518,   934,  1519,  1520,
    1521,  1522,   935,   936,   941,   942,   943,  1523,   -57,  1524,
     973,  1525,  1526,   976,  1527,  1528,  1529,  1530,  1531,  1532,
     977,  1533,  1534,  1535,  1536,  1537,  2027,   978,   981,   984,
    1538,   994,  1539,   982,  1540,   985,   986,   995,  1004,   997,
    1007,  1008,  1009,  1541,  1010,  1542,  1543,  1544,  1545,  1546,
    1547,  1548,  1011,  1014,  1549,  1550,  1019,  1035,  1033,  1034,
    1551,  1036,  1552,  1553,  1554,  1044,  1555,  1042,  1556,  1038,
    1557,  1558,  1559,  1560,   464,   465,   466,   467,   468,   469,
     470,   471,   472,  1055,   887,  1058,  1061,  1561,  1562,  1563,
     356,  1062,  1064,  1065,  1078,  1054,  1090,  1564,  1063,  1565,
    1566,  1567,  1091,  1100,  1094,  2077,  1568,  1095,  1569,  1570,
    1571,  1110,  1111,  1572,  1116,  1135,  1146,  1573,  1574,  1136,
    1575,  1576,  1577,  1578,  1150,  1177,  1137,  1579,  1138,   894,
     451,   452,   453,   454,   455,   456,   457,  1139,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,  1140,   895,  1141,  1149,  1151,  1152,  1147,
    1153,  1148,  1154,  1155,   -59,  1180,  1182,  1186,  1580,  1581,
    1582,  1583,  1584,   451,   452,   453,   454,   455,   456,   457,
    1188,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,  1189,  1222,  1461,  1462,
    1463,  1464,  1465,  1466,  1198,  1467,  1201,  1468,  1223,  1224,
    1225,  1469,  1470,  1471,  1199,  1472,  1200,  1235,  1236,  1473,
    1474,  1475,  1476,  1477,  1237,  1251,  1585,  1586,  1587,  1588,
    1589,  1590,  1478,  1252,  1258,  1253,  1260,  1479,  1480,  1263,
    1265,  1481,  1254,  1266,  1270,  1271,  1482,  1483,  1484,  1485,
    1486,  1255,  1272,  1487,  1275,  1488,  1489,  1490,  1277,  1282,
    1491,  1492,  1276,  1493,  1494,  1495,  1280,  1281,  1283,  1496,
    1286,  1291,  1288,  1292,  1293,  1294,  1302,  1306,  1307,  1296,
    1308,  1317,  1390,  1497,  1391,  1325,  1326,  1338,  1498,  1339,
    1343,  1344,  1345,  1499,  1500,  1501,  1346,  1347,  1394,  1348,
    1502,  1503,  1349,  1504,  1505,  1506,  1507,  1358,  1361,  1508,
    1364,  1864,  1510,  1511,  1512,  1398,  1513,  1381,  1514,  1515,
    1382,  1516,  1389,  1517,  1518,  1395,  1519,  1520,  1521,  1522,
    1396,  1397,  1403,  1406,  1407,  1523,  1408,  1524,  1413,  1525,
    1526,  1414,  1527,  1528,  1529,  1530,  1531,  1532,  1415,  1533,
    1534,  1535,  1536,  1537,  1416,  1417,  1418,  1419,  1538,  1420,
    1539,  1421,  1540,  1431,  1432,  1434,  1437,  1438,  1439,  1441,
    1444,  1541,  1450,  1542,  1543,  1544,  1545,  1546,  1547,  1548,
    1451,  1452,  1549,  1550,  1453,  1454,  1455,  1457,  1551,  1458,
    1552,  1553,  1554,  1592,  1555,  1595,  1556,  1593,  1557,  1558,
    1559,  1560,  1597,  1600,  1607,  1608,  1609,  1610,  1633,  1627,
    1613,  1634,  1638,  1640,  1669,  1561,  1562,  1563,  1687,  1664,
    1697,  1673,  1703,  1707,  1688,  1564,  1689,  1565,  1566,  1567,
    1690,  1691,  1709,  1714,  1568,  1716,  1569,  1570,  1571,  1717,
    1722,  1572,  1723,  1730,  1727,  1573,  1574,  1724,  1575,  1576,
    1577,  1578,  1732,  1750,  1741,  1579,   451,   452,   453,   454,
     455,   456,   457,   918,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,  1729,
    1735,  1757,  1755,   896,  1736,  1737,  1752,  1738,  1754,  1759,
    1760,  1761,  1762,  1778,  1788,  1782,  1580,  1581,  1582,  1583,
    1584,   451,   452,   453,   454,   455,   456,   457,  1806,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,  1789,   919,  1461,  1462,  1463,  1464,
    1465,  1466,  1791,  1467,  1807,  1468,  1812,  1840,  1813,  1469,
    1470,  1471,  1814,  1472,  1816,  1842,  1817,  1473,  1474,  1475,
    1476,  1477,  1818,  1847,  1585,  1586,  1587,  1588,  1589,  1590,
    1478,  1853,  1854,  1855,  1857,  1479,  1480,  1868,  1858,  1481,
    1878,  1859,  1882,  1884,  1482,  1483,  1484,  1485,  1486,  1888,
    1889,  1487,  1894,  1488,  1489,  1490,  1898,  1899,  1491,  1492,
    1900,  1493,  1494,  1495,  1902,  1903,  1906,  1496,  1915,  1917,
    1918,  1919,  1920,  1923,  1935,  1924,  1930,  1927,  1928,  1931,
    1933,  1497,  1938,  1942,  1941,  1940,  1498,  1943,  1944,  1950,
    1947,  1499,  1500,  1501,  1954,  1956,  1957,  1958,  1502,  1503,
    1960,  1504,  1505,  1506,  1507,  1959,  1970,  1508,  1971,  1867,
    1510,  1511,  1512,  1965,  1513,  1976,  1514,  1515,  1977,  1516,
    1978,  1517,  1518,  1980,  1519,  1520,  1521,  1522,  1981,  1983,
    1984,  1985,  1986,  1523,  1987,  1524,  1988,  1525,  1526,  1990,
    1527,  1528,  1529,  1530,  1531,  1532,  1991,  1533,  1534,  1535,
    1536,  1537,  1993,  1995,  1996,  1999,  1538,  1997,  1539,  2000,
    1540,  2001,  2006,  2009,  2010,  2021,  2018,  2022,  2011,  1541,
    2023,  1542,  1543,  1544,  1545,  1546,  1547,  1548,  2024,  2025,
    1549,  1550,  2026,  2028,  2033,  2035,  1551,  2042,  1552,  1553,
    1554,  2043,  1555,  2045,  1556,  2049,  1557,  1558,  1559,  1560,
    2050,  2053,  2054,  2055,  2056,  2057,  2059,  2066,  2060,  2067,
    2068,  2063,  2070,  1561,  1562,  1563,  1768,  2071,  2072,  2074,
    2075,  2076,  2078,  1564,  2086,  1565,  1566,  1567,  2089,  2091,
    2099,  2092,  1568,  2094,  1569,  1570,  1571,  2095,  2096,  1572,
    2097,  2100,  2101,  1573,  1574,  2105,  1575,  1576,  1577,  1578,
    2108,  2118,  2123,  1579,   451,   452,   453,   454,   455,   456,
     457,  2121,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,  2145,  2114,   897,
    2113,  2132,  2151,  2154,  2155,  2156,  2158,  2157,  2159,   279,
    1118,   615,  1696,  1835,  1580,  1581,  1582,  1583,  1584,   451,
     452,   453,   454,   455,   456,   457,  1779,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   763,   714,  1461,  1462,  1463,  1464,  1465,  1466,
    1404,  1467,   750,  1468,   334,  2093,   141,  1469,  1470,  1471,
     608,  1472,  1181,  1103,  1905,  1473,  1474,  1475,  1476,  1477,
     861,  1621,  1585,  1586,  1587,  1588,  1589,  1590,  1478,  1885,
    2133,   868,  1601,  1479,  1480,  1617,   349,  1481,  1043,   796,
       0,  1726,  1482,  1483,  1484,  1485,  1486,   583,     0,  1487,
    1029,  1488,  1489,  1490,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,     0,     0,     0,  1496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1497,
       0,     0,     0,     0,  1498,     0,     0,     0,     0,  1499,
    1500,  1501,     0,     0,     0,     0,  1502,  1503,     0,  1504,
    1505,  1506,  1507,     0,     0,  1508,     0,  1872,  1510,  1511,
    1512,     0,  1513,     0,  1514,  1515,     0,  1516,     0,  1517,
    1518,     0,  1519,  1520,  1521,  1522,     0,     0,     0,     0,
       0,  1523,     0,  1524,     0,  1525,  1526,     0,  1527,  1528,
    1529,  1530,  1531,  1532,     0,  1533,  1534,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,     0,  1539,     0,  1540,     0,
       0,     0,     0,     0,     0,     0,     0,  1541,     0,  1542,
    1543,  1544,  1545,  1546,  1547,  1548,     0,     0,  1549,  1550,
       0,     0,     0,     0,  1551,     0,  1552,  1553,  1554,     0,
    1555,     0,  1556,     0,  1557,  1558,  1559,  1560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1561,  1562,  1563,     0,     0,     0,     0,     0,     0,
       0,  1564,     0,  1565,  1566,  1567,     0,     0,     0,     0,
    1568,     0,  1569,  1570,  1571,     0,     0,  1572,     0,     0,
       0,  1573,  1574,     0,  1575,  1576,  1577,  1578,     0,     0,
       0,  1579,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,     0,   899,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1580,  1581,  1582,  1583,  1584,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,   882,  1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,
       0,  1468,     0,     0,     0,  1469,  1470,  1471,     0,  1472,
       0,     0,     0,  1473,  1474,  1475,  1476,  1477,     0,     0,
    1585,  1586,  1587,  1588,  1589,  1590,  1478,     0,     0,     0,
       0,  1479,  1480,     0,     0,  1481,     0,     0,     0,     0,
    1482,  1483,  1484,  1485,  1486,     0,     0,  1487,     0,  1488,
    1489,  1490,     0,     0,  1491,  1492,     0,  1493,  1494,  1495,
       0,     0,     0,  1496,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1497,     0,     0,
       0,     0,  1498,     0,     0,     0,     0,  1499,  1500,  1501,
       0,     0,     0,     0,  1502,  1503,     0,  1504,  1505,  1506,
    1507,     0,     0,  1508,     0,  1873,  1510,  1511,  1512,     0,
    1513,     0,  1514,  1515,     0,  1516,     0,  1517,  1518,     0,
    1519,  1520,  1521,  1522,     0,     0,     0,     0,     0,  1523,
       0,  1524,     0,  1525,  1526,     0,  1527,  1528,  1529,  1530,
    1531,  1532,     0,  1533,  1534,  1535,  1536,  1537,     0,     0,
       0,     0,  1538,     0,  1539,     0,  1540,     0,     0,     0,
       0,     0,     0,     0,     0,  1541,     0,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,     0,     0,  1549,  1550,     0,     0,
       0,     0,  1551,     0,  1552,  1553,  1554,     0,  1555,     0,
    1556,     0,  1557,  1558,  1559,  1560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1561,
    1562,  1563,     0,     0,     0,     0,     0,     0,     0,  1564,
       0,  1565,  1566,  1567,     0,     0,     0,     0,  1568,     0,
    1569,  1570,  1571,     0,     0,  1572,     0,     0,     0,  1573,
    1574,     0,  1575,  1576,  1577,  1578,     0,     0,     0,  1579,
     451,   452,   453,   454,   455,   456,   457,     0,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,   900,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1580,  1581,  1582,  1583,  1584,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,   888,
    1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,     0,  1468,
       0,     0,     0,  1469,  1470,  1471,     0,  1472,     0,     0,
       0,  1473,  1474,  1475,  1476,  1477,     0,     0,  1585,  1586,
    1587,  1588,  1589,  1590,  1478,     0,     0,     0,     0,  1479,
    1480,     0,     0,  1481,     0,     0,     0,     0,  1482,  1483,
    1484,  1485,  1486,     0,     0,  1487,     0,  1488,  1489,  1490,
       0,     0,  1491,  1492,     0,  1493,  1494,  1495,     0,     0,
       0,  1496,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1497,     0,     0,     0,     0,
    1498,     0,     0,     0,     0,  1499,  1500,  1501,     0,     0,
       0,     0,  1502,  1503,     0,  1504,  1505,  1506,  1507,     0,
       0,  1508,     0,  1874,  1510,  1511,  1512,     0,  1513,     0,
    1514,  1515,     0,  1516,     0,  1517,  1518,     0,  1519,  1520,
    1521,  1522,     0,     0,     0,     0,     0,  1523,     0,  1524,
       0,  1525,  1526,     0,  1527,  1528,  1529,  1530,  1531,  1532,
       0,  1533,  1534,  1535,  1536,  1537,     0,     0,     0,     0,
    1538,     0,  1539,     0,  1540,     0,     0,     0,     0,     0,
       0,     0,     0,  1541,     0,  1542,  1543,  1544,  1545,  1546,
    1547,  1548,     0,     0,  1549,  1550,     0,     0,     0,     0,
    1551,     0,  1552,  1553,  1554,     0,  1555,     0,  1556,     0,
    1557,  1558,  1559,  1560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1561,  1562,  1563,
       0,     0,     0,     0,     0,     0,     0,  1564,     0,  1565,
    1566,  1567,     0,     0,     0,     0,  1568,     0,  1569,  1570,
    1571,     0,     0,  1572,     0,     0,     0,  1573,  1574,     0,
    1575,  1576,  1577,  1578,     0,     0,     0,  1579,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1580,  1581,
    1582,  1583,  1584,   451,   452,   453,   454,   455,   456,   457,
       0,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,   889,  1461,  1462,
    1463,  1464,  1465,  1466,     0,  1467,     0,  1468,     0,     0,
       0,  1469,  1470,  1471,     0,  1472,     0,     0,     0,  1473,
    1474,  1475,  1476,  1477,     0,     0,  1585,  1586,  1587,  1588,
    1589,  1590,  1478,     0,     0,     0,     0,  1479,  1480,     0,
       0,  1481,     0,     0,     0,     0,  1482,  1483,  1484,  1485,
    1486,     0,     0,  1487,     0,  1488,  1489,  1490,     0,     0,
    1491,  1492,     0,  1493,  1494,  1495,     0,     0,     0,  1496,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1497,     0,     0,     0,     0,  1498,     0,
       0,     0,     0,  1499,  1500,  1501,     0,     0,     0,     0,
    1502,  1503,     0,  1504,  1505,  1506,  1507,     0,     0,  1508,
       0,  1875,  1510,  1511,  1512,     0,  1513,     0,  1514,  1515,
       0,  1516,     0,  1517,  1518,     0,  1519,  1520,  1521,  1522,
       0,     0,     0,     0,     0,  1523,     0,  1524,     0,  1525,
    1526,     0,  1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,
    1534,  1535,  1536,  1537,     0,     0,     0,     0,  1538,     0,
    1539,     0,  1540,     0,     0,     0,     0,     0,     0,     0,
       0,  1541,     0,  1542,  1543,  1544,  1545,  1546,  1547,  1548,
       0,     0,  1549,  1550,     0,     0,     0,     0,  1551,     0,
    1552,  1553,  1554,     0,  1555,     0,  1556,     0,  1557,  1558,
    1559,  1560,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1561,  1562,  1563,     0,     0,
       0,     0,     0,     0,     0,  1564,     0,  1565,  1566,  1567,
       0,     0,     0,     0,  1568,     0,  1569,  1570,  1571,     0,
       0,  1572,     0,     0,     0,  1573,  1574,     0,  1575,  1576,
    1577,  1578,     0,     0,     0,  1579,   451,   452,   453,   454,
     455,   456,   457,     0,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,     0,
       0,   907,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1580,  1581,  1582,  1583,
    1584,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,   890,  1461,  1462,  1463,  1464,
    1465,  1466,     0,  1467,     0,  1468,     0,     0,     0,  1469,
    1470,  1471,     0,  1472,     0,     0,     0,  1473,  1474,  1475,
    1476,  1477,     0,     0,  1585,  1586,  1587,  1588,  1589,  1590,
    1478,     0,     0,     0,     0,  1479,  1480,     0,     0,  1481,
       0,     0,     0,     0,  1482,  1483,  1484,  1485,  1486,     0,
       0,  1487,     0,  1488,  1489,  1490,     0,     0,  1491,  1492,
       0,  1493,  1494,  1495,     0,     0,     0,  1496,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1497,     0,     0,     0,     0,  1498,     0,     0,     0,
       0,  1499,  1500,  1501,     0,     0,     0,     0,  1502,  1503,
       0,  1504,  1505,  1506,  1507,     0,     0,  1508,     0,  1876,
    1510,  1511,  1512,     0,  1513,     0,  1514,  1515,     0,  1516,
       0,  1517,  1518,     0,  1519,  1520,  1521,  1522,     0,     0,
       0,     0,     0,  1523,     0,  1524,     0,  1525,  1526,     0,
    1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,  1534,  1535,
    1536,  1537,     0,     0,     0,     0,  1538,     0,  1539,     0,
    1540,     0,     0,     0,     0,     0,     0,     0,     0,  1541,
       0,  1542,  1543,  1544,  1545,  1546,  1547,  1548,     0,     0,
    1549,  1550,     0,     0,     0,     0,  1551,     0,  1552,  1553,
    1554,     0,  1555,     0,  1556,     0,  1557,  1558,  1559,  1560,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1561,  1562,  1563,     0,     0,     0,     0,
       0,     0,     0,  1564,     0,  1565,  1566,  1567,     0,     0,
       0,     0,  1568,     0,  1569,  1570,  1571,     0,     0,  1572,
       0,     0,     0,  1573,  1574,     0,  1575,  1576,  1577,  1578,
       0,     0,     0,  1579,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,     0,   909,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1580,  1581,  1582,  1583,  1584,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,   891,  1461,  1462,  1463,  1464,  1465,  1466,
       0,  1467,     0,  1468,     0,     0,     0,  1469,  1470,  1471,
       0,  1472,     0,     0,     0,  1473,  1474,  1475,  1476,  1477,
       0,     0,  1585,  1586,  1587,  1588,  1589,  1590,  1478,     0,
       0,     0,     0,  1479,  1480,     0,     0,  1481,     0,     0,
       0,     0,  1482,  1483,  1484,  1485,  1486,     0,     0,  1487,
       0,  1488,  1489,  1490,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,     0,     0,     0,  1496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1497,
       0,     0,     0,     0,  1498,     0,     0,     0,     0,  1499,
    1500,  1501,     0,     0,     0,     0,  1502,  1503,     0,  1504,
    1505,  1506,  1507,     0,     0,  1508,     0,  1877,  1510,  1511,
    1512,     0,  1513,     0,  1514,  1515,     0,  1516,     0,  1517,
    1518,     0,  1519,  1520,  1521,  1522,     0,     0,     0,     0,
       0,  1523,     0,  1524,     0,  1525,  1526,     0,  1527,  1528,
    1529,  1530,  1531,  1532,     0,  1533,  1534,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,     0,  1539,     0,  1540,     0,
       0,     0,     0,     0,     0,     0,     0,  1541,     0,  1542,
    1543,  1544,  1545,  1546,  1547,  1548,     0,     0,  1549,  1550,
       0,     0,     0,     0,  1551,     0,  1552,  1553,  1554,     0,
    1555,     0,  1556,     0,  1557,  1558,  1559,  1560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1561,  1562,  1563,     0,     0,     0,     0,     0,     0,
       0,  1564,     0,  1565,  1566,  1567,     0,     0,     0,     0,
    1568,     0,  1569,  1570,  1571,     0,     0,  1572,     0,     0,
       0,  1573,  1574,     0,  1575,  1576,  1577,  1578,     0,     0,
       0,  1579,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,     0,   914,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1580,  1581,  1582,  1583,  1584,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,   892,  1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,
       0,  1468,     0,     0,     0,  1469,  1470,  1471,     0,  1472,
       0,     0,     0,  1473,  1474,  1475,  1476,  1477,     0,     0,
    1585,  1586,  1587,  1588,  1589,  1590,  1478,     0,     0,     0,
       0,  1479,  1480,     0,     0,  1481,     0,     0,     0,     0,
    1482,  1483,  1484,  1485,  1486,     0,     0,  1487,     0,  1488,
    1489,  1490,     0,     0,  1491,  1492,     0,  1493,  1494,  1495,
       0,     0,     0,  1496,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1497,     0,     0,
       0,     0,  1498,     0,     0,     0,     0,  1499,  1500,  1501,
       0,     0,     0,     0,  1502,  1503,     0,  1504,  1505,  1506,
    1507,     0,     0,  1508,     0,  1952,  1510,  1511,  1512,     0,
    1513,     0,  1514,  1515,     0,  1516,     0,  1517,  1518,     0,
    1519,  1520,  1521,  1522,     0,     0,     0,     0,     0,  1523,
       0,  1524,     0,  1525,  1526,     0,  1527,  1528,  1529,  1530,
    1531,  1532,     0,  1533,  1534,  1535,  1536,  1537,     0,     0,
       0,     0,  1538,     0,  1539,     0,  1540,     0,     0,     0,
       0,     0,     0,     0,     0,  1541,     0,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,     0,     0,  1549,  1550,     0,     0,
       0,     0,  1551,     0,  1552,  1553,  1554,     0,  1555,     0,
    1556,     0,  1557,  1558,  1559,  1560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1561,
    1562,  1563,     0,     0,     0,     0,     0,     0,     0,  1564,
       0,  1565,  1566,  1567,     0,     0,     0,     0,  1568,     0,
    1569,  1570,  1571,     0,     0,  1572,     0,     0,     0,  1573,
    1574,     0,  1575,  1576,  1577,  1578,     0,     0,     0,  1579,
     451,   452,   453,   454,   455,   456,   457,     0,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,   915,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1580,  1581,  1582,  1583,  1584,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,   893,
    1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,     0,  1468,
       0,     0,     0,  1469,  1470,  1471,     0,  1472,     0,     0,
       0,  1473,  1474,  1475,  1476,  1477,     0,     0,  1585,  1586,
    1587,  1588,  1589,  1590,  1478,     0,     0,     0,     0,  1479,
    1480,     0,     0,  1481,     0,     0,     0,     0,  1482,  1483,
    1484,  1485,  1486,     0,     0,  1487,     0,  1488,  1489,  1490,
       0,     0,  1491,  1492,     0,  1493,  1494,  1495,     0,     0,
       0,  1496,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1497,     0,     0,     0,     0,
    1498,     0,     0,     0,     0,  1499,  1500,  1501,     0,     0,
       0,     0,  1502,  1503,     0,  1504,  1505,  1506,  1507,     0,
       0,  1508,     0,  1953,  1510,  1511,  1512,     0,  1513,     0,
    1514,  1515,     0,  1516,     0,  1517,  1518,     0,  1519,  1520,
    1521,  1522,     0,     0,     0,     0,     0,  1523,     0,  1524,
       0,  1525,  1526,     0,  1527,  1528,  1529,  1530,  1531,  1532,
       0,  1533,  1534,  1535,  1536,  1537,     0,     0,     0,     0,
    1538,     0,  1539,     0,  1540,     0,     0,     0,     0,     0,
       0,     0,     0,  1541,     0,  1542,  1543,  1544,  1545,  1546,
    1547,  1548,     0,     0,  1549,  1550,     0,     0,     0,     0,
    1551,     0,  1552,  1553,  1554,     0,  1555,     0,  1556,     0,
    1557,  1558,  1559,  1560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1561,  1562,  1563,
       0,     0,     0,     0,     0,     0,     0,  1564,     0,  1565,
    1566,  1567,     0,     0,     0,     0,  1568,     0,  1569,  1570,
    1571,     0,     0,  1572,     0,     0,     0,  1573,  1574,     0,
    1575,  1576,  1577,  1578,     0,     0,     0,  1579,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,   916,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1580,  1581,
    1582,  1583,  1584,   451,   452,   453,   454,   455,   456,   457,
       0,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,   898,  1461,  1462,
    1463,  1464,  1465,  1466,     0,  1467,     0,  1468,     0,     0,
       0,  1469,  1470,  1471,     0,  1472,     0,     0,     0,  1473,
    1474,  1475,  1476,  1477,     0,     0,  1585,  1586,  1587,  1588,
    1589,  1590,  1478,     0,     0,     0,     0,  1479,  1480,     0,
       0,  1481,     0,     0,     0,     0,  1482,  1483,  1484,  1485,
    1486,     0,     0,  1487,     0,  1488,  1489,  1490,     0,     0,
    1491,  1492,     0,  1493,  1494,  1495,     0,     0,     0,  1496,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1497,     0,     0,     0,     0,  1498,     0,
       0,     0,     0,  1499,  1500,  1501,     0,     0,     0,     0,
    1502,  1503,     0,  1504,  1505,  1506,  1507,     0,     0,  1508,
       0,  2015,  1510,  1511,  1512,     0,  1513,     0,  1514,  1515,
       0,  1516,     0,  1517,  1518,     0,  1519,  1520,  1521,  1522,
       0,     0,     0,     0,     0,  1523,     0,  1524,     0,  1525,
    1526,     0,  1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,
    1534,  1535,  1536,  1537,     0,     0,     0,     0,  1538,     0,
    1539,     0,  1540,     0,     0,     0,     0,     0,     0,     0,
       0,  1541,     0,  1542,  1543,  1544,  1545,  1546,  1547,  1548,
       0,     0,  1549,  1550,     0,     0,     0,     0,  1551,     0,
    1552,  1553,  1554,     0,  1555,     0,  1556,     0,  1557,  1558,
    1559,  1560,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1561,  1562,  1563,     0,     0,
       0,     0,     0,     0,     0,  1564,     0,  1565,  1566,  1567,
       0,     0,     0,     0,  1568,     0,  1569,  1570,  1571,     0,
       0,  1572,     0,     0,     0,  1573,  1574,     0,  1575,  1576,
    1577,  1578,     0,     0,     0,  1579,   451,   452,   453,   454,
     455,   456,   457,     0,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,     0,
       0,   917,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1580,  1581,  1582,  1583,
    1584,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,   902,  1461,  1462,  1463,  1464,
    1465,  1466,     0,  1467,     0,  1468,     0,     0,     0,  1469,
    1470,  1471,     0,  1472,     0,     0,     0,  1473,  1474,  1475,
    1476,  1477,     0,     0,  1585,  1586,  1587,  1588,  1589,  1590,
    1478,     0,     0,     0,     0,  1479,  1480,     0,     0,  1481,
       0,     0,     0,     0,  1482,  1483,  1484,  1485,  1486,     0,
       0,  1487,     0,  1488,  1489,  1490,     0,     0,  1491,  1492,
       0,  1493,  1494,  1495,     0,     0,     0,  1496,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1497,     0,     0,     0,     0,  1498,     0,     0,     0,
       0,  1499,  1500,  1501,     0,     0,     0,     0,  1502,  1503,
       0,  1504,  1505,  1506,  1507,     0,     0,  1508,     0,  2016,
    1510,  1511,  1512,     0,  1513,     0,  1514,  1515,     0,  1516,
       0,  1517,  1518,     0,  1519,  1520,  1521,  1522,     0,     0,
       0,     0,     0,  1523,     0,  1524,     0,  1525,  1526,     0,
    1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,  1534,  1535,
    1536,  1537,     0,     0,     0,     0,  1538,     0,  1539,     0,
    1540,     0,     0,     0,     0,     0,     0,     0,     0,  1541,
       0,  1542,  1543,  1544,  1545,  1546,  1547,  1548,     0,     0,
    1549,  1550,     0,     0,     0,     0,  1551,     0,  1552,  1553,
    1554,     0,  1555,     0,  1556,     0,  1557,  1558,  1559,  1560,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1561,  1562,  1563,     0,     0,     0,     0,
       0,     0,     0,  1564,     0,  1565,  1566,  1567,     0,     0,
       0,     0,  1568,     0,  1569,  1570,  1571,     0,     0,  1572,
       0,     0,     0,  1573,  1574,     0,  1575,  1576,  1577,  1578,
       0,     0,     0,  1579,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,     0,   929,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1580,  1581,  1582,  1583,  1584,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,   903,  1461,  1462,  1463,  1464,  1465,  1466,
       0,  1467,     0,  1468,     0,     0,     0,  1469,  1470,  1471,
       0,  1472,     0,     0,     0,  1473,  1474,  1475,  1476,  1477,
       0,     0,  1585,  1586,  1587,  1588,  1589,  1590,  1478,     0,
       0,     0,     0,  1479,  1480,     0,     0,  1481,     0,     0,
       0,     0,  1482,  1483,  1484,  1485,  1486,     0,     0,  1487,
       0,  1488,  1489,  1490,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,     0,     0,     0,  1496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1497,
       0,     0,     0,     0,  1498,     0,     0,     0,     0,  1499,
    1500,  1501,     0,     0,     0,     0,  1502,  1503,     0,  1504,
    1505,  1506,  1507,     0,     0,  1508,     0,  2048,  1510,  1511,
    1512,     0,  1513,     0,  1514,  1515,     0,  1516,     0,  1517,
    1518,     0,  1519,  1520,  1521,  1522,     0,     0,     0,     0,
       0,  1523,     0,  1524,     0,  1525,  1526,     0,  1527,  1528,
    1529,  1530,  1531,  1532,     0,  1533,  1534,  1535,  1536,  1537,
       0,     0,     0,     0,  1538,     0,  1539,     0,  1540,     0,
       0,     0,     0,     0,     0,     0,     0,  1541,     0,  1542,
    1543,  1544,  1545,  1546,  1547,  1548,     0,     0,  1549,  1550,
       0,     0,     0,     0,  1551,     0,  1552,  1553,  1554,     0,
    1555,     0,  1556,     0,  1557,  1558,  1559,  1560,     0,     0,
       0,     0,     0,     0,   147,   148,   149,   150,   151,   152,
       0,  1561,  1562,  1563,     0,     0,     0,     0,   153,   154,
       0,  1564,     0,  1565,  1566,  1567,   155,   156,     0,     0,
    1568,     0,  1569,  1570,  1571,     0,     0,  1572,   157,     0,
       0,  1573,  1574,     0,  1575,  1576,  1577,  1578,     0,     0,
       0,  1579,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,     0,     0,   930,     0,     0,
       0,     0,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1580,  1581,  1582,  1583,  1584,     0,     0,   163,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   451,   452,   453,   454,   455,
     456,   457,   931,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,   165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1585,  1586,  1587,  1588,  1589,  1590,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,   451,   452,   453,   454,   455,   456,   457,
     167,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,     0,     0,   169,   170,     0,     0,     0,
     171,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
     210,     0,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   259,   260,   261,   147,   148,   149,   150,
     151,   152,   262,     0,     0,     0,     0,     0,     0,     0,
     153,   154,     0,     0,     0,     0,     0,     0,   155,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,     0,     0,     0,     0,     0,     0,     0,
     623,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   451,   452,   453,
     454,   455,   456,   457,   162,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,   452,   453,   454,   455,   456,   457,   933,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   624,     0,     0,
       0,     0,   166,     0,     0,     0,   944,     0,     0,     0,
       0,     0,   167,   451,   452,   453,   454,   455,   456,   457,
       0,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   953,     0,     0,     0,     0,     0,
       0,   451,   452,   453,   454,   455,   456,   457,   625,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     0,   210,     0,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,     0,   258,   259,   260,   261,   147,   148,
     149,   150,   151,   152,   262,     0,     0,     0,     0,     0,
       0,     0,   153,   154,     0,     0,     0,     0,     0,     0,
     155,     0,   954,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,   731,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,   158,
       0,     0,     0,     0,   159,     0,     0,   160,   161,     0,
     955,     0,     0,     0,     0,     0,   162,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     454,   455,   456,   457,   956,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     451,   452,   453,   454,   455,   456,   457,   957,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,     0,   958,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,   451,   452,   453,   454,   455,   456,   457,   732,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   959,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
       0,     0,     0,     0,     0,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,   210,     0,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   258,   259,   260,   261,
     147,   148,   149,   150,   151,   152,   733,     0,     0,     0,
       0,     0,     0,     0,   153,   154,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,   451,   452,   453,   454,   455,   456,   457,   960,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,   159,     0,     0,   160,
     161,     0,     0,     0,     0,     0,     0,     0,   162,     0,
     966,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   451,   452,   453,   454,
     455,   456,   457,  1330,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,     0,     0,     0,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,     0,     0,     0,
    1331,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,  1342,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,  1352,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   356,     0,     0,     0,     0,     0,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,   210,     0,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,     0,     0,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     0,   258,   259,
     260,   261,   147,   148,   149,   150,   151,   152,   262,     0,
       0,     0,     0,     0,     0,     0,   153,   154,     0,     0,
       0,     0,     0,     0,   155,   664,     0,   451,   452,   453,
     454,   455,   456,   457,  1368,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,   159,     0,
       0,   160,   161,     0,     0,     0,     0,     0,     0,     0,
     162,     0,     0,     0,  1369,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
       0,     0,   451,   452,   453,   454,   455,   456,   457,  1370,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,     0,     0,     0,     0,
       0,     0,  1373,     0,     0,  -651,  -651,  -651,  -651,  1318,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,  1374,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,  1827,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,     0,     0,     0,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,   210,     0,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   259,   260,   261,   147,   148,   149,   150,   151,   152,
     262,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,     0,     0,  1319,
     451,   452,   453,   454,   455,   456,   457,     0,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,     0,     0,     0,     0,     0,
       0,     0,   162,     0,     0,     0,     0,   904,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,     0,   908,     0,     0,     0,     0,     0,
       0,     0,   451,   452,   453,   454,   455,   456,   457,   883,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,     0,     0,     0,   910,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   911,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   451,   452,   453,
     454,   455,   456,   457,   912,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
     210,     0,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   259,   260,   261,   147,   148,   149,   150,
     151,   152,   262,     0,     0,     0,     0,     0,     0,     0,
     153,   154,     0,     0,     0,     0,     0,     0,   155,     0,
       0,     0,   921,   451,   452,   453,   454,   455,   456,   457,
       0,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,     0,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
     922,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,   452,   453,   454,   455,   456,   457,  1304,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   923,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     451,   452,   453,   454,   455,   456,   457,   924,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   451,   452,   453,   454,   455,   456,   457,
     925,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   451,   452,   453,   454,
     455,   456,   457,     0,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   926,
     451,   452,   453,   454,   455,   456,   457,     0,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     0,   210,     0,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,     0,   258,   259,   260,   261,   147,   148,
     149,   150,   151,   152,   262,     0,     0,     0,     0,     0,
       0,     0,   153,   154,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,   927,   451,   452,   453,   454,
     455,   456,   457,     0,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,   159,     0,     0,   160,   161,   451,
     452,   453,   454,   455,   456,   457,   162,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,   928,     0,     0,     0,     0,     0,     0,
    1309,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,   451,   452,   453,   454,   455,
     456,   457,   932,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   945,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,   452,   453,   454,   455,   456,   457,   946,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,   451,   452,   453,   454,   455,
     456,   457,   947,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,   210,     0,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   258,   259,   260,   261,
     147,   148,   149,   150,   151,   152,   262,     0,     0,     0,
       0,     0,     0,     0,   153,   154,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,   948,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,   159,     0,     0,   160,
     161,   949,     0,     0,     0,     0,     0,     0,   162,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,  1784,   950,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   951,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,     0,     0,   451,
     452,   453,   454,   455,   456,   457,   167,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,   952,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   963,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,   210,     0,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,     0,     0,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     0,   258,   259,
     260,   261,   147,   148,   149,   150,   151,   152,   262,     0,
       0,     0,     0,     0,     0,     0,   153,   154,     0,     0,
       0,     0,     0,     0,   155,     0,     0,     0,     0,     0,
       0,   964,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,   159,     0,
       0,   160,   161,     0,     0,     0,     0,     0,     0,     0,
     162,   965,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1786,     0,  1322,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
    1327,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,  1328,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   451,
     452,   453,   454,   455,   456,   457,  1329,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,   451,   452,   453,   454,   455,   456,   457,
    1332,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   451,   452,   453,   454,
     455,   456,   457,     0,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,   210,     0,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   259,   260,   261,   147,   148,   149,   150,   151,   152,
     262,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,   451,   452,   453,
     454,   455,   456,   457,  1333,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,   451,   452,   453,   454,   455,
     456,   457,   162,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
       0,     0,   451,   452,   453,   454,   455,   456,   457,  1334,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,   451,   452,   453,   454,
     455,   456,   457,  1335,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,   451,   452,   453,   454,   455,   456,
     457,  1336,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,   451,   452,
     453,   454,   455,   456,   457,  1337,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   451,   452,   453,   454,   455,   456,   457,  1340,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
     210,     0,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   259,   260,   261,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   451,   452,   453,   454,   455,   456,   457,  1341,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
     451,   452,   453,   454,   455,   456,   457,  1353,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,     0,     0,   451,   452,   453,
     454,   455,   456,   457,  1354,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,   451,   452,   453,   454,   455,   456,   457,  1367,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   451,
     452,   453,   454,   455,   456,   457,  1371,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,   451,   452,   453,   454,   455,   456,   457,
    1372,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   451,   452,   453,   454,
     455,   456,   457,  1445,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   451,   452,   453,   454,   455,
     456,   457,     0,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   451,   452,
     453,   454,   455,   456,   457,     0,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,   451,   452,   453,
     454,   455,   456,   457,  1643,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     451,   452,   453,   454,   455,   456,   457,  1706,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,   451,   452,   453,   454,   455,
     456,   457,  1763,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,     0,     0,
       0,     0,   451,   452,   453,   454,   455,   456,   457,  1792,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,   451,   452,   453,   454,
     455,   456,   457,  1793,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   451,
     452,   453,   454,   455,   456,   457,  1794,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,   452,   453,   454,   455,   456,
     457,  1795,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,   451,   452,
     453,   454,   455,   456,   457,  1796,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   451,   452,   453,   454,   455,   456,   457,  1805,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   451,   452,   453,   454,   455,   456,
     457,  1822,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   451,   452,   453,
     454,   455,   456,   457,  1823,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,    49,     0,     0,     0,     0,     0,  1824,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   451,   452,   453,   454,   455,   456,   457,
    1825,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,     0,     0,     0,
       0,     0,     0,  1826,   451,   452,   453,   454,   455,   456,
     457,     0,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,    50,  1828,
       1,     0,     0,     0,     2,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1829,     0,     0,     0,     3,     0,     0,  1644,
    1645,     4,     0,     0,  1646,     0,  1647,     0,     0,     0,
       0,    52,    53,     0,     5,     0,     0,  1850,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     6,     7,     0,     0,  1648,
    1649,     0,  1650,     0,  1856,   451,   452,   453,   454,   455,
     456,   457,  1205,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,  1860,    55,
       0,     0,     0,     0,  1207,     0,     0,  1208,     0,  1209,
       0,     0,  1210,     0,     0,     8,    56,     0,     0,    57,
       0,  1865,     0,     0,     0,     0,     0,  1211,     0,     0,
       0,     0,     0,     0,  1212,  1213,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,     0,  1966,     0,     9,     0,
      10,     0,     0,     0,     0,     0,     0,     0,    11,  1214,
       0,     0,     0,     0,     0,     0,   528,   529,     0,   530,
    1989,   531,   532,     0,     0,     0,     0,    12,    13,     0,
    1651,  1652,     0,     0,     0,     0,     0,   533,   873,     0,
       0,     0,    14,  2002,     0,    15,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
    1216,     0,     0,     0,     0,     0,  2012,     0,     0,   534,
     535,   536,   537,     0,     0,     0,     0,     0,   538,     0,
       0,     0,     0,  1217,     0,     0,     0,   539,     0,  2013,
       0,  1218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,   540,     0,     0,
       0,     0,     0,     0,     0,   541,     0,     0,     0,     0,
       0,     0,     0,     0,   542,     0,     0,     0,     0,     0,
       0,   543,     0,     0,   544,     0,     0,   545,   546,  1109,
       0,     0,     0,     0,     0,     0,  1219,   451,   452,   453,
     454,   455,   456,   457,   547,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   548,   549,     0,     0,   550,   551,     0,
       0,     0,     0,   552,     0,   553,     0,     0,     0,     0,
     554,   555,     0,     0,     0,     0,   556,   557,     0,     0,
       0,     0,     0,   558,     0,   559,     0,     0,     0,     0,
     560,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   451,   452,
     453,   454,   455,   456,   457,  1115,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   451,   452,   453,   454,   455,   456,   457,     0,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,  1622,   450,     0,     0,     0,     0,     0,     0,
     451,   452,   453,   454,   455,   456,   457,  1108,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   473,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1315,     0,     0,     0,   451,   452,
     453,   454,   455,   456,   457,  1623,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,     0,   451,   452,   453,   454,   455,   456,
     457,   913,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,     0,     0,   451,
     452,   453,   454,   455,   456,   457,   975,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,     0,   451,   452,   453,   454,   455,   456,
     457,  1171,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472
};

static const yytype_int16 yycheck[] =
{
      81,  1038,   991,  1298,  1190,  1281,   277,  1065,   594,  1002,
    1003,   269,   271,  1006,     5,   491,  1053,     3,    40,   319,
    1283,   811,   812,  1060,    41,  1401,   128,   817,    47,   819,
       8,  1607,   128,     4,     3,     4,     5,     6,     7,     8,
       3,     3,     3,   868,   185,   870,   185,     6,   221,   151,
       3,     3,     3,    16,    20,  1613,     4,    89,   271,    18,
       6,   142,   143,    70,  1202,  1203,    99,   125,     3,   871,
    1666,  1667,   153,   154,   155,   256,   335,    18,   159,    66,
      79,  1677,  1678,  1221,    20,    43,     3,   104,   146,   183,
      43,   105,   105,     3,   131,   190,     4,     5,     6,     7,
     360,   361,   508,    10,    11,    12,    13,    14,    15,    16,
     246,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,  1403,    10,    11,
      12,    13,    14,    15,    16,   205,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   188,   246,   248,   222,     3,    64,   563,   211,    63,
       3,   183,   748,   233,   246,   179,   179,   969,    43,  1086,
      87,   233,    76,   159,   128,   194,   762,    52,    26,   142,
     187,   262,   363,   251,  1356,  1357,   239,   209,   146,   247,
     363,   178,     3,  1365,  1366,   105,   229,   159,   159,   170,
      43,  1797,  1798,  1799,  1800,  1801,  1802,   159,   159,   196,
     179,  1204,   146,   148,  1251,  1811,   475,   249,   181,  1815,
     179,   128,   363,  1819,   363,  1262,  1284,   363,  1263,   170,
     208,   230,  1269,   179,   221,   242,   222,    10,    11,    12,
      13,    14,    15,    16,   202,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,   363,    82,  1639,   222,   256,    77,   363,   202,   217,
     218,   352,   226,   859,  1412,   356,  1101,     3,  1103,   361,
     350,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   768,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   330,   390,
     391,   392,  1888,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
       3,  1889,  1608,  1609,   593,   416,   417,   148,   233,   298,
     421,   422,   233,   360,   253,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,  1169,   774,   775,
     451,   452,   453,   454,   455,   361,   782,  1294,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   605,   362,   360,   608,   477,  1692,  1994,   361,
     361,  1436,  1998,  1392,   312,   313,   314,   360,   621,   361,
     361,   246,     3,  1448,   355,   356,   357,   358,  1455,   239,
    1457,   827,   828,   829,   360,    18,    92,   361,     3,   306,
     307,   308,   309,   246,    70,     3,     3,     3,   233,     3,
       3,   359,  1232,    36,  1234,  1235,   112,    40,  1483,   253,
      43,     3,    45,   361,   363,    48,   363,    63,    70,  1494,
       3,     3,   129,     9,    70,  2061,  2062,   146,  2064,  2065,
      63,    90,   246,    18,    20,   148,    41,    70,    71,  1514,
     362,   363,     3,  1778,  1656,  1657,  1658,  1659,  1660,  1661,
     126,    46,    47,  1528,   221,   753,  1668,   797,   798,  1762,
    1672,     3,  1537,    99,  1676,     5,  2090,   913,   914,  1695,
     591,    66,   105,    77,   126,     5,   246,     0,   994,   186,
     126,   997,   141,   202,   130,    18,   361,   246,    36,   122,
      20,  2115,  2116,    76,    76,    79,   617,   618,   221,   104,
      99,   147,  1577,    51,    89,   758,   627,    91,   361,   216,
     156,   187,   361,   149,   163,    55,  1593,   148,     3,   363,
    2144,   128,  1599,   156,     3,     4,     5,     6,     7,     8,
      57,    66,     3,   148,    61,   187,   116,   117,   849,   146,
     148,   187,   148,   127,   148,   148,   179,   361,    87,   362,
     363,   135,   201,  1179,   187,   162,    89,   222,  1004,    10,
      11,    12,    13,    14,    15,    16,   242,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   189,   110,   169,  1618,   251,   148,   362,   363,
     242,   361,   131,    54,   361,   179,   242,    58,   183,  1934,
       3,   196,   361,   239,   725,   726,   148,   728,   147,   242,
      18,   330,   733,    10,    11,    12,    13,    14,    15,    16,
     148,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   169,    95,   361,   223,
     239,   360,   361,   178,   202,   106,   116,   117,   109,   188,
     183,   240,  1727,    79,   362,   363,  1991,  1732,   147,    43,
    1758,   196,    70,   124,  1741,    91,   205,   156,    52,   208,
     259,     3,   256,   544,   254,  1752,    43,  1754,    43,   550,
     138,   552,   981,   144,   147,    52,   221,    52,   146,     3,
    2006,   152,    11,    35,   233,     3,    15,   105,     3,   246,
     179,   127,   227,   824,   162,     3,   253,     5,   147,   135,
    1922,  1937,    13,    14,  1926,    16,   233,   970,    19,    30,
      31,    32,   362,   363,  2059,    67,   979,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      92,     3,   873,   179,   875,    63,  2052,     3,   100,   880,
     881,     3,   883,    31,    32,     3,   887,   363,    76,   230,
     112,   232,     3,   894,   895,   896,   897,   361,   899,   900,
     901,   362,   363,     3,   254,   906,   907,  1862,   909,   250,
     362,   363,  2088,  2089,   915,   916,   917,   223,   360,    95,
      74,    75,     3,  1878,   260,  1882,  1835,    43,   929,   930,
     931,   350,   933,   360,     4,     5,   363,    63,  2114,   362,
     363,   362,   363,   944,  1077,  2037,  2038,     3,  2040,  2041,
      76,   173,   953,   954,   955,   956,   957,   958,   959,   960,
    1286,   962,   138,   362,   363,   966,   362,   363,   362,   363,
     146,   361,   194,   183,   975,   151,   362,   363,   260,   804,
     805,   361,   807,   808,   809,     3,   162,   988,   813,   814,
     815,   362,   363,   818,   995,  1950,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    26,
      27,    28,    29,    30,    31,    32,     3,   249,   362,   363,
     360,   362,   363,   362,   363,  1036,   260,  1170,   362,   363,
    1173,  1174,  1175,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   362,   363,     4,     5,
     362,   363,   531,   532,   533,   534,   260,   536,   362,   363,
     539,   540,   541,   362,   363,   362,   363,   546,   547,   548,
    1091,     3,   551,  1094,   362,   363,   362,   363,   260,  1100,
     362,   363,   362,   363,   362,   363,   362,   363,  1109,   362,
     363,   362,   363,   260,  1115,  1116,    10,    11,    12,    13,
      14,    15,    16,   260,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   260,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   260,    10,    11,    12,    13,    14,    15,    16,
    1171,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   226,   362,   363,   362,
     363,     3,  1193,   362,   363,   362,   363,  1198,     8,   362,
     363,   360,    10,    11,    12,    13,    14,    15,    16,     9,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   361,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    68,
     362,   363,    10,    11,    12,    13,    14,    15,    16,   361,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,  1276,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   362,   363,   362,   363,  1318,   362,   363,
    1321,   362,   363,   362,   363,   361,   145,   362,   363,  1330,
    1331,   362,   363,   362,   363,   361,   155,   362,   363,    49,
      50,  1342,   362,   363,   163,   362,   363,   363,   362,   363,
    1351,  1352,   362,   363,   362,   363,   361,   176,   361,   167,
     362,   363,   362,   363,   362,   363,   361,  1368,  1369,  1370,
     362,   363,  1373,  1374,   361,  1376,   361,  1378,   361,  1380,
     362,   363,   201,    49,    50,   360,   361,   360,   361,  1390,
    1391,   362,   363,   362,   363,   362,   363,  1398,  1399,   361,
     219,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   361,  1416,   362,   363,   361,  1420,
     362,   363,   361,     3,     4,     5,     6,     7,     8,  1430,
      10,   361,    12,   362,   363,   361,    16,    17,    18,   361,
      20,   362,   363,  1444,    24,    25,    26,    27,    28,   764,
     765,   985,   986,  1396,  1397,   361,   361,    37,   361,   361,
     361,   361,    42,    43,   361,   361,    46,    43,   362,   363,
     361,    51,    52,    53,    54,    55,   361,   361,    58,   361,
      60,    61,    62,   361,   361,    65,    66,   361,    68,    69,
      70,   362,   363,   361,    74,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   361,    88,   361,
     361,   361,   361,    93,    45,   362,   363,   361,    98,    99,
     100,   361,   361,   361,   361,   105,   106,   361,   108,   109,
     110,   111,   361,   361,   114,   361,   116,   117,   118,   119,
     361,   121,    45,   123,   124,   361,   126,   361,   128,   129,
     361,   131,   132,   133,   134,   363,   361,   361,   361,   361,
     140,    63,   142,   361,   144,   145,   361,   147,   148,   149,
     150,   151,   152,   361,   154,   155,   156,   157,   158,   363,
     361,   361,   361,   163,   361,   165,   361,   167,   361,   361,
     361,   361,   361,   361,   361,   361,   176,   361,   178,   179,
     180,   181,   182,   183,   184,   363,   361,   187,   188,   361,
     361,   361,   361,   193,   361,   195,   196,   197,   361,   199,
     361,   201,   361,   203,   204,   205,   206,  1628,  1629,   363,
     361,   361,   361,  1634,   361,  1636,   361,   361,   361,    63,
     220,   221,   222,    63,   256,   226,     3,     3,     3,   183,
     230,     3,   232,   233,   234,   183,   260,     3,   183,   239,
     260,   241,   242,   243,     3,     3,   246,    26,     3,     3,
     250,   251,     3,   253,   254,   255,   256,     3,     3,     3,
     260,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,     3,     3,     3,   362,
       3,   301,   302,   303,   304,   305,    10,    11,    12,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   362,
       5,    10,    11,    12,    13,    14,    15,    16,  1759,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   362,   362,   362,   362,   362,   359,
     360,   361,   362,   363,   364,   362,   361,  1788,   362,   362,
     362,   362,   362,     3,     3,     3,    10,    11,    12,    13,
      14,    15,    16,  1804,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
       3,     4,     5,     6,     7,     8,  1827,    10,     3,    12,
     362,  1832,   155,    16,    17,    18,     3,    20,   182,  1840,
       3,    24,    25,    26,    27,    28,     3,     3,     3,     3,
       3,     3,  1853,  1854,    37,     3,     3,     3,   226,    42,
      43,     3,     3,    46,     3,     5,     3,   358,    51,    52,
      53,    54,    55,     5,   361,    58,     5,    60,    61,    62,
     361,   361,    65,    66,   361,    68,    69,    70,    56,   361,
     361,    74,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   361,     3,     3,    88,     3,     3,   362,     3,
      93,   363,     3,   183,   362,    98,    99,   100,   183,     3,
     183,     3,   105,   106,   260,   108,   109,   110,   111,     3,
     184,   114,     3,   116,   117,   118,   119,   362,   121,   362,
     123,   124,   222,   126,   362,   128,   129,   329,   131,   132,
     133,   134,   329,   329,   362,   329,   329,   140,   222,   142,
     361,   144,   145,   361,   147,   148,   149,   150,   151,   152,
     361,   154,   155,   156,   157,   158,  1977,   361,   128,   156,
     163,   155,   165,   363,   167,   156,   156,   183,     3,   155,
       3,   226,   226,   176,     5,   178,   179,   180,   181,   182,
     183,   184,     5,     5,   187,   188,     4,   179,     5,     5,
     193,   361,   195,   196,   197,   248,   199,   199,   201,   361,
     203,   204,   205,   206,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,   363,     3,     3,   220,   221,   222,
     254,     3,    86,     3,     3,   183,    55,   230,   183,   232,
     233,   234,   165,   361,    20,  2056,   239,   185,   241,   242,
     243,    83,   362,   246,   153,     4,   361,   250,   251,   329,
     253,   254,   255,   256,     5,   133,   329,   260,   329,   363,
      10,    11,    12,    13,    14,    15,    16,   329,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   329,   363,   329,   329,   329,     5,   361,
     329,   361,   361,   361,   222,     3,   132,   362,   301,   302,
     303,   304,   305,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,     3,     3,     4,
       5,     6,     7,     8,   361,    10,   361,    12,     3,   362,
     362,    16,    17,    18,   156,    20,   156,   362,   362,    24,
      25,    26,    27,    28,    70,   361,   359,   360,   361,   362,
     363,   364,    37,   361,   248,   361,     3,    42,    43,    52,
     132,    46,   361,   248,   183,     3,    51,    52,    53,    54,
      55,   361,     3,    58,     3,    60,    61,    62,   156,   156,
      65,    66,   361,    68,    69,    70,   361,   361,   361,    74,
       3,     6,     4,     4,     4,   361,   198,   156,     3,   363,
       3,   361,    55,    88,   140,   362,   362,   362,    93,   362,
     362,   361,   361,    98,    99,   100,   361,   361,   155,   361,
     105,   106,   361,   108,   109,   110,   111,   361,   361,   114,
     361,   116,   117,   118,   119,    20,   121,   362,   123,   124,
     362,   126,   362,   128,   129,   361,   131,   132,   133,   134,
     361,   361,   361,   361,   361,   140,     3,   142,   179,   144,
     145,     3,   147,   148,   149,   150,   151,   152,   361,   154,
     155,   156,   157,   158,   361,   361,    44,     3,   163,   361,
     165,     4,   167,   156,   156,   199,     5,   221,     4,     4,
     361,   176,     3,   178,   179,   180,   181,   182,   183,   184,
       3,     3,   187,   188,     3,     3,   361,   361,   193,   248,
     195,   196,   197,   110,   199,   248,   201,   361,   203,   204,
     205,   206,     3,   132,   361,   361,   361,     3,   239,   363,
     361,    20,   183,     4,   329,   220,   221,   222,   362,   330,
       3,   329,     3,     3,   362,   230,   362,   232,   233,   234,
     362,   362,     3,     5,   239,     5,   241,   242,   243,    43,
     361,   246,   361,     4,    52,   250,   251,   361,   253,   254,
     255,   256,    52,   203,   361,   260,    10,    11,    12,    13,
      14,    15,    16,   300,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   362,
     362,   251,   248,   363,   362,   362,   361,   363,   361,   361,
     156,   156,   361,     3,   361,   363,   301,   302,   303,   304,
     305,    10,    11,    12,    13,    14,    15,    16,    55,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    80,   362,     3,     4,     5,     6,
       7,     8,   362,    10,   184,    12,   361,    20,   362,    16,
      17,    18,   362,    20,   361,    18,   362,    24,    25,    26,
      27,    28,   362,     3,   359,   360,   361,   362,   363,   364,
      37,   361,   361,   156,   362,    42,    43,     3,   362,    46,
      52,   362,   361,   128,    51,    52,    53,    54,    55,   361,
     361,    58,     3,    60,    61,    62,     3,    55,    65,    66,
      55,    68,    69,    70,     3,     3,   361,    74,     3,    55,
     362,   362,   362,   329,   132,   329,   362,   329,   329,   362,
     200,    88,     3,     3,   193,   249,    93,     3,     5,    52,
       5,    98,    99,   100,   362,    69,   123,   148,   105,   106,
     255,   108,   109,   110,   111,   158,   193,   114,     5,   116,
     117,   118,   119,   361,   121,   190,   123,   124,    20,   126,
     363,   128,   129,     3,   131,   132,   133,   134,    93,   362,
     362,   362,   362,   140,   362,   142,   362,   144,   145,   363,
     147,   148,   149,   150,   151,   152,     3,   154,   155,   156,
     157,   158,   362,   361,   361,   361,   163,   362,   165,   361,
     167,   362,   151,     3,   362,     3,     5,     3,   362,   176,
       3,   178,   179,   180,   181,   182,   183,   184,   361,   361,
     187,   188,   361,     3,     3,   363,   193,   212,   195,   196,
     197,   212,   199,   361,   201,   362,   203,   204,   205,   206,
     193,     3,     3,     3,    20,     3,     3,   166,   362,   166,
       3,   362,   226,   220,   221,   222,   363,     3,     3,   362,
     362,   362,   221,   230,   361,   232,   233,   234,   361,   361,
       3,   210,   239,   362,   241,   242,   243,   362,   362,   246,
     362,     5,     3,   250,   251,   209,   253,   254,   255,   256,
       5,     3,   143,   260,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   160,   361,   363,
     362,   251,   231,   183,   183,   177,     5,   177,     5,    88,
     886,   357,  1393,  1696,   301,   302,   303,   304,   305,    10,
      11,    12,    13,    14,    15,    16,  1627,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   485,   362,     3,     4,     5,     6,     7,     8,
    1197,    10,   477,    12,   113,  2078,    76,    16,    17,    18,
     346,    20,   983,   869,  1788,    24,    25,    26,    27,    28,
     595,  1296,   359,   360,   361,   362,   363,   364,    37,  1758,
    2120,   607,  1273,    42,    43,  1285,   146,    46,   831,   525,
      -1,  1434,    51,    52,    53,    54,    55,   327,    -1,    58,
     816,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,   118,
     119,    -1,   121,    -1,   123,   124,    -1,   126,    -1,   128,
     129,    -1,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,   187,   188,
      -1,    -1,    -1,    -1,   193,    -1,   195,   196,   197,    -1,
     199,    -1,   201,    -1,   203,   204,   205,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   230,    -1,   232,   233,   234,    -1,    -1,    -1,    -1,
     239,    -1,   241,   242,   243,    -1,    -1,   246,    -1,    -1,
      -1,   250,   251,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,   363,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   301,   302,   303,   304,   305,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   362,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     359,   360,   361,   362,   363,   364,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,   105,   106,    -1,   108,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,   118,   119,    -1,
     121,    -1,   123,   124,    -1,   126,    -1,   128,   129,    -1,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,    -1,    -1,
      -1,    -1,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,   178,   179,   180,
     181,   182,   183,   184,    -1,    -1,   187,   188,    -1,    -1,
      -1,    -1,   193,    -1,   195,   196,   197,    -1,   199,    -1,
     201,    -1,   203,   204,   205,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
      -1,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
     241,   242,   243,    -1,    -1,   246,    -1,    -1,    -1,   250,
     251,    -1,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,   363,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,   302,   303,   304,   305,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   362,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   359,   360,
     361,   362,   363,   364,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,   105,   106,    -1,   108,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,   118,   119,    -1,   121,    -1,
     123,   124,    -1,   126,    -1,   128,   129,    -1,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,
      -1,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,    -1,    -1,    -1,    -1,
     163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,   178,   179,   180,   181,   182,
     183,   184,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,
     193,    -1,   195,   196,   197,    -1,   199,    -1,   201,    -1,
     203,   204,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,   232,
     233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
     243,    -1,    -1,   246,    -1,    -1,    -1,   250,   251,    -1,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,   302,
     303,   304,   305,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   362,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   359,   360,   361,   362,
     363,   364,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
     105,   106,    -1,   108,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,   118,   119,    -1,   121,    -1,   123,   124,
      -1,   126,    -1,   128,   129,    -1,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,    -1,    -1,    -1,    -1,   163,    -1,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,   178,   179,   180,   181,   182,   183,   184,
      -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,    -1,
     195,   196,   197,    -1,   199,    -1,   201,    -1,   203,   204,
     205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,    -1,   232,   233,   234,
      -1,    -1,    -1,    -1,   239,    -1,   241,   242,   243,    -1,
      -1,   246,    -1,    -1,    -1,   250,   251,    -1,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   302,   303,   304,
     305,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   362,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   359,   360,   361,   362,   363,   364,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,   105,   106,
      -1,   108,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,   118,   119,    -1,   121,    -1,   123,   124,    -1,   126,
      -1,   128,   129,    -1,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,    -1,    -1,    -1,    -1,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
     187,   188,    -1,    -1,    -1,    -1,   193,    -1,   195,   196,
     197,    -1,   199,    -1,   201,    -1,   203,   204,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,   232,   233,   234,    -1,    -1,
      -1,    -1,   239,    -1,   241,   242,   243,    -1,    -1,   246,
      -1,    -1,    -1,   250,   251,    -1,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   363,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   301,   302,   303,   304,   305,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   362,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   359,   360,   361,   362,   363,   364,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,   118,
     119,    -1,   121,    -1,   123,   124,    -1,   126,    -1,   128,
     129,    -1,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,   187,   188,
      -1,    -1,    -1,    -1,   193,    -1,   195,   196,   197,    -1,
     199,    -1,   201,    -1,   203,   204,   205,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   230,    -1,   232,   233,   234,    -1,    -1,    -1,    -1,
     239,    -1,   241,   242,   243,    -1,    -1,   246,    -1,    -1,
      -1,   250,   251,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,   363,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   301,   302,   303,   304,   305,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   362,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     359,   360,   361,   362,   363,   364,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,   105,   106,    -1,   108,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,   118,   119,    -1,
     121,    -1,   123,   124,    -1,   126,    -1,   128,   129,    -1,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,    -1,    -1,
      -1,    -1,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,   178,   179,   180,
     181,   182,   183,   184,    -1,    -1,   187,   188,    -1,    -1,
      -1,    -1,   193,    -1,   195,   196,   197,    -1,   199,    -1,
     201,    -1,   203,   204,   205,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
      -1,   232,   233,   234,    -1,    -1,    -1,    -1,   239,    -1,
     241,   242,   243,    -1,    -1,   246,    -1,    -1,    -1,   250,
     251,    -1,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,   363,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,   302,   303,   304,   305,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   362,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   359,   360,
     361,   362,   363,   364,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,   105,   106,    -1,   108,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,   118,   119,    -1,   121,    -1,
     123,   124,    -1,   126,    -1,   128,   129,    -1,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,
      -1,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,    -1,    -1,    -1,    -1,
     163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,   178,   179,   180,   181,   182,
     183,   184,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,
     193,    -1,   195,   196,   197,    -1,   199,    -1,   201,    -1,
     203,   204,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,   232,
     233,   234,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
     243,    -1,    -1,   246,    -1,    -1,    -1,   250,   251,    -1,
     253,   254,   255,   256,    -1,    -1,    -1,   260,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,   302,
     303,   304,   305,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   362,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   359,   360,   361,   362,
     363,   364,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
     105,   106,    -1,   108,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,   118,   119,    -1,   121,    -1,   123,   124,
      -1,   126,    -1,   128,   129,    -1,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,    -1,    -1,    -1,    -1,   163,    -1,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,   178,   179,   180,   181,   182,   183,   184,
      -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,    -1,
     195,   196,   197,    -1,   199,    -1,   201,    -1,   203,   204,
     205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,    -1,   232,   233,   234,
      -1,    -1,    -1,    -1,   239,    -1,   241,   242,   243,    -1,
      -1,   246,    -1,    -1,    -1,   250,   251,    -1,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   302,   303,   304,
     305,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   362,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   359,   360,   361,   362,   363,   364,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,   105,   106,
      -1,   108,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,   118,   119,    -1,   121,    -1,   123,   124,    -1,   126,
      -1,   128,   129,    -1,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,    -1,    -1,    -1,    -1,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
     187,   188,    -1,    -1,    -1,    -1,   193,    -1,   195,   196,
     197,    -1,   199,    -1,   201,    -1,   203,   204,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,   232,   233,   234,    -1,    -1,
      -1,    -1,   239,    -1,   241,   242,   243,    -1,    -1,   246,
      -1,    -1,    -1,   250,   251,    -1,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   363,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   301,   302,   303,   304,   305,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   362,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   359,   360,   361,   362,   363,   364,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,   118,
     119,    -1,   121,    -1,   123,   124,    -1,   126,    -1,   128,
     129,    -1,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,   187,   188,
      -1,    -1,    -1,    -1,   193,    -1,   195,   196,   197,    -1,
     199,    -1,   201,    -1,   203,   204,   205,   206,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,   220,   221,   222,    -1,    -1,    -1,    -1,    17,    18,
      -1,   230,    -1,   232,   233,   234,    25,    26,    -1,    -1,
     239,    -1,   241,   242,   243,    -1,    -1,   246,    37,    -1,
      -1,   250,   251,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,   363,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   301,   302,   303,   304,   305,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   363,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     359,   360,   361,   362,   363,   364,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     179,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
      -1,    -1,    -1,    -1,    -1,   214,   215,    -1,    -1,    -1,
     219,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    -1,
     299,    -1,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   351,   352,   353,   354,     3,     4,     5,     6,
       7,     8,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,    12,
      13,    14,    15,    16,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   363,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,   363,    -1,    -1,    -1,
      -1,    -1,   179,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   235,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    -1,   299,    -1,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,    -1,    -1,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,   351,   352,   353,   354,     3,     4,
       5,     6,     7,     8,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
     363,    -1,    -1,    -1,    -1,    -1,    81,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      13,    14,    15,    16,   363,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   363,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   363,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    10,    11,    12,    13,    14,    15,    16,   213,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   363,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    -1,   299,    -1,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,   351,   352,   353,   354,
       3,     4,     5,     6,     7,     8,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   363,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
     363,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   363,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,
     363,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   363,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   363,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   254,    -1,    -1,    -1,    -1,    -1,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,    -1,   299,    -1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,    -1,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,   351,   352,
     353,   354,     3,     4,     5,     6,     7,     8,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    10,    11,    12,
      13,    14,    15,    16,   363,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,   363,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   363,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   363,    -1,    -1,    13,    14,    15,    16,   132,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
      -1,    -1,    -1,    -1,   363,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   363,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,    -1,   299,    -1,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,    -1,    -1,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     351,   352,   353,   354,     3,     4,     5,     6,     7,     8,
     361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,   362,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,   362,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   128,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,    -1,    -1,    -1,    -1,    -1,   362,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   362,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    -1,
     299,    -1,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   351,   352,   353,   354,     3,     4,     5,     6,
       7,     8,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,   362,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
     362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   105,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   362,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   362,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   179,    10,    11,    12,    13,    14,    15,    16,
     362,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   362,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    -1,   299,    -1,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,    -1,    -1,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,   351,   352,   353,   354,     3,     4,
       5,     6,     7,     8,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,   362,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    10,
      11,    12,    13,    14,    15,    16,    81,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    10,    11,    12,    13,    14,
      15,    16,   362,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,   362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   362,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    10,    11,    12,    13,    14,
      15,    16,   362,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    -1,   299,    -1,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,   351,   352,   353,   354,
       3,     4,     5,     6,     7,     8,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,   362,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,   362,    -1,    -1,    -1,    -1,    -1,    -1,    81,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   105,   362,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   362,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   179,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   362,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   362,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,    -1,   299,    -1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,    -1,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,   351,   352,
     353,   354,     3,     4,     5,     6,     7,     8,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,   362,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   362,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     362,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
      -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   362,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    10,    11,    12,    13,    14,    15,    16,
     362,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,    -1,   299,    -1,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,    -1,    -1,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     351,   352,   353,   354,     3,     4,     5,     6,     7,     8,
     361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,   362,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    10,    11,    12,    13,    14,
      15,    16,    81,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   362,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    10,    11,    12,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   362,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    10,    11,
      12,    13,    14,    15,    16,   362,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   362,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    -1,
     299,    -1,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   351,   352,   353,   354,    -1,    -1,    -1,    -1,
      -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   362,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   362,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   362,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    10,    11,    12,    13,    14,    15,    16,   362,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   362,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    10,    11,    12,    13,    14,    15,    16,
     362,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   362,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   362,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   362,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   362,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    10,    11,    12,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   362,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   362,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    10,    11,
      12,    13,    14,    15,    16,   362,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   362,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   362,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   362,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    10,    -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     362,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   362,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    87,   362,
      34,    -1,    -1,    -1,    38,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   362,    -1,    -1,    -1,    60,    -1,    -1,    96,
      97,    65,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,   130,   131,    -1,    78,    -1,    -1,   362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,   136,
     137,    -1,   139,    -1,   362,    10,    11,    12,    13,    14,
      15,    16,    18,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   362,   188,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    45,
      -1,    -1,    48,    -1,    -1,   149,   205,    -1,    -1,   208,
      -1,   362,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,   227,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,   362,    -1,   192,    -1,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,
     362,    58,    59,    -1,    -1,    -1,    -1,   221,   222,    -1,
     257,   258,    -1,    -1,    -1,    -1,    -1,    74,   234,    -1,
      -1,    -1,   236,   362,    -1,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,   106,
     107,   108,   109,    -1,    -1,    -1,    -1,    -1,   115,    -1,
      -1,    -1,    -1,   179,    -1,    -1,    -1,   124,    -1,   362,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   350,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,   174,   175,   234,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    10,    11,    12,
      13,    14,    15,    16,   191,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,   224,   225,    -1,
      -1,    -1,    -1,   230,    -1,   232,    -1,    -1,    -1,    -1,
     237,   238,    -1,    -1,    -1,    -1,   243,   244,    -1,    -1,
      -1,    -1,    -1,   250,    -1,   252,    -1,    -1,    -1,    -1,
     257,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   128,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   116,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   104,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    43,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    42,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    42,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    78,    99,   100,   149,   192,
     194,   202,   221,   222,   236,   239,   247,   366,   402,   403,
     442,   446,   447,   450,   451,   454,   455,   456,   458,   474,
     475,   484,   487,   489,   490,   491,   513,   516,   523,   524,
     527,   530,   531,   534,   205,   233,   350,   233,     3,    10,
      87,    94,   130,   131,   147,   188,   205,   208,   227,   228,
     242,   350,   495,     3,   443,    87,   131,   147,   188,   205,
     208,   233,   350,   466,   233,   233,   466,     8,   208,   514,
     515,   421,   233,   466,   485,     3,    87,     0,   359,   453,
       3,     3,     3,     3,   361,   202,   148,   488,     3,   147,
       3,     3,    77,   148,     3,     3,   488,   227,   147,   488,
     233,   476,     3,   128,   146,   162,   189,   444,     3,   148,
       3,   148,     3,     3,   148,     3,   148,     3,   148,     3,
     148,     3,   148,    95,   138,   146,   151,   162,   467,     3,
       3,   467,     9,    20,     3,   105,   363,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    37,    64,    69,
      72,    73,    81,    98,   102,   138,   169,   179,   207,   214,
     215,   219,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     299,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   351,   352,
     353,   354,   361,   367,   422,   423,     3,   146,   162,     3,
     159,   361,   425,   426,   427,   428,   431,   441,     3,   366,
      46,    47,    66,   196,    92,   112,    35,    67,    92,   100,
     112,   173,   194,   249,    47,   194,   532,   360,     3,     4,
       5,     6,     7,     8,   179,   362,   525,   526,   131,   188,
     260,     3,    43,     3,   361,   183,     3,   148,   260,   361,
      36,    51,   528,     3,     3,    77,   148,     3,   488,   361,
     477,   360,   445,     3,   444,   128,   363,   260,   260,   260,
     260,   260,   260,   260,     3,   226,     3,   367,   367,   515,
     360,   361,     9,   367,   367,   367,   254,   367,   401,   360,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   367,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    43,   424,   128,   151,   363,   363,   360,
     424,   361,   403,   425,   221,   363,    68,   145,   163,   176,
     201,   219,   432,   434,    43,   430,   430,    45,    45,    63,
      76,     3,    76,    63,     3,    63,    76,    63,     3,    76,
       3,    63,    76,    63,   256,   226,    18,   170,   355,   356,
     357,   358,   533,     3,   362,   363,     3,     3,    53,    54,
      56,    58,    59,    74,   106,   107,   108,   109,   115,   124,
     144,   152,   161,   168,   171,   174,   175,   191,   220,   221,
     224,   225,   230,   232,   237,   238,   243,   244,   250,   252,
     257,   509,   183,     3,    16,   142,   181,   517,   518,   519,
       3,   183,   260,     3,   517,    99,   149,   239,   529,   183,
       3,   148,   260,   532,     3,     3,   478,   128,   226,   479,
      26,   253,   404,   246,   425,     3,     3,     3,     3,     3,
       3,     3,     3,   221,   361,   468,     3,   221,   468,     3,
     367,   372,   373,   367,   367,   401,   116,   117,   254,     3,
       3,   378,   367,    57,   164,   235,   367,   399,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   362,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   362,   367,   367,   367,   362,   367,   367,
     367,   367,   367,   367,    26,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   362,   362,   362,   362,
     362,   367,   367,   362,   362,   362,   367,   367,     5,   362,
     362,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   362,   362,   367,   367,   367,   367,   367,
       6,    18,   179,   298,   361,    13,    14,    16,    19,   367,
      37,    39,   213,   361,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,     3,   425,     3,
     423,     3,   452,     3,   125,   146,   247,   438,   429,   362,
     362,     3,   486,   426,   163,   201,   435,   427,   155,   182,
     433,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,   509,     3,   226,     3,     3,     3,     5,     3,   358,
       5,     5,   256,     5,    55,     5,   526,   361,   361,   361,
     505,   505,   505,   505,   505,   505,   361,   505,   505,   505,
      56,   506,   506,   505,   505,   505,   361,   506,   505,   506,
     361,   361,    18,    70,   105,     3,   509,     3,     3,     3,
     362,   363,   246,   361,     3,     3,   183,   362,   183,     3,
     183,   260,     3,   146,   202,   330,   360,   361,   511,   512,
     362,   363,     4,   217,   218,   480,   367,   184,   414,   425,
     404,   445,     3,   473,     3,   469,   251,   403,   473,   251,
     403,   363,   362,   234,   116,   117,   367,   367,   362,   403,
     128,   363,   362,   128,   367,   363,   363,   363,   362,   362,
     362,   362,   362,   362,   363,   363,   363,   363,   362,   363,
     363,   363,   362,   362,   362,   362,   363,   363,   362,   363,
     362,   362,   362,    43,   363,   363,   363,   363,   300,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   363,
     363,   363,   362,   363,   329,   329,   329,   362,   363,   362,
     363,   362,   329,   329,   363,   362,   362,   362,   362,   362,
     362,   362,   362,   363,   363,   363,   363,   363,   363,   363,
     363,   362,   363,   362,   362,   362,   363,     6,   179,   374,
     376,   367,   367,   361,   367,    42,   361,   361,   361,   368,
     404,   128,   363,   424,   156,   156,   156,   403,    20,   360,
     363,   404,   433,   433,   155,   183,   427,   155,    70,   126,
     187,   242,   509,   509,     3,   504,   509,     3,   226,   226,
       5,     5,   517,   517,     5,   507,   508,   507,   507,     4,
     510,   507,   507,   507,   508,   508,   507,   507,   507,   510,
     508,   507,   508,     5,     5,   179,   361,   367,   361,   509,
     509,   509,   199,   519,   248,     3,   306,   307,   308,   309,
     448,   449,   246,   361,   183,     3,    43,    52,     3,   246,
     361,     3,     3,   183,    86,     3,    63,    70,   126,   130,
     147,   156,   187,   242,   496,   497,   503,   430,     3,    79,
      91,   127,   135,   179,   223,   256,   361,   481,   482,   483,
      55,   165,   417,   404,    20,   185,   363,   459,   362,   363,
     361,   470,   459,   470,   459,   372,   367,   367,   116,   234,
      83,   362,   367,   367,   367,   128,   153,   400,   400,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     509,   509,   367,   367,   367,     4,   329,   329,   329,   329,
     329,   329,   367,   367,   367,   367,   361,   361,   361,   329,
       5,   329,     5,   329,   361,   361,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   372,   403,   375,
     377,    42,   367,   371,   369,   370,   403,   133,   405,   425,
       3,   438,   132,   439,   439,   439,   362,   367,     3,     3,
     414,   427,   367,   183,   246,   436,   437,   427,   361,   156,
     156,   361,   504,   504,   509,    18,    36,    40,    43,    45,
      48,    63,    70,    71,   105,   122,   156,   179,   187,   242,
     457,   504,     3,     3,   362,   362,   362,   363,   240,   259,
      74,    75,   362,   363,   362,   362,   362,    70,   367,   448,
      54,    58,   106,   109,   124,   144,   152,   230,   232,   250,
     520,   361,   361,   361,   361,   361,   362,   363,   248,   448,
       3,   246,   361,    52,   521,   132,   248,   448,   246,   361,
     183,     3,     3,   361,   511,     3,   361,   156,   147,   156,
     361,   361,   156,   361,   362,   363,     3,   403,     4,    79,
     230,     6,     4,     4,   361,   482,   363,     3,     5,   415,
     416,   367,   198,   535,   105,   367,   156,     3,     3,   105,
     367,   472,   363,   459,   459,   116,   367,   361,   132,   362,
     362,   363,   362,   367,   367,   362,   362,   362,   362,   362,
     363,   363,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   363,   362,   361,   361,   361,   361,   361,   361,
     362,   363,   363,   362,   362,   379,   380,   381,   361,   362,
     363,   361,   362,   363,   361,   397,   398,   362,   363,   363,
     363,   362,   362,   363,   363,   362,   363,   362,   363,   362,
     363,   362,   362,   372,   403,   367,   403,   403,   403,   362,
      55,   140,   409,   404,   155,   361,   361,   361,    20,    20,
     360,   417,   367,   361,   437,   367,   361,   361,     3,   502,
     457,   457,   504,   179,     3,   361,   361,   361,    44,     3,
     361,     4,     4,     5,     6,     7,    64,   312,   313,   314,
     361,   156,   156,   457,   199,    43,    52,     5,   221,     4,
     508,     4,   508,   508,   361,   362,   362,    43,    52,   448,
       3,     3,     3,     3,     3,   361,   362,   361,   248,   448,
     521,     3,     4,     5,     6,     7,     8,    10,    12,    16,
      17,    18,    20,    24,    25,    26,    27,    28,    37,    42,
      43,    46,    51,    52,    53,    54,    55,    58,    60,    61,
      62,    65,    66,    68,    69,    70,    74,    88,    93,    98,
      99,   100,   105,   106,   108,   109,   110,   111,   114,   116,
     117,   118,   119,   121,   123,   124,   126,   128,   129,   131,
     132,   133,   134,   140,   142,   144,   145,   147,   148,   149,
     150,   151,   152,   154,   155,   156,   157,   158,   163,   165,
     167,   176,   178,   179,   180,   181,   182,   183,   184,   187,
     188,   193,   195,   196,   197,   199,   201,   203,   204,   205,
     206,   220,   221,   222,   230,   232,   233,   234,   239,   241,
     242,   243,   246,   250,   251,   253,   254,   255,   256,   260,
     301,   302,   303,   304,   305,   359,   360,   361,   362,   363,
     364,   522,   110,   361,   362,   248,   448,     3,   246,   361,
     132,   496,    70,   126,   187,   242,   367,   361,   361,   361,
       3,   420,   420,   361,   502,   492,   511,   497,   509,   482,
     362,   483,    41,   104,   360,   407,   407,   363,   167,   363,
       3,    26,   536,   239,    20,   362,   363,   471,   183,   461,
       4,   367,   367,   362,    96,    97,   101,   103,   136,   137,
     139,   257,   258,   367,   367,   367,   383,   384,   382,   385,
     386,   387,   367,   367,   330,   410,   410,   410,   388,   329,
       4,     5,   392,   329,     4,     5,   396,   410,   410,   367,
     367,   367,   367,   367,   367,   367,   367,   362,   362,   362,
     362,   362,   367,   406,   367,   414,   405,     3,   440,   440,
     440,   367,   367,     3,   535,   420,   362,     3,   499,     3,
     498,   362,   363,   457,     5,   367,     5,    43,    70,   187,
     242,   367,   361,   361,   361,   367,   520,    52,   521,   362,
       4,   367,    52,   521,   362,   362,   362,   362,   363,   448,
     448,   361,   362,   116,   521,   521,   521,   521,   521,   521,
     203,   448,   361,   362,   361,   248,   448,   251,   362,   361,
     156,   156,   361,   362,   499,   420,   420,   362,   363,   362,
     498,   362,    40,   183,   209,   330,   504,   362,     3,   416,
     367,   367,   363,   460,   105,   367,   105,   367,   361,    80,
     535,   362,   362,   362,   362,   362,   362,   410,   410,   410,
     410,   410,   410,   362,   363,   362,    55,   184,   412,   412,
     412,   410,   361,   362,   362,   410,   361,   362,   362,   410,
     412,   412,   362,   362,   362,   362,   362,   363,   362,   362,
     407,   256,   363,   408,   417,   409,   362,   363,   362,   362,
      20,   362,    18,   362,   363,   362,   363,     3,   362,   363,
     362,   362,   363,   361,   361,   156,   362,   362,   362,   362,
     362,    43,    52,   521,   116,   362,   521,   116,     3,   362,
     362,   448,   116,   116,   116,   116,   116,   116,    52,   362,
     448,   448,   361,   362,   128,   492,   511,   367,   361,   361,
     502,   362,   362,   362,     3,   362,     5,    20,     3,    55,
      55,   407,     3,     3,   465,   472,   361,   462,   412,   412,
     412,   412,   412,   412,   367,     3,   411,    55,   362,   362,
     362,   412,   389,   329,   329,   412,   393,   329,   329,   412,
     362,   362,   367,   200,   367,   132,   418,   414,     3,   367,
     249,   193,     3,     3,     5,    49,    50,     5,   367,   367,
      52,   521,   116,   116,   362,   362,    69,   123,   148,   158,
     255,   521,   362,   362,   448,   361,   362,   499,   498,   362,
     193,     5,    99,   229,   190,   248,   190,    20,   363,   362,
       3,    93,   463,   362,   362,   362,   362,   362,   362,   362,
     363,     3,   413,   362,   410,   361,   361,   362,   410,   361,
     361,   362,   362,   407,   211,   239,   151,   419,   417,     3,
     362,   362,   362,   362,   521,   116,   116,   362,     5,   362,
     362,     3,     3,     3,   361,   361,   361,   367,     3,   362,
     363,    82,   239,     3,   407,   363,   412,   390,   391,   412,
     394,   395,   212,   212,   420,   361,    49,    50,   116,   362,
     193,   360,   361,     3,     3,     3,    20,     3,   464,     3,
     362,   410,   410,   362,   410,   410,   166,   166,     3,   500,
     226,     3,     3,   500,   362,   362,   362,   367,   221,   407,
     412,   412,   412,   412,   362,   363,   361,   360,   361,   361,
     362,   361,   210,   465,   362,   362,   362,   362,   501,     3,
       5,     3,   500,   500,   501,   209,   493,   494,     5,    18,
      89,   169,   183,   362,   361,   362,   362,    18,     3,   362,
     363,    89,   249,   143,   129,   186,   216,    99,   239,   500,
     501,   501,   251,   494,    90,   141,    66,   178,   196,   221,
      66,   178,   196,   221,   362,   160,   105,   179,   105,   179,
     501,   231,     4,   170,   183,   183,   177,   177,     5,     5
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
#line 451 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 457 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 458 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 460 "parser/evoparser.y"
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
#line 473 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 475 "parser/evoparser.y"
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
#line 493 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 501 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 509 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 515 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 522 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 523 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 524 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 525 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 526 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 527 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 528 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 529 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 530 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 531 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 532 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 533 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 534 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 535 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 536 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 537 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 538 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 539 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 540 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 542 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 547 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 548 "parser/evoparser.y"
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
#line 556 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 557 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 558 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 559 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 560 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 561 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 564 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 43:
#line 565 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 44:
#line 566 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 45:
#line 567 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 46:
#line 568 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 47:
#line 571 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 48:
#line 572 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 49:
#line 575 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 50:
#line 576 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 51:
#line 579 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 53:
#line 583 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 583 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 584 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 56:
#line 584 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 57:
#line 585 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 586 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 593 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 594 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 61:
#line 601 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 62:
#line 602 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 63:
#line 612 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 64:
#line 616 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 65:
#line 617 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 618 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 619 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 620 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 621 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 70:
#line 622 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 71:
#line 623 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 72:
#line 627 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 73:
#line 628 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 74:
#line 629 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 75:
#line 630 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 76:
#line 631 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 77:
#line 632 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 78:
#line 634 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 635 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 80:
#line 636 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 81:
#line 637 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 82:
#line 638 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 639 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 84:
#line 640 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 641 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 86:
#line 642 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 643 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 88:
#line 644 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 645 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 90:
#line 647 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 91:
#line 648 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 649 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 93:
#line 650 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 651 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 95:
#line 652 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 653 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 97:
#line 654 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 98:
#line 655 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 656 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 100:
#line 657 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 101:
#line 658 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 102:
#line 659 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 103:
#line 660 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 661 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 105:
#line 662 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 106:
#line 664 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 107:
#line 665 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 108:
#line 666 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 109:
#line 667 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 110:
#line 668 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 111:
#line 669 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 112:
#line 672 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 113:
#line 673 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 114:
#line 674 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 115:
#line 675 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 116:
#line 676 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 677 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 118:
#line 678 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 679 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 680 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 121:
#line 681 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 122:
#line 682 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 683 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 124:
#line 684 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 125:
#line 685 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 126:
#line 686 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 127:
#line 687 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 128:
#line 688 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 129:
#line 689 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 130:
#line 690 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 131:
#line 691 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 132:
#line 692 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 133:
#line 693 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 134:
#line 694 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 135:
#line 695 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 136:
#line 696 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 137:
#line 697 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 138:
#line 698 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 139:
#line 699 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 140:
#line 700 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 141:
#line 701 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 142:
#line 702 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 143:
#line 703 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 144:
#line 704 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 145:
#line 705 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 146:
#line 707 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 147:
#line 708 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 148:
#line 709 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 149:
#line 710 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 150:
#line 711 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 151:
#line 712 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 152:
#line 713 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 153:
#line 714 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 154:
#line 716 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 155:
#line 717 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 156:
#line 718 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 157:
#line 719 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 158:
#line 720 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 159:
#line 721 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 160:
#line 722 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 161:
#line 723 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 162:
#line 724 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 163:
#line 725 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 164:
#line 726 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 165:
#line 727 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 166:
#line 728 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 167:
#line 729 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 168:
#line 730 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 169:
#line 731 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 170:
#line 732 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 171:
#line 733 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 172:
#line 734 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 735 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 174:
#line 736 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 175:
#line 737 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 176:
#line 739 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 177:
#line 740 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 178:
#line 741 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 179:
#line 742 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 180:
#line 743 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 181:
#line 745 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 182:
#line 746 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 183:
#line 748 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 184:
#line 749 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 185:
#line 750 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 186:
#line 752 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 187:
#line 753 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 188:
#line 754 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 189:
#line 755 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 190:
#line 762 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 191:
#line 769 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 192:
#line 776 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 780 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 784 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 195:
#line 788 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 196:
#line 792 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 197:
#line 796 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 198:
#line 802 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 803 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 200:
#line 804 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 201:
#line 808 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 202:
#line 814 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 203:
#line 820 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 204:
#line 821 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 822 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 823 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 207:
#line 824 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 208:
#line 825 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 209:
#line 826 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 827 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 211:
#line 828 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 212:
#line 832 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 213:
#line 834 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 214:
#line 836 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 215:
#line 838 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 216:
#line 842 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 217:
#line 850 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 218:
#line 860 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 219:
#line 861 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 220:
#line 864 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 221:
#line 865 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 222:
#line 869 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 877 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 224:
#line 885 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 225:
#line 896 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 226:
#line 905 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 227:
#line 910 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 228:
#line 923 "parser/evoparser.y"
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

  case 230:
#line 936 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 232:
#line 938 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 233:
#line 941 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 234:
#line 948 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 235:
#line 956 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 957 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 958 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 238:
#line 961 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 239:
#line 962 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 241:
#line 966 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 244:
#line 975 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 245:
#line 977 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 248:
#line 985 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 249:
#line 987 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 254:
#line 999 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 255:
#line 1005 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 256:
#line 1012 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 257:
#line 1020 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 258:
#line 1021 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1022 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 260:
#line 1023 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 261:
#line 1026 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 262:
#line 1027 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 263:
#line 1028 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 264:
#line 1029 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 265:
#line 1030 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 267:
#line 1034 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 268:
#line 1037 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1038 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 270:
#line 1041 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 271:
#line 1042 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 272:
#line 1043 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 273:
#line 1044 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 274:
#line 1045 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 275:
#line 1046 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 276:
#line 1047 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 277:
#line 1048 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 278:
#line 1049 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 279:
#line 1052 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 280:
#line 1053 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 281:
#line 1055 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 282:
#line 1063 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 283:
#line 1068 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 284:
#line 1069 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 285:
#line 1070 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 286:
#line 1073 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1074 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1083 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 291:
#line 1089 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 292:
#line 1090 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 293:
#line 1092 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 294:
#line 1100 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 295:
#line 1104 "parser/evoparser.y"
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

  case 296:
#line 1124 "parser/evoparser.y"
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

  case 299:
#line 1150 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 300:
#line 1152 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 301:
#line 1154 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 302:
#line 1156 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 303:
#line 1158 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 304:
#line 1161 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 305:
#line 1162 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 306:
#line 1163 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 307:
#line 1166 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 308:
#line 1167 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 309:
#line 1170 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1171 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 311:
#line 1174 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 312:
#line 1175 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 313:
#line 1176 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 316:
#line 1183 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 317:
#line 1184 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 318:
#line 1189 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 319:
#line 1191 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 320:
#line 1193 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 322:
#line 1197 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 323:
#line 1198 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1201 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1202 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 326:
#line 1205 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 327:
#line 1210 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 328:
#line 1220 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 329:
#line 1227 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 330:
#line 1228 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 331:
#line 1229 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 332:
#line 1230 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 333:
#line 1235 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 334:
#line 1239 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1241 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 338:
#line 1247 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 339:
#line 1252 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 340:
#line 1259 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 341:
#line 1266 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 342:
#line 1276 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 343:
#line 1283 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 344:
#line 1290 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 345:
#line 1298 "parser/evoparser.y"
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

  case 346:
#line 1308 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 347:
#line 1316 "parser/evoparser.y"
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

  case 348:
#line 1326 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 349:
#line 1334 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 350:
#line 1343 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 351:
#line 1352 "parser/evoparser.y"
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

  case 352:
#line 1362 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 353:
#line 1370 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 354:
#line 1379 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 355:
#line 1388 "parser/evoparser.y"
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

  case 356:
#line 1398 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 357:
#line 1407 "parser/evoparser.y"
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

  case 358:
#line 1419 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 359:
#line 1424 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 360:
#line 1429 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 361:
#line 1435 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 362:
#line 1442 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 363:
#line 1449 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 364:
#line 1456 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 365:
#line 1466 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 366:
#line 1473 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 367:
#line 1482 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 368:
#line 1489 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 369:
#line 1495 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 370:
#line 1503 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 371:
#line 1509 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 373:
#line 1517 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 374:
#line 1518 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 375:
#line 1519 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 376:
#line 1520 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 377:
#line 1525 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 378:
#line 1532 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 379:
#line 1541 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 380:
#line 1548 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 381:
#line 1554 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 382:
#line 1564 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 383:
#line 1568 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 384:
#line 1574 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 385:
#line 1580 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 386:
#line 1587 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 387:
#line 1593 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 388:
#line 1600 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 389:
#line 1606 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 390:
#line 1612 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 391:
#line 1618 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 392:
#line 1624 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 393:
#line 1630 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 394:
#line 1636 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 395:
#line 1642 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 396:
#line 1648 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 397:
#line 1654 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 398:
#line 1660 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 399:
#line 1666 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 400:
#line 1672 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 401:
#line 1678 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 402:
#line 1684 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 403:
#line 1691 "parser/evoparser.y"
    { ;}
    break;

  case 404:
#line 1692 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 405:
#line 1693 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 406:
#line 1697 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 407:
#line 1705 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 408:
#line 1711 "parser/evoparser.y"
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

  case 410:
#line 1724 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 411:
#line 1724 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 414:
#line 1732 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 415:
#line 1733 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 416:
#line 1734 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 417:
#line 1738 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 418:
#line 1739 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 419:
#line 1740 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 420:
#line 1744 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 421:
#line 1752 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 422:
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 423:
#line 1762 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 424:
#line 1763 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 425:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 426:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 430:
#line 1772 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 431:
#line 1776 "parser/evoparser.y"
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

  case 432:
#line 1786 "parser/evoparser.y"
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

  case 433:
#line 1798 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 434:
#line 1799 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 435:
#line 1799 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 436:
#line 1802 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 437:
#line 1803 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 438:
#line 1804 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 439:
#line 1805 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 440:
#line 1809 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 441:
#line 1812 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 442:
#line 1813 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 443:
#line 1814 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 444:
#line 1815 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 445:
#line 1821 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 446:
#line 1827 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 447:
#line 1832 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 448:
#line 1837 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 449:
#line 1841 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 450:
#line 1845 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 451:
#line 1847 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 454:
#line 1853 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 455:
#line 1854 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 456:
#line 1858 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 457:
#line 1859 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 458:
#line 1863 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 459:
#line 1864 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 460:
#line 1865 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 467:
#line 1880 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 468:
#line 1881 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 469:
#line 1882 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 470:
#line 1883 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 471:
#line 1884 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 472:
#line 1885 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 473:
#line 1886 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 474:
#line 1887 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 475:
#line 1892 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 476:
#line 1901 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 477:
#line 1908 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 478:
#line 1909 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 479:
#line 1910 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 480:
#line 1915 "parser/evoparser.y"
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

  case 481:
#line 1926 "parser/evoparser.y"
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

  case 482:
#line 1938 "parser/evoparser.y"
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

  case 483:
#line 1949 "parser/evoparser.y"
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

  case 484:
#line 1964 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 485:
#line 1968 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 486:
#line 1972 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 487:
#line 1973 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 488:
#line 1978 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 489:
#line 1980 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 490:
#line 1982 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 491:
#line 1984 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 492:
#line 1987 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 493:
#line 1988 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 494:
#line 1994 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 1999 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 496:
#line 2001 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 497:
#line 2003 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 498:
#line 2005 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 499:
#line 2007 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 500:
#line 2011 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 501:
#line 2015 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 502:
#line 2016 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 503:
#line 2021 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 504:
#line 2031 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 505:
#line 2040 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 506:
#line 2048 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 508:
#line 2056 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 509:
#line 2057 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 510:
#line 2058 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 511:
#line 2059 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 512:
#line 2061 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 513:
#line 2063 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 514:
#line 2065 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 517:
#line 2073 "parser/evoparser.y"
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

  case 518:
#line 2088 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 519:
#line 2096 "parser/evoparser.y"
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

  case 520:
#line 2110 "parser/evoparser.y"
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

  case 521:
#line 2124 "parser/evoparser.y"
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

  case 522:
#line 2138 "parser/evoparser.y"
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

  case 523:
#line 2150 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 524:
#line 2151 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 525:
#line 2152 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 526:
#line 2155 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 527:
#line 2156 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 528:
#line 2159 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 529:
#line 2160 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 530:
#line 2161 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 531:
#line 2162 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 532:
#line 2163 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 533:
#line 2164 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 534:
#line 2165 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 535:
#line 2166 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 536:
#line 2168 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 537:
#line 2170 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 538:
#line 2172 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 539:
#line 2174 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 540:
#line 2176 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 541:
#line 2178 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 542:
#line 2181 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 543:
#line 2182 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 544:
#line 2185 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 545:
#line 2186 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 546:
#line 2189 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 547:
#line 2190 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 549:
#line 2194 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 550:
#line 2195 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 551:
#line 2196 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 552:
#line 2197 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 553:
#line 2198 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 554:
#line 2199 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 555:
#line 2200 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 556:
#line 2201 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 557:
#line 2202 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 558:
#line 2203 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 559:
#line 2204 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 560:
#line 2205 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 561:
#line 2206 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 562:
#line 2207 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 563:
#line 2208 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 564:
#line 2209 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 565:
#line 2210 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 566:
#line 2213 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 567:
#line 2214 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 568:
#line 2217 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 569:
#line 2219 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 570:
#line 2227 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 571:
#line 2228 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 573:
#line 2230 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 574:
#line 2231 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 575:
#line 2232 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 576:
#line 2233 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 577:
#line 2234 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 578:
#line 2235 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 579:
#line 2236 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 580:
#line 2237 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 581:
#line 2238 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 582:
#line 2245 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 583:
#line 2246 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 584:
#line 2247 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 585:
#line 2248 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 586:
#line 2249 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 587:
#line 2250 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 588:
#line 2251 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 589:
#line 2252 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 590:
#line 2253 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 591:
#line 2254 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 592:
#line 2255 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 593:
#line 2256 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 594:
#line 2257 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 595:
#line 2258 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 596:
#line 2259 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 597:
#line 2260 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 598:
#line 2261 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 599:
#line 2262 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 600:
#line 2263 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 601:
#line 2264 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 602:
#line 2265 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 603:
#line 2268 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 604:
#line 2269 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 605:
#line 2270 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 606:
#line 2273 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 607:
#line 2274 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 608:
#line 2277 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 609:
#line 2278 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 610:
#line 2279 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 612:
#line 2283 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 613:
#line 2284 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 614:
#line 2288 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 615:
#line 2289 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 616:
#line 2290 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 617:
#line 2291 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 618:
#line 2292 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 619:
#line 2293 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 620:
#line 2294 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 621:
#line 2295 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 622:
#line 2296 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 623:
#line 2297 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 624:
#line 2298 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 625:
#line 2299 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 626:
#line 2300 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 627:
#line 2301 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 628:
#line 2302 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 629:
#line 2303 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 630:
#line 2304 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 631:
#line 2305 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 632:
#line 2306 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 633:
#line 2307 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 634:
#line 2308 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 635:
#line 2309 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 636:
#line 2310 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 637:
#line 2311 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 638:
#line 2312 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 639:
#line 2313 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 640:
#line 2314 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 641:
#line 2315 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 642:
#line 2316 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 643:
#line 2317 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 644:
#line 2318 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 645:
#line 2319 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 646:
#line 2320 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 647:
#line 2323 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 648:
#line 2324 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 649:
#line 2328 "parser/evoparser.y"
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

  case 650:
#line 2340 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 651:
#line 2341 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 652:
#line 2342 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 653:
#line 2346 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 654:
#line 2349 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 655:
#line 2350 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 659:
#line 2354 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 660:
#line 2355 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 661:
#line 2363 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 662:
#line 2368 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 663:
#line 2374 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 664:
#line 2380 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 665:
#line 2387 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 666:
#line 2394 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 667:
#line 2400 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 668:
#line 2406 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 669:
#line 2413 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 674:
#line 2429 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 675:
#line 2430 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 676:
#line 2431 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 677:
#line 2432 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 678:
#line 2435 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 679:
#line 2436 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 680:
#line 2437 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 681:
#line 2438 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 682:
#line 2439 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 683:
#line 2440 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 684:
#line 2441 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 685:
#line 2442 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 686:
#line 2443 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 687:
#line 2444 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 696:
#line 2461 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 697:
#line 2462 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 818:
#line 2480 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 819:
#line 2487 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 820:
#line 2492 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 821:
#line 2498 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 822:
#line 2504 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 823:
#line 2510 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 824:
#line 2521 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 825:
#line 2526 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 826:
#line 2532 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 829:
#line 2543 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 830:
#line 2544 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 831:
#line 2545 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 832:
#line 2546 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 833:
#line 2547 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 834:
#line 2548 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 835:
#line 2549 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 836:
#line 2556 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 837:
#line 2561 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 838:
#line 2568 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 839:
#line 2569 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 840:
#line 2572 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 841:
#line 2573 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 842:
#line 2574 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 843:
#line 2577 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 844:
#line 2582 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 845:
#line 2588 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 846:
#line 2597 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 847:
#line 2605 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 848:
#line 2615 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 849:
#line 2620 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 852:
#line 2633 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 853:
#line 2634 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 854:
#line 2635 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 855:
#line 2636 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 856:
#line 2637 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 857:
#line 2638 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 858:
#line 2639 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 859:
#line 2640 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 860:
#line 2643 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 861:
#line 2648 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 862:
#line 2654 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 863:
#line 2664 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 864:
#line 2671 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 865:
#line 2678 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 866:
#line 2686 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 868:
#line 2696 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 870:
#line 2700 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 871:
#line 2701 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10182 "parser/evoparser.tab.c"
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


#line 2704 "parser/evoparser.y"

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
