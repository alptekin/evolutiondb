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
     DATABASE = 332,
     DECLARE = 333,
     DEFERRABLE = 334,
     DEFERRED = 335,
     DELIMITER = 336,
     DISABLE = 337,
     DO = 338,
     DOMAIN = 339,
     DELAYED = 340,
     DAY_HOUR = 341,
     DAY_MICROSECOND = 342,
     DISTINCT = 343,
     DELETE = 344,
     DROP = 345,
     DAY_MINUTE = 346,
     DISTINCTROW = 347,
     DAY_SECOND = 348,
     DESC = 349,
     DEFAULT = 350,
     DOUBLE = 351,
     DATETIME = 352,
     DECIMAL = 353,
     DATE = 354,
     EACH = 355,
     ELSEIF = 356,
     ENABLE = 357,
     ESCAPED = 358,
     EXCEPT = 359,
     ENUM = 360,
     END = 361,
     ELSE = 362,
     EXECUTE = 363,
     EXIT = 364,
     EXPLAIN = 365,
     FETCH = 366,
     FIRST = 367,
     FOREACH = 368,
     FLOAT = 369,
     FORCE = 370,
     FOREIGN = 371,
     FORMAT = 372,
     FROM = 373,
     FULL = 374,
     FULLTEXT = 375,
     FUNCTION = 376,
     FOR = 377,
     GROUP = 378,
     HANDLER = 379,
     HEADER = 380,
     HOUR_MINUTE = 381,
     HOUR_MICROSECOND = 382,
     HIGH_PRIORITY = 383,
     HOUR_SECOND = 384,
     HAVING = 385,
     IMMEDIATE = 386,
     INOUT = 387,
     INITIALLY = 388,
     INTEGER = 389,
     INNER = 390,
     IGNORE = 391,
     INDEX = 392,
     IF = 393,
     INSERT = 394,
     INTERSECT = 395,
     INTO = 396,
     INT = 397,
     INTERVAL = 398,
     ITERATE = 399,
     JOIN = 400,
     KEY = 401,
     LEAVE = 402,
     LOOP = 403,
     LESS = 404,
     LONGTEXT = 405,
     LOW_PRIORITY = 406,
     LEFT = 407,
     LEADING = 408,
     LIMIT = 409,
     LOCKED = 410,
     OFFSET = 411,
     LONGBLOB = 412,
     MATCH = 413,
     MAXVALUE = 414,
     MEDIUMTEXT = 415,
     MINUS = 416,
     MODIFY = 417,
     MEDIUMBLOB = 418,
     MEDIUMINT = 419,
     NATURAL = 420,
     NODE = 421,
     NO_ACTION = 422,
     NULLX = 423,
     OPEN = 424,
     OUT = 425,
     OUTER = 426,
     ON = 427,
     ORDER = 428,
     ONDUPLICATE = 429,
     PARTIAL = 430,
     PRIMARY = 431,
     PROCEDURE = 432,
     QUICK = 433,
     RANGE = 434,
     REAL = 435,
     RECLAIM = 436,
     REFERENCES = 437,
     RENAME = 438,
     RESIGNAL = 439,
     RESTRICT = 440,
     RETURN = 441,
     RETURNING = 442,
     RETURNS = 443,
     ROLLUP = 444,
     RIGHT = 445,
     REPLACE = 446,
     ROW = 447,
     SIGNAL = 448,
     TRIGGER = 449,
     UNTIL = 450,
     SQL_SMALL_RESULT = 451,
     SCHEMA = 452,
     SHARD = 453,
     SHARDS = 454,
     SHARE = 455,
     SKIP = 456,
     SOME = 457,
     SQL_CALC_FOUND_ROWS = 458,
     SQL_BIG_RESULT = 459,
     SIMPLE = 460,
     STDIN = 461,
     STDOUT = 462,
     STRAIGHT_JOIN = 463,
     SMALLINT = 464,
     SET = 465,
     SELECT = 466,
     QUOTE = 467,
     TINYTEXT = 468,
     TINYINT = 469,
     TO = 470,
     TEMPORARY = 471,
     GLOBAL = 472,
     PRESERVE = 473,
     TEXT = 474,
     THAN = 475,
     TIMESTAMP = 476,
     TABLE = 477,
     THEN = 478,
     TRAILING = 479,
     TRUNCATE = 480,
     TINYBLOB = 481,
     TIME = 482,
     UPDATE = 483,
     UNSIGNED = 484,
     UNION = 485,
     UNIQUE = 486,
     UUID = 487,
     JSON = 488,
     VIEW = 489,
     USING = 490,
     USE = 491,
     HASH = 492,
     VALIDATE = 493,
     VARCHAR = 494,
     VALUES = 495,
     VARBINARY = 496,
     WHERE = 497,
     WHEN = 498,
     WHILE = 499,
     WITH = 500,
     YEAR = 501,
     YEAR_MONTH = 502,
     ZEROFILL = 503,
     EXISTS = 504,
     FSUBSTRING = 505,
     FTRIM = 506,
     FDATE_ADD = 507,
     FDATE_SUB = 508,
     FDATEDIFF = 509,
     FYEAR = 510,
     FMONTH = 511,
     FDAY = 512,
     FHOUR = 513,
     FMINUTE = 514,
     FSECOND = 515,
     FNOW = 516,
     FLEFT = 517,
     FRIGHT = 518,
     FLPAD = 519,
     FRPAD = 520,
     FREVERSE = 521,
     FREPEAT = 522,
     FINSTR = 523,
     FLOCATE = 524,
     FABS = 525,
     FCEIL = 526,
     FFLOOR = 527,
     FROUND = 528,
     FPOWER = 529,
     FSQRT = 530,
     FMOD = 531,
     FRAND = 532,
     FLOG = 533,
     FLOG10 = 534,
     FSIGN = 535,
     FPI = 536,
     FCAST = 537,
     FCONVERT = 538,
     FNULLIF = 539,
     FIFNULL = 540,
     FIF = 541,
     UNKNOWN = 542,
     FGROUP_CONCAT = 543,
     SEPARATOR = 544,
     FCOUNT = 545,
     FSUM = 546,
     FAVG = 547,
     FMIN = 548,
     FMAX = 549,
     FUPPER = 550,
     FLOWER = 551,
     FLENGTH = 552,
     FCONCAT = 553,
     FREPLACE = 554,
     FCOALESCE = 555,
     FGEN_RANDOM_UUID = 556,
     FGEN_RANDOM_UUID_V7 = 557,
     FSNOWFLAKE_ID = 558,
     FLAST_INSERT_ID = 559,
     FSCOPE_IDENTITY = 560,
     FAT_IDENTITY = 561,
     FAT_LAST_INSERT_ID = 562,
     FEVO_SLEEP = 563,
     FEVO_JITTER = 564,
     FROW_NUMBER = 565,
     FRANK = 566,
     FDENSE_RANK = 567,
     FLEAD = 568,
     FLAG = 569,
     FNTILE = 570,
     FPERCENT_RANK = 571,
     FCUME_DIST = 572,
     OVER = 573,
     PARTITION = 574,
     FJSON_EXTRACT = 575,
     FJSON_UNQUOTE = 576,
     FJSON_TYPE = 577,
     FJSON_LENGTH = 578,
     FJSON_DEPTH = 579,
     FJSON_VALID = 580,
     FJSON_KEYS = 581,
     FJSON_PRETTY = 582,
     FJSON_QUOTE = 583,
     FJSON_SET = 584,
     FJSON_INSERT = 585,
     FJSON_REPLACE = 586,
     FJSON_REMOVE = 587,
     FJSON_CONTAINS = 588,
     FJSON_CONTAINS_PATH = 589,
     FJSON_SEARCH = 590,
     FJSON_OBJECT = 591,
     FJSON_ARRAY = 592,
     FJSON_ARRAYAGG = 593,
     SEQUENCE = 594,
     FNEXTVAL = 595,
     FCURRVAL = 596,
     FSETVAL = 597,
     FLASTVAL = 598,
     START = 599,
     INCREMENT = 600,
     MINVALUE = 601,
     CYCLE = 602
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
#define DATABASE 332
#define DECLARE 333
#define DEFERRABLE 334
#define DEFERRED 335
#define DELIMITER 336
#define DISABLE 337
#define DO 338
#define DOMAIN 339
#define DELAYED 340
#define DAY_HOUR 341
#define DAY_MICROSECOND 342
#define DISTINCT 343
#define DELETE 344
#define DROP 345
#define DAY_MINUTE 346
#define DISTINCTROW 347
#define DAY_SECOND 348
#define DESC 349
#define DEFAULT 350
#define DOUBLE 351
#define DATETIME 352
#define DECIMAL 353
#define DATE 354
#define EACH 355
#define ELSEIF 356
#define ENABLE 357
#define ESCAPED 358
#define EXCEPT 359
#define ENUM 360
#define END 361
#define ELSE 362
#define EXECUTE 363
#define EXIT 364
#define EXPLAIN 365
#define FETCH 366
#define FIRST 367
#define FOREACH 368
#define FLOAT 369
#define FORCE 370
#define FOREIGN 371
#define FORMAT 372
#define FROM 373
#define FULL 374
#define FULLTEXT 375
#define FUNCTION 376
#define FOR 377
#define GROUP 378
#define HANDLER 379
#define HEADER 380
#define HOUR_MINUTE 381
#define HOUR_MICROSECOND 382
#define HIGH_PRIORITY 383
#define HOUR_SECOND 384
#define HAVING 385
#define IMMEDIATE 386
#define INOUT 387
#define INITIALLY 388
#define INTEGER 389
#define INNER 390
#define IGNORE 391
#define INDEX 392
#define IF 393
#define INSERT 394
#define INTERSECT 395
#define INTO 396
#define INT 397
#define INTERVAL 398
#define ITERATE 399
#define JOIN 400
#define KEY 401
#define LEAVE 402
#define LOOP 403
#define LESS 404
#define LONGTEXT 405
#define LOW_PRIORITY 406
#define LEFT 407
#define LEADING 408
#define LIMIT 409
#define LOCKED 410
#define OFFSET 411
#define LONGBLOB 412
#define MATCH 413
#define MAXVALUE 414
#define MEDIUMTEXT 415
#define MINUS 416
#define MODIFY 417
#define MEDIUMBLOB 418
#define MEDIUMINT 419
#define NATURAL 420
#define NODE 421
#define NO_ACTION 422
#define NULLX 423
#define OPEN 424
#define OUT 425
#define OUTER 426
#define ON 427
#define ORDER 428
#define ONDUPLICATE 429
#define PARTIAL 430
#define PRIMARY 431
#define PROCEDURE 432
#define QUICK 433
#define RANGE 434
#define REAL 435
#define RECLAIM 436
#define REFERENCES 437
#define RENAME 438
#define RESIGNAL 439
#define RESTRICT 440
#define RETURN 441
#define RETURNING 442
#define RETURNS 443
#define ROLLUP 444
#define RIGHT 445
#define REPLACE 446
#define ROW 447
#define SIGNAL 448
#define TRIGGER 449
#define UNTIL 450
#define SQL_SMALL_RESULT 451
#define SCHEMA 452
#define SHARD 453
#define SHARDS 454
#define SHARE 455
#define SKIP 456
#define SOME 457
#define SQL_CALC_FOUND_ROWS 458
#define SQL_BIG_RESULT 459
#define SIMPLE 460
#define STDIN 461
#define STDOUT 462
#define STRAIGHT_JOIN 463
#define SMALLINT 464
#define SET 465
#define SELECT 466
#define QUOTE 467
#define TINYTEXT 468
#define TINYINT 469
#define TO 470
#define TEMPORARY 471
#define GLOBAL 472
#define PRESERVE 473
#define TEXT 474
#define THAN 475
#define TIMESTAMP 476
#define TABLE 477
#define THEN 478
#define TRAILING 479
#define TRUNCATE 480
#define TINYBLOB 481
#define TIME 482
#define UPDATE 483
#define UNSIGNED 484
#define UNION 485
#define UNIQUE 486
#define UUID 487
#define JSON 488
#define VIEW 489
#define USING 490
#define USE 491
#define HASH 492
#define VALIDATE 493
#define VARCHAR 494
#define VALUES 495
#define VARBINARY 496
#define WHERE 497
#define WHEN 498
#define WHILE 499
#define WITH 500
#define YEAR 501
#define YEAR_MONTH 502
#define ZEROFILL 503
#define EXISTS 504
#define FSUBSTRING 505
#define FTRIM 506
#define FDATE_ADD 507
#define FDATE_SUB 508
#define FDATEDIFF 509
#define FYEAR 510
#define FMONTH 511
#define FDAY 512
#define FHOUR 513
#define FMINUTE 514
#define FSECOND 515
#define FNOW 516
#define FLEFT 517
#define FRIGHT 518
#define FLPAD 519
#define FRPAD 520
#define FREVERSE 521
#define FREPEAT 522
#define FINSTR 523
#define FLOCATE 524
#define FABS 525
#define FCEIL 526
#define FFLOOR 527
#define FROUND 528
#define FPOWER 529
#define FSQRT 530
#define FMOD 531
#define FRAND 532
#define FLOG 533
#define FLOG10 534
#define FSIGN 535
#define FPI 536
#define FCAST 537
#define FCONVERT 538
#define FNULLIF 539
#define FIFNULL 540
#define FIF 541
#define UNKNOWN 542
#define FGROUP_CONCAT 543
#define SEPARATOR 544
#define FCOUNT 545
#define FSUM 546
#define FAVG 547
#define FMIN 548
#define FMAX 549
#define FUPPER 550
#define FLOWER 551
#define FLENGTH 552
#define FCONCAT 553
#define FREPLACE 554
#define FCOALESCE 555
#define FGEN_RANDOM_UUID 556
#define FGEN_RANDOM_UUID_V7 557
#define FSNOWFLAKE_ID 558
#define FLAST_INSERT_ID 559
#define FSCOPE_IDENTITY 560
#define FAT_IDENTITY 561
#define FAT_LAST_INSERT_ID 562
#define FEVO_SLEEP 563
#define FEVO_JITTER 564
#define FROW_NUMBER 565
#define FRANK 566
#define FDENSE_RANK 567
#define FLEAD 568
#define FLAG 569
#define FNTILE 570
#define FPERCENT_RANK 571
#define FCUME_DIST 572
#define OVER 573
#define PARTITION 574
#define FJSON_EXTRACT 575
#define FJSON_UNQUOTE 576
#define FJSON_TYPE 577
#define FJSON_LENGTH 578
#define FJSON_DEPTH 579
#define FJSON_VALID 580
#define FJSON_KEYS 581
#define FJSON_PRETTY 582
#define FJSON_QUOTE 583
#define FJSON_SET 584
#define FJSON_INSERT 585
#define FJSON_REPLACE 586
#define FJSON_REMOVE 587
#define FJSON_CONTAINS 588
#define FJSON_CONTAINS_PATH 589
#define FJSON_SEARCH 590
#define FJSON_OBJECT 591
#define FJSON_ARRAY 592
#define FJSON_ARRAYAGG 593
#define SEQUENCE 594
#define FNEXTVAL 595
#define FCURRVAL 596
#define FSETVAL 597
#define FLASTVAL 598
#define START 599
#define INCREMENT 600
#define MINVALUE 601
#define CYCLE 602




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
#line 845 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 858 "parser/evoparser.tab.c"

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
#define YYLAST   11444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  363
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  866
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2133

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   602

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     359,   360,    26,    24,   361,    25,   358,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   357,
       2,   362,     2,     2,     2,     2,     2,     2,     2,     2,
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
     354,   355,   356
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
    2421,  2423,  2433,  2445,  2446,  2451,  2455,  2461,  2467,  2477,
    2488,  2490,  2494,  2504,  2514,  2524,  2531,  2543,  2552,  2553,
    2555,  2558,  2560,  2564,  2570,  2578,  2583,  2588,  2594,  2600,
    2605,  2612,  2624,  2638,  2652,  2668,  2673,  2680,  2682,  2686,
    2688,  2692,  2694,  2698,  2699,  2704,  2710,  2715,  2721,  2726,
    2732,  2737,  2743,  2748,  2753,  2757,  2761,  2765,  2768,  2772,
    2777,  2782,  2784,  2788,  2789,  2794,  2795,  2799,  2802,  2806,
    2810,  2814,  2818,  2824,  2830,  2836,  2840,  2846,  2849,  2857,
    2863,  2871,  2877,  2880,  2884,  2887,  2891,  2894,  2898,  2904,
    2909,  2915,  2923,  2932,  2941,  2949,  2956,  2963,  2969,  2970,
    2974,  2980,  2981,  2983,  2984,  2987,  2990,  2991,  2996,  3000,
    3003,  3007,  3011,  3015,  3019,  3023,  3027,  3031,  3035,  3039,
    3043,  3045,  3047,  3049,  3051,  3053,  3057,  3063,  3066,  3071,
    3073,  3075,  3077,  3079,  3083,  3087,  3091,  3095,  3101,  3107,
    3109,  3111,  3113,  3115,  3119,  3123,  3124,  3126,  3128,  3130,
    3134,  3138,  3141,  3143,  3147,  3151,  3155,  3157,  3168,  3178,
    3191,  3203,  3216,  3228,  3243,  3257,  3258,  3260,  3262,  3266,
    3269,  3273,  3277,  3281,  3283,  3285,  3287,  3289,  3291,  3293,
    3295,  3297,  3299,  3301,  3302,  3305,  3310,  3316,  3322,  3328,
    3334,  3340,  3342,  3344,  3346,  3348,  3350,  3352,  3354,  3356,
    3358,  3360,  3362,  3364,  3366,  3368,  3370,  3372,  3374,  3376,
    3378,  3380,  3382,  3384,  3386,  3388,  3390,  3392,  3394,  3396,
    3398,  3400,  3402,  3404,  3406,  3408,  3410,  3412,  3414,  3416,
    3418,  3420,  3422,  3424,  3426,  3428,  3430,  3432,  3434,  3436,
    3438,  3440,  3442,  3444,  3446,  3448,  3450,  3452,  3454,  3456,
    3458,  3460,  3462,  3464,  3466,  3468,  3470,  3472,  3474,  3476,
    3478,  3480,  3482,  3484,  3486,  3488,  3490,  3492,  3494,  3496,
    3498,  3500,  3502,  3504,  3506,  3508,  3510,  3512,  3514,  3516,
    3518,  3520,  3522,  3524,  3526,  3528,  3530,  3532,  3534,  3536,
    3538,  3540,  3542,  3544,  3546,  3548,  3550,  3552,  3554,  3556,
    3558,  3560,  3562,  3564,  3566,  3568,  3570,  3572,  3574,  3576,
    3578,  3580,  3582,  3584,  3586,  3588,  3592,  3598,  3602,  3608,
    3610,  3615,  3621,  3623,  3627,  3629,  3631,  3633,  3635,  3637,
    3639,  3641,  3643,  3657,  3659,  3661,  3663,  3665,  3667,  3669,
    3673,  3679,  3684,  3689,  3691,  3697,  3698,  3701,  3705,  3708,
    3712,  3715,  3718,  3721,  3723,  3726,  3728,  3732,  3738,  3743,
    3748,  3755,  3762,  3763,  3766,  3769,  3771
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     364,     0,    -1,   400,   357,    -1,   400,   357,   364,    -1,
       3,    -1,     3,   358,     3,    -1,    81,   358,     3,    -1,
     167,   359,     3,   360,    83,   359,     4,   360,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   177,
      -1,   365,    24,   365,    -1,   365,    25,   365,    -1,   365,
      26,   365,    -1,   365,    27,   365,    -1,   365,    28,   365,
      -1,   365,    29,   365,    -1,    25,   365,    -1,   359,   365,
     360,    -1,   365,    12,   365,    -1,   365,    10,   365,    -1,
     365,    11,   365,    -1,   365,    21,   365,    -1,   365,    22,
     365,    -1,   365,    30,   365,    -1,   365,    23,   365,    -1,
     365,    32,   365,    -1,   365,    31,   365,    -1,    18,   365,
      -1,    17,   365,    -1,   365,    20,   365,    -1,    -1,   365,
      20,   359,   366,   401,   360,    -1,    -1,   365,    20,    39,
     359,   367,   401,   360,    -1,    -1,   365,    20,   211,   359,
     368,   401,   360,    -1,    -1,   365,    20,    37,   359,   369,
     401,   360,    -1,   365,    15,   177,    -1,   365,    15,    18,
     177,    -1,   365,    15,     6,    -1,   365,    15,    18,     6,
      -1,     8,     9,   365,    -1,   365,    19,   365,    42,   365,
      -1,   365,    18,    19,   365,    42,   365,    -1,   365,    -1,
     365,   361,   370,    -1,    -1,   370,    -1,    -1,   365,    16,
     359,   372,   370,   360,    -1,    -1,   365,    18,    16,   359,
     373,   370,   360,    -1,    -1,   365,    16,   359,   374,   401,
     360,    -1,    -1,   365,    18,    16,   359,   375,   401,   360,
      -1,    -1,   258,   359,   376,   401,   360,    -1,     3,   359,
     371,   360,    -1,   299,   359,    26,   360,    -1,   299,   359,
     365,   360,    -1,   300,   359,   365,   360,    -1,   301,   359,
     365,   360,    -1,   302,   359,   365,   360,    -1,   303,   359,
     365,   360,    -1,   297,   359,   365,   360,    -1,   297,   359,
     365,   298,     4,   360,    -1,    -1,   319,   359,   360,   327,
     359,   377,   408,   410,   360,    -1,    -1,   320,   359,   360,
     327,   359,   378,   408,   410,   360,    -1,    -1,   321,   359,
     360,   327,   359,   379,   408,   410,   360,    -1,    -1,   300,
     359,   365,   360,   327,   359,   380,   408,   410,   360,    -1,
      -1,   299,   359,    26,   360,   327,   359,   381,   408,   410,
     360,    -1,    -1,   299,   359,   365,   360,   327,   359,   382,
     408,   410,   360,    -1,    -1,   301,   359,   365,   360,   327,
     359,   383,   408,   410,   360,    -1,    -1,   302,   359,   365,
     360,   327,   359,   384,   408,   410,   360,    -1,    -1,   303,
     359,   365,   360,   327,   359,   385,   408,   410,   360,    -1,
      -1,   322,   359,   365,   360,   327,   359,   386,   408,   410,
     360,    -1,    -1,   322,   359,   365,   361,     5,   360,   327,
     359,   387,   408,   410,   360,    -1,    -1,   322,   359,   365,
     361,     5,   361,     4,   360,   327,   359,   388,   408,   410,
     360,    -1,    -1,   322,   359,   365,   361,     5,   361,     5,
     360,   327,   359,   389,   408,   410,   360,    -1,    -1,   323,
     359,   365,   360,   327,   359,   390,   408,   410,   360,    -1,
      -1,   323,   359,   365,   361,     5,   360,   327,   359,   391,
     408,   410,   360,    -1,    -1,   323,   359,   365,   361,     5,
     361,     4,   360,   327,   359,   392,   408,   410,   360,    -1,
      -1,   323,   359,   365,   361,     5,   361,     5,   360,   327,
     359,   393,   408,   410,   360,    -1,    -1,   324,   359,     5,
     360,   327,   359,   394,   408,   410,   360,    -1,    -1,   325,
     359,   360,   327,   359,   395,   408,   410,   360,    -1,    -1,
     326,   359,   360,   327,   359,   396,   408,   410,   360,    -1,
     259,   359,   365,   361,   365,   361,   365,   360,    -1,   259,
     359,   365,   361,   365,   360,    -1,   259,   359,   365,   127,
     365,   360,    -1,   259,   359,   365,   127,   365,   131,   365,
     360,    -1,   260,   359,   365,   360,    -1,   260,   359,   397,
     365,   127,   365,   360,    -1,   260,   359,   397,   127,   365,
     360,    -1,   304,   359,   365,   360,    -1,   305,   359,   365,
     360,    -1,   306,   359,   365,   360,    -1,   307,   359,   365,
     361,   365,   360,    -1,   308,   359,   365,   361,   365,   361,
     365,   360,    -1,   309,   359,   365,   361,   365,   360,    -1,
     271,   359,   365,   361,   365,   360,    -1,   272,   359,   365,
     361,   365,   360,    -1,   273,   359,   365,   361,   365,   361,
     365,   360,    -1,   274,   359,   365,   361,   365,   361,   365,
     360,    -1,   275,   359,   365,   360,    -1,   276,   359,   365,
     361,   365,   360,    -1,   277,   359,   365,   361,   365,   360,
      -1,   278,   359,   365,   361,   365,   360,    -1,   279,   359,
     365,   360,    -1,   280,   359,   365,   360,    -1,   281,   359,
     365,   360,    -1,   282,   359,   365,   361,   365,   360,    -1,
     282,   359,   365,   360,    -1,   283,   359,   365,   361,   365,
     360,    -1,   284,   359,   365,   360,    -1,   285,   359,   365,
     361,   365,   360,    -1,   286,   359,   360,    -1,   287,   359,
     365,   360,    -1,   288,   359,   365,   360,    -1,   289,   359,
     365,   360,    -1,   290,   359,   360,    -1,   270,   359,   360,
      -1,   263,   359,   365,   361,   365,   360,    -1,   264,   359,
     365,   360,    -1,   265,   359,   365,   360,    -1,   266,   359,
     365,   360,    -1,   267,   359,   365,   360,    -1,   268,   359,
     365,   360,    -1,   269,   359,   365,   360,    -1,   329,   359,
     365,   361,   365,   360,    -1,   330,   359,   365,   360,    -1,
     331,   359,   365,   360,    -1,   332,   359,   365,   360,    -1,
     333,   359,   365,   360,    -1,   334,   359,   365,   360,    -1,
     335,   359,   365,   360,    -1,   336,   359,   365,   360,    -1,
     337,   359,   365,   360,    -1,   338,   359,   365,   361,   365,
     361,   365,   360,    -1,   339,   359,   365,   361,   365,   361,
     365,   360,    -1,   340,   359,   365,   361,   365,   361,   365,
     360,    -1,   341,   359,   365,   361,   365,   360,    -1,   342,
     359,   365,   361,   365,   360,    -1,   343,   359,   365,   361,
     365,   361,   365,   360,    -1,   344,   359,   365,   361,   365,
     361,   365,   360,    -1,   345,   359,   365,   361,   365,   360,
      -1,   345,   359,   365,   361,   365,   361,   365,   361,   365,
     360,    -1,   346,   359,   365,   360,    -1,   346,   359,   365,
     361,   365,   360,    -1,   346,   359,   365,   361,   365,   361,
     365,   360,    -1,   347,   359,   365,   360,    -1,   349,   359,
     365,   360,    -1,   350,   359,   365,   360,    -1,   351,   359,
     365,   361,   365,   360,    -1,   351,   359,   365,   361,   365,
     361,   365,   360,    -1,   352,   359,   360,    -1,   291,   359,
     365,    43,   505,   360,    -1,   292,   359,   365,   361,   505,
     360,    -1,   293,   359,   365,   361,   365,   360,    -1,   294,
     359,   365,   361,   365,   360,    -1,   295,   359,   365,   361,
     365,   361,   365,   360,    -1,   365,    15,   296,    -1,   307,
     359,   365,   361,   365,   361,   365,   360,    -1,   307,   359,
     365,   361,   365,   361,   365,   361,   365,   360,    -1,   310,
     359,   360,    -1,   311,   359,   360,    -1,   312,   359,   360,
      -1,   313,   359,   360,    -1,   314,   359,   360,    -1,   315,
      -1,   316,    -1,   317,   359,   365,   360,    -1,   318,   359,
     365,   361,   365,   360,    -1,   162,    -1,   233,    -1,    57,
      -1,   261,   359,   365,   361,   398,   360,    -1,   262,   359,
     365,   361,   398,   360,    -1,   152,   365,   255,    -1,   152,
     365,    95,    -1,   152,   365,    96,    -1,   152,   365,   100,
      -1,   152,   365,   102,    -1,   152,   365,   256,    -1,   152,
     365,   136,    -1,   152,   365,   135,    -1,   152,   365,   138,
      -1,    69,   365,   399,   115,    -1,    69,   365,   399,   116,
     365,   115,    -1,    69,   399,   115,    -1,    69,   399,   116,
     365,   115,    -1,   252,   365,   232,   365,    -1,   399,   252,
     365,   232,   365,    -1,   365,    14,   365,    -1,   365,    18,
      14,   365,    -1,   365,    13,   365,    -1,   365,    18,    13,
     365,    -1,    64,    -1,    72,    -1,    73,    -1,   401,    -1,
     220,   419,   420,    -1,   220,   419,   420,   127,   423,   402,
     403,   407,   412,   415,   416,   417,    -1,   220,   419,   420,
     150,     3,   127,   423,   402,   403,   407,   412,   415,    -1,
      -1,   251,   365,    -1,    -1,   132,    55,   404,   406,    -1,
     365,   405,    -1,   404,   361,   365,   405,    -1,    -1,    41,
      -1,   103,    -1,    -1,   254,   198,    -1,    -1,   139,   365,
      -1,    -1,   328,    55,   409,    -1,     3,    -1,   409,   361,
       3,    -1,    -1,   182,    55,   411,    -1,     3,   405,    -1,
     411,   361,     3,   405,    -1,    -1,   182,    55,   413,    -1,
     414,    -1,   413,   361,   414,    -1,     3,   405,    -1,     3,
     358,     3,   405,    -1,     5,   405,    -1,    -1,   163,   365,
      -1,   163,   365,   361,   365,    -1,   163,   365,   165,   365,
      -1,    -1,   131,   237,    -1,   131,   209,    -1,   131,   237,
     210,   164,    -1,   131,   209,   210,   164,    -1,    -1,   150,
     418,    -1,     3,    -1,   418,   361,     3,    -1,    -1,   419,
      37,    -1,   419,    97,    -1,   419,   101,    -1,   419,   137,
      -1,   419,   217,    -1,   419,   205,    -1,   419,   213,    -1,
     419,   212,    -1,   421,    -1,   420,   361,   421,    -1,    26,
      -1,   365,   422,    -1,    43,     3,    -1,     3,    -1,    -1,
     424,    -1,   423,   361,   424,    -1,   425,    -1,   427,    -1,
       3,   422,   434,    -1,     3,   358,     3,   422,   434,    -1,
     437,   426,     3,    -1,   359,   423,   360,    -1,    43,    -1,
      -1,   424,   428,   154,   425,   432,    -1,   424,   217,   425,
      -1,   424,   217,   425,   181,   365,    -1,   424,   430,   429,
     154,   425,   433,    -1,   424,   174,   431,   154,   425,    -1,
      -1,   144,    -1,    68,    -1,    -1,   180,    -1,   161,    -1,
     199,    -1,   161,   429,    -1,   199,   429,    -1,    -1,    -1,
     433,    -1,   181,   365,    -1,   244,   359,   418,   360,    -1,
     245,   155,   435,   359,   436,   360,    -1,   145,   155,   435,
     359,   436,   360,    -1,   124,   155,   435,   359,   436,   360,
      -1,    -1,   131,   154,    -1,    -1,     3,    -1,   436,   361,
       3,    -1,   359,   401,   360,    -1,   438,    -1,    98,   439,
     127,     3,   402,   412,   415,   531,    -1,   439,   160,    -1,
     439,   187,    -1,   439,   145,    -1,    -1,    98,   439,   440,
     127,   423,   402,    -1,     3,   441,    -1,   440,   361,     3,
     441,    -1,    -1,   358,    26,    -1,    98,   439,   127,   440,
     244,   423,   402,    -1,   442,    -1,    99,   231,     3,    -1,
      99,   231,   147,   258,     3,    -1,   443,    -1,    65,   146,
       3,   181,     3,   359,   444,   360,    -1,    65,   129,   146,
       3,   181,     3,   359,   444,   360,    -1,    65,   146,   147,
     258,     3,   181,     3,   359,   444,   360,    -1,    65,   240,
     146,     3,   181,     3,   359,   444,   360,    -1,    65,   240,
     146,   147,   258,     3,   181,     3,   359,   444,   360,    -1,
      65,   146,     3,   181,     3,   244,   246,   359,   444,   360,
      -1,    65,   146,   147,   258,     3,   181,     3,   244,   246,
     359,   444,   360,    -1,    65,   240,   146,     3,   181,     3,
     244,   246,   359,   444,   360,    -1,    65,   240,   146,   147,
     258,     3,   181,     3,   244,   246,   359,   444,   360,    -1,
      65,   146,    77,     3,   181,     3,   359,   444,   360,    -1,
      65,   146,    77,   147,   258,     3,   181,     3,   359,   444,
     360,    -1,    65,   240,   146,    77,     3,   181,     3,   359,
     444,   360,    -1,    65,   240,   146,    77,   147,   258,     3,
     181,     3,   359,   444,   360,    -1,    65,   146,    77,     3,
     181,     3,   244,   246,   359,   444,   360,    -1,    65,   240,
     146,    77,     3,   181,     3,   244,   246,   359,   444,   360,
      -1,     3,    -1,   444,   361,     3,    -1,   445,    -1,   304,
     359,     3,   360,    -1,   305,   359,     3,   360,    -1,   306,
     359,     3,   360,    -1,   307,   359,     3,   361,     3,   360,
      -1,   446,    -1,    99,   146,     3,    -1,   447,   449,    -1,
     234,   231,     3,    -1,   234,   231,     3,   361,   448,    -1,
       3,    -1,   448,   361,     3,    -1,    -1,   449,    66,    -1,
     449,   194,    -1,   449,    47,    45,    -1,   449,    46,    45,
      -1,   450,    -1,   190,   231,     3,    -1,   451,    -1,    38,
     231,     3,    -1,    38,   231,     3,   358,     3,    -1,   452,
      -1,    34,   231,     3,    35,    63,     3,    70,   359,   365,
     360,    -1,    34,   231,     3,    35,    63,     3,   240,   359,
     498,   360,    -1,    34,   231,     3,    35,    63,     3,   125,
     155,   359,   495,   360,   191,     3,   359,   496,   360,   497,
      -1,    34,   231,     3,    35,    63,     3,    70,   359,   365,
     360,    18,   247,    -1,    34,   231,     3,    35,    63,     3,
     125,   155,   359,   495,   360,   191,     3,   359,   496,   360,
     497,    18,   247,    -1,    34,   231,     3,    35,    63,     3,
     185,   155,   359,   494,   360,    -1,    34,   231,     3,    99,
      63,     3,    -1,    34,   231,     3,   192,    63,     3,   224,
       3,    -1,    34,   231,     3,   111,    63,     3,    -1,    34,
     231,     3,    91,    63,     3,    -1,    34,   231,     3,   247,
      63,     3,    -1,    34,   231,     3,    35,    76,     3,   505,
     500,   453,    -1,    34,   231,     3,    99,    76,     3,    -1,
      34,   231,     3,    99,     3,    -1,    34,   231,     3,   192,
      76,     3,   224,     3,    -1,    34,   231,     3,   192,     3,
     224,     3,    -1,    34,   231,     3,   171,    76,     3,   505,
     500,   453,    -1,    34,   231,     3,   171,     3,   505,   500,
     453,    -1,    34,   231,     3,    67,    76,     3,     3,   505,
     500,   453,    -1,    34,   231,     3,    67,     3,     3,   505,
     500,   453,    -1,    -1,   121,    -1,    36,     3,    -1,   454,
      -1,   148,   462,   463,     3,   464,   249,   466,   455,   457,
     531,    -1,   148,   462,   463,     3,   464,   401,    -1,    -1,
      -1,   183,   155,   237,   456,   461,    -1,    -1,   181,    80,
     458,   459,    -1,    -1,   359,     3,   360,    -1,   359,     3,
     361,     3,    -1,    92,    82,    -1,    -1,    92,   237,   460,
     219,   461,    -1,     3,    20,   365,    -1,   461,   361,     3,
      20,   365,    -1,    -1,   462,   160,    -1,   462,    94,    -1,
     462,   137,    -1,   462,   145,    -1,   150,    -1,    -1,    -1,
     359,   465,   360,    -1,     3,    -1,   465,   361,     3,    -1,
     359,   468,   360,    -1,    -1,   466,   361,   467,   359,   468,
     360,    -1,   365,    -1,   104,    -1,   468,   361,   365,    -1,
     468,   361,   104,    -1,   148,   462,   463,     3,   219,   469,
     455,    -1,     3,    20,   365,    -1,     3,    20,   104,    -1,
     469,   361,     3,    20,   365,    -1,   469,   361,     3,    20,
     104,    -1,   470,    -1,   200,   462,   463,     3,   464,   249,
     466,   455,    -1,   200,   462,   463,     3,   219,   469,   455,
      -1,   200,   462,   463,     3,   464,   401,   455,    -1,   471,
      -1,    -1,    78,     3,   472,   473,   475,   476,   477,    -1,
      -1,   359,   474,   360,    -1,     3,    -1,   474,   361,     3,
      -1,   127,    -1,   224,    -1,     4,    -1,   215,    -1,   216,
      -1,    -1,   478,    -1,   254,   359,   478,   360,    -1,   359,
     478,   360,    -1,   479,    -1,   478,   361,   479,    -1,   126,
      79,    -1,   126,   228,    -1,    90,     4,    -1,   134,    -1,
     134,     6,    -1,   177,     4,    -1,   221,     4,    -1,    79,
      -1,   480,    -1,   237,   481,   423,   219,   482,   402,   412,
     415,   531,    -1,    -1,   462,   160,    -1,   462,   145,    -1,
       3,    20,   365,    -1,     3,   358,     3,    20,   365,    -1,
     482,   361,     3,    20,   365,    -1,   482,   361,     3,   358,
       3,    20,   365,    -1,   192,   231,     3,   224,     3,    -1,
     483,    -1,    65,    86,   484,     3,    -1,    65,   206,   484,
       3,    -1,    99,    86,     3,    -1,    99,    86,   147,   258,
       3,    -1,    99,   206,     3,    -1,    99,   206,   147,   258,
       3,    -1,    -1,   147,   258,    -1,   485,    -1,    65,    93,
       3,    43,   505,    -1,    65,    93,     3,    43,   505,   104,
     365,    -1,    65,    93,     3,    43,   505,    18,   177,    -1,
      65,    93,     3,    43,   505,    70,   359,   365,   360,    -1,
      65,    93,     3,    43,   505,    18,   177,    70,   359,   365,
     360,    -1,   486,    -1,   245,     3,    -1,   245,    86,     3,
      -1,   487,    -1,    65,   491,   231,   484,     3,   359,   492,
     360,   488,    -1,    65,   491,   231,   484,     3,   358,     3,
     359,   492,   360,   488,    -1,    -1,   488,    40,    20,     5,
      -1,   488,    40,     5,    -1,   488,   181,     3,    98,     3,
      -1,   488,   181,     3,   227,     3,    -1,   488,   207,    55,
     246,   359,     3,   360,   208,     5,    -1,   488,   207,    55,
     188,   359,     3,   360,   359,   489,   360,    -1,   490,    -1,
     489,   361,   490,    -1,   207,     3,   249,   158,   229,     4,
     181,   175,     5,    -1,   207,     3,   249,   158,   229,   168,
     181,   175,     5,    -1,    65,   491,   231,   484,     3,   359,
     492,   360,   507,    -1,    65,   491,   231,   484,     3,   507,
      -1,    65,   491,   231,   484,     3,   358,     3,   359,   492,
     360,   507,    -1,    65,   491,   231,   484,     3,   358,     3,
     507,    -1,    -1,   225,    -1,   226,   225,    -1,   493,    -1,
     492,   361,   493,    -1,   185,   155,   359,   494,   360,    -1,
      63,     3,   185,   155,   359,   494,   360,    -1,   155,   359,
     418,   360,    -1,   146,   359,   418,   360,    -1,   129,   146,
     359,   418,   360,    -1,   129,   155,   359,   418,   360,    -1,
      70,   359,   365,   360,    -1,    63,     3,    70,   359,   365,
     360,    -1,   125,   155,   359,   495,   360,   191,     3,   359,
     496,   360,   497,    -1,   125,   155,   359,   495,   360,   191,
       3,   358,     3,   359,   496,   360,   497,    -1,    63,     3,
     125,   155,   359,   495,   360,   191,     3,   359,   496,   360,
     497,    -1,    63,     3,   125,   155,   359,   495,   360,   191,
       3,   358,     3,   359,   496,   360,   497,    -1,   240,   359,
     498,   360,    -1,    63,     3,   240,   359,   498,   360,    -1,
       3,    -1,   494,   361,     3,    -1,     3,    -1,   495,   361,
       3,    -1,     3,    -1,   496,   361,     3,    -1,    -1,   497,
     181,    98,    66,    -1,   497,   181,    98,   219,   177,    -1,
     497,   181,    98,   194,    -1,   497,   181,    98,   219,   104,
      -1,   497,   181,   237,    66,    -1,   497,   181,   237,   219,
     177,    -1,   497,   181,   237,   194,    -1,   497,   181,   237,
     219,   104,    -1,   497,   181,    98,   176,    -1,   497,   181,
     237,   176,    -1,   497,   167,   128,    -1,   497,   167,   214,
      -1,   497,   167,   184,    -1,   497,    88,    -1,   497,    18,
      88,    -1,   497,    88,   142,    89,    -1,   497,    88,   142,
     140,    -1,     3,    -1,   498,   361,     3,    -1,    -1,   499,
       3,   505,   500,    -1,    -1,   500,    18,   177,    -1,   500,
     177,    -1,   500,   104,     4,    -1,   500,   104,     5,    -1,
     500,   104,     7,    -1,   500,   104,     6,    -1,   500,   104,
     310,   359,   360,    -1,   500,   104,   311,   359,   360,    -1,
     500,   104,   312,   359,   360,    -1,   500,   104,    64,    -1,
     500,   104,   359,   365,   360,    -1,   500,    40,    -1,   500,
      40,   359,     5,   361,     5,   360,    -1,   500,    40,   359,
       5,   360,    -1,   500,    45,   359,     5,   361,     5,   360,
      -1,   500,    45,   359,     5,   360,    -1,   500,    45,    -1,
     500,   240,   155,    -1,   500,   240,    -1,   500,   185,   155,
      -1,   500,   155,    -1,   500,    71,     4,    -1,   500,    70,
     359,   365,   360,    -1,   500,    63,     3,   240,    -1,   500,
      63,     3,   185,   155,    -1,   500,    63,     3,    70,   359,
     365,   360,    -1,   500,    48,    44,    43,   359,   365,   360,
      49,    -1,   500,    48,    44,    43,   359,   365,   360,    50,
      -1,   500,    48,    44,    43,   359,   365,   360,    -1,   500,
      43,   359,   365,   360,    49,    -1,   500,    43,   359,   365,
     360,    50,    -1,   500,    43,   359,   365,   360,    -1,    -1,
     359,     5,   360,    -1,   359,     5,   361,     5,   360,    -1,
      -1,    56,    -1,    -1,   503,   238,    -1,   503,   257,    -1,
      -1,   504,    74,   219,     4,    -1,   504,    75,     4,    -1,
      59,   501,    -1,   223,   501,   503,    -1,   218,   501,   503,
      -1,   173,   501,   503,    -1,   151,   501,   503,    -1,   143,
     501,   503,    -1,    58,   501,   503,    -1,   189,   501,   503,
      -1,   105,   501,   503,    -1,   123,   501,   503,    -1,   107,
     501,   503,    -1,   108,    -1,   236,    -1,   230,    -1,   106,
      -1,   255,    -1,    74,   501,   504,    -1,   248,   359,     5,
     360,   504,    -1,    56,   501,    -1,   250,   359,     5,   360,
      -1,   235,    -1,    53,    -1,   172,    -1,   166,    -1,   222,
     502,   504,    -1,   228,   502,   504,    -1,   169,   502,   504,
      -1,   159,   502,   504,    -1,   114,   359,   506,   360,   504,
      -1,   219,   359,   506,   360,   504,    -1,    54,    -1,   241,
      -1,   242,    -1,     4,    -1,   506,   361,     4,    -1,   508,
     426,   401,    -1,    -1,   145,    -1,   200,    -1,   509,    -1,
     219,   206,     3,    -1,   219,   206,   104,    -1,   219,   510,
      -1,   511,    -1,   510,   361,   511,    -1,     8,    20,   365,
      -1,     8,     9,   365,    -1,   512,    -1,    65,   186,     3,
     359,   513,   360,    43,    52,   517,   115,    -1,    65,   186,
       3,   359,   513,   360,    52,   517,   115,    -1,    65,    10,
     200,   186,     3,   359,   513,   360,    43,    52,   517,   115,
      -1,    65,    10,   200,   186,     3,   359,   513,   360,    52,
     517,   115,    -1,    65,   130,     3,   359,   513,   360,   197,
     516,    43,    52,   517,   115,    -1,    65,   130,     3,   359,
     513,   360,   197,   516,    52,   517,   115,    -1,    65,    10,
     200,   130,     3,   359,   513,   360,   197,   516,    43,    52,
     517,   115,    -1,    65,    10,   200,   130,     3,   359,   513,
     360,   197,   516,    52,   517,   115,    -1,    -1,   514,    -1,
     515,    -1,   514,   361,   515,    -1,     3,   505,    -1,    16,
       3,   505,    -1,   179,     3,   505,    -1,   141,     3,   505,
      -1,   143,    -1,   151,    -1,   248,    -1,   228,    -1,    54,
      -1,   123,    -1,   105,    -1,    58,    -1,   108,    -1,   230,
      -1,    -1,   517,   518,    -1,   517,    52,   517,   115,    -1,
     517,   147,   517,   115,   147,    -1,   517,   253,   517,   115,
     253,    -1,   517,   157,   517,   115,   157,    -1,   517,   122,
     517,   115,   122,    -1,   517,    69,   517,   115,    69,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
      20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,
      42,    -1,   220,    -1,   148,    -1,   237,    -1,    98,    -1,
     127,    -1,   251,    -1,   219,    -1,   150,    -1,   249,    -1,
      65,    -1,    99,    -1,   231,    -1,   146,    -1,   232,    -1,
     116,    -1,   110,    -1,    87,    -1,    92,    -1,    60,    -1,
     195,    -1,   156,    -1,   153,    -1,    62,    -1,   178,    -1,
     120,    -1,    61,    -1,   133,    -1,   118,    -1,   179,    -1,
     141,    -1,   131,    -1,    46,    -1,   202,    -1,   193,    -1,
     117,    -1,   204,    -1,    51,    -1,   109,    -1,   201,    -1,
     203,    -1,    43,    -1,   181,    -1,   182,    -1,    55,    -1,
     132,    -1,   139,    -1,   163,    -1,   165,    -1,   154,    -1,
     161,    -1,   199,    -1,   144,    -1,   180,    -1,   128,    -1,
      68,    -1,   174,    -1,   244,    -1,   177,    -1,   104,    -1,
     185,    -1,   155,    -1,   240,    -1,    70,    -1,   125,    -1,
     191,    -1,    66,    -1,   194,    -1,   176,    -1,   143,    -1,
     151,    -1,   248,    -1,   228,    -1,    54,    -1,   123,    -1,
     105,    -1,    58,    -1,   108,    -1,   230,    -1,   218,    -1,
     107,    -1,    74,    -1,   241,    -1,    53,    -1,   239,    -1,
     113,    -1,   149,    -1,    37,    -1,    97,    -1,   258,    -1,
     252,    -1,   254,    -1,   186,    -1,   130,    -1,   197,    -1,
     359,    -1,   360,    -1,   361,    -1,   357,    -1,   358,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      17,    -1,   362,    -1,   299,    -1,   300,    -1,   301,    -1,
     302,    -1,   303,    -1,     8,    -1,   519,    -1,    99,   186,
       3,    -1,    99,   186,   147,   258,     3,    -1,    99,   130,
       3,    -1,    99,   130,   147,   258,     3,    -1,   520,    -1,
      60,     3,   359,   360,    -1,    60,     3,   359,   521,   360,
      -1,   522,    -1,   521,   361,   522,    -1,     5,    -1,     4,
      -1,     7,    -1,   177,    -1,     6,    -1,     3,    -1,     8,
      -1,   523,    -1,    65,   203,     3,   524,   525,   181,     3,
     131,   109,   201,    52,   517,   115,    -1,    51,    -1,    36,
      -1,   148,    -1,   237,    -1,    98,    -1,   526,    -1,    99,
     203,     3,    -1,    99,   203,   147,   258,     3,    -1,    34,
     203,     3,   111,    -1,    34,   203,     3,    91,    -1,   527,
      -1,    65,   348,   484,     3,   528,    -1,    -1,   528,   529,
      -1,   353,   254,     5,    -1,   353,     5,    -1,   354,    55,
       5,    -1,   354,     5,    -1,   355,     5,    -1,   168,     5,
      -1,   356,    -1,    18,   356,    -1,   530,    -1,    99,   348,
       3,    -1,    99,   348,   147,   258,     3,    -1,    34,   348,
       3,   528,    -1,    34,   348,     3,    47,    -1,    34,   348,
       3,    47,   254,     5,    -1,    34,   348,     3,   192,   224,
       3,    -1,    -1,   196,    26,    -1,   196,   532,    -1,     3,
      -1,   532,   361,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   427,   427,   428,   433,   440,   441,   442,   456,   457,
     475,   483,   491,   497,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   530,   530,   539,   539,   541,   541,
     543,   543,   547,   548,   549,   550,   551,   554,   555,   558,
     559,   562,   563,   566,   566,   567,   567,   568,   568,   576,
     576,   584,   584,   595,   599,   600,   601,   602,   603,   604,
     605,   606,   610,   610,   612,   612,   614,   614,   617,   617,
     619,   619,   621,   621,   623,   623,   625,   625,   627,   627,
     630,   630,   632,   632,   634,   634,   636,   636,   638,   638,
     640,   640,   642,   642,   644,   644,   647,   647,   649,   649,
     651,   651,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   688,   690,   691,   692,   693,
     694,   695,   696,   697,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   722,   723,   724,   725,
     726,   728,   729,   731,   732,   733,   735,   736,   737,   738,
     745,   752,   759,   763,   767,   771,   775,   779,   785,   786,
     787,   790,   796,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   814,   816,   818,   820,   824,   832,   843,   844,
     847,   848,   851,   859,   867,   878,   888,   889,   902,   918,
     919,   920,   921,   924,   931,   939,   940,   941,   944,   945,
     948,   949,   953,   954,   957,   959,   963,   964,   967,   969,
     973,   974,   977,   978,   981,   987,   994,  1003,  1004,  1005,
    1006,  1009,  1010,  1011,  1012,  1013,  1016,  1017,  1020,  1021,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1035,
    1036,  1037,  1045,  1051,  1052,  1053,  1056,  1057,  1060,  1061,
    1065,  1072,  1073,  1074,  1077,  1078,  1082,  1084,  1086,  1088,
    1090,  1094,  1095,  1096,  1099,  1100,  1103,  1104,  1107,  1108,
    1109,  1112,  1113,  1116,  1117,  1121,  1123,  1125,  1127,  1130,
    1131,  1134,  1135,  1138,  1142,  1152,  1160,  1161,  1162,  1163,
    1167,  1171,  1173,  1177,  1177,  1179,  1184,  1191,  1198,  1208,
    1215,  1222,  1230,  1240,  1248,  1258,  1266,  1275,  1284,  1294,
    1302,  1311,  1320,  1330,  1339,  1351,  1356,  1361,  1367,  1374,
    1381,  1388,  1398,  1405,  1414,  1421,  1427,  1435,  1441,  1449,
    1450,  1451,  1452,  1453,  1457,  1464,  1473,  1480,  1486,  1497,
    1500,  1506,  1512,  1519,  1525,  1532,  1538,  1544,  1550,  1556,
    1562,  1568,  1574,  1580,  1586,  1592,  1598,  1604,  1610,  1616,
    1624,  1625,  1626,  1629,  1637,  1643,  1656,  1657,  1657,  1661,
    1662,  1665,  1666,  1667,  1671,  1672,  1672,  1676,  1684,  1694,
    1695,  1696,  1697,  1698,  1701,  1701,  1704,  1705,  1708,  1718,
    1731,  1732,  1732,  1735,  1736,  1737,  1738,  1741,  1745,  1746,
    1747,  1748,  1754,  1757,  1763,  1768,  1774,  1778,  1778,  1783,
    1784,  1786,  1787,  1791,  1792,  1796,  1797,  1798,  1801,  1802,
    1803,  1804,  1808,  1809,  1813,  1814,  1815,  1816,  1817,  1818,
    1819,  1820,  1824,  1832,  1841,  1842,  1843,  1847,  1858,  1870,
    1881,  1896,  1901,  1905,  1906,  1910,  1912,  1914,  1916,  1920,
    1921,  1927,  1931,  1933,  1935,  1937,  1939,  1944,  1948,  1949,
    1953,  1962,  1972,  1976,  1977,  1978,  1979,  1980,  1981,  1983,
    1987,  1988,  1991,  2006,  2013,  2028,  2041,  2056,  2069,  2070,
    2071,  2074,  2075,  2078,  2079,  2080,  2081,  2082,  2083,  2084,
    2085,  2086,  2088,  2090,  2092,  2094,  2096,  2100,  2101,  2104,
    2105,  2108,  2109,  2112,  2113,  2114,  2115,  2116,  2117,  2118,
    2119,  2120,  2121,  2122,  2123,  2124,  2125,  2126,  2127,  2128,
    2129,  2132,  2133,  2136,  2136,  2146,  2147,  2148,  2149,  2150,
    2151,  2152,  2153,  2154,  2155,  2156,  2157,  2164,  2165,  2166,
    2167,  2168,  2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,
    2177,  2178,  2179,  2180,  2181,  2182,  2183,  2184,  2187,  2188,
    2189,  2192,  2193,  2196,  2197,  2198,  2201,  2202,  2203,  2207,
    2208,  2209,  2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,
    2218,  2219,  2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,
    2228,  2229,  2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,
    2238,  2239,  2242,  2243,  2246,  2259,  2260,  2261,  2265,  2268,
    2269,  2270,  2271,  2271,  2273,  2274,  2282,  2286,  2292,  2298,
    2305,  2312,  2318,  2324,  2331,  2340,  2341,  2344,  2345,  2348,
    2349,  2350,  2351,  2354,  2355,  2356,  2357,  2358,  2359,  2360,
    2361,  2362,  2363,  2370,  2371,  2372,  2373,  2374,  2375,  2376,
    2377,  2380,  2381,  2382,  2382,  2382,  2383,  2383,  2383,  2383,
    2383,  2383,  2384,  2384,  2384,  2384,  2384,  2384,  2384,  2384,
    2384,  2385,  2385,  2385,  2385,  2385,  2385,  2385,  2386,  2386,
    2386,  2386,  2387,  2387,  2387,  2387,  2387,  2387,  2387,  2387,
    2387,  2387,  2387,  2387,  2388,  2388,  2388,  2388,  2388,  2388,
    2388,  2388,  2389,  2389,  2389,  2389,  2389,  2389,  2389,  2389,
    2390,  2390,  2390,  2390,  2390,  2390,  2390,  2390,  2390,  2391,
    2391,  2391,  2391,  2391,  2391,  2391,  2391,  2392,  2392,  2392,
    2393,  2393,  2393,  2393,  2393,  2393,  2393,  2393,  2394,  2394,
    2394,  2394,  2394,  2394,  2394,  2395,  2395,  2395,  2395,  2395,
    2395,  2395,  2396,  2396,  2396,  2396,  2397,  2397,  2397,  2397,
    2397,  2397,  2397,  2397,  2397,  2397,  2397,  2397,  2398,  2398,
    2398,  2398,  2398,  2399,  2406,  2410,  2416,  2422,  2428,  2440,
    2444,  2450,  2458,  2459,  2462,  2463,  2464,  2465,  2466,  2467,
    2468,  2475,  2479,  2487,  2488,  2491,  2492,  2493,  2496,  2500,
    2506,  2515,  2523,  2534,  2538,  2547,  2548,  2552,  2553,  2554,
    2555,  2556,  2557,  2558,  2559,  2562,  2566,  2572,  2582,  2589,
    2596,  2604,  2614,  2615,  2616,  2619,  2620
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
  "REFRESH", "DATABASE", "DECLARE", "DEFERRABLE", "DEFERRED", "DELIMITER",
  "DISABLE", "DO", "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND",
  "DISTINCT", "DELETE", "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND",
  "DESC", "DEFAULT", "DOUBLE", "DATETIME", "DECIMAL", "DATE", "EACH",
  "ELSEIF", "ENABLE", "ESCAPED", "EXCEPT", "ENUM", "END", "ELSE",
  "EXECUTE", "EXIT", "EXPLAIN", "FETCH", "FIRST", "FOREACH", "FLOAT",
  "FORCE", "FOREIGN", "FORMAT", "FROM", "FULL", "FULLTEXT", "FUNCTION",
  "FOR", "GROUP", "HANDLER", "HEADER", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INOUT",
  "INITIALLY", "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT",
  "INTERSECT", "INTO", "INT", "INTERVAL", "ITERATE", "JOIN", "KEY",
  "LEAVE", "LOOP", "LESS", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING",
  "LIMIT", "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE",
  "MEDIUMTEXT", "MINUS", "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL",
  "NODE", "NO_ACTION", "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER",
  "ONDUPLICATE", "PARTIAL", "PRIMARY", "PROCEDURE", "QUICK", "RANGE",
  "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT",
  "RETURN", "RETURNING", "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW",
  "SIGNAL", "TRIGGER", "UNTIL", "SQL_SMALL_RESULT", "SCHEMA", "SHARD",
  "SHARDS", "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "SIMPLE", "STDIN", "STDOUT", "STRAIGHT_JOIN",
  "SMALLINT", "SET", "SELECT", "QUOTE", "TINYTEXT", "TINYINT", "TO",
  "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT", "THAN", "TIMESTAMP", "TABLE",
  "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNION", "UNIQUE", "UUID", "JSON", "VIEW", "USING", "USE", "HASH",
  "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WHILE",
  "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING",
  "FTRIM", "FDATE_ADD", "FDATE_SUB", "FDATEDIFF", "FYEAR", "FMONTH",
  "FDAY", "FHOUR", "FMINUTE", "FSECOND", "FNOW", "FLEFT", "FRIGHT",
  "FLPAD", "FRPAD", "FREVERSE", "FREPEAT", "FINSTR", "FLOCATE", "FABS",
  "FCEIL", "FFLOOR", "FROUND", "FPOWER", "FSQRT", "FMOD", "FRAND", "FLOG",
  "FLOG10", "FSIGN", "FPI", "FCAST", "FCONVERT", "FNULLIF", "FIFNULL",
  "FIF", "UNKNOWN", "FGROUP_CONCAT", "SEPARATOR", "FCOUNT", "FSUM", "FAVG",
  "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE",
  "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "FSCOPE_IDENTITY", "FAT_IDENTITY",
  "FAT_LAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "FROW_NUMBER",
  "FRANK", "FDENSE_RANK", "FLEAD", "FLAG", "FNTILE", "FPERCENT_RANK",
  "FCUME_DIST", "OVER", "PARTITION", "FJSON_EXTRACT", "FJSON_UNQUOTE",
  "FJSON_TYPE", "FJSON_LENGTH", "FJSON_DEPTH", "FJSON_VALID", "FJSON_KEYS",
  "FJSON_PRETTY", "FJSON_QUOTE", "FJSON_SET", "FJSON_INSERT",
  "FJSON_REPLACE", "FJSON_REMOVE", "FJSON_CONTAINS", "FJSON_CONTAINS_PATH",
  "FJSON_SEARCH", "FJSON_OBJECT", "FJSON_ARRAY", "FJSON_ARRAYAGG",
  "SEQUENCE", "FNEXTVAL", "FCURRVAL", "FSETVAL", "FLASTVAL", "START",
  "INCREMENT", "MINVALUE", "CYCLE", "';'", "'.'", "'('", "')'", "','",
  "'='", "$accept", "stmt_list", "expr", "@1", "@2", "@3", "@4",
  "val_list", "opt_val_list", "@5", "@6", "@7", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21",
  "@22", "@23", "@24", "@25", "@26", "@27", "@28", "@29", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_window_partition", "window_partition_list",
  "opt_window_orderby", "window_orderby_list", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_for_update",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "drop_table_stmt", "create_index_stmt", "index_col_list",
  "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "truncate_extra_tables", "opt_truncate_options", "reclaim_table_stmt",
  "analyze_table_stmt", "alter_table_stmt", "opt_col_position",
  "insert_stmt", "opt_ondupupdate", "@30", "opt_on_conflict",
  "opt_conflict_target", "conflict_action", "@31", "upsert_asgn_list",
  "insert_opts", "opt_into", "opt_col_names", "insert_col_list",
  "insert_vals_list", "@32", "insert_vals", "insert_asgn_list",
  "replace_stmt", "copy_stmt", "@33", "opt_copy_cols", "copy_col_list",
  "copy_direction", "copy_target", "opt_copy_options", "copy_option_list",
  "copy_option", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_table_options",
  "shard_range_list", "shard_range_def", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list",
  "fk_column_list", "fk_ref_column_list", "fk_actions",
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
     596,   597,   598,   599,   600,   601,   602,    59,    46,    40,
      41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   363,   364,   364,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   366,   365,   367,   365,   368,   365,
     369,   365,   365,   365,   365,   365,   365,   365,   365,   370,
     370,   371,   371,   372,   365,   373,   365,   374,   365,   375,
     365,   376,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   377,   365,   378,   365,   379,   365,   380,   365,
     381,   365,   382,   365,   383,   365,   384,   365,   385,   365,
     386,   365,   387,   365,   388,   365,   389,   365,   390,   365,
     391,   365,   392,   365,   393,   365,   394,   365,   395,   365,
     396,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   397,   397,
     397,   365,   365,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   365,   365,   365,   365,   399,   399,   365,   365,
     365,   365,   365,   365,   365,   400,   401,   401,   401,   402,
     402,   403,   403,   404,   404,   405,   405,   405,   406,   406,
     407,   407,   408,   408,   409,   409,   410,   410,   411,   411,
     412,   412,   413,   413,   414,   414,   414,   415,   415,   415,
     415,   416,   416,   416,   416,   416,   417,   417,   418,   418,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   420,
     420,   420,   421,   422,   422,   422,   423,   423,   424,   424,
     425,   425,   425,   425,   426,   426,   427,   427,   427,   427,
     427,   428,   428,   428,   429,   429,   430,   430,   431,   431,
     431,   432,   432,   433,   433,   434,   434,   434,   434,   435,
     435,   436,   436,   437,   400,   438,   439,   439,   439,   439,
     438,   440,   440,   441,   441,   438,   400,   442,   442,   400,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   444,   444,   444,   445,   445,
     445,   445,   400,   446,   400,   447,   447,   448,   448,   449,
     449,   449,   449,   449,   400,   450,   400,   451,   451,   400,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     453,   453,   453,   400,   454,   454,   455,   456,   455,   457,
     457,   458,   458,   458,   459,   460,   459,   461,   461,   462,
     462,   462,   462,   462,   463,   463,   464,   464,   465,   465,
     466,   467,   466,   468,   468,   468,   468,   454,   469,   469,
     469,   469,   400,   470,   470,   470,   400,   472,   471,   473,
     473,   474,   474,   475,   475,   476,   476,   476,   477,   477,
     477,   477,   478,   478,   479,   479,   479,   479,   479,   479,
     479,   479,   400,   480,   481,   481,   481,   482,   482,   482,
     482,   400,   400,   483,   483,   400,   400,   400,   400,   484,
     484,   400,   485,   485,   485,   485,   485,   400,   486,   486,
     400,   487,   487,   488,   488,   488,   488,   488,   488,   488,
     489,   489,   490,   490,   487,   487,   487,   487,   491,   491,
     491,   492,   492,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   494,   494,   495,
     495,   496,   496,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   498,   498,   499,   493,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   501,   501,
     501,   502,   502,   503,   503,   503,   504,   504,   504,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   506,   506,   507,   508,   508,   508,   400,   509,
     509,   509,   510,   510,   511,   511,   400,   512,   512,   512,
     512,   512,   512,   512,   512,   513,   513,   514,   514,   515,
     515,   515,   515,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   517,   517,   517,   517,   517,   517,   517,
     517,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   400,   519,   519,   519,   519,   400,
     520,   520,   521,   521,   522,   522,   522,   522,   522,   522,
     522,   400,   523,   524,   524,   525,   525,   525,   400,   526,
     526,   400,   400,   400,   527,   528,   528,   529,   529,   529,
     529,   529,   529,   529,   529,   400,   530,   530,   400,   400,
     400,   400,   531,   531,   531,   532,   532
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
       1,     9,    11,     0,     4,     3,     5,     5,     9,    10,
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
       1,     1,     1,     3,     3,     0,     1,     1,     1,     3,
       3,     2,     1,     3,     3,     3,     1,    10,     9,    12,
      11,    12,    11,    14,    13,     0,     1,     1,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     4,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     3,     5,     3,     5,     1,
       4,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,    13,     1,     1,     1,     1,     1,     1,     3,
       5,     4,     4,     1,     5,     0,     2,     3,     2,     3,
       2,     2,     2,     1,     2,     1,     3,     5,     4,     4,
       6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   518,     0,   329,     0,   419,     0,
       0,   419,     0,   270,     0,   419,     0,     0,     0,   225,
     324,   336,   339,   362,   369,   374,   376,   379,   403,   442,
     446,   472,   482,   491,   497,   500,   648,   656,   814,   819,
     831,   838,   843,   855,     0,     0,     0,     0,     0,     0,
     489,     0,     0,     0,     0,     0,     0,   489,   519,     0,
       0,   489,     0,   447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   425,     0,     0,   425,     0,     0,   651,
     652,     0,     0,     0,     0,   498,     0,     1,     2,   364,
       0,     0,   845,   377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   520,     0,     0,
     489,   449,   333,     0,   328,   326,   327,     0,   485,     0,
     817,     0,   363,   815,     0,   839,     0,   487,     0,   337,
       0,   856,     0,   421,   422,   423,   424,   420,     0,   375,
       0,     0,     0,     0,   649,   650,     0,     4,     9,    10,
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
     370,   371,   842,   841,     0,     0,     0,     0,     0,     0,
       0,     0,   859,     0,   858,     0,   829,   825,   824,   828,
     826,   830,   827,   820,     0,   822,     0,     0,   490,   483,
       0,     0,   665,     0,     0,     0,     0,   665,   834,   833,
       0,   484,     0,     0,     0,   845,     0,     0,     0,     0,
     331,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   426,     0,   426,   655,   654,   653,     0,    51,
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
       0,     0,     0,     0,     0,     0,     0,   853,   846,   378,
     821,     0,     0,     0,   630,   639,   598,   598,   598,   598,
     598,   623,   598,   620,     0,   598,   598,   598,   601,   632,
     601,   631,   598,   598,   598,     0,   601,   598,   601,   622,
     629,   621,   640,   641,     0,     0,   624,   492,     0,     0,
       0,     0,     0,     0,   666,   667,     0,     0,     0,     0,
       0,   837,   835,   836,     0,     0,     0,     0,     0,   844,
     645,   451,     0,   453,   454,     0,   334,     0,   250,     0,
     229,   333,   486,   818,   816,   840,   488,   338,   857,     0,
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
       0,   389,   386,   392,   388,   565,     0,     0,     0,     0,
     390,   860,   861,   854,   852,   848,     0,   850,     0,   851,
     823,   665,   665,     0,   627,   603,   609,   606,   603,   603,
       0,   603,   603,   603,   602,   606,   606,   603,   603,   603,
       0,   606,   603,   606,     0,     0,     0,     0,     0,     0,
     669,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   646,   647,     0,
     563,   515,   295,   450,     0,   455,   456,   457,   458,   230,
       0,   257,   229,   330,   332,     0,   406,   428,     0,     0,
     405,   406,     0,   406,     0,    63,     0,   212,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   148,   149,   150,   151,   152,   153,     0,     0,     0,
       0,   129,     0,     0,     0,   133,   134,   135,   137,     0,
       0,   139,     0,   142,   143,   144,     0,     0,     0,     0,
       0,     0,    70,    64,    65,    66,    67,    68,    69,   119,
     120,   121,     0,     0,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,   172,     0,   175,   176,   177,     0,
      45,    43,     0,     0,   221,   219,    55,     0,     0,    40,
      36,    38,     0,   231,     0,     0,   318,   320,   320,   320,
       0,     0,     0,   250,   308,   309,     0,     0,   311,     0,
       0,     0,     0,     0,   565,   565,     0,   400,   565,   395,
       0,     0,   847,   849,     0,     0,     0,   615,   625,   617,
     619,   642,     0,   618,   614,   613,   636,   635,   612,   616,
     611,     0,   633,   610,   634,     0,     0,   494,     0,   493,
       0,   670,   672,   671,     0,   668,     0,   355,     0,     0,
       0,     0,     0,   357,     0,     0,     0,     0,     0,   683,
       0,     0,     0,     0,     0,     0,   645,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   521,     0,     0,   452,
     471,     0,     0,   467,     0,     0,     0,     0,   448,   459,
     462,     0,     0,   862,   335,     0,     0,     0,   437,   427,
       0,     0,   406,   444,   406,   445,    50,   216,     0,   215,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    74,    76,
       0,     0,     0,     0,     0,   108,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,   240,
     229,   368,   291,     0,     0,     0,     0,   477,     0,     0,
     257,   300,   298,     0,     0,   296,   312,     0,     0,     0,
       0,     0,   400,   400,   565,     0,     0,   577,     0,   582,
       0,     0,     0,     0,     0,   401,   586,   567,     0,   584,
     397,   400,   387,   394,     0,     0,   599,     0,   604,   605,
       0,     0,   606,     0,   606,   606,   628,     0,     0,     0,
     677,   680,   679,   681,   678,   673,   674,   676,   682,   675,
       0,     0,     0,     0,     0,     0,   340,     0,     0,     0,
       0,     0,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,   563,   517,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   503,   563,     0,   644,   466,   464,   465,
     468,   469,   470,     0,     0,     0,   235,   235,   251,   252,
     258,     0,   325,   439,   438,     0,     0,   429,   434,   433,
       0,   431,   409,   443,   213,   217,     0,     0,   114,   113,
       0,   118,     0,     0,   201,   202,   147,   125,   126,     0,
       0,   130,   131,   132,   136,   138,   140,   181,   182,   183,
     184,     0,    71,    80,    82,    78,    84,    86,    88,   122,
       0,     0,   124,   197,   242,   242,   242,    90,     0,     0,
      98,     0,     0,   106,   242,   242,   154,     0,     0,     0,
     166,   167,     0,     0,   170,     0,   173,     0,   178,     0,
      54,    58,     0,     0,    48,     0,     0,     0,    35,     0,
       0,   250,   231,   319,     0,     0,     0,     0,     0,     0,
     862,   313,     0,   299,     0,     0,     0,   561,     0,   391,
     399,   400,   566,   402,     0,     0,     0,     0,     0,     0,
     587,   568,   569,   571,   570,   575,     0,     0,     0,     0,
     585,   583,   396,     0,     0,   683,     0,     0,   608,   637,
     643,   638,   626,     0,   495,   341,     0,   683,     0,     0,
       0,     0,     0,   356,     0,   349,     0,     0,     0,     0,
     691,   692,   693,   695,   694,   813,   698,   699,   700,   806,
     697,   696,   801,   802,   803,   804,   805,   788,   701,   742,
     733,   738,   683,   784,   774,   745,   777,   720,   727,   724,
     711,   767,   756,   683,   764,   782,   718,   719,   789,   705,
     712,   760,   776,   781,   778,   739,   717,   786,   658,   716,
     736,   729,   726,   683,   775,   765,   706,   755,   794,   732,
     746,   728,   747,   731,   770,   753,   714,   683,   703,   787,
     709,   771,   723,   750,   762,   722,   683,   751,   748,   749,
     757,   769,   759,   725,   730,   754,   743,   744,   761,   793,
     766,   735,   768,   721,   795,   752,   740,   734,   741,   737,
     780,   708,   702,   773,   779,   713,   715,   704,   785,   763,
     783,   758,   772,   710,   707,   791,   683,   792,   790,   808,
     809,   810,   811,   812,   799,   800,   796,   797,   798,   807,
     684,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   268,     0,
       0,     0,     0,   501,   514,   522,   565,     0,   461,   463,
     236,   237,     0,   254,   256,     0,     0,     0,   865,   863,
     864,   407,     0,   430,     0,     0,     0,   862,     0,     0,
       0,   117,   204,   205,   206,   207,   210,   209,   211,   203,
     208,     0,     0,     0,   242,   242,   242,   242,   242,   242,
       0,     0,     0,   246,   246,   246,   242,     0,     0,     0,
     242,     0,     0,     0,   242,   246,   246,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    60,    41,    37,    39,
     235,   238,   241,   257,   240,   321,     0,     0,     0,   478,
     479,     0,   473,     0,   380,   539,     0,   537,     0,   381,
       0,   398,     0,     0,     0,     0,     0,     0,   589,     0,
       0,     0,     0,     0,     0,   683,     0,   600,   607,     0,
     683,     0,   345,   358,   359,   360,     0,     0,     0,     0,
     342,   657,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,     0,     0,     0,   503,     0,     0,     0,     0,
     529,     0,     0,     0,   526,     0,   525,     0,   535,     0,
       0,     0,   564,   460,   235,   253,   260,   259,     0,     0,
     441,   440,   436,   435,     0,   411,   404,     7,   115,   112,
     127,   128,   185,   246,   246,   246,   246,   246,   246,   187,
       0,   123,     0,     0,     0,     0,     0,   246,    92,     0,
       0,   246,   100,     0,     0,   246,     0,     0,   163,   164,
     165,   168,   169,     0,   174,   179,   233,     0,     0,   232,
     261,   250,   317,     0,   316,   315,     0,   314,     0,     0,
       0,   385,     0,   562,   579,     0,   597,   581,     0,     0,
       0,   590,   588,   572,   573,   574,   576,     0,   683,     0,
     660,   496,     0,   662,     0,   353,   350,     0,   685,     0,
       0,     0,     0,     0,   683,   347,     0,     0,     0,   344,
     502,   516,     0,     0,     0,     0,     0,   527,   528,   269,
     523,   505,     0,     0,     0,   255,   866,     0,   408,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     243,     0,    73,    75,    77,     0,   242,     0,     0,     0,
     242,     0,     0,     0,   109,   111,     0,   239,   235,     0,
     266,   257,   322,   480,   383,     0,   540,   538,     0,   595,
     596,     0,     0,     0,   683,     0,   659,   661,   361,   346,
     690,   689,   686,   688,   687,     0,   354,   352,     0,   530,
       0,     0,   536,     0,   504,     0,     0,     0,     0,     0,
       0,   432,     0,     0,   410,    81,    83,    79,    85,    87,
      89,   188,     0,   235,   247,    91,   246,    94,    96,    99,
     246,   102,   104,   107,   171,   234,   263,   262,     0,   227,
     228,     0,   578,   580,   594,   591,     0,   664,   832,   348,
       0,   524,     0,   506,   507,     0,     0,   417,     0,   412,
       0,   414,   415,   245,   248,     0,     0,   242,   242,     0,
     242,   242,     0,     0,   267,     0,   592,   593,   663,     0,
       0,     0,     0,     0,     0,   413,     0,   235,    93,   246,
     246,   101,   246,   246,   265,   264,   541,     0,     0,     0,
       0,     0,     0,   418,     0,   249,     0,     0,     0,     0,
     543,     0,     0,     0,     0,   543,     0,     0,   416,    95,
      97,   103,   105,   382,   542,     0,     0,     0,   531,     0,
       0,   510,   508,     0,   557,     0,     0,     0,   543,   543,
       0,     0,   509,     0,   558,   384,     0,   554,   556,   555,
       0,     0,     0,   533,   532,     0,   511,   559,   560,   544,
     552,   546,     0,   548,   553,   550,     0,   543,     0,   547,
     545,   551,   549,   534,     0,     0,     0,     0,     0,     0,
       0,   512,   513
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   606,   972,  1165,  1166,  1164,   607,   608,   962,
    1160,   963,  1161,   617,  1344,  1345,  1346,  1646,  1644,  1645,
    1647,  1648,  1649,  1656,  1906,  2017,  2018,  1660,  1910,  2020,
    2021,  1664,  1354,  1355,   623,  1108,   356,    18,    19,   588,
    1169,  1681,  1613,  1819,  1381,  1653,  1900,  1794,  1974,   851,
    1288,  1289,  1083,  1920,  1989,  1599,    81,   264,   265,   472,
     271,   272,   273,   492,   274,   489,   765,   490,   761,  1185,
    1186,   753,  1174,  1686,   275,    20,    64,   117,   330,    21,
      22,  1042,  1043,    23,    24,   748,    89,    25,    26,    27,
    1210,    28,  1088,  1769,  1627,  1891,  1964,  2036,  1888,    73,
     138,   601,   858,  1092,  1625,  1300,   856,    29,    30,   111,
     328,   582,   585,   848,  1078,  1079,  1080,    31,    84,   757,
      32,    97,    33,    34,    35,  1603,  2080,  2081,    62,  1065,
    1066,  1698,  1696,  2047,  2073,  1398,  1067,   997,   794,   805,
    1007,  1008,   557,  1012,   841,   842,    36,    79,    80,    37,
     563,   564,   565,  1240,  1254,  1580,    38,    39,   304,   305,
      40,   320,   574,    41,    42,   294,   518,    43,  1292,  1620
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1947
static const yytype_int16 yypact[] =
{
   10855,   -99,  -120,   126, 10678,   523, -1947,   324, -1947,    79,
     288, -1947,    25, -1947,   300,    39,    84,   536,   192, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947,   682,   702,   706,   717,   225,   522,
     483,   721,   597,   731,    91,   776,   781,   483, -1947,   561,
     648,   483,   560, -1947,    90,   195,   248,   793,   269,   275,
     327,   332,   334,   543,   800,   802,   543,   534,    65,   449,
   -1947,  6182,   817,   539,    40, -1947,   823, -1947, 10855,    70,
     430,    29,    37,   497,    32,   -33,   572,   841,   836,   881,
     527,   722,   337,   640,   548,   435,   909, -1947,   128,   933,
     483,   606,   625,   986, -1947, -1947, -1947,  -105, -1947,   740,
   -1947,   751, -1947, -1947,   760, -1947,   766, -1947,   799, -1947,
     815, -1947,   843, -1947, -1947, -1947, -1947, -1947,  1031, -1947,
     879,  1103,  9682,  9682, -1947, -1947,  1111,  -237, -1947, -1947,
   -1947, -1947,  1135,  9682,  9682,  9682, -1947, -1947, -1947,  7232,
   -1947, -1947,   810, -1947, -1947, -1947,   801, -1947, -1947, -1947,
   -1947, -1947,   826,   834,   866,   878,   899,   913,   916,   924,
     926,   928,   941,   942,   943,   944,   945,   946,   964,   966,
     967,   968,   970,   971,   972,   981,   983,   984,   985,   989,
     991,   992,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1008,  1009,  1010,  1011,  1014,  1015,  1020,  1026,  1027,  1029,
    1033,  1034,  1037,  1043,  1058,  1059,  1060, -1947, -1947,  1061,
    1063,  1070,  1071,  1072,  1073,  1076,  1081,  1082,  1084,  1089,
    1091,  1094,  1096,  1099,  1105,  1106,  1107,  1108,  1110,  1112,
    1115,  1122,  1130,  1132,  1134,  1136,  1137,  1138,  1139,  1140,
    1141,  1142,  9682, 11300,   -96, -1947,   873,    42,    43,    17,
      38,   185,   341, -1947, -1947,  1210, -1947, -1947,  1331,  1378,
   -1947, -1947, -1947, -1947,   397,    73,  1439,    88,  1441,    89,
     472,  1450,  1262,  1293,    92,  1515, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947,   285, -1947,  1516,  1518, -1947, -1947,
   10998,  1344,    74,  1524,  1348,  1276,  1535,    74, -1947, -1947,
     307, -1947,  1358,   400,  1282, -1947,  1539,  1541,   326,  1519,
   -1947,   370,  -159,    40,  1543,  1547,  1548,  1549,  1550,  1551,
    1552,  1553,  -148,  1555,  -140, 11412, 11412, -1947,  1559,  9682,
    9682,  1190,  1190, -1947,  9682, 10727,   361,  1560,  1561, -1947,
    9682,  6532,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,
    9682,  1205,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,
    9682,  9682,  9682,  9682,  9682,  9682,  9682,  1207,  9682,  9682,
    9682,  1211,  9682,  9682,  9682,  9682,  9682,  9682,  7582,  9682,
    9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  1212,
    1214,  1215,  1216,  1219,  9682,  9682,  1224,  1225,  1226,  9682,
    9682,  1583,  1229,  1237,  9682,  9682,  9682,  9682,  9682,  9682,
    9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,
    9682,  9682,  9682,  9682,  9682,  9682,  1264,  2682, -1947,  9682,
    9682,  9682,  9682,  9682,    77,  1266,   713,  9682,  6882,  9682,
    9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,  9682,
    9682,  1623, -1947,    40,  1624,  9682,  1630,  1631,   294,  1321,
     313,  1639,    40, -1947, -1947, -1947,   338, -1947,    40,  1528,
    1503, -1947,  1681, -1947, -1947,  1682,  1689,  1691,  1693,  1694,
   -1947,  1695,  1696,  1697, 10998,  1698,  1471,  1722,  1723,  1724,
    1725,  1726,  1372,  1728,    20,    95,  1729, -1947, -1947, -1947,
   -1947,   459,  1376,  1377, -1947, -1947,  1379,  1379,  1379,  1379,
    1379, -1947,  1379, -1947,  1388,  1379,  1379,  1379,  1675, -1947,
    1675, -1947,  1379,  1379,  1379,  1390,  1675,  1379,  1675, -1947,
   -1947, -1947, -1947, -1947,  1391,  1392, -1947,   441,  1752, 10998,
    1754,  1762,  1763,  1407,  1408, -1947,  -156,  1765,  1767,  1590,
    1412, -1947, -1947, -1947,  1593,  1772,  1595,  1522,  1774,    92,
    -111, -1947,   331, -1947, -1947,    46, -1947,  9682,  1599,    40,
    -133,   625, -1947, -1947, -1947, -1947, -1947, -1947, -1947,  1780,
    1781,   271, -1947,  1780,   398, -1947,  1151, -1947,  1425, 11412,
   10762,   367, -1947,  9682,  9682, -1947,  1426,  1572,   550, -1947,
   -1947, -1947,  3008,  7932,  1176,  1580,  1625,  3334,  3660,  3986,
    4312,  4638,  4964, -1947,  1648,  1692,  1992,  2311,  5290,  2637,
    2963,  3289,  5616,  7658,  7685,   164,  3615,  7756,  3941, -1947,
    7780,  7803,  7951, -1947, 11326,  4267,  4593,  4919,  5245,  2356,
    1433,  8009,  8042,  8065,  8107,  8146,  8302,  8369,  8408,  5571,
    5897,  5942, -1947, -1947, -1947, -1947, -1947,  8450,  6286,  1468,
    1472,  1473,   577,   639,  1443,  1480,  1481,  6342,  8473,  8497,
    8653,  8696,  8727,  8751,  8816,  8840,  6390,  6548,  6596,  6630,
    6653,  6700,  6748,  6912,   744,  9004,  9078,  9102,  6954, -1947,
   -1947,  7451,  7714,  6974,  9046,  9046, -1947,    49, -1947, -1947,
    1589,  9682,  9682,  1452,  9682, 11362,  1453,  1454,  1455,  9682,
    1383,  1591,  1217,  1265,   832,   832,   115,   115,   115,   115,
     684, -1947, -1947, -1947,  -133,  1688, -1947, -1947,  1456,   111,
    1661,  1663,  1664, -1947, -1947, -1947,     7,   157,   341,  1503,
    1503,  1666,  1640,    40, -1947,  1668, -1947,    31, 10998, 10998,
    1821, -1947, -1947, -1947, -1947, -1947, 10998,  1822,  1602,  1603,
   -1947, -1947, -1947, -1947, -1947, -1947,  1824, -1947,  1825, -1947,
   -1947,    74,    74,  1826, -1947, -1947, -1947, -1947, -1947, -1947,
    1828, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
    1828, -1947, -1947, -1947,  1831,  1832,  1662,  1479,  9682,  1483,
   -1947, 10998, 10998, 10998,  1650,    74,  1604,   145,   -92,  1667,
    1852,   471,  1854,   -89,  1857,  1859,  1684, -1947, -1947,  1867,
      12, -1947,  1210, -1947,  1868, -1947, -1947, -1947,   654, 11412,
    1817,  1710,  -133, -1947, -1947,  1856,  -139, -1947,   358,  1529,
   -1947,  -139,  1529,  1711,  9682, -1947,  9682, -1947,  9682, 11170,
   11009,  1791,  1521,  9682,  9682, -1947,  9682, 11104,  1743,  1743,
    9682, -1947, -1947, -1947, -1947, -1947, -1947,  9682,  9682,  9682,
    9682, -1947,  9682,  9682,  9682, -1947, -1947, -1947, -1947,  9682,
    9682, -1947,  9682, -1947, -1947, -1947, 10998, 10998,  9682,  9682,
    9682,  1892, -1947,  1571,  1573,  1575,  1576,  1577,  1578, -1947,
   -1947, -1947,  9682,  9682,  9682, -1947,  9682,  1564,  1565,  1566,
    1579,  1902,  1581,  1904,  1584,  1567,  1569,  9682, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947,  9682,  9682,  9682,  9682,
    9682,  9682,  9682,  9682, -1947,  9682, -1947, -1947, -1947,  9682,
   -1947, -1947,  9682,  1572,  9046,  9046,  1699, 11387,  9682, -1947,
   -1947, -1947,  1572,  1788,    40,  1929,   294,  1803,  1803,  1803,
    9682,  1933,  1939,  1599, -1947, -1947,    40,  9682,   -82,    40,
    1585,  1790,  1792,  1587, -1947, -1947, 10998, 10804, -1947, -1947,
    1940,  1945, -1947, -1947,  1592,  1597,   375,   -94,   665,   -94,
     -94, -1947,   381,   -94,   -94,   -94,   665,   665,   -94,   -94,
     -94,   386,   665,   -94,   665,  1598,  1600,  1879,  9682, 11412,
     145, -1947, -1947, -1947,   574, -1947,  1606, -1947,  1610,  1611,
    1612,  1613,   388, -1947,  1704,   145,  1948,   163,  1907, -1947,
    1830,  1716,   145,   264,  1782,  1971,  -119,  1975,  1620,  1827,
     489,  1622,  1632,  1837,  1634,   390, -1947,  1980,  1572, -1947,
   -1947,  1991,   -27,  1990,  1993,  1994,  1641,   604, -1947,  1638,
   -1947,   709,  9682,  1805, -1947,  8282,  1870,  2023, -1947, -1947,
    2024,  8632,  -136, -1947,  -136, -1947, -1947, 11412, 11244, -1947,
    9682,  1669, -1947,  7600,   903,  9142,  9682,  9682,  1670,  1671,
    9167,  9191,  9355,  6997,  7052,  9396,  9429,  9453,  9510,  9534,
    9557,  1672,  1673,  9698,  9754,  7076,  1674,  1683,  1685,  1686,
    1687,  1690,  1700,   948,  7100,  9780,  9804, -1947, -1947, -1947,
    1701,   417,  1702,   422,  1703, -1947, -1947,  9853,  7256,  7306,
    7341,  9877,  9900,  7364,  7404,  1017,  1040,  1064,  1680,  1713,
    9682,  1572,  9682,  1290,  1572,  1572,  1572,  1715,  1974,  1908,
    -133, -1947, -1947,  1887,  1705,  1712,  1717, 11412,  2028,    33,
    1710, -1947, 11412,  9682,  1718, -1947, -1947,   -82,  9682,  1732,
    1733,  2040, 10804, 10804, -1947,  1873,  2048,  1741,  1742,  1744,
    2008,  2051,  1747,  2052,   102, -1947, -1947, -1947,  1900,  1903,
   -1947, 10804, -1947, -1947,  1860,   635, -1947,  2058, -1947, -1947,
    1862,  2079, -1947,  2080, -1947, -1947, -1947,  1748, 10041,   429,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
     652,   145,  2082,  2099,  2106,  2107, -1947,  2108,  1753,   454,
    1759,  1875,   145, -1947,  1329,  2010,  1766,   456,  1880,   145,
    2126,   265,    12, -1947,   371,  9682,  1775,  1776,  1778,  2130,
    2130,  1779,  2040,    14,    12, 10998, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947,   604,   463,   604,   -17,   431,  1783, -1947,
    1102,   112, -1947, -1947, 11412,  1905,  2119, -1947, -1947, 11412,
     475, -1947,  1959, -1947, -1947, 11412,  2137,  9682, -1947, -1947,
    9682, -1947, 10064, 10701, -1947, -1947, -1947, -1947, -1947,  9682,
    9682, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947,  9682, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
    9682,  9682, -1947, -1947,  1815,  1815,  1815, -1947,  1818,   828,
   -1947,  1819,   833, -1947,  1815,  1815, -1947,  9682,  9682,  9682,
   -1947, -1947,  9682,  9682, -1947,  9682, -1947,  9682, -1947,  9682,
   -1947, -1947,  1787,  1793,  1290,  1795,  1796,  1797, -1947,  9682,
    9682,  1599,  1788, -1947,  2145,  2145,  2145,  9682,  9682,  2147,
    1805, 11412,  2130, -1947, 10097,  2148,  2149, -1947,   486, -1947,
   -1947, 10804, -1947, -1947,  2153,  9682,  2157,  2120,   372,  9682,
   -1947, -1947, -1947, -1947, -1947, -1947,  1806,  1809,  1814,  9682,
   -1947, -1947, -1947,   574,  2112, -1947,  1816,  2170, -1947,   665,
   -1947,   665,   665,  9682, -1947, -1947,  2129, -1947,   488,  1823,
    1836,  1838,  1839, -1947,   145, -1947,   145,  1829,   491,  1736,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947,  1985,   145, -1947,  1840,   493,  1843,  1951,   145,   516,
    1845,  2036,  2059,  1848, 10123,  2148,  2130,  2130, -1947,   531,
     533,  2149,   541,    26, -1947, -1947, -1947,   544, -1947, -1947,
   -1947, -1947,  2217, -1947, -1947,   709,  9682,  9682, -1947, -1947,
    1861, -1947,  8982, -1947,  9332,  1865,  2141,  1805,  1866, 10147,
   10170, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, 10196, 10220, 10243,  1815,  1815,  1815,  1815,  1815,  1815,
    1127, 10266,  2173,  2047,  2047,  2047,  1815,  1871,  1872,  1874,
    1815,  1876,  1877,  1885,  1815,  2047,  2047, 10289, 10312, 10335,
   10358, 10384,  7428, 10407, 10440, -1947, -1947, -1947, -1947, -1947,
   11268,  -189, 11412,  1710,  1908, -1947,   549,   579,   581, 11412,
   11412,  2211, -1947,   583,  2215, -1947,   585, -1947,   588, -1947,
    2243, -1947,   591, 10466,   596,  1890,  1891,  2096, -1947, 10490,
    1894,  1898,  1909, 10513,   655, -1947,  2062, -1947, -1947, 10539,
   -1947,  2388, -1947, -1947, -1947, -1947,  2249,   627,   633,   145,
   -1947, -1947,  2714,  3040,  3366,  3692,  4018,  4344,  2208,   636,
     145, -1947,   145,  1911,   642,    14,  9682,  1912,  1913,  2040,
   -1947,   645,   647,   651, -1947,  2259, -1947,   656, -1947,   622,
    2264,  2213, 10820, -1947,   431, -1947, 11412, 11412,  2270,  2271,
   -1947, 11412, -1947, 11412,  8632,  1916, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947,  2047,  2047,  2047,  2047,  2047,  2047, -1947,
    9682, -1947,  2273,  2222,  1918,  1919,  1923,  2047, -1947,  1957,
    1958,  2047, -1947,  1960,  1961,  2047,  1926,  1931, -1947, -1947,
   -1947, -1947, -1947,  9682, -1947, -1947, -1947,  2091,  9682, -1947,
    2164,  1599, -1947,  2293, -1947, -1947,  9682, -1947,  2050,  2109,
    2295, -1947,  2301, -1947, -1947,  2300,   965, -1947,  2302,  9682,
    9682, -1947, -1947, -1947, -1947, -1947, -1947,  2256, -1947,  4670,
   -1947, -1947,  4996, -1947,  1949, -1947, -1947,   660, -1947,  2248,
    2190,  2171,  2162,  2075, -1947, -1947,   662,   737,   145, -1947,
      26, -1947, 10563,  2148,  2149,   739,  2154, -1947, -1947, -1947,
   -1947, -1947,  2339,   -28,   -85, -1947, -1947,  2326,  1986,   748,
    2345,  2257,  1995,  1996,  1997,  1998,  1999,  2000, 10586, -1947,
    1989,  2348, -1947, -1947, -1947,  2013,  1815,  2030,  2031,  2037,
    1815,  2042,  2043,  2039, -1947, -1947, 10609, -1947, 11268,  -104,
    2202,  1710, -1947, 11412, -1947,  2351, -1947, -1947,  2049, -1947,
   -1947,  2057, 10632, 10655, -1947,  5322, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947,  5648, -1947, -1947,   750, -1947,
     775,   863, -1947,  2400, -1947,  2404,  2407,  2067,  2068,  9682,
    2408, -1947,   867,   -24, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947,  2415,   431,  2071, -1947,  2047, -1947, -1947, -1947,
    2047, -1947, -1947, -1947, -1947, -1947,  2218,  2219,  2130, -1947,
   -1947,  2074, -1947, -1947,  1181, -1947,  5974, -1947, -1947, -1947,
    2244, -1947,   874, -1947, -1947,  2433,  2434, 11412,  2418, -1947,
    2441, -1947, -1947, -1947, -1947,  2442,  2087,  1815,  1815,  2092,
    1815,  1815,  2287,  2291,  2098,  2457, -1947, -1947, -1947,  2458,
    2460,  2457,  2104,  2105,  9682, -1947,  2247,   431, -1947,  2047,
    2047, -1947,  2047,  2047, -1947, -1947, -1947,   875,   893,  2110,
     894,  2111,  2260, 11412,  2271, -1947,  2113,  2114,  2116,  2117,
   -1947,  2464,  2468,  2457,  2457, -1947,  2265,  2473,  1986, -1947,
   -1947, -1947, -1947,    51, -1947,  2122,   896,   901,   450,  2476,
     905, -1947, -1947,   -37,  2340,   303,     0,  2457, -1947, -1947,
    2395,  2235, -1947,  2265, -1947, -1947,   354, -1947, -1947, -1947,
     391,   462,   908,   450,   450,  2330, -1947, -1947, -1947, -1947,
   -1947, -1947,   352, -1947, -1947, -1947,   374, -1947,  2261, -1947,
   -1947, -1947, -1947,   450,    59,  2308,  2310,  2319,  2324,  2495,
    2497, -1947, -1947
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1947,  2419,   -81, -1947, -1947, -1947, -1947,  -832, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947,  1633,  2159, -1947,  -211,  -584,
    1143, -1947, -1284, -1947,   825, -1220, -1947, -1542, -1947,  -981,
   -1947,   902, -1176, -1947, -1947, -1265, -1947, -1947,  2053,  -259,
    -253,  2041,  -473,  1706, -1947, -1947,   511, -1947, -1947, -1947,
    1335,  1554,   295,  -106, -1947, -1947, -1947,  2411,  1935, -1947,
   -1947, -1029, -1947, -1947, -1947, -1947, -1947, -1947, -1947, -1947,
   -1144, -1947,  -657, -1947, -1947, -1947, -1947, -1947,   479,   614,
    2470,  2196, -1947,  1709, -1947,   773,  1947, -1947, -1947, -1947,
   -1947, -1947, -1947, -1947, -1947, -1047,  1267, -1947, -1947, -1947,
   -1947,   565, -1947, -1947, -1947,   809, -1947,   464, -1947,  1294,
    1281, -1545, -1567, -1448, -1946, -1261, -1947,  -986,   353,   162,
     183,  -792,  -402,  1749, -1049, -1947, -1947, -1947,  2412, -1947,
    -299, -1947,  1735,  1149, -1014, -1947, -1947, -1947, -1947,  2054,
   -1947, -1947, -1947, -1947, -1947,  2236, -1947, -1947, -1361, -1947
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -646
static const yytype_int16 yytable[] =
{
     263,  1229,  1180,  1614,  1390,  1600,   853,  1263,  1192,  1193,
     478,  1602,  1211,  1016,  1017,   762,  1249,   480,   570,  1022,
     448,  1024,   333,  1257,  1610,   785,   837,   980,  1751,  1692,
    1284,   473,  1096,    77,   837,   296,   297,   298,   299,   300,
     301,   269,  -474,   269,  1086,  -476,  -475,  1086,  1399,  1400,
     845,  2094,  1278,  1388,   474,   960,  1757,  -645,  2011,   479,
     471,   345,   346,  2125,   284,  1817,  1759,  1422,   144,  2083,
    1955,   599,   351,   352,   353,  1057,   497,   559,   355,   603,
     590,   838,  1058,   716,   292,   589,  1611,    85,   826,   838,
     560,   500,   504,   112,   101,   717,   285,   306,  2100,  1183,
     787,   990,   775,  1957,    44,  1986,  1411,  1412,  1413,  1414,
     512,    47,  1795,  1796,   448,  1618,   278,   279,   587,  2078,
     286,   348,   349,  1806,  1807,  1654,  1655,  1693,   287,    48,
    1158,   322,    45,  1987,  1665,  1666,   280,  1059,  1619,  2084,
     288,  1060,  2103,  2104,  1218,   468,   469,   470,  1037,   498,
     788,   501,  1044,   307,   471,  1051,   991,   820,  1061,   837,
     973,  1958,  1184,  1219,   502,   505,  1415,  1062,   102,   145,
      86,  2123,  1818,   983,   449,   450,   451,   452,   453,   454,
     455,   447,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1063,   118,  1956,
     289,  1279,   334,   827,  1093,   323,  1095,  1760,  1401,   302,
    2095,   600,  1438,  2012,   838,   561,   992,   113,  2085,   600,
     744,   290,  1087,  1448,  1604,  1301,   961,  2126,   482,   293,
    1585,    78,  2086,  1761,  -645,   114,  1607,  2101,   103,  1449,
    1262,  1892,  1893,  1894,  1895,  1896,  1897,   839,   840,    46,
     115,   120,  1064,   562,   718,  1905,   334,  1701,    13,  1909,
     513,   846,   847,  1913,   281,   475,  1776,  1045,  1084,   609,
    1052,   993,   123,   610,   786,   324,   291,   116,   125,   618,
     622,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     988,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,  1950,   650,   651,   652,
      74,   654,   655,   656,   657,   658,   659,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,  1372,  1951,
     127,  1752,  1753,   677,   678,   129,   852,   131,   682,   683,
     314,  1612,   119,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   981,   994,   995,   711,   712,
     713,   714,   715,   719,   998,   477,   725,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,   742,
     860,  1389,   303,   863,   263,   121,  1816,   270,  -474,   270,
    1683,  -476,  -475,   576,   481,   571,   872,  1251,   587,   483,
      65,  1716,  1416,  1417,  1418,  1727,   124,  1728,   750,  1031,
    1032,  1033,   126,  1721,  1783,  1784,  1785,  1786,  1787,  1788,
    1429,  2097,  1431,  1432,  2016,  1302,  1797,  1303,  2019,   751,
    1801,  1590,  1706,  2107,  1805,   514,   515,   516,   517,  1038,
    1039,  1040,  1041,   583,    66,   572,  2119,  2109,  1732,   816,
     495,  1419,   296,   297,   298,   299,   300,   301,  2090,  1733,
      67,   318,  1610,   496,   128,   506,   612,   613,  2121,   130,
    1885,   132,   867,   868,   315,   484,   319,  2098,  1875,  1734,
     976,    13,  1004,  1005,  2108,  -301,  1591,  2056,  2057,   759,
    2058,  2059,   485,  1735,  1121,  1122,   849,  1820,  1258,  1587,
      68,   817,  1736,  1181,  1048,   486,  1187,  2099,   982,    75,
     859,   282,  1252,  1049,   898,   899,    63,    69,  2113,  2120,
      70,    82,   869,   870,  1611,   507,    87,   760,  2084,   752,
     487,   283,   877,   142,   573,   818,   482,   577,   508,    88,
     584,  2122,  1737,  1739,   143,    71,  1592,  1707,   488,  1744,
     449,   450,   451,   452,   453,   454,   455,  2110,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  2050,    94,  2111,  1382,   449,   450,   451,
     452,   453,   454,   455,  1194,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
    2112,  1593,  1708,   614,  -333,  2076,  2077,  2085,    13,   614,
    1762,   587,   106,  1259,  1588,    76,   109,  1881,  1230,    83,
      96,  2086,  1231,   133,  1985,  1267,   302,   133,  2114,  2102,
     964,   965,  1882,   967,  1268,   520,   521,   862,   447,   449,
     450,   451,   452,   453,   454,   455,  2115,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,    72,   755,   482,   326,   134,   873,  1424,  1232,
     134,  2116,  1233,  1070,   267,    90,  1976,  1425,   135,  2014,
    1980,   843,   844,   136,  1071,  1436,  1871,  1234,  1847,   268,
    1857,  1849,   806,   137,  1437,    91,  1852,  1848,   811,    92,
     813,  1866,  1286,  1867,  1287,   469,   470,  1235,  1089,  1090,
      93,  1170,    95,  2024,    98,  1236,   721,   722,   329,   723,
    1072,  -333,   724,  1070,   100,  1216,  1217,  1029,  1073,  1220,
    1221,  1222,  1223,    99,  1071,  1990,  1224,  1223,  1246,  1247,
    1273,  1274,  1159,  2055,   449,   450,   451,   452,   453,   454,
     455,  1167,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1348,  1349,   104,
    1072,  1074,  1351,  1352,   105,  1097,   107,  1098,  1073,  1435,
    1247,   110,  1103,  1104,   108,  1105,   122,  2039,  2040,  1110,
    2042,  2043,  1237,   139,  1238,   140,  1111,  1112,  1113,  1114,
     146,  1115,  1116,  1117,  1445,  1247,  1583,  1247,  1118,  1119,
     266,  1120,  1239,  1608,  1285,  1075,   276,  1123,  1124,  1125,
     308,  1074,  1658,  1659,  1935,  1623,  1624,  1662,  1663,  1948,
    1921,  1133,  1134,  1135,   309,  1136,  1699,  1700,  1722,  1247,
    1945,  1730,  1247,  1741,  1247,   295,  1147,  1276,   464,   465,
     466,   467,   468,   469,   470,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1606,  1156,  1075,  1745,  1274,  1157,   310,
     795,   796,   797,   798,   311,   799,   312,  1163,   801,   802,
     803,  1754,  1755,  1756,  1755,   807,   808,   809,   316,  1177,
     812,  1758,  1700,   313,  1763,  1285,  1182,   317,  1076,  1822,
    1823,   874,   321,   449,   450,   451,   452,   453,   454,   455,
    1996,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   325,   930,   931,  1824,
    1823,  1825,  1823,  1827,  1755,  1829,  1830,  1228,  1831,  1832,
    1373,  1834,  1835,  1375,  1376,  1377,  1837,  1838,   449,   450,
     451,   452,   453,   454,   455,   327,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,  1009,  1010,   329,  1013,  1014,  1015,  1855,  1247,   331,
    1018,  1019,  1020,  1856,  1247,  1023,  1865,  1247,   335,   932,
     933,  1290,  1869,  1247,  1294,  1876,  1830,  1877,  1755,   336,
    1299,  1878,  1755,  1077,  1929,  1930,  1880,  1832,   337,  1305,
    1939,  1247,  1946,  1247,   338,  1312,  1313,   449,   450,   451,
     452,   453,   454,   455,   342,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,   339,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   340,   449,   450,   451,   452,   453,   454,
     455,  1374,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1947,  1247,  1952,
    1700,   341,  1391,   343,   954,   955,   344,  1394,  1961,  1624,
    1999,  1247,   449,   450,   451,   452,   453,   454,   455,    77,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  2000,  1830,   449,   450,   451,
     452,   453,   454,   455,   350,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     358,   449,   450,   451,   452,   453,   454,   455,   357,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,  1594,   359,   449,   450,   451,   452,
     453,   454,   455,   360,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  2001,  1832,   361,  1629,  2009,  2010,  1630,
    2026,  2027,  2030,  2031,   476,  2060,  2061,   362,  1641,  1642,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
    1643,  2062,  2063,   491,  2065,  2061,  2088,  2061,   363,  1650,
    1651,  2089,  2061,  1309,  1310,  2092,  2093,  1616,  2117,  2061,
     984,   985,   364,  1175,  1176,   365,  1667,  1668,  1669,  1687,
    1688,  1670,  1671,   366,  1672,   367,  1673,   368,  1674,   462,
     463,   464,   465,   466,   467,   468,   469,   470,  1680,  1682,
     369,   370,   371,   372,   373,   374,  1689,  1690,  1339,  1340,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   375,  1703,   376,   377,   378,  1709,   379,
     380,   381,  1450,  1451,  1452,  1453,  1454,  1455,  1713,  1456,
     382,  1457,   383,   384,   385,  1458,  1459,  1460,   386,  1461,
     387,   388,  1719,  1462,  1463,  1464,  1465,  1466,   389,   390,
     391,   392,   393,   394,   395,   396,  1467,   397,   398,   399,
     400,  1468,  1469,   401,   402,  1470,   493,  1364,  1365,   403,
    1471,  1472,  1473,  1474,  1475,   404,   405,  1476,   406,  1477,
    1478,  1479,   407,   408,  1480,  1481,   409,  1482,  1483,  1484,
    1366,  1367,   410,  1485,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,  1486,   411,   412,   413,
     414,  1487,   415,   494,  1368,  1369,  1488,  1489,  1490,   416,
     417,   418,   419,  1491,  1492,   420,  1493,  1494,  1495,  1496,
     421,   422,  1497,   423,  1498,  1499,  1500,  1501,   424,  1502,
     425,  1503,  1504,   426,  1505,   427,  1506,  1507,   428,  1508,
    1509,  1510,  1511,  1617,   429,   430,   431,   432,  1512,   433,
    1513,   434,  1514,  1515,   435,  1516,  1517,  1518,  1519,  1520,
    1521,   436,  1522,  1523,  1524,  1525,  1526,  1789,  1790,   437,
    1527,   438,  1528,   439,  1529,   440,   441,   442,   443,   444,
     445,   446,   499,  1530,   503,  1531,  1532,  1533,  1534,  1535,
    1536,  1537,   864,   509,  1538,  1539,   510,   511,   519,   522,
    1540,   523,  1541,  1542,  1543,   558,  1544,   566,  1545,   567,
    1546,  1547,  1548,  1549,   568,  1766,  1767,   878,   569,   575,
     578,  1771,   580,  1773,   581,   586,   591,  1550,  1551,  1552,
     592,   593,   594,   595,   596,   597,   598,  1553,   602,  1554,
    1555,  1556,   605,   615,   616,   633,  1557,   649,  1558,  1559,
    1560,   653,   672,  1561,   673,   674,   675,  1562,  1563,   676,
    1564,  1565,  1566,  1567,   679,   680,   681,  1568,   684,   685,
     449,   450,   451,   452,   453,   454,   455,   686,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   709,   720,   743,   745,  1569,  1570,
    1571,  1572,  1573,   747,   749,   449,   450,   451,   452,   453,
     454,   455,   756,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,  1872,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   754,   763,   764,   766,   767,  1574,  1575,  1576,  1577,
    1578,  1579,   768,  1299,   769,   777,   770,   771,   772,   773,
     774,   776,   449,   450,   451,   452,   453,   454,   455,  1898,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   778,   779,   780,   783,   782,
     781,   804,  1916,   784,   789,   791,   792,  1918,   793,  1450,
    1451,  1452,  1453,  1454,  1455,  1923,  1456,   800,  1457,   810,
     814,   815,  1458,  1459,  1460,   819,  1461,   821,  1932,  1933,
    1462,  1463,  1464,  1465,  1466,   822,   823,   824,   828,   825,
     829,   830,   831,  1467,   832,   833,   834,   836,  1468,  1469,
     835,   850,  1470,   855,   857,   865,   871,  1471,  1472,  1473,
    1474,  1475,    13,   913,  1476,   927,  1477,  1478,  1479,   928,
     929,  1480,  1481,   934,  1482,  1483,  1484,   935,   936,   -57,
    1485,   966,   969,   970,   971,   974,   977,   975,   978,   979,
     986,   987,   989,  1486,   996,   999,  1000,  1001,  1487,  1002,
    1003,  1006,  1011,  1488,  1489,  1490,  1025,  1026,  1028,  1027,
    1491,  1492,  1030,  1493,  1494,  1495,  1496,  1034,  1046,  1497,
    1036,  1731,  1499,  1500,  1501,  1047,  1502,  1050,  1503,  1504,
    1053,  1505,  1054,  1506,  1507,  1055,  1508,  1509,  1510,  1511,
    1056,  1069,  1081,  1082,  1101,  1512,  1085,  1513,  2007,  1514,
    1515,  1102,  1516,  1517,  1518,  1519,  1520,  1521,  1091,  1522,
    1523,  1524,  1525,  1526,  1086,  1107,  1126,  1527,  1127,  1528,
    1128,  1529,  1129,  1130,  1131,  1132,  1140,  1141,  1142,  1143,
    1530,  1144,  1531,  1532,  1533,  1534,  1535,  1536,  1537,   -59,
    1168,  1538,  1539,  1137,  1138,  1139,  1145,  1540,  1146,  1541,
    1542,  1543,  1171,  1544,  1173,  1545,  1178,  1546,  1547,  1548,
    1549,   879,  1179,  1212,  1188,  1189,  1191,  1190,  1213,  1227,
    1248,  1250,  1214,  2053,  1550,  1551,  1552,  1215,  1225,  1253,
    1226,  1255,  1256,  1260,  1553,  1241,  1554,  1555,  1556,  1242,
    1243,  1244,  1245,  1557,  1261,  1558,  1559,  1560,  1264,  1265,
    1561,  1269,  1266,  1275,  1562,  1563,   880,  1564,  1565,  1566,
    1567,  1270,  1271,  1272,  1568,  1277,  1280,  1281,  1282,  1285,
    1283,  1291,   449,   450,   451,   452,   453,   454,   455,   887,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  1295,  1296,  1297,  1306,  1379,
    1314,  1315,  1327,  1328,  1332,  1569,  1570,  1571,  1572,  1573,
    1370,  1383,  1333,  1397,  1334,  1335,  1336,  1380,  1387,  1337,
    1402,  1403,  1407,   888,  1408,  1420,  1410,  1423,  1421,  1338,
    1347,  1350,  1353,  1426,  1384,  1450,  1451,  1452,  1453,  1454,
    1455,  1385,  1456,  1371,  1457,  1378,  1386,  1392,  1458,  1459,
    1460,  1427,  1461,  1428,  1430,  1439,  1462,  1463,  1464,  1465,
    1466,  1395,  1396,  1574,  1575,  1576,  1577,  1578,  1579,  1467,
    1404,  1405,  1440,  1406,  1468,  1469,  1409,  1433,  1470,  1441,
    1442,  1443,  1444,  1471,  1472,  1473,  1474,  1475,  1446,  1581,
    1476,  1447,  1477,  1478,  1479,  1582,  1584,  1480,  1481,  1586,
    1482,  1483,  1484,  1598,  1595,  1596,  1485,  1597,  1601,  1622,
    1626,  1628,  1621,  1652,  1615,  1657,  1661,  1675,  1685,  1486,
    1691,  1695,  1697,  1676,  1487,  1677,  1678,  1679,  1702,  1488,
    1489,  1490,  1704,  1705,  1715,  1710,  1491,  1492,  1711,  1493,
    1494,  1495,  1496,  1712,  1718,  1497,  1717,  1850,  1499,  1500,
    1501,  1720,  1502,  1723,  1503,  1504,  1738,  1505,  1729,  1506,
    1507,  1747,  1508,  1509,  1510,  1511,  1724,  1743,  1725,  1740,
    1726,  1512,  1742,  1513,  1746,  1514,  1515,  1749,  1516,  1517,
    1518,  1519,  1520,  1521,  1748,  1522,  1523,  1524,  1525,  1526,
    1764,  1775,  1768,  1527,  1774,  1528,  1777,  1529,  1792,  1793,
    1798,  1826,  1799,  1828,  1800,  1802,  1530,  1803,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1804,  1833,  1538,  1539,  1839,
    1840,  1841,  1854,  1540,  1843,  1541,  1542,  1543,  1844,  1544,
    1864,  1545,  1879,  1546,  1547,  1548,  1549,  1883,  1884,  1845,
    1868,  1873,  1874,  1886,  1887,  1890,  1899,  1901,  1902,  1903,
    1550,  1551,  1552,  1904,  1907,  1908,  1914,  1911,  1912,  1917,
    1553,  1915,  1554,  1555,  1556,  1919,  1922,  1924,  1926,  1557,
    1925,  1558,  1559,  1560,  1927,  1928,  1561,  1931,  1934,  1938,
    1562,  1563,  1941,  1564,  1565,  1566,  1567,  1940,  1942,  1943,
    1568,   449,   450,   451,   452,   453,   454,   455,  1944,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,  1954,  1953,  1959,  1960,  1962,  1963,
    1972,  1973,  1988,   889,  1991,  1965,  1966,  1967,  1968,  1969,
    1970,  1569,  1570,  1571,  1572,  1573,   449,   450,   451,   452,
     453,   454,   455,  1975,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,  1977,
    1978,  1450,  1451,  1452,  1453,  1454,  1455,  1979,  1456,  1983,
    1457,  1981,  1982,  2002,  1458,  1459,  1460,  2003,  1461,  1992,
    2004,  2008,  1462,  1463,  1464,  1465,  1466,  1993,  2013,  1574,
    1575,  1576,  1577,  1578,  1579,  1467,  2005,  2006,  2022,  2023,
    1468,  1469,  2015,  2025,  1470,  2029,  2032,  2033,  2034,  1471,
    1472,  1473,  1474,  1475,  2035,  2037,  1476,  2038,  1477,  1478,
    1479,  2044,  2041,  1480,  1481,  2045,  1482,  1483,  1484,  1755,
    2046,  2048,  1485,  2049,  2051,  2052,  2054,  2074,  2067,  2064,
    2066,  2075,  2079,  2069,  2070,  1486,  2071,  2072,  2082,  2091,
    1487,  2087,  2096,  2094,  2105,  1488,  1489,  1490,  2118,  2127,
    2124,  2128,  1491,  1492,  2129,  1493,  1494,  1495,  1496,  2130,
    2131,  1497,  2132,  1853,  1499,  1500,  1501,   277,  1502,  1821,
    1503,  1504,  1109,  1505,   611,  1506,  1507,  1765,  1508,  1509,
    1510,  1511,  1393,   758,   332,  1684,   854,  1512,   746,  1513,
    1172,  1514,  1515,  2068,  1516,  1517,  1518,  1519,  1520,  1521,
     604,  1522,  1523,  1524,  1525,  1526,   141,  1889,  1068,  1527,
     861,  1528,  1609,  1529,  1870,  1605,  1589,  2106,   347,  1021,
    1035,   579,  1530,     0,  1531,  1532,  1533,  1534,  1535,  1536,
    1537,  1094,  1714,  1538,  1539,   790,     0,     0,     0,  1540,
       0,  1541,  1542,  1543,     0,  1544,     0,  1545,     0,  1546,
    1547,  1548,  1549,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1550,  1551,  1552,     0,
       0,     0,     0,     0,     0,     0,  1553,     0,  1554,  1555,
    1556,     0,     0,     0,     0,  1557,     0,  1558,  1559,  1560,
       0,     0,  1561,     0,     0,     0,  1562,  1563,     0,  1564,
    1565,  1566,  1567,     0,     0,     0,  1568,   449,   450,   451,
     452,   453,   454,   455,   911,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,   890,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1569,  1570,  1571,
    1572,  1573,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   912,  1450,  1451,  1452,
    1453,  1454,  1455,     0,  1456,     0,  1457,     0,     0,     0,
    1458,  1459,  1460,     0,  1461,     0,     0,     0,  1462,  1463,
    1464,  1465,  1466,     0,     0,  1574,  1575,  1576,  1577,  1578,
    1579,  1467,     0,     0,     0,     0,  1468,  1469,     0,     0,
    1470,     0,     0,     0,     0,  1471,  1472,  1473,  1474,  1475,
       0,     0,  1476,     0,  1477,  1478,  1479,     0,     0,  1480,
    1481,     0,  1482,  1483,  1484,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1486,     0,     0,     0,     0,  1487,     0,     0,     0,
       0,  1488,  1489,  1490,     0,     0,     0,     0,  1491,  1492,
       0,  1493,  1494,  1495,  1496,     0,     0,  1497,     0,  1858,
    1499,  1500,  1501,     0,  1502,     0,  1503,  1504,     0,  1505,
       0,  1506,  1507,     0,  1508,  1509,  1510,  1511,     0,     0,
       0,     0,     0,  1512,     0,  1513,     0,  1514,  1515,     0,
    1516,  1517,  1518,  1519,  1520,  1521,     0,  1522,  1523,  1524,
    1525,  1526,     0,     0,     0,  1527,     0,  1528,     0,  1529,
       0,     0,     0,     0,     0,     0,     0,     0,  1530,     0,
    1531,  1532,  1533,  1534,  1535,  1536,  1537,     0,     0,  1538,
    1539,     0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,
       0,  1544,     0,  1545,     0,  1546,  1547,  1548,  1549,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1550,  1551,  1552,     0,     0,     0,     0,     0,
       0,     0,  1553,     0,  1554,  1555,  1556,     0,     0,     0,
       0,  1557,     0,  1558,  1559,  1560,     0,     0,  1561,     0,
       0,     0,  1562,  1563,     0,  1564,  1565,  1566,  1567,     0,
       0,     0,  1568,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,   892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1569,  1570,  1571,  1572,  1573,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,   710,  1450,  1451,  1452,  1453,  1454,  1455,     0,
    1456,     0,  1457,     0,     0,     0,  1458,  1459,  1460,     0,
    1461,     0,     0,     0,  1462,  1463,  1464,  1465,  1466,     0,
       0,  1574,  1575,  1576,  1577,  1578,  1579,  1467,     0,     0,
       0,     0,  1468,  1469,     0,     0,  1470,     0,     0,     0,
       0,  1471,  1472,  1473,  1474,  1475,     0,     0,  1476,     0,
    1477,  1478,  1479,     0,     0,  1480,  1481,     0,  1482,  1483,
    1484,     0,     0,     0,  1485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1486,     0,     0,
       0,     0,  1487,     0,     0,     0,     0,  1488,  1489,  1490,
       0,     0,     0,     0,  1491,  1492,     0,  1493,  1494,  1495,
    1496,     0,     0,  1497,     0,  1859,  1499,  1500,  1501,     0,
    1502,     0,  1503,  1504,     0,  1505,     0,  1506,  1507,     0,
    1508,  1509,  1510,  1511,     0,     0,     0,     0,     0,  1512,
       0,  1513,     0,  1514,  1515,     0,  1516,  1517,  1518,  1519,
    1520,  1521,     0,  1522,  1523,  1524,  1525,  1526,     0,     0,
       0,  1527,     0,  1528,     0,  1529,     0,     0,     0,     0,
       0,     0,     0,     0,  1530,     0,  1531,  1532,  1533,  1534,
    1535,  1536,  1537,     0,     0,  1538,  1539,     0,     0,     0,
       0,  1540,     0,  1541,  1542,  1543,     0,  1544,     0,  1545,
       0,  1546,  1547,  1548,  1549,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1550,  1551,
    1552,     0,     0,     0,     0,     0,     0,     0,  1553,     0,
    1554,  1555,  1556,     0,     0,     0,     0,  1557,     0,  1558,
    1559,  1560,     0,     0,  1561,     0,     0,     0,  1562,  1563,
       0,  1564,  1565,  1566,  1567,     0,     0,     0,  1568,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,   893,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1569,
    1570,  1571,  1572,  1573,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   875,  1450,
    1451,  1452,  1453,  1454,  1455,     0,  1456,     0,  1457,     0,
       0,     0,  1458,  1459,  1460,     0,  1461,     0,     0,     0,
    1462,  1463,  1464,  1465,  1466,     0,     0,  1574,  1575,  1576,
    1577,  1578,  1579,  1467,     0,     0,     0,     0,  1468,  1469,
       0,     0,  1470,     0,     0,     0,     0,  1471,  1472,  1473,
    1474,  1475,     0,     0,  1476,     0,  1477,  1478,  1479,     0,
       0,  1480,  1481,     0,  1482,  1483,  1484,     0,     0,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1486,     0,     0,     0,     0,  1487,     0,
       0,     0,     0,  1488,  1489,  1490,     0,     0,     0,     0,
    1491,  1492,     0,  1493,  1494,  1495,  1496,     0,     0,  1497,
       0,  1860,  1499,  1500,  1501,     0,  1502,     0,  1503,  1504,
       0,  1505,     0,  1506,  1507,     0,  1508,  1509,  1510,  1511,
       0,     0,     0,     0,     0,  1512,     0,  1513,     0,  1514,
    1515,     0,  1516,  1517,  1518,  1519,  1520,  1521,     0,  1522,
    1523,  1524,  1525,  1526,     0,     0,     0,  1527,     0,  1528,
       0,  1529,     0,     0,     0,     0,     0,     0,     0,     0,
    1530,     0,  1531,  1532,  1533,  1534,  1535,  1536,  1537,     0,
       0,  1538,  1539,     0,     0,     0,     0,  1540,     0,  1541,
    1542,  1543,     0,  1544,     0,  1545,     0,  1546,  1547,  1548,
    1549,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1550,  1551,  1552,     0,     0,     0,
       0,     0,     0,     0,  1553,     0,  1554,  1555,  1556,     0,
       0,     0,     0,  1557,     0,  1558,  1559,  1560,     0,     0,
    1561,     0,     0,     0,  1562,  1563,     0,  1564,  1565,  1566,
    1567,     0,     0,     0,  1568,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
     894,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   881,  1450,  1451,  1452,  1453,  1454,
    1455,     0,  1456,     0,  1457,     0,     0,     0,  1458,  1459,
    1460,     0,  1461,     0,     0,     0,  1462,  1463,  1464,  1465,
    1466,     0,     0,  1574,  1575,  1576,  1577,  1578,  1579,  1467,
       0,     0,     0,     0,  1468,  1469,     0,     0,  1470,     0,
       0,     0,     0,  1471,  1472,  1473,  1474,  1475,     0,     0,
    1476,     0,  1477,  1478,  1479,     0,     0,  1480,  1481,     0,
    1482,  1483,  1484,     0,     0,     0,  1485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1486,
       0,     0,     0,     0,  1487,     0,     0,     0,     0,  1488,
    1489,  1490,     0,     0,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,  1496,     0,     0,  1497,     0,  1861,  1499,  1500,
    1501,     0,  1502,     0,  1503,  1504,     0,  1505,     0,  1506,
    1507,     0,  1508,  1509,  1510,  1511,     0,     0,     0,     0,
       0,  1512,     0,  1513,     0,  1514,  1515,     0,  1516,  1517,
    1518,  1519,  1520,  1521,     0,  1522,  1523,  1524,  1525,  1526,
       0,     0,     0,  1527,     0,  1528,     0,  1529,     0,     0,
       0,     0,     0,     0,     0,     0,  1530,     0,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,     0,     0,  1538,  1539,     0,
       0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,  1544,
       0,  1545,     0,  1546,  1547,  1548,  1549,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1550,  1551,  1552,     0,     0,     0,     0,     0,     0,     0,
    1553,     0,  1554,  1555,  1556,     0,     0,     0,     0,  1557,
       0,  1558,  1559,  1560,     0,     0,  1561,     0,     0,     0,
    1562,  1563,     0,  1564,  1565,  1566,  1567,     0,     0,     0,
    1568,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,   900,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1569,  1570,  1571,  1572,  1573,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     882,  1450,  1451,  1452,  1453,  1454,  1455,     0,  1456,     0,
    1457,     0,     0,     0,  1458,  1459,  1460,     0,  1461,     0,
       0,     0,  1462,  1463,  1464,  1465,  1466,     0,     0,  1574,
    1575,  1576,  1577,  1578,  1579,  1467,     0,     0,     0,     0,
    1468,  1469,     0,     0,  1470,     0,     0,     0,     0,  1471,
    1472,  1473,  1474,  1475,     0,     0,  1476,     0,  1477,  1478,
    1479,     0,     0,  1480,  1481,     0,  1482,  1483,  1484,     0,
       0,     0,  1485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1486,     0,     0,     0,     0,
    1487,     0,     0,     0,     0,  1488,  1489,  1490,     0,     0,
       0,     0,  1491,  1492,     0,  1493,  1494,  1495,  1496,     0,
       0,  1497,     0,  1862,  1499,  1500,  1501,     0,  1502,     0,
    1503,  1504,     0,  1505,     0,  1506,  1507,     0,  1508,  1509,
    1510,  1511,     0,     0,     0,     0,     0,  1512,     0,  1513,
       0,  1514,  1515,     0,  1516,  1517,  1518,  1519,  1520,  1521,
       0,  1522,  1523,  1524,  1525,  1526,     0,     0,     0,  1527,
       0,  1528,     0,  1529,     0,     0,     0,     0,     0,     0,
       0,     0,  1530,     0,  1531,  1532,  1533,  1534,  1535,  1536,
    1537,     0,     0,  1538,  1539,     0,     0,     0,     0,  1540,
       0,  1541,  1542,  1543,     0,  1544,     0,  1545,     0,  1546,
    1547,  1548,  1549,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1550,  1551,  1552,     0,
       0,     0,     0,     0,     0,     0,  1553,     0,  1554,  1555,
    1556,     0,     0,     0,     0,  1557,     0,  1558,  1559,  1560,
       0,     0,  1561,     0,     0,     0,  1562,  1563,     0,  1564,
    1565,  1566,  1567,     0,     0,     0,  1568,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,   902,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1569,  1570,  1571,
    1572,  1573,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   883,  1450,  1451,  1452,
    1453,  1454,  1455,     0,  1456,     0,  1457,     0,     0,     0,
    1458,  1459,  1460,     0,  1461,     0,     0,     0,  1462,  1463,
    1464,  1465,  1466,     0,     0,  1574,  1575,  1576,  1577,  1578,
    1579,  1467,     0,     0,     0,     0,  1468,  1469,     0,     0,
    1470,     0,     0,     0,     0,  1471,  1472,  1473,  1474,  1475,
       0,     0,  1476,     0,  1477,  1478,  1479,     0,     0,  1480,
    1481,     0,  1482,  1483,  1484,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1486,     0,     0,     0,     0,  1487,     0,     0,     0,
       0,  1488,  1489,  1490,     0,     0,     0,     0,  1491,  1492,
       0,  1493,  1494,  1495,  1496,     0,     0,  1497,     0,  1863,
    1499,  1500,  1501,     0,  1502,     0,  1503,  1504,     0,  1505,
       0,  1506,  1507,     0,  1508,  1509,  1510,  1511,     0,     0,
       0,     0,     0,  1512,     0,  1513,     0,  1514,  1515,     0,
    1516,  1517,  1518,  1519,  1520,  1521,     0,  1522,  1523,  1524,
    1525,  1526,     0,     0,     0,  1527,     0,  1528,     0,  1529,
       0,     0,     0,     0,     0,     0,     0,     0,  1530,     0,
    1531,  1532,  1533,  1534,  1535,  1536,  1537,     0,     0,  1538,
    1539,     0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,
       0,  1544,     0,  1545,     0,  1546,  1547,  1548,  1549,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1550,  1551,  1552,     0,     0,     0,     0,     0,
       0,     0,  1553,     0,  1554,  1555,  1556,     0,     0,     0,
       0,  1557,     0,  1558,  1559,  1560,     0,     0,  1561,     0,
       0,     0,  1562,  1563,     0,  1564,  1565,  1566,  1567,     0,
       0,     0,  1568,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,   907,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1569,  1570,  1571,  1572,  1573,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,   884,  1450,  1451,  1452,  1453,  1454,  1455,     0,
    1456,     0,  1457,     0,     0,     0,  1458,  1459,  1460,     0,
    1461,     0,     0,     0,  1462,  1463,  1464,  1465,  1466,     0,
       0,  1574,  1575,  1576,  1577,  1578,  1579,  1467,     0,     0,
       0,     0,  1468,  1469,     0,     0,  1470,     0,     0,     0,
       0,  1471,  1472,  1473,  1474,  1475,     0,     0,  1476,     0,
    1477,  1478,  1479,     0,     0,  1480,  1481,     0,  1482,  1483,
    1484,     0,     0,     0,  1485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1486,     0,     0,
       0,     0,  1487,     0,     0,     0,     0,  1488,  1489,  1490,
       0,     0,     0,     0,  1491,  1492,     0,  1493,  1494,  1495,
    1496,     0,     0,  1497,     0,  1936,  1499,  1500,  1501,     0,
    1502,     0,  1503,  1504,     0,  1505,     0,  1506,  1507,     0,
    1508,  1509,  1510,  1511,     0,     0,     0,     0,     0,  1512,
       0,  1513,     0,  1514,  1515,     0,  1516,  1517,  1518,  1519,
    1520,  1521,     0,  1522,  1523,  1524,  1525,  1526,     0,     0,
       0,  1527,     0,  1528,     0,  1529,     0,     0,     0,     0,
       0,     0,     0,     0,  1530,     0,  1531,  1532,  1533,  1534,
    1535,  1536,  1537,     0,     0,  1538,  1539,     0,     0,     0,
       0,  1540,     0,  1541,  1542,  1543,     0,  1544,     0,  1545,
       0,  1546,  1547,  1548,  1549,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1550,  1551,
    1552,     0,     0,     0,     0,     0,     0,     0,  1553,     0,
    1554,  1555,  1556,     0,     0,     0,     0,  1557,     0,  1558,
    1559,  1560,     0,     0,  1561,     0,     0,     0,  1562,  1563,
       0,  1564,  1565,  1566,  1567,     0,     0,     0,  1568,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,   908,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1569,
    1570,  1571,  1572,  1573,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   885,  1450,
    1451,  1452,  1453,  1454,  1455,     0,  1456,     0,  1457,     0,
       0,     0,  1458,  1459,  1460,     0,  1461,     0,     0,     0,
    1462,  1463,  1464,  1465,  1466,     0,     0,  1574,  1575,  1576,
    1577,  1578,  1579,  1467,     0,     0,     0,     0,  1468,  1469,
       0,     0,  1470,     0,     0,     0,     0,  1471,  1472,  1473,
    1474,  1475,     0,     0,  1476,     0,  1477,  1478,  1479,     0,
       0,  1480,  1481,     0,  1482,  1483,  1484,     0,     0,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1486,     0,     0,     0,     0,  1487,     0,
       0,     0,     0,  1488,  1489,  1490,     0,     0,     0,     0,
    1491,  1492,     0,  1493,  1494,  1495,  1496,     0,     0,  1497,
       0,  1937,  1499,  1500,  1501,     0,  1502,     0,  1503,  1504,
       0,  1505,     0,  1506,  1507,     0,  1508,  1509,  1510,  1511,
       0,     0,     0,     0,     0,  1512,     0,  1513,     0,  1514,
    1515,     0,  1516,  1517,  1518,  1519,  1520,  1521,     0,  1522,
    1523,  1524,  1525,  1526,     0,     0,     0,  1527,     0,  1528,
       0,  1529,     0,     0,     0,     0,     0,     0,     0,     0,
    1530,     0,  1531,  1532,  1533,  1534,  1535,  1536,  1537,     0,
       0,  1538,  1539,     0,     0,     0,     0,  1540,     0,  1541,
    1542,  1543,     0,  1544,     0,  1545,     0,  1546,  1547,  1548,
    1549,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1550,  1551,  1552,     0,     0,     0,
       0,     0,     0,     0,  1553,     0,  1554,  1555,  1556,     0,
       0,     0,     0,  1557,     0,  1558,  1559,  1560,     0,     0,
    1561,     0,     0,     0,  1562,  1563,     0,  1564,  1565,  1566,
    1567,     0,     0,     0,  1568,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
     909,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   886,  1450,  1451,  1452,  1453,  1454,
    1455,     0,  1456,     0,  1457,     0,     0,     0,  1458,  1459,
    1460,     0,  1461,     0,     0,     0,  1462,  1463,  1464,  1465,
    1466,     0,     0,  1574,  1575,  1576,  1577,  1578,  1579,  1467,
       0,     0,     0,     0,  1468,  1469,     0,     0,  1470,     0,
       0,     0,     0,  1471,  1472,  1473,  1474,  1475,     0,     0,
    1476,     0,  1477,  1478,  1479,     0,     0,  1480,  1481,     0,
    1482,  1483,  1484,     0,     0,     0,  1485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1486,
       0,     0,     0,     0,  1487,     0,     0,     0,     0,  1488,
    1489,  1490,     0,     0,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,  1496,     0,     0,  1497,     0,  1997,  1499,  1500,
    1501,     0,  1502,     0,  1503,  1504,     0,  1505,     0,  1506,
    1507,     0,  1508,  1509,  1510,  1511,     0,     0,     0,     0,
       0,  1512,     0,  1513,     0,  1514,  1515,     0,  1516,  1517,
    1518,  1519,  1520,  1521,     0,  1522,  1523,  1524,  1525,  1526,
       0,     0,     0,  1527,     0,  1528,     0,  1529,     0,     0,
       0,     0,     0,     0,     0,     0,  1530,     0,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,     0,     0,  1538,  1539,     0,
       0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,  1544,
       0,  1545,     0,  1546,  1547,  1548,  1549,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1550,  1551,  1552,     0,     0,     0,     0,     0,     0,     0,
    1553,     0,  1554,  1555,  1556,     0,     0,     0,     0,  1557,
       0,  1558,  1559,  1560,     0,     0,  1561,     0,     0,     0,
    1562,  1563,     0,  1564,  1565,  1566,  1567,     0,     0,     0,
    1568,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,   910,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1569,  1570,  1571,  1572,  1573,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     891,  1450,  1451,  1452,  1453,  1454,  1455,     0,  1456,     0,
    1457,     0,     0,     0,  1458,  1459,  1460,     0,  1461,     0,
       0,     0,  1462,  1463,  1464,  1465,  1466,     0,     0,  1574,
    1575,  1576,  1577,  1578,  1579,  1467,     0,     0,     0,     0,
    1468,  1469,     0,     0,  1470,     0,     0,     0,     0,  1471,
    1472,  1473,  1474,  1475,     0,     0,  1476,     0,  1477,  1478,
    1479,     0,     0,  1480,  1481,     0,  1482,  1483,  1484,     0,
       0,     0,  1485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1486,     0,     0,     0,     0,
    1487,     0,     0,     0,     0,  1488,  1489,  1490,     0,     0,
       0,     0,  1491,  1492,     0,  1493,  1494,  1495,  1496,     0,
       0,  1497,     0,  1998,  1499,  1500,  1501,     0,  1502,     0,
    1503,  1504,     0,  1505,     0,  1506,  1507,     0,  1508,  1509,
    1510,  1511,     0,     0,     0,     0,     0,  1512,     0,  1513,
       0,  1514,  1515,     0,  1516,  1517,  1518,  1519,  1520,  1521,
       0,  1522,  1523,  1524,  1525,  1526,     0,     0,     0,  1527,
       0,  1528,     0,  1529,     0,     0,     0,     0,     0,     0,
       0,     0,  1530,     0,  1531,  1532,  1533,  1534,  1535,  1536,
    1537,     0,     0,  1538,  1539,     0,     0,     0,     0,  1540,
       0,  1541,  1542,  1543,     0,  1544,     0,  1545,     0,  1546,
    1547,  1548,  1549,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1550,  1551,  1552,     0,
       0,     0,     0,     0,     0,     0,  1553,     0,  1554,  1555,
    1556,     0,     0,     0,     0,  1557,     0,  1558,  1559,  1560,
       0,     0,  1561,     0,     0,     0,  1562,  1563,     0,  1564,
    1565,  1566,  1567,     0,     0,     0,  1568,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,   922,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1569,  1570,  1571,
    1572,  1573,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   895,  1450,  1451,  1452,
    1453,  1454,  1455,     0,  1456,     0,  1457,     0,     0,     0,
    1458,  1459,  1460,     0,  1461,     0,     0,     0,  1462,  1463,
    1464,  1465,  1466,     0,     0,  1574,  1575,  1576,  1577,  1578,
    1579,  1467,     0,     0,     0,     0,  1468,  1469,     0,     0,
    1470,     0,     0,     0,     0,  1471,  1472,  1473,  1474,  1475,
       0,     0,  1476,     0,  1477,  1478,  1479,     0,     0,  1480,
    1481,     0,  1482,  1483,  1484,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1486,     0,     0,     0,     0,  1487,     0,     0,     0,
       0,  1488,  1489,  1490,     0,     0,     0,     0,  1491,  1492,
       0,  1493,  1494,  1495,  1496,     0,     0,  1497,     0,  2028,
    1499,  1500,  1501,     0,  1502,     0,  1503,  1504,     0,  1505,
       0,  1506,  1507,     0,  1508,  1509,  1510,  1511,     0,     0,
       0,     0,     0,  1512,     0,  1513,     0,  1514,  1515,     0,
    1516,  1517,  1518,  1519,  1520,  1521,     0,  1522,  1523,  1524,
    1525,  1526,     0,     0,     0,  1527,     0,  1528,     0,  1529,
       0,     0,     0,     0,     0,     0,     0,     0,  1530,     0,
    1531,  1532,  1533,  1534,  1535,  1536,  1537,     0,     0,  1538,
    1539,     0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,
       0,  1544,     0,  1545,     0,  1546,  1547,  1548,  1549,     0,
       0,     0,     0,     0,     0,   147,   148,   149,   150,   151,
     152,     0,  1550,  1551,  1552,     0,     0,     0,     0,   153,
     154,     0,  1553,     0,  1554,  1555,  1556,   155,   156,     0,
       0,  1557,     0,  1558,  1559,  1560,     0,     0,  1561,   157,
       0,     0,  1562,  1563,     0,  1564,  1565,  1566,  1567,     0,
       0,     0,  1568,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,   923,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1569,  1570,  1571,  1572,  1573,     0,   163,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   924,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1574,  1575,  1576,  1577,  1578,  1579,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,   449,   450,   451,   452,   453,   454,   455,   167,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,   169,   170,     0,     0,     0,   171,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,   619,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,   449,   450,   451,   452,
     453,   454,   455,   162,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,   926,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,   620,     0,     0,     0,     0,   166,
       0,     0,     0,   937,     0,     0,     0,     0,     0,   167,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   946,     0,     0,     0,     0,     0,     0,   449,   450,
     451,   452,   453,   454,   455,   621,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,     0,   947,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   726,
       0,   727,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,   948,     0,     0,
       0,     0,     0,   162,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   452,   453,   454,
     455,   949,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,   950,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,   951,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   449,   450,   451,   452,
     453,   454,   455,   728,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   952,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
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
     152,   729,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   953,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,     0,   959,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,  1319,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,  1320,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1331,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,  1341,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   354,     0,     0,     0,     0,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,   660,     0,
     449,   450,   451,   452,   453,   454,   455,  1357,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,  1358,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,   449,   450,   451,   452,   453,
     454,   455,  1359,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,     0,     0,     0,  1362,   451,   452,   453,   454,
     455,  1307,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,  1363,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,  1813,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,     0,     0,
    1308,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,   896,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,   897,     0,     0,     0,     0,
       0,     0,   449,   450,   451,   452,   453,   454,   455,   876,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,   901,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     903,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   904,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,   905,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,   914,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     450,   451,   452,   453,   454,   455,  1293,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   915,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,   450,
     451,   452,   453,   454,   455,   916,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     449,   450,   451,   452,   453,   454,   455,   917,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   918,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
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
     154,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,   919,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,   449,   450,   451,   452,
     453,   454,   455,   162,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   920,
       0,     0,     0,     0,     0,     0,  1298,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,   449,   450,   451,   452,   453,   454,   455,   921,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     925,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   938,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,   939,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,   940,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,   941,     0,     0,  -646,
    -646,  -646,  -646,   162,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,  1770,   942,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   943,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,   449,   450,   451,   452,   453,   454,   455,   167,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   944,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     945,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
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
     154,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,   956,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,   449,   450,   451,   452,
     453,   454,   455,   162,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,  1772,     0,   957,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   958,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,  1311,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,  1316,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   449,   450,   451,   452,   453,   454,
     455,  1317,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
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
     154,     0,     0,     0,     0,     0,     0,   155,   449,   450,
     451,   452,   453,   454,   455,  1318,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,   159,     0,     0,   160,   161,  1321,     0,     0,     0,
       0,     0,     0,   162,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,  1322,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  1323,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,   449,   450,   451,   452,   453,   454,   455,
    1324,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   449,   450,   451,
     452,   453,   454,   455,  1325,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,  1326,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,   210,
       0,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,   259,   260,   261,     0,     0,     0,     0,     0,
       0,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,  1329,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1330,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,   449,   450,   451,   452,   453,   454,   455,
    1342,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   449,   450,   451,
     452,   453,   454,   455,  1343,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,  1356,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,  1360,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
    1361,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
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
     470,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,  1434,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,  1631,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,  1694,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,  1750,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,  1778,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
    1779,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,   449,
     450,   451,   452,   453,   454,   455,  1780,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,   449,   450,   451,   452,   453,   454,   455,
    1781,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,  1782,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,  1791,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,  1808,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,  1809,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,    49,     0,
       0,     0,     0,     0,     0,  1810,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,  1811,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1812,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,    50,     0,     0,  1814,     0,     0,
       0,    51,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,  1632,  1633,     0,     0,
    1815,  1634,     0,  1635,     0,     0,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1195,     0,    54,     0,  1836,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1636,  1637,  1195,  1638,
    1196,     0,     0,     0,  1197,     0,     0,  1198,     0,  1199,
    1842,     0,  1200,     0,     0,     0,     0,     0,     0,     0,
    1197,     0,     0,  1198,    55,  1199,     0,  1201,  1200,     0,
       0,     0,     0,  1846,  1202,  1203,     0,     0,     0,     0,
       0,    56,     0,  1201,    57,     0,     0,     0,     0,     1,
    1202,  1203,     0,     2,     0,     0,     0,     0,     0,  1851,
       0,     0,     0,    58,    59,     0,     0,     0,  1204,     0,
       0,     0,     0,     0,     0,     3,     0,     0,    60,     0,
       4,     0,     0,  1949,  1204,  1205,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1971,     0,     0,     0,
       0,     0,     0,     6,     7,     0,  1639,  1640,     0,  1206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1984,
       0,     0,     0,     0,     0,  1206,     0,     0,     0,   354,
       0,  1207,     0,     0,     0,     0,     0,     0,     0,  1208,
       0,     0,  1994,     0,   866,     0,     0,  1207,     0,     0,
       0,     0,     0,     8,     0,  1208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1995,     0,     0,     0,   449,
     450,   451,   452,   453,   454,   455,    61,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,  1209,     9,     0,    10,     0,     0,
       0,   524,   525,     0,   526,    11,   527,   528,     0,     0,
    1209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   529,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,   530,   531,   532,   533,     0,     0,     0,
       0,     0,   534,     0,   449,   450,   451,   452,   453,   454,
     455,   535,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,   536,     0,     0,     0,     0,     0,     0,     0,   537,
       0,     0,     0,     0,     0,     0,     0,   538,     0,     0,
       0,     0,     0,     0,   539,     0,     0,   540,     0,     0,
     541,   542,     0,     0,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,   543,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   544,   545,     0,     0,
     546,   547,     0,     0,     0,     0,   548,     0,   549,     0,
       0,  1106,     0,   550,   551,     0,     0,     0,     0,   552,
     553,  1100,     0,     0,     0,     0,   554,     0,   555,     0,
       0,     0,     0,   556,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   449,   450,
     451,   452,   453,   454,   455,  1099,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,   448,     0,     0,     0,     0,     0,  1610,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   471,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,  1304,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   906,
       0,  1611,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,   449,   450,   451,
     452,   453,   454,   455,   968,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,   449,   450,   451,   452,   453,   454,   455,  1162,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470
};

static const yytype_int16 yycheck[] =
{
      81,  1030,   983,  1287,  1180,  1270,   590,  1056,   994,   995,
     269,  1272,   998,   805,   806,   488,  1045,   270,   317,   811,
       3,   813,   127,  1052,    41,     5,   145,    20,  1595,  1390,
    1077,   127,   864,     8,   145,     3,     4,     5,     6,     7,
       8,     3,     3,     3,   183,     3,     3,   183,  1192,  1193,
       4,    88,    79,    20,   150,     6,  1601,    43,    82,   270,
      43,   142,   143,     4,    35,   254,    40,  1211,     3,    18,
      98,   219,   153,   154,   155,    63,     3,     3,   159,   219,
     333,   200,    70,     6,    47,   244,   103,     3,   244,   200,
      16,     3,     3,     3,     3,    18,    67,   130,    98,   181,
       5,    70,   504,   188,   203,   209,     4,     5,     6,     7,
      18,   231,  1654,  1655,     3,     3,    46,    47,   251,  2065,
      91,   358,   359,  1665,  1666,  1345,  1346,  1392,    99,     3,
     962,     3,   231,   237,  1354,  1355,    66,   125,    26,    88,
     111,   129,  2088,  2089,   238,    30,    31,    32,     3,    76,
      55,    63,   244,   186,    43,   244,   125,   559,   146,   145,
     744,   246,   244,   257,    76,    76,    64,   155,    77,   104,
      86,  2117,   361,   757,    10,    11,    12,    13,    14,    15,
      16,   262,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   185,     3,   227,
     171,   228,   361,   359,   861,    77,   863,   181,  1194,   177,
     247,   359,  1241,   237,   200,   141,   185,   127,   167,   359,
     473,   192,   361,  1252,  1273,   361,   177,   168,   361,   192,
    1259,   206,   181,   207,   220,   145,  1283,   237,   147,  1253,
     359,  1783,  1784,  1785,  1786,  1787,  1788,   358,   359,   348,
     160,     3,   240,   179,   177,  1797,   361,  1401,   220,  1801,
     168,   215,   216,  1805,   194,   361,  1627,   359,   852,   350,
     359,   240,     3,   354,   254,   147,   247,   187,     3,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     763,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,  1873,   388,   389,   390,
     231,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,  1160,  1874,
       3,  1596,  1597,   414,   415,     3,   589,     3,   419,   420,
       3,   358,   147,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   358,   768,   769,   449,   450,
     451,   452,   453,   296,   776,   358,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     601,   358,   360,   604,   475,   147,  1680,   359,   359,   359,
    1381,   359,   359,     3,   219,    98,   617,   244,   251,    68,
      86,  1425,   310,   311,   312,  1444,   147,  1446,   124,   821,
     822,   823,   147,  1437,  1644,  1645,  1646,  1647,  1648,  1649,
    1222,   128,  1224,  1225,  1976,  1092,  1656,  1094,  1980,   145,
    1660,    70,    70,    89,  1664,   353,   354,   355,   356,   304,
     305,   306,   307,   127,   130,   148,   104,    66,  1472,    18,
      63,   359,     3,     4,     5,     6,     7,     8,    18,  1483,
     146,    36,    41,    76,   147,     3,   115,   116,   104,   147,
    1764,   147,   115,   116,   147,   144,    51,   184,  1749,  1503,
     749,   220,   791,   792,   140,   154,   125,  2039,  2040,   161,
    2042,  2043,   161,  1517,   906,   907,   587,  1683,   244,   244,
     186,    70,  1526,   986,    43,   174,   989,   214,   361,   231,
     249,    91,   359,    52,   360,   361,     3,   203,    66,   177,
     206,   231,   613,   614,   103,    63,     0,   199,    88,   245,
     199,   111,   623,     9,   237,   104,   361,   147,    76,   357,
     224,   177,  1566,  1582,    20,   231,   185,   185,   217,  1588,
      10,    11,    12,    13,    14,    15,    16,   176,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  2031,   359,   194,  1170,    10,    11,    12,
      13,    14,    15,    16,   996,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     219,   240,   240,   252,   244,  2063,  2064,   167,   220,   252,
    1606,   251,    57,   359,   359,    11,    61,     5,    54,    15,
     147,   181,    58,    94,  1918,   146,   177,    94,   176,  2087,
     721,   722,    20,   724,   155,   360,   361,   249,   729,    10,
      11,    12,    13,    14,    15,    16,   194,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   348,   360,   361,   110,   137,   127,    43,   105,
     137,   219,   108,    79,   145,     3,  1906,    52,   145,  1973,
    1910,   360,   361,   150,    90,    43,  1745,   123,    43,   160,
    1729,  1715,   540,   160,    52,     3,  1720,    52,   546,     3,
     548,  1740,     3,  1742,     5,    31,    32,   143,   360,   361,
       3,   974,   200,  1988,     3,   151,    13,    14,   358,    16,
     126,   361,    19,    79,     3,   360,   361,   818,   134,    74,
      75,   360,   361,   146,    90,  1921,   360,   361,   360,   361,
     360,   361,   963,  2037,    10,    11,    12,    13,    14,    15,
      16,   972,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   360,   361,     3,
     126,   177,   360,   361,     3,   866,   225,   868,   134,   360,
     361,   231,   873,   874,   146,   876,     3,  2017,  2018,   880,
    2020,  2021,   228,     3,   230,     3,   887,   888,   889,   890,
     361,   892,   893,   894,   360,   361,   360,   361,   899,   900,
       3,   902,   248,   360,   361,   221,     3,   908,   909,   910,
     258,   177,     4,     5,  1848,   360,   361,     4,     5,  1868,
    1821,   922,   923,   924,     3,   926,   360,   361,   360,   361,
    1864,   360,   361,   360,   361,   358,   937,  1068,    26,    27,
      28,    29,    30,    31,    32,   946,   947,   948,   949,   950,
     951,   952,   953,  1275,   955,   221,   360,   361,   959,    43,
     527,   528,   529,   530,     3,   532,   359,   968,   535,   536,
     537,   360,   361,   360,   361,   542,   543,   544,   258,   980,
     547,   360,   361,   181,   360,   361,   987,   359,   254,   360,
     361,   361,     3,    10,    11,    12,    13,    14,    15,    16,
    1934,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,   360,   361,   360,
     361,   360,   361,   360,   361,   360,   361,  1028,   360,   361,
    1161,   360,   361,  1164,  1165,  1166,   360,   361,    10,    11,
      12,    13,    14,    15,    16,   359,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   798,   799,   358,   801,   802,   803,   360,   361,     3,
     807,   808,   809,   360,   361,   812,   360,   361,   258,   360,
     361,  1082,   360,   361,  1085,   360,   361,   360,   361,   258,
    1091,   360,   361,   359,    49,    50,   360,   361,   258,  1100,
     360,   361,   360,   361,   258,  1106,  1107,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   258,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   258,    10,    11,    12,    13,    14,    15,
      16,  1162,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   360,   361,   360,
     361,   258,  1183,   224,   360,   361,     3,  1188,   360,   361,
     360,   361,    10,    11,    12,    13,    14,    15,    16,     8,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   360,   361,    10,    11,    12,
      13,    14,    15,    16,     9,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     359,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1265,   359,    10,    11,    12,    13,
      14,    15,    16,   359,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   360,   361,   359,  1307,   360,   361,  1310,
      49,    50,   358,   359,   361,   360,   361,   359,  1319,  1320,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1331,   358,   359,    43,   360,   361,   360,   361,   359,  1340,
    1341,   360,   361,   360,   361,   360,   361,   165,   360,   361,
     759,   760,   359,   978,   979,   359,  1357,  1358,  1359,  1385,
    1386,  1362,  1363,   359,  1365,   359,  1367,   359,  1369,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1379,  1380,
     359,   359,   359,   359,   359,   359,  1387,  1388,   360,   361,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   359,  1405,   359,   359,   359,  1409,   359,
     359,   359,     3,     4,     5,     6,     7,     8,  1419,    10,
     359,    12,   359,   359,   359,    16,    17,    18,   359,    20,
     359,   359,  1433,    24,    25,    26,    27,    28,   359,   359,
     359,   359,   359,   359,   359,   359,    37,   359,   359,   359,
     359,    42,    43,   359,   359,    46,    45,   360,   361,   359,
      51,    52,    53,    54,    55,   359,   359,    58,   359,    60,
      61,    62,   359,   359,    65,    66,   359,    68,    69,    70,
     360,   361,   359,    74,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    87,   359,   359,   359,
     359,    92,   359,    45,   360,   361,    97,    98,    99,   359,
     359,   359,   359,   104,   105,   359,   107,   108,   109,   110,
     359,   359,   113,   359,   115,   116,   117,   118,   359,   120,
     359,   122,   123,   359,   125,   359,   127,   128,   359,   130,
     131,   132,   133,   361,   359,   359,   359,   359,   139,   359,
     141,   359,   143,   144,   359,   146,   147,   148,   149,   150,
     151,   359,   153,   154,   155,   156,   157,   360,   361,   359,
     161,   359,   163,   359,   165,   359,   359,   359,   359,   359,
     359,   359,    63,   174,    63,   176,   177,   178,   179,   180,
     181,   182,   361,    63,   185,   186,   254,   224,     3,     3,
     191,     3,   193,   194,   195,   181,   197,     3,   199,   181,
     201,   202,   203,   204,   258,  1616,  1617,   361,     3,   181,
     258,  1622,     3,  1624,     3,    26,     3,   218,   219,   220,
       3,     3,     3,     3,     3,     3,     3,   228,     3,   230,
     231,   232,     3,     3,     3,   360,   237,   360,   239,   240,
     241,   360,   360,   244,   360,   360,   360,   248,   249,   360,
     251,   252,   253,   254,   360,   360,   360,   258,     5,   360,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   360,   359,     3,     3,   299,   300,
     301,   302,   303,     3,     3,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,  1746,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   360,   154,   180,     3,     3,   357,   358,   359,   360,
     361,   362,     3,  1774,     3,   224,     3,     3,     3,     3,
       3,     3,    10,    11,    12,    13,    14,    15,    16,  1790,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,     3,     3,   356,     3,
       5,    56,  1813,     5,     5,   359,   359,  1818,   359,     3,
       4,     5,     6,     7,     8,  1826,    10,   359,    12,   359,
     359,   359,    16,    17,    18,     3,    20,     3,  1839,  1840,
      24,    25,    26,    27,    28,     3,     3,   360,     3,   361,
       3,   181,   360,    37,   181,     3,   181,     3,    42,    43,
     258,   182,    46,     3,     3,   360,   360,    51,    52,    53,
      54,    55,   220,   360,    58,   327,    60,    61,    62,   327,
     327,    65,    66,   360,    68,    69,    70,   327,   327,   220,
      74,   359,   359,   359,   359,   127,   155,   361,   155,   155,
     154,   181,   154,    87,     3,     3,   224,   224,    92,     5,
       5,     5,     4,    97,    98,    99,     5,     5,   359,   177,
     104,   105,   359,   107,   108,   109,   110,   197,   181,   113,
     246,   115,   116,   117,   118,     3,   120,     3,   122,   123,
       3,   125,     3,   127,   128,   181,   130,   131,   132,   133,
       3,     3,    55,   163,    83,   139,    20,   141,  1959,   143,
     144,   360,   146,   147,   148,   149,   150,   151,   359,   153,
     154,   155,   156,   157,   183,   152,     4,   161,   327,   163,
     327,   165,   327,   327,   327,   327,   327,     5,   327,     5,
     174,   327,   176,   177,   178,   179,   180,   181,   182,   220,
     132,   185,   186,   359,   359,   359,   359,   191,   359,   193,
     194,   195,     3,   197,   131,   199,     3,   201,   202,   203,
     204,   361,     3,     3,   359,   155,   359,   155,     3,    70,
     246,     3,   360,  2034,   218,   219,   220,   360,   360,    52,
     360,   131,   246,   181,   228,   359,   230,   231,   232,   359,
     359,   359,   359,   237,     3,   239,   240,   241,     3,   359,
     244,   359,   155,     3,   248,   249,   361,   251,   252,   253,
     254,   359,   155,   359,   258,     4,     6,     4,     4,   361,
     359,   196,    10,    11,    12,    13,    14,    15,    16,   361,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   155,     3,     3,   359,    55,
     360,   360,   360,   360,   360,   299,   300,   301,   302,   303,
     360,   154,   359,     3,   359,   359,   359,   139,    20,   359,
     177,     3,    44,   361,     3,   155,     4,   197,   155,   359,
     359,   359,   359,     5,   359,     3,     4,     5,     6,     7,
       8,   359,    10,   360,    12,   360,   359,   359,    16,    17,
      18,   219,    20,     4,     4,     3,    24,    25,    26,    27,
      28,   359,   359,   357,   358,   359,   360,   361,   362,    37,
     359,   359,     3,   359,    42,    43,   359,   359,    46,     3,
       3,     3,   359,    51,    52,    53,    54,    55,   359,   109,
      58,   246,    60,    61,    62,   359,   246,    65,    66,     3,
      68,    69,    70,     3,   359,   359,    74,   359,   359,    20,
     181,     4,   237,   328,   361,   327,   327,   360,     3,    87,
       3,     3,     3,   360,    92,   360,   360,   360,     5,    97,
      98,    99,     5,    43,    52,   359,   104,   105,   359,   107,
     108,   109,   110,   359,     4,   113,   360,   115,   116,   117,
     118,    52,   120,   360,   122,   123,   201,   125,   359,   127,
     128,   155,   130,   131,   132,   133,   360,   246,   360,   359,
     361,   139,   359,   141,   359,   143,   144,   359,   146,   147,
     148,   149,   150,   151,   155,   153,   154,   155,   156,   157,
       3,    80,   361,   161,   359,   163,   360,   165,    55,   182,
     359,    20,   360,    18,   360,   359,   174,   360,   176,   177,
     178,   179,   180,   181,   182,   360,     3,   185,   186,   359,
     359,   155,     3,   191,   360,   193,   194,   195,   360,   197,
      52,   199,     3,   201,   202,   203,   204,     3,    55,   360,
     359,   359,   359,     3,     3,   359,     3,    55,   360,   360,
     218,   219,   220,   360,   327,   327,   360,   327,   327,   198,
     228,   360,   230,   231,   232,   131,     3,   247,     3,   237,
     191,   239,   240,   241,     3,     5,   244,     5,    52,   360,
     248,   249,   122,   251,   252,   253,   254,    69,   147,   157,
     258,    10,    11,    12,    13,    14,    15,    16,   253,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     5,   191,    20,   361,     3,    92,
     361,     3,   150,   361,     3,   360,   360,   360,   360,   360,
     360,   299,   300,   301,   302,   303,    10,    11,    12,    13,
      14,    15,    16,   360,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   359,
     359,     3,     4,     5,     6,     7,     8,   360,    10,   360,
      12,   359,   359,     3,    16,    17,    18,     3,    20,   360,
       3,     3,    24,    25,    26,    27,    28,   360,     3,   357,
     358,   359,   360,   361,   362,    37,   359,   359,   210,   210,
      42,    43,   361,   359,    46,   191,     3,     3,    20,    51,
      52,    53,    54,    55,     3,     3,    58,   360,    60,    61,
      62,   164,   360,    65,    66,   164,    68,    69,    70,   361,
       3,     3,    74,     3,   360,   360,   219,     3,   208,   359,
     359,     3,   207,   360,   360,    87,   360,   360,     5,     3,
      92,   359,   142,    88,   249,    97,    98,    99,   158,   181,
     229,   181,   104,   105,   175,   107,   108,   109,   110,   175,
       5,   113,     5,   115,   116,   117,   118,    88,   120,  1684,
     122,   123,   879,   125,   355,   127,   128,  1615,   130,   131,
     132,   133,  1187,   482,   113,  1382,   591,   139,   475,   141,
     976,   143,   144,  2054,   146,   147,   148,   149,   150,   151,
     344,   153,   154,   155,   156,   157,    76,  1774,   842,   161,
     603,   163,  1285,   165,  1745,  1274,  1262,  2093,   146,   810,
     825,   325,   174,    -1,   176,   177,   178,   179,   180,   181,
     182,   862,  1423,   185,   186,   521,    -1,    -1,    -1,   191,
      -1,   193,   194,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,   239,   240,   241,
      -1,    -1,   244,    -1,    -1,    -1,   248,   249,    -1,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    10,    11,    12,
      13,    14,    15,    16,   298,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,   300,   301,
     302,   303,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   360,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   357,   358,   359,   360,   361,
     362,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
      -1,   107,   108,   109,   110,    -1,    -1,   113,    -1,   115,
     116,   117,   118,    -1,   120,    -1,   122,   123,    -1,   125,
      -1,   127,   128,    -1,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,    -1,   141,    -1,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
     176,   177,   178,   179,   180,   181,   182,    -1,    -1,   185,
     186,    -1,    -1,    -1,    -1,   191,    -1,   193,   194,   195,
      -1,   197,    -1,   199,    -1,   201,   202,   203,   204,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,   239,   240,   241,    -1,    -1,   244,    -1,
      -1,    -1,   248,   249,    -1,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   299,   300,   301,   302,   303,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   360,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   357,   358,   359,   360,   361,   362,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,   105,    -1,   107,   108,   109,
     110,    -1,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,    -1,   122,   123,    -1,   125,    -1,   127,   128,    -1,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
      -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,    -1,    -1,
      -1,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,   176,   177,   178,   179,
     180,   181,   182,    -1,    -1,   185,   186,    -1,    -1,    -1,
      -1,   191,    -1,   193,   194,   195,    -1,   197,    -1,   199,
      -1,   201,   202,   203,   204,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     240,   241,    -1,    -1,   244,    -1,    -1,    -1,   248,   249,
      -1,   251,   252,   253,   254,    -1,    -1,    -1,   258,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,
     300,   301,   302,   303,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   360,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   357,   358,   359,
     360,   361,   362,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,    -1,   107,   108,   109,   110,    -1,    -1,   113,
      -1,   115,   116,   117,   118,    -1,   120,    -1,   122,   123,
      -1,   125,    -1,   127,   128,    -1,   130,   131,   132,   133,
      -1,    -1,    -1,    -1,    -1,   139,    -1,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,    -1,    -1,    -1,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,   176,   177,   178,   179,   180,   181,   182,    -1,
      -1,   185,   186,    -1,    -1,    -1,    -1,   191,    -1,   193,
     194,   195,    -1,   197,    -1,   199,    -1,   201,   202,   203,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,   239,   240,   241,    -1,    -1,
     244,    -1,    -1,    -1,   248,   249,    -1,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   299,   300,   301,   302,   303,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   360,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   357,   358,   359,   360,   361,   362,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,   105,    -1,   107,
     108,   109,   110,    -1,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,    -1,   122,   123,    -1,   125,    -1,   127,
     128,    -1,   130,   131,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
      -1,    -1,    -1,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,   185,   186,    -1,
      -1,    -1,    -1,   191,    -1,   193,   194,   195,    -1,   197,
      -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,   239,   240,   241,    -1,    -1,   244,    -1,    -1,    -1,
     248,   249,    -1,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   299,   300,   301,   302,   303,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     360,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   357,
     358,   359,   360,   361,   362,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,   105,    -1,   107,   108,   109,   110,    -1,
      -1,   113,    -1,   115,   116,   117,   118,    -1,   120,    -1,
     122,   123,    -1,   125,    -1,   127,   128,    -1,   130,   131,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,    -1,   141,
      -1,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,   185,   186,    -1,    -1,    -1,    -1,   191,
      -1,   193,   194,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,   239,   240,   241,
      -1,    -1,   244,    -1,    -1,    -1,   248,   249,    -1,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,   300,   301,
     302,   303,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   360,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   357,   358,   359,   360,   361,
     362,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
      -1,   107,   108,   109,   110,    -1,    -1,   113,    -1,   115,
     116,   117,   118,    -1,   120,    -1,   122,   123,    -1,   125,
      -1,   127,   128,    -1,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,    -1,   141,    -1,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
     176,   177,   178,   179,   180,   181,   182,    -1,    -1,   185,
     186,    -1,    -1,    -1,    -1,   191,    -1,   193,   194,   195,
      -1,   197,    -1,   199,    -1,   201,   202,   203,   204,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,   239,   240,   241,    -1,    -1,   244,    -1,
      -1,    -1,   248,   249,    -1,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   299,   300,   301,   302,   303,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   360,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   357,   358,   359,   360,   361,   362,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,   105,    -1,   107,   108,   109,
     110,    -1,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,    -1,   122,   123,    -1,   125,    -1,   127,   128,    -1,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,   139,
      -1,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,    -1,    -1,
      -1,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,   176,   177,   178,   179,
     180,   181,   182,    -1,    -1,   185,   186,    -1,    -1,    -1,
      -1,   191,    -1,   193,   194,   195,    -1,   197,    -1,   199,
      -1,   201,   202,   203,   204,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     240,   241,    -1,    -1,   244,    -1,    -1,    -1,   248,   249,
      -1,   251,   252,   253,   254,    -1,    -1,    -1,   258,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,
     300,   301,   302,   303,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   360,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   357,   358,   359,
     360,   361,   362,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,    -1,   107,   108,   109,   110,    -1,    -1,   113,
      -1,   115,   116,   117,   118,    -1,   120,    -1,   122,   123,
      -1,   125,    -1,   127,   128,    -1,   130,   131,   132,   133,
      -1,    -1,    -1,    -1,    -1,   139,    -1,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,    -1,    -1,    -1,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,   176,   177,   178,   179,   180,   181,   182,    -1,
      -1,   185,   186,    -1,    -1,    -1,    -1,   191,    -1,   193,
     194,   195,    -1,   197,    -1,   199,    -1,   201,   202,   203,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,   239,   240,   241,    -1,    -1,
     244,    -1,    -1,    -1,   248,   249,    -1,   251,   252,   253,
     254,    -1,    -1,    -1,   258,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   299,   300,   301,   302,   303,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   360,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   357,   358,   359,   360,   361,   362,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,   105,    -1,   107,
     108,   109,   110,    -1,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,    -1,   122,   123,    -1,   125,    -1,   127,
     128,    -1,   130,   131,   132,   133,    -1,    -1,    -1,    -1,
      -1,   139,    -1,   141,    -1,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
      -1,    -1,    -1,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,   185,   186,    -1,
      -1,    -1,    -1,   191,    -1,   193,   194,   195,    -1,   197,
      -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,   239,   240,   241,    -1,    -1,   244,    -1,    -1,    -1,
     248,   249,    -1,   251,   252,   253,   254,    -1,    -1,    -1,
     258,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   299,   300,   301,   302,   303,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     360,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   357,
     358,   359,   360,   361,   362,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,   105,    -1,   107,   108,   109,   110,    -1,
      -1,   113,    -1,   115,   116,   117,   118,    -1,   120,    -1,
     122,   123,    -1,   125,    -1,   127,   128,    -1,   130,   131,
     132,   133,    -1,    -1,    -1,    -1,    -1,   139,    -1,   141,
      -1,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,   185,   186,    -1,    -1,    -1,    -1,   191,
      -1,   193,   194,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,   239,   240,   241,
      -1,    -1,   244,    -1,    -1,    -1,   248,   249,    -1,   251,
     252,   253,   254,    -1,    -1,    -1,   258,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,   300,   301,
     302,   303,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   360,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   357,   358,   359,   360,   361,
     362,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
      -1,   107,   108,   109,   110,    -1,    -1,   113,    -1,   115,
     116,   117,   118,    -1,   120,    -1,   122,   123,    -1,   125,
      -1,   127,   128,    -1,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,   139,    -1,   141,    -1,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,    -1,    -1,    -1,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
     176,   177,   178,   179,   180,   181,   182,    -1,    -1,   185,
     186,    -1,    -1,    -1,    -1,   191,    -1,   193,   194,   195,
      -1,   197,    -1,   199,    -1,   201,   202,   203,   204,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,   218,   219,   220,    -1,    -1,    -1,    -1,    17,
      18,    -1,   228,    -1,   230,   231,   232,    25,    26,    -1,
      -1,   237,    -1,   239,   240,   241,    -1,    -1,   244,    37,
      -1,    -1,   248,   249,    -1,   251,   252,   253,   254,    -1,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,   361,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   299,   300,   301,   302,   303,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   357,   358,   359,   360,   361,   362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   177,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,   212,   213,    -1,    -1,    -1,   217,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    10,    11,    12,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,   177,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   233,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,   361,    -1,    -1,
      -1,    -1,    -1,    81,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    13,    14,    15,
      16,   361,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   361,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,   361,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    10,    11,    12,    13,
      14,    15,    16,   211,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   361,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   361,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,   361,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   361,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,   361,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   361,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   361,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   252,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      10,    11,    12,    13,    14,    15,    16,   361,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,   361,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   361,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   361,    12,    13,    14,    15,
      16,   131,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,   361,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   361,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
     360,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,   360,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   127,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,   360,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   360,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,   360,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   104,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   360,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   360,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,   360,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    10,    11,    12,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   360,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    10,    11,    12,    13,    14,    15,    16,   360,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   360,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,   360,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,   360,    -1,    -1,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   360,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   360,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   177,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   360,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     360,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,   360,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    10,    11,    12,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,   360,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   360,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    10,    11,    12,    13,    14,    15,
      16,   360,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,     3,     4,     5,     6,     7,
       8,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,   360,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   360,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   360,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     360,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    10,    11,    12,
      13,    14,    15,    16,   360,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,    -1,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,   349,   350,   351,   352,    -1,    -1,    -1,    -1,    -1,
      -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   360,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   360,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     360,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    10,    11,    12,
      13,    14,    15,    16,   360,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   360,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     360,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
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
      32,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   360,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   360,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   360,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   360,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     360,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   360,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    10,    11,    12,    13,    14,    15,    16,
     360,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   360,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   360,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   360,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   360,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   360,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   360,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    86,    -1,    -1,   360,    -1,    -1,
      -1,    93,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    95,    96,    -1,    -1,
     360,   100,    -1,   102,    -1,    -1,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,   146,    -1,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    18,   138,
      36,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    45,
     360,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,   186,    45,    -1,    63,    48,    -1,
      -1,    -1,    -1,   360,    70,    71,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    63,   206,    -1,    -1,    -1,    -1,    34,
      70,    71,    -1,    38,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,   225,   226,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,   240,    -1,
      65,    -1,    -1,   360,   104,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,    -1,   255,   256,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,   252,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,   360,    -1,   232,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   185,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   348,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   240,   190,    -1,   192,    -1,    -1,
      -1,    53,    54,    -1,    56,   200,    58,    59,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    10,    11,    12,    13,    14,    15,
      16,   123,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    -1,   166,    -1,    -1,   169,    -1,    -1,
     172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   189,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,    -1,    -1,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,    -1,
      -1,   127,    -1,   235,   236,    -1,    -1,    -1,    -1,   241,
     242,   232,    -1,    -1,    -1,    -1,   248,    -1,   250,    -1,
      -1,    -1,    -1,   255,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    10,    11,
      12,    13,    14,    15,    16,   115,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    41,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    43,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,   103,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    42,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    42,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    78,    98,    99,   148,   190,
     192,   200,   219,   220,   234,   237,   245,   364,   400,   401,
     438,   442,   443,   446,   447,   450,   451,   452,   454,   470,
     471,   480,   483,   485,   486,   487,   509,   512,   519,   520,
     523,   526,   527,   530,   203,   231,   348,   231,     3,    10,
      86,    93,   129,   130,   146,   186,   203,   206,   225,   226,
     240,   348,   491,     3,   439,    86,   130,   146,   186,   203,
     206,   231,   348,   462,   231,   231,   462,     8,   206,   510,
     511,   419,   231,   462,   481,     3,    86,     0,   357,   449,
       3,     3,     3,     3,   359,   200,   147,   484,     3,   146,
       3,     3,    77,   147,     3,     3,   484,   225,   146,   484,
     231,   472,     3,   127,   145,   160,   187,   440,     3,   147,
       3,   147,     3,     3,   147,     3,   147,     3,   147,     3,
     147,     3,   147,    94,   137,   145,   150,   160,   463,     3,
       3,   463,     9,    20,     3,   104,   361,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    37,    64,    69,
      72,    73,    81,    97,   101,   137,   167,   177,   205,   212,
     213,   217,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     297,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   349,   350,
     351,   352,   359,   365,   420,   421,     3,   145,   160,     3,
     359,   423,   424,   425,   427,   437,     3,   364,    46,    47,
      66,   194,    91,   111,    35,    67,    91,    99,   111,   171,
     192,   247,    47,   192,   528,   358,     3,     4,     5,     6,
       7,     8,   177,   360,   521,   522,   130,   186,   258,     3,
      43,     3,   359,   181,     3,   147,   258,   359,    36,    51,
     524,     3,     3,    77,   147,     3,   484,   359,   473,   358,
     441,     3,   440,   127,   361,   258,   258,   258,   258,   258,
     258,   258,     3,   224,     3,   365,   365,   511,   358,   359,
       9,   365,   365,   365,   252,   365,   399,   358,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   365,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    43,   422,   127,   150,   361,   361,   358,   422,   401,
     423,   219,   361,    68,   144,   161,   174,   199,   217,   428,
     430,    43,   426,    45,    45,    63,    76,     3,    76,    63,
       3,    63,    76,    63,     3,    76,     3,    63,    76,    63,
     254,   224,    18,   168,   353,   354,   355,   356,   529,     3,
     360,   361,     3,     3,    53,    54,    56,    58,    59,    74,
     105,   106,   107,   108,   114,   123,   143,   151,   159,   166,
     169,   172,   173,   189,   218,   219,   222,   223,   228,   230,
     235,   236,   241,   242,   248,   250,   255,   505,   181,     3,
      16,   141,   179,   513,   514,   515,     3,   181,   258,     3,
     513,    98,   148,   237,   525,   181,     3,   147,   258,   528,
       3,     3,   474,   127,   224,   475,    26,   251,   402,   244,
     423,     3,     3,     3,     3,     3,     3,     3,     3,   219,
     359,   464,     3,   219,   464,     3,   365,   370,   371,   365,
     365,   399,   115,   116,   252,     3,     3,   376,   365,    57,
     162,   233,   365,   397,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   360,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   360,
     365,   365,   365,   360,   365,   365,   365,   365,   365,   365,
      26,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   360,   360,   360,   360,   360,   365,   365,   360,
     360,   360,   365,   365,     5,   360,   360,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   360,
     360,   365,   365,   365,   365,   365,     6,    18,   177,   296,
     359,    13,    14,    16,    19,   365,    37,    39,   211,   359,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,     3,   423,     3,   421,     3,   448,     3,
     124,   145,   245,   434,   360,   360,     3,   482,   424,   161,
     199,   431,   425,   154,   180,   429,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   505,     3,   224,     3,     3,
       3,     5,     3,   356,     5,     5,   254,     5,    55,     5,
     522,   359,   359,   359,   501,   501,   501,   501,   501,   501,
     359,   501,   501,   501,    56,   502,   502,   501,   501,   501,
     359,   502,   501,   502,   359,   359,    18,    70,   104,     3,
     505,     3,     3,     3,   360,   361,   244,   359,     3,     3,
     181,   360,   181,     3,   181,   258,     3,   145,   200,   358,
     359,   507,   508,   360,   361,     4,   215,   216,   476,   365,
     182,   412,   423,   402,   441,     3,   469,     3,   465,   249,
     401,   469,   249,   401,   361,   360,   232,   115,   116,   365,
     365,   360,   401,   127,   361,   360,   127,   365,   361,   361,
     361,   360,   360,   360,   360,   360,   360,   361,   361,   361,
     361,   360,   361,   361,   361,   360,   360,   360,   360,   361,
     361,   360,   361,   360,   360,   360,    43,   361,   361,   361,
     361,   298,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   361,   361,   361,   360,   361,   327,   327,   327,
     360,   361,   360,   361,   360,   327,   327,   361,   360,   360,
     360,   360,   360,   360,   360,   360,   361,   361,   361,   361,
     361,   361,   361,   361,   360,   361,   360,   360,   360,   361,
       6,   177,   372,   374,   365,   365,   359,   365,    42,   359,
     359,   359,   366,   402,   127,   361,   422,   155,   155,   155,
      20,   358,   361,   402,   429,   429,   154,   181,   425,   154,
      70,   125,   185,   240,   505,   505,     3,   500,   505,     3,
     224,   224,     5,     5,   513,   513,     5,   503,   504,   503,
     503,     4,   506,   503,   503,   503,   504,   504,   503,   503,
     503,   506,   504,   503,   504,     5,     5,   177,   359,   365,
     359,   505,   505,   505,   197,   515,   246,     3,   304,   305,
     306,   307,   444,   445,   244,   359,   181,     3,    43,    52,
       3,   244,   359,     3,     3,   181,     3,    63,    70,   125,
     129,   146,   155,   185,   240,   492,   493,   499,   426,     3,
      79,    90,   126,   134,   177,   221,   254,   359,   477,   478,
     479,    55,   163,   415,   402,    20,   183,   361,   455,   360,
     361,   359,   466,   455,   466,   455,   370,   365,   365,   115,
     232,    83,   360,   365,   365,   365,   127,   152,   398,   398,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   505,   505,   365,   365,   365,     4,   327,   327,   327,
     327,   327,   327,   365,   365,   365,   365,   359,   359,   359,
     327,     5,   327,     5,   327,   359,   359,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   370,   401,
     373,   375,    42,   365,   369,   367,   368,   401,   132,   403,
     423,     3,   434,   131,   435,   435,   435,   365,     3,     3,
     412,   425,   365,   181,   244,   432,   433,   425,   359,   155,
     155,   359,   500,   500,   505,    18,    36,    40,    43,    45,
      48,    63,    70,    71,   104,   121,   155,   177,   185,   240,
     453,   500,     3,     3,   360,   360,   360,   361,   238,   257,
      74,    75,   360,   361,   360,   360,   360,    70,   365,   444,
      54,    58,   105,   108,   123,   143,   151,   228,   230,   248,
     516,   359,   359,   359,   359,   359,   360,   361,   246,   444,
       3,   244,   359,    52,   517,   131,   246,   444,   244,   359,
     181,     3,   359,   507,     3,   359,   155,   146,   155,   359,
     359,   155,   359,   360,   361,     3,   401,     4,    79,   228,
       6,     4,     4,   359,   478,   361,     3,     5,   413,   414,
     365,   196,   531,   104,   365,   155,     3,     3,   104,   365,
     468,   361,   455,   455,   115,   365,   359,   131,   360,   360,
     361,   360,   365,   365,   360,   360,   360,   360,   360,   361,
     361,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   361,   360,   359,   359,   359,   359,   359,   359,   360,
     361,   361,   360,   360,   377,   378,   379,   359,   360,   361,
     359,   360,   361,   359,   395,   396,   360,   361,   361,   361,
     360,   360,   361,   361,   360,   361,   360,   361,   360,   361,
     360,   360,   370,   401,   365,   401,   401,   401,   360,    55,
     139,   407,   402,   154,   359,   359,   359,    20,    20,   358,
     415,   365,   359,   433,   365,   359,   359,     3,   498,   453,
     453,   500,   177,     3,   359,   359,   359,    44,     3,   359,
       4,     4,     5,     6,     7,    64,   310,   311,   312,   359,
     155,   155,   453,   197,    43,    52,     5,   219,     4,   504,
       4,   504,   504,   359,   360,   360,    43,    52,   444,     3,
       3,     3,     3,     3,   359,   360,   359,   246,   444,   517,
       3,     4,     5,     6,     7,     8,    10,    12,    16,    17,
      18,    20,    24,    25,    26,    27,    28,    37,    42,    43,
      46,    51,    52,    53,    54,    55,    58,    60,    61,    62,
      65,    66,    68,    69,    70,    74,    87,    92,    97,    98,
      99,   104,   105,   107,   108,   109,   110,   113,   115,   116,
     117,   118,   120,   122,   123,   125,   127,   128,   130,   131,
     132,   133,   139,   141,   143,   144,   146,   147,   148,   149,
     150,   151,   153,   154,   155,   156,   157,   161,   163,   165,
     174,   176,   177,   178,   179,   180,   181,   182,   185,   186,
     191,   193,   194,   195,   197,   199,   201,   202,   203,   204,
     218,   219,   220,   228,   230,   231,   232,   237,   239,   240,
     241,   244,   248,   249,   251,   252,   253,   254,   258,   299,
     300,   301,   302,   303,   357,   358,   359,   360,   361,   362,
     518,   109,   359,   360,   246,   444,     3,   244,   359,   492,
      70,   125,   185,   240,   365,   359,   359,   359,     3,   418,
     418,   359,   498,   488,   507,   493,   505,   478,   360,   479,
      41,   103,   358,   405,   405,   361,   165,   361,     3,    26,
     532,   237,    20,   360,   361,   467,   181,   457,     4,   365,
     365,   360,    95,    96,   100,   102,   135,   136,   138,   255,
     256,   365,   365,   365,   381,   382,   380,   383,   384,   385,
     365,   365,   328,   408,   408,   408,   386,   327,     4,     5,
     390,   327,     4,     5,   394,   408,   408,   365,   365,   365,
     365,   365,   365,   365,   365,   360,   360,   360,   360,   360,
     365,   404,   365,   412,   403,     3,   436,   436,   436,   365,
     365,     3,   531,   418,   360,     3,   495,     3,   494,   360,
     361,   453,     5,   365,     5,    43,    70,   185,   240,   365,
     359,   359,   359,   365,   516,    52,   517,   360,     4,   365,
      52,   517,   360,   360,   360,   360,   361,   444,   444,   359,
     360,   115,   517,   517,   517,   517,   517,   517,   201,   444,
     359,   360,   359,   246,   444,   360,   359,   155,   155,   359,
     360,   495,   418,   418,   360,   361,   360,   494,   360,    40,
     181,   207,   500,   360,     3,   414,   365,   365,   361,   456,
     104,   365,   104,   365,   359,    80,   531,   360,   360,   360,
     360,   360,   360,   408,   408,   408,   408,   408,   408,   360,
     361,   360,    55,   182,   410,   410,   410,   408,   359,   360,
     360,   408,   359,   360,   360,   408,   410,   410,   360,   360,
     360,   360,   360,   361,   360,   360,   405,   254,   361,   406,
     415,   407,   360,   361,   360,   360,    20,   360,    18,   360,
     361,   360,   361,     3,   360,   361,   360,   360,   361,   359,
     359,   155,   360,   360,   360,   360,   360,    43,    52,   517,
     115,   360,   517,   115,     3,   360,   360,   444,   115,   115,
     115,   115,   115,   115,    52,   360,   444,   444,   359,   360,
     488,   507,   365,   359,   359,   498,   360,   360,   360,     3,
     360,     5,    20,     3,    55,   405,     3,     3,   461,   468,
     359,   458,   410,   410,   410,   410,   410,   410,   365,     3,
     409,    55,   360,   360,   360,   410,   387,   327,   327,   410,
     391,   327,   327,   410,   360,   360,   365,   198,   365,   131,
     416,   412,     3,   365,   247,   191,     3,     3,     5,    49,
      50,     5,   365,   365,    52,   517,   115,   115,   360,   360,
      69,   122,   147,   157,   253,   517,   360,   360,   444,   360,
     495,   494,   360,   191,     5,    98,   227,   188,   246,    20,
     361,   360,     3,    92,   459,   360,   360,   360,   360,   360,
     360,   360,   361,     3,   411,   360,   408,   359,   359,   360,
     408,   359,   359,   360,   360,   405,   209,   237,   150,   417,
     415,     3,   360,   360,   360,   360,   517,   115,   115,   360,
     360,   360,     3,     3,     3,   359,   359,   365,     3,   360,
     361,    82,   237,     3,   405,   361,   410,   388,   389,   410,
     392,   393,   210,   210,   418,   359,    49,    50,   115,   191,
     358,   359,     3,     3,    20,     3,   460,     3,   360,   408,
     408,   360,   408,   408,   164,   164,     3,   496,     3,     3,
     496,   360,   360,   365,   219,   405,   410,   410,   410,   410,
     360,   361,   358,   359,   359,   360,   359,   208,   461,   360,
     360,   360,   360,   497,     3,     3,   496,   496,   497,   207,
     489,   490,     5,    18,    88,   167,   181,   359,   360,   360,
      18,     3,   360,   361,    88,   247,   142,   128,   184,   214,
      98,   237,   496,   497,   497,   249,   490,    89,   140,    66,
     176,   194,   219,    66,   176,   194,   219,   360,   158,   104,
     177,   104,   177,   497,   229,     4,   168,   181,   181,   175,
     175,     5,     5
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
#line 434 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 440 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 441 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 443 "parser/evoparser.y"
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
#line 456 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 458 "parser/evoparser.y"
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
#line 476 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 484 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 492 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 498 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 505 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 506 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 507 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 508 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 509 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 510 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 511 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 512 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 513 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 514 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 515 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 516 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 517 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 518 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 519 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 520 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 521 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 522 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 523 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 525 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 530 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 531 "parser/evoparser.y"
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
#line 539 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 540 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 541 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 542 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 543 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 544 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 547 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 43:
#line 548 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 44:
#line 549 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 45:
#line 550 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 46:
#line 551 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 47:
#line 554 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 48:
#line 555 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 49:
#line 558 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 50:
#line 559 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 51:
#line 562 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 53:
#line 566 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 566 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 567 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 56:
#line 567 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 57:
#line 568 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 569 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 576 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 577 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 61:
#line 584 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 62:
#line 585 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 63:
#line 595 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 64:
#line 599 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 65:
#line 600 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 601 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 602 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 603 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 604 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 70:
#line 605 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 71:
#line 606 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 72:
#line 610 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 73:
#line 611 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 74:
#line 612 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 75:
#line 613 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 76:
#line 614 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 77:
#line 615 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 78:
#line 617 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 618 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 80:
#line 619 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 81:
#line 620 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 82:
#line 621 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 622 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 84:
#line 623 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 624 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 86:
#line 625 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 626 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 88:
#line 627 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 628 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 90:
#line 630 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 91:
#line 631 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 632 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 93:
#line 633 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 634 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 95:
#line 635 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 636 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 97:
#line 637 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 98:
#line 638 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 639 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 100:
#line 640 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 101:
#line 641 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 102:
#line 642 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 103:
#line 643 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 644 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 105:
#line 645 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 106:
#line 647 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 107:
#line 648 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 108:
#line 649 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 109:
#line 650 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 110:
#line 651 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 111:
#line 652 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 112:
#line 655 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 113:
#line 656 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 114:
#line 657 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 115:
#line 658 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 116:
#line 659 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 660 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 118:
#line 661 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 662 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 663 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 121:
#line 664 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 122:
#line 665 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 666 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 124:
#line 667 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 125:
#line 668 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 126:
#line 669 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 127:
#line 670 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 128:
#line 671 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 129:
#line 672 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 130:
#line 673 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 131:
#line 674 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 132:
#line 675 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 133:
#line 676 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 134:
#line 677 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 135:
#line 678 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 136:
#line 679 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 137:
#line 680 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 138:
#line 681 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 139:
#line 682 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 140:
#line 683 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 141:
#line 684 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 142:
#line 685 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 143:
#line 686 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 144:
#line 687 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 145:
#line 688 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 146:
#line 690 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 147:
#line 691 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 148:
#line 692 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 149:
#line 693 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 150:
#line 694 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 151:
#line 695 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 152:
#line 696 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 153:
#line 697 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 154:
#line 699 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 155:
#line 700 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 156:
#line 701 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 157:
#line 702 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 158:
#line 703 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 159:
#line 704 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 160:
#line 705 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 161:
#line 706 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 162:
#line 707 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 163:
#line 708 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 164:
#line 709 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 165:
#line 710 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 166:
#line 711 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 167:
#line 712 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 168:
#line 713 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 169:
#line 714 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 170:
#line 715 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 171:
#line 716 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 172:
#line 717 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 718 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 174:
#line 719 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 175:
#line 720 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 176:
#line 722 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 177:
#line 723 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 178:
#line 724 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 179:
#line 725 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 180:
#line 726 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 181:
#line 728 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 182:
#line 729 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 183:
#line 731 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 184:
#line 732 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 185:
#line 733 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 186:
#line 735 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 187:
#line 736 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 188:
#line 737 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 189:
#line 738 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 190:
#line 745 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 191:
#line 752 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 192:
#line 759 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 763 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 767 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 195:
#line 771 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 196:
#line 775 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 197:
#line 779 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 198:
#line 785 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 786 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 200:
#line 787 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 201:
#line 791 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 202:
#line 797 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 203:
#line 803 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 204:
#line 804 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 805 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 806 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 207:
#line 807 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 208:
#line 808 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 209:
#line 809 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 810 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 211:
#line 811 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 212:
#line 815 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 213:
#line 817 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 214:
#line 819 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 215:
#line 821 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 216:
#line 825 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 217:
#line 833 "parser/evoparser.y"
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
#line 843 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 219:
#line 844 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 220:
#line 847 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 221:
#line 848 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 222:
#line 852 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 860 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 224:
#line 868 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 225:
#line 879 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 226:
#line 888 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 227:
#line 893 "parser/evoparser.y"
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
#line 906 "parser/evoparser.y"
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
#line 919 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 232:
#line 921 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 233:
#line 924 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 234:
#line 931 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 235:
#line 939 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 940 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 941 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 238:
#line 944 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 239:
#line 945 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 241:
#line 949 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 244:
#line 958 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 245:
#line 960 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 248:
#line 968 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 249:
#line 970 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 254:
#line 982 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 255:
#line 988 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 256:
#line 995 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 257:
#line 1003 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 258:
#line 1004 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1005 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 260:
#line 1006 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 261:
#line 1009 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 262:
#line 1010 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 263:
#line 1011 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 264:
#line 1012 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 265:
#line 1013 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 267:
#line 1017 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 268:
#line 1020 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1021 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 270:
#line 1024 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 271:
#line 1025 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 272:
#line 1026 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 273:
#line 1027 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 274:
#line 1028 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 275:
#line 1029 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 276:
#line 1030 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 277:
#line 1031 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 278:
#line 1032 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 279:
#line 1035 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 280:
#line 1036 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 281:
#line 1038 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 282:
#line 1046 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 283:
#line 1051 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 284:
#line 1052 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 285:
#line 1053 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 286:
#line 1056 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1066 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 291:
#line 1072 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 292:
#line 1073 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 293:
#line 1074 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 296:
#line 1083 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 297:
#line 1085 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 298:
#line 1087 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 299:
#line 1089 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 300:
#line 1091 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 301:
#line 1094 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 302:
#line 1095 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 303:
#line 1096 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 304:
#line 1099 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 305:
#line 1100 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 306:
#line 1103 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1104 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 308:
#line 1107 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 309:
#line 1108 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 310:
#line 1109 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 313:
#line 1116 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 314:
#line 1117 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 315:
#line 1122 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 316:
#line 1124 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 317:
#line 1126 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 319:
#line 1130 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1131 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 321:
#line 1134 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 322:
#line 1135 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 323:
#line 1138 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 324:
#line 1143 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 325:
#line 1153 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 326:
#line 1160 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 327:
#line 1161 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 328:
#line 1162 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 329:
#line 1163 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 330:
#line 1168 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 331:
#line 1172 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 332:
#line 1174 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 335:
#line 1180 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 336:
#line 1185 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 337:
#line 1192 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 338:
#line 1199 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 339:
#line 1209 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 340:
#line 1216 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 341:
#line 1223 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 342:
#line 1231 "parser/evoparser.y"
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
#line 1241 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 344:
#line 1249 "parser/evoparser.y"
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
#line 1259 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 346:
#line 1267 "parser/evoparser.y"
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
#line 1276 "parser/evoparser.y"
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
#line 1285 "parser/evoparser.y"
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
#line 1295 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 350:
#line 1303 "parser/evoparser.y"
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
#line 1312 "parser/evoparser.y"
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
#line 1321 "parser/evoparser.y"
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
#line 1331 "parser/evoparser.y"
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
#line 1340 "parser/evoparser.y"
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
#line 1352 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 356:
#line 1357 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 357:
#line 1362 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 358:
#line 1368 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 359:
#line 1375 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1382 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 361:
#line 1389 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1399 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 363:
#line 1406 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 364:
#line 1415 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 365:
#line 1422 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 366:
#line 1428 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 367:
#line 1436 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 368:
#line 1442 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 370:
#line 1450 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 371:
#line 1451 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 372:
#line 1452 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 373:
#line 1453 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 374:
#line 1458 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 375:
#line 1465 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 376:
#line 1474 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 377:
#line 1481 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 378:
#line 1487 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 379:
#line 1497 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 380:
#line 1501 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 381:
#line 1507 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 382:
#line 1513 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 383:
#line 1520 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 384:
#line 1526 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 385:
#line 1533 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 386:
#line 1539 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1545 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 388:
#line 1551 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 389:
#line 1557 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 390:
#line 1563 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 391:
#line 1569 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1575 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 393:
#line 1581 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 394:
#line 1587 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 395:
#line 1593 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 396:
#line 1599 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 397:
#line 1605 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 398:
#line 1611 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 399:
#line 1617 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 400:
#line 1624 "parser/evoparser.y"
    { ;}
    break;

  case 401:
#line 1625 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 402:
#line 1626 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 403:
#line 1630 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 404:
#line 1638 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 405:
#line 1644 "parser/evoparser.y"
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
#line 1657 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 408:
#line 1657 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 411:
#line 1665 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 412:
#line 1666 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 413:
#line 1667 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 414:
#line 1671 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 415:
#line 1672 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 416:
#line 1673 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 417:
#line 1677 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 418:
#line 1685 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 419:
#line 1694 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 420:
#line 1695 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 421:
#line 1696 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 422:
#line 1697 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 423:
#line 1698 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 427:
#line 1705 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 428:
#line 1709 "parser/evoparser.y"
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
#line 1719 "parser/evoparser.y"
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
#line 1731 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 431:
#line 1732 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 432:
#line 1732 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 433:
#line 1735 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 434:
#line 1736 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 435:
#line 1737 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 436:
#line 1738 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 437:
#line 1742 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 438:
#line 1745 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 439:
#line 1746 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 440:
#line 1747 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 441:
#line 1748 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 442:
#line 1754 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 443:
#line 1760 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 444:
#line 1765 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 445:
#line 1770 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 446:
#line 1774 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 447:
#line 1778 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 448:
#line 1780 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 451:
#line 1786 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 452:
#line 1787 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 453:
#line 1791 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 454:
#line 1792 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 455:
#line 1796 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 456:
#line 1797 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 457:
#line 1798 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 464:
#line 1813 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 465:
#line 1814 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 466:
#line 1815 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 467:
#line 1816 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 468:
#line 1817 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 469:
#line 1818 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 470:
#line 1819 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 471:
#line 1820 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 472:
#line 1825 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 473:
#line 1834 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 474:
#line 1841 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 475:
#line 1842 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 476:
#line 1843 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 477:
#line 1848 "parser/evoparser.y"
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
#line 1859 "parser/evoparser.y"
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
#line 1871 "parser/evoparser.y"
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
#line 1882 "parser/evoparser.y"
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
#line 1897 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 482:
#line 1901 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 483:
#line 1905 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 484:
#line 1906 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 485:
#line 1911 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 486:
#line 1913 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 487:
#line 1915 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 488:
#line 1917 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 489:
#line 1920 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 490:
#line 1921 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 491:
#line 1927 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 492:
#line 1932 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 493:
#line 1934 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 494:
#line 1936 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 495:
#line 1938 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 496:
#line 1940 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 497:
#line 1944 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 498:
#line 1948 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 499:
#line 1949 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 500:
#line 1954 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 501:
#line 1964 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 502:
#line 1973 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 504:
#line 1977 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 505:
#line 1978 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 506:
#line 1979 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 507:
#line 1980 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 508:
#line 1982 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 509:
#line 1984 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 512:
#line 1992 "parser/evoparser.y"
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

  case 513:
#line 2007 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 514:
#line 2015 "parser/evoparser.y"
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

  case 515:
#line 2029 "parser/evoparser.y"
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

  case 516:
#line 2043 "parser/evoparser.y"
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

  case 517:
#line 2057 "parser/evoparser.y"
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

  case 518:
#line 2069 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 519:
#line 2070 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 520:
#line 2071 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 521:
#line 2074 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 522:
#line 2075 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 523:
#line 2078 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 524:
#line 2079 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 525:
#line 2080 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 526:
#line 2081 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 527:
#line 2082 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 528:
#line 2083 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 529:
#line 2084 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 530:
#line 2085 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 531:
#line 2087 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 532:
#line 2089 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 533:
#line 2091 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 534:
#line 2093 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 535:
#line 2095 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 536:
#line 2097 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 537:
#line 2100 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 538:
#line 2101 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 539:
#line 2104 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 540:
#line 2105 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 541:
#line 2108 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 542:
#line 2109 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 544:
#line 2113 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 545:
#line 2114 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 546:
#line 2115 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 547:
#line 2116 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 548:
#line 2117 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 549:
#line 2118 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 550:
#line 2119 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 551:
#line 2120 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 552:
#line 2121 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 553:
#line 2122 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 554:
#line 2123 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 555:
#line 2124 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 556:
#line 2125 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 557:
#line 2126 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 558:
#line 2127 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 559:
#line 2128 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 560:
#line 2129 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 561:
#line 2132 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 562:
#line 2133 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 563:
#line 2136 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 564:
#line 2138 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 565:
#line 2146 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 566:
#line 2147 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 568:
#line 2149 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 569:
#line 2150 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2151 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 571:
#line 2152 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 572:
#line 2153 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 573:
#line 2154 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 574:
#line 2155 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 575:
#line 2156 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 576:
#line 2157 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 577:
#line 2164 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 578:
#line 2165 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 579:
#line 2166 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 580:
#line 2167 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 581:
#line 2168 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 582:
#line 2169 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 583:
#line 2170 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 584:
#line 2171 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 585:
#line 2172 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 586:
#line 2173 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 587:
#line 2174 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 588:
#line 2175 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 589:
#line 2176 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 590:
#line 2177 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 591:
#line 2178 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 592:
#line 2179 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 593:
#line 2180 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 594:
#line 2181 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 595:
#line 2182 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 596:
#line 2183 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 597:
#line 2184 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 598:
#line 2187 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 599:
#line 2188 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 600:
#line 2189 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 601:
#line 2192 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 602:
#line 2193 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 603:
#line 2196 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 604:
#line 2197 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 605:
#line 2198 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 607:
#line 2202 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 608:
#line 2203 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 609:
#line 2207 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 610:
#line 2208 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 611:
#line 2209 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 612:
#line 2210 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 613:
#line 2211 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 614:
#line 2212 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 615:
#line 2213 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 616:
#line 2214 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 617:
#line 2215 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 618:
#line 2216 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 619:
#line 2217 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 620:
#line 2218 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 621:
#line 2219 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 622:
#line 2220 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 623:
#line 2221 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 624:
#line 2222 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 625:
#line 2223 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 626:
#line 2224 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 627:
#line 2225 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 628:
#line 2226 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 629:
#line 2227 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 630:
#line 2228 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 631:
#line 2229 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 632:
#line 2230 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 633:
#line 2231 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 634:
#line 2232 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 635:
#line 2233 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 636:
#line 2234 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 637:
#line 2235 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 638:
#line 2236 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 639:
#line 2237 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 640:
#line 2238 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 641:
#line 2239 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 642:
#line 2242 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 643:
#line 2243 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 644:
#line 2247 "parser/evoparser.y"
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

  case 645:
#line 2259 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 646:
#line 2260 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 647:
#line 2261 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 648:
#line 2265 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 649:
#line 2268 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 650:
#line 2269 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 654:
#line 2273 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 655:
#line 2274 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 656:
#line 2282 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 657:
#line 2287 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 658:
#line 2293 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 659:
#line 2299 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 660:
#line 2306 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 661:
#line 2313 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 662:
#line 2319 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 663:
#line 2325 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 664:
#line 2332 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 669:
#line 2348 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 670:
#line 2349 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 671:
#line 2350 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 672:
#line 2351 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 673:
#line 2354 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 674:
#line 2355 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 675:
#line 2356 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 676:
#line 2357 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 677:
#line 2358 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 678:
#line 2359 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 679:
#line 2360 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 680:
#line 2361 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 681:
#line 2362 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 682:
#line 2363 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 691:
#line 2380 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 692:
#line 2381 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 813:
#line 2399 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 814:
#line 2406 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 815:
#line 2411 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 816:
#line 2417 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 817:
#line 2423 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 818:
#line 2429 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 819:
#line 2440 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 820:
#line 2445 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 821:
#line 2451 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 824:
#line 2462 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 825:
#line 2463 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 826:
#line 2464 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 827:
#line 2465 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 828:
#line 2466 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 829:
#line 2467 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 830:
#line 2468 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 831:
#line 2475 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 832:
#line 2480 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 833:
#line 2487 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 834:
#line 2488 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 835:
#line 2491 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 836:
#line 2492 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 837:
#line 2493 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 838:
#line 2496 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 839:
#line 2501 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 840:
#line 2507 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 841:
#line 2516 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 842:
#line 2524 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 843:
#line 2534 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 844:
#line 2539 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 847:
#line 2552 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 848:
#line 2553 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 849:
#line 2554 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 850:
#line 2555 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 851:
#line 2556 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 852:
#line 2557 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 853:
#line 2558 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 854:
#line 2559 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 855:
#line 2562 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 856:
#line 2567 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 857:
#line 2573 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 858:
#line 2583 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 859:
#line 2590 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 860:
#line 2597 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 861:
#line 2605 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 863:
#line 2615 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 865:
#line 2619 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 866:
#line 2620 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10079 "parser/evoparser.tab.c"
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


#line 2623 "parser/evoparser.y"

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
