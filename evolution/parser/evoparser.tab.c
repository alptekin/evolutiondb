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
     LESS = 405,
     LONGTEXT = 406,
     LOW_PRIORITY = 407,
     LEFT = 408,
     LEADING = 409,
     LIMIT = 410,
     LOCKED = 411,
     OFFSET = 412,
     LONGBLOB = 413,
     MATCH = 414,
     MAXVALUE = 415,
     MEDIUMTEXT = 416,
     MINUS = 417,
     MODIFY = 418,
     MEDIUMBLOB = 419,
     MEDIUMINT = 420,
     NATURAL = 421,
     NODE = 422,
     NO_ACTION = 423,
     NULLX = 424,
     OPEN = 425,
     OUT = 426,
     OUTER = 427,
     ON = 428,
     ORDER = 429,
     ONDUPLICATE = 430,
     PARTIAL = 431,
     PRIMARY = 432,
     PROCEDURE = 433,
     QUICK = 434,
     RANGE = 435,
     REAL = 436,
     RECLAIM = 437,
     REFERENCES = 438,
     RENAME = 439,
     RESIGNAL = 440,
     RESTRICT = 441,
     RETURN = 442,
     RETURNING = 443,
     RETURNS = 444,
     ROLLUP = 445,
     RIGHT = 446,
     REPLACE = 447,
     ROW = 448,
     SIGNAL = 449,
     TRIGGER = 450,
     UNTIL = 451,
     SQL_SMALL_RESULT = 452,
     SCHEMA = 453,
     SHARD = 454,
     SHARDS = 455,
     SHARE = 456,
     SKIP = 457,
     SOME = 458,
     SQL_CALC_FOUND_ROWS = 459,
     SQL_BIG_RESULT = 460,
     SIMPLE = 461,
     STDIN = 462,
     STDOUT = 463,
     STRAIGHT_JOIN = 464,
     SMALLINT = 465,
     SET = 466,
     SELECT = 467,
     QUOTE = 468,
     TINYTEXT = 469,
     TINYINT = 470,
     TO = 471,
     TEMPORARY = 472,
     GLOBAL = 473,
     PRESERVE = 474,
     TEXT = 475,
     THAN = 476,
     TIMESTAMP = 477,
     TABLE = 478,
     THEN = 479,
     TRAILING = 480,
     TRUNCATE = 481,
     TINYBLOB = 482,
     TIME = 483,
     UPDATE = 484,
     UNSIGNED = 485,
     UNION = 486,
     UNIQUE = 487,
     UUID = 488,
     JSON = 489,
     VIEW = 490,
     USING = 491,
     USE = 492,
     HASH = 493,
     VALIDATE = 494,
     VARCHAR = 495,
     VALUES = 496,
     VARBINARY = 497,
     WHERE = 498,
     WHEN = 499,
     WHILE = 500,
     WITH = 501,
     YEAR = 502,
     YEAR_MONTH = 503,
     ZEROFILL = 504,
     EXISTS = 505,
     FSUBSTRING = 506,
     FTRIM = 507,
     FDATE_ADD = 508,
     FDATE_SUB = 509,
     FDATEDIFF = 510,
     FYEAR = 511,
     FMONTH = 512,
     FDAY = 513,
     FHOUR = 514,
     FMINUTE = 515,
     FSECOND = 516,
     FNOW = 517,
     FLEFT = 518,
     FRIGHT = 519,
     FLPAD = 520,
     FRPAD = 521,
     FREVERSE = 522,
     FREPEAT = 523,
     FINSTR = 524,
     FLOCATE = 525,
     FABS = 526,
     FCEIL = 527,
     FFLOOR = 528,
     FROUND = 529,
     FPOWER = 530,
     FSQRT = 531,
     FMOD = 532,
     FRAND = 533,
     FLOG = 534,
     FLOG10 = 535,
     FSIGN = 536,
     FPI = 537,
     FCAST = 538,
     FCONVERT = 539,
     FNULLIF = 540,
     FIFNULL = 541,
     FIF = 542,
     UNKNOWN = 543,
     FGROUP_CONCAT = 544,
     SEPARATOR = 545,
     FCOUNT = 546,
     FSUM = 547,
     FAVG = 548,
     FMIN = 549,
     FMAX = 550,
     FUPPER = 551,
     FLOWER = 552,
     FLENGTH = 553,
     FCONCAT = 554,
     FREPLACE = 555,
     FCOALESCE = 556,
     FGEN_RANDOM_UUID = 557,
     FGEN_RANDOM_UUID_V7 = 558,
     FSNOWFLAKE_ID = 559,
     FLAST_INSERT_ID = 560,
     FSCOPE_IDENTITY = 561,
     FAT_IDENTITY = 562,
     FAT_LAST_INSERT_ID = 563,
     FEVO_SLEEP = 564,
     FEVO_JITTER = 565,
     FROW_NUMBER = 566,
     FRANK = 567,
     FDENSE_RANK = 568,
     FLEAD = 569,
     FLAG = 570,
     FNTILE = 571,
     FPERCENT_RANK = 572,
     FCUME_DIST = 573,
     OVER = 574,
     PARTITION = 575,
     FJSON_EXTRACT = 576,
     FJSON_UNQUOTE = 577,
     FJSON_TYPE = 578,
     FJSON_LENGTH = 579,
     FJSON_DEPTH = 580,
     FJSON_VALID = 581,
     FJSON_KEYS = 582,
     FJSON_PRETTY = 583,
     FJSON_QUOTE = 584,
     FJSON_SET = 585,
     FJSON_INSERT = 586,
     FJSON_REPLACE = 587,
     FJSON_REMOVE = 588,
     FJSON_CONTAINS = 589,
     FJSON_CONTAINS_PATH = 590,
     FJSON_SEARCH = 591,
     FJSON_OBJECT = 592,
     FJSON_ARRAY = 593,
     FJSON_ARRAYAGG = 594,
     SEQUENCE = 595,
     FNEXTVAL = 596,
     FCURRVAL = 597,
     FSETVAL = 598,
     FLASTVAL = 599,
     START = 600,
     INCREMENT = 601,
     MINVALUE = 602,
     CYCLE = 603
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
#define LESS 405
#define LONGTEXT 406
#define LOW_PRIORITY 407
#define LEFT 408
#define LEADING 409
#define LIMIT 410
#define LOCKED 411
#define OFFSET 412
#define LONGBLOB 413
#define MATCH 414
#define MAXVALUE 415
#define MEDIUMTEXT 416
#define MINUS 417
#define MODIFY 418
#define MEDIUMBLOB 419
#define MEDIUMINT 420
#define NATURAL 421
#define NODE 422
#define NO_ACTION 423
#define NULLX 424
#define OPEN 425
#define OUT 426
#define OUTER 427
#define ON 428
#define ORDER 429
#define ONDUPLICATE 430
#define PARTIAL 431
#define PRIMARY 432
#define PROCEDURE 433
#define QUICK 434
#define RANGE 435
#define REAL 436
#define RECLAIM 437
#define REFERENCES 438
#define RENAME 439
#define RESIGNAL 440
#define RESTRICT 441
#define RETURN 442
#define RETURNING 443
#define RETURNS 444
#define ROLLUP 445
#define RIGHT 446
#define REPLACE 447
#define ROW 448
#define SIGNAL 449
#define TRIGGER 450
#define UNTIL 451
#define SQL_SMALL_RESULT 452
#define SCHEMA 453
#define SHARD 454
#define SHARDS 455
#define SHARE 456
#define SKIP 457
#define SOME 458
#define SQL_CALC_FOUND_ROWS 459
#define SQL_BIG_RESULT 460
#define SIMPLE 461
#define STDIN 462
#define STDOUT 463
#define STRAIGHT_JOIN 464
#define SMALLINT 465
#define SET 466
#define SELECT 467
#define QUOTE 468
#define TINYTEXT 469
#define TINYINT 470
#define TO 471
#define TEMPORARY 472
#define GLOBAL 473
#define PRESERVE 474
#define TEXT 475
#define THAN 476
#define TIMESTAMP 477
#define TABLE 478
#define THEN 479
#define TRAILING 480
#define TRUNCATE 481
#define TINYBLOB 482
#define TIME 483
#define UPDATE 484
#define UNSIGNED 485
#define UNION 486
#define UNIQUE 487
#define UUID 488
#define JSON 489
#define VIEW 490
#define USING 491
#define USE 492
#define HASH 493
#define VALIDATE 494
#define VARCHAR 495
#define VALUES 496
#define VARBINARY 497
#define WHERE 498
#define WHEN 499
#define WHILE 500
#define WITH 501
#define YEAR 502
#define YEAR_MONTH 503
#define ZEROFILL 504
#define EXISTS 505
#define FSUBSTRING 506
#define FTRIM 507
#define FDATE_ADD 508
#define FDATE_SUB 509
#define FDATEDIFF 510
#define FYEAR 511
#define FMONTH 512
#define FDAY 513
#define FHOUR 514
#define FMINUTE 515
#define FSECOND 516
#define FNOW 517
#define FLEFT 518
#define FRIGHT 519
#define FLPAD 520
#define FRPAD 521
#define FREVERSE 522
#define FREPEAT 523
#define FINSTR 524
#define FLOCATE 525
#define FABS 526
#define FCEIL 527
#define FFLOOR 528
#define FROUND 529
#define FPOWER 530
#define FSQRT 531
#define FMOD 532
#define FRAND 533
#define FLOG 534
#define FLOG10 535
#define FSIGN 536
#define FPI 537
#define FCAST 538
#define FCONVERT 539
#define FNULLIF 540
#define FIFNULL 541
#define FIF 542
#define UNKNOWN 543
#define FGROUP_CONCAT 544
#define SEPARATOR 545
#define FCOUNT 546
#define FSUM 547
#define FAVG 548
#define FMIN 549
#define FMAX 550
#define FUPPER 551
#define FLOWER 552
#define FLENGTH 553
#define FCONCAT 554
#define FREPLACE 555
#define FCOALESCE 556
#define FGEN_RANDOM_UUID 557
#define FGEN_RANDOM_UUID_V7 558
#define FSNOWFLAKE_ID 559
#define FLAST_INSERT_ID 560
#define FSCOPE_IDENTITY 561
#define FAT_IDENTITY 562
#define FAT_LAST_INSERT_ID 563
#define FEVO_SLEEP 564
#define FEVO_JITTER 565
#define FROW_NUMBER 566
#define FRANK 567
#define FDENSE_RANK 568
#define FLEAD 569
#define FLAG 570
#define FNTILE 571
#define FPERCENT_RANK 572
#define FCUME_DIST 573
#define OVER 574
#define PARTITION 575
#define FJSON_EXTRACT 576
#define FJSON_UNQUOTE 577
#define FJSON_TYPE 578
#define FJSON_LENGTH 579
#define FJSON_DEPTH 580
#define FJSON_VALID 581
#define FJSON_KEYS 582
#define FJSON_PRETTY 583
#define FJSON_QUOTE 584
#define FJSON_SET 585
#define FJSON_INSERT 586
#define FJSON_REPLACE 587
#define FJSON_REMOVE 588
#define FJSON_CONTAINS 589
#define FJSON_CONTAINS_PATH 590
#define FJSON_SEARCH 591
#define FJSON_OBJECT 592
#define FJSON_ARRAY 593
#define FJSON_ARRAYAGG 594
#define SEQUENCE 595
#define FNEXTVAL 596
#define FCURRVAL 597
#define FSETVAL 598
#define FLASTVAL 599
#define START 600
#define INCREMENT 601
#define MINVALUE 602
#define CYCLE 603




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
#line 54 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 847 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 860 "parser/evoparser.tab.c"

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
#define YYLAST   11472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  364
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  868
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2152

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   603

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     360,   361,    26,    24,   362,    25,   359,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   358,
       2,   363,     2,     2,     2,     2,     2,     2,     2,     2,
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
     354,   355,   356,   357
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
    1390,  1394,  1400,  1404,  1408,  1410,  1411,  1417,  1421,  1427,
    1434,  1440,  1441,  1443,  1445,  1446,  1448,  1450,  1452,  1455,
    1458,  1459,  1460,  1462,  1465,  1470,  1477,  1484,  1491,  1492,
    1495,  1496,  1498,  1502,  1506,  1508,  1517,  1520,  1523,  1526,
    1527,  1534,  1537,  1542,  1543,  1546,  1554,  1556,  1560,  1566,
    1568,  1577,  1587,  1598,  1608,  1620,  1631,  1644,  1656,  1670,
    1680,  1692,  1703,  1716,  1728,  1741,  1743,  1747,  1749,  1754,
    1759,  1764,  1771,  1773,  1777,  1780,  1784,  1790,  1792,  1796,
    1797,  1800,  1803,  1807,  1811,  1813,  1817,  1819,  1823,  1829,
    1831,  1842,  1853,  1871,  1884,  1904,  1916,  1923,  1932,  1939,
    1946,  1953,  1963,  1970,  1976,  1985,  1993,  2003,  2012,  2023,
    2033,  2034,  2036,  2039,  2041,  2052,  2059,  2060,  2061,  2067,
    2068,  2073,  2074,  2078,  2083,  2086,  2087,  2093,  2097,  2103,
    2104,  2107,  2110,  2113,  2116,  2118,  2119,  2120,  2124,  2126,
    2130,  2134,  2135,  2142,  2144,  2146,  2150,  2154,  2162,  2166,
    2170,  2176,  2182,  2184,  2193,  2201,  2209,  2211,  2212,  2220,
    2221,  2225,  2227,  2231,  2233,  2235,  2237,  2239,  2241,  2242,
    2244,  2249,  2253,  2255,  2259,  2262,  2265,  2268,  2270,  2273,
    2276,  2279,  2281,  2283,  2293,  2294,  2297,  2300,  2304,  2310,
    2316,  2324,  2330,  2332,  2337,  2342,  2346,  2352,  2356,  2362,
    2363,  2366,  2368,  2374,  2382,  2390,  2400,  2412,  2414,  2417,
    2421,  2423,  2433,  2445,  2464,  2465,  2470,  2474,  2480,  2486,
    2496,  2507,  2515,  2517,  2521,  2531,  2541,  2551,  2558,  2570,
    2579,  2580,  2582,  2585,  2587,  2591,  2597,  2605,  2610,  2615,
    2621,  2627,  2632,  2639,  2651,  2665,  2679,  2695,  2700,  2707,
    2709,  2713,  2715,  2719,  2721,  2725,  2726,  2731,  2737,  2742,
    2748,  2753,  2759,  2764,  2770,  2775,  2780,  2784,  2788,  2792,
    2795,  2799,  2804,  2809,  2811,  2815,  2816,  2821,  2822,  2826,
    2829,  2833,  2837,  2841,  2845,  2851,  2857,  2863,  2867,  2873,
    2876,  2884,  2890,  2898,  2904,  2907,  2911,  2914,  2918,  2921,
    2925,  2931,  2936,  2942,  2950,  2959,  2968,  2976,  2983,  2990,
    2996,  2997,  3001,  3007,  3008,  3010,  3011,  3014,  3017,  3018,
    3023,  3027,  3030,  3034,  3038,  3042,  3046,  3050,  3054,  3058,
    3062,  3066,  3070,  3072,  3074,  3076,  3078,  3080,  3084,  3090,
    3093,  3098,  3100,  3102,  3104,  3106,  3110,  3114,  3118,  3122,
    3128,  3134,  3136,  3138,  3140,  3142,  3146,  3150,  3151,  3153,
    3155,  3157,  3161,  3165,  3168,  3170,  3174,  3178,  3182,  3184,
    3195,  3205,  3218,  3230,  3243,  3255,  3270,  3284,  3285,  3287,
    3289,  3293,  3296,  3300,  3304,  3308,  3310,  3312,  3314,  3316,
    3318,  3320,  3322,  3324,  3326,  3328,  3329,  3332,  3337,  3343,
    3349,  3355,  3361,  3367,  3369,  3371,  3373,  3375,  3377,  3379,
    3381,  3383,  3385,  3387,  3389,  3391,  3393,  3395,  3397,  3399,
    3401,  3403,  3405,  3407,  3409,  3411,  3413,  3415,  3417,  3419,
    3421,  3423,  3425,  3427,  3429,  3431,  3433,  3435,  3437,  3439,
    3441,  3443,  3445,  3447,  3449,  3451,  3453,  3455,  3457,  3459,
    3461,  3463,  3465,  3467,  3469,  3471,  3473,  3475,  3477,  3479,
    3481,  3483,  3485,  3487,  3489,  3491,  3493,  3495,  3497,  3499,
    3501,  3503,  3505,  3507,  3509,  3511,  3513,  3515,  3517,  3519,
    3521,  3523,  3525,  3527,  3529,  3531,  3533,  3535,  3537,  3539,
    3541,  3543,  3545,  3547,  3549,  3551,  3553,  3555,  3557,  3559,
    3561,  3563,  3565,  3567,  3569,  3571,  3573,  3575,  3577,  3579,
    3581,  3583,  3585,  3587,  3589,  3591,  3593,  3595,  3597,  3599,
    3601,  3603,  3605,  3607,  3609,  3611,  3613,  3615,  3619,  3625,
    3629,  3635,  3637,  3642,  3648,  3650,  3654,  3656,  3658,  3660,
    3662,  3664,  3666,  3668,  3670,  3684,  3686,  3688,  3690,  3692,
    3694,  3696,  3700,  3706,  3711,  3716,  3718,  3724,  3725,  3728,
    3732,  3735,  3739,  3742,  3745,  3748,  3750,  3753,  3755,  3759,
    3765,  3770,  3775,  3782,  3789,  3790,  3793,  3796,  3798
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     365,     0,    -1,   401,   358,    -1,   401,   358,   365,    -1,
       3,    -1,     3,   359,     3,    -1,    81,   359,     3,    -1,
     168,   360,     3,   361,    83,   360,     4,   361,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   178,
      -1,   366,    24,   366,    -1,   366,    25,   366,    -1,   366,
      26,   366,    -1,   366,    27,   366,    -1,   366,    28,   366,
      -1,   366,    29,   366,    -1,    25,   366,    -1,   360,   366,
     361,    -1,   366,    12,   366,    -1,   366,    10,   366,    -1,
     366,    11,   366,    -1,   366,    21,   366,    -1,   366,    22,
     366,    -1,   366,    30,   366,    -1,   366,    23,   366,    -1,
     366,    32,   366,    -1,   366,    31,   366,    -1,    18,   366,
      -1,    17,   366,    -1,   366,    20,   366,    -1,    -1,   366,
      20,   360,   367,   402,   361,    -1,    -1,   366,    20,    39,
     360,   368,   402,   361,    -1,    -1,   366,    20,   212,   360,
     369,   402,   361,    -1,    -1,   366,    20,    37,   360,   370,
     402,   361,    -1,   366,    15,   178,    -1,   366,    15,    18,
     178,    -1,   366,    15,     6,    -1,   366,    15,    18,     6,
      -1,     8,     9,   366,    -1,   366,    19,   366,    42,   366,
      -1,   366,    18,    19,   366,    42,   366,    -1,   366,    -1,
     366,   362,   371,    -1,    -1,   371,    -1,    -1,   366,    16,
     360,   373,   371,   361,    -1,    -1,   366,    18,    16,   360,
     374,   371,   361,    -1,    -1,   366,    16,   360,   375,   402,
     361,    -1,    -1,   366,    18,    16,   360,   376,   402,   361,
      -1,    -1,   259,   360,   377,   402,   361,    -1,     3,   360,
     372,   361,    -1,   300,   360,    26,   361,    -1,   300,   360,
     366,   361,    -1,   301,   360,   366,   361,    -1,   302,   360,
     366,   361,    -1,   303,   360,   366,   361,    -1,   304,   360,
     366,   361,    -1,   298,   360,   366,   361,    -1,   298,   360,
     366,   299,     4,   361,    -1,    -1,   320,   360,   361,   328,
     360,   378,   409,   411,   361,    -1,    -1,   321,   360,   361,
     328,   360,   379,   409,   411,   361,    -1,    -1,   322,   360,
     361,   328,   360,   380,   409,   411,   361,    -1,    -1,   301,
     360,   366,   361,   328,   360,   381,   409,   411,   361,    -1,
      -1,   300,   360,    26,   361,   328,   360,   382,   409,   411,
     361,    -1,    -1,   300,   360,   366,   361,   328,   360,   383,
     409,   411,   361,    -1,    -1,   302,   360,   366,   361,   328,
     360,   384,   409,   411,   361,    -1,    -1,   303,   360,   366,
     361,   328,   360,   385,   409,   411,   361,    -1,    -1,   304,
     360,   366,   361,   328,   360,   386,   409,   411,   361,    -1,
      -1,   323,   360,   366,   361,   328,   360,   387,   409,   411,
     361,    -1,    -1,   323,   360,   366,   362,     5,   361,   328,
     360,   388,   409,   411,   361,    -1,    -1,   323,   360,   366,
     362,     5,   362,     4,   361,   328,   360,   389,   409,   411,
     361,    -1,    -1,   323,   360,   366,   362,     5,   362,     5,
     361,   328,   360,   390,   409,   411,   361,    -1,    -1,   324,
     360,   366,   361,   328,   360,   391,   409,   411,   361,    -1,
      -1,   324,   360,   366,   362,     5,   361,   328,   360,   392,
     409,   411,   361,    -1,    -1,   324,   360,   366,   362,     5,
     362,     4,   361,   328,   360,   393,   409,   411,   361,    -1,
      -1,   324,   360,   366,   362,     5,   362,     5,   361,   328,
     360,   394,   409,   411,   361,    -1,    -1,   325,   360,     5,
     361,   328,   360,   395,   409,   411,   361,    -1,    -1,   326,
     360,   361,   328,   360,   396,   409,   411,   361,    -1,    -1,
     327,   360,   361,   328,   360,   397,   409,   411,   361,    -1,
     260,   360,   366,   362,   366,   362,   366,   361,    -1,   260,
     360,   366,   362,   366,   361,    -1,   260,   360,   366,   128,
     366,   361,    -1,   260,   360,   366,   128,   366,   132,   366,
     361,    -1,   261,   360,   366,   361,    -1,   261,   360,   398,
     366,   128,   366,   361,    -1,   261,   360,   398,   128,   366,
     361,    -1,   305,   360,   366,   361,    -1,   306,   360,   366,
     361,    -1,   307,   360,   366,   361,    -1,   308,   360,   366,
     362,   366,   361,    -1,   309,   360,   366,   362,   366,   362,
     366,   361,    -1,   310,   360,   366,   362,   366,   361,    -1,
     272,   360,   366,   362,   366,   361,    -1,   273,   360,   366,
     362,   366,   361,    -1,   274,   360,   366,   362,   366,   362,
     366,   361,    -1,   275,   360,   366,   362,   366,   362,   366,
     361,    -1,   276,   360,   366,   361,    -1,   277,   360,   366,
     362,   366,   361,    -1,   278,   360,   366,   362,   366,   361,
      -1,   279,   360,   366,   362,   366,   361,    -1,   280,   360,
     366,   361,    -1,   281,   360,   366,   361,    -1,   282,   360,
     366,   361,    -1,   283,   360,   366,   362,   366,   361,    -1,
     283,   360,   366,   361,    -1,   284,   360,   366,   362,   366,
     361,    -1,   285,   360,   366,   361,    -1,   286,   360,   366,
     362,   366,   361,    -1,   287,   360,   361,    -1,   288,   360,
     366,   361,    -1,   289,   360,   366,   361,    -1,   290,   360,
     366,   361,    -1,   291,   360,   361,    -1,   271,   360,   361,
      -1,   264,   360,   366,   362,   366,   361,    -1,   265,   360,
     366,   361,    -1,   266,   360,   366,   361,    -1,   267,   360,
     366,   361,    -1,   268,   360,   366,   361,    -1,   269,   360,
     366,   361,    -1,   270,   360,   366,   361,    -1,   330,   360,
     366,   362,   366,   361,    -1,   331,   360,   366,   361,    -1,
     332,   360,   366,   361,    -1,   333,   360,   366,   361,    -1,
     334,   360,   366,   361,    -1,   335,   360,   366,   361,    -1,
     336,   360,   366,   361,    -1,   337,   360,   366,   361,    -1,
     338,   360,   366,   361,    -1,   339,   360,   366,   362,   366,
     362,   366,   361,    -1,   340,   360,   366,   362,   366,   362,
     366,   361,    -1,   341,   360,   366,   362,   366,   362,   366,
     361,    -1,   342,   360,   366,   362,   366,   361,    -1,   343,
     360,   366,   362,   366,   361,    -1,   344,   360,   366,   362,
     366,   362,   366,   361,    -1,   345,   360,   366,   362,   366,
     362,   366,   361,    -1,   346,   360,   366,   362,   366,   361,
      -1,   346,   360,   366,   362,   366,   362,   366,   362,   366,
     361,    -1,   347,   360,   366,   361,    -1,   347,   360,   366,
     362,   366,   361,    -1,   347,   360,   366,   362,   366,   362,
     366,   361,    -1,   348,   360,   366,   361,    -1,   350,   360,
     366,   361,    -1,   351,   360,   366,   361,    -1,   352,   360,
     366,   362,   366,   361,    -1,   352,   360,   366,   362,   366,
     362,   366,   361,    -1,   353,   360,   361,    -1,   292,   360,
     366,    43,   506,   361,    -1,   293,   360,   366,   362,   506,
     361,    -1,   294,   360,   366,   362,   366,   361,    -1,   295,
     360,   366,   362,   366,   361,    -1,   296,   360,   366,   362,
     366,   362,   366,   361,    -1,   366,    15,   297,    -1,   308,
     360,   366,   362,   366,   362,   366,   361,    -1,   308,   360,
     366,   362,   366,   362,   366,   362,   366,   361,    -1,   311,
     360,   361,    -1,   312,   360,   361,    -1,   313,   360,   361,
      -1,   314,   360,   361,    -1,   315,   360,   361,    -1,   316,
      -1,   317,    -1,   318,   360,   366,   361,    -1,   319,   360,
     366,   362,   366,   361,    -1,   163,    -1,   234,    -1,    57,
      -1,   262,   360,   366,   362,   399,   361,    -1,   263,   360,
     366,   362,   399,   361,    -1,   153,   366,   256,    -1,   153,
     366,    96,    -1,   153,   366,    97,    -1,   153,   366,   101,
      -1,   153,   366,   103,    -1,   153,   366,   257,    -1,   153,
     366,   137,    -1,   153,   366,   136,    -1,   153,   366,   139,
      -1,    69,   366,   400,   116,    -1,    69,   366,   400,   117,
     366,   116,    -1,    69,   400,   116,    -1,    69,   400,   117,
     366,   116,    -1,   253,   366,   233,   366,    -1,   400,   253,
     366,   233,   366,    -1,   366,    14,   366,    -1,   366,    18,
      14,   366,    -1,   366,    13,   366,    -1,   366,    18,    13,
     366,    -1,    64,    -1,    72,    -1,    73,    -1,   402,    -1,
     221,   420,   421,    -1,   221,   420,   421,   128,   424,   403,
     404,   408,   413,   416,   417,   418,    -1,   221,   420,   421,
     151,     3,   128,   424,   403,   404,   408,   413,   416,    -1,
      -1,   252,   366,    -1,    -1,   133,    55,   405,   407,    -1,
     366,   406,    -1,   405,   362,   366,   406,    -1,    -1,    41,
      -1,   104,    -1,    -1,   255,   199,    -1,    -1,   140,   366,
      -1,    -1,   329,    55,   410,    -1,     3,    -1,   410,   362,
       3,    -1,    -1,   183,    55,   412,    -1,     3,   406,    -1,
     412,   362,     3,   406,    -1,    -1,   183,    55,   414,    -1,
     415,    -1,   414,   362,   415,    -1,     3,   406,    -1,     3,
     359,     3,   406,    -1,     5,   406,    -1,    -1,   164,   366,
      -1,   164,   366,   362,   366,    -1,   164,   366,   166,   366,
      -1,    -1,   132,   238,    -1,   132,   210,    -1,   132,   238,
     211,   165,    -1,   132,   210,   211,   165,    -1,    -1,   151,
     419,    -1,     3,    -1,   419,   362,     3,    -1,    -1,   420,
      37,    -1,   420,    98,    -1,   420,   102,    -1,   420,   138,
      -1,   420,   218,    -1,   420,   206,    -1,   420,   214,    -1,
     420,   213,    -1,   422,    -1,   421,   362,   422,    -1,    26,
      -1,   366,   423,    -1,    43,     3,    -1,     3,    -1,    -1,
     425,    -1,   424,   362,   425,    -1,   426,    -1,   428,    -1,
       3,   423,   435,    -1,     3,   359,     3,   423,   435,    -1,
     438,   427,     3,    -1,   360,   424,   361,    -1,    43,    -1,
      -1,   425,   429,   155,   426,   433,    -1,   425,   218,   426,
      -1,   425,   218,   426,   182,   366,    -1,   425,   431,   430,
     155,   426,   434,    -1,   425,   175,   432,   155,   426,    -1,
      -1,   145,    -1,    68,    -1,    -1,   181,    -1,   162,    -1,
     200,    -1,   162,   430,    -1,   200,   430,    -1,    -1,    -1,
     434,    -1,   182,   366,    -1,   245,   360,   419,   361,    -1,
     246,   156,   436,   360,   437,   361,    -1,   146,   156,   436,
     360,   437,   361,    -1,   125,   156,   436,   360,   437,   361,
      -1,    -1,   132,   155,    -1,    -1,     3,    -1,   437,   362,
       3,    -1,   360,   402,   361,    -1,   439,    -1,    99,   440,
     128,     3,   403,   413,   416,   532,    -1,   440,   161,    -1,
     440,   188,    -1,   440,   146,    -1,    -1,    99,   440,   441,
     128,   424,   403,    -1,     3,   442,    -1,   441,   362,     3,
     442,    -1,    -1,   359,    26,    -1,    99,   440,   128,   441,
     245,   424,   403,    -1,   443,    -1,   100,   232,     3,    -1,
     100,   232,   148,   259,     3,    -1,   444,    -1,    65,   147,
       3,   182,     3,   360,   445,   361,    -1,    65,   130,   147,
       3,   182,     3,   360,   445,   361,    -1,    65,   147,   148,
     259,     3,   182,     3,   360,   445,   361,    -1,    65,   241,
     147,     3,   182,     3,   360,   445,   361,    -1,    65,   241,
     147,   148,   259,     3,   182,     3,   360,   445,   361,    -1,
      65,   147,     3,   182,     3,   245,   247,   360,   445,   361,
      -1,    65,   147,   148,   259,     3,   182,     3,   245,   247,
     360,   445,   361,    -1,    65,   241,   147,     3,   182,     3,
     245,   247,   360,   445,   361,    -1,    65,   241,   147,   148,
     259,     3,   182,     3,   245,   247,   360,   445,   361,    -1,
      65,   147,    77,     3,   182,     3,   360,   445,   361,    -1,
      65,   147,    77,   148,   259,     3,   182,     3,   360,   445,
     361,    -1,    65,   241,   147,    77,     3,   182,     3,   360,
     445,   361,    -1,    65,   241,   147,    77,   148,   259,     3,
     182,     3,   360,   445,   361,    -1,    65,   147,    77,     3,
     182,     3,   245,   247,   360,   445,   361,    -1,    65,   241,
     147,    77,     3,   182,     3,   245,   247,   360,   445,   361,
      -1,     3,    -1,   445,   362,     3,    -1,   446,    -1,   305,
     360,     3,   361,    -1,   306,   360,     3,   361,    -1,   307,
     360,     3,   361,    -1,   308,   360,     3,   362,     3,   361,
      -1,   447,    -1,   100,   147,     3,    -1,   448,   450,    -1,
     235,   232,     3,    -1,   235,   232,     3,   362,   449,    -1,
       3,    -1,   449,   362,     3,    -1,    -1,   450,    66,    -1,
     450,   195,    -1,   450,    47,    45,    -1,   450,    46,    45,
      -1,   451,    -1,   191,   232,     3,    -1,   452,    -1,    38,
     232,     3,    -1,    38,   232,     3,   359,     3,    -1,   453,
      -1,    34,   232,     3,    35,    63,     3,    70,   360,   366,
     361,    -1,    34,   232,     3,    35,    63,     3,   241,   360,
     499,   361,    -1,    34,   232,     3,    35,    63,     3,   126,
     156,   360,   496,   361,   192,     3,   360,   497,   361,   498,
      -1,    34,   232,     3,    35,    63,     3,    70,   360,   366,
     361,    18,   248,    -1,    34,   232,     3,    35,    63,     3,
     126,   156,   360,   496,   361,   192,     3,   360,   497,   361,
     498,    18,   248,    -1,    34,   232,     3,    35,    63,     3,
     186,   156,   360,   495,   361,    -1,    34,   232,     3,   100,
      63,     3,    -1,    34,   232,     3,   193,    63,     3,   225,
       3,    -1,    34,   232,     3,   112,    63,     3,    -1,    34,
     232,     3,    92,    63,     3,    -1,    34,   232,     3,   248,
      63,     3,    -1,    34,   232,     3,    35,    76,     3,   506,
     501,   454,    -1,    34,   232,     3,   100,    76,     3,    -1,
      34,   232,     3,   100,     3,    -1,    34,   232,     3,   193,
      76,     3,   225,     3,    -1,    34,   232,     3,   193,     3,
     225,     3,    -1,    34,   232,     3,   172,    76,     3,   506,
     501,   454,    -1,    34,   232,     3,   172,     3,   506,   501,
     454,    -1,    34,   232,     3,    67,    76,     3,     3,   506,
     501,   454,    -1,    34,   232,     3,    67,     3,     3,   506,
     501,   454,    -1,    -1,   122,    -1,    36,     3,    -1,   455,
      -1,   149,   463,   464,     3,   465,   250,   467,   456,   458,
     532,    -1,   149,   463,   464,     3,   465,   402,    -1,    -1,
      -1,   184,   156,   238,   457,   462,    -1,    -1,   182,    80,
     459,   460,    -1,    -1,   360,     3,   361,    -1,   360,     3,
     362,     3,    -1,    93,    82,    -1,    -1,    93,   238,   461,
     220,   462,    -1,     3,    20,   366,    -1,   462,   362,     3,
      20,   366,    -1,    -1,   463,   161,    -1,   463,    95,    -1,
     463,   138,    -1,   463,   146,    -1,   151,    -1,    -1,    -1,
     360,   466,   361,    -1,     3,    -1,   466,   362,     3,    -1,
     360,   469,   361,    -1,    -1,   467,   362,   468,   360,   469,
     361,    -1,   366,    -1,   105,    -1,   469,   362,   366,    -1,
     469,   362,   105,    -1,   149,   463,   464,     3,   220,   470,
     456,    -1,     3,    20,   366,    -1,     3,    20,   105,    -1,
     470,   362,     3,    20,   366,    -1,   470,   362,     3,    20,
     105,    -1,   471,    -1,   201,   463,   464,     3,   465,   250,
     467,   456,    -1,   201,   463,   464,     3,   220,   470,   456,
      -1,   201,   463,   464,     3,   465,   402,   456,    -1,   472,
      -1,    -1,    78,     3,   473,   474,   476,   477,   478,    -1,
      -1,   360,   475,   361,    -1,     3,    -1,   475,   362,     3,
      -1,   128,    -1,   225,    -1,     4,    -1,   216,    -1,   217,
      -1,    -1,   479,    -1,   255,   360,   479,   361,    -1,   360,
     479,   361,    -1,   480,    -1,   479,   362,   480,    -1,   127,
      79,    -1,   127,   229,    -1,    91,     4,    -1,   135,    -1,
     135,     6,    -1,   178,     4,    -1,   222,     4,    -1,    79,
      -1,   481,    -1,   238,   482,   424,   220,   483,   403,   413,
     416,   532,    -1,    -1,   463,   161,    -1,   463,   146,    -1,
       3,    20,   366,    -1,     3,   359,     3,    20,   366,    -1,
     483,   362,     3,    20,   366,    -1,   483,   362,     3,   359,
       3,    20,   366,    -1,   193,   232,     3,   225,     3,    -1,
     484,    -1,    65,    87,   485,     3,    -1,    65,   207,   485,
       3,    -1,   100,    87,     3,    -1,   100,    87,   148,   259,
       3,    -1,   100,   207,     3,    -1,   100,   207,   148,   259,
       3,    -1,    -1,   148,   259,    -1,   486,    -1,    65,    94,
       3,    43,   506,    -1,    65,    94,     3,    43,   506,   105,
     366,    -1,    65,    94,     3,    43,   506,    18,   178,    -1,
      65,    94,     3,    43,   506,    70,   360,   366,   361,    -1,
      65,    94,     3,    43,   506,    18,   178,    70,   360,   366,
     361,    -1,   487,    -1,   246,     3,    -1,   246,    87,     3,
      -1,   488,    -1,    65,   492,   232,   485,     3,   360,   493,
     361,   489,    -1,    65,   492,   232,   485,     3,   359,     3,
     360,   493,   361,   489,    -1,    65,   492,   232,   485,     3,
     329,    86,     3,   132,   250,   128,   360,     5,   361,   225,
     360,     5,   361,    -1,    -1,   489,    40,    20,     5,    -1,
     489,    40,     5,    -1,   489,   182,     3,    99,     3,    -1,
     489,   182,     3,   228,     3,    -1,   489,   208,    55,   247,
     360,     3,   361,   209,     5,    -1,   489,   208,    55,   189,
     360,     3,   361,   360,   490,   361,    -1,   489,   329,    55,
     189,   360,     3,   361,    -1,   491,    -1,   490,   362,   491,
      -1,   208,     3,   250,   159,   230,     4,   182,   176,     5,
      -1,   208,     3,   250,   159,   230,   169,   182,   176,     5,
      -1,    65,   492,   232,   485,     3,   360,   493,   361,   508,
      -1,    65,   492,   232,   485,     3,   508,    -1,    65,   492,
     232,   485,     3,   359,     3,   360,   493,   361,   508,    -1,
      65,   492,   232,   485,     3,   359,     3,   508,    -1,    -1,
     226,    -1,   227,   226,    -1,   494,    -1,   493,   362,   494,
      -1,   186,   156,   360,   495,   361,    -1,    63,     3,   186,
     156,   360,   495,   361,    -1,   156,   360,   419,   361,    -1,
     147,   360,   419,   361,    -1,   130,   147,   360,   419,   361,
      -1,   130,   156,   360,   419,   361,    -1,    70,   360,   366,
     361,    -1,    63,     3,    70,   360,   366,   361,    -1,   126,
     156,   360,   496,   361,   192,     3,   360,   497,   361,   498,
      -1,   126,   156,   360,   496,   361,   192,     3,   359,     3,
     360,   497,   361,   498,    -1,    63,     3,   126,   156,   360,
     496,   361,   192,     3,   360,   497,   361,   498,    -1,    63,
       3,   126,   156,   360,   496,   361,   192,     3,   359,     3,
     360,   497,   361,   498,    -1,   241,   360,   499,   361,    -1,
      63,     3,   241,   360,   499,   361,    -1,     3,    -1,   495,
     362,     3,    -1,     3,    -1,   496,   362,     3,    -1,     3,
      -1,   497,   362,     3,    -1,    -1,   498,   182,    99,    66,
      -1,   498,   182,    99,   220,   178,    -1,   498,   182,    99,
     195,    -1,   498,   182,    99,   220,   105,    -1,   498,   182,
     238,    66,    -1,   498,   182,   238,   220,   178,    -1,   498,
     182,   238,   195,    -1,   498,   182,   238,   220,   105,    -1,
     498,   182,    99,   177,    -1,   498,   182,   238,   177,    -1,
     498,   168,   129,    -1,   498,   168,   215,    -1,   498,   168,
     185,    -1,   498,    89,    -1,   498,    18,    89,    -1,   498,
      89,   143,    90,    -1,   498,    89,   143,   141,    -1,     3,
      -1,   499,   362,     3,    -1,    -1,   500,     3,   506,   501,
      -1,    -1,   501,    18,   178,    -1,   501,   178,    -1,   501,
     105,     4,    -1,   501,   105,     5,    -1,   501,   105,     7,
      -1,   501,   105,     6,    -1,   501,   105,   311,   360,   361,
      -1,   501,   105,   312,   360,   361,    -1,   501,   105,   313,
     360,   361,    -1,   501,   105,    64,    -1,   501,   105,   360,
     366,   361,    -1,   501,    40,    -1,   501,    40,   360,     5,
     362,     5,   361,    -1,   501,    40,   360,     5,   361,    -1,
     501,    45,   360,     5,   362,     5,   361,    -1,   501,    45,
     360,     5,   361,    -1,   501,    45,    -1,   501,   241,   156,
      -1,   501,   241,    -1,   501,   186,   156,    -1,   501,   156,
      -1,   501,    71,     4,    -1,   501,    70,   360,   366,   361,
      -1,   501,    63,     3,   241,    -1,   501,    63,     3,   186,
     156,    -1,   501,    63,     3,    70,   360,   366,   361,    -1,
     501,    48,    44,    43,   360,   366,   361,    49,    -1,   501,
      48,    44,    43,   360,   366,   361,    50,    -1,   501,    48,
      44,    43,   360,   366,   361,    -1,   501,    43,   360,   366,
     361,    49,    -1,   501,    43,   360,   366,   361,    50,    -1,
     501,    43,   360,   366,   361,    -1,    -1,   360,     5,   361,
      -1,   360,     5,   362,     5,   361,    -1,    -1,    56,    -1,
      -1,   504,   239,    -1,   504,   258,    -1,    -1,   505,    74,
     220,     4,    -1,   505,    75,     4,    -1,    59,   502,    -1,
     224,   502,   504,    -1,   219,   502,   504,    -1,   174,   502,
     504,    -1,   152,   502,   504,    -1,   144,   502,   504,    -1,
      58,   502,   504,    -1,   190,   502,   504,    -1,   106,   502,
     504,    -1,   124,   502,   504,    -1,   108,   502,   504,    -1,
     109,    -1,   237,    -1,   231,    -1,   107,    -1,   256,    -1,
      74,   502,   505,    -1,   249,   360,     5,   361,   505,    -1,
      56,   502,    -1,   251,   360,     5,   361,    -1,   236,    -1,
      53,    -1,   173,    -1,   167,    -1,   223,   503,   505,    -1,
     229,   503,   505,    -1,   170,   503,   505,    -1,   160,   503,
     505,    -1,   115,   360,   507,   361,   505,    -1,   220,   360,
     507,   361,   505,    -1,    54,    -1,   242,    -1,   243,    -1,
       4,    -1,   507,   362,     4,    -1,   509,   427,   402,    -1,
      -1,   146,    -1,   201,    -1,   510,    -1,   220,   207,     3,
      -1,   220,   207,   105,    -1,   220,   511,    -1,   512,    -1,
     511,   362,   512,    -1,     8,    20,   366,    -1,     8,     9,
     366,    -1,   513,    -1,    65,   187,     3,   360,   514,   361,
      43,    52,   518,   116,    -1,    65,   187,     3,   360,   514,
     361,    52,   518,   116,    -1,    65,    10,   201,   187,     3,
     360,   514,   361,    43,    52,   518,   116,    -1,    65,    10,
     201,   187,     3,   360,   514,   361,    52,   518,   116,    -1,
      65,   131,     3,   360,   514,   361,   198,   517,    43,    52,
     518,   116,    -1,    65,   131,     3,   360,   514,   361,   198,
     517,    52,   518,   116,    -1,    65,    10,   201,   131,     3,
     360,   514,   361,   198,   517,    43,    52,   518,   116,    -1,
      65,    10,   201,   131,     3,   360,   514,   361,   198,   517,
      52,   518,   116,    -1,    -1,   515,    -1,   516,    -1,   515,
     362,   516,    -1,     3,   506,    -1,    16,     3,   506,    -1,
     180,     3,   506,    -1,   142,     3,   506,    -1,   144,    -1,
     152,    -1,   249,    -1,   229,    -1,    54,    -1,   124,    -1,
     106,    -1,    58,    -1,   109,    -1,   231,    -1,    -1,   518,
     519,    -1,   518,    52,   518,   116,    -1,   518,   148,   518,
     116,   148,    -1,   518,   254,   518,   116,   254,    -1,   518,
     158,   518,   116,   158,    -1,   518,   123,   518,   116,   123,
      -1,   518,    69,   518,   116,    69,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,
      -1,    10,    -1,    12,    -1,    16,    -1,    42,    -1,   221,
      -1,   149,    -1,   238,    -1,    99,    -1,   128,    -1,   252,
      -1,   220,    -1,   151,    -1,   250,    -1,    65,    -1,   100,
      -1,   232,    -1,   147,    -1,   233,    -1,   117,    -1,   111,
      -1,    88,    -1,    93,    -1,    60,    -1,   196,    -1,   157,
      -1,   154,    -1,    62,    -1,   179,    -1,   121,    -1,    61,
      -1,   134,    -1,   119,    -1,   180,    -1,   142,    -1,   132,
      -1,    46,    -1,   203,    -1,   194,    -1,   118,    -1,   205,
      -1,    51,    -1,   110,    -1,   202,    -1,   204,    -1,    43,
      -1,   182,    -1,   183,    -1,    55,    -1,   133,    -1,   140,
      -1,   164,    -1,   166,    -1,   155,    -1,   162,    -1,   200,
      -1,   145,    -1,   181,    -1,   129,    -1,    68,    -1,   175,
      -1,   245,    -1,   178,    -1,   105,    -1,   186,    -1,   156,
      -1,   241,    -1,    70,    -1,   126,    -1,   192,    -1,    66,
      -1,   195,    -1,   177,    -1,   144,    -1,   152,    -1,   249,
      -1,   229,    -1,    54,    -1,   124,    -1,   106,    -1,    58,
      -1,   109,    -1,   231,    -1,   219,    -1,   108,    -1,    74,
      -1,   242,    -1,    53,    -1,   240,    -1,   114,    -1,   150,
      -1,    37,    -1,    98,    -1,   259,    -1,   253,    -1,   255,
      -1,   187,    -1,   131,    -1,   198,    -1,   360,    -1,   361,
      -1,   362,    -1,   358,    -1,   359,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    17,    -1,   363,
      -1,   300,    -1,   301,    -1,   302,    -1,   303,    -1,   304,
      -1,     8,    -1,   520,    -1,   100,   187,     3,    -1,   100,
     187,   148,   259,     3,    -1,   100,   131,     3,    -1,   100,
     131,   148,   259,     3,    -1,   521,    -1,    60,     3,   360,
     361,    -1,    60,     3,   360,   522,   361,    -1,   523,    -1,
     522,   362,   523,    -1,     5,    -1,     4,    -1,     7,    -1,
     178,    -1,     6,    -1,     3,    -1,     8,    -1,   524,    -1,
      65,   204,     3,   525,   526,   182,     3,   132,   110,   202,
      52,   518,   116,    -1,    51,    -1,    36,    -1,   149,    -1,
     238,    -1,    99,    -1,   527,    -1,   100,   204,     3,    -1,
     100,   204,   148,   259,     3,    -1,    34,   204,     3,   112,
      -1,    34,   204,     3,    92,    -1,   528,    -1,    65,   349,
     485,     3,   529,    -1,    -1,   529,   530,    -1,   354,   255,
       5,    -1,   354,     5,    -1,   355,    55,     5,    -1,   355,
       5,    -1,   356,     5,    -1,   169,     5,    -1,   357,    -1,
      18,   357,    -1,   531,    -1,   100,   349,     3,    -1,   100,
     349,   148,   259,     3,    -1,    34,   349,     3,   529,    -1,
      34,   349,     3,    47,    -1,    34,   349,     3,    47,   255,
       5,    -1,    34,   349,     3,   193,   225,     3,    -1,    -1,
     197,    26,    -1,   197,   533,    -1,     3,    -1,   533,   362,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   428,   428,   429,   434,   441,   442,   443,   457,   458,
     476,   484,   492,   498,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   531,   531,   540,   540,   542,   542,
     544,   544,   548,   549,   550,   551,   552,   555,   556,   559,
     560,   563,   564,   567,   567,   568,   568,   569,   569,   577,
     577,   585,   585,   596,   600,   601,   602,   603,   604,   605,
     606,   607,   611,   611,   613,   613,   615,   615,   618,   618,
     620,   620,   622,   622,   624,   624,   626,   626,   628,   628,
     631,   631,   633,   633,   635,   635,   637,   637,   639,   639,
     641,   641,   643,   643,   645,   645,   648,   648,   650,   650,
     652,   652,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   691,   692,   693,   694,
     695,   696,   697,   698,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   723,   724,   725,   726,
     727,   729,   730,   732,   733,   734,   736,   737,   738,   739,
     746,   753,   760,   764,   768,   772,   776,   780,   786,   787,
     788,   791,   797,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   815,   817,   819,   821,   825,   833,   844,   845,
     848,   849,   852,   860,   868,   879,   889,   890,   903,   919,
     920,   921,   922,   925,   932,   940,   941,   942,   945,   946,
     949,   950,   954,   955,   958,   960,   964,   965,   968,   970,
     974,   975,   978,   979,   982,   988,   995,  1004,  1005,  1006,
    1007,  1010,  1011,  1012,  1013,  1014,  1017,  1018,  1021,  1022,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1036,
    1037,  1038,  1046,  1052,  1053,  1054,  1057,  1058,  1061,  1062,
    1066,  1073,  1074,  1075,  1078,  1079,  1083,  1085,  1087,  1089,
    1091,  1095,  1096,  1097,  1100,  1101,  1104,  1105,  1108,  1109,
    1110,  1113,  1114,  1117,  1118,  1122,  1124,  1126,  1128,  1131,
    1132,  1135,  1136,  1139,  1143,  1153,  1161,  1162,  1163,  1164,
    1168,  1172,  1174,  1178,  1178,  1180,  1185,  1192,  1199,  1209,
    1216,  1223,  1231,  1241,  1249,  1259,  1267,  1276,  1285,  1295,
    1303,  1312,  1321,  1331,  1340,  1352,  1357,  1362,  1368,  1375,
    1382,  1389,  1399,  1406,  1415,  1422,  1428,  1436,  1442,  1450,
    1451,  1452,  1453,  1454,  1458,  1465,  1474,  1481,  1487,  1498,
    1501,  1507,  1513,  1520,  1526,  1533,  1539,  1545,  1551,  1557,
    1563,  1569,  1575,  1581,  1587,  1593,  1599,  1605,  1611,  1617,
    1625,  1626,  1627,  1630,  1638,  1644,  1657,  1658,  1658,  1662,
    1663,  1666,  1667,  1668,  1672,  1673,  1673,  1677,  1685,  1695,
    1696,  1697,  1698,  1699,  1702,  1702,  1705,  1706,  1709,  1719,
    1732,  1733,  1733,  1736,  1737,  1738,  1739,  1742,  1746,  1747,
    1748,  1749,  1755,  1758,  1764,  1769,  1775,  1779,  1779,  1784,
    1785,  1787,  1788,  1792,  1793,  1797,  1798,  1799,  1802,  1803,
    1804,  1805,  1809,  1810,  1814,  1815,  1816,  1817,  1818,  1819,
    1820,  1821,  1825,  1833,  1842,  1843,  1844,  1848,  1859,  1871,
    1882,  1897,  1902,  1906,  1907,  1911,  1913,  1915,  1917,  1921,
    1922,  1928,  1932,  1934,  1936,  1938,  1940,  1945,  1949,  1950,
    1954,  1963,  1973,  1981,  1989,  1990,  1991,  1992,  1993,  1994,
    1996,  1998,  2002,  2003,  2006,  2021,  2028,  2043,  2056,  2071,
    2084,  2085,  2086,  2089,  2090,  2093,  2094,  2095,  2096,  2097,
    2098,  2099,  2100,  2101,  2103,  2105,  2107,  2109,  2111,  2115,
    2116,  2119,  2120,  2123,  2124,  2127,  2128,  2129,  2130,  2131,
    2132,  2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,
    2142,  2143,  2144,  2147,  2148,  2151,  2151,  2161,  2162,  2163,
    2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,  2179,
    2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,  2188,  2189,
    2190,  2191,  2192,  2193,  2194,  2195,  2196,  2197,  2198,  2199,
    2202,  2203,  2204,  2207,  2208,  2211,  2212,  2213,  2216,  2217,
    2218,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,
    2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,
    2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,
    2251,  2252,  2253,  2254,  2257,  2258,  2261,  2274,  2275,  2276,
    2280,  2283,  2284,  2285,  2286,  2286,  2288,  2289,  2297,  2301,
    2307,  2313,  2320,  2327,  2333,  2339,  2346,  2355,  2356,  2359,
    2360,  2363,  2364,  2365,  2366,  2369,  2370,  2371,  2372,  2373,
    2374,  2375,  2376,  2377,  2378,  2385,  2386,  2387,  2388,  2389,
    2390,  2391,  2392,  2395,  2396,  2397,  2397,  2397,  2398,  2398,
    2398,  2398,  2398,  2398,  2399,  2399,  2399,  2399,  2399,  2399,
    2399,  2399,  2399,  2400,  2400,  2400,  2400,  2400,  2400,  2400,
    2401,  2401,  2401,  2401,  2402,  2402,  2402,  2402,  2402,  2402,
    2402,  2402,  2402,  2402,  2402,  2402,  2403,  2403,  2403,  2403,
    2403,  2403,  2403,  2403,  2404,  2404,  2404,  2404,  2404,  2404,
    2404,  2404,  2405,  2405,  2405,  2405,  2405,  2405,  2405,  2405,
    2405,  2406,  2406,  2406,  2406,  2406,  2406,  2406,  2406,  2407,
    2407,  2407,  2408,  2408,  2408,  2408,  2408,  2408,  2408,  2408,
    2409,  2409,  2409,  2409,  2409,  2409,  2409,  2410,  2410,  2410,
    2410,  2410,  2410,  2410,  2411,  2411,  2411,  2411,  2412,  2412,
    2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,
    2413,  2413,  2413,  2413,  2413,  2414,  2421,  2425,  2431,  2437,
    2443,  2455,  2459,  2465,  2473,  2474,  2477,  2478,  2479,  2480,
    2481,  2482,  2483,  2490,  2494,  2502,  2503,  2506,  2507,  2508,
    2511,  2515,  2521,  2530,  2538,  2549,  2553,  2562,  2563,  2567,
    2568,  2569,  2570,  2571,  2572,  2573,  2574,  2577,  2581,  2587,
    2597,  2604,  2611,  2619,  2629,  2630,  2631,  2634,  2635
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
  "INTERVAL", "ITERATE", "JOIN", "KEY", "LEAVE", "LOOP", "LESS",
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
  "table_reference", "table_factor", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "create_index_stmt", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "truncate_extra_tables",
  "opt_truncate_options", "reclaim_table_stmt", "analyze_table_stmt",
  "alter_table_stmt", "opt_col_position", "insert_stmt", "opt_ondupupdate",
  "@30", "opt_on_conflict", "opt_conflict_target", "conflict_action",
  "@31", "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@32", "insert_vals",
  "insert_asgn_list", "replace_stmt", "copy_stmt", "@33", "opt_copy_cols",
  "copy_col_list", "copy_direction", "copy_target", "opt_copy_options",
  "copy_option_list", "copy_option", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_table_options", "shard_range_list", "shard_range_def",
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@34", "column_atts", "opt_length", "opt_binary",
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
     596,   597,   598,   599,   600,   601,   602,   603,    59,    46,
      40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   364,   365,   365,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   367,   366,   368,   366,   369,   366,
     370,   366,   366,   366,   366,   366,   366,   366,   366,   371,
     371,   372,   372,   373,   366,   374,   366,   375,   366,   376,
     366,   377,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   378,   366,   379,   366,   380,   366,   381,   366,
     382,   366,   383,   366,   384,   366,   385,   366,   386,   366,
     387,   366,   388,   366,   389,   366,   390,   366,   391,   366,
     392,   366,   393,   366,   394,   366,   395,   366,   396,   366,
     397,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   398,   398,
     398,   366,   366,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   366,   366,   366,   366,   400,   400,   366,   366,
     366,   366,   366,   366,   366,   401,   402,   402,   402,   403,
     403,   404,   404,   405,   405,   406,   406,   406,   407,   407,
     408,   408,   409,   409,   410,   410,   411,   411,   412,   412,
     413,   413,   414,   414,   415,   415,   415,   416,   416,   416,
     416,   417,   417,   417,   417,   417,   418,   418,   419,   419,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   422,   423,   423,   423,   424,   424,   425,   425,
     426,   426,   426,   426,   427,   427,   428,   428,   428,   428,
     428,   429,   429,   429,   430,   430,   431,   431,   432,   432,
     432,   433,   433,   434,   434,   435,   435,   435,   435,   436,
     436,   437,   437,   438,   401,   439,   440,   440,   440,   440,
     439,   441,   441,   442,   442,   439,   401,   443,   443,   401,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   445,   445,   445,   446,   446,
     446,   446,   401,   447,   401,   448,   448,   449,   449,   450,
     450,   450,   450,   450,   401,   451,   401,   452,   452,   401,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     454,   454,   454,   401,   455,   455,   456,   457,   456,   458,
     458,   459,   459,   459,   460,   461,   460,   462,   462,   463,
     463,   463,   463,   463,   464,   464,   465,   465,   466,   466,
     467,   468,   467,   469,   469,   469,   469,   455,   470,   470,
     470,   470,   401,   471,   471,   471,   401,   473,   472,   474,
     474,   475,   475,   476,   476,   477,   477,   477,   478,   478,
     478,   478,   479,   479,   480,   480,   480,   480,   480,   480,
     480,   480,   401,   481,   482,   482,   482,   483,   483,   483,
     483,   401,   401,   484,   484,   401,   401,   401,   401,   485,
     485,   401,   486,   486,   486,   486,   486,   401,   487,   487,
     401,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     489,   489,   490,   490,   491,   491,   488,   488,   488,   488,
     492,   492,   492,   493,   493,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   495,
     495,   496,   496,   497,   497,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   499,   499,   500,   494,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     502,   502,   502,   503,   503,   504,   504,   504,   505,   505,
     505,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   507,   507,   508,   509,   509,   509,
     401,   510,   510,   510,   511,   511,   512,   512,   401,   513,
     513,   513,   513,   513,   513,   513,   513,   514,   514,   515,
     515,   516,   516,   516,   516,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   518,   518,   518,   518,   518,
     518,   518,   518,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   401,   520,   520,   520,
     520,   401,   521,   521,   522,   522,   523,   523,   523,   523,
     523,   523,   523,   401,   524,   525,   525,   526,   526,   526,
     401,   527,   527,   401,   401,   401,   528,   529,   529,   530,
     530,   530,   530,   530,   530,   530,   530,   401,   531,   531,
     401,   401,   401,   401,   532,   532,   532,   533,   533
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
       3,     5,     3,     3,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     6,     0,     2,
       0,     1,     3,     3,     1,     8,     2,     2,     2,     0,
       6,     2,     4,     0,     2,     7,     1,     3,     5,     1,
       8,     9,    10,     9,    11,    10,    12,    11,    13,     9,
      11,    10,    12,    11,    12,     1,     3,     1,     4,     4,
       4,     6,     1,     3,     2,     3,     5,     1,     3,     0,
       2,     2,     3,     3,     1,     3,     1,     3,     5,     1,
      10,    10,    17,    12,    19,    11,     6,     8,     6,     6,
       6,     9,     6,     5,     8,     7,     9,     8,    10,     9,
       0,     1,     2,     1,    10,     6,     0,     0,     5,     0,
       4,     0,     3,     4,     2,     0,     5,     3,     5,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     1,     3,
       3,     0,     6,     1,     1,     3,     3,     7,     3,     3,
       5,     5,     1,     8,     7,     7,     1,     0,     7,     0,
       3,     1,     3,     1,     1,     1,     1,     1,     0,     1,
       4,     3,     1,     3,     2,     2,     2,     1,     2,     2,
       2,     1,     1,     9,     0,     2,     2,     3,     5,     5,
       7,     5,     1,     4,     4,     3,     5,     3,     5,     0,
       2,     1,     5,     7,     7,     9,    11,     1,     2,     3,
       1,     9,    11,    18,     0,     4,     3,     5,     5,     9,
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
       5,     1,     1,     1,     1,     3,     3,     0,     1,     1,
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
       0,     0,     0,     0,   520,     0,   329,     0,   419,     0,
       0,   419,     0,   270,     0,   419,     0,     0,     0,   225,
     324,   336,   339,   362,   369,   374,   376,   379,   403,   442,
     446,   472,   482,   491,   497,   500,   650,   658,   816,   821,
     833,   840,   845,   857,     0,     0,     0,     0,     0,     0,
     489,     0,     0,     0,     0,     0,     0,   489,   521,     0,
       0,   489,     0,   447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   425,     0,     0,   425,     0,     0,   653,
     654,     0,     0,     0,     0,   498,     0,     1,     2,   364,
       0,     0,   847,   377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   522,     0,     0,
     489,   449,   333,     0,   328,   326,   327,     0,   485,     0,
     819,     0,   363,   817,     0,   841,     0,   487,     0,   337,
       0,   858,     0,   421,   422,   423,   424,   420,     0,   375,
       0,     0,     0,     0,   651,   652,     0,     4,     9,    10,
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
       0,     0,     0,   285,   226,   279,   365,   423,   420,   285,
       0,     0,   286,   288,   289,   295,   499,     3,     0,     0,
     370,   371,   844,   843,     0,     0,     0,     0,     0,     0,
       0,     0,   861,     0,   860,     0,   831,   827,   826,   830,
     828,   832,   829,   822,     0,   824,     0,     0,   490,   483,
       0,     0,   667,     0,     0,     0,     0,   667,   836,   835,
       0,   484,     0,     0,     0,   847,     0,     0,     0,     0,
     331,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   426,     0,   426,   657,   656,   655,     0,    51,
       0,    32,    31,    20,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   282,     0,     0,     0,     0,     0,   318,     0,
       0,     0,     0,   303,   302,   306,   310,   307,     0,     0,
     304,   294,     0,   373,   372,     0,     0,     0,     0,     0,
     393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   855,   848,   378,
     823,     0,     0,     0,   632,   641,   600,   600,   600,   600,
     600,   625,   600,   622,     0,   600,   600,   600,   603,   634,
     603,   633,   600,   600,   600,     0,   603,   600,   603,   624,
     631,   623,   642,   643,     0,     0,   626,   492,     0,     0,
       0,     0,     0,     0,   668,   669,     0,     0,     0,     0,
       0,   839,   837,   838,     0,     0,     0,     0,     0,   846,
     647,   451,     0,   453,   454,     0,   334,     0,   250,     0,
     229,   333,   486,   820,   818,   842,   488,   338,   859,     0,
       0,     0,   481,     0,     0,     5,    49,    52,     0,    46,
       0,     0,   214,     0,     0,     6,     0,     0,     0,   200,
     198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
      21,    23,    24,    22,   220,   218,    44,     0,    42,   186,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      33,    25,    26,    28,    14,    15,    16,    17,    18,    19,
      27,    30,    29,   283,   229,     0,   280,   367,   366,   285,
       0,     0,     0,   290,   323,   293,     0,   229,   287,   304,
     304,     0,   297,     0,   305,     0,   292,     0,     0,     0,
       0,   389,   386,   392,   388,   567,     0,     0,     0,     0,
     390,   862,   863,   856,   854,   850,     0,   852,     0,   853,
     825,   667,   667,     0,   629,   605,   611,   608,   605,   605,
       0,   605,   605,   605,   604,   608,   608,   605,   605,   605,
       0,   608,   605,   608,     0,     0,     0,     0,     0,     0,
     671,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   648,   649,     0,
       0,   565,   517,   295,   450,     0,   455,   456,   457,   458,
     230,     0,   257,   229,   330,   332,     0,   406,   428,     0,
       0,   405,   406,     0,   406,     0,    63,     0,   212,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,   129,     0,     0,     0,   133,   134,   135,   137,
       0,     0,   139,     0,   142,   143,   144,     0,     0,     0,
       0,     0,     0,    70,    64,    65,    66,    67,    68,    69,
     119,   120,   121,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     0,   175,   176,   177,
       0,    45,    43,     0,     0,   221,   219,    55,     0,     0,
      40,    36,    38,     0,   231,     0,     0,   318,   320,   320,
     320,     0,     0,     0,   250,   308,   309,     0,     0,   311,
       0,     0,     0,     0,     0,   567,   567,     0,   400,   567,
     395,     0,     0,   849,   851,     0,     0,     0,   617,   627,
     619,   621,   644,     0,   620,   616,   615,   638,   637,   614,
     618,   613,     0,   635,   612,   636,     0,     0,   494,     0,
     493,     0,   672,   674,   673,     0,   670,     0,   355,     0,
       0,     0,     0,     0,   357,     0,     0,     0,     0,     0,
     685,     0,     0,     0,     0,     0,     0,     0,   647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   523,     0,
       0,   452,   471,     0,     0,   467,     0,     0,     0,     0,
     448,   459,   462,     0,     0,   864,   335,     0,     0,     0,
     437,   427,     0,     0,   406,   444,   406,   445,    50,   216,
       0,   215,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      74,    76,     0,     0,     0,     0,     0,   108,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,   240,   229,   368,   291,     0,     0,     0,     0,   477,
       0,     0,   257,   300,   298,     0,     0,   296,   312,     0,
       0,     0,     0,     0,   400,   400,   567,     0,     0,   579,
       0,   584,     0,     0,     0,     0,     0,   401,   588,   569,
       0,   586,   397,   400,   387,   394,     0,     0,   601,     0,
     606,   607,     0,     0,   608,     0,   608,   608,   630,     0,
       0,     0,   679,   682,   681,   683,   680,   675,   676,   678,
     684,   677,     0,     0,     0,     0,     0,     0,   340,     0,
       0,     0,     0,     0,     0,   685,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   565,   519,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   504,   565,     0,   646,
     466,   464,   465,   468,   469,   470,     0,     0,     0,   235,
     235,   251,   252,   258,     0,   325,   439,   438,     0,     0,
     429,   434,   433,     0,   431,   409,   443,   213,   217,     0,
       0,   114,   113,     0,   118,     0,     0,   201,   202,   147,
     125,   126,     0,     0,   130,   131,   132,   136,   138,   140,
     181,   182,   183,   184,     0,    71,    80,    82,    78,    84,
      86,    88,   122,     0,     0,   124,   197,   242,   242,   242,
      90,     0,     0,    98,     0,     0,   106,   242,   242,   154,
       0,     0,     0,   166,   167,     0,     0,   170,     0,   173,
       0,   178,     0,    54,    58,     0,     0,    48,     0,     0,
       0,    35,     0,     0,   250,   231,   319,     0,     0,     0,
       0,     0,     0,   864,   313,     0,   299,     0,     0,     0,
     563,     0,   391,   399,   400,   568,   402,     0,     0,     0,
       0,     0,     0,   589,   570,   571,   573,   572,   577,     0,
       0,     0,     0,   587,   585,   396,     0,     0,   685,     0,
       0,   610,   639,   645,   640,   628,     0,   495,   341,     0,
     685,     0,     0,     0,     0,     0,   356,     0,   349,     0,
       0,     0,     0,   693,   694,   695,   697,   696,   815,   700,
     701,   702,   808,   699,   698,   803,   804,   805,   806,   807,
     790,   703,   744,   735,   740,   685,   786,   776,   747,   779,
     722,   729,   726,   713,   769,   758,   685,   766,   784,   720,
     721,   791,   707,   714,   762,   778,   783,   780,   741,   719,
     788,   660,   718,   738,   731,   728,   685,   777,   767,   708,
     757,   796,   734,   748,   730,   749,   733,   772,   755,   716,
     685,   705,   789,   711,   773,   725,   752,   764,   724,   685,
     753,   750,   751,   759,   771,   761,   727,   732,   756,   745,
     746,   763,   795,   768,   737,   770,   723,   797,   754,   742,
     736,   743,   739,   782,   710,   704,   775,   781,   715,   717,
     706,   787,   765,   785,   760,   774,   712,   709,   793,   685,
     794,   792,   810,   811,   812,   813,   814,   801,   802,   798,
     799,   800,   809,   686,     0,     0,   343,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   268,     0,     0,     0,     0,   501,   516,   524,
     567,     0,   461,   463,   236,   237,     0,   254,   256,     0,
       0,     0,   867,   865,   866,   407,     0,   430,     0,     0,
       0,   864,     0,     0,     0,   117,   204,   205,   206,   207,
     210,   209,   211,   203,   208,     0,     0,     0,   242,   242,
     242,   242,   242,   242,     0,     0,     0,   246,   246,   246,
     242,     0,     0,     0,   242,     0,     0,     0,   242,   246,
     246,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      60,    41,    37,    39,   235,   238,   241,   257,   240,   321,
       0,     0,     0,   478,   479,     0,   473,     0,   380,   541,
       0,   539,     0,   381,     0,   398,     0,     0,     0,     0,
       0,     0,   591,     0,     0,     0,     0,     0,     0,   685,
       0,   602,   609,     0,   685,     0,   345,   358,   359,   360,
       0,     0,     0,     0,   342,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,     0,     0,     0,     0,
     504,     0,     0,     0,     0,   531,     0,     0,     0,   528,
       0,   527,     0,   537,     0,     0,     0,     0,   566,   460,
     235,   253,   260,   259,     0,     0,   441,   440,   436,   435,
       0,   411,   404,     7,   115,   112,   127,   128,   185,   246,
     246,   246,   246,   246,   246,   187,     0,   123,     0,     0,
       0,     0,     0,   246,    92,     0,     0,   246,   100,     0,
       0,   246,     0,     0,   163,   164,   165,   168,   169,     0,
     174,   179,   233,     0,     0,   232,   261,   250,   317,     0,
     316,   315,     0,   314,     0,     0,     0,   385,     0,   564,
     581,     0,   599,   583,     0,     0,     0,   592,   590,   574,
     575,   576,   578,     0,   685,     0,   662,   496,     0,   664,
       0,   353,   350,     0,   687,     0,     0,     0,     0,     0,
     685,   347,     0,     0,     0,   344,     0,   502,   518,     0,
       0,     0,     0,     0,   529,   530,   269,   525,   506,     0,
       0,     0,     0,   255,   868,     0,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   243,     0,
      73,    75,    77,     0,   242,     0,     0,     0,   242,     0,
       0,     0,   109,   111,     0,   239,   235,     0,   266,   257,
     322,   480,   383,     0,   542,   540,     0,   597,   598,     0,
       0,     0,   685,     0,   661,   663,   361,   346,   692,   691,
     688,   690,   689,     0,   354,   352,     0,     0,   532,     0,
       0,   538,     0,   505,     0,     0,     0,     0,     0,     0,
       0,   432,     0,     0,   410,    81,    83,    79,    85,    87,
      89,   188,     0,   235,   247,    91,   246,    94,    96,    99,
     246,   102,   104,   107,   171,   234,   263,   262,     0,   227,
     228,     0,   580,   582,   596,   593,     0,   666,   834,   348,
       0,     0,   526,     0,   507,   508,     0,     0,     0,   417,
       0,   412,     0,   414,   415,   245,   248,     0,     0,   242,
     242,     0,   242,   242,     0,     0,   267,     0,   594,   595,
     665,     0,     0,     0,     0,     0,     0,     0,     0,   413,
       0,   235,    93,   246,   246,   101,   246,   246,   265,   264,
     543,     0,     0,     0,     0,     0,     0,     0,   511,   418,
       0,   249,     0,     0,     0,     0,   545,     0,     0,     0,
       0,     0,   545,     0,     0,   416,    95,    97,   103,   105,
     382,   544,     0,     0,     0,     0,   533,     0,     0,   512,
     509,     0,   559,     0,     0,   503,     0,   545,   545,     0,
       0,   510,     0,   560,   384,     0,   556,   558,   557,     0,
       0,     0,   535,   534,     0,   513,   561,   562,   546,   554,
     548,     0,   550,   555,   552,     0,   545,     0,   549,   547,
     553,   551,   536,     0,     0,     0,     0,     0,     0,     0,
     514,   515
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   606,   973,  1167,  1168,  1166,   607,   608,   963,
    1162,   964,  1163,   617,  1347,  1348,  1349,  1650,  1648,  1649,
    1651,  1652,  1653,  1660,  1914,  2029,  2030,  1664,  1918,  2032,
    2033,  1668,  1357,  1358,   623,  1110,   356,    18,    19,   588,
    1171,  1685,  1617,  1825,  1384,  1657,  1908,  1800,  1984,   852,
    1291,  1292,  1085,  1928,  1999,  1603,    81,   264,   265,   472,
     271,   272,   273,   492,   274,   489,   765,   490,   761,  1187,
    1188,   753,  1176,  1690,   275,    20,    64,   117,   330,    21,
      22,  1043,  1044,    23,    24,   748,    89,    25,    26,    27,
    1212,    28,  1090,  1775,  1631,  1899,  1974,  2050,  1896,    73,
     138,   601,   859,  1094,  1629,  1303,   857,    29,    30,   111,
     328,   582,   585,   849,  1080,  1081,  1082,    31,    84,   757,
      32,    97,    33,    34,    35,  1607,  2098,  2099,    62,  1067,
    1068,  1702,  1700,  2061,  2090,  1401,  1069,   998,   794,   805,
    1008,  1009,   557,  1013,   842,   843,    36,    79,    80,    37,
     563,   564,   565,  1242,  1256,  1583,    38,    39,   304,   305,
      40,   320,   574,    41,    42,   294,   518,    43,  1295,  1624
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1576
static const yytype_int16 yypact[] =
{
   10870,  -106,  -151,    81,   542,   108, -1576,   543, -1576,  -116,
     -64, -1576,    49, -1576,    20,    13,    74,   513,    93, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576,   496,   551,   607,   629,   275,   477,
     489,   694,   554,   703,   334,   706,   708,   489, -1576,   487,
     569,   489,   491, -1576,    84,   106,   187,   722,   250,   328,
     333,   371,   405,   377,   735,   748,   377,   606,   444,   392,
   -1576,  6202,   755,   547,    15, -1576,   757, -1576, 10870,   422,
      61,   610,    24,   406,    35,   -11,   511,   771,   752,   784,
     455,   615,   464,   552,   457,   401,   822, -1576,   338,   824,
     489,   471,   531,   850, -1576, -1576, -1576,   -92, -1576,   637,
   -1576,   643, -1576, -1576,   647, -1576,   659, -1576,   665, -1576,
     670, -1576,   677, -1576, -1576, -1576, -1576, -1576,   910, -1576,
     742,   982,  9712,  9712, -1576, -1576,   994,   200, -1576, -1576,
   -1576, -1576,   996,  9712,  9712,  9712, -1576, -1576, -1576,  7255,
   -1576, -1576,   652, -1576, -1576, -1576,   660, -1576, -1576, -1576,
   -1576, -1576,   666,   676,   699,   715,   743,   786,   811,   837,
     926,   928,   930,   934,   940,   947,   948,   974,   983,   991,
    1007,  1008,  1010,  1011,  1012,  1013,  1016,  1017,  1022,  1028,
    1029,  1031,  1035,  1036,  1039,  1045,  1056,  1057,  1058,  1059,
    1061,  1062,  1063,  1064,  1069,  1073,  1074,  1075,  1076,  1079,
    1084,  1085,  1087,  1092,  1094,  1097,  1099, -1576, -1576,  1102,
    1109,  1110,  1111,  1113,  1115,  1118,  1125,  1132,  1133,  1135,
    1137,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1148,
    1157,  1160,  1161,  1162,  1163,  1165,  1169,  1171,  1173,  1178,
    1183,  1184,  9712, 11316,   -96, -1576,   761,    42,    43,    46,
      41,  -152,   616, -1576, -1576,  1285, -1576, -1576,  1302,  1334,
   -1576, -1576, -1576, -1576,   570,    83,  1363,   548,  1483,   445,
     624,  1485,  1294,  1325,    70,  1551, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576,   366, -1576,  1552,  1553, -1576, -1576,
   10970,  1375,    64,  1555,  1377,  1301,  1559,    64, -1576, -1576,
     301, -1576,  1384,   475,  1308, -1576,  1565,  1566,   -18,  1545,
   -1576,   266,  -193,    15,  1572,  1573,  1575,  1576,  1577,  1580,
    1585,  1587,  -141,  1589,  -102, 11440, 11440, -1576,  1590,  9712,
    9712,  1194,  1194, -1576,  9712, 10784,   305,  1591,  1592, -1576,
    9712,  6553,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,
    9712,  1242,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,
    9712,  9712,  9712,  9712,  9712,  9712,  9712,  1258,  9712,  9712,
    9712,  1259,  9712,  9712,  9712,  9712,  9712,  9712,  7606,  9712,
    9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  1260,
    1261,  1262,  1263,  1264,  9712,  9712,  1265,  1266,  1267,  9712,
    9712,  1584,  1268,  1269,  9712,  9712,  9712,  9712,  9712,  9712,
    9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,
    9712,  9712,  9712,  9712,  9712,  9712,  1270,  2691, -1576,  9712,
    9712,  9712,  9712,  9712,    45,  1284,   835,  9712,  6904,  9712,
    9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,  9712,
    9712,  1657, -1576,    15,  1658,  9712,  1659,  1683,    32,  1326,
     373,  1685,    15, -1576, -1576, -1576,   -38, -1576,    15,  1534,
    1515, -1576,  1694, -1576, -1576,  1695,  1697,  1699,  1700,  1701,
   -1576,  1702,  1703,  1704, 10970,  1728,  1476,  1729,  1730,  1731,
    1732,  1733,  1378,  1734,    16,   120,  1735, -1576, -1576, -1576,
   -1576,    89,  1381,  1382, -1576, -1576,  1393,  1393,  1393,  1393,
    1393, -1576,  1393, -1576,  1395,  1393,  1393,  1393,  1688, -1576,
    1688, -1576,  1393,  1393,  1393,  1396,  1688,  1393,  1688, -1576,
   -1576, -1576, -1576, -1576,  1397,  1401, -1576,   442,  1760, 10970,
    1768,  1769,  1770,  1413,  1414, -1576,   183,  1772,  1774,  1596,
    1419, -1576, -1576, -1576,  1599,  1779,  1601,  1527,  1784,    70,
    -111, -1576,   381, -1576, -1576,    60, -1576,  9712,  1606,    15,
    -153,   531, -1576, -1576, -1576, -1576, -1576, -1576, -1576,  1787,
    1788,   254, -1576,  1787,   274, -1576,  1154, -1576,  1431, 11440,
   10808,   391, -1576,  9712,  9712, -1576,  1437,  1578,   118, -1576,
   -1576, -1576,  3018,  7957,  1586,  1627,  1653,  3345,  3672,  3999,
    4326,  4653,  4980, -1576,  1698,  1998,  2319,  2646,  5307,  2973,
    3300,  3627,  5634,  7709,  7732,   173,  3954,  7781,  4281, -1576,
    7806,  7829,  7977, -1576, 11364,  4608,  4935,  5262,  5589,  2364,
    1440,  8035,  8076,  8133,  8173,  8329,  8396,  8420,  8443,  5916,
    5961,  6306, -1576, -1576, -1576, -1576, -1576,  8477,  6363,  1477,
    1478,  1481,   553,   577,  1452,  1486,  1487,  6411,  8500,  8525,
    8681,  8723,  8764,  8787,  8844,  8869,  6569,  6617,  6651,  6674,
    6722,  6770,  6934,  6976,   639,  9033,  9082,  9108,  7019, -1576,
   -1576,  7475,  9432,  6996,  7039,  7039, -1576,    48, -1576, -1576,
    1597,  9712,  9712,  1457,  9712, 11390,  1459,  1460,  1461,  9712,
    1292,   967,  1220,  1383,   987,   987,   650,   650,   650,   650,
     741, -1576, -1576, -1576,  -153,  1696, -1576, -1576,  1463,    79,
    1666,  1667,  1670, -1576, -1576, -1576,     6,   179,   616,  1515,
    1515,  1672,  1646,    15, -1576,  1674, -1576,   -14, 10970, 10970,
    1828, -1576, -1576, -1576, -1576, -1576, 10970,  1829,  1608,  1609,
   -1576, -1576, -1576, -1576, -1576, -1576,  1831, -1576,  1832, -1576,
   -1576,    64,    64,  1833, -1576, -1576, -1576, -1576, -1576, -1576,
    1835, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
    1835, -1576, -1576, -1576,  1838,  1839,  1668,  1489,  9712,  1494,
   -1576, 10970, 10970, 10970,  1647,    64,  1610,   157,   184,  1673,
    1859,   595,  1861,   188,  1864,  1866,  1690, -1576, -1576,  1791,
    1875,   763, -1576,  1285, -1576,  1876, -1576, -1576, -1576,   628,
   11440,  1825,  1717,  -153, -1576, -1576,  1863,  -147, -1576,   418,
    1525, -1576,  -147,  1525,  1711,  9712, -1576,  9712, -1576,  9712,
   11217, 10859,  1818,  1541,  9712,  9712, -1576,  9712, 11143,  1750,
    1750,  9712, -1576, -1576, -1576, -1576, -1576, -1576,  9712,  9712,
    9712,  9712, -1576,  9712,  9712,  9712, -1576, -1576, -1576, -1576,
    9712,  9712, -1576,  9712, -1576, -1576, -1576, 10970, 10970,  9712,
    9712,  9712,  1901, -1576,  1579,  1581,  1582,  1583,  1588,  1598,
   -1576, -1576, -1576,  9712,  9712,  9712, -1576,  9712,  1554,  1558,
    1567,  1602,  1907,  1603,  1908,  1604,  1593,  1594,  9712, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576,  9712,  9712,  9712,
    9712,  9712,  9712,  9712,  9712, -1576,  9712, -1576, -1576, -1576,
    9712, -1576, -1576,  9712,  1578,  7039,  7039,  1712, 11415,  9712,
   -1576, -1576, -1576,  1578,  1782,    15,  1932,    32,  1807,  1807,
    1807,  9712,  1938,  1940,  1606, -1576, -1576,    15,  9712,   -65,
      15,  1595,  1793,  1794,  1600, -1576, -1576, 10970,   696, -1576,
   -1576,  1948,  1949, -1576, -1576,  1605,  1607,   437,   -88,   730,
     -88,   -88, -1576,   462,   -88,   -88,   -88,   730,   730,   -88,
     -88,   -88,   479,   730,   -88,   730,  1611,  1615,  1886,  9712,
   11440,   157, -1576, -1576, -1576,   385, -1576,  1617, -1576,  1618,
    1619,  1621,  1625,   494, -1576,  1710,   157,  1955,   190,  1912,
   -1576,  1827,  1718,   157,   226,  1804,  1966,  1967,   -86,  1985,
    1630,  1837,   532,  1638,  1639,  1844,  1642,   499, -1576,  2000,
    1578, -1576, -1576,  2001,    -9,  2025,  2002,  2003,  1644,   654,
   -1576,  1671, -1576,   474,  9712,  1840, -1576,  8308,  1878,  2029,
   -1576, -1576,  2032,  8659,  -134, -1576,  -134, -1576, -1576, 11440,
   11254, -1576,  9712,  1676, -1576,  7683,   950,  9131,  9712,  9712,
    1677,  1678,  9171,  9196,  9221,  7075,  7099,  9377,  9475,  9540,
    9565,  9729,  9776,  1679,  1680,  9799,  9827,  7123,  1686,  1689,
    1691,  1692,  1693,  1705,  1706,  1019,  7279,  9884,  9909, -1576,
   -1576, -1576,  1707,   501,  1708,   503,  1709, -1576, -1576,  9932,
    7329,  7364,  7387, 10073, 10096,  7428,  7452,  1042,  1066,  1106,
    1687,  1719,  9712,  1578,  9712,  1244,  1578,  1578,  1578,  1721,
    1995,  1914,  -153, -1576, -1576,  1900,  1723,  1724,  1738, 11440,
    2036,     8,  1717, -1576, 11440,  9712,  1739, -1576, -1576,   -65,
    9712,  1747,  1748,  2054,   696,   696, -1576,  1880,  2056,  1749,
    1753,  1754,  2017,  2059,  1756,  2060,   101, -1576, -1576, -1576,
    1915,  1922, -1576,   696, -1576, -1576,  1865,   640, -1576,  2065,
   -1576, -1576,  1868,  2086, -1576,  2087, -1576, -1576, -1576,  1757,
   10120,   516, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576,   651,   157,  2089,  2107,  2115,  2116, -1576,  2122,
    1766,   519,  1773,  1881,   157, -1576,  1332,  2022,  1776,   523,
    1893,   157,  2138,   258,  2010,   763, -1576,   435,  9712,  1785,
    1786,  1789,  2141,  2141,  1790,  2054,    10,   763, 10970, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576,   654,   525,   654,   -19,
     451,  1792, -1576,  1129,   132, -1576, -1576, 11440,  1909,  2128,
   -1576, -1576, 11440,   550, -1576,  1969, -1576, -1576, 11440,  2148,
    9712, -1576, -1576,  9712, -1576, 10143, 10761, -1576, -1576, -1576,
   -1576, -1576,  9712,  9712, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576,  9712, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576,  9712,  9712, -1576, -1576,  1824,  1824,  1824,
   -1576,  1830,   912, -1576,  1836,   916, -1576,  1824,  1824, -1576,
    9712,  9712,  9712, -1576, -1576,  9712,  9712, -1576,  9712, -1576,
    9712, -1576,  9712, -1576, -1576,  1795,  1798,  1244,  1799,  1800,
    1802, -1576,  9712,  9712,  1606,  1782, -1576,  2152,  2152,  2152,
    9712,  9712,  2162,  1840, 11440,  2141, -1576, 10171,  2163,  2167,
   -1576,   561, -1576, -1576,   696, -1576, -1576,  2166,  9712,  2168,
    2129,   -12,  9712, -1576, -1576, -1576, -1576, -1576, -1576,  1816,
    1821,  1822,  9712, -1576, -1576, -1576,   385,  2132, -1576,  1843,
    2185, -1576,   730, -1576,   730,   730,  9712, -1576, -1576,  2139,
   -1576,   582,  1845,  1846,  1847,  1834, -1576,   157, -1576,   157,
    1850,   585,  1742, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576,  1992,   157, -1576,  1852,   589,  1855,
    1952,   157,  1972,   592,  1869,  2049,  2072,  1870, 10194,  2163,
    2141,  2141, -1576,   597,   622,  2167,   625,   228, -1576, -1576,
   -1576,   646, -1576, -1576, -1576, -1576,  2229, -1576, -1576,   474,
    9712,  9712, -1576, -1576,  1872, -1576,  9010, -1576,  9361,  1877,
    2156,  1840,  1879, 10228, 10253, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, 10276, 10299, 10322,  1824,  1824,
    1824,  1824,  1824,  1824,  1180, 10345,  2183,  2058,  2058,  2058,
    1824,  1882,  1884,  1892,  1824,  1883,  1896,  1897,  1824,  2058,
    2058, 10368, 10391, 10417, 10440, 10464,  7624, 10487, 10515, -1576,
   -1576, -1576, -1576, -1576, 11277,   164, 11440,  1717,  1914, -1576,
     648,   661,   663, 11440, 11440,  2219, -1576,   738,  2236, -1576,
     740, -1576,   744, -1576,  2256, -1576,   746, 10538,   749,  1902,
    1906,  2104, -1576, 10572,  1916,  1917,  1918, 10597,   669, -1576,
    2069, -1576, -1576, 10620, -1576,  2396, -1576, -1576, -1576, -1576,
    2265,   751,   753,   157, -1576, -1576,  2723,  3050,  3377,  3704,
    4031,  4358,  2218,   801,   157, -1576,   157,  1920,   827,  2147,
      10,  9712,  1921,  1923,  2054, -1576,   866,   869,   872, -1576,
    2273, -1576,   874, -1576,   520,  2279,  2230,  2231, 10874, -1576,
     451, -1576, 11440, 11440,  2281,  2284, -1576, 11440, -1576, 11440,
    8659,  1931, -1576, -1576, -1576, -1576, -1576, -1576, -1576,  2058,
    2058,  2058,  2058,  2058,  2058, -1576,  9712, -1576,  2289,  2238,
    1933,  1934,  1935,  2058, -1576,  1971,  1975,  2058, -1576,  1976,
    1977,  2058,  1936,  1945, -1576, -1576, -1576, -1576, -1576,  9712,
   -1576, -1576, -1576,  2109,  9712, -1576,  2180,  1606, -1576,  2310,
   -1576, -1576,  9712, -1576,  2067,  2124,  2314, -1576,  2317, -1576,
   -1576,  2320,   882, -1576,  2321,  9712,  9712, -1576, -1576, -1576,
   -1576, -1576, -1576,  2275, -1576,  4685, -1576, -1576,  5012, -1576,
    1991, -1576, -1576,   876, -1576,  2267,  2232,  2205,  2196,  2102,
   -1576, -1576,   878,   893,   157, -1576,  1997,   228, -1576, 10643,
    2163,  2167,   895,  2169, -1576, -1576, -1576, -1576, -1576,  2353,
     318,   243,  2170, -1576, -1576,  2342,  2004,   897,  2360,  2271,
    2006,  2007,  2020,  2037,  2044,  2046, 10666, -1576,  2035,  2362,
   -1576, -1576, -1576,  2048,  1824,  2050,  2051,  2057,  1824,  2055,
    2066,  2064, -1576, -1576, 10689, -1576, 11277,  -119,  2266,  1717,
   -1576, 11440, -1576,  2416, -1576, -1576,  2073, -1576, -1576,  2074,
   10712, 10735, -1576,  5339, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576,  5666, -1576, -1576,   899,  2431, -1576,   921,
     931, -1576,  2434, -1576,  2437,  2438,  2083,  2084,  2085,  9712,
    2443, -1576,   935,   -17, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576,  2449,   451,  2091, -1576,  2058, -1576, -1576, -1576,
    2058, -1576, -1576, -1576, -1576, -1576,  2244,  2248,  2141, -1576,
   -1576,  2100, -1576, -1576,  1228, -1576,  5993, -1576, -1576, -1576,
    2106,  2276, -1576,   939, -1576, -1576,  2460,  2466,  2468, 11440,
    2452, -1576,  2470, -1576, -1576, -1576, -1576,  2471,  2114,  1824,
    1824,  2117,  1824,  1824,  2311,  2312,  2118,  2476, -1576, -1576,
   -1576,  2257,  2478,  2480,  2476,  2125,  2126,  2127,  9712, -1576,
    2270,   451, -1576,  2058,  2058, -1576,  2058,  2058, -1576, -1576,
   -1576,   942,  2131,   946,  2133,   964,  2137,  2283, -1576, 11440,
    2284, -1576,  2142,  2150,  2155,  2157, -1576,  2482,  2493,  2496,
    2476,  2476, -1576,  2292,  2503,  2004, -1576, -1576, -1576, -1576,
      82, -1576,  2160,  2149,   968,   971,   241,  2520,   984, -1576,
   -1576,    -6,  2383,   490,    22, -1576,  2476, -1576, -1576,  2442,
    2282, -1576,  2292, -1576, -1576,    11, -1576, -1576, -1576,   350,
     436,   992,   241,   241,  2374, -1576, -1576, -1576, -1576, -1576,
   -1576,    -1, -1576, -1576, -1576,   344, -1576,  2304, -1576, -1576,
   -1576, -1576,   241,    71,  2355,  2357,  2359,  2366,  2544,  2550,
   -1576, -1576
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1576,  2469,   -81, -1576, -1576, -1576, -1576,  -796, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576,  1681,  2201, -1576,  -211,  -578,
    1174, -1576, -1287, -1576,   875, -1194, -1576, -1556, -1576,  -980,
   -1576,   945, -1177, -1576, -1576, -1272, -1576, -1576,  2090,  -260,
    -257,  2088,  -473,  1725, -1576, -1576,   602, -1576, -1576, -1576,
    1380,  1612,   384,   -23, -1576, -1576, -1576,  2453,  1981, -1576,
   -1576, -1029, -1576, -1576, -1576, -1576, -1576, -1576, -1576, -1576,
   -1147, -1576,  -831, -1576, -1576, -1576, -1576, -1576,   497,   505,
    2504,  2237, -1576,  1722, -1576,   804,  1983, -1576, -1576, -1576,
   -1576, -1576, -1576, -1576, -1576, -1045,  1299, -1576, -1576, -1576,
   -1576,   638, -1576, -1576, -1576,   843, -1576,   483, -1576,  1337,
    1320, -1575, -1570, -1304, -1351, -1261, -1576,  -988,   398,   244,
      96,  -786,  -377,  1796, -1052, -1576, -1576, -1576,  2457, -1576,
    -307, -1576,  1780,  1181, -1033, -1576, -1576, -1576, -1576,  2092,
   -1576, -1576, -1576, -1576, -1576,  2285, -1576, -1576, -1370, -1576
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -648
static const yytype_int16 yytable[] =
{
     263,  1604,  1231,  1618,  1182,  1393,  1266,  1194,  1195,   478,
     570,  1213,   854,   480,  1606,   762,  -474,  1251,   269,  1017,
    1018,   785,  1614,  1696,  1259,  1023,   981,  1025,  1391,  1756,
    1762,  1095,   473,  1097,  1287,   837,   333,  1088,   296,   297,
     298,   299,   300,   301,   269,  -476,  -475,  1402,  1403,   448,
    1088,   716,   589,  -647,   961,   474,   991,    77,  1710,   479,
     837,   345,   346,   717,   846,  2023,  1425,   559,   481,  1098,
    1281,   292,   351,   352,   353,  2144,   590,    85,   355,   599,
     560,    47,   448,  2113,    48,  1615,   497,   112,   512,   471,
     838,  1996,   296,   297,   298,   299,   300,   301,    44,   587,
    2101,  2126,  1801,  1802,  2138,  1414,  1415,  1416,  1417,   118,
     583,    63,   992,  1812,  1813,   838,    74,  1185,   603,  1997,
     306,  2119,   471,  1697,   759,   787,    45,   775,   449,   450,
     451,   452,   453,   454,   455,  1622,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,  1220,  2127,   282,  1658,  1659,   837,   750,  1623,   498,
    1038,    86,   760,  1669,  1670,  1418,   974,  1160,    75,   334,
    1221,  2102,   993,   283,  1711,   788,   307,  2139,   751,   984,
    1186,   447,   820,   449,   450,   451,   452,   453,   454,   455,
     120,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   561,   584,  1404,   482,
     482,   838,   113,   302,  1441,  1089,   744,   293,   839,   600,
    1282,  2024,  1452,   718,  1608,  1451,   962,   994,  1304,  1712,
     114,  -647,  1588,  1900,  1901,  1902,  1903,  1904,  1905,   513,
    2145,  1611,  2114,    46,   562,   115,   874,  1913,   840,   841,
    2103,  1917,    82,   123,   119,  1921,    78,  1705,   600,  2109,
    2120,  1782,    13,  1305,  2104,  1306,   475,   302,  1764,   609,
     334,   786,   116,   610,  1265,  1086,   847,   848,   752,   618,
     622,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     989,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,  1960,   650,   651,   652,
    1959,   654,   655,   656,   657,   658,   659,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,  1757,  1758,
    2102,   125,   853,   677,   678,   121,   127,   101,   682,   683,
    1616,   322,   719,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   982,  1375,  1392,   711,   712,
     713,   714,   715,  -474,   129,   270,   725,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,   742,
     861,   995,   996,   864,   263,  1720,   303,  1822,   124,   999,
     571,   270,  -476,  -475,  1687,   477,   873,  1725,   131,  2103,
    1765,   102,  1419,  1420,  1421,   323,  2128,  1964,  1731,  1823,
    1732,   612,   613,  2104,   514,   515,   516,   517,   826,  1045,
    2028,   587,  1966,  1052,  2031,  1253,  1766,   318,  1432,  1232,
    1434,  1435,  1736,  1233,  1032,  1033,  1034,   144,   504,  2140,
     572,    88,   319,  1737,  1789,  1790,  1791,  1792,  1793,  1794,
     816,  1422,  1039,  1040,  1041,  1042,  1803,   314,   278,   279,
    1807,  1260,   133,  1738,  1811,    13,   126,  1289,   576,  1290,
     875,   128,   103,  1893,  1005,  1006,   324,  1739,   280,   977,
    1967,  1234,  1614,  1882,  1235,    13,  1740,  2072,  2073,    90,
    2074,  2075,  2132,  1590,   860,  1594,   850,   868,   869,  1236,
    1826,  -333,   817,    87,  1183,   134,    76,  1189,   587,   130,
      83,   505,  2141,   135,   863,  1888,  1824,  2129,   136,  1237,
    1123,  1124,   870,   871,   899,   900,  1741,  1238,   137,   573,
    1889,   983,   878,   827,  1046,  2130,  1965,   818,  1053,   145,
    1254,   500,    49,   132,    91,  1615,  1743,  1767,   614,   348,
     349,  1595,  1748,   449,   450,   451,   452,   453,   454,   455,
    2131,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,  1261,   449,   450,   451,
     452,   453,   454,   455,  1385,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
      92,   501,   315,  2133,  1239,   142,  1240,   281,  1591,  2116,
    1196,  1596,  1768,   577,   502,   329,   143,   506,  -333,    50,
      65,  2134,    93,   495,  1241,    94,    51,    96,  1049,  1995,
     965,   966,   133,   968,   614,   284,   496,  1050,   447,   449,
     450,   451,   452,   453,   454,   455,  2135,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,    52,    53,    66,  2117,  1597,   285,    95,  1270,
     468,   469,   470,  1427,   483,   134,  1855,   507,  1271,    54,
      67,  1858,  1428,   267,  1439,   106,  2026,    98,  1878,   109,
     508,    99,   286,  1440,  1863,  2118,   100,  1072,   268,   104,
     287,   105,  1853,   107,  1197,  1872,   108,  1873,  1172,  1073,
    1986,  1854,   288,   110,  1990,   122,  2036,   520,   521,    55,
      68,  2096,  1198,  1072,   755,   482,  1199,  1030,   139,  1200,
    2065,  1201,   844,   845,  1202,  1073,    56,    69,   326,    57,
      70,   140,  2000,  1161,   146,  1074,  2122,  2123,   266,  1203,
     276,   484,  1169,  1075,  2071,   295,  1204,  1205,    58,    59,
     308,  -301,   469,   470,   309,    71,  2094,  2095,   485,  1091,
    1092,  1074,   289,    60,   806,  2142,  1099,   311,  1100,  1075,
     811,   486,   813,  1105,  1106,   310,  1107,   313,  1218,  1219,
    1112,  1206,  2121,   290,  1222,  1223,  1076,  1113,  1114,  1115,
    1116,   316,  1117,  1118,  1119,   312,   487,   317,  1207,  1120,
    1121,  1943,  1122,  1224,  1225,   321,  1059,   325,  1125,  1126,
    1127,   327,  1076,  1060,   488,  2053,  2054,  1953,  2056,  2057,
    1226,  1225,  1135,  1136,  1137,  1956,  1138,  1929,   721,   722,
    1077,   723,  1208,   331,   724,  1248,  1249,  1149,   291,  1279,
    1276,  1277,  1351,  1352,  1354,  1355,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1209,  1158,  1077,  1438,  1249,  1159,
    1448,  1249,  1210,  1078,  1586,  1249,  1612,  1288,  1165,  1061,
     329,    61,    72,  1062,  1010,  1011,   335,  1014,  1015,  1016,
    1179,  1610,   336,  1019,  1020,  1021,   337,  1184,  1024,  2006,
    1063,  1627,  1628,   342,   931,   932,  1662,  1663,   338,  1064,
    1666,  1667,  1703,  1704,   339,   795,   796,   797,   798,   340,
     799,  1937,  1938,   801,   802,   803,   341,  1211,   933,   934,
     807,   808,   809,  1726,  1249,   812,  1734,  1249,  1230,  1065,
    1745,  1249,  1376,  1750,  1277,  1378,  1379,  1380,  1759,  1760,
     449,   450,   451,   452,   453,   454,   455,   343,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  1761,  1760,   344,  1763,  1704,  1079,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     955,   956,    77,  1293,  1066,   350,  1297,  1769,  1288,  1828,
    1829,   357,  1302,   464,   465,   466,   467,   468,   469,   470,
     358,  1308,  1830,  1829,  1831,  1829,   359,  1315,  1316,   449,
     450,   451,   452,   453,   454,   455,   360,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,   361,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   362,   449,   450,   451,   452,
     453,   454,   455,  1377,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,  1833,
    1760,  1835,  1836,   363,  1394,  1837,  1838,  1840,  1841,  1397,
    1843,  1844,  1861,  1249,  1862,  1249,   449,   450,   451,   452,
     453,   454,   455,   476,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,   364,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,  1871,  1249,   449,   450,   451,   452,   453,   454,
     455,   365,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1598,  1875,  1249,
     449,   450,   451,   452,   453,   454,   455,   366,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1883,  1836,  1633,
    1884,  1760,  1634,  1885,  1760,  1887,  1838,  1947,  1249,  1954,
    1249,  1645,  1646,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  1647,  1955,  1249,  1961,  1704,  1971,  1628,
    2009,  1249,  1654,  1655,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  2038,  2039,  1671,
    1672,  1673,  2011,  1836,  1674,  1675,   367,  1676,   368,  1677,
     369,  1678,  2012,  1838,   370,  1620,  2021,  2022,  2043,  2044,
     371,  1684,  1686,  2076,  2077,  2079,  2080,   372,   373,  1693,
    1694,  1312,  1313,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  2082,  2077,  1707,   491,  2107,
    2077,  1713,  2108,  2077,   374,  1453,  1454,  1455,  1456,  1457,
    1458,  1717,  1459,   375,  1460,  2111,  2112,   493,  1461,  1462,
    1463,   376,  1464,  2136,  2077,  1723,  1465,  1466,  1467,  1468,
    1469,   985,   986,  1177,  1178,  1691,  1692,   377,   378,  1470,
     379,   380,   381,   382,  1471,  1472,   383,   384,  1473,   494,
    1342,  1343,   385,  1474,  1475,  1476,  1477,  1478,   386,   387,
    1479,   388,  1480,  1481,  1482,   389,   390,  1483,  1484,   391,
    1485,  1486,  1487,  1367,  1368,   392,  1488,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   393,   394,   395,   396,
    1489,   397,   398,   399,   400,  1490,   499,  1369,  1370,   401,
    1491,  1492,  1493,   402,   403,   404,   405,  1494,  1495,   406,
    1496,  1497,  1498,  1499,   407,   408,  1500,   409,  1501,  1502,
    1503,  1504,   410,  1505,   411,  1506,  1507,   412,  1508,   413,
    1509,  1510,   414,  1511,  1512,  1513,  1514,  1371,  1372,   415,
     416,   417,  1515,   418,  1516,   419,  1517,  1518,   420,  1519,
    1520,  1521,  1522,  1523,  1524,   421,  1525,  1526,  1527,  1528,
    1529,  1621,   422,   423,  1530,   424,  1531,   425,  1532,   426,
     427,   428,   429,   430,   431,   432,   433,  1533,   434,  1534,
    1535,  1536,  1537,  1538,  1539,  1540,   865,   435,  1541,  1542,
     436,   437,   438,   439,  1543,   440,  1544,  1545,  1546,   441,
    1547,   442,  1548,   443,  1549,  1550,  1551,  1552,   444,  1772,
    1773,  1795,  1796,   445,   446,  1777,   503,  1779,   509,   510,
     511,  1553,  1554,  1555,   519,   522,   523,   558,   566,   567,
     568,  1556,   569,  1557,  1558,  1559,   575,   578,   580,   581,
    1560,   586,  1561,  1562,  1563,   591,   592,  1564,   593,   594,
     595,  1565,  1566,   596,  1567,  1568,  1569,  1570,   597,   684,
     598,  1571,   602,   605,   615,   616,   449,   450,   451,   452,
     453,   454,   455,   633,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   649,
     653,   672,   673,   674,   675,   676,   679,   680,   681,   685,
     686,   709,  1572,  1573,  1574,  1575,  1576,   449,   450,   451,
     452,   453,   454,   455,   720,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     743,   745,   747,   449,   450,   451,   452,   453,   454,   455,
    1879,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   749,   754,   756,   763,
    1577,  1578,  1579,  1580,  1581,  1582,   764,   766,   767,  1302,
     768,   777,   769,   770,   771,   772,   773,   774,   449,   450,
     451,   452,   453,   454,   455,  1906,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   776,   778,   779,   780,   783,   782,   781,  1924,   784,
     789,   791,   792,  1926,   804,  1453,  1454,  1455,  1456,  1457,
    1458,  1931,  1459,   793,  1460,   800,   810,   814,  1461,  1462,
    1463,   815,  1464,   819,  1940,  1941,  1465,  1466,  1467,  1468,
    1469,   821,   822,   823,   824,   828,   825,   829,   830,  1470,
     831,   832,   833,   834,  1471,  1472,   835,   836,  1473,   851,
     856,   858,   866,  1474,  1475,  1476,  1477,  1478,   872,    13,
    1479,   914,  1480,  1481,  1482,   928,   929,  1483,  1484,   930,
    1485,  1486,  1487,   935,   936,   937,  1488,   967,   -57,   970,
     971,   972,   978,   979,   975,   976,   980,   987,   988,   990,
    1489,   997,  1000,  1001,  1002,  1490,  1003,  1004,  1007,  1012,
    1491,  1492,  1493,  1026,  1027,  1035,  1028,  1494,  1495,  1029,
    1496,  1497,  1498,  1499,  1031,  1047,  1500,  1037,  1735,  1502,
    1503,  1504,  1048,  1505,  1051,  1506,  1507,  1054,  1508,  1055,
    1509,  1510,  1056,  1511,  1512,  1513,  1514,  1057,  1058,  1071,
    1083,  1084,  1515,  1087,  1516,  1093,  1517,  1518,  2019,  1519,
    1520,  1521,  1522,  1523,  1524,  1088,  1525,  1526,  1527,  1528,
    1529,  1103,  1104,  1109,  1530,  1128,  1531,  1129,  1532,  1130,
    1131,  1132,  1143,  1145,  1139,  1170,  1133,  1533,  1140,  1534,
    1535,  1536,  1537,  1538,  1539,  1540,  1134,  1141,  1541,  1542,
    1142,  1144,  1146,   -59,  1543,  1173,  1544,  1545,  1546,  1175,
    1547,  1180,  1548,  1181,  1549,  1550,  1551,  1552,   879,  1191,
    1192,  1214,  1215,  1147,  1148,  1190,  1229,  1250,  1252,  1257,
    1193,  1553,  1554,  1555,  1255,  1258,  1216,  2069,  1217,  1263,
    1264,  1556,  1227,  1557,  1558,  1559,  1228,  1243,  1244,  1245,
    1560,  1246,  1561,  1562,  1563,  1247,  1262,  1564,  1267,   880,
    1268,  1565,  1566,  1269,  1567,  1568,  1569,  1570,  1272,  1273,
    1274,  1571,  1275,  1278,  1286,  1280,  1284,  1285,   449,   450,
     451,   452,   453,   454,   455,   881,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,  1283,  1299,  1288,  1298,  1300,  1309,  1294,  1317,  1318,
    1330,  1331,  1572,  1573,  1574,  1575,  1576,  1335,  1373,  1336,
    1382,  1337,  1338,  1339,  1383,  1386,  1390,  1400,  1405,  1406,
     888,  1410,  1411,  1426,  1413,  1340,  1341,  1350,  1353,  1356,
    1429,  1423,  1453,  1454,  1455,  1456,  1457,  1458,  1424,  1459,
    1374,  1460,  1381,  1387,  1388,  1461,  1462,  1463,  1430,  1464,
    1431,  1433,  1442,  1465,  1466,  1467,  1468,  1469,  1389,  1395,
    1577,  1578,  1579,  1580,  1581,  1582,  1470,  1398,  1399,  1407,
    1443,  1471,  1472,  1408,  1409,  1473,  1412,  1436,  1444,  1445,
    1474,  1475,  1476,  1477,  1478,  1446,  1447,  1479,  1450,  1480,
    1481,  1482,  1584,  1449,  1483,  1484,  1585,  1485,  1486,  1487,
    1587,  1589,  1592,  1488,  1602,  1599,  1600,  1625,  1626,  1601,
    1605,  1630,  1632,  1656,  1619,  1689,  1679,  1489,  1661,  1680,
    1681,  1682,  1490,  1683,  1665,  1695,  1699,  1491,  1492,  1493,
    1701,  1706,  1709,  1708,  1494,  1495,  1714,  1496,  1497,  1498,
    1499,  1715,  1716,  1500,  1719,  1856,  1502,  1503,  1504,  1722,
    1505,  1724,  1506,  1507,  1742,  1508,  1730,  1509,  1510,  1747,
    1511,  1512,  1513,  1514,  1721,  1752,  1727,  1728,  1729,  1515,
    1733,  1516,  1744,  1517,  1518,  1746,  1519,  1520,  1521,  1522,
    1523,  1524,  1749,  1525,  1526,  1527,  1528,  1529,  1753,  1751,
    1754,  1530,  1770,  1531,  1774,  1532,  1781,  1780,  1798,  1832,
    1783,  1799,  1804,  1808,  1533,  1805,  1534,  1535,  1536,  1537,
    1538,  1539,  1540,  1806,  1834,  1541,  1542,  1809,  1810,  1839,
    1847,  1543,  1845,  1544,  1545,  1546,  1846,  1547,  1860,  1548,
    1870,  1549,  1550,  1551,  1552,  1876,  1886,  1849,  1850,  1851,
    1874,  1880,  1890,  1881,  1894,  1891,  1892,  1895,  1553,  1554,
    1555,  1898,  1907,  1909,  1910,  1911,  1912,  1922,  1556,  1915,
    1557,  1558,  1559,  1916,  1919,  1920,  1923,  1560,  1925,  1561,
    1562,  1563,  1927,  1930,  1564,  1932,  1933,  1934,  1565,  1566,
    1935,  1567,  1568,  1569,  1570,  1936,  1939,  1942,  1571,   449,
     450,   451,   452,   453,   454,   455,  1948,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,  1946,  1950,  1951,  1949,  1952,  1957,  1963,  1968,
     889,  1962,  1969,  1972,  1973,  1983,  1970,  1975,  1976,  1572,
    1573,  1574,  1575,  1576,   449,   450,   451,   452,   453,   454,
     455,  1977,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1982,  1978,  1453,
    1454,  1455,  1456,  1457,  1458,  1979,  1459,  1980,  1460,  1985,
    1987,  1988,  1461,  1462,  1463,  1991,  1464,  1998,  1989,  2001,
    1465,  1466,  1467,  1468,  1469,  1993,  1992,  1577,  1578,  1579,
    1580,  1581,  1582,  1470,  2002,  2003,  2010,  2013,  1471,  1472,
    2014,  2015,  1473,  2016,  2017,  2018,  2020,  1474,  1475,  1476,
    1477,  1478,  2025,  2027,  1479,  2034,  1480,  1481,  1482,  2035,
    2037,  1483,  1484,  2045,  1485,  1486,  1487,  2041,  2042,  2046,
    1488,  2047,  2048,  2049,  2051,  2052,  2058,  2059,  2055,  2060,
    1760,  2063,  2062,  2064,  1489,  2091,  2066,  2067,  2068,  1490,
    2070,  2078,  2084,  2081,  1491,  1492,  1493,  2083,  2092,  2093,
    2097,  1494,  1495,  2086,  1496,  1497,  1498,  1499,  2100,  2106,
    1500,  2087,  1859,  1502,  1503,  1504,  2088,  1505,  2089,  1506,
    1507,  2105,  1508,  2110,  1509,  1510,  2115,  1511,  1512,  1513,
    1514,  2113,  2124,  2137,  2143,  2148,  1515,  2146,  1516,  2147,
    1517,  1518,  2149,  1519,  1520,  1521,  1522,  1523,  1524,  2150,
    1525,  1526,  1527,  1528,  1529,  2151,   611,   277,  1530,  1688,
    1531,  1111,  1532,  1827,  1771,   746,   332,  2085,  1070,  1396,
     758,  1533,   855,  1534,  1535,  1536,  1537,  1538,  1539,  1540,
     141,   604,  1541,  1542,  1897,  1096,   862,  1613,  1543,  1174,
    1544,  1545,  1546,  1877,  1547,  2125,  1548,  1609,  1549,  1550,
    1551,  1552,  1593,   347,     0,  1036,  1022,  1718,     0,     0,
     579,     0,     0,   790,     0,  1553,  1554,  1555,     0,     0,
       0,     0,     0,     0,     0,  1556,     0,  1557,  1558,  1559,
       0,     0,     0,     0,  1560,     0,  1561,  1562,  1563,     0,
       0,  1564,     0,     0,     0,  1565,  1566,     0,  1567,  1568,
    1569,  1570,     0,     0,     0,  1571,   449,   450,   451,   452,
     453,   454,   455,   912,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,   890,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1572,  1573,  1574,  1575,
    1576,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,   913,  1453,  1454,  1455,  1456,
    1457,  1458,     0,  1459,     0,  1460,     0,     0,     0,  1461,
    1462,  1463,     0,  1464,     0,     0,     0,  1465,  1466,  1467,
    1468,  1469,     0,     0,  1577,  1578,  1579,  1580,  1581,  1582,
    1470,     0,     0,     0,     0,  1471,  1472,     0,     0,  1473,
       0,     0,     0,     0,  1474,  1475,  1476,  1477,  1478,     0,
       0,  1479,     0,  1480,  1481,  1482,     0,     0,  1483,  1484,
       0,  1485,  1486,  1487,     0,     0,     0,  1488,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1489,     0,     0,     0,     0,  1490,     0,     0,     0,
       0,  1491,  1492,  1493,     0,     0,     0,     0,  1494,  1495,
       0,  1496,  1497,  1498,  1499,     0,     0,  1500,     0,  1864,
    1502,  1503,  1504,     0,  1505,     0,  1506,  1507,     0,  1508,
       0,  1509,  1510,     0,  1511,  1512,  1513,  1514,     0,     0,
       0,     0,     0,  1515,     0,  1516,     0,  1517,  1518,     0,
    1519,  1520,  1521,  1522,  1523,  1524,     0,  1525,  1526,  1527,
    1528,  1529,     0,     0,     0,  1530,     0,  1531,     0,  1532,
       0,     0,     0,     0,     0,     0,     0,     0,  1533,     0,
    1534,  1535,  1536,  1537,  1538,  1539,  1540,     0,     0,  1541,
    1542,     0,     0,     0,     0,  1543,     0,  1544,  1545,  1546,
       0,  1547,     0,  1548,     0,  1549,  1550,  1551,  1552,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1553,  1554,  1555,     0,     0,     0,     0,     0,
       0,     0,  1556,     0,  1557,  1558,  1559,     0,     0,     0,
       0,  1560,     0,  1561,  1562,  1563,     0,     0,  1564,     0,
       0,     0,  1565,  1566,     0,  1567,  1568,  1569,  1570,     0,
       0,     0,  1571,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,   891,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1572,  1573,  1574,  1575,  1576,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,   710,  1453,  1454,  1455,  1456,  1457,  1458,     0,
    1459,     0,  1460,     0,     0,     0,  1461,  1462,  1463,     0,
    1464,     0,     0,     0,  1465,  1466,  1467,  1468,  1469,     0,
       0,  1577,  1578,  1579,  1580,  1581,  1582,  1470,     0,     0,
       0,     0,  1471,  1472,     0,     0,  1473,     0,     0,     0,
       0,  1474,  1475,  1476,  1477,  1478,     0,     0,  1479,     0,
    1480,  1481,  1482,     0,     0,  1483,  1484,     0,  1485,  1486,
    1487,     0,     0,     0,  1488,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1489,     0,
       0,     0,     0,  1490,     0,     0,     0,     0,  1491,  1492,
    1493,     0,     0,     0,     0,  1494,  1495,     0,  1496,  1497,
    1498,  1499,     0,     0,  1500,     0,  1865,  1502,  1503,  1504,
       0,  1505,     0,  1506,  1507,     0,  1508,     0,  1509,  1510,
       0,  1511,  1512,  1513,  1514,     0,     0,     0,     0,     0,
    1515,     0,  1516,     0,  1517,  1518,     0,  1519,  1520,  1521,
    1522,  1523,  1524,     0,  1525,  1526,  1527,  1528,  1529,     0,
       0,     0,  1530,     0,  1531,     0,  1532,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,     0,  1534,  1535,  1536,
    1537,  1538,  1539,  1540,     0,     0,  1541,  1542,     0,     0,
       0,     0,  1543,     0,  1544,  1545,  1546,     0,  1547,     0,
    1548,     0,  1549,  1550,  1551,  1552,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1553,
    1554,  1555,     0,     0,     0,     0,     0,     0,     0,  1556,
       0,  1557,  1558,  1559,     0,     0,     0,     0,  1560,     0,
    1561,  1562,  1563,     0,     0,  1564,     0,     0,     0,  1565,
    1566,     0,  1567,  1568,  1569,  1570,     0,     0,     0,  1571,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,   893,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1572,  1573,  1574,  1575,  1576,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,   876,
    1453,  1454,  1455,  1456,  1457,  1458,     0,  1459,     0,  1460,
       0,     0,     0,  1461,  1462,  1463,     0,  1464,     0,     0,
       0,  1465,  1466,  1467,  1468,  1469,     0,     0,  1577,  1578,
    1579,  1580,  1581,  1582,  1470,     0,     0,     0,     0,  1471,
    1472,     0,     0,  1473,     0,     0,     0,     0,  1474,  1475,
    1476,  1477,  1478,     0,     0,  1479,     0,  1480,  1481,  1482,
       0,     0,  1483,  1484,     0,  1485,  1486,  1487,     0,     0,
       0,  1488,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1489,     0,     0,     0,     0,
    1490,     0,     0,     0,     0,  1491,  1492,  1493,     0,     0,
       0,     0,  1494,  1495,     0,  1496,  1497,  1498,  1499,     0,
       0,  1500,     0,  1866,  1502,  1503,  1504,     0,  1505,     0,
    1506,  1507,     0,  1508,     0,  1509,  1510,     0,  1511,  1512,
    1513,  1514,     0,     0,     0,     0,     0,  1515,     0,  1516,
       0,  1517,  1518,     0,  1519,  1520,  1521,  1522,  1523,  1524,
       0,  1525,  1526,  1527,  1528,  1529,     0,     0,     0,  1530,
       0,  1531,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,  1533,     0,  1534,  1535,  1536,  1537,  1538,  1539,
    1540,     0,     0,  1541,  1542,     0,     0,     0,     0,  1543,
       0,  1544,  1545,  1546,     0,  1547,     0,  1548,     0,  1549,
    1550,  1551,  1552,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1553,  1554,  1555,     0,
       0,     0,     0,     0,     0,     0,  1556,     0,  1557,  1558,
    1559,     0,     0,     0,     0,  1560,     0,  1561,  1562,  1563,
       0,     0,  1564,     0,     0,     0,  1565,  1566,     0,  1567,
    1568,  1569,  1570,     0,     0,     0,  1571,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,   894,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1572,  1573,  1574,
    1575,  1576,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   882,  1453,  1454,  1455,
    1456,  1457,  1458,     0,  1459,     0,  1460,     0,     0,     0,
    1461,  1462,  1463,     0,  1464,     0,     0,     0,  1465,  1466,
    1467,  1468,  1469,     0,     0,  1577,  1578,  1579,  1580,  1581,
    1582,  1470,     0,     0,     0,     0,  1471,  1472,     0,     0,
    1473,     0,     0,     0,     0,  1474,  1475,  1476,  1477,  1478,
       0,     0,  1479,     0,  1480,  1481,  1482,     0,     0,  1483,
    1484,     0,  1485,  1486,  1487,     0,     0,     0,  1488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1489,     0,     0,     0,     0,  1490,     0,     0,
       0,     0,  1491,  1492,  1493,     0,     0,     0,     0,  1494,
    1495,     0,  1496,  1497,  1498,  1499,     0,     0,  1500,     0,
    1867,  1502,  1503,  1504,     0,  1505,     0,  1506,  1507,     0,
    1508,     0,  1509,  1510,     0,  1511,  1512,  1513,  1514,     0,
       0,     0,     0,     0,  1515,     0,  1516,     0,  1517,  1518,
       0,  1519,  1520,  1521,  1522,  1523,  1524,     0,  1525,  1526,
    1527,  1528,  1529,     0,     0,     0,  1530,     0,  1531,     0,
    1532,     0,     0,     0,     0,     0,     0,     0,     0,  1533,
       0,  1534,  1535,  1536,  1537,  1538,  1539,  1540,     0,     0,
    1541,  1542,     0,     0,     0,     0,  1543,     0,  1544,  1545,
    1546,     0,  1547,     0,  1548,     0,  1549,  1550,  1551,  1552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1553,  1554,  1555,     0,     0,     0,     0,
       0,     0,     0,  1556,     0,  1557,  1558,  1559,     0,     0,
       0,     0,  1560,     0,  1561,  1562,  1563,     0,     0,  1564,
       0,     0,     0,  1565,  1566,     0,  1567,  1568,  1569,  1570,
       0,     0,     0,  1571,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,   895,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1572,  1573,  1574,  1575,  1576,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,   883,  1453,  1454,  1455,  1456,  1457,  1458,
       0,  1459,     0,  1460,     0,     0,     0,  1461,  1462,  1463,
       0,  1464,     0,     0,     0,  1465,  1466,  1467,  1468,  1469,
       0,     0,  1577,  1578,  1579,  1580,  1581,  1582,  1470,     0,
       0,     0,     0,  1471,  1472,     0,     0,  1473,     0,     0,
       0,     0,  1474,  1475,  1476,  1477,  1478,     0,     0,  1479,
       0,  1480,  1481,  1482,     0,     0,  1483,  1484,     0,  1485,
    1486,  1487,     0,     0,     0,  1488,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1489,
       0,     0,     0,     0,  1490,     0,     0,     0,     0,  1491,
    1492,  1493,     0,     0,     0,     0,  1494,  1495,     0,  1496,
    1497,  1498,  1499,     0,     0,  1500,     0,  1868,  1502,  1503,
    1504,     0,  1505,     0,  1506,  1507,     0,  1508,     0,  1509,
    1510,     0,  1511,  1512,  1513,  1514,     0,     0,     0,     0,
       0,  1515,     0,  1516,     0,  1517,  1518,     0,  1519,  1520,
    1521,  1522,  1523,  1524,     0,  1525,  1526,  1527,  1528,  1529,
       0,     0,     0,  1530,     0,  1531,     0,  1532,     0,     0,
       0,     0,     0,     0,     0,     0,  1533,     0,  1534,  1535,
    1536,  1537,  1538,  1539,  1540,     0,     0,  1541,  1542,     0,
       0,     0,     0,  1543,     0,  1544,  1545,  1546,     0,  1547,
       0,  1548,     0,  1549,  1550,  1551,  1552,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1553,  1554,  1555,     0,     0,     0,     0,     0,     0,     0,
    1556,     0,  1557,  1558,  1559,     0,     0,     0,     0,  1560,
       0,  1561,  1562,  1563,     0,     0,  1564,     0,     0,     0,
    1565,  1566,     0,  1567,  1568,  1569,  1570,     0,     0,     0,
    1571,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,   901,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1572,  1573,  1574,  1575,  1576,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     884,  1453,  1454,  1455,  1456,  1457,  1458,     0,  1459,     0,
    1460,     0,     0,     0,  1461,  1462,  1463,     0,  1464,     0,
       0,     0,  1465,  1466,  1467,  1468,  1469,     0,     0,  1577,
    1578,  1579,  1580,  1581,  1582,  1470,     0,     0,     0,     0,
    1471,  1472,     0,     0,  1473,     0,     0,     0,     0,  1474,
    1475,  1476,  1477,  1478,     0,     0,  1479,     0,  1480,  1481,
    1482,     0,     0,  1483,  1484,     0,  1485,  1486,  1487,     0,
       0,     0,  1488,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1489,     0,     0,     0,
       0,  1490,     0,     0,     0,     0,  1491,  1492,  1493,     0,
       0,     0,     0,  1494,  1495,     0,  1496,  1497,  1498,  1499,
       0,     0,  1500,     0,  1869,  1502,  1503,  1504,     0,  1505,
       0,  1506,  1507,     0,  1508,     0,  1509,  1510,     0,  1511,
    1512,  1513,  1514,     0,     0,     0,     0,     0,  1515,     0,
    1516,     0,  1517,  1518,     0,  1519,  1520,  1521,  1522,  1523,
    1524,     0,  1525,  1526,  1527,  1528,  1529,     0,     0,     0,
    1530,     0,  1531,     0,  1532,     0,     0,     0,     0,     0,
       0,     0,     0,  1533,     0,  1534,  1535,  1536,  1537,  1538,
    1539,  1540,     0,     0,  1541,  1542,     0,     0,     0,     0,
    1543,     0,  1544,  1545,  1546,     0,  1547,     0,  1548,     0,
    1549,  1550,  1551,  1552,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1553,  1554,  1555,
       0,     0,     0,     0,     0,     0,     0,  1556,     0,  1557,
    1558,  1559,     0,     0,     0,     0,  1560,     0,  1561,  1562,
    1563,     0,     0,  1564,     0,     0,     0,  1565,  1566,     0,
    1567,  1568,  1569,  1570,     0,     0,     0,  1571,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,   903,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1572,  1573,
    1574,  1575,  1576,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   885,  1453,  1454,
    1455,  1456,  1457,  1458,     0,  1459,     0,  1460,     0,     0,
       0,  1461,  1462,  1463,     0,  1464,     0,     0,     0,  1465,
    1466,  1467,  1468,  1469,     0,     0,  1577,  1578,  1579,  1580,
    1581,  1582,  1470,     0,     0,     0,     0,  1471,  1472,     0,
       0,  1473,     0,     0,     0,     0,  1474,  1475,  1476,  1477,
    1478,     0,     0,  1479,     0,  1480,  1481,  1482,     0,     0,
    1483,  1484,     0,  1485,  1486,  1487,     0,     0,     0,  1488,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1489,     0,     0,     0,     0,  1490,     0,
       0,     0,     0,  1491,  1492,  1493,     0,     0,     0,     0,
    1494,  1495,     0,  1496,  1497,  1498,  1499,     0,     0,  1500,
       0,  1944,  1502,  1503,  1504,     0,  1505,     0,  1506,  1507,
       0,  1508,     0,  1509,  1510,     0,  1511,  1512,  1513,  1514,
       0,     0,     0,     0,     0,  1515,     0,  1516,     0,  1517,
    1518,     0,  1519,  1520,  1521,  1522,  1523,  1524,     0,  1525,
    1526,  1527,  1528,  1529,     0,     0,     0,  1530,     0,  1531,
       0,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
    1533,     0,  1534,  1535,  1536,  1537,  1538,  1539,  1540,     0,
       0,  1541,  1542,     0,     0,     0,     0,  1543,     0,  1544,
    1545,  1546,     0,  1547,     0,  1548,     0,  1549,  1550,  1551,
    1552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1553,  1554,  1555,     0,     0,     0,
       0,     0,     0,     0,  1556,     0,  1557,  1558,  1559,     0,
       0,     0,     0,  1560,     0,  1561,  1562,  1563,     0,     0,
    1564,     0,     0,     0,  1565,  1566,     0,  1567,  1568,  1569,
    1570,     0,     0,     0,  1571,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
     908,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1572,  1573,  1574,  1575,  1576,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   886,  1453,  1454,  1455,  1456,  1457,
    1458,     0,  1459,     0,  1460,     0,     0,     0,  1461,  1462,
    1463,     0,  1464,     0,     0,     0,  1465,  1466,  1467,  1468,
    1469,     0,     0,  1577,  1578,  1579,  1580,  1581,  1582,  1470,
       0,     0,     0,     0,  1471,  1472,     0,     0,  1473,     0,
       0,     0,     0,  1474,  1475,  1476,  1477,  1478,     0,     0,
    1479,     0,  1480,  1481,  1482,     0,     0,  1483,  1484,     0,
    1485,  1486,  1487,     0,     0,     0,  1488,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1489,     0,     0,     0,     0,  1490,     0,     0,     0,     0,
    1491,  1492,  1493,     0,     0,     0,     0,  1494,  1495,     0,
    1496,  1497,  1498,  1499,     0,     0,  1500,     0,  1945,  1502,
    1503,  1504,     0,  1505,     0,  1506,  1507,     0,  1508,     0,
    1509,  1510,     0,  1511,  1512,  1513,  1514,     0,     0,     0,
       0,     0,  1515,     0,  1516,     0,  1517,  1518,     0,  1519,
    1520,  1521,  1522,  1523,  1524,     0,  1525,  1526,  1527,  1528,
    1529,     0,     0,     0,  1530,     0,  1531,     0,  1532,     0,
       0,     0,     0,     0,     0,     0,     0,  1533,     0,  1534,
    1535,  1536,  1537,  1538,  1539,  1540,     0,     0,  1541,  1542,
       0,     0,     0,     0,  1543,     0,  1544,  1545,  1546,     0,
    1547,     0,  1548,     0,  1549,  1550,  1551,  1552,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1553,  1554,  1555,     0,     0,     0,     0,     0,     0,
       0,  1556,     0,  1557,  1558,  1559,     0,     0,     0,     0,
    1560,     0,  1561,  1562,  1563,     0,     0,  1564,     0,     0,
       0,  1565,  1566,     0,  1567,  1568,  1569,  1570,     0,     0,
       0,  1571,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,   909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1572,  1573,  1574,  1575,  1576,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,   887,  1453,  1454,  1455,  1456,  1457,  1458,     0,  1459,
       0,  1460,     0,     0,     0,  1461,  1462,  1463,     0,  1464,
       0,     0,     0,  1465,  1466,  1467,  1468,  1469,     0,     0,
    1577,  1578,  1579,  1580,  1581,  1582,  1470,     0,     0,     0,
       0,  1471,  1472,     0,     0,  1473,     0,     0,     0,     0,
    1474,  1475,  1476,  1477,  1478,     0,     0,  1479,     0,  1480,
    1481,  1482,     0,     0,  1483,  1484,     0,  1485,  1486,  1487,
       0,     0,     0,  1488,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1489,     0,     0,
       0,     0,  1490,     0,     0,     0,     0,  1491,  1492,  1493,
       0,     0,     0,     0,  1494,  1495,     0,  1496,  1497,  1498,
    1499,     0,     0,  1500,     0,  2007,  1502,  1503,  1504,     0,
    1505,     0,  1506,  1507,     0,  1508,     0,  1509,  1510,     0,
    1511,  1512,  1513,  1514,     0,     0,     0,     0,     0,  1515,
       0,  1516,     0,  1517,  1518,     0,  1519,  1520,  1521,  1522,
    1523,  1524,     0,  1525,  1526,  1527,  1528,  1529,     0,     0,
       0,  1530,     0,  1531,     0,  1532,     0,     0,     0,     0,
       0,     0,     0,     0,  1533,     0,  1534,  1535,  1536,  1537,
    1538,  1539,  1540,     0,     0,  1541,  1542,     0,     0,     0,
       0,  1543,     0,  1544,  1545,  1546,     0,  1547,     0,  1548,
       0,  1549,  1550,  1551,  1552,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1553,  1554,
    1555,     0,     0,     0,     0,     0,     0,     0,  1556,     0,
    1557,  1558,  1559,     0,     0,     0,     0,  1560,     0,  1561,
    1562,  1563,     0,     0,  1564,     0,     0,     0,  1565,  1566,
       0,  1567,  1568,  1569,  1570,     0,     0,     0,  1571,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,   910,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1572,
    1573,  1574,  1575,  1576,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   892,  1453,
    1454,  1455,  1456,  1457,  1458,     0,  1459,     0,  1460,     0,
       0,     0,  1461,  1462,  1463,     0,  1464,     0,     0,     0,
    1465,  1466,  1467,  1468,  1469,     0,     0,  1577,  1578,  1579,
    1580,  1581,  1582,  1470,     0,     0,     0,     0,  1471,  1472,
       0,     0,  1473,     0,     0,     0,     0,  1474,  1475,  1476,
    1477,  1478,     0,     0,  1479,     0,  1480,  1481,  1482,     0,
       0,  1483,  1484,     0,  1485,  1486,  1487,     0,     0,     0,
    1488,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1489,     0,     0,     0,     0,  1490,
       0,     0,     0,     0,  1491,  1492,  1493,     0,     0,     0,
       0,  1494,  1495,     0,  1496,  1497,  1498,  1499,     0,     0,
    1500,     0,  2008,  1502,  1503,  1504,     0,  1505,     0,  1506,
    1507,     0,  1508,     0,  1509,  1510,     0,  1511,  1512,  1513,
    1514,     0,     0,     0,     0,     0,  1515,     0,  1516,     0,
    1517,  1518,     0,  1519,  1520,  1521,  1522,  1523,  1524,     0,
    1525,  1526,  1527,  1528,  1529,     0,     0,     0,  1530,     0,
    1531,     0,  1532,     0,     0,     0,     0,     0,     0,     0,
       0,  1533,     0,  1534,  1535,  1536,  1537,  1538,  1539,  1540,
       0,     0,  1541,  1542,     0,     0,     0,     0,  1543,     0,
    1544,  1545,  1546,     0,  1547,     0,  1548,     0,  1549,  1550,
    1551,  1552,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1553,  1554,  1555,     0,     0,
       0,     0,     0,     0,     0,  1556,     0,  1557,  1558,  1559,
       0,     0,     0,     0,  1560,     0,  1561,  1562,  1563,     0,
       0,  1564,     0,     0,     0,  1565,  1566,     0,  1567,  1568,
    1569,  1570,     0,     0,     0,  1571,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,   911,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1572,  1573,  1574,  1575,
    1576,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,   896,  1453,  1454,  1455,  1456,
    1457,  1458,     0,  1459,     0,  1460,     0,     0,     0,  1461,
    1462,  1463,     0,  1464,     0,     0,     0,  1465,  1466,  1467,
    1468,  1469,     0,     0,  1577,  1578,  1579,  1580,  1581,  1582,
    1470,     0,     0,     0,     0,  1471,  1472,     0,     0,  1473,
       0,     0,     0,     0,  1474,  1475,  1476,  1477,  1478,     0,
       0,  1479,     0,  1480,  1481,  1482,     0,     0,  1483,  1484,
       0,  1485,  1486,  1487,     0,     0,     0,  1488,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1489,     0,     0,     0,     0,  1490,     0,     0,     0,
       0,  1491,  1492,  1493,     0,     0,     0,     0,  1494,  1495,
       0,  1496,  1497,  1498,  1499,     0,     0,  1500,     0,  2040,
    1502,  1503,  1504,     0,  1505,     0,  1506,  1507,     0,  1508,
       0,  1509,  1510,     0,  1511,  1512,  1513,  1514,     0,     0,
       0,     0,     0,  1515,     0,  1516,     0,  1517,  1518,     0,
    1519,  1520,  1521,  1522,  1523,  1524,     0,  1525,  1526,  1527,
    1528,  1529,     0,     0,     0,  1530,     0,  1531,     0,  1532,
       0,     0,     0,     0,     0,     0,     0,     0,  1533,     0,
    1534,  1535,  1536,  1537,  1538,  1539,  1540,     0,     0,  1541,
    1542,     0,     0,     0,     0,  1543,     0,  1544,  1545,  1546,
       0,  1547,     0,  1548,     0,  1549,  1550,  1551,  1552,     0,
       0,     0,     0,     0,     0,   147,   148,   149,   150,   151,
     152,     0,  1553,  1554,  1555,     0,     0,     0,     0,   153,
     154,     0,  1556,     0,  1557,  1558,  1559,   155,   156,     0,
       0,  1560,     0,  1561,  1562,  1563,     0,     0,  1564,   157,
       0,     0,  1565,  1566,     0,  1567,  1568,  1569,  1570,     0,
       0,     0,  1571,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,   923,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1572,  1573,  1574,  1575,  1576,     0,     0,
     163,     0,     0,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   924,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1577,  1578,  1579,  1580,  1581,  1582,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,   449,   450,   451,   452,   453,   454,   455,
     167,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,     0,     0,   169,   170,     0,     0,     0,
     171,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
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
     153,   154,     0,     0,     0,     0,     0,     0,   155,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
     619,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   449,   450,   451,
     452,   453,   454,   455,   162,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   925,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   620,     0,     0,     0,
       0,   166,     0,     0,     0,   927,     0,     0,     0,     0,
       0,   167,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   938,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,   621,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,   210,     0,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,     0,   258,   259,   260,   261,   147,   148,   149,
     150,   151,   152,   262,     0,     0,     0,     0,     0,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,   155,
       0,   947,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   726,     0,   727,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   158,     0,
       0,     0,     0,   159,     0,     0,   160,   161,     0,   948,
       0,     0,     0,     0,     0,   162,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   452,
     453,   454,   455,   949,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,   950,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,  -648,  -648,  -648,  -648,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,   951,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,   449,
     450,   451,   452,   453,   454,   455,   728,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   952,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
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
     149,   150,   151,   152,   729,     0,     0,     0,     0,     0,
       0,     0,   153,   154,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     450,   451,   452,   453,   454,   455,   953,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,   159,     0,     0,   160,   161,     0,
       0,     0,     0,     0,     0,     0,   162,     0,   954,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,   960,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,  1322,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,  1323,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  1334,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   354,     0,
       0,     0,     0,     0,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,     0,   210,     0,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,     0,     0,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,     0,   258,   259,   260,   261,   147,
     148,   149,   150,   151,   152,   262,     0,     0,     0,     0,
       0,     0,     0,   153,   154,     0,     0,     0,     0,     0,
       0,   155,   660,     0,   449,   450,   451,   452,   453,   454,
     455,  1344,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,     0,     0,     0,     0,   159,     0,     0,   160,   161,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,  1360,     0,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,   449,
     450,   451,   452,   453,   454,   455,  1361,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,  1362,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,     0,     0,     0,     0,     0,
    1365,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,  1366,  1310,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,   172,   173,   174,   175,   176,
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
       0,     0,   155,     0,     0,     0,  1819,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,   159,     0,     0,   160,
     161,     0,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,     0,  1311,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
     897,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   877,   449,   450,   451,   452,
     453,   454,   455,   898,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
       0,     0,   902,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   904,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   449,   450,   451,   452,   453,   454,   455,
     905,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,   210,     0,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,     0,     0,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,     0,   258,   259,   260,
     261,   147,   148,   149,   150,   151,   152,   262,     0,     0,
       0,     0,     0,     0,     0,   153,   154,     0,     0,     0,
       0,     0,     0,   155,     0,     0,     0,     0,   906,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,   159,     0,     0,
     160,   161,     0,     0,     0,     0,     0,     0,     0,   162,
       0,     0,     0,     0,     0,     0,   915,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,  1296,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,   916,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   449,   450,   451,
     452,   453,   454,   455,   917,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   918,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
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
     919,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,   159,     0,
       0,   160,   161,   449,   450,   451,   452,   453,   454,   455,
     162,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   920,     0,     0,
       0,     0,     0,     0,  1301,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,   921,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,   922,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,   926,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,   939,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,   449,
     450,   451,   452,   453,   454,   455,   940,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,     0,   210,     0,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     259,   260,   261,   147,   148,   149,   150,   151,   152,   262,
       0,     0,     0,     0,     0,     0,     0,   153,   154,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,     0,
       0,     0,   941,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,     0,   159,
       0,     0,   160,   161,   942,     0,     0,     0,     0,     0,
       0,   162,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  1776,     0,     0,   449,   450,
     451,   452,   453,   454,   455,   943,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   449,   450,   451,   452,   453,   454,   455,   944,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   167,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,   945,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     946,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
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
       0,     0,     0,     0,     0,     0,   155,   449,   450,   451,
     452,   453,   454,   455,   957,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,     0,     0,     0,     0,     0,
       0,     0,   162,   958,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,  1778,     0,     0,   959,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,   450,   451,   452,   453,
     454,   455,  1314,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,  1319,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,  1320,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,   449,   450,   451,   452,   453,
     454,   455,  1321,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,   210,
       0,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,   259,   260,   261,   147,   148,   149,   150,   151,
     152,   262,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,   155,  1324,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,   449,   450,   451,   452,
     453,   454,   455,   162,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,  1325,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,  1326,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,   449,
     450,   451,   452,   453,   454,   455,  1327,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
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
       0,     0,     0,   449,   450,   451,   452,   453,   454,   455,
    1328,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,  1329,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
    1332,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,  1333,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,   450,
     451,   452,   453,   454,   455,  1345,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,   449,   450,   451,   452,   453,   454,   455,
    1346,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,  1359,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1363,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,  1364,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   449,   450,   451,   452,   453,   454,
     455,  1437,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,  1635,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,   449,   450,   451,   452,   453,
     454,   455,  1698,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,  1755,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   449,   450,   451,   452,   453,   454,   455,  1784,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1785,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,  1786,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
    1787,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,  1788,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,  1797,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,  1814,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,  1815,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,  1816,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,  1817,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   449,   450,
     451,   452,   453,   454,   455,  1818,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,  1820,     0,
       0,     0,     0,     0,     0,     0,     0,  1636,  1637,     0,
       0,     0,  1638,     0,  1639,     0,     0,     0,     0,   449,
     450,   451,   452,   453,   454,   455,  1821,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,  1197,     0,     0,     0,     0,  1640,  1641,  1842,
    1642,     0,     0,     0,     1,     0,     0,     0,     2,     0,
       0,     0,     0,     0,  1199,     0,     0,  1200,     0,  1201,
       0,     0,  1202,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,  1848,     0,     4,     0,  1203,     0,     0,
       0,     0,     0,     0,  1204,  1205,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1852,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,  1206,
       0,  1857,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1958,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1643,  1644,     8,
       0,     0,     0,   524,   525,     0,   526,  1981,   527,   528,
    1208,     0,     0,     0,     0,     0,     0,   354,     0,     0,
       0,   867,     0,     0,   529,     0,     0,     0,     0,     0,
    1994,     0,  1209,     0,     0,     0,     0,     0,     0,     0,
    1210,     9,     0,    10,     0,     0,     0,     0,     0,     0,
       0,    11,     0,  2004,     0,     0,   530,   531,   532,   533,
       0,     0,     0,     0,     0,   534,     0,     0,     0,     0,
      12,    13,  1102,     0,   535,     0,  2005,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,    15,     0,
       0,     0,     0,     0,   536,  1211,    16,     0,     0,     0,
       0,     0,   537,     0,     0,     0,     0,     0,     0,     0,
     538,     0,     0,     0,     0,     0,     0,   539,     0,     0,
     540,     0,     0,   541,   542,     0,     0,     0,     0,     0,
       0,     0,     0,   449,   450,   451,   452,   453,   454,   455,
     543,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   544,
     545,     0,     0,   546,   547,     0,     0,     0,     0,   548,
       0,   549,     0,     0,     0,     0,   550,   551,     0,     0,
       0,     0,   552,   553,     0,     0,     0,     0,     0,   554,
       0,   555,     0,     0,     0,     0,   556,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,  1108,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,  1614,   448,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,  1101,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1307,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,  1615,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,   907,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,   449,   450,   451,   452,   453,
     454,   455,   969,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
     449,   450,   451,   452,   453,   454,   455,  1164,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470
};

static const yytype_int16 yycheck[] =
{
      81,  1273,  1031,  1290,   984,  1182,  1058,   995,   996,   269,
     317,   999,   590,   270,  1275,   488,     3,  1046,     3,   805,
     806,     5,    41,  1393,  1053,   811,    20,   813,    20,  1599,
    1605,   862,   128,   864,  1079,   146,   128,   184,     3,     4,
       5,     6,     7,     8,     3,     3,     3,  1194,  1195,     3,
     184,     6,   245,    43,     6,   151,    70,     8,    70,   270,
     146,   142,   143,    18,     4,    82,  1213,     3,   220,   865,
      79,    47,   153,   154,   155,     4,   333,     3,   159,   220,
      16,   232,     3,    89,     3,   104,     3,     3,    18,    43,
     201,   210,     3,     4,     5,     6,     7,     8,   204,   252,
      18,    90,  1658,  1659,   105,     4,     5,     6,     7,     3,
     128,     3,   126,  1669,  1670,   201,   232,   182,   220,   238,
     131,    99,    43,  1395,   162,     5,   232,   504,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   239,   141,    92,  1348,  1349,   146,   125,    26,    76,
       3,    87,   200,  1357,  1358,    64,   744,   963,   232,   362,
     258,    89,   186,   112,   186,    55,   187,   178,   146,   757,
     245,   262,   559,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   142,   225,  1196,   362,
     362,   201,   128,   178,  1243,   362,   473,   193,   329,   360,
     229,   238,  1255,   178,  1276,  1254,   178,   241,   362,   241,
     146,   221,  1261,  1789,  1790,  1791,  1792,  1793,  1794,   169,
     169,  1286,   248,   349,   180,   161,   128,  1803,   359,   360,
     168,  1807,   232,     3,   148,  1811,   207,  1404,   360,    18,
     238,  1631,   221,  1094,   182,  1096,   362,   178,    40,   350,
     362,   255,   188,   354,   360,   853,   216,   217,   246,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     763,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,  1881,   388,   389,   390,
    1880,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,  1600,  1601,
      89,     3,   589,   414,   415,   148,     3,     3,   419,   420,
     359,     3,   297,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   359,  1162,   359,   449,   450,
     451,   452,   453,   360,     3,   360,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     601,   768,   769,   604,   475,  1428,   361,  1684,   148,   776,
      99,   360,   360,   360,  1384,   359,   617,  1440,     3,   168,
     182,    77,   311,   312,   313,    77,    66,    99,  1447,   255,
    1449,   116,   117,   182,   354,   355,   356,   357,   245,   245,
    1986,   252,   189,   245,  1990,   245,   208,    36,  1224,    54,
    1226,  1227,  1475,    58,   821,   822,   823,     3,     3,   105,
     149,   358,    51,  1486,  1648,  1649,  1650,  1651,  1652,  1653,
      18,   360,   305,   306,   307,   308,  1660,     3,    46,    47,
    1664,   245,    95,  1506,  1668,   221,   148,     3,     3,     5,
     362,   148,   148,  1770,   791,   792,   148,  1520,    66,   749,
     247,   106,    41,  1754,   109,   221,  1529,  2053,  2054,     3,
    2056,  2057,    66,   245,   250,    70,   587,   116,   117,   124,
    1687,   245,    70,     0,   987,   138,    11,   990,   252,   148,
      15,    76,   178,   146,   250,     5,   362,   177,   151,   144,
     907,   908,   613,   614,   361,   362,  1569,   152,   161,   238,
      20,   362,   623,   360,   360,   195,   228,   105,   360,   105,
     360,     3,    10,   148,     3,   104,  1585,   329,   253,   359,
     360,   126,  1591,    10,    11,    12,    13,    14,    15,    16,
     220,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   360,    10,    11,    12,
      13,    14,    15,    16,  1172,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,    63,   148,   177,   229,     9,   231,   195,   360,   129,
     997,   186,  1610,   148,    76,   359,    20,     3,   362,    87,
      87,   195,     3,    63,   249,   360,    94,   148,    43,  1926,
     721,   722,    95,   724,   253,    35,    76,    52,   729,    10,
      11,    12,    13,    14,    15,    16,   220,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   130,   131,   131,   185,   241,    67,   201,   147,
      30,    31,    32,    43,    68,   138,  1719,    63,   156,   147,
     147,  1724,    52,   146,    43,    57,  1983,     3,  1750,    61,
      76,   147,    92,    52,  1733,   215,     3,    79,   161,     3,
     100,     3,    43,   226,    18,  1744,   147,  1746,   975,    91,
    1914,    52,   112,   232,  1918,     3,  1998,   361,   362,   187,
     187,  2082,    36,    79,   361,   362,    40,   818,     3,    43,
    2044,    45,   361,   362,    48,    91,   204,   204,   110,   207,
     207,     3,  1929,   964,   362,   127,  2107,  2108,     3,    63,
       3,   145,   973,   135,  2051,   359,    70,    71,   226,   227,
     259,   155,    31,    32,     3,   232,  2080,  2081,   162,   361,
     362,   127,   172,   241,   540,  2136,   867,     3,   869,   135,
     546,   175,   548,   874,   875,    43,   877,   182,   361,   362,
     881,   105,  2106,   193,    74,    75,   178,   888,   889,   890,
     891,   259,   893,   894,   895,   360,   200,   360,   122,   900,
     901,  1854,   903,   361,   362,     3,    63,     3,   909,   910,
     911,   360,   178,    70,   218,  2029,  2030,  1870,  2032,  2033,
     361,   362,   923,   924,   925,  1874,   927,  1827,    13,    14,
     222,    16,   156,     3,    19,   361,   362,   938,   248,  1070,
     361,   362,   361,   362,   361,   362,   947,   948,   949,   950,
     951,   952,   953,   954,   178,   956,   222,   361,   362,   960,
     361,   362,   186,   255,   361,   362,   361,   362,   969,   126,
     359,   349,   349,   130,   798,   799,   259,   801,   802,   803,
     981,  1278,   259,   807,   808,   809,   259,   988,   812,  1942,
     147,   361,   362,     3,   361,   362,     4,     5,   259,   156,
       4,     5,   361,   362,   259,   527,   528,   529,   530,   259,
     532,    49,    50,   535,   536,   537,   259,   241,   361,   362,
     542,   543,   544,   361,   362,   547,   361,   362,  1029,   186,
     361,   362,  1163,   361,   362,  1166,  1167,  1168,   361,   362,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   361,   362,     3,   361,   362,   360,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     361,   362,     8,  1084,   241,     9,  1087,   361,   362,   361,
     362,   359,  1093,    26,    27,    28,    29,    30,    31,    32,
     360,  1102,   361,   362,   361,   362,   360,  1108,  1109,    10,
      11,    12,    13,    14,    15,    16,   360,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   360,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   360,    10,    11,    12,    13,
      14,    15,    16,  1164,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   361,
     362,   361,   362,   360,  1185,   361,   362,   361,   362,  1190,
     361,   362,   361,   362,   361,   362,    10,    11,    12,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   360,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   361,   362,    10,    11,    12,    13,    14,    15,
      16,   360,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  1268,   361,   362,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   361,   362,  1310,
     361,   362,  1313,   361,   362,   361,   362,   361,   362,   361,
     362,  1322,  1323,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  1334,   361,   362,   361,   362,   361,   362,
     361,   362,  1343,  1344,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    49,    50,  1360,
    1361,  1362,   361,   362,  1365,  1366,   360,  1368,   360,  1370,
     360,  1372,   361,   362,   360,   166,   361,   362,   359,   360,
     360,  1382,  1383,   361,   362,   359,   360,   360,   360,  1390,
    1391,   361,   362,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   361,   362,  1408,    43,   361,
     362,  1412,   361,   362,   360,     3,     4,     5,     6,     7,
       8,  1422,    10,   360,    12,   361,   362,    45,    16,    17,
      18,   360,    20,   361,   362,  1436,    24,    25,    26,    27,
      28,   759,   760,   979,   980,  1388,  1389,   360,   360,    37,
     360,   360,   360,   360,    42,    43,   360,   360,    46,    45,
     361,   362,   360,    51,    52,    53,    54,    55,   360,   360,
      58,   360,    60,    61,    62,   360,   360,    65,    66,   360,
      68,    69,    70,   361,   362,   360,    74,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   360,   360,   360,   360,
      88,   360,   360,   360,   360,    93,    63,   361,   362,   360,
      98,    99,   100,   360,   360,   360,   360,   105,   106,   360,
     108,   109,   110,   111,   360,   360,   114,   360,   116,   117,
     118,   119,   360,   121,   360,   123,   124,   360,   126,   360,
     128,   129,   360,   131,   132,   133,   134,   361,   362,   360,
     360,   360,   140,   360,   142,   360,   144,   145,   360,   147,
     148,   149,   150,   151,   152,   360,   154,   155,   156,   157,
     158,   362,   360,   360,   162,   360,   164,   360,   166,   360,
     360,   360,   360,   360,   360,   360,   360,   175,   360,   177,
     178,   179,   180,   181,   182,   183,   362,   360,   186,   187,
     360,   360,   360,   360,   192,   360,   194,   195,   196,   360,
     198,   360,   200,   360,   202,   203,   204,   205,   360,  1620,
    1621,   361,   362,   360,   360,  1626,    63,  1628,    63,   255,
     225,   219,   220,   221,     3,     3,     3,   182,     3,   182,
     259,   229,     3,   231,   232,   233,   182,   259,     3,     3,
     238,    26,   240,   241,   242,     3,     3,   245,     3,     3,
       3,   249,   250,     3,   252,   253,   254,   255,     3,     5,
       3,   259,     3,     3,     3,     3,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   300,   301,   302,   303,   304,    10,    11,    12,
      13,    14,    15,    16,   360,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,     3,     3,    10,    11,    12,    13,    14,    15,    16,
    1751,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,   361,     3,   155,
     358,   359,   360,   361,   362,   363,   181,     3,     3,  1780,
       3,   225,     3,     3,     3,     3,     3,     3,    10,    11,
      12,    13,    14,    15,    16,  1796,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     3,     3,     3,     3,   357,     3,     5,  1819,     5,
       5,   360,   360,  1824,    56,     3,     4,     5,     6,     7,
       8,  1832,    10,   360,    12,   360,   360,   360,    16,    17,
      18,   360,    20,     3,  1845,  1846,    24,    25,    26,    27,
      28,     3,     3,     3,   361,     3,   362,     3,   182,    37,
     361,   182,     3,   182,    42,    43,   259,     3,    46,   183,
       3,     3,   361,    51,    52,    53,    54,    55,   361,   221,
      58,   361,    60,    61,    62,   328,   328,    65,    66,   328,
      68,    69,    70,   361,   328,   328,    74,   360,   221,   360,
     360,   360,   156,   156,   128,   362,   156,   155,   182,   155,
      88,     3,     3,   225,   225,    93,     5,     5,     5,     4,
      98,    99,   100,     5,     5,   198,   178,   105,   106,   360,
     108,   109,   110,   111,   360,   182,   114,   247,   116,   117,
     118,   119,     3,   121,     3,   123,   124,     3,   126,     3,
     128,   129,   182,   131,   132,   133,   134,    86,     3,     3,
      55,   164,   140,    20,   142,   360,   144,   145,  1969,   147,
     148,   149,   150,   151,   152,   184,   154,   155,   156,   157,
     158,    83,   361,   153,   162,     4,   164,   328,   166,   328,
     328,   328,     5,     5,   360,   133,   328,   175,   360,   177,
     178,   179,   180,   181,   182,   183,   328,   360,   186,   187,
     328,   328,   328,   221,   192,     3,   194,   195,   196,   132,
     198,     3,   200,     3,   202,   203,   204,   205,   362,   156,
     156,     3,     3,   360,   360,   360,    70,   247,     3,   132,
     360,   219,   220,   221,    52,   247,   361,  2048,   361,     3,
       3,   229,   361,   231,   232,   233,   361,   360,   360,   360,
     238,   360,   240,   241,   242,   360,   182,   245,     3,   362,
     360,   249,   250,   156,   252,   253,   254,   255,   360,   360,
     156,   259,   360,     3,   360,     4,     4,     4,    10,    11,
      12,    13,    14,    15,    16,   362,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     6,     3,   362,   156,     3,   360,   197,   361,   361,
     361,   361,   300,   301,   302,   303,   304,   361,   361,   360,
      55,   360,   360,   360,   140,   155,    20,     3,   178,     3,
     362,    44,     3,   198,     4,   360,   360,   360,   360,   360,
       5,   156,     3,     4,     5,     6,     7,     8,   156,    10,
     361,    12,   361,   360,   360,    16,    17,    18,   220,    20,
       4,     4,     3,    24,    25,    26,    27,    28,   360,   360,
     358,   359,   360,   361,   362,   363,    37,   360,   360,   360,
       3,    42,    43,   360,   360,    46,   360,   360,     3,     3,
      51,    52,    53,    54,    55,     3,   360,    58,   247,    60,
      61,    62,   110,   360,    65,    66,   360,    68,    69,    70,
     247,     3,   132,    74,     3,   360,   360,   238,    20,   360,
     360,   182,     4,   329,   362,     3,   361,    88,   328,   361,
     361,   361,    93,   361,   328,     3,     3,    98,    99,   100,
       3,     5,    43,     5,   105,   106,   360,   108,   109,   110,
     111,   360,   360,   114,    52,   116,   117,   118,   119,     4,
     121,    52,   123,   124,   202,   126,   362,   128,   129,   247,
     131,   132,   133,   134,   361,   156,   361,   361,   361,   140,
     360,   142,   360,   144,   145,   360,   147,   148,   149,   150,
     151,   152,   250,   154,   155,   156,   157,   158,   156,   360,
     360,   162,     3,   164,   362,   166,    80,   360,    55,    20,
     361,   183,   360,   360,   175,   361,   177,   178,   179,   180,
     181,   182,   183,   361,    18,   186,   187,   361,   361,     3,
     156,   192,   360,   194,   195,   196,   360,   198,     3,   200,
      52,   202,   203,   204,   205,   128,     3,   361,   361,   361,
     360,   360,     3,   360,     3,    55,    55,     3,   219,   220,
     221,   360,     3,    55,   361,   361,   361,   361,   229,   328,
     231,   232,   233,   328,   328,   328,   361,   238,   199,   240,
     241,   242,   132,     3,   245,   248,   192,     3,   249,   250,
       3,   252,   253,   254,   255,     5,     5,    52,   259,    10,
      11,    12,    13,    14,    15,    16,    69,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   361,   148,   158,   123,   254,   360,     5,   189,
     362,   192,    20,     3,    93,     3,   362,   361,   361,   300,
     301,   302,   303,   304,    10,    11,    12,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   362,   361,     3,
       4,     5,     6,     7,     8,   361,    10,   361,    12,   361,
     360,   360,    16,    17,    18,   360,    20,   151,   361,     3,
      24,    25,    26,    27,    28,   361,   360,   358,   359,   360,
     361,   362,   363,    37,   361,   361,     5,     3,    42,    43,
       3,     3,    46,   360,   360,   360,     3,    51,    52,    53,
      54,    55,     3,   362,    58,   211,    60,    61,    62,   211,
     360,    65,    66,     3,    68,    69,    70,   361,   192,     3,
      74,     3,    20,     3,     3,   361,   165,   165,   361,     3,
     362,     3,   225,     3,    88,     3,   361,   361,   361,    93,
     220,   360,   209,   360,    98,    99,   100,   360,     5,     3,
     208,   105,   106,   361,   108,   109,   110,   111,     5,   360,
     114,   361,   116,   117,   118,   119,   361,   121,   361,   123,
     124,   361,   126,     3,   128,   129,   143,   131,   132,   133,
     134,    89,   250,   159,   230,   176,   140,   182,   142,   182,
     144,   145,   176,   147,   148,   149,   150,   151,   152,     5,
     154,   155,   156,   157,   158,     5,   355,    88,   162,  1385,
     164,   880,   166,  1688,  1619,   475,   113,  2070,   843,  1189,
     482,   175,   591,   177,   178,   179,   180,   181,   182,   183,
      76,   344,   186,   187,  1780,   863,   603,  1288,   192,   977,
     194,   195,   196,  1750,   198,  2112,   200,  1277,   202,   203,
     204,   205,  1265,   146,    -1,   825,   810,  1426,    -1,    -1,
     325,    -1,    -1,   521,    -1,   219,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,   240,   241,   242,    -1,
      -1,   245,    -1,    -1,    -1,   249,   250,    -1,   252,   253,
     254,   255,    -1,    -1,    -1,   259,    10,    11,    12,    13,
      14,    15,    16,   299,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   300,   301,   302,   303,
     304,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   361,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   358,   359,   360,   361,   362,   363,
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
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,   178,   179,   180,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,    -1,    -1,   192,    -1,   194,   195,   196,
      -1,   198,    -1,   200,    -1,   202,   203,   204,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   229,    -1,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   241,   242,    -1,    -1,   245,    -1,
      -1,    -1,   249,   250,    -1,   252,   253,   254,   255,    -1,
      -1,    -1,   259,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   362,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   300,   301,   302,   303,   304,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   361,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   358,   359,   360,   361,   362,   363,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,   118,   119,
      -1,   121,    -1,   123,   124,    -1,   126,    -1,   128,   129,
      -1,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
     140,    -1,   142,    -1,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,   179,
     180,   181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,
      -1,    -1,   192,    -1,   194,   195,   196,    -1,   198,    -1,
     200,    -1,   202,   203,   204,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,
      -1,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
     240,   241,   242,    -1,    -1,   245,    -1,    -1,    -1,   249,
     250,    -1,   252,   253,   254,   255,    -1,    -1,    -1,   259,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     300,   301,   302,   303,   304,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   361,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   358,   359,
     360,   361,   362,   363,    37,    -1,    -1,    -1,    -1,    42,
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
      -1,   154,   155,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,   178,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,   192,
      -1,   194,   195,   196,    -1,   198,    -1,   200,    -1,   202,
     203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,   240,   241,   242,
      -1,    -1,   245,    -1,    -1,    -1,   249,   250,    -1,   252,
     253,   254,   255,    -1,    -1,    -1,   259,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,   301,   302,
     303,   304,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   361,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   358,   359,   360,   361,   362,
     363,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,   105,
     106,    -1,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,   118,   119,    -1,   121,    -1,   123,   124,    -1,
     126,    -1,   128,   129,    -1,   131,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,   140,    -1,   142,    -1,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,    -1,   154,   155,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,   192,    -1,   194,   195,
     196,    -1,   198,    -1,   200,    -1,   202,   203,   204,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   229,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,   240,   241,   242,    -1,    -1,   245,
      -1,    -1,    -1,   249,   250,    -1,   252,   253,   254,   255,
      -1,    -1,    -1,   259,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   362,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   300,   301,   302,   303,   304,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   361,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   358,   359,   360,   361,   362,   363,    37,    -1,
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
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,
     179,   180,   181,   182,   183,    -1,    -1,   186,   187,    -1,
      -1,    -1,    -1,   192,    -1,   194,   195,   196,    -1,   198,
      -1,   200,    -1,   202,   203,   204,   205,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     229,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,   240,   241,   242,    -1,    -1,   245,    -1,    -1,    -1,
     249,   250,    -1,   252,   253,   254,   255,    -1,    -1,    -1,
     259,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   300,   301,   302,   303,   304,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     361,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   358,
     359,   360,   361,   362,   363,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,   105,   106,    -1,   108,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,   118,   119,    -1,   121,
      -1,   123,   124,    -1,   126,    -1,   128,   129,    -1,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,    -1,
     142,    -1,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,   178,   179,   180,   181,
     182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
     192,    -1,   194,   195,   196,    -1,   198,    -1,   200,    -1,
     202,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   241,
     242,    -1,    -1,   245,    -1,    -1,    -1,   249,   250,    -1,
     252,   253,   254,   255,    -1,    -1,    -1,   259,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,   301,
     302,   303,   304,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   361,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   358,   359,   360,   361,
     362,   363,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
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
     155,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,   178,   179,   180,   181,   182,   183,    -1,
      -1,   186,   187,    -1,    -1,    -1,    -1,   192,    -1,   194,
     195,   196,    -1,   198,    -1,   200,    -1,   202,   203,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   229,    -1,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,   240,   241,   242,    -1,    -1,
     245,    -1,    -1,    -1,   249,   250,    -1,   252,   253,   254,
     255,    -1,    -1,    -1,   259,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   300,   301,   302,   303,   304,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   361,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   358,   359,   360,   361,   362,   363,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,   105,   106,    -1,
     108,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
     118,   119,    -1,   121,    -1,   123,   124,    -1,   126,    -1,
     128,   129,    -1,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   142,    -1,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
     178,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,   192,    -1,   194,   195,   196,    -1,
     198,    -1,   200,    -1,   202,   203,   204,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   229,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,   240,   241,   242,    -1,    -1,   245,    -1,    -1,
      -1,   249,   250,    -1,   252,   253,   254,   255,    -1,    -1,
      -1,   259,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,   362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   300,   301,   302,   303,   304,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   361,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     358,   359,   360,   361,   362,   363,    37,    -1,    -1,    -1,
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
      -1,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,   178,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
      -1,   192,    -1,   194,   195,   196,    -1,   198,    -1,   200,
      -1,   202,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,
     241,   242,    -1,    -1,   245,    -1,    -1,    -1,   249,   250,
      -1,   252,   253,   254,   255,    -1,    -1,    -1,   259,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,
     301,   302,   303,   304,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   361,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   358,   359,   360,
     361,   362,   363,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,   105,   106,    -1,   108,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,   118,   119,    -1,   121,    -1,   123,
     124,    -1,   126,    -1,   128,   129,    -1,   131,   132,   133,
     134,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,   178,   179,   180,   181,   182,   183,
      -1,    -1,   186,   187,    -1,    -1,    -1,    -1,   192,    -1,
     194,   195,   196,    -1,   198,    -1,   200,    -1,   202,   203,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,   240,   241,   242,    -1,
      -1,   245,    -1,    -1,    -1,   249,   250,    -1,   252,   253,
     254,   255,    -1,    -1,    -1,   259,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   300,   301,   302,   303,
     304,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   361,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   358,   359,   360,   361,   362,   363,
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
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,   178,   179,   180,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,    -1,    -1,   192,    -1,   194,   195,   196,
      -1,   198,    -1,   200,    -1,   202,   203,   204,   205,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,   219,   220,   221,    -1,    -1,    -1,    -1,    17,
      18,    -1,   229,    -1,   231,   232,   233,    25,    26,    -1,
      -1,   238,    -1,   240,   241,   242,    -1,    -1,   245,    37,
      -1,    -1,   249,   250,    -1,   252,   253,   254,   255,    -1,
      -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,   362,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   300,   301,   302,   303,   304,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   358,   359,   360,   361,   362,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     178,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,   213,   214,    -1,    -1,    -1,
     218,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,    -1,
     298,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
      -1,    -1,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,    -1,   350,   351,   352,   353,     3,     4,     5,     6,
       7,     8,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,    12,
      13,    14,    15,    16,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   362,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,   178,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      -1,   298,    -1,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    -1,    -1,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,    -1,   350,   351,   352,   353,     3,     4,     5,
       6,     7,     8,   360,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,   362,
      -1,    -1,    -1,    -1,    -1,    81,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    13,
      14,    15,    16,   362,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   362,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,   362,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    10,
      11,    12,    13,    14,    15,    16,   212,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   362,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,    -1,   298,    -1,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    -1,    -1,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,    -1,   350,   351,   352,   353,     3,     4,
       5,     6,     7,     8,   360,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   362,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,   362,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   362,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,   362,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   362,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   362,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   253,    -1,
      -1,    -1,    -1,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    -1,   298,    -1,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    -1,    -1,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,    -1,   350,   351,   352,   353,     3,
       4,     5,     6,     7,     8,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    10,    11,    12,    13,    14,    15,
      16,   362,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,   362,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   362,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   362,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,
     362,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   362,   132,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,    -1,   298,    -1,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,    -1,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,    -1,   350,   351,   352,   353,
       3,     4,     5,     6,     7,     8,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,   362,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,   361,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,
      -1,    -1,   361,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   361,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     361,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,    -1,   298,    -1,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,    -1,    -1,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,    -1,   350,   351,   352,
     353,     3,     4,     5,     6,     7,     8,   360,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,   361,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   105,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   178,    10,    11,    12,
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   361,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    -1,   298,    -1,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,    -1,    -1,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,    -1,   350,   351,
     352,   353,     3,     4,     5,     6,     7,     8,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
     361,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    10,    11,    12,    13,    14,    15,    16,
      81,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   361,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   361,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    -1,   298,    -1,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,    -1,    -1,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,    -1,   350,
     351,   352,   353,     3,     4,     5,     6,     7,     8,   360,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,   361,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   105,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   361,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   361,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   178,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   361,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     361,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,    -1,   298,    -1,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,    -1,    -1,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,    -1,
     350,   351,   352,   353,     3,     4,     5,     6,     7,     8,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,   361,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   105,    -1,    -1,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   361,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   361,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,    -1,   298,
      -1,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,    -1,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
      -1,   350,   351,   352,   353,     3,     4,     5,     6,     7,
       8,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,   361,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    10,    11,    12,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,   361,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   361,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,    -1,
     298,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
      -1,    -1,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,    -1,   350,   351,   352,   353,    -1,    -1,    -1,    -1,
      -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     361,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     361,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   361,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   361,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     361,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
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
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    10,    11,    12,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   361,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   361,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   361,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     361,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   361,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   361,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   361,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   361,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    10,    11,
      12,    13,    14,    15,    16,   361,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   361,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    -1,    -1,   136,   137,   361,
     139,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,   361,    -1,    65,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,   257,   149,
      -1,    -1,    -1,    53,    54,    -1,    56,   361,    58,    59,
     156,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
      -1,   233,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
     361,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   191,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,   361,    -1,    -1,   106,   107,   108,   109,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,
     220,   221,   233,    -1,   124,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,   144,   241,   246,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,   173,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     190,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,   223,   224,    -1,    -1,    -1,    -1,   229,
      -1,   231,    -1,    -1,    -1,    -1,   236,   237,    -1,    -1,
      -1,    -1,   242,   243,    -1,    -1,    -1,    -1,    -1,   249,
      -1,   251,    -1,    -1,    -1,    -1,   256,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   128,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   116,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   104,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    43,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    42,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    78,    99,   100,   149,   191,
     193,   201,   220,   221,   235,   238,   246,   365,   401,   402,
     439,   443,   444,   447,   448,   451,   452,   453,   455,   471,
     472,   481,   484,   486,   487,   488,   510,   513,   520,   521,
     524,   527,   528,   531,   204,   232,   349,   232,     3,    10,
      87,    94,   130,   131,   147,   187,   204,   207,   226,   227,
     241,   349,   492,     3,   440,    87,   131,   147,   187,   204,
     207,   232,   349,   463,   232,   232,   463,     8,   207,   511,
     512,   420,   232,   463,   482,     3,    87,     0,   358,   450,
       3,     3,     3,     3,   360,   201,   148,   485,     3,   147,
       3,     3,    77,   148,     3,     3,   485,   226,   147,   485,
     232,   473,     3,   128,   146,   161,   188,   441,     3,   148,
       3,   148,     3,     3,   148,     3,   148,     3,   148,     3,
     148,     3,   148,    95,   138,   146,   151,   161,   464,     3,
       3,   464,     9,    20,     3,   105,   362,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    37,    64,    69,
      72,    73,    81,    98,   102,   138,   168,   178,   206,   213,
     214,   218,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     298,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   350,   351,
     352,   353,   360,   366,   421,   422,     3,   146,   161,     3,
     360,   424,   425,   426,   428,   438,     3,   365,    46,    47,
      66,   195,    92,   112,    35,    67,    92,   100,   112,   172,
     193,   248,    47,   193,   529,   359,     3,     4,     5,     6,
       7,     8,   178,   361,   522,   523,   131,   187,   259,     3,
      43,     3,   360,   182,     3,   148,   259,   360,    36,    51,
     525,     3,     3,    77,   148,     3,   485,   360,   474,   359,
     442,     3,   441,   128,   362,   259,   259,   259,   259,   259,
     259,   259,     3,   225,     3,   366,   366,   512,   359,   360,
       9,   366,   366,   366,   253,   366,   400,   359,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   366,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    43,   423,   128,   151,   362,   362,   359,   423,   402,
     424,   220,   362,    68,   145,   162,   175,   200,   218,   429,
     431,    43,   427,    45,    45,    63,    76,     3,    76,    63,
       3,    63,    76,    63,     3,    76,     3,    63,    76,    63,
     255,   225,    18,   169,   354,   355,   356,   357,   530,     3,
     361,   362,     3,     3,    53,    54,    56,    58,    59,    74,
     106,   107,   108,   109,   115,   124,   144,   152,   160,   167,
     170,   173,   174,   190,   219,   220,   223,   224,   229,   231,
     236,   237,   242,   243,   249,   251,   256,   506,   182,     3,
      16,   142,   180,   514,   515,   516,     3,   182,   259,     3,
     514,    99,   149,   238,   526,   182,     3,   148,   259,   529,
       3,     3,   475,   128,   225,   476,    26,   252,   403,   245,
     424,     3,     3,     3,     3,     3,     3,     3,     3,   220,
     360,   465,     3,   220,   465,     3,   366,   371,   372,   366,
     366,   400,   116,   117,   253,     3,     3,   377,   366,    57,
     163,   234,   366,   398,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   361,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   361,
     366,   366,   366,   361,   366,   366,   366,   366,   366,   366,
      26,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   361,   361,   361,   361,   361,   366,   366,   361,
     361,   361,   366,   366,     5,   361,   361,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   361,
     361,   366,   366,   366,   366,   366,     6,    18,   178,   297,
     360,    13,    14,    16,    19,   366,    37,    39,   212,   360,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,     3,   424,     3,   422,     3,   449,     3,
     125,   146,   246,   435,   361,   361,     3,   483,   425,   162,
     200,   432,   426,   155,   181,   430,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   506,     3,   225,     3,     3,
       3,     5,     3,   357,     5,     5,   255,     5,    55,     5,
     523,   360,   360,   360,   502,   502,   502,   502,   502,   502,
     360,   502,   502,   502,    56,   503,   503,   502,   502,   502,
     360,   503,   502,   503,   360,   360,    18,    70,   105,     3,
     506,     3,     3,     3,   361,   362,   245,   360,     3,     3,
     182,   361,   182,     3,   182,   259,     3,   146,   201,   329,
     359,   360,   508,   509,   361,   362,     4,   216,   217,   477,
     366,   183,   413,   424,   403,   442,     3,   470,     3,   466,
     250,   402,   470,   250,   402,   362,   361,   233,   116,   117,
     366,   366,   361,   402,   128,   362,   361,   128,   366,   362,
     362,   362,   361,   361,   361,   361,   361,   361,   362,   362,
     362,   362,   361,   362,   362,   362,   361,   361,   361,   361,
     362,   362,   361,   362,   361,   361,   361,    43,   362,   362,
     362,   362,   299,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   362,   362,   362,   361,   362,   328,   328,
     328,   361,   362,   361,   362,   361,   328,   328,   362,   361,
     361,   361,   361,   361,   361,   361,   361,   362,   362,   362,
     362,   362,   362,   362,   362,   361,   362,   361,   361,   361,
     362,     6,   178,   373,   375,   366,   366,   360,   366,    42,
     360,   360,   360,   367,   403,   128,   362,   423,   156,   156,
     156,    20,   359,   362,   403,   430,   430,   155,   182,   426,
     155,    70,   126,   186,   241,   506,   506,     3,   501,   506,
       3,   225,   225,     5,     5,   514,   514,     5,   504,   505,
     504,   504,     4,   507,   504,   504,   504,   505,   505,   504,
     504,   504,   507,   505,   504,   505,     5,     5,   178,   360,
     366,   360,   506,   506,   506,   198,   516,   247,     3,   305,
     306,   307,   308,   445,   446,   245,   360,   182,     3,    43,
      52,     3,   245,   360,     3,     3,   182,    86,     3,    63,
      70,   126,   130,   147,   156,   186,   241,   493,   494,   500,
     427,     3,    79,    91,   127,   135,   178,   222,   255,   360,
     478,   479,   480,    55,   164,   416,   403,    20,   184,   362,
     456,   361,   362,   360,   467,   456,   467,   456,   371,   366,
     366,   116,   233,    83,   361,   366,   366,   366,   128,   153,
     399,   399,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   506,   506,   366,   366,   366,     4,   328,
     328,   328,   328,   328,   328,   366,   366,   366,   366,   360,
     360,   360,   328,     5,   328,     5,   328,   360,   360,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     371,   402,   374,   376,    42,   366,   370,   368,   369,   402,
     133,   404,   424,     3,   435,   132,   436,   436,   436,   366,
       3,     3,   413,   426,   366,   182,   245,   433,   434,   426,
     360,   156,   156,   360,   501,   501,   506,    18,    36,    40,
      43,    45,    48,    63,    70,    71,   105,   122,   156,   178,
     186,   241,   454,   501,     3,     3,   361,   361,   361,   362,
     239,   258,    74,    75,   361,   362,   361,   361,   361,    70,
     366,   445,    54,    58,   106,   109,   124,   144,   152,   229,
     231,   249,   517,   360,   360,   360,   360,   360,   361,   362,
     247,   445,     3,   245,   360,    52,   518,   132,   247,   445,
     245,   360,   182,     3,     3,   360,   508,     3,   360,   156,
     147,   156,   360,   360,   156,   360,   361,   362,     3,   402,
       4,    79,   229,     6,     4,     4,   360,   479,   362,     3,
       5,   414,   415,   366,   197,   532,   105,   366,   156,     3,
       3,   105,   366,   469,   362,   456,   456,   116,   366,   360,
     132,   361,   361,   362,   361,   366,   366,   361,   361,   361,
     361,   361,   362,   362,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   362,   361,   360,   360,   360,   360,
     360,   360,   361,   362,   362,   361,   361,   378,   379,   380,
     360,   361,   362,   360,   361,   362,   360,   396,   397,   361,
     362,   362,   362,   361,   361,   362,   362,   361,   362,   361,
     362,   361,   362,   361,   361,   371,   402,   366,   402,   402,
     402,   361,    55,   140,   408,   403,   155,   360,   360,   360,
      20,    20,   359,   416,   366,   360,   434,   366,   360,   360,
       3,   499,   454,   454,   501,   178,     3,   360,   360,   360,
      44,     3,   360,     4,     4,     5,     6,     7,    64,   311,
     312,   313,   360,   156,   156,   454,   198,    43,    52,     5,
     220,     4,   505,     4,   505,   505,   360,   361,   361,    43,
      52,   445,     3,     3,     3,     3,     3,   360,   361,   360,
     247,   445,   518,     3,     4,     5,     6,     7,     8,    10,
      12,    16,    17,    18,    20,    24,    25,    26,    27,    28,
      37,    42,    43,    46,    51,    52,    53,    54,    55,    58,
      60,    61,    62,    65,    66,    68,    69,    70,    74,    88,
      93,    98,    99,   100,   105,   106,   108,   109,   110,   111,
     114,   116,   117,   118,   119,   121,   123,   124,   126,   128,
     129,   131,   132,   133,   134,   140,   142,   144,   145,   147,
     148,   149,   150,   151,   152,   154,   155,   156,   157,   158,
     162,   164,   166,   175,   177,   178,   179,   180,   181,   182,
     183,   186,   187,   192,   194,   195,   196,   198,   200,   202,
     203,   204,   205,   219,   220,   221,   229,   231,   232,   233,
     238,   240,   241,   242,   245,   249,   250,   252,   253,   254,
     255,   259,   300,   301,   302,   303,   304,   358,   359,   360,
     361,   362,   363,   519,   110,   360,   361,   247,   445,     3,
     245,   360,   132,   493,    70,   126,   186,   241,   366,   360,
     360,   360,     3,   419,   419,   360,   499,   489,   508,   494,
     506,   479,   361,   480,    41,   104,   359,   406,   406,   362,
     166,   362,     3,    26,   533,   238,    20,   361,   362,   468,
     182,   458,     4,   366,   366,   361,    96,    97,   101,   103,
     136,   137,   139,   256,   257,   366,   366,   366,   382,   383,
     381,   384,   385,   386,   366,   366,   329,   409,   409,   409,
     387,   328,     4,     5,   391,   328,     4,     5,   395,   409,
     409,   366,   366,   366,   366,   366,   366,   366,   366,   361,
     361,   361,   361,   361,   366,   405,   366,   413,   404,     3,
     437,   437,   437,   366,   366,     3,   532,   419,   361,     3,
     496,     3,   495,   361,   362,   454,     5,   366,     5,    43,
      70,   186,   241,   366,   360,   360,   360,   366,   517,    52,
     518,   361,     4,   366,    52,   518,   361,   361,   361,   361,
     362,   445,   445,   360,   361,   116,   518,   518,   518,   518,
     518,   518,   202,   445,   360,   361,   360,   247,   445,   250,
     361,   360,   156,   156,   360,   361,   496,   419,   419,   361,
     362,   361,   495,   361,    40,   182,   208,   329,   501,   361,
       3,   415,   366,   366,   362,   457,   105,   366,   105,   366,
     360,    80,   532,   361,   361,   361,   361,   361,   361,   409,
     409,   409,   409,   409,   409,   361,   362,   361,    55,   183,
     411,   411,   411,   409,   360,   361,   361,   409,   360,   361,
     361,   409,   411,   411,   361,   361,   361,   361,   361,   362,
     361,   361,   406,   255,   362,   407,   416,   408,   361,   362,
     361,   361,    20,   361,    18,   361,   362,   361,   362,     3,
     361,   362,   361,   361,   362,   360,   360,   156,   361,   361,
     361,   361,   361,    43,    52,   518,   116,   361,   518,   116,
       3,   361,   361,   445,   116,   116,   116,   116,   116,   116,
      52,   361,   445,   445,   360,   361,   128,   489,   508,   366,
     360,   360,   499,   361,   361,   361,     3,   361,     5,    20,
       3,    55,    55,   406,     3,     3,   462,   469,   360,   459,
     411,   411,   411,   411,   411,   411,   366,     3,   410,    55,
     361,   361,   361,   411,   388,   328,   328,   411,   392,   328,
     328,   411,   361,   361,   366,   199,   366,   132,   417,   413,
       3,   366,   248,   192,     3,     3,     5,    49,    50,     5,
     366,   366,    52,   518,   116,   116,   361,   361,    69,   123,
     148,   158,   254,   518,   361,   361,   445,   360,   361,   496,
     495,   361,   192,     5,    99,   228,   189,   247,   189,    20,
     362,   361,     3,    93,   460,   361,   361,   361,   361,   361,
     361,   361,   362,     3,   412,   361,   409,   360,   360,   361,
     409,   360,   360,   361,   361,   406,   210,   238,   151,   418,
     416,     3,   361,   361,   361,   361,   518,   116,   116,   361,
       5,   361,   361,     3,     3,     3,   360,   360,   360,   366,
       3,   361,   362,    82,   238,     3,   406,   362,   411,   389,
     390,   411,   393,   394,   211,   211,   419,   360,    49,    50,
     116,   361,   192,   359,   360,     3,     3,     3,    20,     3,
     461,     3,   361,   409,   409,   361,   409,   409,   165,   165,
       3,   497,   225,     3,     3,   497,   361,   361,   361,   366,
     220,   406,   411,   411,   411,   411,   361,   362,   360,   359,
     360,   360,   361,   360,   209,   462,   361,   361,   361,   361,
     498,     3,     5,     3,   497,   497,   498,   208,   490,   491,
       5,    18,    89,   168,   182,   361,   360,   361,   361,    18,
       3,   361,   362,    89,   248,   143,   129,   185,   215,    99,
     238,   497,   498,   498,   250,   491,    90,   141,    66,   177,
     195,   220,    66,   177,   195,   220,   361,   159,   105,   178,
     105,   178,   498,   230,     4,   169,   182,   182,   176,   176,
       5,     5
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
#line 435 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 441 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 442 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 444 "parser/evoparser.y"
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
#line 457 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 459 "parser/evoparser.y"
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
#line 477 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 485 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 493 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 499 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 506 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 507 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 508 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 509 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 510 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 511 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 512 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 513 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 514 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 515 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 516 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 517 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 518 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 519 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 520 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 521 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 522 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 523 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 524 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 526 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 531 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 532 "parser/evoparser.y"
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
#line 540 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 541 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 542 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 543 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 544 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 545 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 548 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 43:
#line 549 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 44:
#line 550 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 45:
#line 551 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 46:
#line 552 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 47:
#line 555 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 48:
#line 556 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 49:
#line 559 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 50:
#line 560 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 51:
#line 563 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 53:
#line 567 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 567 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 568 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 56:
#line 568 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 57:
#line 569 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 570 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 577 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 578 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 61:
#line 585 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 62:
#line 586 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 63:
#line 596 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 64:
#line 600 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 65:
#line 601 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 602 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 603 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 604 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 605 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 70:
#line 606 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 71:
#line 607 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 72:
#line 611 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 73:
#line 612 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 74:
#line 613 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 75:
#line 614 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 76:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 77:
#line 616 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 78:
#line 618 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 619 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 80:
#line 620 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 81:
#line 621 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 82:
#line 622 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 623 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 84:
#line 624 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 625 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 86:
#line 626 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 627 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 88:
#line 628 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 629 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 90:
#line 631 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 91:
#line 632 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 633 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 93:
#line 634 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 635 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 95:
#line 636 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 637 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 97:
#line 638 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 98:
#line 639 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 640 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 100:
#line 641 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 101:
#line 642 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 102:
#line 643 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 103:
#line 644 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 645 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 105:
#line 646 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 106:
#line 648 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 107:
#line 649 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 108:
#line 650 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 109:
#line 651 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 110:
#line 652 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 111:
#line 653 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 112:
#line 656 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 113:
#line 657 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 114:
#line 658 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 115:
#line 659 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 116:
#line 660 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 661 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 118:
#line 662 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 663 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 664 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 121:
#line 665 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 122:
#line 666 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 667 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 124:
#line 668 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 125:
#line 669 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 126:
#line 670 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 127:
#line 671 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 128:
#line 672 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 129:
#line 673 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 130:
#line 674 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 131:
#line 675 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 132:
#line 676 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 133:
#line 677 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 134:
#line 678 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 135:
#line 679 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 136:
#line 680 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 137:
#line 681 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 138:
#line 682 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 139:
#line 683 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 140:
#line 684 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 141:
#line 685 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 142:
#line 686 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 143:
#line 687 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 144:
#line 688 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 145:
#line 689 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 146:
#line 691 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 147:
#line 692 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 148:
#line 693 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 149:
#line 694 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 150:
#line 695 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 151:
#line 696 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 152:
#line 697 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 153:
#line 698 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 154:
#line 700 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 155:
#line 701 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 156:
#line 702 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 157:
#line 703 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 158:
#line 704 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 159:
#line 705 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 160:
#line 706 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 161:
#line 707 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 162:
#line 708 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 163:
#line 709 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 164:
#line 710 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 165:
#line 711 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 166:
#line 712 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 167:
#line 713 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 168:
#line 714 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 169:
#line 715 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 170:
#line 716 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 171:
#line 717 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 172:
#line 718 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 719 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 174:
#line 720 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 175:
#line 721 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 176:
#line 723 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 177:
#line 724 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 178:
#line 725 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 179:
#line 726 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 180:
#line 727 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 181:
#line 729 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 182:
#line 730 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 183:
#line 732 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 184:
#line 733 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 185:
#line 734 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 186:
#line 736 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 187:
#line 737 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 188:
#line 738 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 189:
#line 739 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 190:
#line 746 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 191:
#line 753 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 192:
#line 760 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 764 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 768 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 195:
#line 772 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 196:
#line 776 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 197:
#line 780 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 198:
#line 786 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 787 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 200:
#line 788 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 201:
#line 792 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 202:
#line 798 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 203:
#line 804 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 204:
#line 805 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 806 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 807 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 207:
#line 808 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 208:
#line 809 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 209:
#line 810 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 811 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 211:
#line 812 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 212:
#line 816 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 213:
#line 818 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 214:
#line 820 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 215:
#line 822 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 216:
#line 826 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 217:
#line 834 "parser/evoparser.y"
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
#line 844 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 219:
#line 845 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 220:
#line 848 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 221:
#line 849 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 222:
#line 853 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 861 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 224:
#line 869 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 225:
#line 880 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 226:
#line 889 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 227:
#line 894 "parser/evoparser.y"
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
#line 907 "parser/evoparser.y"
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
#line 920 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 232:
#line 922 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 233:
#line 925 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 234:
#line 932 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 235:
#line 940 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 941 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 942 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 238:
#line 945 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 239:
#line 946 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 241:
#line 950 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 244:
#line 959 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 245:
#line 961 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 248:
#line 969 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 249:
#line 971 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 254:
#line 983 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 255:
#line 989 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 256:
#line 996 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 257:
#line 1004 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 258:
#line 1005 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1006 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 260:
#line 1007 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 261:
#line 1010 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 262:
#line 1011 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 263:
#line 1012 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 264:
#line 1013 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 265:
#line 1014 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 267:
#line 1018 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 268:
#line 1021 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1022 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 270:
#line 1025 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 271:
#line 1026 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 272:
#line 1027 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 273:
#line 1028 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 274:
#line 1029 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 275:
#line 1030 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 276:
#line 1031 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 277:
#line 1032 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 278:
#line 1033 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 279:
#line 1036 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 280:
#line 1037 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 281:
#line 1039 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 282:
#line 1047 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 283:
#line 1052 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 284:
#line 1053 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 285:
#line 1054 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 286:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1058 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1067 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 291:
#line 1073 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 292:
#line 1074 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 293:
#line 1075 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 296:
#line 1084 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 297:
#line 1086 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 298:
#line 1088 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 299:
#line 1090 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 300:
#line 1092 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 301:
#line 1095 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 302:
#line 1096 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 303:
#line 1097 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 304:
#line 1100 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 305:
#line 1101 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 306:
#line 1104 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1105 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 308:
#line 1108 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 309:
#line 1109 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 310:
#line 1110 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 313:
#line 1117 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 314:
#line 1118 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 315:
#line 1123 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 316:
#line 1125 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 317:
#line 1127 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 319:
#line 1131 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1132 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 321:
#line 1135 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 322:
#line 1136 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 323:
#line 1139 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 324:
#line 1144 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 325:
#line 1154 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 326:
#line 1161 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 327:
#line 1162 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 328:
#line 1163 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 329:
#line 1164 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 330:
#line 1169 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 331:
#line 1173 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 332:
#line 1175 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 335:
#line 1181 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 336:
#line 1186 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 337:
#line 1193 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 338:
#line 1200 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 339:
#line 1210 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 340:
#line 1217 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 341:
#line 1224 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 342:
#line 1232 "parser/evoparser.y"
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

  case 343:
#line 1242 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 344:
#line 1250 "parser/evoparser.y"
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

  case 345:
#line 1260 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 346:
#line 1268 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 347:
#line 1277 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 348:
#line 1286 "parser/evoparser.y"
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

  case 349:
#line 1296 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 350:
#line 1304 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 351:
#line 1313 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 352:
#line 1322 "parser/evoparser.y"
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

  case 353:
#line 1332 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 354:
#line 1341 "parser/evoparser.y"
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

  case 355:
#line 1353 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 356:
#line 1358 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 357:
#line 1363 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 358:
#line 1369 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 359:
#line 1376 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1383 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 361:
#line 1390 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1400 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 363:
#line 1407 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 364:
#line 1416 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 365:
#line 1423 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 366:
#line 1429 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 367:
#line 1437 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 368:
#line 1443 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 370:
#line 1451 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 371:
#line 1452 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 372:
#line 1453 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 373:
#line 1454 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 374:
#line 1459 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 375:
#line 1466 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 376:
#line 1475 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 377:
#line 1482 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 378:
#line 1488 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 379:
#line 1498 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 380:
#line 1502 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 381:
#line 1508 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 382:
#line 1514 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 383:
#line 1521 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 384:
#line 1527 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 385:
#line 1534 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 386:
#line 1540 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1546 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 388:
#line 1552 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 389:
#line 1558 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 390:
#line 1564 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 391:
#line 1570 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1576 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 393:
#line 1582 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 394:
#line 1588 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 395:
#line 1594 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 396:
#line 1600 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 397:
#line 1606 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 398:
#line 1612 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 399:
#line 1618 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 400:
#line 1625 "parser/evoparser.y"
    { ;}
    break;

  case 401:
#line 1626 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 402:
#line 1627 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 403:
#line 1631 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 404:
#line 1639 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 405:
#line 1645 "parser/evoparser.y"
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

  case 407:
#line 1658 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 408:
#line 1658 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 411:
#line 1666 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 412:
#line 1667 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 413:
#line 1668 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 414:
#line 1672 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 415:
#line 1673 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 416:
#line 1674 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 417:
#line 1678 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 418:
#line 1686 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 419:
#line 1695 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 420:
#line 1696 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 421:
#line 1697 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 422:
#line 1698 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 423:
#line 1699 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 427:
#line 1706 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 428:
#line 1710 "parser/evoparser.y"
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

  case 429:
#line 1720 "parser/evoparser.y"
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

  case 430:
#line 1732 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 431:
#line 1733 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 432:
#line 1733 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 433:
#line 1736 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 434:
#line 1737 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 435:
#line 1738 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 436:
#line 1739 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 437:
#line 1743 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 438:
#line 1746 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 439:
#line 1747 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 440:
#line 1748 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 441:
#line 1749 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 442:
#line 1755 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 443:
#line 1761 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 444:
#line 1766 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 445:
#line 1771 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 446:
#line 1775 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 447:
#line 1779 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 448:
#line 1781 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 451:
#line 1787 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 452:
#line 1788 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 453:
#line 1792 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 454:
#line 1793 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 455:
#line 1797 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 456:
#line 1798 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 457:
#line 1799 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 464:
#line 1814 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 465:
#line 1815 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 466:
#line 1816 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 467:
#line 1817 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 468:
#line 1818 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 469:
#line 1819 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 470:
#line 1820 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 471:
#line 1821 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 472:
#line 1826 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 473:
#line 1835 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 474:
#line 1842 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 475:
#line 1843 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 476:
#line 1844 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 477:
#line 1849 "parser/evoparser.y"
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

  case 478:
#line 1860 "parser/evoparser.y"
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

  case 479:
#line 1872 "parser/evoparser.y"
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

  case 480:
#line 1883 "parser/evoparser.y"
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

  case 481:
#line 1898 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 482:
#line 1902 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 483:
#line 1906 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 484:
#line 1907 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 485:
#line 1912 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 486:
#line 1914 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 487:
#line 1916 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 488:
#line 1918 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 489:
#line 1921 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 490:
#line 1922 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 491:
#line 1928 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 492:
#line 1933 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 493:
#line 1935 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 494:
#line 1937 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 495:
#line 1939 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 496:
#line 1941 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 497:
#line 1945 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 498:
#line 1949 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 499:
#line 1950 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 500:
#line 1955 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 501:
#line 1965 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 502:
#line 1974 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 503:
#line 1982 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 505:
#line 1990 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 506:
#line 1991 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 507:
#line 1992 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 508:
#line 1993 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 509:
#line 1995 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 510:
#line 1997 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 511:
#line 1999 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 514:
#line 2007 "parser/evoparser.y"
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

  case 515:
#line 2022 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 516:
#line 2030 "parser/evoparser.y"
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

  case 517:
#line 2044 "parser/evoparser.y"
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

  case 518:
#line 2058 "parser/evoparser.y"
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

  case 519:
#line 2072 "parser/evoparser.y"
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

  case 520:
#line 2084 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 521:
#line 2085 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 522:
#line 2086 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 523:
#line 2089 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 524:
#line 2090 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 525:
#line 2093 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 526:
#line 2094 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 527:
#line 2095 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 528:
#line 2096 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 529:
#line 2097 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 530:
#line 2098 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 531:
#line 2099 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 532:
#line 2100 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 533:
#line 2102 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 534:
#line 2104 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 535:
#line 2106 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 536:
#line 2108 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 537:
#line 2110 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 538:
#line 2112 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 539:
#line 2115 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 540:
#line 2116 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 541:
#line 2119 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 542:
#line 2120 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 543:
#line 2123 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 544:
#line 2124 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 546:
#line 2128 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 547:
#line 2129 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 548:
#line 2130 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 549:
#line 2131 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 550:
#line 2132 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 551:
#line 2133 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 552:
#line 2134 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 553:
#line 2135 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 554:
#line 2136 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 555:
#line 2137 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 556:
#line 2138 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 557:
#line 2139 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 558:
#line 2140 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 559:
#line 2141 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 560:
#line 2142 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 561:
#line 2143 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 562:
#line 2144 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 563:
#line 2147 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 564:
#line 2148 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 565:
#line 2151 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 566:
#line 2153 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 567:
#line 2161 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 568:
#line 2162 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2164 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 571:
#line 2165 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 572:
#line 2166 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 573:
#line 2167 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 574:
#line 2168 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 575:
#line 2169 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 576:
#line 2170 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 577:
#line 2171 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 578:
#line 2172 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 579:
#line 2179 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 580:
#line 2180 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 581:
#line 2181 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 582:
#line 2182 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 583:
#line 2183 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 584:
#line 2184 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 585:
#line 2185 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 586:
#line 2186 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 587:
#line 2187 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 588:
#line 2188 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 589:
#line 2189 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 590:
#line 2190 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 591:
#line 2191 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 592:
#line 2192 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 593:
#line 2193 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 594:
#line 2194 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 595:
#line 2195 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 596:
#line 2196 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 597:
#line 2197 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 598:
#line 2198 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 599:
#line 2199 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 600:
#line 2202 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 601:
#line 2203 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 602:
#line 2204 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 603:
#line 2207 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 604:
#line 2208 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 605:
#line 2211 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 606:
#line 2212 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 607:
#line 2213 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 609:
#line 2217 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 610:
#line 2218 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 611:
#line 2222 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 612:
#line 2223 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 613:
#line 2224 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 614:
#line 2225 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 615:
#line 2226 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 616:
#line 2227 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 617:
#line 2228 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 618:
#line 2229 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 619:
#line 2230 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 620:
#line 2231 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 621:
#line 2232 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 622:
#line 2233 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 623:
#line 2234 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 624:
#line 2235 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 625:
#line 2236 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 626:
#line 2237 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 627:
#line 2238 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 628:
#line 2239 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 629:
#line 2240 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 630:
#line 2241 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 631:
#line 2242 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 632:
#line 2243 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 633:
#line 2244 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 634:
#line 2245 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 635:
#line 2246 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 636:
#line 2247 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 637:
#line 2248 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 638:
#line 2249 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 639:
#line 2250 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 640:
#line 2251 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 641:
#line 2252 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 642:
#line 2253 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 643:
#line 2254 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 644:
#line 2257 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 645:
#line 2258 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 646:
#line 2262 "parser/evoparser.y"
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

  case 647:
#line 2274 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 648:
#line 2275 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 649:
#line 2276 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 650:
#line 2280 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 651:
#line 2283 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 652:
#line 2284 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 656:
#line 2288 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 657:
#line 2289 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 658:
#line 2297 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 659:
#line 2302 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 660:
#line 2308 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 661:
#line 2314 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 662:
#line 2321 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 663:
#line 2328 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 664:
#line 2334 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 665:
#line 2340 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 666:
#line 2347 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 671:
#line 2363 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 672:
#line 2364 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 673:
#line 2365 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 674:
#line 2366 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 675:
#line 2369 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 676:
#line 2370 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 677:
#line 2371 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 678:
#line 2372 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 679:
#line 2373 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 680:
#line 2374 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 681:
#line 2375 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 682:
#line 2376 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 683:
#line 2377 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 684:
#line 2378 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 693:
#line 2395 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 694:
#line 2396 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 815:
#line 2414 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 816:
#line 2421 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 817:
#line 2426 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 818:
#line 2432 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 819:
#line 2438 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 820:
#line 2444 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 821:
#line 2455 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 822:
#line 2460 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 823:
#line 2466 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 826:
#line 2477 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 827:
#line 2478 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 828:
#line 2479 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 829:
#line 2480 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 830:
#line 2481 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 831:
#line 2482 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 832:
#line 2483 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 833:
#line 2490 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 834:
#line 2495 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 835:
#line 2502 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 836:
#line 2503 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 837:
#line 2506 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 838:
#line 2507 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 839:
#line 2508 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 840:
#line 2511 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 841:
#line 2516 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 842:
#line 2522 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 843:
#line 2531 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 844:
#line 2539 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 845:
#line 2549 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 846:
#line 2554 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 849:
#line 2567 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 850:
#line 2568 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 851:
#line 2569 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 852:
#line 2570 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 853:
#line 2571 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 854:
#line 2572 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 855:
#line 2573 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 856:
#line 2574 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 857:
#line 2577 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 858:
#line 2582 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 859:
#line 2588 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 860:
#line 2598 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 861:
#line 2605 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 862:
#line 2612 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 863:
#line 2620 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 865:
#line 2630 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 867:
#line 2634 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 868:
#line 2635 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10110 "parser/evoparser.tab.c"
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


#line 2638 "parser/evoparser.y"

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
