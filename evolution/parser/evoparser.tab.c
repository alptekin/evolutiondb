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
     DATABASE = 324,
     DECLARE = 325,
     DEFERRABLE = 326,
     DEFERRED = 327,
     DISABLE = 328,
     DO = 329,
     DOMAIN = 330,
     DELAYED = 331,
     DAY_HOUR = 332,
     DAY_MICROSECOND = 333,
     DISTINCT = 334,
     DELETE = 335,
     DROP = 336,
     DAY_MINUTE = 337,
     DISTINCTROW = 338,
     DAY_SECOND = 339,
     DESC = 340,
     DEFAULT = 341,
     DOUBLE = 342,
     DATETIME = 343,
     DECIMAL = 344,
     DATE = 345,
     EACH = 346,
     ELSEIF = 347,
     ENABLE = 348,
     ESCAPED = 349,
     EXCEPT = 350,
     ENUM = 351,
     END = 352,
     ELSE = 353,
     EXECUTE = 354,
     EXIT = 355,
     EXPLAIN = 356,
     FETCH = 357,
     FIRST = 358,
     FOREACH = 359,
     FLOAT = 360,
     FORCE = 361,
     FOREIGN = 362,
     FROM = 363,
     FULL = 364,
     FULLTEXT = 365,
     FUNCTION = 366,
     FOR = 367,
     GROUP = 368,
     HANDLER = 369,
     HOUR_MINUTE = 370,
     HOUR_MICROSECOND = 371,
     HIGH_PRIORITY = 372,
     HOUR_SECOND = 373,
     HAVING = 374,
     IMMEDIATE = 375,
     INOUT = 376,
     INITIALLY = 377,
     INTEGER = 378,
     INNER = 379,
     IGNORE = 380,
     INDEX = 381,
     IF = 382,
     INSERT = 383,
     INTERSECT = 384,
     INTO = 385,
     INT = 386,
     INTERVAL = 387,
     ITERATE = 388,
     JOIN = 389,
     KEY = 390,
     LEAVE = 391,
     LOOP = 392,
     LESS = 393,
     LONGTEXT = 394,
     LOW_PRIORITY = 395,
     LEFT = 396,
     LEADING = 397,
     LIMIT = 398,
     LOCKED = 399,
     OFFSET = 400,
     LONGBLOB = 401,
     MATCH = 402,
     MAXVALUE = 403,
     MEDIUMTEXT = 404,
     MINUS = 405,
     MODIFY = 406,
     MEDIUMBLOB = 407,
     MEDIUMINT = 408,
     NATURAL = 409,
     NODE = 410,
     NO_ACTION = 411,
     NULLX = 412,
     OPEN = 413,
     OUT = 414,
     OUTER = 415,
     ON = 416,
     ORDER = 417,
     ONDUPLICATE = 418,
     PARTIAL = 419,
     PRIMARY = 420,
     PROCEDURE = 421,
     QUICK = 422,
     RANGE = 423,
     REAL = 424,
     RECLAIM = 425,
     REFERENCES = 426,
     RENAME = 427,
     RESIGNAL = 428,
     RESTRICT = 429,
     RETURN = 430,
     RETURNING = 431,
     RETURNS = 432,
     ROLLUP = 433,
     RIGHT = 434,
     REPLACE = 435,
     ROW = 436,
     SIGNAL = 437,
     TRIGGER = 438,
     UNTIL = 439,
     SQL_SMALL_RESULT = 440,
     SCHEMA = 441,
     SHARD = 442,
     SHARDS = 443,
     SHARE = 444,
     SKIP = 445,
     SOME = 446,
     SQL_CALC_FOUND_ROWS = 447,
     SQL_BIG_RESULT = 448,
     SIMPLE = 449,
     STRAIGHT_JOIN = 450,
     SMALLINT = 451,
     SET = 452,
     SELECT = 453,
     TINYTEXT = 454,
     TINYINT = 455,
     TO = 456,
     TEMPORARY = 457,
     GLOBAL = 458,
     PRESERVE = 459,
     TEXT = 460,
     THAN = 461,
     TIMESTAMP = 462,
     TABLE = 463,
     THEN = 464,
     TRAILING = 465,
     TRUNCATE = 466,
     TINYBLOB = 467,
     TIME = 468,
     UPDATE = 469,
     UNSIGNED = 470,
     UNION = 471,
     UNIQUE = 472,
     UUID = 473,
     JSON = 474,
     VIEW = 475,
     USING = 476,
     USE = 477,
     HASH = 478,
     VALIDATE = 479,
     VARCHAR = 480,
     VALUES = 481,
     VARBINARY = 482,
     WHERE = 483,
     WHEN = 484,
     WHILE = 485,
     WITH = 486,
     YEAR = 487,
     YEAR_MONTH = 488,
     ZEROFILL = 489,
     EXISTS = 490,
     FSUBSTRING = 491,
     FTRIM = 492,
     FDATE_ADD = 493,
     FDATE_SUB = 494,
     FDATEDIFF = 495,
     FYEAR = 496,
     FMONTH = 497,
     FDAY = 498,
     FHOUR = 499,
     FMINUTE = 500,
     FSECOND = 501,
     FNOW = 502,
     FLEFT = 503,
     FRIGHT = 504,
     FLPAD = 505,
     FRPAD = 506,
     FREVERSE = 507,
     FREPEAT = 508,
     FINSTR = 509,
     FLOCATE = 510,
     FABS = 511,
     FCEIL = 512,
     FFLOOR = 513,
     FROUND = 514,
     FPOWER = 515,
     FSQRT = 516,
     FMOD = 517,
     FRAND = 518,
     FLOG = 519,
     FLOG10 = 520,
     FSIGN = 521,
     FPI = 522,
     FCAST = 523,
     FCONVERT = 524,
     FNULLIF = 525,
     FIFNULL = 526,
     FIF = 527,
     UNKNOWN = 528,
     FGROUP_CONCAT = 529,
     SEPARATOR = 530,
     FCOUNT = 531,
     FSUM = 532,
     FAVG = 533,
     FMIN = 534,
     FMAX = 535,
     FUPPER = 536,
     FLOWER = 537,
     FLENGTH = 538,
     FCONCAT = 539,
     FREPLACE = 540,
     FCOALESCE = 541,
     FGEN_RANDOM_UUID = 542,
     FGEN_RANDOM_UUID_V7 = 543,
     FSNOWFLAKE_ID = 544,
     FLAST_INSERT_ID = 545,
     FEVO_SLEEP = 546,
     FEVO_JITTER = 547,
     FROW_NUMBER = 548,
     FRANK = 549,
     FDENSE_RANK = 550,
     FLEAD = 551,
     FLAG = 552,
     FNTILE = 553,
     FPERCENT_RANK = 554,
     FCUME_DIST = 555,
     OVER = 556,
     PARTITION = 557,
     FJSON_EXTRACT = 558,
     FJSON_UNQUOTE = 559,
     FJSON_TYPE = 560,
     FJSON_LENGTH = 561,
     FJSON_DEPTH = 562,
     FJSON_VALID = 563,
     FJSON_KEYS = 564,
     FJSON_PRETTY = 565,
     FJSON_QUOTE = 566,
     FJSON_SET = 567,
     FJSON_INSERT = 568,
     FJSON_REPLACE = 569,
     FJSON_REMOVE = 570,
     FJSON_CONTAINS = 571,
     FJSON_CONTAINS_PATH = 572,
     FJSON_SEARCH = 573,
     FJSON_OBJECT = 574,
     FJSON_ARRAY = 575,
     FJSON_ARRAYAGG = 576,
     SEQUENCE = 577,
     FNEXTVAL = 578,
     FCURRVAL = 579,
     FSETVAL = 580,
     FLASTVAL = 581,
     START = 582,
     INCREMENT = 583,
     MINVALUE = 584,
     CYCLE = 585
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
#define DATABASE 324
#define DECLARE 325
#define DEFERRABLE 326
#define DEFERRED 327
#define DISABLE 328
#define DO 329
#define DOMAIN 330
#define DELAYED 331
#define DAY_HOUR 332
#define DAY_MICROSECOND 333
#define DISTINCT 334
#define DELETE 335
#define DROP 336
#define DAY_MINUTE 337
#define DISTINCTROW 338
#define DAY_SECOND 339
#define DESC 340
#define DEFAULT 341
#define DOUBLE 342
#define DATETIME 343
#define DECIMAL 344
#define DATE 345
#define EACH 346
#define ELSEIF 347
#define ENABLE 348
#define ESCAPED 349
#define EXCEPT 350
#define ENUM 351
#define END 352
#define ELSE 353
#define EXECUTE 354
#define EXIT 355
#define EXPLAIN 356
#define FETCH 357
#define FIRST 358
#define FOREACH 359
#define FLOAT 360
#define FORCE 361
#define FOREIGN 362
#define FROM 363
#define FULL 364
#define FULLTEXT 365
#define FUNCTION 366
#define FOR 367
#define GROUP 368
#define HANDLER 369
#define HOUR_MINUTE 370
#define HOUR_MICROSECOND 371
#define HIGH_PRIORITY 372
#define HOUR_SECOND 373
#define HAVING 374
#define IMMEDIATE 375
#define INOUT 376
#define INITIALLY 377
#define INTEGER 378
#define INNER 379
#define IGNORE 380
#define INDEX 381
#define IF 382
#define INSERT 383
#define INTERSECT 384
#define INTO 385
#define INT 386
#define INTERVAL 387
#define ITERATE 388
#define JOIN 389
#define KEY 390
#define LEAVE 391
#define LOOP 392
#define LESS 393
#define LONGTEXT 394
#define LOW_PRIORITY 395
#define LEFT 396
#define LEADING 397
#define LIMIT 398
#define LOCKED 399
#define OFFSET 400
#define LONGBLOB 401
#define MATCH 402
#define MAXVALUE 403
#define MEDIUMTEXT 404
#define MINUS 405
#define MODIFY 406
#define MEDIUMBLOB 407
#define MEDIUMINT 408
#define NATURAL 409
#define NODE 410
#define NO_ACTION 411
#define NULLX 412
#define OPEN 413
#define OUT 414
#define OUTER 415
#define ON 416
#define ORDER 417
#define ONDUPLICATE 418
#define PARTIAL 419
#define PRIMARY 420
#define PROCEDURE 421
#define QUICK 422
#define RANGE 423
#define REAL 424
#define RECLAIM 425
#define REFERENCES 426
#define RENAME 427
#define RESIGNAL 428
#define RESTRICT 429
#define RETURN 430
#define RETURNING 431
#define RETURNS 432
#define ROLLUP 433
#define RIGHT 434
#define REPLACE 435
#define ROW 436
#define SIGNAL 437
#define TRIGGER 438
#define UNTIL 439
#define SQL_SMALL_RESULT 440
#define SCHEMA 441
#define SHARD 442
#define SHARDS 443
#define SHARE 444
#define SKIP 445
#define SOME 446
#define SQL_CALC_FOUND_ROWS 447
#define SQL_BIG_RESULT 448
#define SIMPLE 449
#define STRAIGHT_JOIN 450
#define SMALLINT 451
#define SET 452
#define SELECT 453
#define TINYTEXT 454
#define TINYINT 455
#define TO 456
#define TEMPORARY 457
#define GLOBAL 458
#define PRESERVE 459
#define TEXT 460
#define THAN 461
#define TIMESTAMP 462
#define TABLE 463
#define THEN 464
#define TRAILING 465
#define TRUNCATE 466
#define TINYBLOB 467
#define TIME 468
#define UPDATE 469
#define UNSIGNED 470
#define UNION 471
#define UNIQUE 472
#define UUID 473
#define JSON 474
#define VIEW 475
#define USING 476
#define USE 477
#define HASH 478
#define VALIDATE 479
#define VARCHAR 480
#define VALUES 481
#define VARBINARY 482
#define WHERE 483
#define WHEN 484
#define WHILE 485
#define WITH 486
#define YEAR 487
#define YEAR_MONTH 488
#define ZEROFILL 489
#define EXISTS 490
#define FSUBSTRING 491
#define FTRIM 492
#define FDATE_ADD 493
#define FDATE_SUB 494
#define FDATEDIFF 495
#define FYEAR 496
#define FMONTH 497
#define FDAY 498
#define FHOUR 499
#define FMINUTE 500
#define FSECOND 501
#define FNOW 502
#define FLEFT 503
#define FRIGHT 504
#define FLPAD 505
#define FRPAD 506
#define FREVERSE 507
#define FREPEAT 508
#define FINSTR 509
#define FLOCATE 510
#define FABS 511
#define FCEIL 512
#define FFLOOR 513
#define FROUND 514
#define FPOWER 515
#define FSQRT 516
#define FMOD 517
#define FRAND 518
#define FLOG 519
#define FLOG10 520
#define FSIGN 521
#define FPI 522
#define FCAST 523
#define FCONVERT 524
#define FNULLIF 525
#define FIFNULL 526
#define FIF 527
#define UNKNOWN 528
#define FGROUP_CONCAT 529
#define SEPARATOR 530
#define FCOUNT 531
#define FSUM 532
#define FAVG 533
#define FMIN 534
#define FMAX 535
#define FUPPER 536
#define FLOWER 537
#define FLENGTH 538
#define FCONCAT 539
#define FREPLACE 540
#define FCOALESCE 541
#define FGEN_RANDOM_UUID 542
#define FGEN_RANDOM_UUID_V7 543
#define FSNOWFLAKE_ID 544
#define FLAST_INSERT_ID 545
#define FEVO_SLEEP 546
#define FEVO_JITTER 547
#define FROW_NUMBER 548
#define FRANK 549
#define FDENSE_RANK 550
#define FLEAD 551
#define FLAG 552
#define FNTILE 553
#define FPERCENT_RANK 554
#define FCUME_DIST 555
#define OVER 556
#define PARTITION 557
#define FJSON_EXTRACT 558
#define FJSON_UNQUOTE 559
#define FJSON_TYPE 560
#define FJSON_LENGTH 561
#define FJSON_DEPTH 562
#define FJSON_VALID 563
#define FJSON_KEYS 564
#define FJSON_PRETTY 565
#define FJSON_QUOTE 566
#define FJSON_SET 567
#define FJSON_INSERT 568
#define FJSON_REPLACE 569
#define FJSON_REMOVE 570
#define FJSON_CONTAINS 571
#define FJSON_CONTAINS_PATH 572
#define FJSON_SEARCH 573
#define FJSON_OBJECT 574
#define FJSON_ARRAY 575
#define FJSON_ARRAYAGG 576
#define SEQUENCE 577
#define FNEXTVAL 578
#define FCURRVAL 579
#define FSETVAL 580
#define FLASTVAL 581
#define START 582
#define INCREMENT 583
#define MINVALUE 584
#define CYCLE 585




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
#line 811 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 824 "parser/evoparser.tab.c"

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
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   11205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  346
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  826
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2051

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   585

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     342,   343,    26,    24,   344,    25,   341,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   340,
       2,   345,     2,     2,     2,     2,     2,     2,     2,     2,
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
     334,   335,   336,   337,   338,   339
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    18,    20,    22,
      24,    26,    28,    32,    36,    40,    44,    48,    52,    55,
      59,    63,    67,    71,    75,    79,    83,    87,    91,    95,
      98,   101,   105,   106,   113,   114,   122,   123,   131,   132,
     140,   144,   149,   153,   158,   162,   168,   175,   177,   181,
     182,   184,   185,   192,   193,   201,   202,   209,   210,   218,
     219,   225,   230,   235,   240,   245,   250,   255,   260,   265,
     272,   273,   283,   284,   294,   295,   305,   306,   317,   318,
     329,   330,   341,   342,   353,   354,   365,   366,   377,   378,
     389,   390,   403,   404,   419,   420,   435,   436,   447,   448,
     461,   462,   477,   478,   493,   494,   505,   506,   516,   517,
     527,   536,   543,   550,   559,   564,   572,   579,   584,   589,
     594,   601,   610,   617,   624,   631,   640,   649,   654,   661,
     668,   675,   680,   685,   690,   697,   702,   709,   714,   721,
     725,   730,   735,   740,   744,   748,   755,   760,   765,   770,
     775,   780,   785,   792,   797,   802,   807,   812,   817,   822,
     827,   832,   841,   850,   859,   866,   873,   882,   891,   898,
     909,   914,   921,   930,   935,   940,   945,   952,   961,   965,
     972,   979,   986,   993,  1002,  1006,  1015,  1026,  1030,  1034,
    1038,  1042,  1047,  1054,  1056,  1058,  1060,  1067,  1074,  1078,
    1082,  1086,  1090,  1094,  1098,  1102,  1106,  1110,  1115,  1122,
    1126,  1132,  1137,  1143,  1147,  1152,  1156,  1161,  1163,  1165,
    1167,  1169,  1173,  1186,  1199,  1200,  1203,  1204,  1209,  1212,
    1217,  1218,  1220,  1222,  1223,  1226,  1227,  1230,  1231,  1235,
    1237,  1241,  1242,  1246,  1249,  1254,  1255,  1259,  1261,  1265,
    1268,  1273,  1276,  1277,  1280,  1285,  1290,  1291,  1294,  1297,
    1302,  1307,  1308,  1311,  1313,  1317,  1318,  1321,  1324,  1327,
    1330,  1333,  1336,  1339,  1342,  1344,  1348,  1350,  1353,  1356,
    1358,  1359,  1361,  1365,  1367,  1369,  1373,  1379,  1383,  1387,
    1389,  1390,  1396,  1400,  1406,  1413,  1419,  1420,  1422,  1424,
    1425,  1427,  1429,  1431,  1434,  1437,  1438,  1439,  1441,  1444,
    1449,  1456,  1463,  1470,  1471,  1474,  1475,  1477,  1481,  1485,
    1487,  1496,  1499,  1502,  1505,  1506,  1513,  1516,  1521,  1522,
    1525,  1533,  1535,  1539,  1545,  1547,  1556,  1567,  1577,  1589,
    1600,  1613,  1625,  1639,  1649,  1661,  1672,  1685,  1697,  1710,
    1712,  1716,  1718,  1723,  1728,  1733,  1740,  1742,  1746,  1749,
    1753,  1759,  1761,  1765,  1766,  1769,  1772,  1776,  1780,  1782,
    1786,  1788,  1792,  1798,  1800,  1811,  1822,  1840,  1853,  1873,
    1885,  1892,  1901,  1908,  1915,  1922,  1932,  1939,  1945,  1954,
    1962,  1972,  1981,  1992,  2002,  2003,  2005,  2008,  2010,  2020,
    2027,  2028,  2029,  2035,  2039,  2045,  2046,  2049,  2052,  2055,
    2058,  2060,  2061,  2062,  2066,  2068,  2072,  2076,  2077,  2084,
    2086,  2088,  2092,  2096,  2104,  2108,  2112,  2118,  2124,  2126,
    2135,  2143,  2151,  2153,  2163,  2164,  2167,  2170,  2174,  2180,
    2186,  2194,  2200,  2202,  2207,  2212,  2216,  2222,  2226,  2232,
    2233,  2236,  2238,  2244,  2252,  2260,  2270,  2282,  2284,  2287,
    2291,  2293,  2303,  2315,  2316,  2321,  2325,  2331,  2337,  2347,
    2358,  2360,  2364,  2374,  2384,  2394,  2401,  2413,  2422,  2423,
    2425,  2428,  2430,  2434,  2440,  2448,  2453,  2458,  2464,  2470,
    2475,  2482,  2494,  2508,  2522,  2538,  2543,  2550,  2552,  2556,
    2558,  2562,  2564,  2568,  2569,  2574,  2580,  2585,  2591,  2596,
    2602,  2607,  2613,  2618,  2623,  2627,  2631,  2635,  2638,  2642,
    2647,  2652,  2654,  2658,  2659,  2664,  2665,  2669,  2672,  2676,
    2680,  2684,  2688,  2694,  2700,  2706,  2710,  2716,  2719,  2727,
    2733,  2741,  2747,  2750,  2754,  2757,  2761,  2764,  2768,  2774,
    2779,  2785,  2793,  2802,  2811,  2819,  2826,  2833,  2839,  2840,
    2844,  2850,  2851,  2853,  2854,  2857,  2860,  2861,  2866,  2870,
    2873,  2877,  2881,  2885,  2889,  2893,  2897,  2901,  2905,  2909,
    2913,  2915,  2917,  2919,  2921,  2923,  2927,  2933,  2936,  2941,
    2943,  2945,  2947,  2949,  2953,  2957,  2961,  2965,  2971,  2977,
    2979,  2981,  2983,  2985,  2989,  2993,  2994,  2996,  2998,  3000,
    3004,  3008,  3011,  3013,  3017,  3021,  3025,  3027,  3038,  3048,
    3061,  3073,  3086,  3098,  3113,  3127,  3128,  3130,  3132,  3136,
    3139,  3143,  3147,  3151,  3153,  3155,  3157,  3159,  3161,  3163,
    3165,  3167,  3169,  3171,  3172,  3175,  3180,  3186,  3192,  3198,
    3204,  3210,  3212,  3214,  3216,  3218,  3220,  3222,  3224,  3226,
    3228,  3230,  3232,  3234,  3236,  3238,  3240,  3242,  3244,  3246,
    3248,  3250,  3252,  3254,  3256,  3258,  3260,  3262,  3264,  3266,
    3268,  3270,  3272,  3274,  3276,  3278,  3280,  3282,  3284,  3286,
    3288,  3290,  3292,  3294,  3296,  3298,  3300,  3302,  3304,  3306,
    3308,  3310,  3312,  3314,  3316,  3318,  3320,  3322,  3324,  3326,
    3328,  3330,  3332,  3334,  3336,  3338,  3340,  3342,  3344,  3346,
    3348,  3350,  3352,  3354,  3356,  3358,  3360,  3362,  3364,  3366,
    3368,  3370,  3372,  3374,  3376,  3378,  3380,  3382,  3384,  3386,
    3388,  3390,  3392,  3394,  3396,  3398,  3400,  3402,  3404,  3406,
    3408,  3410,  3412,  3414,  3416,  3418,  3420,  3422,  3424,  3426,
    3428,  3430,  3432,  3434,  3436,  3438,  3440,  3442,  3444,  3446,
    3448,  3450,  3452,  3454,  3456,  3458,  3462,  3468,  3472,  3478,
    3480,  3485,  3491,  3493,  3497,  3499,  3501,  3503,  3505,  3507,
    3509,  3511,  3513,  3527,  3529,  3531,  3533,  3535,  3537,  3539,
    3543,  3549,  3554,  3559,  3561,  3567,  3568,  3571,  3575,  3578,
    3582,  3585,  3588,  3591,  3593,  3596,  3598,  3602,  3608,  3613,
    3618,  3625,  3632,  3633,  3636,  3639,  3641
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     347,     0,    -1,   383,   340,    -1,   383,   340,   347,    -1,
       3,    -1,     3,   341,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   166,    -1,   348,    24,
     348,    -1,   348,    25,   348,    -1,   348,    26,   348,    -1,
     348,    27,   348,    -1,   348,    28,   348,    -1,   348,    29,
     348,    -1,    25,   348,    -1,   342,   348,   343,    -1,   348,
      12,   348,    -1,   348,    10,   348,    -1,   348,    11,   348,
      -1,   348,    21,   348,    -1,   348,    22,   348,    -1,   348,
      30,   348,    -1,   348,    23,   348,    -1,   348,    32,   348,
      -1,   348,    31,   348,    -1,    18,   348,    -1,    17,   348,
      -1,   348,    20,   348,    -1,    -1,   348,    20,   342,   349,
     384,   343,    -1,    -1,   348,    20,    39,   342,   350,   384,
     343,    -1,    -1,   348,    20,   200,   342,   351,   384,   343,
      -1,    -1,   348,    20,    37,   342,   352,   384,   343,    -1,
     348,    15,   166,    -1,   348,    15,    18,   166,    -1,   348,
      15,     6,    -1,   348,    15,    18,     6,    -1,     8,     9,
     348,    -1,   348,    19,   348,    42,   348,    -1,   348,    18,
      19,   348,    42,   348,    -1,   348,    -1,   348,   344,   353,
      -1,    -1,   353,    -1,    -1,   348,    16,   342,   355,   353,
     343,    -1,    -1,   348,    18,    16,   342,   356,   353,   343,
      -1,    -1,   348,    16,   342,   357,   384,   343,    -1,    -1,
     348,    18,    16,   342,   358,   384,   343,    -1,    -1,   244,
     342,   359,   384,   343,    -1,     3,   342,   354,   343,    -1,
     285,   342,    26,   343,    -1,   285,   342,   348,   343,    -1,
     286,   342,   348,   343,    -1,   287,   342,   348,   343,    -1,
     288,   342,   348,   343,    -1,   289,   342,   348,   343,    -1,
     283,   342,   348,   343,    -1,   283,   342,   348,   284,     4,
     343,    -1,    -1,   302,   342,   343,   310,   342,   360,   391,
     393,   343,    -1,    -1,   303,   342,   343,   310,   342,   361,
     391,   393,   343,    -1,    -1,   304,   342,   343,   310,   342,
     362,   391,   393,   343,    -1,    -1,   286,   342,   348,   343,
     310,   342,   363,   391,   393,   343,    -1,    -1,   285,   342,
      26,   343,   310,   342,   364,   391,   393,   343,    -1,    -1,
     285,   342,   348,   343,   310,   342,   365,   391,   393,   343,
      -1,    -1,   287,   342,   348,   343,   310,   342,   366,   391,
     393,   343,    -1,    -1,   288,   342,   348,   343,   310,   342,
     367,   391,   393,   343,    -1,    -1,   289,   342,   348,   343,
     310,   342,   368,   391,   393,   343,    -1,    -1,   305,   342,
     348,   343,   310,   342,   369,   391,   393,   343,    -1,    -1,
     305,   342,   348,   344,     5,   343,   310,   342,   370,   391,
     393,   343,    -1,    -1,   305,   342,   348,   344,     5,   344,
       4,   343,   310,   342,   371,   391,   393,   343,    -1,    -1,
     305,   342,   348,   344,     5,   344,     5,   343,   310,   342,
     372,   391,   393,   343,    -1,    -1,   306,   342,   348,   343,
     310,   342,   373,   391,   393,   343,    -1,    -1,   306,   342,
     348,   344,     5,   343,   310,   342,   374,   391,   393,   343,
      -1,    -1,   306,   342,   348,   344,     5,   344,     4,   343,
     310,   342,   375,   391,   393,   343,    -1,    -1,   306,   342,
     348,   344,     5,   344,     5,   343,   310,   342,   376,   391,
     393,   343,    -1,    -1,   307,   342,     5,   343,   310,   342,
     377,   391,   393,   343,    -1,    -1,   308,   342,   343,   310,
     342,   378,   391,   393,   343,    -1,    -1,   309,   342,   343,
     310,   342,   379,   391,   393,   343,    -1,   245,   342,   348,
     344,   348,   344,   348,   343,    -1,   245,   342,   348,   344,
     348,   343,    -1,   245,   342,   348,   117,   348,   343,    -1,
     245,   342,   348,   117,   348,   121,   348,   343,    -1,   246,
     342,   348,   343,    -1,   246,   342,   380,   348,   117,   348,
     343,    -1,   246,   342,   380,   117,   348,   343,    -1,   290,
     342,   348,   343,    -1,   291,   342,   348,   343,    -1,   292,
     342,   348,   343,    -1,   293,   342,   348,   344,   348,   343,
      -1,   294,   342,   348,   344,   348,   344,   348,   343,    -1,
     295,   342,   348,   344,   348,   343,    -1,   257,   342,   348,
     344,   348,   343,    -1,   258,   342,   348,   344,   348,   343,
      -1,   259,   342,   348,   344,   348,   344,   348,   343,    -1,
     260,   342,   348,   344,   348,   344,   348,   343,    -1,   261,
     342,   348,   343,    -1,   262,   342,   348,   344,   348,   343,
      -1,   263,   342,   348,   344,   348,   343,    -1,   264,   342,
     348,   344,   348,   343,    -1,   265,   342,   348,   343,    -1,
     266,   342,   348,   343,    -1,   267,   342,   348,   343,    -1,
     268,   342,   348,   344,   348,   343,    -1,   268,   342,   348,
     343,    -1,   269,   342,   348,   344,   348,   343,    -1,   270,
     342,   348,   343,    -1,   271,   342,   348,   344,   348,   343,
      -1,   272,   342,   343,    -1,   273,   342,   348,   343,    -1,
     274,   342,   348,   343,    -1,   275,   342,   348,   343,    -1,
     276,   342,   343,    -1,   256,   342,   343,    -1,   249,   342,
     348,   344,   348,   343,    -1,   250,   342,   348,   343,    -1,
     251,   342,   348,   343,    -1,   252,   342,   348,   343,    -1,
     253,   342,   348,   343,    -1,   254,   342,   348,   343,    -1,
     255,   342,   348,   343,    -1,   312,   342,   348,   344,   348,
     343,    -1,   313,   342,   348,   343,    -1,   314,   342,   348,
     343,    -1,   315,   342,   348,   343,    -1,   316,   342,   348,
     343,    -1,   317,   342,   348,   343,    -1,   318,   342,   348,
     343,    -1,   319,   342,   348,   343,    -1,   320,   342,   348,
     343,    -1,   321,   342,   348,   344,   348,   344,   348,   343,
      -1,   322,   342,   348,   344,   348,   344,   348,   343,    -1,
     323,   342,   348,   344,   348,   344,   348,   343,    -1,   324,
     342,   348,   344,   348,   343,    -1,   325,   342,   348,   344,
     348,   343,    -1,   326,   342,   348,   344,   348,   344,   348,
     343,    -1,   327,   342,   348,   344,   348,   344,   348,   343,
      -1,   328,   342,   348,   344,   348,   343,    -1,   328,   342,
     348,   344,   348,   344,   348,   344,   348,   343,    -1,   329,
     342,   348,   343,    -1,   329,   342,   348,   344,   348,   343,
      -1,   329,   342,   348,   344,   348,   344,   348,   343,    -1,
     330,   342,   348,   343,    -1,   332,   342,   348,   343,    -1,
     333,   342,   348,   343,    -1,   334,   342,   348,   344,   348,
     343,    -1,   334,   342,   348,   344,   348,   344,   348,   343,
      -1,   335,   342,   343,    -1,   277,   342,   348,    43,   475,
     343,    -1,   278,   342,   348,   344,   475,   343,    -1,   279,
     342,   348,   344,   348,   343,    -1,   280,   342,   348,   344,
     348,   343,    -1,   281,   342,   348,   344,   348,   344,   348,
     343,    -1,   348,    15,   282,    -1,   293,   342,   348,   344,
     348,   344,   348,   343,    -1,   293,   342,   348,   344,   348,
     344,   348,   344,   348,   343,    -1,   296,   342,   343,    -1,
     297,   342,   343,    -1,   298,   342,   343,    -1,   299,   342,
     343,    -1,   300,   342,   348,   343,    -1,   301,   342,   348,
     344,   348,   343,    -1,   151,    -1,   219,    -1,    57,    -1,
     247,   342,   348,   344,   381,   343,    -1,   248,   342,   348,
     344,   381,   343,    -1,   141,   348,   241,    -1,   141,   348,
      86,    -1,   141,   348,    87,    -1,   141,   348,    91,    -1,
     141,   348,    93,    -1,   141,   348,   242,    -1,   141,   348,
     125,    -1,   141,   348,   124,    -1,   141,   348,   127,    -1,
      69,   348,   382,   106,    -1,    69,   348,   382,   107,   348,
     106,    -1,    69,   382,   106,    -1,    69,   382,   107,   348,
     106,    -1,   238,   348,   218,   348,    -1,   382,   238,   348,
     218,   348,    -1,   348,    14,   348,    -1,   348,    18,    14,
     348,    -1,   348,    13,   348,    -1,   348,    18,    13,   348,
      -1,    64,    -1,    72,    -1,    73,    -1,   384,    -1,   207,
     402,   403,    -1,   207,   402,   403,   117,   406,   385,   386,
     390,   395,   398,   399,   400,    -1,   207,   402,   403,   139,
       3,   117,   406,   385,   386,   390,   395,   398,    -1,    -1,
     237,   348,    -1,    -1,   122,    55,   387,   389,    -1,   348,
     388,    -1,   387,   344,   348,   388,    -1,    -1,    41,    -1,
      94,    -1,    -1,   240,   187,    -1,    -1,   128,   348,    -1,
      -1,   311,    55,   392,    -1,     3,    -1,   392,   344,     3,
      -1,    -1,   171,    55,   394,    -1,     3,   388,    -1,   394,
     344,     3,   388,    -1,    -1,   171,    55,   396,    -1,   397,
      -1,   396,   344,   397,    -1,     3,   388,    -1,     3,   341,
       3,   388,    -1,     5,   388,    -1,    -1,   152,   348,    -1,
     152,   348,   344,   348,    -1,   152,   348,   154,   348,    -1,
      -1,   121,   223,    -1,   121,   198,    -1,   121,   223,   199,
     153,    -1,   121,   198,   199,   153,    -1,    -1,   139,   401,
      -1,     3,    -1,   401,   344,     3,    -1,    -1,   402,    37,
      -1,   402,    88,    -1,   402,    92,    -1,   402,   126,    -1,
     402,   204,    -1,   402,   194,    -1,   402,   202,    -1,   402,
     201,    -1,   404,    -1,   403,   344,   404,    -1,    26,    -1,
     348,   405,    -1,    43,     3,    -1,     3,    -1,    -1,   407,
      -1,   406,   344,   407,    -1,   408,    -1,   410,    -1,     3,
     405,   417,    -1,     3,   341,     3,   405,   417,    -1,   420,
     409,     3,    -1,   342,   406,   343,    -1,    43,    -1,    -1,
     407,   411,   143,   408,   415,    -1,   407,   204,   408,    -1,
     407,   204,   408,   170,   348,    -1,   407,   413,   412,   143,
     408,   416,    -1,   407,   163,   414,   143,   408,    -1,    -1,
     133,    -1,    68,    -1,    -1,   169,    -1,   150,    -1,   188,
      -1,   150,   412,    -1,   188,   412,    -1,    -1,    -1,   416,
      -1,   170,   348,    -1,   230,   342,   401,   343,    -1,   231,
     144,   418,   342,   419,   343,    -1,   134,   144,   418,   342,
     419,   343,    -1,   115,   144,   418,   342,   419,   343,    -1,
      -1,   121,   143,    -1,    -1,     3,    -1,   419,   344,     3,
      -1,   342,   384,   343,    -1,   421,    -1,    89,   422,   117,
       3,   385,   395,   398,   501,    -1,   422,   149,    -1,   422,
     176,    -1,   422,   134,    -1,    -1,    89,   422,   423,   117,
     406,   385,    -1,     3,   424,    -1,   423,   344,     3,   424,
      -1,    -1,   341,    26,    -1,    89,   422,   117,   423,   230,
     406,   385,    -1,   425,    -1,    90,   217,     3,    -1,    90,
     217,   136,   244,     3,    -1,   426,    -1,    65,   135,     3,
     170,     3,   342,   427,   343,    -1,    65,   135,   136,   244,
       3,   170,     3,   342,   427,   343,    -1,    65,   226,   135,
       3,   170,     3,   342,   427,   343,    -1,    65,   226,   135,
     136,   244,     3,   170,     3,   342,   427,   343,    -1,    65,
     135,     3,   170,     3,   230,   232,   342,   427,   343,    -1,
      65,   135,   136,   244,     3,   170,     3,   230,   232,   342,
     427,   343,    -1,    65,   226,   135,     3,   170,     3,   230,
     232,   342,   427,   343,    -1,    65,   226,   135,   136,   244,
       3,   170,     3,   230,   232,   342,   427,   343,    -1,    65,
     135,    77,     3,   170,     3,   342,   427,   343,    -1,    65,
     135,    77,   136,   244,     3,   170,     3,   342,   427,   343,
      -1,    65,   226,   135,    77,     3,   170,     3,   342,   427,
     343,    -1,    65,   226,   135,    77,   136,   244,     3,   170,
       3,   342,   427,   343,    -1,    65,   135,    77,     3,   170,
       3,   230,   232,   342,   427,   343,    -1,    65,   226,   135,
      77,     3,   170,     3,   230,   232,   342,   427,   343,    -1,
       3,    -1,   427,   344,     3,    -1,   428,    -1,   290,   342,
       3,   343,    -1,   291,   342,     3,   343,    -1,   292,   342,
       3,   343,    -1,   293,   342,     3,   344,     3,   343,    -1,
     429,    -1,    90,   135,     3,    -1,   430,   432,    -1,   220,
     217,     3,    -1,   220,   217,     3,   344,   431,    -1,     3,
      -1,   431,   344,     3,    -1,    -1,   432,    66,    -1,   432,
     183,    -1,   432,    47,    45,    -1,   432,    46,    45,    -1,
     433,    -1,   179,   217,     3,    -1,   434,    -1,    38,   217,
       3,    -1,    38,   217,     3,   341,     3,    -1,   435,    -1,
      34,   217,     3,    35,    63,     3,    70,   342,   348,   343,
      -1,    34,   217,     3,    35,    63,     3,   226,   342,   468,
     343,    -1,    34,   217,     3,    35,    63,     3,   116,   144,
     342,   465,   343,   180,     3,   342,   466,   343,   467,    -1,
      34,   217,     3,    35,    63,     3,    70,   342,   348,   343,
      18,   233,    -1,    34,   217,     3,    35,    63,     3,   116,
     144,   342,   465,   343,   180,     3,   342,   466,   343,   467,
      18,   233,    -1,    34,   217,     3,    35,    63,     3,   174,
     144,   342,   464,   343,    -1,    34,   217,     3,    90,    63,
       3,    -1,    34,   217,     3,   181,    63,     3,   210,     3,
      -1,    34,   217,     3,   102,    63,     3,    -1,    34,   217,
       3,    82,    63,     3,    -1,    34,   217,     3,   233,    63,
       3,    -1,    34,   217,     3,    35,    76,     3,   475,   470,
     436,    -1,    34,   217,     3,    90,    76,     3,    -1,    34,
     217,     3,    90,     3,    -1,    34,   217,     3,   181,    76,
       3,   210,     3,    -1,    34,   217,     3,   181,     3,   210,
       3,    -1,    34,   217,     3,   160,    76,     3,   475,   470,
     436,    -1,    34,   217,     3,   160,     3,   475,   470,   436,
      -1,    34,   217,     3,    67,    76,     3,     3,   475,   470,
     436,    -1,    34,   217,     3,    67,     3,     3,   475,   470,
     436,    -1,    -1,   112,    -1,    36,     3,    -1,   437,    -1,
     137,   441,   442,     3,   443,   235,   445,   438,   501,    -1,
     137,   441,   442,     3,   443,   384,    -1,    -1,    -1,   172,
     144,   223,   439,   440,    -1,     3,    20,   348,    -1,   440,
     344,     3,    20,   348,    -1,    -1,   441,   149,    -1,   441,
      85,    -1,   441,   126,    -1,   441,   134,    -1,   139,    -1,
      -1,    -1,   342,   444,   343,    -1,     3,    -1,   444,   344,
       3,    -1,   342,   447,   343,    -1,    -1,   445,   344,   446,
     342,   447,   343,    -1,   348,    -1,    95,    -1,   447,   344,
     348,    -1,   447,   344,    95,    -1,   137,   441,   442,     3,
     206,   448,   438,    -1,     3,    20,   348,    -1,     3,    20,
      95,    -1,   448,   344,     3,    20,   348,    -1,   448,   344,
       3,    20,    95,    -1,   449,    -1,   189,   441,   442,     3,
     443,   235,   445,   438,    -1,   189,   441,   442,     3,   206,
     448,   438,    -1,   189,   441,   442,     3,   443,   384,   438,
      -1,   450,    -1,   223,   451,   406,   206,   452,   385,   395,
     398,   501,    -1,    -1,   441,   149,    -1,   441,   134,    -1,
       3,    20,   348,    -1,     3,   341,     3,    20,   348,    -1,
     452,   344,     3,    20,   348,    -1,   452,   344,     3,   341,
       3,    20,   348,    -1,   181,   217,     3,   210,     3,    -1,
     453,    -1,    65,    78,   454,     3,    -1,    65,   195,   454,
       3,    -1,    90,    78,     3,    -1,    90,    78,   136,   244,
       3,    -1,    90,   195,     3,    -1,    90,   195,   136,   244,
       3,    -1,    -1,   136,   244,    -1,   455,    -1,    65,    84,
       3,    43,   475,    -1,    65,    84,     3,    43,   475,    95,
     348,    -1,    65,    84,     3,    43,   475,    18,   166,    -1,
      65,    84,     3,    43,   475,    70,   342,   348,   343,    -1,
      65,    84,     3,    43,   475,    18,   166,    70,   342,   348,
     343,    -1,   456,    -1,   231,     3,    -1,   231,    78,     3,
      -1,   457,    -1,    65,   461,   217,   454,     3,   342,   462,
     343,   458,    -1,    65,   461,   217,   454,     3,   341,     3,
     342,   462,   343,   458,    -1,    -1,   458,    40,    20,     5,
      -1,   458,    40,     5,    -1,   458,   170,     3,    89,     3,
      -1,   458,   170,     3,   213,     3,    -1,   458,   196,    55,
     232,   342,     3,   343,   197,     5,    -1,   458,   196,    55,
     177,   342,     3,   343,   342,   459,   343,    -1,   460,    -1,
     459,   344,   460,    -1,   196,     3,   235,   147,   215,     4,
     170,   164,     5,    -1,   196,     3,   235,   147,   215,   157,
     170,   164,     5,    -1,    65,   461,   217,   454,     3,   342,
     462,   343,   477,    -1,    65,   461,   217,   454,     3,   477,
      -1,    65,   461,   217,   454,     3,   341,     3,   342,   462,
     343,   477,    -1,    65,   461,   217,   454,     3,   341,     3,
     477,    -1,    -1,   211,    -1,   212,   211,    -1,   463,    -1,
     462,   344,   463,    -1,   174,   144,   342,   464,   343,    -1,
      63,     3,   174,   144,   342,   464,   343,    -1,   144,   342,
     401,   343,    -1,   135,   342,   401,   343,    -1,   119,   135,
     342,   401,   343,    -1,   119,   144,   342,   401,   343,    -1,
      70,   342,   348,   343,    -1,    63,     3,    70,   342,   348,
     343,    -1,   116,   144,   342,   465,   343,   180,     3,   342,
     466,   343,   467,    -1,   116,   144,   342,   465,   343,   180,
       3,   341,     3,   342,   466,   343,   467,    -1,    63,     3,
     116,   144,   342,   465,   343,   180,     3,   342,   466,   343,
     467,    -1,    63,     3,   116,   144,   342,   465,   343,   180,
       3,   341,     3,   342,   466,   343,   467,    -1,   226,   342,
     468,   343,    -1,    63,     3,   226,   342,   468,   343,    -1,
       3,    -1,   464,   344,     3,    -1,     3,    -1,   465,   344,
       3,    -1,     3,    -1,   466,   344,     3,    -1,    -1,   467,
     170,    89,    66,    -1,   467,   170,    89,   206,   166,    -1,
     467,   170,    89,   183,    -1,   467,   170,    89,   206,    95,
      -1,   467,   170,   223,    66,    -1,   467,   170,   223,   206,
     166,    -1,   467,   170,   223,   183,    -1,   467,   170,   223,
     206,    95,    -1,   467,   170,    89,   165,    -1,   467,   170,
     223,   165,    -1,   467,   156,   118,    -1,   467,   156,   203,
      -1,   467,   156,   173,    -1,   467,    80,    -1,   467,    18,
      80,    -1,   467,    80,   131,    81,    -1,   467,    80,   131,
     129,    -1,     3,    -1,   468,   344,     3,    -1,    -1,   469,
       3,   475,   470,    -1,    -1,   470,    18,   166,    -1,   470,
     166,    -1,   470,    95,     4,    -1,   470,    95,     5,    -1,
     470,    95,     7,    -1,   470,    95,     6,    -1,   470,    95,
     296,   342,   343,    -1,   470,    95,   297,   342,   343,    -1,
     470,    95,   298,   342,   343,    -1,   470,    95,    64,    -1,
     470,    95,   342,   348,   343,    -1,   470,    40,    -1,   470,
      40,   342,     5,   344,     5,   343,    -1,   470,    40,   342,
       5,   343,    -1,   470,    45,   342,     5,   344,     5,   343,
      -1,   470,    45,   342,     5,   343,    -1,   470,    45,    -1,
     470,   226,   144,    -1,   470,   226,    -1,   470,   174,   144,
      -1,   470,   144,    -1,   470,    71,     4,    -1,   470,    70,
     342,   348,   343,    -1,   470,    63,     3,   226,    -1,   470,
      63,     3,   174,   144,    -1,   470,    63,     3,    70,   342,
     348,   343,    -1,   470,    48,    44,    43,   342,   348,   343,
      49,    -1,   470,    48,    44,    43,   342,   348,   343,    50,
      -1,   470,    48,    44,    43,   342,   348,   343,    -1,   470,
      43,   342,   348,   343,    49,    -1,   470,    43,   342,   348,
     343,    50,    -1,   470,    43,   342,   348,   343,    -1,    -1,
     342,     5,   343,    -1,   342,     5,   344,     5,   343,    -1,
      -1,    56,    -1,    -1,   473,   224,    -1,   473,   243,    -1,
      -1,   474,    74,   206,     4,    -1,   474,    75,     4,    -1,
      59,   471,    -1,   209,   471,   473,    -1,   205,   471,   473,
      -1,   162,   471,   473,    -1,   140,   471,   473,    -1,   132,
     471,   473,    -1,    58,   471,   473,    -1,   178,   471,   473,
      -1,    96,   471,   473,    -1,   114,   471,   473,    -1,    98,
     471,   473,    -1,    99,    -1,   222,    -1,   216,    -1,    97,
      -1,   241,    -1,    74,   471,   474,    -1,   234,   342,     5,
     343,   474,    -1,    56,   471,    -1,   236,   342,     5,   343,
      -1,   221,    -1,    53,    -1,   161,    -1,   155,    -1,   208,
     472,   474,    -1,   214,   472,   474,    -1,   158,   472,   474,
      -1,   148,   472,   474,    -1,   105,   342,   476,   343,   474,
      -1,   206,   342,   476,   343,   474,    -1,    54,    -1,   227,
      -1,   228,    -1,     4,    -1,   476,   344,     4,    -1,   478,
     409,   384,    -1,    -1,   134,    -1,   189,    -1,   479,    -1,
     206,   195,     3,    -1,   206,   195,    95,    -1,   206,   480,
      -1,   481,    -1,   480,   344,   481,    -1,     8,    20,   348,
      -1,     8,     9,   348,    -1,   482,    -1,    65,   175,     3,
     342,   483,   343,    43,    52,   487,   106,    -1,    65,   175,
       3,   342,   483,   343,    52,   487,   106,    -1,    65,    10,
     189,   175,     3,   342,   483,   343,    43,    52,   487,   106,
      -1,    65,    10,   189,   175,     3,   342,   483,   343,    52,
     487,   106,    -1,    65,   120,     3,   342,   483,   343,   186,
     486,    43,    52,   487,   106,    -1,    65,   120,     3,   342,
     483,   343,   186,   486,    52,   487,   106,    -1,    65,    10,
     189,   120,     3,   342,   483,   343,   186,   486,    43,    52,
     487,   106,    -1,    65,    10,   189,   120,     3,   342,   483,
     343,   186,   486,    52,   487,   106,    -1,    -1,   484,    -1,
     485,    -1,   484,   344,   485,    -1,     3,   475,    -1,    16,
       3,   475,    -1,   168,     3,   475,    -1,   130,     3,   475,
      -1,   132,    -1,   140,    -1,   234,    -1,   214,    -1,    54,
      -1,   114,    -1,    96,    -1,    58,    -1,    99,    -1,   216,
      -1,    -1,   487,   488,    -1,   487,    52,   487,   106,    -1,
     487,   136,   487,   106,   136,    -1,   487,   239,   487,   106,
     239,    -1,   487,   146,   487,   106,   146,    -1,   487,   113,
     487,   106,   113,    -1,   487,    69,   487,   106,    69,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
      20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,
      42,    -1,   207,    -1,   137,    -1,   223,    -1,    89,    -1,
     117,    -1,   237,    -1,   206,    -1,   139,    -1,   235,    -1,
      65,    -1,    90,    -1,   217,    -1,   135,    -1,   218,    -1,
     107,    -1,   101,    -1,    79,    -1,    83,    -1,    60,    -1,
     184,    -1,   145,    -1,   142,    -1,    62,    -1,   167,    -1,
     111,    -1,    61,    -1,   123,    -1,   109,    -1,   168,    -1,
     130,    -1,   121,    -1,    46,    -1,   191,    -1,   182,    -1,
     108,    -1,   193,    -1,    51,    -1,   100,    -1,   190,    -1,
     192,    -1,    43,    -1,   170,    -1,   171,    -1,    55,    -1,
     122,    -1,   128,    -1,   152,    -1,   154,    -1,   143,    -1,
     150,    -1,   188,    -1,   133,    -1,   169,    -1,   118,    -1,
      68,    -1,   163,    -1,   230,    -1,   166,    -1,    95,    -1,
     174,    -1,   144,    -1,   226,    -1,    70,    -1,   116,    -1,
     180,    -1,    66,    -1,   183,    -1,   165,    -1,   132,    -1,
     140,    -1,   234,    -1,   214,    -1,    54,    -1,   114,    -1,
      96,    -1,    58,    -1,    99,    -1,   216,    -1,   205,    -1,
      98,    -1,    74,    -1,   227,    -1,    53,    -1,   225,    -1,
     104,    -1,   138,    -1,    37,    -1,    88,    -1,   244,    -1,
     238,    -1,   240,    -1,   175,    -1,   120,    -1,   186,    -1,
     342,    -1,   343,    -1,   344,    -1,   340,    -1,   341,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      17,    -1,   345,    -1,   285,    -1,   286,    -1,   287,    -1,
     288,    -1,   289,    -1,     8,    -1,   489,    -1,    90,   175,
       3,    -1,    90,   175,   136,   244,     3,    -1,    90,   120,
       3,    -1,    90,   120,   136,   244,     3,    -1,   490,    -1,
      60,     3,   342,   343,    -1,    60,     3,   342,   491,   343,
      -1,   492,    -1,   491,   344,   492,    -1,     5,    -1,     4,
      -1,     7,    -1,   166,    -1,     6,    -1,     3,    -1,     8,
      -1,   493,    -1,    65,   192,     3,   494,   495,   170,     3,
     121,   100,   190,    52,   487,   106,    -1,    51,    -1,    36,
      -1,   137,    -1,   223,    -1,    89,    -1,   496,    -1,    90,
     192,     3,    -1,    90,   192,   136,   244,     3,    -1,    34,
     192,     3,   102,    -1,    34,   192,     3,    82,    -1,   497,
      -1,    65,   331,   454,     3,   498,    -1,    -1,   498,   499,
      -1,   336,   240,     5,    -1,   336,     5,    -1,   337,    55,
       5,    -1,   337,     5,    -1,   338,     5,    -1,   157,     5,
      -1,   339,    -1,    18,   339,    -1,   500,    -1,    90,   331,
       3,    -1,    90,   331,   136,   244,     3,    -1,    34,   331,
       3,   498,    -1,    34,   331,     3,    47,    -1,    34,   331,
       3,    47,   240,     5,    -1,    34,   331,     3,   181,   210,
       3,    -1,    -1,   185,    26,    -1,   185,   502,    -1,     3,
      -1,   502,   344,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   410,   410,   411,   416,   423,   424,   425,   443,   451,
     459,   465,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   498,   498,   507,   507,   509,   509,   511,   511,
     515,   516,   517,   518,   519,   522,   523,   526,   527,   530,
     531,   534,   534,   535,   535,   536,   536,   544,   544,   552,
     552,   563,   567,   568,   569,   570,   571,   572,   573,   574,
     578,   578,   580,   580,   582,   582,   585,   585,   587,   587,
     589,   589,   591,   591,   593,   593,   595,   595,   598,   598,
     600,   600,   602,   602,   604,   604,   606,   606,   608,   608,
     610,   610,   612,   612,   615,   615,   617,   617,   619,   619,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   658,   659,   660,   661,   662,   663,
     664,   665,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   690,   691,   692,   693,   694,   696,
     697,   699,   700,   701,   703,   704,   705,   706,   713,   720,
     727,   731,   735,   741,   742,   743,   746,   752,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   770,   772,   774,
     776,   780,   788,   799,   800,   803,   804,   807,   815,   823,
     834,   844,   845,   858,   874,   875,   876,   877,   880,   887,
     895,   896,   897,   900,   901,   904,   905,   909,   910,   913,
     915,   919,   920,   923,   925,   929,   930,   933,   934,   937,
     943,   950,   959,   960,   961,   962,   965,   966,   967,   968,
     969,   972,   973,   976,   977,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   991,   992,   993,  1001,  1007,  1008,
    1009,  1012,  1013,  1016,  1017,  1021,  1028,  1029,  1030,  1033,
    1034,  1038,  1040,  1042,  1044,  1046,  1050,  1051,  1052,  1055,
    1056,  1059,  1060,  1063,  1064,  1065,  1068,  1069,  1072,  1073,
    1077,  1079,  1081,  1083,  1086,  1087,  1090,  1091,  1094,  1098,
    1108,  1116,  1117,  1118,  1119,  1123,  1127,  1129,  1133,  1133,
    1135,  1140,  1147,  1154,  1164,  1171,  1178,  1188,  1196,  1206,
    1214,  1223,  1232,  1242,  1250,  1259,  1268,  1278,  1287,  1299,
    1304,  1309,  1315,  1322,  1329,  1336,  1346,  1353,  1362,  1369,
    1375,  1383,  1389,  1397,  1398,  1399,  1400,  1401,  1405,  1412,
    1421,  1428,  1434,  1445,  1448,  1454,  1460,  1467,  1473,  1480,
    1486,  1492,  1498,  1504,  1510,  1516,  1522,  1528,  1534,  1540,
    1546,  1552,  1558,  1564,  1572,  1573,  1574,  1577,  1585,  1591,
    1604,  1605,  1605,  1608,  1616,  1626,  1627,  1628,  1629,  1630,
    1633,  1633,  1636,  1637,  1640,  1650,  1663,  1664,  1664,  1667,
    1668,  1669,  1670,  1673,  1677,  1678,  1679,  1680,  1686,  1689,
    1695,  1700,  1706,  1714,  1723,  1724,  1725,  1729,  1740,  1752,
    1763,  1778,  1783,  1787,  1788,  1792,  1794,  1796,  1798,  1802,
    1803,  1809,  1813,  1815,  1817,  1819,  1821,  1826,  1830,  1831,
    1835,  1844,  1854,  1858,  1859,  1860,  1861,  1862,  1863,  1865,
    1869,  1870,  1873,  1888,  1895,  1910,  1923,  1938,  1951,  1952,
    1953,  1956,  1957,  1960,  1961,  1962,  1963,  1964,  1965,  1966,
    1967,  1968,  1970,  1972,  1974,  1976,  1978,  1982,  1983,  1986,
    1987,  1990,  1991,  1994,  1995,  1996,  1997,  1998,  1999,  2000,
    2001,  2002,  2003,  2004,  2005,  2006,  2007,  2008,  2009,  2010,
    2011,  2014,  2015,  2018,  2018,  2028,  2029,  2030,  2031,  2032,
    2033,  2034,  2035,  2036,  2037,  2038,  2039,  2046,  2047,  2048,
    2049,  2050,  2051,  2052,  2053,  2054,  2055,  2056,  2057,  2058,
    2059,  2060,  2061,  2062,  2063,  2064,  2065,  2066,  2069,  2070,
    2071,  2074,  2075,  2078,  2079,  2080,  2083,  2084,  2085,  2089,
    2090,  2091,  2092,  2093,  2094,  2095,  2096,  2097,  2098,  2099,
    2100,  2101,  2102,  2103,  2104,  2105,  2106,  2107,  2108,  2109,
    2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,  2118,  2119,
    2120,  2121,  2124,  2125,  2128,  2141,  2142,  2143,  2147,  2150,
    2151,  2152,  2153,  2153,  2155,  2156,  2164,  2168,  2174,  2180,
    2187,  2194,  2200,  2206,  2213,  2222,  2223,  2226,  2227,  2230,
    2231,  2232,  2233,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2252,  2253,  2254,  2255,  2256,  2257,  2258,
    2259,  2262,  2263,  2264,  2264,  2264,  2265,  2265,  2265,  2265,
    2265,  2265,  2266,  2266,  2266,  2266,  2266,  2266,  2266,  2266,
    2266,  2267,  2267,  2267,  2267,  2267,  2267,  2267,  2268,  2268,
    2268,  2268,  2269,  2269,  2269,  2269,  2269,  2269,  2269,  2269,
    2269,  2269,  2269,  2269,  2270,  2270,  2270,  2270,  2270,  2270,
    2270,  2270,  2271,  2271,  2271,  2271,  2271,  2271,  2271,  2271,
    2272,  2272,  2272,  2272,  2272,  2272,  2272,  2272,  2272,  2273,
    2273,  2273,  2273,  2273,  2273,  2273,  2273,  2274,  2274,  2274,
    2275,  2275,  2275,  2275,  2275,  2275,  2275,  2275,  2276,  2276,
    2276,  2276,  2276,  2276,  2276,  2277,  2277,  2277,  2277,  2277,
    2277,  2277,  2278,  2278,  2278,  2278,  2279,  2279,  2279,  2279,
    2279,  2279,  2279,  2279,  2279,  2279,  2279,  2279,  2280,  2280,
    2280,  2280,  2280,  2281,  2288,  2292,  2298,  2304,  2310,  2322,
    2326,  2332,  2340,  2341,  2344,  2345,  2346,  2347,  2348,  2349,
    2350,  2357,  2361,  2369,  2370,  2373,  2374,  2375,  2378,  2382,
    2388,  2397,  2405,  2416,  2420,  2429,  2430,  2434,  2435,  2436,
    2437,  2438,  2439,  2440,  2441,  2444,  2448,  2454,  2464,  2471,
    2478,  2486,  2496,  2497,  2498,  2501,  2502
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
  "CURRENT_TIME", "CHAR", "COLLATE", "COLUMN", "CONCURRENTLY", "DATABASE",
  "DECLARE", "DEFERRABLE", "DEFERRED", "DISABLE", "DO", "DOMAIN",
  "DELAYED", "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP",
  "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE",
  "DATETIME", "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE", "ESCAPED",
  "EXCEPT", "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN", "FETCH",
  "FIRST", "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL",
  "FULLTEXT", "FUNCTION", "FOR", "GROUP", "HANDLER", "HOUR_MINUTE",
  "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND", "HAVING",
  "IMMEDIATE", "INOUT", "INITIALLY", "INTEGER", "INNER", "IGNORE", "INDEX",
  "IF", "INSERT", "INTERSECT", "INTO", "INT", "INTERVAL", "ITERATE",
  "JOIN", "KEY", "LEAVE", "LOOP", "LESS", "LONGTEXT", "LOW_PRIORITY",
  "LEFT", "LEADING", "LIMIT", "LOCKED", "OFFSET", "LONGBLOB", "MATCH",
  "MAXVALUE", "MEDIUMTEXT", "MINUS", "MODIFY", "MEDIUMBLOB", "MEDIUMINT",
  "NATURAL", "NODE", "NO_ACTION", "NULLX", "OPEN", "OUT", "OUTER", "ON",
  "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY", "PROCEDURE", "QUICK",
  "RANGE", "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESIGNAL",
  "RESTRICT", "RETURN", "RETURNING", "RETURNS", "ROLLUP", "RIGHT",
  "REPLACE", "ROW", "SIGNAL", "TRIGGER", "UNTIL", "SQL_SMALL_RESULT",
  "SCHEMA", "SHARD", "SHARDS", "SHARE", "SKIP", "SOME",
  "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN",
  "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT", "TO", "TEMPORARY",
  "GLOBAL", "PRESERVE", "TEXT", "THAN", "TIMESTAMP", "TABLE", "THEN",
  "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
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
  "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "FROW_NUMBER", "FRANK",
  "FDENSE_RANK", "FLEAD", "FLAG", "FNTILE", "FPERCENT_RANK", "FCUME_DIST",
  "OVER", "PARTITION", "FJSON_EXTRACT", "FJSON_UNQUOTE", "FJSON_TYPE",
  "FJSON_LENGTH", "FJSON_DEPTH", "FJSON_VALID", "FJSON_KEYS",
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
  "insert_stmt", "opt_ondupupdate", "@30", "upsert_asgn_list",
  "insert_opts", "opt_into", "opt_col_names", "insert_col_list",
  "insert_vals_list", "@31", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_table_options",
  "shard_range_list", "shard_range_def", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list",
  "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@32", "column_atts", "opt_length", "opt_binary",
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
      59,    46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   346,   347,   347,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   349,   348,   350,   348,   351,   348,   352,   348,
     348,   348,   348,   348,   348,   348,   348,   353,   353,   354,
     354,   355,   348,   356,   348,   357,   348,   358,   348,   359,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     360,   348,   361,   348,   362,   348,   363,   348,   364,   348,
     365,   348,   366,   348,   367,   348,   368,   348,   369,   348,
     370,   348,   371,   348,   372,   348,   373,   348,   374,   348,
     375,   348,   376,   348,   377,   348,   378,   348,   379,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   380,   380,   380,   348,   348,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   348,   348,   348,
     348,   382,   382,   348,   348,   348,   348,   348,   348,   348,
     383,   384,   384,   384,   385,   385,   386,   386,   387,   387,
     388,   388,   388,   389,   389,   390,   390,   391,   391,   392,
     392,   393,   393,   394,   394,   395,   395,   396,   396,   397,
     397,   397,   398,   398,   398,   398,   399,   399,   399,   399,
     399,   400,   400,   401,   401,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   403,   403,   403,   404,   405,   405,
     405,   406,   406,   407,   407,   408,   408,   408,   408,   409,
     409,   410,   410,   410,   410,   410,   411,   411,   411,   412,
     412,   413,   413,   414,   414,   414,   415,   415,   416,   416,
     417,   417,   417,   417,   418,   418,   419,   419,   420,   383,
     421,   422,   422,   422,   422,   421,   423,   423,   424,   424,
     421,   383,   425,   425,   383,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   427,
     427,   427,   428,   428,   428,   428,   383,   429,   383,   430,
     430,   431,   431,   432,   432,   432,   432,   432,   383,   433,
     383,   434,   434,   383,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   436,   436,   436,   383,   437,   437,
     438,   439,   438,   440,   440,   441,   441,   441,   441,   441,
     442,   442,   443,   443,   444,   444,   445,   446,   445,   447,
     447,   447,   447,   437,   448,   448,   448,   448,   383,   449,
     449,   449,   383,   450,   451,   451,   451,   452,   452,   452,
     452,   383,   383,   453,   453,   383,   383,   383,   383,   454,
     454,   383,   455,   455,   455,   455,   455,   383,   456,   456,
     383,   457,   457,   458,   458,   458,   458,   458,   458,   458,
     459,   459,   460,   460,   457,   457,   457,   457,   461,   461,
     461,   462,   462,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   464,   464,   465,
     465,   466,   466,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   468,   468,   469,   463,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   471,   471,
     471,   472,   472,   473,   473,   473,   474,   474,   474,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   476,   476,   477,   478,   478,   478,   383,   479,
     479,   479,   480,   480,   481,   481,   383,   482,   482,   482,
     482,   482,   482,   482,   482,   483,   483,   484,   484,   485,
     485,   485,   485,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   487,   487,   487,   487,   487,   487,   487,
     487,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   383,   489,   489,   489,   489,   383,
     490,   490,   491,   491,   492,   492,   492,   492,   492,   492,
     492,   383,   493,   494,   494,   495,   495,   495,   383,   496,
     496,   383,   383,   383,   497,   498,   498,   499,   499,   499,
     499,   499,   499,   499,   499,   383,   500,   500,   383,   383,
     383,   383,   501,   501,   501,   502,   502
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     0,     6,     0,     7,     0,     7,     0,     7,
       3,     4,     3,     4,     3,     5,     6,     1,     3,     0,
       1,     0,     6,     0,     7,     0,     6,     0,     7,     0,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       0,     9,     0,     9,     0,     9,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    10,     0,    10,
       0,    12,     0,    14,     0,    14,     0,    10,     0,    12,
       0,    14,     0,    14,     0,    10,     0,     9,     0,     9,
       8,     6,     6,     8,     4,     7,     6,     4,     4,     4,
       6,     8,     6,     6,     6,     8,     8,     4,     6,     6,
       6,     4,     4,     4,     6,     4,     6,     4,     6,     3,
       4,     4,     4,     3,     3,     6,     4,     4,     4,     4,
       4,     4,     6,     4,     4,     4,     4,     4,     4,     4,
       4,     8,     8,     8,     6,     6,     8,     8,     6,    10,
       4,     6,     8,     4,     4,     4,     6,     8,     3,     6,
       6,     6,     6,     8,     3,     8,    10,     3,     3,     3,
       3,     4,     6,     1,     1,     1,     6,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     6,     3,
       5,     4,     5,     3,     4,     3,     4,     1,     1,     1,
       1,     3,    12,    12,     0,     2,     0,     4,     2,     4,
       0,     1,     1,     0,     2,     0,     2,     0,     3,     1,
       3,     0,     3,     2,     4,     0,     3,     1,     3,     2,
       4,     2,     0,     2,     4,     4,     0,     2,     2,     4,
       4,     0,     2,     1,     3,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     2,     2,     1,
       0,     1,     3,     1,     1,     3,     5,     3,     3,     1,
       0,     5,     3,     5,     6,     5,     0,     1,     1,     0,
       1,     1,     1,     2,     2,     0,     0,     1,     2,     4,
       6,     6,     6,     0,     2,     0,     1,     3,     3,     1,
       8,     2,     2,     2,     0,     6,     2,     4,     0,     2,
       7,     1,     3,     5,     1,     8,    10,     9,    11,    10,
      12,    11,    13,     9,    11,    10,    12,    11,    12,     1,
       3,     1,     4,     4,     4,     6,     1,     3,     2,     3,
       5,     1,     3,     0,     2,     2,     3,     3,     1,     3,
       1,     3,     5,     1,    10,    10,    17,    12,    19,    11,
       6,     8,     6,     6,     6,     9,     6,     5,     8,     7,
       9,     8,    10,     9,     0,     1,     2,     1,     9,     6,
       0,     0,     5,     3,     5,     0,     2,     2,     2,     2,
       1,     0,     0,     3,     1,     3,     3,     0,     6,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     1,     8,
       7,     7,     1,     9,     0,     2,     2,     3,     5,     5,
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
       0,     0,     0,     0,   478,   324,     0,   405,     0,     0,
     405,     0,   265,     0,   405,     0,     0,     0,   220,   319,
     331,   334,   356,   363,   368,   370,   373,   397,   428,   432,
     442,   451,   457,   460,   608,   616,   774,   779,   791,   798,
     803,   815,     0,     0,     0,     0,     0,     0,   449,     0,
       0,     0,     0,     0,   449,   479,     0,     0,   449,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   411,
       0,     0,   411,     0,     0,   611,   612,     0,     0,     0,
       0,   458,     0,     1,     2,   358,     0,     0,   805,   371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   449,   328,     0,   323,   321,
     322,     0,   445,     0,   777,     0,   357,   775,     0,   799,
       0,   447,     0,   332,     0,   816,     0,   407,   408,   409,
     410,   406,     0,   369,     0,     0,     0,     0,   609,   610,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     276,   266,   217,     0,   218,   219,   267,   268,   269,    11,
     271,   273,   272,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,   221,   274,   359,   409,   406,   280,     0,
       0,   281,   283,   284,   290,   459,     3,     0,     0,   364,
     365,   802,   801,     0,     0,     0,     0,     0,     0,     0,
       0,   819,     0,   818,     0,   789,   785,   784,   788,   786,
     790,   787,   780,     0,   782,     0,     0,   450,   443,     0,
     625,     0,     0,     0,     0,   625,   794,   793,     0,   444,
       0,     0,     0,   805,     0,     0,   326,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   412,     0,
     412,   615,   614,   613,     0,    49,     0,    30,    29,    18,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   277,     0,     0,     0,     0,
       0,   313,     0,     0,     0,     0,   298,   297,   301,   305,
     302,     0,     0,   299,   289,     0,   367,   366,     0,     0,
       0,     0,     0,   387,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     813,   806,   372,   781,     0,     0,     0,   590,   599,   558,
     558,   558,   558,   558,   583,   558,   580,     0,   558,   558,
     558,   561,   592,   561,   591,   558,   558,   558,     0,   561,
     558,   561,   582,   589,   581,   600,   601,     0,     0,   584,
     452,     0,     0,     0,     0,     0,   626,   627,     0,     0,
       0,     0,     0,   797,   795,   796,     0,     0,     0,     0,
       0,   804,   605,   329,     0,   245,     0,   224,   328,   446,
     778,   776,   800,   448,   333,   817,     0,     0,     0,   441,
       0,     0,     5,    47,    50,     0,    44,     0,     0,   209,
       0,     0,     0,     0,   195,   193,   194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,   188,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,    19,    21,    22,    20,   215,   213,
      42,     0,    40,   184,    51,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    31,    23,    24,    26,    12,    13,
      14,    15,    16,    17,    25,    28,    27,   278,   224,     0,
     275,   361,   360,   280,     0,     0,     0,   285,   318,   288,
       0,   224,   282,   299,   299,     0,   292,     0,   300,     0,
     287,     0,     0,     0,     0,   383,   380,   386,   382,   525,
       0,     0,     0,     0,   384,   820,   821,   814,   812,   808,
       0,   810,     0,   811,   783,   625,   625,     0,   587,   563,
     569,   566,   563,   563,     0,   563,   563,   563,   562,   566,
     566,   563,   563,   563,     0,   566,   563,   566,     0,     0,
       0,     0,     0,   629,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     606,   607,     0,   523,   475,   290,   225,     0,   252,   224,
     325,   327,     0,   400,   414,     0,     0,   399,   400,     0,
     400,     0,    61,     0,   207,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,   146,   147,   148,
     149,   150,   151,     0,     0,     0,     0,   127,     0,     0,
       0,   131,   132,   133,   135,     0,     0,   137,     0,   140,
     141,   142,     0,     0,     0,     0,     0,     0,    68,    62,
      63,    64,    65,    66,    67,   117,   118,   119,     0,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
     170,     0,   173,   174,   175,     0,    43,    41,     0,     0,
     216,   214,    53,     0,     0,    38,    34,    36,     0,   226,
       0,     0,   313,   315,   315,   315,     0,     0,     0,   245,
     303,   304,     0,     0,   306,     0,     0,     0,     0,     0,
     525,   525,     0,   394,   525,   389,     0,     0,   807,   809,
       0,     0,     0,   575,   585,   577,   579,   602,     0,   578,
     574,   573,   596,   595,   572,   576,   571,     0,   593,   570,
     594,     0,     0,   454,     0,   453,   630,   632,   631,     0,
     628,     0,   349,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,   643,     0,     0,     0,     0,     0,
       0,   605,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   481,     0,     0,     0,     0,   822,   330,     0,     0,
       0,   423,   413,     0,     0,   400,   430,   400,   431,    48,
     211,     0,   210,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      72,    74,     0,     0,     0,     0,     0,   106,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,   235,   224,   362,   286,     0,     0,     0,     0,   437,
       0,     0,   252,   295,   293,     0,     0,   291,   307,     0,
       0,     0,     0,     0,   394,   394,   525,     0,     0,   537,
       0,   542,     0,     0,     0,     0,     0,   395,   546,   527,
       0,   544,   391,   394,   381,   388,     0,     0,   559,     0,
     564,   565,     0,     0,   566,     0,   566,   566,   588,     0,
       0,   637,   640,   639,   641,   638,   633,   634,   636,   642,
     635,     0,     0,     0,     0,     0,     0,   335,     0,     0,
       0,     0,     0,     0,   643,     0,     0,     0,     0,     0,
       0,     0,     0,   523,   477,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   463,   523,     0,   604,   230,   230,
     246,   247,   253,     0,   320,   425,   424,     0,     0,   415,
     420,   419,     0,   417,   822,   429,   208,   212,     0,   112,
     111,     0,   116,     0,     0,   196,   197,   145,   123,   124,
       0,     0,   128,   129,   130,   134,   136,   138,   179,   180,
     181,   182,     0,    69,    78,    80,    76,    82,    84,    86,
     120,     0,     0,   122,   192,   237,   237,   237,    88,     0,
       0,    96,     0,     0,   104,   237,   237,   152,     0,     0,
       0,   164,   165,     0,     0,   168,     0,   171,     0,   176,
       0,    52,    56,     0,     0,    46,     0,     0,     0,    33,
       0,     0,   245,   226,   314,     0,     0,     0,     0,     0,
       0,   822,   308,     0,   294,     0,     0,     0,   521,     0,
     385,   393,   394,   526,   396,     0,     0,     0,     0,     0,
       0,   547,   528,   529,   531,   530,   535,     0,     0,     0,
       0,   545,   543,   390,     0,     0,   643,     0,     0,   568,
     597,   603,   598,   586,     0,   455,     0,   643,     0,     0,
       0,     0,     0,   350,     0,   343,     0,     0,     0,     0,
     651,   652,   653,   655,   654,   773,   658,   659,   660,   766,
     657,   656,   761,   762,   763,   764,   765,   748,   661,   702,
     693,   698,   643,   744,   734,   705,   737,   680,   687,   684,
     671,   727,   716,   643,   724,   742,   678,   679,   749,   665,
     672,   720,   736,   741,   738,   699,   677,   746,   618,   676,
     696,   689,   686,   643,   735,   725,   666,   715,   754,   692,
     706,   688,   707,   691,   730,   713,   674,   643,   663,   747,
     669,   731,   683,   710,   722,   682,   643,   711,   708,   709,
     717,   729,   719,   685,   690,   714,   703,   704,   721,   753,
     726,   695,   728,   681,   755,   712,   700,   694,   701,   697,
     740,   668,   662,   733,   739,   673,   675,   664,   745,   723,
     743,   718,   732,   670,   667,   751,   643,   752,   750,   768,
     769,   770,   771,   772,   759,   760,   756,   757,   758,   767,
     644,     0,     0,   337,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,     0,   461,   474,   482,   525,   231,   232,     0,
     249,   251,     0,     0,     0,   825,   823,   824,   401,     0,
     416,     0,     0,   398,     0,     0,   115,   199,   200,   201,
     202,   205,   204,   206,   198,   203,     0,     0,     0,   237,
     237,   237,   237,   237,   237,     0,     0,     0,   241,   241,
     241,   237,     0,     0,     0,   237,     0,     0,     0,   237,
     241,   241,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    58,    39,    35,    37,   230,   233,   236,   252,   235,
     316,     0,     0,     0,   438,   439,     0,   433,     0,   374,
     499,     0,   497,     0,   375,     0,   392,     0,     0,     0,
       0,     0,     0,   549,     0,     0,     0,     0,     0,     0,
     643,     0,   560,   567,     0,   643,     0,   339,   352,   353,
     354,     0,     0,     0,     0,   336,   617,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   345,     0,     0,     0,
     463,     0,     0,     0,     0,   489,     0,     0,     0,   486,
       0,   485,     0,   495,     0,     0,     0,   524,   230,   248,
     255,   254,     0,     0,   427,   426,   422,   421,     0,   113,
     110,   125,   126,   183,   241,   241,   241,   241,   241,   241,
     185,     0,   121,     0,     0,     0,     0,     0,   241,    90,
       0,     0,   241,    98,     0,     0,   241,     0,     0,   161,
     162,   163,   166,   167,     0,   172,   177,   228,     0,     0,
     227,   256,   245,   312,     0,   311,   310,     0,   309,     0,
       0,     0,   379,     0,   522,   539,     0,   557,   541,     0,
       0,     0,   550,   548,   532,   533,   534,   536,     0,   643,
       0,   620,   456,     0,   622,     0,   347,   344,     0,   645,
       0,     0,     0,     0,     0,   643,   341,     0,     0,     0,
     338,   462,   476,     0,     0,     0,     0,     0,   487,   488,
     264,   483,   465,     0,     0,     0,   250,   826,     0,   402,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   238,
       0,    71,    73,    75,     0,   237,     0,     0,     0,   237,
       0,     0,     0,   107,   109,     0,   234,   230,     0,   261,
     252,   317,   440,   377,     0,   500,   498,     0,   555,   556,
       0,     0,     0,   643,     0,   619,   621,   355,   340,   650,
     649,   646,   648,   647,     0,   348,   346,     0,   490,     0,
       0,   496,     0,   464,     0,     0,     0,     0,     0,     0,
     418,    79,    81,    77,    83,    85,    87,   186,     0,   230,
     242,    89,   241,    92,    94,    97,   241,   100,   102,   105,
     169,   229,   258,   257,     0,   222,   223,     0,   538,   540,
     554,   551,     0,   624,   792,   342,     0,   484,     0,   466,
     467,     0,     0,   403,     0,   240,   243,     0,     0,   237,
     237,     0,   237,   237,     0,     0,   262,     0,   552,   553,
     623,     0,     0,     0,     0,     0,     0,   230,    91,   241,
     241,    99,   241,   241,   260,   259,   501,     0,     0,     0,
       0,     0,     0,   404,   244,     0,     0,     0,     0,   503,
       0,     0,     0,     0,   503,     0,     0,    93,    95,   101,
     103,   376,   502,     0,     0,     0,   491,     0,     0,   470,
     468,     0,   517,     0,     0,     0,   503,   503,     0,     0,
     469,     0,   518,   378,     0,   514,   516,   515,     0,     0,
       0,   493,   492,     0,   471,   519,   520,   504,   512,   506,
       0,   508,   513,   510,     0,   503,     0,   507,   505,   511,
     509,   494,     0,     0,     0,     0,     0,     0,     0,   472,
     473
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   583,   938,  1117,  1118,  1116,   584,   585,   928,
    1112,   929,  1113,   592,  1285,  1286,  1287,  1581,  1579,  1580,
    1582,  1583,  1584,  1591,  1835,  1939,  1940,  1595,  1839,  1942,
    1943,  1599,  1295,  1296,   598,  1060,   342,    17,    18,   565,
    1121,  1616,  1550,  1750,  1322,  1588,  1829,  1725,  1900,   818,
    1230,  1231,  1036,  1849,  1915,  1539,    77,   253,   254,   455,
     260,   261,   262,   475,   263,   472,   739,   473,   735,  1137,
    1138,   727,  1126,  1621,   264,    19,    60,   111,   316,    20,
      21,  1007,  1008,    22,    23,   722,    85,    24,    25,    26,
    1162,    27,  1041,  1703,  1819,    69,   132,   578,   825,  1045,
    1562,  1242,   823,    28,    29,    80,   731,    30,    93,    31,
      32,    33,  1543,  1998,  1999,    59,  1030,  1031,  1633,  1631,
    1967,  1991,  1339,  1032,   963,   768,   779,   973,   974,   540,
     978,   814,   815,    34,    75,    76,    35,   545,   546,   547,
    1191,  1205,  1520,    36,    37,   293,   294,    38,   308,   556,
      39,    40,   283,   501,    41,  1234,  1557
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1512
static const yytype_int16 yypact[] =
{
     627,  -138,   -71,   148,   533, -1512,   405, -1512,   -35,   -27,
   -1512,    31, -1512,   193,    11,   103,   245,   -75, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512,   470,   495,   501,   542,   149,   343,   440,   576,
     585,    55,   589,   592,   440, -1512,   370,   464,   440,   389,
      38,   114,   121,   624,   130,   192,   384,   401,   403,   572,
     649,   651,   572,   439,    81,   312, -1512,  5917,   656,   529,
      19, -1512,   659, -1512,   627,    73,    71,   368,    48,   331,
      41,    -6,   432,   677,   639,   349,   514,   408,   444,   351,
     129,   692, -1512,   102,   700,   440,   364,   704, -1512, -1512,
   -1512,   -91, -1512,   513, -1512,   536, -1512, -1512,   546, -1512,
     550, -1512,   552, -1512,   556, -1512,   570, -1512, -1512, -1512,
   -1512, -1512,   711, -1512,   558,   846,  8211,  8211, -1512, -1512,
     847,   175, -1512, -1512, -1512, -1512,   854,  8211,  8211,  8211,
   -1512, -1512, -1512,  6748, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512,   523,   528,   544,   548,   574,   580,
     594,   633,   650,   693,   694,   717,   718,   719,   720,   730,
     753,   769,   778,   794,   795,   796,   805,   821,   822,   823,
     824,   825,   826,   827,   828,   830,   831,   833,   834,   836,
     837,   838,   839,   840,   843,   844,   848,   858,   859,   861,
     864,   886,   888,   903,   904,   905,   907,   908,   911,   912,
     913,   914,   915,   916,   917,   918,   922,   923,   924,   925,
     926,   928,   929,   930,   932,   933,   934,   943,   945,   946,
     947,   951,   953,   954,   961,   962,   963,   964,   965,   966,
     967,  8211, 11078,   -97, -1512,   540,    47,    50,    21,    18,
    -140,  1044, -1512, -1512,   829, -1512, -1512,   832,   853, -1512,
   -1512, -1512, -1512,    80,   107,   812,   426,   956,   435,   430,
     979,   726,   760,    59,  1061, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512,   191, -1512,  1193,  1258, -1512, -1512, 10769,
      62,  1307,  1142,  1069,  1311,    62, -1512, -1512,   -26, -1512,
    1145,   414,  1077, -1512,  1319,  1297, -1512,   197,  -142,    19,
    1321,  1327,  1328,  1330,  1334,  1335,  1338,  1344,  -115,  1346,
     -98, 11173, 11173, -1512,  1347,  8211,  8211,  1570,  1570, -1512,
    8211, 10743,   -33, -1512,  8211,  6250,  8211,  8211,  8211,  8211,
    8211,  8211,  8211,  8211,  8211,  1008,  8211,  8211,  8211,  8211,
    8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,
    8211,  1009,  8211,  8211,  8211,  1011,  8211,  8211,  8211,  8211,
    8211,  8211,  6864,  8211,  8211,  8211,  8211,  8211,  8211,  8211,
    8211,  8211,  8211,  1012,  1013,  1015,  1016,  8211,  8211,  1017,
    1018,  1022,  8211,  8211,  1361,  1024,  1028,  8211,  8211,  8211,
    8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,
    8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  1033,
    8786, -1512,  8211,  8211,  8211,  8211,  8211,   112,  1026,   577,
    8211,  6415,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,
    8211,  8211,  8211,  8211,  1374, -1512,    19,  1376,  8211,  1381,
    1383,     6,  1046,   204,  1390,    19, -1512, -1512, -1512,   -13,
   -1512,    19,  1257,  1232, -1512,  1400, -1512, -1512,  1402,  1405,
    1412,  1420,  1422, -1512,  1424,  1426,  1427, 10769,  1428,  1222,
    1430,  1431,  1432,  1433,  1447,  1097,  1446,    14,   111,  1448,
   -1512, -1512, -1512, -1512,    94,  1110,  1113, -1512, -1512,  1117,
    1117,  1117,  1117,  1117, -1512,  1117, -1512,  1119,  1117,  1117,
    1117,  1407, -1512,  1407, -1512,  1117,  1117,  1117,  1126,  1407,
    1117,  1407, -1512, -1512, -1512, -1512, -1512,  1127,  1128, -1512,
      89, 10769,  1468,  1469,  1472,  1135,  1139, -1512,   -94,  1482,
    1483,  1317,  1146, -1512, -1512, -1512,  1323,  1491,  1325,  1252,
    1495,    59,   -99, -1512,  8211,  1331,    19,  -112,   364, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512,  1500,  1502,   233, -1512,
    1500,   247, -1512,  1893, -1512,  1163, 11173,  1627,   -25, -1512,
    8211,  8211,  1300,   541, -1512, -1512, -1512,  8809,  7197,  2202,
    2511,  2820,  8832,  8855,  8881,  8904,  8929,  8952, -1512,  3129,
    3438,  3747,  4056,  8975,  4365,  4674,  4983,  8998,  9021,  9044,
     619,  5292,  9067,  5601, -1512,  9090,  9135,  9158, -1512,  8181,
    6026,  6049,  6112,  6266,  6074,  1167,  9181,  9207,  9230,  9255,
    9278,  9301,  9324,  9347,  6314,  6353,  6606, -1512, -1512, -1512,
   -1512,  9370,  6830,  1205,  1206,  1207,   881,   919,  1176,  1211,
    1212,  6881,  9393,  9416,  9439,  9484,  9507,  9533,  9556,  9581,
    6933,  7279,  7329,  7391,  7778,  7840,  8227,  8275,   975,  9604,
    9627,  9650,  8298, -1512, -1512,  2246,  2554,  1025,  2862,  2862,
   -1512,    45, -1512, -1512,  1313,  8211,  8211,  1181,  8211, 11123,
    1182,  1190,  1223,  8211,  2217,  1526,  1597,  1210,   723,   723,
     573,   573,   573,   573,   578, -1512, -1512, -1512,  -112,  1456,
   -1512, -1512,  1220,   119,  1459,  1461,  1462, -1512, -1512, -1512,
      13,   171,  1044,  1232,  1232,  1464,  1438,    19, -1512,  1466,
   -1512,   -30, 10769, 10769,  1607, -1512, -1512, -1512, -1512, -1512,
   10769,  1608,  1403,  1423, -1512, -1512, -1512, -1512, -1512, -1512,
    1625, -1512,  1629, -1512, -1512,    62,    62,  1630, -1512, -1512,
   -1512, -1512, -1512, -1512,  1628, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512,  1628, -1512, -1512, -1512,  1631,  1655,
    1505,  1270,  8211, -1512, 10769, 10769, 10769,  1487,    62,  1445,
     131,   -80,  1509,  1678,   443,  1684,   -78,  1685,  1686,  1520,
   -1512, -1512,  1688,    26, -1512,   829, 11173,  1637,  1544,  -112,
   -1512, -1512,  1677,  -141, -1512,   269,  1356, -1512,  -141,  1356,
    1527,  8211, -1512,  8211, -1512,  8211, 10766,  7216,  1359,  8211,
    8211, -1512,  8211,  8113,  1562,  1562,  8211, -1512, -1512, -1512,
   -1512, -1512, -1512,  8211,  8211,  8211,  8211, -1512,  8211,  8211,
    8211, -1512, -1512, -1512, -1512,  8211,  8211, -1512,  8211, -1512,
   -1512, -1512, 10769, 10769,  8211,  8211,  8211,  1701, -1512,  1396,
    1397,  1398,  1404,  1411,  1415, -1512, -1512, -1512,  8211,  8211,
    8211, -1512,  8211,  1373,  1375,  1380,  1419,  1725,  1421,  1728,
    1425,  1392,  1394,  8211, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512,  8211,  8211,  8211,  8211,  8211,  8211,  8211,  8211,
   -1512,  8211, -1512, -1512, -1512,  8211, -1512, -1512,  8211,  1300,
    2862,  2862,  1531, 11148,  8211, -1512, -1512, -1512,  1300,  1617,
      19,  1737,     6,  1621,  1621,  1621,  8211,  1740,  1741,  1331,
   -1512, -1512,    19,  8211,   -83,    19,  1408,  1601,  1605,  1409,
   -1512, -1512, 10769,  7651, -1512, -1512,  1749,  1752, -1512, -1512,
    1417,  1418,   272,   260,   549,   260,   260, -1512,   323,   260,
     260,   260,   549,   549,   260,   260,   260,   326,   549,   260,
     549,  1434,  1439,  1693,  8211, 11173, -1512, -1512, -1512,   488,
   -1512,  1441, -1512,  1442,  1443,  1450,  1457,   342, -1512,  1536,
     131,  1767,   155,  1721, -1512,  1666,  1557,   131,   170,  1635,
    1803,  -106,  1804,  1471,  1670,   361,  1473,  1474,  1673,  1476,
     346, -1512,  1816,  1300,   524,  8211,  1645, -1512,  7313,  1676,
    1819, -1512, -1512,  1832,  7646,  -129, -1512,  -129, -1512, -1512,
   11173, 11023, -1512,  8211, -1512,  6764,  1002,  9673,  8211,  8211,
    1494,  1504,  9696,  9719,  9742,  8554,  8577,  9765,  9788,  9833,
    9859,  9882,  9907,  1510,  1512,  9930,  9953,  8602,  1513,  1501,
    1516,  1518,  1524,  1525,  1528,  1055,  8625,  9976,  9999, -1512,
   -1512, -1512,  1529,   356,  1535,   366,  1538, -1512, -1512, 10022,
    8648,  8671,  8694, 10045, 10068,  8717,  8740,  1078,  1103,  1130,
    1514,  1530,  8211,  1300,  8211,  1188,  1300,  1300,  1300,  1539,
    1797,  1750,  -112, -1512, -1512,  1726,  1545,  1547,  1548, 11173,
    1848,    42,  1544, -1512, 11173,  8211,  1549, -1512, -1512,   -83,
    8211,  1552,  1559,  1907,  7651,  7651, -1512,  1760,  1924,  1586,
    1587,  1588,  1887,  1929,  1591,  1930,   122, -1512, -1512, -1512,
    1792,  1793, -1512,  7651, -1512, -1512,  1753,   479, -1512,  1933,
   -1512, -1512,  1734,  1937, -1512,  1938, -1512, -1512, -1512,  1606,
   10091, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512,   531,   131,  1946,  1947,  1948,  1949, -1512,  1950,  1612,
     369,  1613,  1724,   131, -1512,  1274,  1858,  1618,   375,  1727,
     131,  1958,   177,    26, -1512,    15,  8211,  1620,  1622,  1624,
    1960,  1960,  1626,  1907,    51,    26, 10769, -1512,   -14,    74,
    1623, -1512,  1515,   138, -1512, -1512, 11173,  1746,  1956, -1512,
   -1512, 11173,   380, -1512,  1645, -1512, -1512, 11173,  8211, -1512,
   -1512,  8211, -1512, 10114, 10789, -1512, -1512, -1512, -1512, -1512,
    8211,  8211, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512,  8211, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512,  8211,  8211, -1512, -1512,  1667,  1667,  1667, -1512,  1671,
     722, -1512,  1672,   725, -1512,  1667,  1667, -1512,  8211,  8211,
    8211, -1512, -1512,  8211,  8211, -1512,  8211, -1512,  8211, -1512,
    8211, -1512, -1512,  1643,  1646,  1188,  1647,  1653,  1654, -1512,
    8211,  8211,  1331,  1617, -1512,  1977,  1977,  1977,  8211,  8211,
    1985,  1645, 11173,  1960, -1512, 10137,  2002,  2003, -1512,   388,
   -1512, -1512,  7651, -1512, -1512,  2006,  8211,  2007,  1964,    -3,
    8211, -1512, -1512, -1512, -1512, -1512, -1512,  1674,  1681,  1682,
    8211, -1512, -1512, -1512,   488,  1962, -1512,  1665,  2011, -1512,
     549, -1512,   549,   549,  8211, -1512,  1974, -1512,   390,  1687,
    1691,  1695,  1696, -1512,   131, -1512,   131,  1689,   394,  1658,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512,  1849,   131, -1512,  1700,   397,  1702,  1811,   131,   399,
    1703,  1903,  1904,  1707, 10167,  2002,  1960,  1960, -1512,   417,
     423,  2003,   427,    28, -1512, -1512, -1512, -1512, -1512,  2048,
   -1512, -1512,   524,  8211,  8211, -1512, -1512,  1708, -1512,  7762,
   -1512,  8095,  1711, -1512, 10208, 10233, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, 10256, 10279, 10302,  1667,
    1667,  1667,  1667,  1667,  1667,  1556, 10325,  1999,  1888,  1888,
    1888,  1667,  1716,  1717,  1718,  1667,  1722,  1729,  1736,  1667,
    1888,  1888, 10348, 10371, 10394, 10417, 10440,  8763, 10463, 10493,
   -1512, -1512, -1512, -1512, -1512, 11046,    84, 11173,  1544,  1750,
   -1512,   429,   431,   441, 11173, 11173,  2049, -1512,   449,  2052,
   -1512,   466, -1512,   474, -1512,  2074, -1512,   477, 10516,   481,
    1744,  1751,  1952, -1512, 10542,  1739,  1748,  1755, 10582,   534,
   -1512,  1967, -1512, -1512, 10605, -1512,  2276, -1512, -1512, -1512,
   -1512,  2089,   484,   486,   131, -1512, -1512,  2585,  2894,  3203,
    3512,  3821,  4130,  2042,   502,   131, -1512,   131,  1759,   530,
      51,  8211,  1766,  1772,  1907, -1512,   535,   537,   539, -1512,
    2112, -1512,   545, -1512,   480,  2113,  2063,  1791,    74, -1512,
   11173, 11173,  2117,  2119, -1512, 11173, -1512, 11173,  7646, -1512,
   -1512, -1512, -1512, -1512,  1888,  1888,  1888,  1888,  1888,  1888,
   -1512,  8211, -1512,  2120,  2069,  1782,  1783,  1784,  1888, -1512,
    1818,  1821,  1888, -1512,  1829,  1830,  1888,  1786,  1800, -1512,
   -1512, -1512, -1512, -1512,  8211, -1512, -1512, -1512,  1957,  8211,
   -1512,  2024,  1331, -1512,  2143, -1512, -1512,  8211, -1512,  1915,
    1972,  2151, -1512,  2153, -1512, -1512,  2156,   697, -1512,  2157,
    8211,  8211, -1512, -1512, -1512, -1512, -1512, -1512,  2111, -1512,
    4439, -1512, -1512,  4748, -1512,  1822, -1512, -1512,   571, -1512,
    2095,  2053,  2031,  2022,  1931, -1512, -1512,   575,   581,   131,
   -1512,    28, -1512, 10628,  2002,  2003,   609,  1989, -1512, -1512,
   -1512, -1512, -1512,  2166,    20,   262, -1512, -1512,  2155,  1833,
     611,  1835,  1836,  1837,  1839,  1843,  1844, 10651, -1512,  1845,
    2173, -1512, -1512, -1512,  1852,  1667,  1846,  1854,  1855,  1667,
    1857,  1861,  1865, -1512, -1512, 10674, -1512, 11046,   -60,  2061,
    1544, -1512, 11173, -1512,  2188, -1512, -1512,  1866, -1512, -1512,
    1867, 10697, 10720, -1512,  5057, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512,  5366, -1512, -1512,   613, -1512,   616,
     621, -1512,  2216, -1512,  2232,  2233,  1908,  1909,  8211,  2260,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,  2282,    74,
    1943, -1512,  1888, -1512, -1512, -1512,  1888, -1512, -1512, -1512,
   -1512, -1512,  2090,  2091,  1960, -1512, -1512,  1953, -1512, -1512,
     737, -1512,  5675, -1512, -1512, -1512,  2118, -1512,   490, -1512,
   -1512,  2288,  2294, 11173,  2279, -1512, -1512,  2302,  1963,  1667,
    1667,  1971,  1667,  1667,  2162,  2163,  1973,  2317, -1512, -1512,
   -1512,  2318,  2320,  2317,  1981,  1982,  8211,    74, -1512,  1888,
    1888, -1512,  1888,  1888, -1512, -1512, -1512,   625,   579,  1984,
     628,  1990,  2136, 11173, -1512,  1992,  1996,  1997,  2000, -1512,
    2344,  2345,  2317,  2317, -1512,  2158,  2346, -1512, -1512, -1512,
   -1512,   243, -1512,  2010,   630,   634,   419,  2350,   636, -1512,
   -1512,   -24,  2218,   307,    23,  2317, -1512, -1512,  2277,  2121,
   -1512,  2158, -1512, -1512,   345, -1512, -1512, -1512,    -5,   286,
     640,   419,   419,  2211, -1512, -1512, -1512, -1512, -1512, -1512,
     357, -1512, -1512, -1512,   360, -1512,  2145, -1512, -1512, -1512,
   -1512,   419,    53,  2191,  2192,  2199,  2203,  2363,  2364, -1512,
   -1512
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1512,  2286,   -77, -1512, -1512, -1512, -1512,  -793, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1512, -1512, -1512, -1512, -1512,  1533,  2032, -1512,  -190,  -564,
    1056, -1512, -1222, -1512,   762, -1138, -1512, -1497, -1512,  -945,
   -1512,   849, -1130, -1512, -1512, -1220, -1512, -1512,  1928,  -248,
    -244,  1923,  -419,  1576, -1512, -1512,   275, -1512, -1512, -1512,
    1256,  1458,  -122,  -316, -1512, -1512, -1512,  2295,  1842, -1512,
   -1512, -1004, -1512, -1512, -1512, -1512, -1512, -1512, -1512, -1512,
   -1108, -1512,  -796, -1512, -1512,   568,  2331,  2075, -1512,  1578,
   -1512,   709,  1847, -1512, -1512, -1512, -1512, -1512,   402, -1512,
   -1512, -1512,   743, -1512,   413, -1512,  1216,  1200, -1511, -1506,
   -1504, -1399, -1207, -1512,  -952,   341,   152,   416,  -762,  -364,
    1648, -1016, -1512, -1512, -1512,  2291, -1512,  -294, -1512,  1636,
    1071,  -976, -1512, -1512, -1512, -1512,  1932, -1512, -1512, -1512,
   -1512, -1512,  2124, -1512, -1512,  -915, -1512
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -606
static const yytype_int16 yytable[] =
{
     252,  1540,  1331,   820,  1132,  1214,  1200,  1551,  1144,  1145,
     461,   552,  1163,  1208,  -434,   463,  1542,   982,   983,   759,
     456,   258,   258,   988,   431,   990,   319,  1547,   810,  1686,
    1692,  1039,  1046,   946,  1048,   810,  1340,  1341,  1049,    73,
     956,   106,   457,  1039,   285,   286,   287,   288,   289,   290,
    -436,   926,   736,  -435,    42,  1363,  2012,  2043,    96,   331,
     332,  2027,  1329,   553,   454,   541,   464,  1641,  1694,   462,
     337,   338,   339,   589,   590,   567,   341,   495,   542,    43,
    1548,   834,   835,   811,   138,  1530,   957,  1135,   566,  1022,
     811,   576,  1726,  1727,  -605,   281,  1023,   285,   286,   287,
     288,   289,   290,  1737,  1738,   310,    81,   790,   580,  1884,
     480,   554,  2018,  1628,   295,  1547,   761,   112,   690,   267,
     268,   724,   431,   749,   114,   564,  1352,  1353,  1354,  1355,
     691,  1531,    97,   117,  1002,  1110,   799,   733,  1912,   269,
     725,  1555,  1024,   478,   958,  1025,    45,  1136,  1589,  1590,
    1009,    46,  1016,   271,   939,   107,   479,  1600,  1601,   791,
    2028,  1026,   454,  1913,  1556,   306,   762,   949,  1548,   296,
    1027,  1642,   108,   272,   430,   734,   139,   793,  2029,   311,
     307,    82,    70,   481,   792,   810,  1356,   109,  1378,  1532,
      71,    98,   543,    44,  1342,   119,   959,   555,  1695,  1388,
    1028,  2030,   320,  1040,   465,   591,  1525,   291,  1544,  2013,
    2044,   927,   718,   591,   110,  1243,   496,  1821,  1822,  1823,
    1824,  1825,  1826,  1643,  1696,    12,    74,   577,  1389,   282,
     544,  1834,   465,  1885,  1636,  1838,  1213,   726,   312,  1842,
     811,  1533,   812,   813,   577,    83,  2019,   458,   800,  1244,
     113,  1245,  1029,   320,   760,  1037,   270,   115,  -605,   586,
     291,  2001,  1010,   587,  1017,    84,   118,   593,   597,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   692,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,  1880,   625,   626,   627,  1879,   629,
     630,   631,   632,   633,   634,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,  1687,  1688,   954,  1313,
     651,   652,   819,  2002,  1748,   656,   657,  1549,   120,  1563,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,  2031,  -434,   947,   685,   686,   687,   688,   689,
     259,   259,   460,   699,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,  1618,   960,   961,
    1662,   252,  1663,  1330,   292,  1202,   964,   121,   827,  -436,
    1651,   830,  -435,  1747,   693,   497,   498,   499,   500,  2003,
    1209,  1656,   838,   273,   123,  1938,   125,  1527,   564,  1941,
      78,   302,  1370,  2004,  1372,  1373,  1627,   558,  1357,  1358,
    1359,  1003,  1004,  1005,  1006,  2015,  2025,  -328,  1749,   483,
     996,   997,   998,   489,   564,   274,  1667,  2008,   487,  1886,
      12,  1714,  1715,  1716,  1717,  1718,  1719,  1668,   136,  1970,
     275,  2032,  2037,  1728,    12,  2039,   101,  1732,   276,   137,
     104,  1736,  1975,  1976,  1360,  1977,  1978,  1669,   826,  2033,
     277,   970,   971,    86,  2026,   942,  1816,  1806,  1994,  1995,
    2016,  1670,   829,    61,  1170,  1812,  1013,   816,  1751,   484,
    1671,    90,  2034,   490,  1887,  1014,  1218,  1203,    87,  2002,
    1813,  2020,   485,  1171,    88,  1219,   491,   314,  1073,  1074,
    2017,   488,  1210,   836,   837,   948,   334,   335,  1674,  1528,
     122,   843,  1365,  2038,  1679,    62,  2040,  1228,   278,  1229,
    1672,  1366,    91,  1133,   503,   504,  1139,   124,   315,   126,
      63,  -328,  1181,    47,   303,    89,  1182,   729,   465,   279,
     559,   432,   433,   434,   435,   436,   437,   438,  1323,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,  1376,  2003,    92,  1778,    72,    94,
      64,   102,    79,  1377,  1183,  1996,  1779,  1184,    95,  2004,
     695,   696,    99,   697,  1697,   100,   698,    65,  1146,   103,
      66,   280,  1185,   451,   452,   453,   105,  2021,  2022,   452,
     453,    48,  1042,  1043,   127,  1168,  1169,    49,   930,   931,
    1186,   933,    67,  1172,  1173,  1911,   430,   116,  1187,   432,
     433,   434,   435,   436,   437,   438,  2041,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   133,    50,   134,   128,   140,   127,   839,   255,
    1788,     1,   265,   256,  1802,     2,  1174,  1175,    51,  1176,
    1175,  1797,   284,  1798,  1780,   780,   297,  1936,   257,  1783,
     298,   785,   299,   787,   301,  1197,  1198,     3,   304,  1224,
    1225,   300,     4,   305,  1946,   309,  1122,  1902,   128,  1289,
    1290,  1906,  1188,   313,  1189,   315,   129,   317,    52,  1292,
    1293,   130,  1385,  1198,   328,   995,     5,     6,  1523,  1198,
    1916,   131,  1190,  1560,  1561,    53,  1593,  1594,    54,  1597,
    1598,  1634,  1635,  1657,  1198,  1974,    68,  1665,  1198,  1111,
    1676,  1198,  1680,  1225,    55,    56,  1858,  1859,  1119,   447,
     448,   449,   450,   451,   452,   453,  1050,   321,  1051,    57,
    1689,  1690,  1055,  1056,     7,  1057,  1691,  1690,   329,  1062,
    1693,  1635,  1753,  1754,  1755,  1754,  1063,  1064,  1065,  1066,
     322,  1067,  1068,  1069,  1756,  1754,  1948,  1949,  1070,  1071,
     323,  1072,  1758,  1690,   324,  1877,   325,  1075,  1076,  1077,
     326,  1959,  1960,  1864,  1962,  1963,     8,  1850,     9,  1760,
    1761,  1085,  1086,  1087,   327,  1088,    10,  1762,  1763,  1874,
    1765,  1766,  1127,  1128,  1768,  1769,  1099,  1786,  1198,  1787,
    1198,  1952,  1953,    11,    12,  1100,  1101,  1102,  1103,  1104,
    1105,  1106,  1107,  1227,  1108,  1796,  1198,    13,  1109,   330,
      14,   769,   770,   771,   772,    73,   773,  1115,    15,   775,
     776,   777,  1546,   336,    58,   343,   781,   782,   783,  1129,
     344,   786,   474,  1800,  1198,   482,  1134,   476,  1807,  1761,
    1808,  1690,  1809,  1690,   459,   840,   345,  1922,  1811,  1763,
     346,   432,   433,   434,   435,   436,   437,   438,   477,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,  1868,  1198,   347,  1180,  1875,  1198,
    1981,  1982,   348,  1314,  1876,  1198,  1316,  1317,  1318,   432,
     433,   434,   435,   436,   437,   438,   349,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,  1881,  1635,  1890,  1561,  1925,  1198,  1232,  1926,
    1761,  1236,   864,   865,  1927,  1763,   493,  1241,  1979,  1980,
     494,  1984,  1980,  2006,  1980,   350,  1247,  2007,  1980,  2010,
    2011,  1253,  1254,  2035,  1980,   432,   433,   434,   435,   436,
     437,   438,   351,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   950,   951,
    1622,  1623,   432,   433,   434,   435,   436,   437,   438,   486,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   352,   353,  1315,   435,   436,
     437,   438,   492,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,  1332,   354,
     355,   356,   357,  1335,   502,   432,   433,   434,   435,   436,
     437,   438,   358,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,   359,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   360,   466,   432,   433,   434,   435,   436,   437,   438,
     361,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   362,   363,   364,  1534,
     432,   433,   434,   435,   436,   437,   438,   365,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   366,   367,   368,   369,   370,   371,   372,
     373,  1564,   374,   375,  1565,   376,   377,   467,   378,   379,
     380,   381,   382,  1576,  1577,   383,   384,  -296,   975,   976,
     385,   979,   980,   981,   468,  1578,   505,   984,   985,   986,
     386,   387,   989,   388,  1585,  1586,   389,   469,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,  1602,  1603,  1604,   896,   897,  1605,  1606,   390,  1607,
     391,  1608,   470,  1609,   445,   446,   447,   448,   449,   450,
     451,   452,   453,  1615,  1617,   392,   393,   394,   471,   395,
     396,  1624,  1625,   397,   398,   399,   400,   401,   402,   403,
     404,   506,   898,   899,   405,   406,   407,   408,   409,  1638,
     410,   411,   412,  1644,   413,   414,   415,  1390,  1391,  1392,
    1393,  1394,  1395,  1648,  1396,   416,  1397,   417,   418,   419,
    1398,  1399,  1400,   420,  1401,   421,   422,  1654,  1402,  1403,
    1404,  1405,  1406,   423,   424,   425,   426,   427,   428,   429,
     548,  1407,   549,   550,   551,   557,  1408,  1409,   920,   921,
    1410,   560,   562,   563,   568,  1411,  1412,  1413,  1414,  1415,
     569,   570,  1416,   571,  1417,  1418,  1419,   572,   573,  1420,
    1421,   574,  1422,  1423,  1424,  1250,  1251,   575,  1425,   579,
     582,   608,   624,  1426,   628,   647,   648,  1427,   649,   650,
     653,   654,  1428,  1429,  1430,   655,   658,   659,   694,  1431,
    1432,   660,  1433,  1434,  1435,  1436,   683,   717,  1437,   719,
    1438,  1439,  1440,  1441,   721,  1442,   723,  1443,  1444,   728,
    1445,  1446,  1447,   730,  1448,  1449,  1450,  1451,  1280,  1281,
     737,   738,  1452,   740,  1453,   741,  1454,  1455,   742,  1456,
    1457,  1458,  1459,  1460,  1461,   743,  1462,  1463,  1464,  1465,
    1466,  1305,  1306,   744,  1467,   745,  1468,   746,  1469,   747,
     748,   750,   751,   752,   753,   754,   757,  1470,   755,  1471,
    1472,  1473,  1474,  1475,  1476,  1477,  1307,  1308,  1478,  1479,
     756,   758,   765,   763,  1480,   766,  1481,  1482,  1483,   767,
    1484,   774,  1485,   778,  1486,  1487,  1488,  1489,   784,   788,
     789,   794,   795,  1309,  1310,   796,  1700,  1701,   797,  1490,
    1491,  1492,  1705,   798,  1707,   801,   802,   803,  1493,   804,
    1494,  1495,  1496,   805,   806,   807,   808,  1497,   809,  1498,
    1499,  1500,   817,   822,  1501,   824,   832,    12,  1502,  1503,
     879,  1504,  1505,  1506,  1507,   893,   894,   895,  1508,   900,
     -55,   901,   902,   932,   935,   432,   433,   434,   435,   436,
     437,   438,   936,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,  1509,
    1510,  1511,  1512,  1513,   941,   937,   432,   433,   434,   435,
     436,   437,   438,   940,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   943,  1803,   944,   945,   952,   953,   955,
     962,   965,   994,   966,  1514,  1515,  1516,  1517,  1518,  1519,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     968,  1241,   977,   967,   969,   972,   991,   432,   433,   434,
     435,   436,   437,   438,  1827,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     992,  1390,  1391,  1392,  1393,  1394,  1395,  1845,  1396,  1553,
    1397,   993,  1847,   999,  1398,  1399,  1400,  1001,  1401,  1011,
    1852,  1012,  1402,  1403,  1404,  1405,  1406,  1015,  1018,  1019,
    1020,  1021,  1034,  1861,  1862,  1407,  1035,  1038,  1044,  1039,
    1408,  1409,  1054,  1059,  1410,  1078,  1079,  1080,  1081,  1411,
    1412,  1413,  1414,  1415,  1082,  1089,  1416,  1090,  1417,  1418,
    1419,  1083,  1091,  1420,  1421,  1084,  1422,  1423,  1424,  1092,
    1093,  1094,  1425,  1095,  1097,  1096,  1098,  1426,   -57,  1120,
    1123,  1427,  1125,  1130,  1131,  1141,  1428,  1429,  1430,  1142,
    1140,  1143,  1164,  1431,  1432,  1165,  1433,  1434,  1435,  1436,
    1166,  1167,  1437,  1179,  1666,  1439,  1440,  1441,  1199,  1442,
    1201,  1443,  1444,  1204,  1445,  1446,  1447,  1177,  1448,  1449,
    1450,  1451,  1178,  1192,  1193,  1194,  1452,  1206,  1453,  1207,
    1454,  1455,  1195,  1456,  1457,  1458,  1459,  1460,  1461,  1196,
    1462,  1463,  1464,  1465,  1466,  1211,  1212,  1215,  1467,  1147,
    1468,  1933,  1469,  1216,  1217,  1220,  1221,  1222,  1223,  1226,
    1237,  1470,  1238,  1471,  1472,  1473,  1474,  1475,  1476,  1477,
    1233,  1149,  1478,  1479,  1150,  1239,  1151,  1255,  1480,  1152,
    1481,  1482,  1483,  1274,  1484,   833,  1485,  1256,  1486,  1487,
    1488,  1489,  1320,  1268,  1153,  1269,  1273,  1311,  1275,  1554,
    1276,  1154,  1155,  1490,  1491,  1492,  1277,  1278,  1328,  1324,
    1279,  1288,  1493,  1312,  1494,  1495,  1496,  1291,  1321,  1973,
    1294,  1497,  1319,  1498,  1499,  1500,  1156,  1325,  1501,  1326,
    1327,  1333,  1502,  1503,  1336,  1504,  1505,  1506,  1507,  1720,
    1721,  1337,  1508,   432,   433,   434,   435,   436,   437,   438,
    1338,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,  1343,  1344,  1345,  1346,
    1347,  1348,  1349,  1350,  1351,  1158,  1361,  1362,  1367,  1364,
    1368,  1369,  1371,  1509,  1510,  1511,  1512,  1513,  1374,  1379,
    1380,  1381,  1382,  1383,  1384,  1386,  1387,  1159,  1521,  1524,
    1522,  1526,  1535,  1538,  1536,  1160,  1537,  1552,  1541,  1558,
    1390,  1391,  1392,  1393,  1394,  1395,  1559,  1396,  1587,  1397,
    1620,  1592,  1596,  1398,  1399,  1400,  1610,  1401,  1626,  1611,
    1612,  1402,  1403,  1404,  1405,  1406,  1613,  1614,  1514,  1515,
    1516,  1517,  1518,  1519,  1407,  1630,  1632,  1640,  1652,  1408,
    1409,  1637,  1639,  1410,  1650,  1653,  1645,  1161,  1411,  1412,
    1413,  1414,  1415,  1646,  1647,  1416,  1655,  1417,  1418,  1419,
    1658,  1664,  1420,  1421,  1659,  1422,  1423,  1424,  1660,  1673,
    1661,  1425,  1675,  1678,  1677,  1681,  1426,  1682,  1683,  1684,
    1427,  1698,  1702,  1708,  1723,  1428,  1429,  1430,  1729,  1724,
    1730,  1731,  1431,  1432,  1733,  1433,  1434,  1435,  1436,  1757,
    1759,  1437,  1734,  1781,  1439,  1440,  1441,  1764,  1442,  1735,
    1443,  1444,  1774,  1445,  1446,  1447,  1770,  1448,  1449,  1450,
    1451,  1775,  1785,  1771,  1795,  1452,  1772,  1453,  1776,  1454,
    1455,  1799,  1456,  1457,  1458,  1459,  1460,  1461,  1804,  1462,
    1463,  1464,  1465,  1466,  1805,  1810,  1814,  1467,  1815,  1468,
    1817,  1469,  1818,  1828,  1830,  1831,  1832,  1833,  1836,  1843,
    1470,  1837,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1840,
    1841,  1478,  1479,  1844,  1846,  1848,  1851,  1480,  1853,  1481,
    1482,  1483,  1854,  1484,  1855,  1485,  1856,  1486,  1487,  1488,
    1489,  1857,  1860,  1863,  1869,  1867,  1870,  1871,  1872,  1882,
    1873,  1883,  1490,  1491,  1492,  1888,  1899,  1889,  1891,  1892,
    1893,  1493,  1894,  1494,  1495,  1496,  1895,  1896,  1903,  1898,
    1497,  1917,  1498,  1499,  1500,  1901,  1904,  1501,  1905,  1907,
    1914,  1502,  1503,  1908,  1504,  1505,  1506,  1507,  1909,  1918,
    1919,  1508,   432,   433,   434,   435,   436,   437,   438,  1928,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,  1929,  1930,   831,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
    1931,  1932,  1509,  1510,  1511,  1512,  1513,   433,   434,   435,
     436,   437,   438,  1934,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,  1390,
    1391,  1392,  1393,  1394,  1395,  1935,  1396,  1937,  1397,  1944,
    1945,  1954,  1398,  1399,  1400,  1947,  1401,  1955,  1951,  1956,
    1402,  1403,  1404,  1405,  1406,  1957,  1958,  1514,  1515,  1516,
    1517,  1518,  1519,  1407,  1961,  1964,  1965,  1690,  1408,  1409,
    1966,  1968,  1410,  1969,  1971,  1972,  1983,  1411,  1412,  1413,
    1414,  1415,  1985,  1986,  1416,  1987,  1417,  1418,  1419,  1988,
    1989,  1420,  1421,  1990,  1422,  1423,  1424,  1992,  1993,  2014,
    1425,  2000,  2005,  2009,  1997,  1426,  2023,  2012,  2036,  1427,
    2042,  2045,  2046,  2047,  1428,  1429,  1430,  2048,  2049,  2050,
     266,  1431,  1432,   588,  1433,  1434,  1435,  1436,  1061,  1619,
    1437,  1752,  1784,  1439,  1440,  1441,   720,  1442,   732,  1443,
    1444,  1033,  1445,  1446,  1447,  1334,  1448,  1449,  1450,  1451,
    1124,  1699,   318,   135,  1452,   581,  1453,  1047,  1454,  1455,
     821,  1456,  1457,  1458,  1459,  1460,  1461,  1820,  1462,  1463,
    1464,  1465,  1466,  1801,  2024,  1545,  1467,   828,  1468,  1529,
    1469,   333,   987,     0,  1000,  1649,   764,   561,     0,  1470,
       0,  1471,  1472,  1473,  1474,  1475,  1476,  1477,     0,     0,
    1478,  1479,     0,     0,     0,     0,  1480,     0,  1481,  1482,
    1483,     0,  1484,     0,  1485,     0,  1486,  1487,  1488,  1489,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1490,  1491,  1492,     0,     0,     0,     0,     0,     0,
    1493,     0,  1494,  1495,  1496,     0,     0,     0,     0,  1497,
       0,  1498,  1499,  1500,     0,     0,  1501,     0,     0,     0,
    1502,  1503,     0,  1504,  1505,  1506,  1507,     0,     0,     0,
    1508,   432,   433,   434,   435,   436,   437,   438,     0,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,     0,     0,   844,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1509,  1510,  1511,  1512,  1513,   434,   435,   436,   437,
     438,     0,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,  1390,  1391,
    1392,  1393,  1394,  1395,     0,  1396,     0,  1397,     0,     0,
       0,  1398,  1399,  1400,     0,  1401,     0,     0,     0,  1402,
    1403,  1404,  1405,  1406,     0,     0,  1514,  1515,  1516,  1517,
    1518,  1519,  1407,     0,     0,     0,     0,  1408,  1409,     0,
       0,  1410,     0,     0,     0,     0,  1411,  1412,  1413,  1414,
    1415,     0,     0,  1416,     0,  1417,  1418,  1419,     0,     0,
    1420,  1421,     0,  1422,  1423,  1424,     0,     0,     0,  1425,
       0,     0,     0,     0,  1426,     0,     0,     0,  1427,     0,
       0,     0,     0,  1428,  1429,  1430,     0,     0,     0,     0,
    1431,  1432,     0,  1433,  1434,  1435,  1436,     0,     0,  1437,
       0,  1789,  1439,  1440,  1441,     0,  1442,     0,  1443,  1444,
       0,  1445,  1446,  1447,     0,  1448,  1449,  1450,  1451,     0,
       0,     0,     0,  1452,     0,  1453,     0,  1454,  1455,     0,
    1456,  1457,  1458,  1459,  1460,  1461,     0,  1462,  1463,  1464,
    1465,  1466,     0,     0,     0,  1467,     0,  1468,     0,  1469,
       0,     0,     0,     0,     0,     0,     0,     0,  1470,     0,
    1471,  1472,  1473,  1474,  1475,  1476,  1477,     0,     0,  1478,
    1479,     0,     0,     0,     0,  1480,     0,  1481,  1482,  1483,
       0,  1484,     0,  1485,     0,  1486,  1487,  1488,  1489,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1490,  1491,  1492,     0,     0,     0,     0,     0,     0,  1493,
       0,  1494,  1495,  1496,     0,     0,     0,     0,  1497,     0,
    1498,  1499,  1500,     0,     0,  1501,     0,     0,     0,  1502,
    1503,     0,  1504,  1505,  1506,  1507,     0,     0,     0,  1508,
     432,   433,   434,   435,   436,   437,   438,     0,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,     0,   845,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1509,  1510,  1511,  1512,  1513,  -606,  -606,  -606,  -606,     0,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,     0,  1390,  1391,  1392,
    1393,  1394,  1395,     0,  1396,     0,  1397,     0,     0,     0,
    1398,  1399,  1400,     0,  1401,     0,     0,     0,  1402,  1403,
    1404,  1405,  1406,     0,     0,  1514,  1515,  1516,  1517,  1518,
    1519,  1407,     0,     0,     0,     0,  1408,  1409,     0,     0,
    1410,     0,     0,     0,     0,  1411,  1412,  1413,  1414,  1415,
       0,     0,  1416,     0,  1417,  1418,  1419,     0,     0,  1420,
    1421,     0,  1422,  1423,  1424,     0,     0,     0,  1425,     0,
       0,     0,     0,  1426,     0,     0,     0,  1427,     0,     0,
       0,     0,  1428,  1429,  1430,     0,     0,     0,     0,  1431,
    1432,     0,  1433,  1434,  1435,  1436,     0,     0,  1437,     0,
    1790,  1439,  1440,  1441,     0,  1442,     0,  1443,  1444,     0,
    1445,  1446,  1447,     0,  1448,  1449,  1450,  1451,     0,     0,
       0,     0,  1452,     0,  1453,     0,  1454,  1455,     0,  1456,
    1457,  1458,  1459,  1460,  1461,     0,  1462,  1463,  1464,  1465,
    1466,     0,     0,     0,  1467,     0,  1468,     0,  1469,     0,
       0,     0,     0,     0,     0,     0,     0,  1470,     0,  1471,
    1472,  1473,  1474,  1475,  1476,  1477,     0,     0,  1478,  1479,
       0,     0,     0,     0,  1480,     0,  1481,  1482,  1483,     0,
    1484,     0,  1485,     0,  1486,  1487,  1488,  1489,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1490,
    1491,  1492,     0,     0,     0,     0,     0,     0,  1493,     0,
    1494,  1495,  1496,     0,     0,     0,     0,  1497,     0,  1498,
    1499,  1500,     0,     0,  1501,     0,     0,     0,  1502,  1503,
       0,  1504,  1505,  1506,  1507,     0,     0,     0,  1508,   432,
     433,   434,   435,   436,   437,   438,     0,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,     0,     0,   846,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1509,
    1510,  1511,  1512,  1513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1390,  1391,  1392,  1393,
    1394,  1395,     0,  1396,     0,  1397,     0,     0,     0,  1398,
    1399,  1400,     0,  1401,     0,     0,     0,  1402,  1403,  1404,
    1405,  1406,     0,     0,  1514,  1515,  1516,  1517,  1518,  1519,
    1407,     0,     0,     0,     0,  1408,  1409,     0,     0,  1410,
       0,     0,     0,     0,  1411,  1412,  1413,  1414,  1415,     0,
       0,  1416,     0,  1417,  1418,  1419,     0,     0,  1420,  1421,
       0,  1422,  1423,  1424,     0,     0,     0,  1425,     0,     0,
       0,     0,  1426,     0,     0,     0,  1427,     0,     0,     0,
       0,  1428,  1429,  1430,     0,     0,     0,     0,  1431,  1432,
       0,  1433,  1434,  1435,  1436,     0,     0,  1437,     0,  1791,
    1439,  1440,  1441,     0,  1442,     0,  1443,  1444,     0,  1445,
    1446,  1447,     0,  1448,  1449,  1450,  1451,     0,     0,     0,
       0,  1452,     0,  1453,     0,  1454,  1455,     0,  1456,  1457,
    1458,  1459,  1460,  1461,     0,  1462,  1463,  1464,  1465,  1466,
       0,     0,     0,  1467,     0,  1468,     0,  1469,     0,     0,
       0,     0,     0,     0,     0,     0,  1470,     0,  1471,  1472,
    1473,  1474,  1475,  1476,  1477,     0,     0,  1478,  1479,     0,
       0,     0,     0,  1480,     0,  1481,  1482,  1483,     0,  1484,
       0,  1485,     0,  1486,  1487,  1488,  1489,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1490,  1491,
    1492,     0,     0,     0,     0,     0,     0,  1493,     0,  1494,
    1495,  1496,     0,     0,     0,     0,  1497,     0,  1498,  1499,
    1500,     0,     0,  1501,     0,     0,     0,  1502,  1503,     0,
    1504,  1505,  1506,  1507,     0,     0,     0,  1508,   432,   433,
     434,   435,   436,   437,   438,     0,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,     0,   853,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1509,  1510,
    1511,  1512,  1513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1390,  1391,  1392,  1393,  1394,
    1395,     0,  1396,     0,  1397,     0,     0,     0,  1398,  1399,
    1400,     0,  1401,     0,     0,     0,  1402,  1403,  1404,  1405,
    1406,     0,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1407,
       0,     0,     0,     0,  1408,  1409,     0,     0,  1410,     0,
       0,     0,     0,  1411,  1412,  1413,  1414,  1415,     0,     0,
    1416,     0,  1417,  1418,  1419,     0,     0,  1420,  1421,     0,
    1422,  1423,  1424,     0,     0,     0,  1425,     0,     0,     0,
       0,  1426,     0,     0,     0,  1427,     0,     0,     0,     0,
    1428,  1429,  1430,     0,     0,     0,     0,  1431,  1432,     0,
    1433,  1434,  1435,  1436,     0,     0,  1437,     0,  1792,  1439,
    1440,  1441,     0,  1442,     0,  1443,  1444,     0,  1445,  1446,
    1447,     0,  1448,  1449,  1450,  1451,     0,     0,     0,     0,
    1452,     0,  1453,     0,  1454,  1455,     0,  1456,  1457,  1458,
    1459,  1460,  1461,     0,  1462,  1463,  1464,  1465,  1466,     0,
       0,     0,  1467,     0,  1468,     0,  1469,     0,     0,     0,
       0,     0,     0,     0,     0,  1470,     0,  1471,  1472,  1473,
    1474,  1475,  1476,  1477,     0,     0,  1478,  1479,     0,     0,
       0,     0,  1480,     0,  1481,  1482,  1483,     0,  1484,     0,
    1485,     0,  1486,  1487,  1488,  1489,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1490,  1491,  1492,
       0,     0,     0,     0,     0,     0,  1493,     0,  1494,  1495,
    1496,     0,     0,     0,     0,  1497,     0,  1498,  1499,  1500,
       0,     0,  1501,     0,     0,     0,  1502,  1503,     0,  1504,
    1505,  1506,  1507,     0,     0,     0,  1508,   432,   433,   434,
     435,   436,   437,   438,     0,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,     0,   854,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1509,  1510,  1511,
    1512,  1513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1390,  1391,  1392,  1393,  1394,  1395,
       0,  1396,     0,  1397,     0,     0,     0,  1398,  1399,  1400,
       0,  1401,     0,     0,     0,  1402,  1403,  1404,  1405,  1406,
       0,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1407,     0,
       0,     0,     0,  1408,  1409,     0,     0,  1410,     0,     0,
       0,     0,  1411,  1412,  1413,  1414,  1415,     0,     0,  1416,
       0,  1417,  1418,  1419,     0,     0,  1420,  1421,     0,  1422,
    1423,  1424,     0,     0,     0,  1425,     0,     0,     0,     0,
    1426,     0,     0,     0,  1427,     0,     0,     0,     0,  1428,
    1429,  1430,     0,     0,     0,     0,  1431,  1432,     0,  1433,
    1434,  1435,  1436,     0,     0,  1437,     0,  1793,  1439,  1440,
    1441,     0,  1442,     0,  1443,  1444,     0,  1445,  1446,  1447,
       0,  1448,  1449,  1450,  1451,     0,     0,     0,     0,  1452,
       0,  1453,     0,  1454,  1455,     0,  1456,  1457,  1458,  1459,
    1460,  1461,     0,  1462,  1463,  1464,  1465,  1466,     0,     0,
       0,  1467,     0,  1468,     0,  1469,     0,     0,     0,     0,
       0,     0,     0,     0,  1470,     0,  1471,  1472,  1473,  1474,
    1475,  1476,  1477,     0,     0,  1478,  1479,     0,     0,     0,
       0,  1480,     0,  1481,  1482,  1483,     0,  1484,     0,  1485,
       0,  1486,  1487,  1488,  1489,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1490,  1491,  1492,     0,
       0,     0,     0,     0,     0,  1493,     0,  1494,  1495,  1496,
       0,     0,     0,     0,  1497,     0,  1498,  1499,  1500,     0,
       0,  1501,     0,     0,     0,  1502,  1503,     0,  1504,  1505,
    1506,  1507,     0,     0,     0,  1508,   432,   433,   434,   435,
     436,   437,   438,     0,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,   855,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1509,  1510,  1511,  1512,
    1513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1390,  1391,  1392,  1393,  1394,  1395,     0,
    1396,     0,  1397,     0,     0,     0,  1398,  1399,  1400,     0,
    1401,     0,     0,     0,  1402,  1403,  1404,  1405,  1406,     0,
       0,  1514,  1515,  1516,  1517,  1518,  1519,  1407,     0,     0,
       0,     0,  1408,  1409,     0,     0,  1410,     0,     0,     0,
       0,  1411,  1412,  1413,  1414,  1415,     0,     0,  1416,     0,
    1417,  1418,  1419,     0,     0,  1420,  1421,     0,  1422,  1423,
    1424,     0,     0,     0,  1425,     0,     0,     0,     0,  1426,
       0,     0,     0,  1427,     0,     0,     0,     0,  1428,  1429,
    1430,     0,     0,     0,     0,  1431,  1432,     0,  1433,  1434,
    1435,  1436,     0,     0,  1437,     0,  1794,  1439,  1440,  1441,
       0,  1442,     0,  1443,  1444,     0,  1445,  1446,  1447,     0,
    1448,  1449,  1450,  1451,     0,     0,     0,     0,  1452,     0,
    1453,     0,  1454,  1455,     0,  1456,  1457,  1458,  1459,  1460,
    1461,     0,  1462,  1463,  1464,  1465,  1466,     0,     0,     0,
    1467,     0,  1468,     0,  1469,     0,     0,     0,     0,     0,
       0,     0,     0,  1470,     0,  1471,  1472,  1473,  1474,  1475,
    1476,  1477,     0,     0,  1478,  1479,     0,     0,     0,     0,
    1480,     0,  1481,  1482,  1483,     0,  1484,     0,  1485,     0,
    1486,  1487,  1488,  1489,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1490,  1491,  1492,     0,     0,
       0,     0,     0,     0,  1493,     0,  1494,  1495,  1496,     0,
       0,     0,     0,  1497,     0,  1498,  1499,  1500,     0,     0,
    1501,     0,     0,     0,  1502,  1503,     0,  1504,  1505,  1506,
    1507,     0,     0,     0,  1508,   432,   433,   434,   435,   436,
     437,   438,     0,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,     0,     0,
     856,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1509,  1510,  1511,  1512,  1513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1390,  1391,  1392,  1393,  1394,  1395,     0,  1396,
       0,  1397,     0,     0,     0,  1398,  1399,  1400,     0,  1401,
       0,     0,     0,  1402,  1403,  1404,  1405,  1406,     0,     0,
    1514,  1515,  1516,  1517,  1518,  1519,  1407,     0,     0,     0,
       0,  1408,  1409,     0,     0,  1410,     0,     0,     0,     0,
    1411,  1412,  1413,  1414,  1415,     0,     0,  1416,     0,  1417,
    1418,  1419,     0,     0,  1420,  1421,     0,  1422,  1423,  1424,
       0,     0,     0,  1425,     0,     0,     0,     0,  1426,     0,
       0,     0,  1427,     0,     0,     0,     0,  1428,  1429,  1430,
       0,     0,     0,     0,  1431,  1432,     0,  1433,  1434,  1435,
    1436,     0,     0,  1437,     0,  1865,  1439,  1440,  1441,     0,
    1442,     0,  1443,  1444,     0,  1445,  1446,  1447,     0,  1448,
    1449,  1450,  1451,     0,     0,     0,     0,  1452,     0,  1453,
       0,  1454,  1455,     0,  1456,  1457,  1458,  1459,  1460,  1461,
       0,  1462,  1463,  1464,  1465,  1466,     0,     0,     0,  1467,
       0,  1468,     0,  1469,     0,     0,     0,     0,     0,     0,
       0,     0,  1470,     0,  1471,  1472,  1473,  1474,  1475,  1476,
    1477,     0,     0,  1478,  1479,     0,     0,     0,     0,  1480,
       0,  1481,  1482,  1483,     0,  1484,     0,  1485,     0,  1486,
    1487,  1488,  1489,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1490,  1491,  1492,     0,     0,     0,
       0,     0,     0,  1493,     0,  1494,  1495,  1496,     0,     0,
       0,     0,  1497,     0,  1498,  1499,  1500,     0,     0,  1501,
       0,     0,     0,  1502,  1503,     0,  1504,  1505,  1506,  1507,
       0,     0,     0,  1508,   432,   433,   434,   435,   436,   437,
     438,     0,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,     0,   858,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1509,  1510,  1511,  1512,  1513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1390,  1391,  1392,  1393,  1394,  1395,     0,  1396,     0,
    1397,     0,     0,     0,  1398,  1399,  1400,     0,  1401,     0,
       0,     0,  1402,  1403,  1404,  1405,  1406,     0,     0,  1514,
    1515,  1516,  1517,  1518,  1519,  1407,     0,     0,     0,     0,
    1408,  1409,     0,     0,  1410,     0,     0,     0,     0,  1411,
    1412,  1413,  1414,  1415,     0,     0,  1416,     0,  1417,  1418,
    1419,     0,     0,  1420,  1421,     0,  1422,  1423,  1424,     0,
       0,     0,  1425,     0,     0,     0,     0,  1426,     0,     0,
       0,  1427,     0,     0,     0,     0,  1428,  1429,  1430,     0,
       0,     0,     0,  1431,  1432,     0,  1433,  1434,  1435,  1436,
       0,     0,  1437,     0,  1866,  1439,  1440,  1441,     0,  1442,
       0,  1443,  1444,     0,  1445,  1446,  1447,     0,  1448,  1449,
    1450,  1451,     0,     0,     0,     0,  1452,     0,  1453,     0,
    1454,  1455,     0,  1456,  1457,  1458,  1459,  1460,  1461,     0,
    1462,  1463,  1464,  1465,  1466,     0,     0,     0,  1467,     0,
    1468,     0,  1469,     0,     0,     0,     0,     0,     0,     0,
       0,  1470,     0,  1471,  1472,  1473,  1474,  1475,  1476,  1477,
       0,     0,  1478,  1479,     0,     0,     0,     0,  1480,     0,
    1481,  1482,  1483,     0,  1484,     0,  1485,     0,  1486,  1487,
    1488,  1489,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1490,  1491,  1492,     0,     0,     0,     0,
       0,     0,  1493,     0,  1494,  1495,  1496,     0,     0,     0,
       0,  1497,     0,  1498,  1499,  1500,     0,     0,  1501,     0,
       0,     0,  1502,  1503,     0,  1504,  1505,  1506,  1507,     0,
       0,     0,  1508,   432,   433,   434,   435,   436,   437,   438,
       0,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,   859,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1390,  1391,  1392,  1393,  1394,  1395,     0,  1396,     0,  1397,
       0,     0,     0,  1398,  1399,  1400,     0,  1401,     0,     0,
       0,  1402,  1403,  1404,  1405,  1406,     0,     0,  1514,  1515,
    1516,  1517,  1518,  1519,  1407,     0,     0,     0,     0,  1408,
    1409,     0,     0,  1410,     0,     0,     0,     0,  1411,  1412,
    1413,  1414,  1415,     0,     0,  1416,     0,  1417,  1418,  1419,
       0,     0,  1420,  1421,     0,  1422,  1423,  1424,     0,     0,
       0,  1425,     0,     0,     0,     0,  1426,     0,     0,     0,
    1427,     0,     0,     0,     0,  1428,  1429,  1430,     0,     0,
       0,     0,  1431,  1432,     0,  1433,  1434,  1435,  1436,     0,
       0,  1437,     0,  1923,  1439,  1440,  1441,     0,  1442,     0,
    1443,  1444,     0,  1445,  1446,  1447,     0,  1448,  1449,  1450,
    1451,     0,     0,     0,     0,  1452,     0,  1453,     0,  1454,
    1455,     0,  1456,  1457,  1458,  1459,  1460,  1461,     0,  1462,
    1463,  1464,  1465,  1466,     0,     0,     0,  1467,     0,  1468,
       0,  1469,     0,     0,     0,     0,     0,     0,     0,     0,
    1470,     0,  1471,  1472,  1473,  1474,  1475,  1476,  1477,     0,
       0,  1478,  1479,     0,     0,     0,     0,  1480,     0,  1481,
    1482,  1483,     0,  1484,     0,  1485,     0,  1486,  1487,  1488,
    1489,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1490,  1491,  1492,     0,     0,     0,     0,     0,
       0,  1493,     0,  1494,  1495,  1496,     0,     0,     0,     0,
    1497,     0,  1498,  1499,  1500,     0,     0,  1501,     0,     0,
       0,  1502,  1503,     0,  1504,  1505,  1506,  1507,     0,     0,
       0,  1508,   432,   433,   434,   435,   436,   437,   438,     0,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,     0,   860,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1390,
    1391,  1392,  1393,  1394,  1395,     0,  1396,     0,  1397,     0,
       0,     0,  1398,  1399,  1400,     0,  1401,     0,     0,     0,
    1402,  1403,  1404,  1405,  1406,     0,     0,  1514,  1515,  1516,
    1517,  1518,  1519,  1407,     0,     0,     0,     0,  1408,  1409,
       0,     0,  1410,     0,     0,     0,     0,  1411,  1412,  1413,
    1414,  1415,     0,     0,  1416,     0,  1417,  1418,  1419,     0,
       0,  1420,  1421,     0,  1422,  1423,  1424,     0,     0,     0,
    1425,     0,     0,     0,     0,  1426,     0,     0,     0,  1427,
       0,     0,     0,     0,  1428,  1429,  1430,     0,     0,     0,
       0,  1431,  1432,     0,  1433,  1434,  1435,  1436,     0,     0,
    1437,     0,  1924,  1439,  1440,  1441,     0,  1442,     0,  1443,
    1444,     0,  1445,  1446,  1447,     0,  1448,  1449,  1450,  1451,
       0,     0,     0,     0,  1452,     0,  1453,     0,  1454,  1455,
       0,  1456,  1457,  1458,  1459,  1460,  1461,     0,  1462,  1463,
    1464,  1465,  1466,     0,     0,     0,  1467,     0,  1468,     0,
    1469,     0,     0,     0,     0,     0,     0,     0,     0,  1470,
       0,  1471,  1472,  1473,  1474,  1475,  1476,  1477,     0,     0,
    1478,  1479,     0,     0,     0,     0,  1480,     0,  1481,  1482,
    1483,     0,  1484,     0,  1485,     0,  1486,  1487,  1488,  1489,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1490,  1491,  1492,     0,     0,     0,     0,     0,     0,
    1493,     0,  1494,  1495,  1496,     0,     0,     0,     0,  1497,
       0,  1498,  1499,  1500,     0,     0,  1501,     0,     0,     0,
    1502,  1503,     0,  1504,  1505,  1506,  1507,     0,     0,     0,
    1508,   432,   433,   434,   435,   436,   437,   438,     0,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,     0,     0,   866,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1509,  1510,  1511,  1512,  1513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1390,  1391,
    1392,  1393,  1394,  1395,     0,  1396,     0,  1397,     0,     0,
       0,  1398,  1399,  1400,     0,  1401,     0,     0,     0,  1402,
    1403,  1404,  1405,  1406,     0,     0,  1514,  1515,  1516,  1517,
    1518,  1519,  1407,     0,     0,     0,     0,  1408,  1409,     0,
       0,  1410,     0,     0,     0,     0,  1411,  1412,  1413,  1414,
    1415,     0,     0,  1416,     0,  1417,  1418,  1419,     0,     0,
    1420,  1421,     0,  1422,  1423,  1424,     0,     0,     0,  1425,
       0,     0,     0,     0,  1426,     0,     0,     0,  1427,     0,
       0,     0,     0,  1428,  1429,  1430,     0,     0,     0,     0,
    1431,  1432,     0,  1433,  1434,  1435,  1436,     0,     0,  1437,
       0,  1950,  1439,  1440,  1441,     0,  1442,     0,  1443,  1444,
       0,  1445,  1446,  1447,     0,  1448,  1449,  1450,  1451,     0,
       0,     0,     0,  1452,     0,  1453,     0,  1454,  1455,     0,
    1456,  1457,  1458,  1459,  1460,  1461,     0,  1462,  1463,  1464,
    1465,  1466,     0,     0,     0,  1467,     0,  1468,     0,  1469,
       0,     0,     0,     0,     0,     0,     0,     0,  1470,     0,
    1471,  1472,  1473,  1474,  1475,  1476,  1477,     0,     0,  1478,
    1479,     0,     0,     0,     0,  1480,     0,  1481,  1482,  1483,
       0,  1484,     0,  1485,     0,  1486,  1487,  1488,  1489,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1490,  1491,  1492,     0,     0,     0,     0,     0,     0,  1493,
       0,  1494,  1495,  1496,     0,     0,     0,     0,  1497,     0,
    1498,  1499,  1500,     0,     0,  1501,     0,     0,     0,  1502,
    1503,     0,  1504,  1505,  1506,  1507,     0,     0,     0,  1508,
     141,   142,   143,   144,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,   147,   148,     0,     0,     0,     0,
       0,     0,   149,   150,     0,   868,     0,     0,     0,     0,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
    1509,  1510,  1511,  1512,  1513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,   153,     0,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
       0,     0,     0,     0,     0,  1514,  1515,  1516,  1517,  1518,
    1519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   432,   433,   434,   435,
     436,   437,   438,   158,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,     0,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,     0,   159,   432,   433,   434,   435,   436,   437,
     438,     0,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,     0,     0,
       0,   160,     0,     0,     0,     0,     0,     0,   161,   162,
       0,   163,   432,   433,   434,   435,   436,   437,   438,     0,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
     202,     0,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     248,   249,   250,   141,   142,   143,   144,   145,   146,   251,
       0,     0,     0,     0,     0,     0,     0,   147,   148,     0,
       0,     0,     0,     0,     0,   149,   432,   433,   434,   435,
     436,   437,   438,     0,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,     0,     0,     0,     0,     0,     0,   594,     0,     0,
       0,     0,     0,     0,   152,     0,     0,     0,     0,   153,
       0,     0,   154,   155,   432,   433,   434,   435,   436,   437,
     438,     0,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   877,     0,
       0,     0,     0,   432,   433,   434,   435,   436,   437,   438,
     873,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,     0,     0,
       0,     0,     0,   874,     0,     0,     0,     0,     0,     0,
       0,   595,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,   878,   141,   142,
     143,   144,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   148,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   700,     0,   701,     0,   875,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   596,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,   153,     0,     0,   154,   155,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,     0,   202,     0,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
       0,     0,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   159,   247,   248,   249,   250,     0,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     876,     0,     0,     0,     0,   702,   432,   433,   434,   435,
     436,   437,   438,     0,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   888,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   889,   202,     0,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     0,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   248,   249,
     250,   141,   142,   143,   144,   145,   146,   703,     0,     0,
       0,     0,     0,     0,     0,   147,   148,     0,     0,     0,
       0,     0,     0,   149,   432,   433,   434,   435,   436,   437,
     438,     0,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,     0,   153,     0,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     432,   433,   434,   435,   436,   437,   438,     0,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,     0,     0,     0,   141,   142,   143,
     144,   145,   146,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   148,     0,     0,  1248,     0,     0,     0,   149,
     635,   432,   433,   434,   435,   436,   437,   438,     0,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,     0,
       0,     0,     0,   153,     0,     0,   154,   155,     0,     0,
       0,     0,     0,   432,   433,   434,   435,   436,   437,   438,
     890,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,     0,     0,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     159,   202,     0,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   248,   249,   250,     0,     0,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1249,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,     0,   202,     0,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   892,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   248,   249,   250,
     141,   142,   143,   144,   145,   146,   251,     0,     0,     0,
       0,     0,     0,     0,   147,   148,     0,     0,     0,     0,
       0,     0,   149,     0,     0,   903,   432,   433,   434,   435,
     436,   437,   438,     0,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,   153,     0,     0,   154,
     155,     0,     0,     0,     0,     0,     0,   912,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   432,
     433,   434,   435,   436,   437,   438,     0,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,     0,     0,   842,     0,   141,   142,   143,   144,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
     147,   148,     0,     0,     0,     0,     0,     0,   149,   432,
     433,   434,   435,   436,   437,   438,     0,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,     0,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,     0,     0,
       0,     0,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   432,   433,   434,   435,   436,   437,   438,  1235,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1053,     0,     0,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   159,
     202,     0,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     248,   249,   250,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,     0,   202,     0,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   913,     0,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,   248,   249,   250,   141,
     142,   143,   144,   145,   146,   251,     0,     0,     0,     0,
       0,     0,     0,   147,   148,     0,     0,     0,     0,  1147,
       0,   149,     0,   914,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1148,     0,     0,
       0,  1149,     0,     0,  1150,     0,  1151,     0,     0,  1152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,     0,     0,     0,  1153,   153,     0,     0,   154,   155,
       0,  1154,  1155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   915,     0,     0,     0,     0,
       0,  1240,     0,     0,     0,     0,  1156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1157,     0,   141,   142,   143,   144,   145,
     146,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     148,     0,     0,     0,     0,     0,     0,   149,   432,   433,
     434,   435,   436,   437,   438,  1158,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,   159,     0,     0,     0,     0,  1159,     0,     0,
       0,     0,     0,     0,     0,  1160,   152,     0,     0,     0,
       0,   153,     0,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     432,   433,   434,   435,   436,   437,   438,  1704,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,     0,     0,     0,  1161,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   159,   202,
       0,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,     0,     0,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   248,
     249,   250,     0,     0,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,     0,   202,     0,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,     0,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   248,   249,   250,   141,   142,
     143,   144,   145,   146,   251,     0,     0,     0,     0,     0,
       0,     0,   147,   148,     0,     0,     0,     0,     0,     0,
     149,     0,   916,   432,   433,   434,   435,   436,   437,   438,
       0,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,   153,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   917,     0,     0,     0,     0,     0,
    1706,   432,   433,   434,   435,   436,   437,   438,     0,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   141,   142,   143,   144,   145,   146,
       0,     0,     0,     0,   872,     0,     0,     0,   147,   148,
    1058,     0,     0,     0,     0,     0,   149,   432,   433,   434,
     435,   436,   437,   438,     0,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,   159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,     0,
     153,     0,     0,   154,   155,   432,   433,   434,   435,   436,
     437,   438,     0,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,     0,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   159,   202,     0,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     0,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   248,   249,
     250,     0,     0,     0,     0,     0,     0,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,     0,   202,     0,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,     0,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,   248,   249,   250,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   432,   433,   434,   435,   436,   437,
     438,   918,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,     0,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,     0,   432,   433,   434,   435,   436,   437,   438,   919,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,   925,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,     0,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,     0,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,     0,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,     0,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,     0,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   432,   433,   434,   435,   436,   437,   438,
       0,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,     0,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,     0,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   432,   433,   434,   435,   436,   437,   438,     0,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,     0,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,     0,     0,
       0,   432,   433,   434,   435,   436,   437,   438,  1260,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,  1261,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,     0,   432,
     433,   434,   435,   436,   437,   438,  1272,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   432,   433,   434,   435,   436,   437,   438,  1282,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,  1298,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,  1299,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,  1300,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,  1303,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,  1304,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,  1744,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,     0,     0,     0,     0,     0,   684,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   432,   433,   434,   435,   436,
     437,   438,   841,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,   847,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,   848,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,     0,     0,     0,   432,   433,   434,
     435,   436,   437,   438,   849,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,   850,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,     0,   432,   433,   434,   435,   436,
     437,   438,   851,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,   852,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,   857,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,   861,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,   862,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,   863,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   432,   433,   434,   435,   436,   437,   438,
     867,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,   869,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,     0,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,     0,     0,     0,     0,     0,     0,   870,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   432,   433,   434,   435,   436,   437,
     438,   871,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,   880,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,     0,     0,   432,   433,   434,   435,   436,   437,   438,
     881,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,   882,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,   432,   433,   434,   435,   436,   437,   438,   883,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,   884,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,   885,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,   886,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   432,   433,   434,   435,   436,   437,   438,
     887,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,   891,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,   904,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   432,   433,   434,   435,   436,   437,   438,   905,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,   906,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,     0,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,     0,     0,     0,     0,     0,   907,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   432,   433,   434,   435,   436,   437,   438,
     908,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,     0,   432,
     433,   434,   435,   436,   437,   438,   909,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   432,   433,   434,   435,   436,   437,   438,   910,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,     0,   432,   433,   434,
     435,   436,   437,   438,   911,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,   922,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   432,   433,   434,   435,   436,   437,   438,
     923,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,   924,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,  1252,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   432,   433,   434,   435,   436,   437,   438,  1257,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,  1258,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,  1259,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,  1262,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,  1263,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,     0,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,     0,     0,     0,     0,     0,  1264,   432,   433,   434,
     435,   436,   437,   438,     0,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,     0,  1265,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   432,   433,
     434,   435,   436,   437,   438,  1266,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,     0,   432,   433,   434,   435,   436,   437,   438,
    1267,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,  1270,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,  1271,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   432,   433,   434,   435,   436,   437,   438,  1283,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,  1284,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,  1297,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,  1301,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,  1302,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,  1375,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,  1566,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   432,   433,   434,   435,   436,   437,   438,
    1629,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,     0,     0,
       0,     0,     0,   432,   433,   434,   435,   436,   437,   438,
    1685,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,     0,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,  1709,   432,   433,   434,   435,   436,   437,   438,     0,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,  1710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   432,   433,   434,   435,   436,   437,   438,  1711,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   432,   433,   434,   435,   436,
     437,   438,  1712,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   432,   433,
     434,   435,   436,   437,   438,  1713,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   432,   433,   434,   435,   436,   437,   438,  1722,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   432,   433,   434,   435,   436,   437,
     438,  1739,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   432,   433,   434,
     435,   436,   437,   438,  1740,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     432,   433,   434,   435,   436,   437,   438,  1741,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   432,   433,   434,   435,   436,   437,   438,
    1742,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,  1743,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   432,
     433,   434,   435,   436,   437,   438,  1745,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   507,   508,     0,   509,     0,   510,   511,     0,
       0,     0,     0,     0,     0,     0,  1746,     0,     0,     0,
       0,     0,     0,   512,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1767,
       0,     0,     0,     0,     0,   513,   514,   515,   516,     0,
       0,     0,  1052,     0,   517,  1567,  1568,     0,     0,     0,
    1569,     0,  1570,   518,     0,  1773,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   519,     0,     0,     0,     0,     0,     0,     0,   520,
       0,     0,     0,  1571,  1572,     0,  1573,   521,     0,     0,
       0,     0,     0,     0,   522,  1777,     0,   523,     0,     0,
     524,   525,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   526,  1782,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1878,     0,     0,   527,   528,     0,   529,   530,     0,
       0,   340,     0,   531,     0,   532,     0,     0,     0,     0,
     533,   534,     0,     0,  1897,     0,   535,   536,     0,     0,
       0,     0,     0,   537,     0,   538,     0,     0,     0,     0,
     539,     0,     0,     0,     0,     0,     0,  1910,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1574,  1575,     0,   432,   433,   434,   435,   436,   437,   438,
    1920,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   432,   433,   434,   435,
     436,   437,   438,  1921,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
       0,   431,     0,     0,     0,     0,     0,  1547,   432,   433,
     434,   435,   436,   437,   438,     0,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   454,     0,     0,     0,     0,     0,     0,     0,  1246,
       0,     0,     0,   432,   433,   434,   435,   436,   437,   438,
    1548,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,   432,   433,
     434,   435,   436,   437,   438,   934,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,     0,   432,   433,   434,   435,   436,   437,   438,
    1114,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453
};

static const yytype_int16 yycheck[] =
{
      77,  1221,  1132,   567,   949,  1021,  1010,  1229,   960,   961,
     258,   305,   964,  1017,     3,   259,  1223,   779,   780,     5,
     117,     3,     3,   785,     3,   787,   117,    41,   134,  1535,
    1541,   172,   828,    20,   830,   134,  1144,  1145,   831,     8,
      70,     3,   139,   172,     3,     4,     5,     6,     7,     8,
       3,     6,   471,     3,   192,  1163,    80,     4,     3,   136,
     137,    66,    20,    89,    43,     3,   206,    70,    40,   259,
     147,   148,   149,   106,   107,   319,   153,    18,    16,   217,
      94,   106,   107,   189,     3,    70,   116,   170,   230,    63,
     189,   206,  1589,  1590,    43,    47,    70,     3,     4,     5,
       6,     7,     8,  1600,  1601,     3,     3,    18,   206,    89,
       3,   137,    89,  1333,   120,    41,     5,     3,     6,    46,
      47,   115,     3,   487,     3,   237,     4,     5,     6,     7,
      18,   116,    77,     3,     3,   928,   230,   150,   198,    66,
     134,     3,   116,    63,   174,   119,   217,   230,  1286,  1287,
     230,     3,   230,    82,   718,   117,    76,  1295,  1296,    70,
     165,   135,    43,   223,    26,    36,    55,   731,    94,   175,
     144,   174,   134,   102,   251,   188,    95,   541,   183,    77,
      51,    78,   217,    76,    95,   134,    64,   149,  1192,   174,
     217,   136,   130,   331,  1146,     3,   226,   223,   170,  1203,
     174,   206,   344,   344,   344,   238,  1210,   166,  1224,   233,
     157,   166,   456,   238,   176,   344,   157,  1714,  1715,  1716,
    1717,  1718,  1719,   226,   196,   207,   195,   342,  1204,   181,
     168,  1728,   344,   213,  1342,  1732,   342,   231,   136,  1736,
     189,   226,   341,   342,   342,     0,   223,   344,   342,  1045,
     136,  1047,   226,   344,   240,   819,   183,   136,   207,   336,
     166,    18,   342,   340,   342,   340,   136,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   166,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,  1805,   372,   373,   374,  1804,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,  1536,  1537,   737,  1112,
     397,   398,   566,    80,   240,   402,   403,   341,   136,  1244,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,    66,   342,   341,   432,   433,   434,   435,   436,
     342,   342,   341,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,  1322,   742,   743,
    1384,   458,  1386,   341,   343,   230,   750,     3,   578,   342,
    1366,   581,   342,  1615,   282,   336,   337,   338,   339,   156,
     230,  1377,   592,    35,     3,  1902,     3,   230,   237,  1906,
     217,     3,  1174,   170,  1176,  1177,  1331,     3,   296,   297,
     298,   290,   291,   292,   293,   118,    81,   230,   344,     3,
     794,   795,   796,     3,   237,    67,  1412,    18,     3,   177,
     207,  1579,  1580,  1581,  1582,  1583,  1584,  1423,     9,  1953,
      82,   165,    95,  1591,   207,    95,    54,  1595,    90,    20,
      58,  1599,  1959,  1960,   342,  1962,  1963,  1443,   235,   183,
     102,   765,   766,     3,   129,   723,  1698,  1684,  1982,  1983,
     173,  1457,   235,    78,   224,     5,    43,   564,  1618,    63,
    1466,   342,   206,    63,   232,    52,   135,   342,     3,    80,
      20,  2005,    76,   243,     3,   144,    76,   105,   872,   873,
     203,    76,   342,   590,   591,   344,   341,   342,  1522,   342,
     136,   598,    43,   166,  1528,   120,   166,     3,   160,     5,
    1506,    52,   189,   952,   343,   344,   955,   136,   341,   136,
     135,   344,    54,    10,   136,     3,    58,   343,   344,   181,
     136,    10,    11,    12,    13,    14,    15,    16,  1122,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    43,   156,   136,    43,    10,     3,
     175,   211,    14,    52,    96,  1984,    52,    99,     3,   170,
      13,    14,     3,    16,  1546,     3,    19,   192,   962,   135,
     195,   233,   114,    30,    31,    32,   217,  2006,  2007,    31,
      32,    78,   343,   344,    85,   343,   344,    84,   695,   696,
     132,   698,   217,    74,    75,  1847,   703,     3,   140,    10,
      11,    12,    13,    14,    15,    16,  2035,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     3,   120,     3,   126,   344,    85,   117,     3,
    1664,    34,     3,   134,  1680,    38,   343,   344,   135,   343,
     344,  1675,   341,  1677,  1650,   523,   244,  1899,   149,  1655,
       3,   529,    43,   531,   170,   343,   344,    60,   244,   343,
     344,   342,    65,   342,  1914,     3,   940,  1835,   126,   343,
     344,  1839,   214,     3,   216,   341,   134,     3,   175,   343,
     344,   139,   343,   344,     3,   792,    89,    90,   343,   344,
    1850,   149,   234,   343,   344,   192,     4,     5,   195,     4,
       5,   343,   344,   343,   344,  1957,   331,   343,   344,   929,
     343,   344,   343,   344,   211,   212,    49,    50,   938,    26,
      27,    28,    29,    30,    31,    32,   833,   244,   835,   226,
     343,   344,   839,   840,   137,   842,   343,   344,   210,   846,
     343,   344,   343,   344,   343,   344,   853,   854,   855,   856,
     244,   858,   859,   860,   343,   344,    49,    50,   865,   866,
     244,   868,   343,   344,   244,  1799,   244,   874,   875,   876,
     244,  1939,  1940,  1779,  1942,  1943,   179,  1752,   181,   343,
     344,   888,   889,   890,   244,   892,   189,   343,   344,  1795,
     343,   344,   944,   945,   343,   344,   903,   343,   344,   343,
     344,   341,   342,   206,   207,   912,   913,   914,   915,   916,
     917,   918,   919,  1033,   921,   343,   344,   220,   925,     3,
     223,   510,   511,   512,   513,     8,   515,   934,   231,   518,
     519,   520,  1226,     9,   331,   342,   525,   526,   527,   946,
     342,   530,    43,   343,   344,    63,   953,    45,   343,   344,
     343,   344,   343,   344,   344,   344,   342,  1863,   343,   344,
     342,    10,    11,    12,    13,    14,    15,    16,    45,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   343,   344,   342,   994,   343,   344,
     341,   342,   342,  1113,   343,   344,  1116,  1117,  1118,    10,
      11,    12,    13,    14,    15,    16,   342,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   343,   344,   343,   344,   343,   344,  1035,   343,
     344,  1038,   343,   344,   343,   344,   240,  1044,   343,   344,
     210,   343,   344,   343,   344,   342,  1053,   343,   344,   343,
     344,  1058,  1059,   343,   344,    10,    11,    12,    13,    14,
      15,    16,   342,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   733,   734,
    1326,  1327,    10,    11,    12,    13,    14,    15,    16,    63,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   342,   342,  1114,    13,    14,
      15,    16,    63,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1135,   342,
     342,   342,   342,  1140,     3,    10,    11,    12,    13,    14,
      15,    16,   342,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   342,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   342,    68,    10,    11,    12,    13,    14,    15,    16,
     342,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   342,   342,   342,  1216,
      10,    11,    12,    13,    14,    15,    16,   342,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   342,   342,   342,   342,   342,   342,   342,
     342,  1248,   342,   342,  1251,   342,   342,   133,   342,   342,
     342,   342,   342,  1260,  1261,   342,   342,   143,   772,   773,
     342,   775,   776,   777,   150,  1272,     3,   781,   782,   783,
     342,   342,   786,   342,  1281,  1282,   342,   163,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1298,  1299,  1300,   343,   344,  1303,  1304,   342,  1306,
     342,  1308,   188,  1310,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  1320,  1321,   342,   342,   342,   204,   342,
     342,  1328,  1329,   342,   342,   342,   342,   342,   342,   342,
     342,     3,   343,   344,   342,   342,   342,   342,   342,  1346,
     342,   342,   342,  1350,   342,   342,   342,     3,     4,     5,
       6,     7,     8,  1360,    10,   342,    12,   342,   342,   342,
      16,    17,    18,   342,    20,   342,   342,  1374,    24,    25,
      26,    27,    28,   342,   342,   342,   342,   342,   342,   342,
       3,    37,   170,   244,     3,   170,    42,    43,   343,   344,
      46,   244,     3,    26,     3,    51,    52,    53,    54,    55,
       3,     3,    58,     3,    60,    61,    62,     3,     3,    65,
      66,     3,    68,    69,    70,   343,   344,     3,    74,     3,
       3,   343,   343,    79,   343,   343,   343,    83,   343,   343,
     343,   343,    88,    89,    90,   343,     5,   343,   342,    95,
      96,   343,    98,    99,   100,   101,   343,     3,   104,     3,
     106,   107,   108,   109,     3,   111,     3,   113,   114,   343,
     116,   117,   118,     3,   120,   121,   122,   123,   343,   344,
     143,   169,   128,     3,   130,     3,   132,   133,     3,   135,
     136,   137,   138,   139,   140,     3,   142,   143,   144,   145,
     146,   343,   344,     3,   150,     3,   152,     3,   154,     3,
       3,     3,   210,     3,     3,     3,   339,   163,     5,   165,
     166,   167,   168,   169,   170,   171,   343,   344,   174,   175,
       3,     5,   342,     5,   180,   342,   182,   183,   184,   342,
     186,   342,   188,    56,   190,   191,   192,   193,   342,   342,
     342,     3,     3,   343,   344,     3,  1553,  1554,   343,   205,
     206,   207,  1559,   344,  1561,     3,     3,   170,   214,   343,
     216,   217,   218,   170,     3,   170,   244,   223,     3,   225,
     226,   227,   171,     3,   230,     3,   343,   207,   234,   235,
     343,   237,   238,   239,   240,   310,   310,   310,   244,   343,
     207,   310,   310,   342,   342,    10,    11,    12,    13,    14,
      15,    16,   342,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   285,
     286,   287,   288,   289,   344,   342,    10,    11,    12,    13,
      14,    15,    16,   117,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   144,  1681,   144,   144,   143,   170,   143,
       3,     3,   342,   210,   340,   341,   342,   343,   344,   345,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       5,  1708,     4,   210,     5,     5,     5,    10,    11,    12,
      13,    14,    15,    16,  1721,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       5,     3,     4,     5,     6,     7,     8,  1744,    10,   154,
      12,   166,  1749,   186,    16,    17,    18,   232,    20,   170,
    1757,     3,    24,    25,    26,    27,    28,     3,     3,     3,
     170,     3,    55,  1770,  1771,    37,   152,    20,   342,   172,
      42,    43,   343,   141,    46,     4,   310,   310,   310,    51,
      52,    53,    54,    55,   310,   342,    58,   342,    60,    61,
      62,   310,   342,    65,    66,   310,    68,    69,    70,   310,
       5,   310,    74,     5,   342,   310,   342,    79,   207,   122,
       3,    83,   121,     3,     3,   144,    88,    89,    90,   144,
     342,   342,     3,    95,    96,     3,    98,    99,   100,   101,
     343,   343,   104,    70,   106,   107,   108,   109,   232,   111,
       3,   113,   114,    52,   116,   117,   118,   343,   120,   121,
     122,   123,   343,   342,   342,   342,   128,   121,   130,   232,
     132,   133,   342,   135,   136,   137,   138,   139,   140,   342,
     142,   143,   144,   145,   146,   170,     3,     3,   150,    18,
     152,  1888,   154,   342,   144,   342,   342,   144,   342,     3,
     144,   163,     3,   165,   166,   167,   168,   169,   170,   171,
     185,    40,   174,   175,    43,     3,    45,   343,   180,    48,
     182,   183,   184,   342,   186,   218,   188,   343,   190,   191,
     192,   193,    55,   343,    63,   343,   343,   343,   342,   344,
     342,    70,    71,   205,   206,   207,   342,   342,    20,   143,
     342,   342,   214,   343,   216,   217,   218,   342,   128,  1956,
     342,   223,   343,   225,   226,   227,    95,   342,   230,   342,
     342,   342,   234,   235,   342,   237,   238,   239,   240,   343,
     344,   342,   244,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   166,     3,   342,   342,
     342,    44,     3,   342,     4,   144,   144,   144,     5,   186,
     206,     4,     4,   285,   286,   287,   288,   289,   342,     3,
       3,     3,     3,     3,   342,   342,   232,   166,   100,   232,
     342,     3,   342,     3,   342,   174,   342,   344,   342,   223,
       3,     4,     5,     6,     7,     8,    20,    10,   311,    12,
       3,   310,   310,    16,    17,    18,   343,    20,     3,   343,
     343,    24,    25,    26,    27,    28,   343,   343,   340,   341,
     342,   343,   344,   345,    37,     3,     3,    43,   343,    42,
      43,     5,     5,    46,    52,     4,   342,   226,    51,    52,
      53,    54,    55,   342,   342,    58,    52,    60,    61,    62,
     343,   342,    65,    66,   343,    68,    69,    70,   343,   190,
     344,    74,   342,   232,   342,   342,    79,   144,   144,   342,
      83,     3,   344,   342,    55,    88,    89,    90,   342,   171,
     343,   343,    95,    96,   342,    98,    99,   100,   101,    20,
      18,   104,   343,   106,   107,   108,   109,     3,   111,   343,
     113,   114,   343,   116,   117,   118,   342,   120,   121,   122,
     123,   343,     3,   342,    52,   128,   144,   130,   343,   132,
     133,   342,   135,   136,   137,   138,   139,   140,   342,   142,
     143,   144,   145,   146,   342,     3,     3,   150,    55,   152,
       3,   154,     3,     3,    55,   343,   343,   343,   310,   343,
     163,   310,   165,   166,   167,   168,   169,   170,   171,   310,
     310,   174,   175,   343,   187,   121,     3,   180,   233,   182,
     183,   184,   180,   186,     3,   188,     3,   190,   191,   192,
     193,     5,     5,    52,    69,   343,   113,   136,   146,   180,
     239,     5,   205,   206,   207,    20,     3,   344,   343,   343,
     343,   214,   343,   216,   217,   218,   343,   343,   342,   344,
     223,     3,   225,   226,   227,   343,   342,   230,   343,   342,
     139,   234,   235,   342,   237,   238,   239,   240,   343,   343,
     343,   244,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,     3,   344,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     342,   342,   285,   286,   287,   288,   289,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
       4,     5,     6,     7,     8,     3,    10,   344,    12,   199,
     199,     3,    16,    17,    18,   342,    20,     3,   180,    20,
      24,    25,    26,    27,    28,     3,   343,   340,   341,   342,
     343,   344,   345,    37,   343,   153,   153,   344,    42,    43,
       3,     3,    46,     3,   343,   343,   342,    51,    52,    53,
      54,    55,   342,   197,    58,   343,    60,    61,    62,   343,
     343,    65,    66,   343,    68,    69,    70,     3,     3,   131,
      74,     5,   342,     3,   196,    79,   235,    80,   147,    83,
     215,   170,   170,   164,    88,    89,    90,   164,     5,     5,
      84,    95,    96,   341,    98,    99,   100,   101,   845,  1323,
     104,  1619,   106,   107,   108,   109,   458,   111,   465,   113,
     114,   815,   116,   117,   118,  1139,   120,   121,   122,   123,
     942,  1552,   107,    72,   128,   330,   130,   829,   132,   133,
     568,   135,   136,   137,   138,   139,   140,  1708,   142,   143,
     144,   145,   146,  1680,  2011,  1225,   150,   580,   152,  1213,
     154,   140,   784,    -1,   798,  1364,   504,   313,    -1,   163,
      -1,   165,   166,   167,   168,   169,   170,   171,    -1,    -1,
     174,   175,    -1,    -1,    -1,    -1,   180,    -1,   182,   183,
     184,    -1,   186,    -1,   188,    -1,   190,   191,   192,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   216,   217,   218,    -1,    -1,    -1,    -1,   223,
      -1,   225,   226,   227,    -1,    -1,   230,    -1,    -1,    -1,
     234,   235,    -1,   237,   238,   239,   240,    -1,    -1,    -1,
     244,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,   286,   287,   288,   289,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   340,   341,   342,   343,
     344,   345,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,
      95,    96,    -1,    98,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,   108,   109,    -1,   111,    -1,   113,   114,
      -1,   116,   117,   118,    -1,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,   128,    -1,   130,    -1,   132,   133,    -1,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,   150,    -1,   152,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
     165,   166,   167,   168,   169,   170,   171,    -1,    -1,   174,
     175,    -1,    -1,    -1,    -1,   180,    -1,   182,   183,   184,
      -1,   186,    -1,   188,    -1,   190,   191,   192,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,   216,   217,   218,    -1,    -1,    -1,    -1,   223,    -1,
     225,   226,   227,    -1,    -1,   230,    -1,    -1,    -1,   234,
     235,    -1,   237,   238,   239,   240,    -1,    -1,    -1,   244,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,   286,   287,   288,   289,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   340,   341,   342,   343,   344,
     345,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,    95,
      96,    -1,    98,    99,   100,   101,    -1,    -1,   104,    -1,
     106,   107,   108,   109,    -1,   111,    -1,   113,   114,    -1,
     116,   117,   118,    -1,   120,   121,   122,   123,    -1,    -1,
      -1,    -1,   128,    -1,   130,    -1,   132,   133,    -1,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,   150,    -1,   152,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,   165,
     166,   167,   168,   169,   170,   171,    -1,    -1,   174,   175,
      -1,    -1,    -1,    -1,   180,    -1,   182,   183,   184,    -1,
     186,    -1,   188,    -1,   190,   191,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,   217,   218,    -1,    -1,    -1,    -1,   223,    -1,   225,
     226,   227,    -1,    -1,   230,    -1,    -1,    -1,   234,   235,
      -1,   237,   238,   239,   240,    -1,    -1,    -1,   244,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   340,   341,   342,   343,   344,   345,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,
      -1,    98,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,   108,   109,    -1,   111,    -1,   113,   114,    -1,   116,
     117,   118,    -1,   120,   121,   122,   123,    -1,    -1,    -1,
      -1,   128,    -1,   130,    -1,   132,   133,    -1,   135,   136,
     137,   138,   139,   140,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,   150,    -1,   152,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,   165,   166,
     167,   168,   169,   170,   171,    -1,    -1,   174,   175,    -1,
      -1,    -1,    -1,   180,    -1,   182,   183,   184,    -1,   186,
      -1,   188,    -1,   190,   191,   192,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,
     207,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,
     217,   218,    -1,    -1,    -1,    -1,   223,    -1,   225,   226,
     227,    -1,    -1,   230,    -1,    -1,    -1,   234,   235,    -1,
     237,   238,   239,   240,    -1,    -1,    -1,   244,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   340,   341,   342,   343,   344,   345,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,    -1,
      98,    99,   100,   101,    -1,    -1,   104,    -1,   106,   107,
     108,   109,    -1,   111,    -1,   113,   114,    -1,   116,   117,
     118,    -1,   120,   121,   122,   123,    -1,    -1,    -1,    -1,
     128,    -1,   130,    -1,   132,   133,    -1,   135,   136,   137,
     138,   139,   140,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,   150,    -1,   152,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,   165,   166,   167,
     168,   169,   170,   171,    -1,    -1,   174,   175,    -1,    -1,
      -1,    -1,   180,    -1,   182,   183,   184,    -1,   186,    -1,
     188,    -1,   190,   191,   192,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,   217,
     218,    -1,    -1,    -1,    -1,   223,    -1,   225,   226,   227,
      -1,    -1,   230,    -1,    -1,    -1,   234,   235,    -1,   237,
     238,   239,   240,    -1,    -1,    -1,   244,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   340,   341,   342,   343,   344,   345,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    -1,    -1,    -1,    -1,    95,    96,    -1,    98,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,   108,
     109,    -1,   111,    -1,   113,   114,    -1,   116,   117,   118,
      -1,   120,   121,   122,   123,    -1,    -1,    -1,    -1,   128,
      -1,   130,    -1,   132,   133,    -1,   135,   136,   137,   138,
     139,   140,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,   150,    -1,   152,    -1,   154,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,    -1,   165,   166,   167,   168,
     169,   170,   171,    -1,    -1,   174,   175,    -1,    -1,    -1,
      -1,   180,    -1,   182,   183,   184,    -1,   186,    -1,   188,
      -1,   190,   191,   192,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,   216,   217,   218,
      -1,    -1,    -1,    -1,   223,    -1,   225,   226,   227,    -1,
      -1,   230,    -1,    -1,    -1,   234,   235,    -1,   237,   238,
     239,   240,    -1,    -1,    -1,   244,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   340,   341,   342,   343,   344,   345,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    -1,    -1,    95,    96,    -1,    98,    99,
     100,   101,    -1,    -1,   104,    -1,   106,   107,   108,   109,
      -1,   111,    -1,   113,   114,    -1,   116,   117,   118,    -1,
     120,   121,   122,   123,    -1,    -1,    -1,    -1,   128,    -1,
     130,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
     150,    -1,   152,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   163,    -1,   165,   166,   167,   168,   169,
     170,   171,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,
     180,    -1,   182,   183,   184,    -1,   186,    -1,   188,    -1,
     190,   191,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206,   207,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,   216,   217,   218,    -1,
      -1,    -1,    -1,   223,    -1,   225,   226,   227,    -1,    -1,
     230,    -1,    -1,    -1,   234,   235,    -1,   237,   238,   239,
     240,    -1,    -1,    -1,   244,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     340,   341,   342,   343,   344,   345,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    -1,    -1,    95,    96,    -1,    98,    99,   100,
     101,    -1,    -1,   104,    -1,   106,   107,   108,   109,    -1,
     111,    -1,   113,   114,    -1,   116,   117,   118,    -1,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,   128,    -1,   130,
      -1,   132,   133,    -1,   135,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,   150,
      -1,   152,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   163,    -1,   165,   166,   167,   168,   169,   170,
     171,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,   180,
      -1,   182,   183,   184,    -1,   186,    -1,   188,    -1,   190,
     191,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,   206,   207,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,    -1,    -1,
      -1,    -1,   223,    -1,   225,   226,   227,    -1,    -1,   230,
      -1,    -1,    -1,   234,   235,    -1,   237,   238,   239,   240,
      -1,    -1,    -1,   244,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   340,
     341,   342,   343,   344,   345,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    -1,    -1,    95,    96,    -1,    98,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,   108,   109,    -1,   111,
      -1,   113,   114,    -1,   116,   117,   118,    -1,   120,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,    -1,   130,    -1,
     132,   133,    -1,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,   150,    -1,
     152,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,    -1,   165,   166,   167,   168,   169,   170,   171,
      -1,    -1,   174,   175,    -1,    -1,    -1,    -1,   180,    -1,
     182,   183,   184,    -1,   186,    -1,   188,    -1,   190,   191,
     192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,   216,   217,   218,    -1,    -1,    -1,
      -1,   223,    -1,   225,   226,   227,    -1,    -1,   230,    -1,
      -1,    -1,   234,   235,    -1,   237,   238,   239,   240,    -1,
      -1,    -1,   244,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   344,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   340,   341,
     342,   343,   344,   345,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    -1,    95,    96,    -1,    98,    99,   100,   101,    -1,
      -1,   104,    -1,   106,   107,   108,   109,    -1,   111,    -1,
     113,   114,    -1,   116,   117,   118,    -1,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,   128,    -1,   130,    -1,   132,
     133,    -1,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,   150,    -1,   152,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,    -1,   165,   166,   167,   168,   169,   170,   171,    -1,
      -1,   174,   175,    -1,    -1,    -1,    -1,   180,    -1,   182,
     183,   184,    -1,   186,    -1,   188,    -1,   190,   191,   192,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,   206,   207,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    -1,   216,   217,   218,    -1,    -1,    -1,    -1,
     223,    -1,   225,   226,   227,    -1,    -1,   230,    -1,    -1,
      -1,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
      -1,   244,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   340,   341,   342,
     343,   344,   345,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      -1,    95,    96,    -1,    98,    99,   100,   101,    -1,    -1,
     104,    -1,   106,   107,   108,   109,    -1,   111,    -1,   113,
     114,    -1,   116,   117,   118,    -1,   120,   121,   122,   123,
      -1,    -1,    -1,    -1,   128,    -1,   130,    -1,   132,   133,
      -1,   135,   136,   137,   138,   139,   140,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,   150,    -1,   152,    -1,
     154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,
      -1,   165,   166,   167,   168,   169,   170,   171,    -1,    -1,
     174,   175,    -1,    -1,    -1,    -1,   180,    -1,   182,   183,
     184,    -1,   186,    -1,   188,    -1,   190,   191,   192,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   216,   217,   218,    -1,    -1,    -1,    -1,   223,
      -1,   225,   226,   227,    -1,    -1,   230,    -1,    -1,    -1,
     234,   235,    -1,   237,   238,   239,   240,    -1,    -1,    -1,
     244,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   340,   341,   342,   343,
     344,   345,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,
      95,    96,    -1,    98,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,   108,   109,    -1,   111,    -1,   113,   114,
      -1,   116,   117,   118,    -1,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,   128,    -1,   130,    -1,   132,   133,    -1,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,   150,    -1,   152,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
     165,   166,   167,   168,   169,   170,   171,    -1,    -1,   174,
     175,    -1,    -1,    -1,    -1,   180,    -1,   182,   183,   184,
      -1,   186,    -1,   188,    -1,   190,   191,   192,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,   216,   217,   218,    -1,    -1,    -1,    -1,   223,    -1,
     225,   226,   227,    -1,    -1,   230,    -1,    -1,    -1,   234,
     235,    -1,   237,   238,   239,   240,    -1,    -1,    -1,   244,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
     285,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,   340,   341,   342,   343,   344,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   126,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   166,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,   204,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
     283,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    -1,    -1,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,   332,
     333,   334,   335,     3,     4,     5,     6,     7,     8,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     344,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,   343,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,    -1,   283,    -1,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      -1,    -1,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   166,   332,   333,   334,   335,    -1,    -1,    -1,    -1,
      -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     344,    -1,    -1,    -1,    -1,   200,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   344,   283,    -1,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    -1,    -1,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,   332,   333,   334,
     335,     3,     4,     5,     6,     7,     8,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,   121,    -1,    -1,    -1,    25,
      26,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     344,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     166,   283,    -1,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    -1,    -1,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,    -1,
     332,   333,   334,   335,    -1,    -1,    -1,    -1,    -1,    -1,
     342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,   283,    -1,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   344,    -1,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,    -1,   332,   333,   334,   335,
       3,     4,     5,     6,     7,     8,   342,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,   344,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   117,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    95,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   166,
     283,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    -1,    -1,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,   332,
     333,   334,   335,    -1,    -1,    -1,    -1,    -1,    -1,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,   283,    -1,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   344,    -1,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,    -1,   332,   333,   334,   335,     3,
       4,     5,     6,     7,     8,   342,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    18,
      -1,    25,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    63,    69,    -1,    -1,    72,    73,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,   144,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   166,    -1,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    95,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   166,   283,
      -1,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    -1,    -1,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,    -1,   332,   333,
     334,   335,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,    -1,   283,    -1,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    -1,    -1,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,    -1,   332,   333,   334,   335,     3,     4,
       5,     6,     7,     8,   342,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,   344,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,
      95,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    17,    18,
     117,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   166,   283,    -1,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    -1,    -1,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,   332,   333,   334,
     335,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,   283,    -1,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,    -1,    -1,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,    -1,   332,   333,   334,   335,    -1,    -1,    -1,
      -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   344,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   344,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   344,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   344,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   344,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   344,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   344,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   344,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   344,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   344,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   344,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   344,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   344,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   343,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   343,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   343,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   343,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   343,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   343,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   343,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   343,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   343,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   343,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   343,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   343,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   343,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   343,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   343,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   343,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   343,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   343,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   343,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   343,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   343,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   343,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   343,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   343,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   343,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,   343,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   343,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   343,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   343,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   343,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   343,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   343,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   343,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   343,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   343,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   343,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   343,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   343,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   343,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   343,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   343,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   343,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    53,    54,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
      -1,    -1,   106,    -1,   105,    86,    87,    -1,    -1,    -1,
      91,    -1,    93,   114,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,   124,   125,    -1,   127,   148,    -1,    -1,
      -1,    -1,    -1,    -1,   155,   343,    -1,   158,    -1,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   343,    -1,    -1,   205,   206,    -1,   208,   209,    -1,
      -1,   238,    -1,   214,    -1,   216,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,   343,    -1,   227,   228,    -1,    -1,
      -1,    -1,    -1,   234,    -1,   236,    -1,    -1,    -1,    -1,
     241,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     241,   242,    -1,    10,    11,    12,    13,    14,    15,    16,
     343,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   343,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    41,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      94,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    42,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      42,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    89,    90,   137,   179,   181,
     189,   206,   207,   220,   223,   231,   347,   383,   384,   421,
     425,   426,   429,   430,   433,   434,   435,   437,   449,   450,
     453,   455,   456,   457,   479,   482,   489,   490,   493,   496,
     497,   500,   192,   217,   331,   217,     3,    10,    78,    84,
     120,   135,   175,   192,   195,   211,   212,   226,   331,   461,
     422,    78,   120,   135,   175,   192,   195,   217,   331,   441,
     217,   217,   441,     8,   195,   480,   481,   402,   217,   441,
     451,     3,    78,     0,   340,   432,     3,     3,     3,     3,
     342,   189,   136,   454,     3,     3,     3,    77,   136,     3,
       3,   454,   211,   135,   454,   217,     3,   117,   134,   149,
     176,   423,     3,   136,     3,   136,     3,     3,   136,     3,
     136,     3,   136,     3,   136,     3,   136,    85,   126,   134,
     139,   149,   442,     3,     3,   442,     9,    20,     3,    95,
     344,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    37,    64,    69,    72,    73,    88,    92,   126,   166,
     194,   201,   202,   204,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   283,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   332,   333,   334,
     335,   342,   348,   403,   404,     3,   134,   149,     3,   342,
     406,   407,   408,   410,   420,     3,   347,    46,    47,    66,
     183,    82,   102,    35,    67,    82,    90,   102,   160,   181,
     233,    47,   181,   498,   341,     3,     4,     5,     6,     7,
       8,   166,   343,   491,   492,   120,   175,   244,     3,    43,
     342,   170,     3,   136,   244,   342,    36,    51,   494,     3,
       3,    77,   136,     3,   454,   341,   424,     3,   423,   117,
     344,   244,   244,   244,   244,   244,   244,   244,     3,   210,
       3,   348,   348,   481,   341,   342,     9,   348,   348,   348,
     238,   348,   382,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     348,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    43,   405,   117,   139,   344,   344,
     341,   405,   384,   406,   206,   344,    68,   133,   150,   163,
     188,   204,   411,   413,    43,   409,    45,    45,    63,    76,
       3,    76,    63,     3,    63,    76,    63,     3,    76,     3,
      63,    76,    63,   240,   210,    18,   157,   336,   337,   338,
     339,   499,     3,   343,   344,     3,     3,    53,    54,    56,
      58,    59,    74,    96,    97,    98,    99,   105,   114,   132,
     140,   148,   155,   158,   161,   162,   178,   205,   206,   208,
     209,   214,   216,   221,   222,   227,   228,   234,   236,   241,
     475,     3,    16,   130,   168,   483,   484,   485,     3,   170,
     244,     3,   483,    89,   137,   223,   495,   170,     3,   136,
     244,   498,     3,    26,   237,   385,   230,   406,     3,     3,
       3,     3,     3,     3,     3,     3,   206,   342,   443,     3,
     206,   443,     3,   348,   353,   354,   348,   348,   382,   106,
     107,   238,   359,   348,    57,   151,   219,   348,   380,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   343,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   343,   348,   348,   348,   343,   348,
     348,   348,   348,   348,   348,    26,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   343,   343,   343,
     343,   348,   348,   343,   343,   343,   348,   348,     5,   343,
     343,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   343,   343,   348,   348,   348,   348,   348,
       6,    18,   166,   282,   342,    13,    14,    16,    19,   348,
      37,    39,   200,   342,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,     3,   406,     3,
     404,     3,   431,     3,   115,   134,   231,   417,   343,   343,
       3,   452,   407,   150,   188,   414,   408,   143,   169,   412,
       3,     3,     3,     3,     3,     3,     3,     3,     3,   475,
       3,   210,     3,     3,     3,     5,     3,   339,     5,     5,
     240,     5,    55,     5,   492,   342,   342,   342,   471,   471,
     471,   471,   471,   471,   342,   471,   471,   471,    56,   472,
     472,   471,   471,   471,   342,   472,   471,   472,   342,   342,
      18,    70,    95,   475,     3,     3,     3,   343,   344,   230,
     342,     3,     3,   170,   343,   170,     3,   170,   244,     3,
     134,   189,   341,   342,   477,   478,   348,   171,   395,   406,
     385,   424,     3,   448,     3,   444,   235,   384,   448,   235,
     384,   344,   343,   218,   106,   107,   348,   348,   384,   117,
     344,   343,   117,   348,   344,   344,   344,   343,   343,   343,
     343,   343,   343,   344,   344,   344,   344,   343,   344,   344,
     344,   343,   343,   343,   343,   344,   344,   343,   344,   343,
     343,   343,    43,   344,   344,   344,   344,   284,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   344,   344,
     344,   343,   344,   310,   310,   310,   343,   344,   343,   344,
     343,   310,   310,   344,   343,   343,   343,   343,   343,   343,
     343,   343,   344,   344,   344,   344,   344,   344,   344,   344,
     343,   344,   343,   343,   343,   344,     6,   166,   355,   357,
     348,   348,   342,   348,    42,   342,   342,   342,   349,   385,
     117,   344,   405,   144,   144,   144,    20,   341,   344,   385,
     412,   412,   143,   170,   408,   143,    70,   116,   174,   226,
     475,   475,     3,   470,   475,     3,   210,   210,     5,     5,
     483,   483,     5,   473,   474,   473,   473,     4,   476,   473,
     473,   473,   474,   474,   473,   473,   473,   476,   474,   473,
     474,     5,     5,   166,   342,   348,   475,   475,   475,   186,
     485,   232,     3,   290,   291,   292,   293,   427,   428,   230,
     342,   170,     3,    43,    52,     3,   230,   342,     3,     3,
     170,     3,    63,    70,   116,   119,   135,   144,   174,   226,
     462,   463,   469,   409,    55,   152,   398,   385,    20,   172,
     344,   438,   343,   344,   342,   445,   438,   445,   438,   353,
     348,   348,   106,   218,   343,   348,   348,   348,   117,   141,
     381,   381,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   475,   475,   348,   348,   348,     4,   310,
     310,   310,   310,   310,   310,   348,   348,   348,   348,   342,
     342,   342,   310,     5,   310,     5,   310,   342,   342,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     353,   384,   356,   358,    42,   348,   352,   350,   351,   384,
     122,   386,   406,     3,   417,   121,   418,   418,   418,   348,
       3,     3,   395,   408,   348,   170,   230,   415,   416,   408,
     342,   144,   144,   342,   470,   470,   475,    18,    36,    40,
      43,    45,    48,    63,    70,    71,    95,   112,   144,   166,
     174,   226,   436,   470,     3,     3,   343,   343,   343,   344,
     224,   243,    74,    75,   343,   344,   343,   343,   343,    70,
     348,    54,    58,    96,    99,   114,   132,   140,   214,   216,
     234,   486,   342,   342,   342,   342,   342,   343,   344,   232,
     427,     3,   230,   342,    52,   487,   121,   232,   427,   230,
     342,   170,     3,   342,   477,     3,   342,   144,   135,   144,
     342,   342,   144,   342,   343,   344,     3,   384,     3,     5,
     396,   397,   348,   185,   501,    95,   348,   144,     3,     3,
      95,   348,   447,   344,   438,   438,   106,   348,   121,   343,
     343,   344,   343,   348,   348,   343,   343,   343,   343,   343,
     344,   344,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   344,   343,   342,   342,   342,   342,   342,   342,
     343,   344,   344,   343,   343,   360,   361,   362,   342,   343,
     344,   342,   343,   344,   342,   378,   379,   343,   344,   344,
     344,   343,   343,   344,   344,   343,   344,   343,   344,   343,
     344,   343,   343,   353,   384,   348,   384,   384,   384,   343,
      55,   128,   390,   385,   143,   342,   342,   342,    20,    20,
     341,   398,   348,   342,   416,   348,   342,   342,     3,   468,
     436,   436,   470,   166,     3,   342,   342,   342,    44,     3,
     342,     4,     4,     5,     6,     7,    64,   296,   297,   298,
     342,   144,   144,   436,   186,    43,    52,     5,   206,     4,
     474,     4,   474,   474,   342,   343,    43,    52,   427,     3,
       3,     3,     3,     3,   342,   343,   342,   232,   427,   487,
       3,     4,     5,     6,     7,     8,    10,    12,    16,    17,
      18,    20,    24,    25,    26,    27,    28,    37,    42,    43,
      46,    51,    52,    53,    54,    55,    58,    60,    61,    62,
      65,    66,    68,    69,    70,    74,    79,    83,    88,    89,
      90,    95,    96,    98,    99,   100,   101,   104,   106,   107,
     108,   109,   111,   113,   114,   116,   117,   118,   120,   121,
     122,   123,   128,   130,   132,   133,   135,   136,   137,   138,
     139,   140,   142,   143,   144,   145,   146,   150,   152,   154,
     163,   165,   166,   167,   168,   169,   170,   171,   174,   175,
     180,   182,   183,   184,   186,   188,   190,   191,   192,   193,
     205,   206,   207,   214,   216,   217,   218,   223,   225,   226,
     227,   230,   234,   235,   237,   238,   239,   240,   244,   285,
     286,   287,   288,   289,   340,   341,   342,   343,   344,   345,
     488,   100,   342,   343,   232,   427,     3,   230,   342,   462,
      70,   116,   174,   226,   348,   342,   342,   342,     3,   401,
     401,   342,   468,   458,   477,   463,   475,    41,    94,   341,
     388,   388,   344,   154,   344,     3,    26,   502,   223,    20,
     343,   344,   446,   501,   348,   348,   343,    86,    87,    91,
      93,   124,   125,   127,   241,   242,   348,   348,   348,   364,
     365,   363,   366,   367,   368,   348,   348,   311,   391,   391,
     391,   369,   310,     4,     5,   373,   310,     4,     5,   377,
     391,   391,   348,   348,   348,   348,   348,   348,   348,   348,
     343,   343,   343,   343,   343,   348,   387,   348,   395,   386,
       3,   419,   419,   419,   348,   348,     3,   501,   401,   343,
       3,   465,     3,   464,   343,   344,   436,     5,   348,     5,
      43,    70,   174,   226,   348,   342,   342,   342,   348,   486,
      52,   487,   343,     4,   348,    52,   487,   343,   343,   343,
     343,   344,   427,   427,   342,   343,   106,   487,   487,   487,
     487,   487,   487,   190,   427,   342,   343,   342,   232,   427,
     343,   342,   144,   144,   342,   343,   465,   401,   401,   343,
     344,   343,   464,   343,    40,   170,   196,   470,     3,   397,
     348,   348,   344,   439,    95,   348,    95,   348,   342,   343,
     343,   343,   343,   343,   391,   391,   391,   391,   391,   391,
     343,   344,   343,    55,   171,   393,   393,   393,   391,   342,
     343,   343,   391,   342,   343,   343,   391,   393,   393,   343,
     343,   343,   343,   343,   344,   343,   343,   388,   240,   344,
     389,   398,   390,   343,   344,   343,   343,    20,   343,    18,
     343,   344,   343,   344,     3,   343,   344,   343,   343,   344,
     342,   342,   144,   343,   343,   343,   343,   343,    43,    52,
     487,   106,   343,   487,   106,     3,   343,   343,   427,   106,
     106,   106,   106,   106,   106,    52,   343,   427,   427,   342,
     343,   458,   477,   348,   342,   342,   468,   343,   343,   343,
       3,   343,     5,    20,     3,    55,   388,     3,     3,   440,
     447,   393,   393,   393,   393,   393,   393,   348,     3,   392,
      55,   343,   343,   343,   393,   370,   310,   310,   393,   374,
     310,   310,   393,   343,   343,   348,   187,   348,   121,   399,
     395,     3,   348,   233,   180,     3,     3,     5,    49,    50,
       5,   348,   348,    52,   487,   106,   106,   343,   343,    69,
     113,   136,   146,   239,   487,   343,   343,   427,   343,   465,
     464,   343,   180,     5,    89,   213,   177,   232,    20,   344,
     343,   343,   343,   343,   343,   343,   343,   343,   344,     3,
     394,   343,   391,   342,   342,   343,   391,   342,   342,   343,
     343,   388,   198,   223,   139,   400,   398,     3,   343,   343,
     343,   343,   487,   106,   106,   343,   343,   343,     3,     3,
       3,   342,   342,   348,     3,     3,   388,   344,   393,   371,
     372,   393,   375,   376,   199,   199,   401,   342,    49,    50,
     106,   180,   341,   342,     3,     3,    20,     3,   343,   391,
     391,   343,   391,   391,   153,   153,     3,   466,     3,     3,
     466,   343,   343,   348,   388,   393,   393,   393,   393,   343,
     344,   341,   342,   342,   343,   342,   197,   343,   343,   343,
     343,   467,     3,     3,   466,   466,   467,   196,   459,   460,
       5,    18,    80,   156,   170,   342,   343,   343,    18,     3,
     343,   344,    80,   233,   131,   118,   173,   203,    89,   223,
     466,   467,   467,   235,   460,    81,   129,    66,   165,   183,
     206,    66,   165,   183,   206,   343,   147,    95,   166,    95,
     166,   467,   215,     4,   157,   170,   170,   164,   164,     5,
       5
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
#line 417 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 423 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 424 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 426 "parser/evoparser.y"
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

  case 8:
#line 444 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 452 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 460 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 466 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 473 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 474 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 475 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 476 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 477 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 478 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 479 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 480 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 481 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 482 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 483 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 484 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 485 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 486 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 487 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 488 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 489 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 490 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 30:
#line 491 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 31:
#line 493 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 32:
#line 498 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 499 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("CMPSELECT %d", (yyvsp[(2) - (6)].subtok));
        ExprNode *sub = expr_make_subquery(sql);
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), sub);
        free(sql);
    ;}
    break;

  case 34:
#line 507 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 508 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 36:
#line 509 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 510 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 511 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 512 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 515 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 41:
#line 516 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 42:
#line 517 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 43:
#line 518 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 44:
#line 519 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 45:
#line 522 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 46:
#line 523 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 47:
#line 526 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 48:
#line 527 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 49:
#line 530 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 51:
#line 534 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 534 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 535 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 535 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 536 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 537 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 544 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 545 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 552 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 553 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 61:
#line 563 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 62:
#line 567 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 63:
#line 568 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 569 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 570 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 571 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 572 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 573 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 69:
#line 574 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 70:
#line 578 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 71:
#line 579 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 72:
#line 580 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 73:
#line 581 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 74:
#line 582 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 75:
#line 583 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 76:
#line 585 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 77:
#line 586 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 78:
#line 587 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 79:
#line 588 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 80:
#line 589 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 590 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 82:
#line 591 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 592 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 84:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 594 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 86:
#line 595 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 596 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 88:
#line 598 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 599 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 600 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 91:
#line 601 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 602 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 93:
#line 603 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 604 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 95:
#line 605 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 606 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 607 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 98:
#line 608 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 99:
#line 609 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 100:
#line 610 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 101:
#line 611 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 612 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 103:
#line 613 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 105:
#line 616 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 106:
#line 617 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 107:
#line 618 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 108:
#line 619 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 109:
#line 620 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 110:
#line 623 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 111:
#line 624 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 112:
#line 625 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 113:
#line 626 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 114:
#line 627 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 115:
#line 628 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 116:
#line 629 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 117:
#line 630 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 631 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 119:
#line 632 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 633 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 634 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 122:
#line 635 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 636 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 124:
#line 637 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 125:
#line 638 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 126:
#line 639 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 127:
#line 640 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 128:
#line 641 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 129:
#line 642 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 130:
#line 643 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 131:
#line 644 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 132:
#line 645 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 133:
#line 646 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 134:
#line 647 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 135:
#line 648 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 136:
#line 649 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 137:
#line 650 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 138:
#line 651 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 139:
#line 652 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 140:
#line 653 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 141:
#line 654 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 142:
#line 655 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 143:
#line 656 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 144:
#line 658 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 145:
#line 659 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 146:
#line 660 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 147:
#line 661 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 148:
#line 662 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 149:
#line 663 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 150:
#line 664 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 151:
#line 665 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 152:
#line 667 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 153:
#line 668 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 154:
#line 669 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 155:
#line 670 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 156:
#line 671 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 157:
#line 672 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 158:
#line 673 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 159:
#line 674 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 160:
#line 675 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 161:
#line 676 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 162:
#line 677 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 163:
#line 678 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 164:
#line 679 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 165:
#line 680 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 166:
#line 681 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 167:
#line 682 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 168:
#line 683 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 169:
#line 684 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 170:
#line 685 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 171:
#line 686 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 172:
#line 687 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 688 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 174:
#line 690 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 175:
#line 691 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 176:
#line 692 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 177:
#line 693 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 178:
#line 694 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 179:
#line 696 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 180:
#line 697 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 181:
#line 699 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 182:
#line 700 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 183:
#line 701 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 184:
#line 703 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 185:
#line 704 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 186:
#line 705 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 187:
#line 706 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 188:
#line 713 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 189:
#line 720 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 190:
#line 727 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 191:
#line 731 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 192:
#line 735 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 193:
#line 741 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 194:
#line 742 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 195:
#line 743 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 196:
#line 747 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 197:
#line 753 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 198:
#line 759 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 199:
#line 760 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 200:
#line 761 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 201:
#line 762 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 202:
#line 763 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 203:
#line 764 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 204:
#line 765 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 205:
#line 766 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 206:
#line 767 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 207:
#line 771 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 208:
#line 773 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 209:
#line 775 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 210:
#line 777 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 211:
#line 781 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 212:
#line 789 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 213:
#line 799 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 214:
#line 800 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 215:
#line 803 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 216:
#line 804 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 217:
#line 808 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 218:
#line 816 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 219:
#line 824 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 220:
#line 835 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 221:
#line 844 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 222:
#line 849 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 223:
#line 862 "parser/evoparser.y"
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

  case 225:
#line 875 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 227:
#line 877 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 228:
#line 880 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 229:
#line 887 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 230:
#line 895 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 231:
#line 896 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 232:
#line 897 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 233:
#line 900 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 234:
#line 901 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 236:
#line 905 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 239:
#line 914 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 240:
#line 916 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 243:
#line 924 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 244:
#line 926 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 249:
#line 938 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 250:
#line 944 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 251:
#line 951 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 252:
#line 959 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 253:
#line 960 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 254:
#line 961 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 255:
#line 962 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 256:
#line 965 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 257:
#line 966 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 258:
#line 967 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 259:
#line 968 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 260:
#line 969 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 262:
#line 973 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 263:
#line 976 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 264:
#line 977 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 265:
#line 980 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 981 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 267:
#line 982 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 268:
#line 983 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 269:
#line 984 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 270:
#line 985 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 271:
#line 986 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 272:
#line 987 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 273:
#line 988 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 274:
#line 991 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 275:
#line 992 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 276:
#line 994 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 277:
#line 1002 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 278:
#line 1007 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 279:
#line 1008 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 280:
#line 1009 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 281:
#line 1012 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 282:
#line 1013 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1022 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 286:
#line 1028 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 287:
#line 1029 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 288:
#line 1030 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 291:
#line 1039 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 292:
#line 1041 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 293:
#line 1043 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 294:
#line 1045 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 295:
#line 1047 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 296:
#line 1050 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 297:
#line 1051 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 298:
#line 1052 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 299:
#line 1055 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 300:
#line 1056 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 301:
#line 1059 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 303:
#line 1063 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 304:
#line 1064 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 305:
#line 1065 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 308:
#line 1072 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 309:
#line 1073 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 310:
#line 1078 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 311:
#line 1080 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 312:
#line 1082 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 314:
#line 1086 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 315:
#line 1087 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 316:
#line 1090 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 317:
#line 1091 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 318:
#line 1094 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 319:
#line 1099 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 320:
#line 1109 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 321:
#line 1116 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 322:
#line 1117 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 323:
#line 1118 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 324:
#line 1119 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 325:
#line 1124 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 326:
#line 1128 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 327:
#line 1130 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 330:
#line 1136 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 331:
#line 1141 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 332:
#line 1148 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 333:
#line 1155 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 334:
#line 1165 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 335:
#line 1172 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 336:
#line 1179 "parser/evoparser.y"
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

  case 337:
#line 1189 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 338:
#line 1197 "parser/evoparser.y"
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

  case 339:
#line 1207 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 340:
#line 1215 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 341:
#line 1224 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 342:
#line 1233 "parser/evoparser.y"
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

  case 343:
#line 1243 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 344:
#line 1251 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 345:
#line 1260 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 346:
#line 1269 "parser/evoparser.y"
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

  case 347:
#line 1279 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 348:
#line 1288 "parser/evoparser.y"
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

  case 349:
#line 1300 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 350:
#line 1305 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 351:
#line 1310 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 352:
#line 1316 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 353:
#line 1323 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 354:
#line 1330 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 355:
#line 1337 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 356:
#line 1347 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 357:
#line 1354 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 358:
#line 1363 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 359:
#line 1370 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 360:
#line 1376 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 361:
#line 1384 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 362:
#line 1390 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 364:
#line 1398 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 365:
#line 1399 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 366:
#line 1400 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 367:
#line 1401 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 368:
#line 1406 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 369:
#line 1413 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 370:
#line 1422 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 371:
#line 1429 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 372:
#line 1435 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 373:
#line 1445 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 374:
#line 1449 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 375:
#line 1455 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 376:
#line 1461 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 377:
#line 1468 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 378:
#line 1474 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 379:
#line 1481 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 380:
#line 1487 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 381:
#line 1493 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 382:
#line 1499 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 383:
#line 1505 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 384:
#line 1511 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 385:
#line 1517 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1523 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1529 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 388:
#line 1535 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 389:
#line 1541 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 390:
#line 1547 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 391:
#line 1553 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 392:
#line 1559 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 393:
#line 1565 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 394:
#line 1572 "parser/evoparser.y"
    { ;}
    break;

  case 395:
#line 1573 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 396:
#line 1574 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 397:
#line 1578 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 398:
#line 1586 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 399:
#line 1592 "parser/evoparser.y"
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

  case 401:
#line 1605 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 402:
#line 1605 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 403:
#line 1609 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 404:
#line 1617 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 405:
#line 1626 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 406:
#line 1627 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 407:
#line 1628 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 408:
#line 1629 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 409:
#line 1630 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 413:
#line 1637 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 414:
#line 1641 "parser/evoparser.y"
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

  case 415:
#line 1651 "parser/evoparser.y"
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

  case 416:
#line 1663 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 417:
#line 1664 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 418:
#line 1664 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 419:
#line 1667 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 420:
#line 1668 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 421:
#line 1669 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 422:
#line 1670 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 423:
#line 1674 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 424:
#line 1677 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 425:
#line 1678 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 426:
#line 1679 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 427:
#line 1680 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 428:
#line 1686 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 429:
#line 1692 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 430:
#line 1697 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 431:
#line 1702 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 432:
#line 1707 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 433:
#line 1716 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 434:
#line 1723 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 435:
#line 1724 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 436:
#line 1725 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 437:
#line 1730 "parser/evoparser.y"
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

  case 438:
#line 1741 "parser/evoparser.y"
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

  case 439:
#line 1753 "parser/evoparser.y"
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

  case 440:
#line 1764 "parser/evoparser.y"
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

  case 441:
#line 1779 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 442:
#line 1783 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 443:
#line 1787 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 444:
#line 1788 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 445:
#line 1793 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 446:
#line 1795 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 447:
#line 1797 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 448:
#line 1799 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 449:
#line 1802 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 450:
#line 1803 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 451:
#line 1809 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 1814 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 453:
#line 1816 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 454:
#line 1818 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 455:
#line 1820 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 456:
#line 1822 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 457:
#line 1826 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 458:
#line 1830 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 459:
#line 1831 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 460:
#line 1836 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 461:
#line 1846 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 462:
#line 1855 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 464:
#line 1859 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 465:
#line 1860 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 466:
#line 1861 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 467:
#line 1862 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 468:
#line 1864 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 469:
#line 1866 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 472:
#line 1874 "parser/evoparser.y"
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

  case 473:
#line 1889 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 474:
#line 1897 "parser/evoparser.y"
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

  case 475:
#line 1911 "parser/evoparser.y"
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

  case 476:
#line 1925 "parser/evoparser.y"
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

  case 477:
#line 1939 "parser/evoparser.y"
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

  case 478:
#line 1951 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 479:
#line 1952 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 480:
#line 1953 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 481:
#line 1956 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 482:
#line 1957 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 483:
#line 1960 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 484:
#line 1961 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 485:
#line 1962 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 486:
#line 1963 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 487:
#line 1964 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 488:
#line 1965 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 489:
#line 1966 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 490:
#line 1967 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 491:
#line 1969 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 492:
#line 1971 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 493:
#line 1973 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 494:
#line 1975 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 495:
#line 1977 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 496:
#line 1979 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 497:
#line 1982 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 498:
#line 1983 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1986 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 500:
#line 1987 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 501:
#line 1990 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 502:
#line 1991 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 504:
#line 1995 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 505:
#line 1996 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 506:
#line 1997 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 507:
#line 1998 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 508:
#line 1999 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 509:
#line 2000 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 510:
#line 2001 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 511:
#line 2002 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 512:
#line 2003 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 513:
#line 2004 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 514:
#line 2005 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 515:
#line 2006 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 516:
#line 2007 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 517:
#line 2008 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 518:
#line 2009 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 519:
#line 2010 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 520:
#line 2011 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 521:
#line 2014 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 522:
#line 2015 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 523:
#line 2018 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 524:
#line 2020 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 525:
#line 2028 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 526:
#line 2029 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 528:
#line 2031 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 529:
#line 2032 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 530:
#line 2033 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 531:
#line 2034 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 532:
#line 2035 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 533:
#line 2036 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 534:
#line 2037 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 535:
#line 2038 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 536:
#line 2039 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 537:
#line 2046 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 538:
#line 2047 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 539:
#line 2048 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 540:
#line 2049 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 541:
#line 2050 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 542:
#line 2051 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 543:
#line 2052 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 544:
#line 2053 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 545:
#line 2054 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 546:
#line 2055 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 547:
#line 2056 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 548:
#line 2057 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 549:
#line 2058 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 550:
#line 2059 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 551:
#line 2060 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 552:
#line 2061 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 553:
#line 2062 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 554:
#line 2063 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 555:
#line 2064 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 556:
#line 2065 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 557:
#line 2066 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 558:
#line 2069 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 559:
#line 2070 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 560:
#line 2071 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 561:
#line 2074 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 562:
#line 2075 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 563:
#line 2078 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 564:
#line 2079 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 565:
#line 2080 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 567:
#line 2084 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 568:
#line 2085 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 569:
#line 2089 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 570:
#line 2090 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 571:
#line 2091 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 572:
#line 2092 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 573:
#line 2093 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 574:
#line 2094 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 575:
#line 2095 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 576:
#line 2096 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 577:
#line 2097 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 578:
#line 2098 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 579:
#line 2099 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 580:
#line 2100 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 581:
#line 2101 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 582:
#line 2102 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 583:
#line 2103 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 584:
#line 2104 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 585:
#line 2105 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 586:
#line 2106 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 587:
#line 2107 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 588:
#line 2108 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 589:
#line 2109 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 590:
#line 2110 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 591:
#line 2111 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 592:
#line 2112 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 593:
#line 2113 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 594:
#line 2114 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 595:
#line 2115 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 596:
#line 2116 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 597:
#line 2117 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 598:
#line 2118 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 599:
#line 2119 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 600:
#line 2120 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 601:
#line 2121 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 602:
#line 2124 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 603:
#line 2125 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 604:
#line 2129 "parser/evoparser.y"
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

  case 605:
#line 2141 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 606:
#line 2142 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 607:
#line 2143 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 608:
#line 2147 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 609:
#line 2150 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 610:
#line 2151 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 614:
#line 2155 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 615:
#line 2156 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 616:
#line 2164 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 617:
#line 2169 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 618:
#line 2175 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 619:
#line 2181 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 620:
#line 2188 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 621:
#line 2195 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 622:
#line 2201 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 623:
#line 2207 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 624:
#line 2214 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 629:
#line 2230 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 630:
#line 2231 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 631:
#line 2232 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 632:
#line 2233 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 633:
#line 2236 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 634:
#line 2237 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 635:
#line 2238 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 636:
#line 2239 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 637:
#line 2240 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 638:
#line 2241 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 639:
#line 2242 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 640:
#line 2243 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 641:
#line 2244 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 642:
#line 2245 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 651:
#line 2262 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 652:
#line 2263 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 773:
#line 2281 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 774:
#line 2288 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 775:
#line 2293 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 776:
#line 2299 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 777:
#line 2305 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 778:
#line 2311 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 779:
#line 2322 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 780:
#line 2327 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 781:
#line 2333 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 784:
#line 2344 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 785:
#line 2345 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 786:
#line 2346 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 787:
#line 2347 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 788:
#line 2348 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 789:
#line 2349 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 790:
#line 2350 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 791:
#line 2357 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 792:
#line 2362 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 793:
#line 2369 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 794:
#line 2370 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 795:
#line 2373 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 796:
#line 2374 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 797:
#line 2375 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 798:
#line 2378 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 799:
#line 2383 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 800:
#line 2389 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 801:
#line 2398 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 802:
#line 2406 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 803:
#line 2416 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 804:
#line 2421 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 807:
#line 2434 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 808:
#line 2435 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 809:
#line 2436 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 810:
#line 2437 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 811:
#line 2438 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 812:
#line 2439 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 813:
#line 2440 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 814:
#line 2441 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 815:
#line 2444 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 816:
#line 2449 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 817:
#line 2455 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 818:
#line 2465 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 819:
#line 2472 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 820:
#line 2479 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 821:
#line 2487 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 823:
#line 2497 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 825:
#line 2501 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 826:
#line 2502 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9755 "parser/evoparser.tab.c"
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


#line 2505 "parser/evoparser.y"

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
