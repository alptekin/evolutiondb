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
     FJSON_ARRAYAGG = 576
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
#line 793 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 806 "parser/evoparser.tab.c"

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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10951

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  337
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  802
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1995

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   576

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     333,   334,    26,    24,   335,    25,   332,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   331,
       2,   336,     2,     2,     2,     2,     2,     2,     2,     2,
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
     324,   325,   326,   327,   328,   329,   330
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
     909,   914,   921,   930,   935,   942,   949,   956,   963,   972,
     976,   985,   996,  1000,  1004,  1008,  1012,  1017,  1024,  1026,
    1028,  1030,  1037,  1044,  1048,  1052,  1056,  1060,  1064,  1068,
    1072,  1076,  1080,  1085,  1092,  1096,  1102,  1107,  1113,  1117,
    1122,  1126,  1131,  1133,  1135,  1137,  1139,  1143,  1156,  1169,
    1170,  1173,  1174,  1179,  1182,  1187,  1188,  1190,  1192,  1193,
    1196,  1197,  1200,  1201,  1205,  1207,  1211,  1212,  1216,  1219,
    1224,  1225,  1229,  1231,  1235,  1238,  1243,  1246,  1247,  1250,
    1255,  1260,  1261,  1264,  1267,  1272,  1277,  1278,  1281,  1283,
    1287,  1288,  1291,  1294,  1297,  1300,  1303,  1306,  1309,  1312,
    1314,  1318,  1320,  1323,  1326,  1328,  1329,  1331,  1335,  1337,
    1339,  1343,  1349,  1353,  1357,  1359,  1360,  1366,  1370,  1376,
    1383,  1389,  1390,  1392,  1394,  1395,  1397,  1399,  1401,  1404,
    1407,  1408,  1409,  1411,  1414,  1419,  1426,  1433,  1440,  1441,
    1444,  1445,  1447,  1451,  1455,  1457,  1466,  1469,  1472,  1475,
    1476,  1483,  1486,  1491,  1492,  1495,  1503,  1505,  1509,  1515,
    1517,  1526,  1537,  1547,  1559,  1570,  1583,  1595,  1609,  1619,
    1631,  1642,  1655,  1667,  1680,  1682,  1686,  1688,  1693,  1698,
    1703,  1710,  1712,  1716,  1719,  1723,  1729,  1731,  1735,  1736,
    1739,  1742,  1746,  1750,  1752,  1756,  1758,  1762,  1768,  1770,
    1781,  1792,  1810,  1823,  1843,  1855,  1862,  1871,  1878,  1885,
    1892,  1902,  1909,  1915,  1924,  1932,  1942,  1951,  1962,  1972,
    1973,  1975,  1978,  1980,  1990,  1997,  1998,  1999,  2005,  2009,
    2015,  2016,  2019,  2022,  2025,  2028,  2030,  2031,  2032,  2036,
    2038,  2042,  2046,  2047,  2054,  2056,  2058,  2062,  2066,  2074,
    2078,  2082,  2088,  2094,  2096,  2105,  2113,  2121,  2123,  2133,
    2134,  2137,  2140,  2144,  2150,  2156,  2164,  2170,  2172,  2177,
    2182,  2186,  2192,  2196,  2202,  2203,  2206,  2208,  2214,  2222,
    2230,  2240,  2252,  2254,  2257,  2261,  2263,  2273,  2285,  2286,
    2291,  2295,  2301,  2307,  2317,  2328,  2330,  2334,  2344,  2354,
    2364,  2371,  2383,  2392,  2393,  2395,  2398,  2400,  2404,  2410,
    2418,  2423,  2428,  2434,  2440,  2445,  2452,  2464,  2478,  2492,
    2508,  2513,  2520,  2522,  2526,  2528,  2532,  2534,  2538,  2539,
    2544,  2550,  2555,  2561,  2566,  2572,  2577,  2583,  2588,  2593,
    2597,  2601,  2605,  2608,  2612,  2617,  2622,  2624,  2628,  2629,
    2634,  2635,  2639,  2642,  2646,  2650,  2654,  2658,  2664,  2670,
    2676,  2680,  2686,  2689,  2697,  2703,  2711,  2717,  2720,  2724,
    2727,  2731,  2734,  2738,  2744,  2749,  2755,  2763,  2772,  2781,
    2789,  2796,  2803,  2809,  2810,  2814,  2820,  2821,  2823,  2824,
    2827,  2830,  2831,  2836,  2840,  2843,  2847,  2851,  2855,  2859,
    2863,  2867,  2871,  2875,  2879,  2883,  2885,  2887,  2889,  2891,
    2893,  2897,  2903,  2906,  2911,  2913,  2915,  2917,  2919,  2923,
    2927,  2931,  2935,  2941,  2947,  2949,  2951,  2953,  2955,  2959,
    2963,  2964,  2966,  2968,  2970,  2974,  2978,  2981,  2983,  2987,
    2991,  2995,  2997,  3008,  3018,  3031,  3043,  3056,  3068,  3083,
    3097,  3098,  3100,  3102,  3106,  3109,  3113,  3117,  3121,  3123,
    3125,  3127,  3129,  3131,  3133,  3135,  3137,  3139,  3141,  3142,
    3145,  3150,  3156,  3162,  3168,  3174,  3180,  3182,  3184,  3186,
    3188,  3190,  3192,  3194,  3196,  3198,  3200,  3202,  3204,  3206,
    3208,  3210,  3212,  3214,  3216,  3218,  3220,  3222,  3224,  3226,
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
    3428,  3432,  3438,  3442,  3448,  3450,  3455,  3461,  3463,  3467,
    3469,  3471,  3473,  3475,  3477,  3479,  3481,  3483,  3497,  3499,
    3501,  3503,  3505,  3507,  3509,  3513,  3519,  3524,  3529,  3530,
    3533,  3536,  3538
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     338,     0,    -1,   374,   331,    -1,   374,   331,   338,    -1,
       3,    -1,     3,   332,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   166,    -1,   339,    24,
     339,    -1,   339,    25,   339,    -1,   339,    26,   339,    -1,
     339,    27,   339,    -1,   339,    28,   339,    -1,   339,    29,
     339,    -1,    25,   339,    -1,   333,   339,   334,    -1,   339,
      12,   339,    -1,   339,    10,   339,    -1,   339,    11,   339,
      -1,   339,    21,   339,    -1,   339,    22,   339,    -1,   339,
      30,   339,    -1,   339,    23,   339,    -1,   339,    32,   339,
      -1,   339,    31,   339,    -1,    18,   339,    -1,    17,   339,
      -1,   339,    20,   339,    -1,    -1,   339,    20,   333,   340,
     375,   334,    -1,    -1,   339,    20,    39,   333,   341,   375,
     334,    -1,    -1,   339,    20,   200,   333,   342,   375,   334,
      -1,    -1,   339,    20,    37,   333,   343,   375,   334,    -1,
     339,    15,   166,    -1,   339,    15,    18,   166,    -1,   339,
      15,     6,    -1,   339,    15,    18,     6,    -1,     8,     9,
     339,    -1,   339,    19,   339,    42,   339,    -1,   339,    18,
      19,   339,    42,   339,    -1,   339,    -1,   339,   335,   344,
      -1,    -1,   344,    -1,    -1,   339,    16,   333,   346,   344,
     334,    -1,    -1,   339,    18,    16,   333,   347,   344,   334,
      -1,    -1,   339,    16,   333,   348,   375,   334,    -1,    -1,
     339,    18,    16,   333,   349,   375,   334,    -1,    -1,   244,
     333,   350,   375,   334,    -1,     3,   333,   345,   334,    -1,
     285,   333,    26,   334,    -1,   285,   333,   339,   334,    -1,
     286,   333,   339,   334,    -1,   287,   333,   339,   334,    -1,
     288,   333,   339,   334,    -1,   289,   333,   339,   334,    -1,
     283,   333,   339,   334,    -1,   283,   333,   339,   284,     4,
     334,    -1,    -1,   302,   333,   334,   310,   333,   351,   382,
     384,   334,    -1,    -1,   303,   333,   334,   310,   333,   352,
     382,   384,   334,    -1,    -1,   304,   333,   334,   310,   333,
     353,   382,   384,   334,    -1,    -1,   286,   333,   339,   334,
     310,   333,   354,   382,   384,   334,    -1,    -1,   285,   333,
      26,   334,   310,   333,   355,   382,   384,   334,    -1,    -1,
     285,   333,   339,   334,   310,   333,   356,   382,   384,   334,
      -1,    -1,   287,   333,   339,   334,   310,   333,   357,   382,
     384,   334,    -1,    -1,   288,   333,   339,   334,   310,   333,
     358,   382,   384,   334,    -1,    -1,   289,   333,   339,   334,
     310,   333,   359,   382,   384,   334,    -1,    -1,   305,   333,
     339,   334,   310,   333,   360,   382,   384,   334,    -1,    -1,
     305,   333,   339,   335,     5,   334,   310,   333,   361,   382,
     384,   334,    -1,    -1,   305,   333,   339,   335,     5,   335,
       4,   334,   310,   333,   362,   382,   384,   334,    -1,    -1,
     305,   333,   339,   335,     5,   335,     5,   334,   310,   333,
     363,   382,   384,   334,    -1,    -1,   306,   333,   339,   334,
     310,   333,   364,   382,   384,   334,    -1,    -1,   306,   333,
     339,   335,     5,   334,   310,   333,   365,   382,   384,   334,
      -1,    -1,   306,   333,   339,   335,     5,   335,     4,   334,
     310,   333,   366,   382,   384,   334,    -1,    -1,   306,   333,
     339,   335,     5,   335,     5,   334,   310,   333,   367,   382,
     384,   334,    -1,    -1,   307,   333,     5,   334,   310,   333,
     368,   382,   384,   334,    -1,    -1,   308,   333,   334,   310,
     333,   369,   382,   384,   334,    -1,    -1,   309,   333,   334,
     310,   333,   370,   382,   384,   334,    -1,   245,   333,   339,
     335,   339,   335,   339,   334,    -1,   245,   333,   339,   335,
     339,   334,    -1,   245,   333,   339,   117,   339,   334,    -1,
     245,   333,   339,   117,   339,   121,   339,   334,    -1,   246,
     333,   339,   334,    -1,   246,   333,   371,   339,   117,   339,
     334,    -1,   246,   333,   371,   117,   339,   334,    -1,   290,
     333,   339,   334,    -1,   291,   333,   339,   334,    -1,   292,
     333,   339,   334,    -1,   293,   333,   339,   335,   339,   334,
      -1,   294,   333,   339,   335,   339,   335,   339,   334,    -1,
     295,   333,   339,   335,   339,   334,    -1,   257,   333,   339,
     335,   339,   334,    -1,   258,   333,   339,   335,   339,   334,
      -1,   259,   333,   339,   335,   339,   335,   339,   334,    -1,
     260,   333,   339,   335,   339,   335,   339,   334,    -1,   261,
     333,   339,   334,    -1,   262,   333,   339,   335,   339,   334,
      -1,   263,   333,   339,   335,   339,   334,    -1,   264,   333,
     339,   335,   339,   334,    -1,   265,   333,   339,   334,    -1,
     266,   333,   339,   334,    -1,   267,   333,   339,   334,    -1,
     268,   333,   339,   335,   339,   334,    -1,   268,   333,   339,
     334,    -1,   269,   333,   339,   335,   339,   334,    -1,   270,
     333,   339,   334,    -1,   271,   333,   339,   335,   339,   334,
      -1,   272,   333,   334,    -1,   273,   333,   339,   334,    -1,
     274,   333,   339,   334,    -1,   275,   333,   339,   334,    -1,
     276,   333,   334,    -1,   256,   333,   334,    -1,   249,   333,
     339,   335,   339,   334,    -1,   250,   333,   339,   334,    -1,
     251,   333,   339,   334,    -1,   252,   333,   339,   334,    -1,
     253,   333,   339,   334,    -1,   254,   333,   339,   334,    -1,
     255,   333,   339,   334,    -1,   312,   333,   339,   335,   339,
     334,    -1,   313,   333,   339,   334,    -1,   314,   333,   339,
     334,    -1,   315,   333,   339,   334,    -1,   316,   333,   339,
     334,    -1,   317,   333,   339,   334,    -1,   318,   333,   339,
     334,    -1,   319,   333,   339,   334,    -1,   320,   333,   339,
     334,    -1,   321,   333,   339,   335,   339,   335,   339,   334,
      -1,   322,   333,   339,   335,   339,   335,   339,   334,    -1,
     323,   333,   339,   335,   339,   335,   339,   334,    -1,   324,
     333,   339,   335,   339,   334,    -1,   325,   333,   339,   335,
     339,   334,    -1,   326,   333,   339,   335,   339,   335,   339,
     334,    -1,   327,   333,   339,   335,   339,   335,   339,   334,
      -1,   328,   333,   339,   335,   339,   334,    -1,   328,   333,
     339,   335,   339,   335,   339,   335,   339,   334,    -1,   329,
     333,   339,   334,    -1,   329,   333,   339,   335,   339,   334,
      -1,   329,   333,   339,   335,   339,   335,   339,   334,    -1,
     330,   333,   339,   334,    -1,   277,   333,   339,    43,   466,
     334,    -1,   278,   333,   339,   335,   466,   334,    -1,   279,
     333,   339,   335,   339,   334,    -1,   280,   333,   339,   335,
     339,   334,    -1,   281,   333,   339,   335,   339,   335,   339,
     334,    -1,   339,    15,   282,    -1,   293,   333,   339,   335,
     339,   335,   339,   334,    -1,   293,   333,   339,   335,   339,
     335,   339,   335,   339,   334,    -1,   296,   333,   334,    -1,
     297,   333,   334,    -1,   298,   333,   334,    -1,   299,   333,
     334,    -1,   300,   333,   339,   334,    -1,   301,   333,   339,
     335,   339,   334,    -1,   151,    -1,   219,    -1,    57,    -1,
     247,   333,   339,   335,   372,   334,    -1,   248,   333,   339,
     335,   372,   334,    -1,   141,   339,   241,    -1,   141,   339,
      86,    -1,   141,   339,    87,    -1,   141,   339,    91,    -1,
     141,   339,    93,    -1,   141,   339,   242,    -1,   141,   339,
     125,    -1,   141,   339,   124,    -1,   141,   339,   127,    -1,
      69,   339,   373,   106,    -1,    69,   339,   373,   107,   339,
     106,    -1,    69,   373,   106,    -1,    69,   373,   107,   339,
     106,    -1,   238,   339,   218,   339,    -1,   373,   238,   339,
     218,   339,    -1,   339,    14,   339,    -1,   339,    18,    14,
     339,    -1,   339,    13,   339,    -1,   339,    18,    13,   339,
      -1,    64,    -1,    72,    -1,    73,    -1,   375,    -1,   207,
     393,   394,    -1,   207,   393,   394,   117,   397,   376,   377,
     381,   386,   389,   390,   391,    -1,   207,   393,   394,   139,
       3,   117,   397,   376,   377,   381,   386,   389,    -1,    -1,
     237,   339,    -1,    -1,   122,    55,   378,   380,    -1,   339,
     379,    -1,   378,   335,   339,   379,    -1,    -1,    41,    -1,
      94,    -1,    -1,   240,   187,    -1,    -1,   128,   339,    -1,
      -1,   311,    55,   383,    -1,     3,    -1,   383,   335,     3,
      -1,    -1,   171,    55,   385,    -1,     3,   379,    -1,   385,
     335,     3,   379,    -1,    -1,   171,    55,   387,    -1,   388,
      -1,   387,   335,   388,    -1,     3,   379,    -1,     3,   332,
       3,   379,    -1,     5,   379,    -1,    -1,   152,   339,    -1,
     152,   339,   335,   339,    -1,   152,   339,   154,   339,    -1,
      -1,   121,   223,    -1,   121,   198,    -1,   121,   223,   199,
     153,    -1,   121,   198,   199,   153,    -1,    -1,   139,   392,
      -1,     3,    -1,   392,   335,     3,    -1,    -1,   393,    37,
      -1,   393,    88,    -1,   393,    92,    -1,   393,   126,    -1,
     393,   204,    -1,   393,   194,    -1,   393,   202,    -1,   393,
     201,    -1,   395,    -1,   394,   335,   395,    -1,    26,    -1,
     339,   396,    -1,    43,     3,    -1,     3,    -1,    -1,   398,
      -1,   397,   335,   398,    -1,   399,    -1,   401,    -1,     3,
     396,   408,    -1,     3,   332,     3,   396,   408,    -1,   411,
     400,     3,    -1,   333,   397,   334,    -1,    43,    -1,    -1,
     398,   402,   143,   399,   406,    -1,   398,   204,   399,    -1,
     398,   204,   399,   170,   339,    -1,   398,   404,   403,   143,
     399,   407,    -1,   398,   163,   405,   143,   399,    -1,    -1,
     133,    -1,    68,    -1,    -1,   169,    -1,   150,    -1,   188,
      -1,   150,   403,    -1,   188,   403,    -1,    -1,    -1,   407,
      -1,   170,   339,    -1,   230,   333,   392,   334,    -1,   231,
     144,   409,   333,   410,   334,    -1,   134,   144,   409,   333,
     410,   334,    -1,   115,   144,   409,   333,   410,   334,    -1,
      -1,   121,   143,    -1,    -1,     3,    -1,   410,   335,     3,
      -1,   333,   375,   334,    -1,   412,    -1,    89,   413,   117,
       3,   376,   386,   389,   488,    -1,   413,   149,    -1,   413,
     176,    -1,   413,   134,    -1,    -1,    89,   413,   414,   117,
     397,   376,    -1,     3,   415,    -1,   414,   335,     3,   415,
      -1,    -1,   332,    26,    -1,    89,   413,   117,   414,   230,
     397,   376,    -1,   416,    -1,    90,   217,     3,    -1,    90,
     217,   136,   244,     3,    -1,   417,    -1,    65,   135,     3,
     170,     3,   333,   418,   334,    -1,    65,   135,   136,   244,
       3,   170,     3,   333,   418,   334,    -1,    65,   226,   135,
       3,   170,     3,   333,   418,   334,    -1,    65,   226,   135,
     136,   244,     3,   170,     3,   333,   418,   334,    -1,    65,
     135,     3,   170,     3,   230,   232,   333,   418,   334,    -1,
      65,   135,   136,   244,     3,   170,     3,   230,   232,   333,
     418,   334,    -1,    65,   226,   135,     3,   170,     3,   230,
     232,   333,   418,   334,    -1,    65,   226,   135,   136,   244,
       3,   170,     3,   230,   232,   333,   418,   334,    -1,    65,
     135,    77,     3,   170,     3,   333,   418,   334,    -1,    65,
     135,    77,   136,   244,     3,   170,     3,   333,   418,   334,
      -1,    65,   226,   135,    77,     3,   170,     3,   333,   418,
     334,    -1,    65,   226,   135,    77,   136,   244,     3,   170,
       3,   333,   418,   334,    -1,    65,   135,    77,     3,   170,
       3,   230,   232,   333,   418,   334,    -1,    65,   226,   135,
      77,     3,   170,     3,   230,   232,   333,   418,   334,    -1,
       3,    -1,   418,   335,     3,    -1,   419,    -1,   290,   333,
       3,   334,    -1,   291,   333,     3,   334,    -1,   292,   333,
       3,   334,    -1,   293,   333,     3,   335,     3,   334,    -1,
     420,    -1,    90,   135,     3,    -1,   421,   423,    -1,   220,
     217,     3,    -1,   220,   217,     3,   335,   422,    -1,     3,
      -1,   422,   335,     3,    -1,    -1,   423,    66,    -1,   423,
     183,    -1,   423,    47,    45,    -1,   423,    46,    45,    -1,
     424,    -1,   179,   217,     3,    -1,   425,    -1,    38,   217,
       3,    -1,    38,   217,     3,   332,     3,    -1,   426,    -1,
      34,   217,     3,    35,    63,     3,    70,   333,   339,   334,
      -1,    34,   217,     3,    35,    63,     3,   226,   333,   459,
     334,    -1,    34,   217,     3,    35,    63,     3,   116,   144,
     333,   456,   334,   180,     3,   333,   457,   334,   458,    -1,
      34,   217,     3,    35,    63,     3,    70,   333,   339,   334,
      18,   233,    -1,    34,   217,     3,    35,    63,     3,   116,
     144,   333,   456,   334,   180,     3,   333,   457,   334,   458,
      18,   233,    -1,    34,   217,     3,    35,    63,     3,   174,
     144,   333,   455,   334,    -1,    34,   217,     3,    90,    63,
       3,    -1,    34,   217,     3,   181,    63,     3,   210,     3,
      -1,    34,   217,     3,   102,    63,     3,    -1,    34,   217,
       3,    82,    63,     3,    -1,    34,   217,     3,   233,    63,
       3,    -1,    34,   217,     3,    35,    76,     3,   466,   461,
     427,    -1,    34,   217,     3,    90,    76,     3,    -1,    34,
     217,     3,    90,     3,    -1,    34,   217,     3,   181,    76,
       3,   210,     3,    -1,    34,   217,     3,   181,     3,   210,
       3,    -1,    34,   217,     3,   160,    76,     3,   466,   461,
     427,    -1,    34,   217,     3,   160,     3,   466,   461,   427,
      -1,    34,   217,     3,    67,    76,     3,     3,   466,   461,
     427,    -1,    34,   217,     3,    67,     3,     3,   466,   461,
     427,    -1,    -1,   112,    -1,    36,     3,    -1,   428,    -1,
     137,   432,   433,     3,   434,   235,   436,   429,   488,    -1,
     137,   432,   433,     3,   434,   375,    -1,    -1,    -1,   172,
     144,   223,   430,   431,    -1,     3,    20,   339,    -1,   431,
     335,     3,    20,   339,    -1,    -1,   432,   149,    -1,   432,
      85,    -1,   432,   126,    -1,   432,   134,    -1,   139,    -1,
      -1,    -1,   333,   435,   334,    -1,     3,    -1,   435,   335,
       3,    -1,   333,   438,   334,    -1,    -1,   436,   335,   437,
     333,   438,   334,    -1,   339,    -1,    95,    -1,   438,   335,
     339,    -1,   438,   335,    95,    -1,   137,   432,   433,     3,
     206,   439,   429,    -1,     3,    20,   339,    -1,     3,    20,
      95,    -1,   439,   335,     3,    20,   339,    -1,   439,   335,
       3,    20,    95,    -1,   440,    -1,   189,   432,   433,     3,
     434,   235,   436,   429,    -1,   189,   432,   433,     3,   206,
     439,   429,    -1,   189,   432,   433,     3,   434,   375,   429,
      -1,   441,    -1,   223,   442,   397,   206,   443,   376,   386,
     389,   488,    -1,    -1,   432,   149,    -1,   432,   134,    -1,
       3,    20,   339,    -1,     3,   332,     3,    20,   339,    -1,
     443,   335,     3,    20,   339,    -1,   443,   335,     3,   332,
       3,    20,   339,    -1,   181,   217,     3,   210,     3,    -1,
     444,    -1,    65,    78,   445,     3,    -1,    65,   195,   445,
       3,    -1,    90,    78,     3,    -1,    90,    78,   136,   244,
       3,    -1,    90,   195,     3,    -1,    90,   195,   136,   244,
       3,    -1,    -1,   136,   244,    -1,   446,    -1,    65,    84,
       3,    43,   466,    -1,    65,    84,     3,    43,   466,    95,
     339,    -1,    65,    84,     3,    43,   466,    18,   166,    -1,
      65,    84,     3,    43,   466,    70,   333,   339,   334,    -1,
      65,    84,     3,    43,   466,    18,   166,    70,   333,   339,
     334,    -1,   447,    -1,   231,     3,    -1,   231,    78,     3,
      -1,   448,    -1,    65,   452,   217,   445,     3,   333,   453,
     334,   449,    -1,    65,   452,   217,   445,     3,   332,     3,
     333,   453,   334,   449,    -1,    -1,   449,    40,    20,     5,
      -1,   449,    40,     5,    -1,   449,   170,     3,    89,     3,
      -1,   449,   170,     3,   213,     3,    -1,   449,   196,    55,
     232,   333,     3,   334,   197,     5,    -1,   449,   196,    55,
     177,   333,     3,   334,   333,   450,   334,    -1,   451,    -1,
     450,   335,   451,    -1,   196,     3,   235,   147,   215,     4,
     170,   164,     5,    -1,   196,     3,   235,   147,   215,   157,
     170,   164,     5,    -1,    65,   452,   217,   445,     3,   333,
     453,   334,   468,    -1,    65,   452,   217,   445,     3,   468,
      -1,    65,   452,   217,   445,     3,   332,     3,   333,   453,
     334,   468,    -1,    65,   452,   217,   445,     3,   332,     3,
     468,    -1,    -1,   211,    -1,   212,   211,    -1,   454,    -1,
     453,   335,   454,    -1,   174,   144,   333,   455,   334,    -1,
      63,     3,   174,   144,   333,   455,   334,    -1,   144,   333,
     392,   334,    -1,   135,   333,   392,   334,    -1,   119,   135,
     333,   392,   334,    -1,   119,   144,   333,   392,   334,    -1,
      70,   333,   339,   334,    -1,    63,     3,    70,   333,   339,
     334,    -1,   116,   144,   333,   456,   334,   180,     3,   333,
     457,   334,   458,    -1,   116,   144,   333,   456,   334,   180,
       3,   332,     3,   333,   457,   334,   458,    -1,    63,     3,
     116,   144,   333,   456,   334,   180,     3,   333,   457,   334,
     458,    -1,    63,     3,   116,   144,   333,   456,   334,   180,
       3,   332,     3,   333,   457,   334,   458,    -1,   226,   333,
     459,   334,    -1,    63,     3,   226,   333,   459,   334,    -1,
       3,    -1,   455,   335,     3,    -1,     3,    -1,   456,   335,
       3,    -1,     3,    -1,   457,   335,     3,    -1,    -1,   458,
     170,    89,    66,    -1,   458,   170,    89,   206,   166,    -1,
     458,   170,    89,   183,    -1,   458,   170,    89,   206,    95,
      -1,   458,   170,   223,    66,    -1,   458,   170,   223,   206,
     166,    -1,   458,   170,   223,   183,    -1,   458,   170,   223,
     206,    95,    -1,   458,   170,    89,   165,    -1,   458,   170,
     223,   165,    -1,   458,   156,   118,    -1,   458,   156,   203,
      -1,   458,   156,   173,    -1,   458,    80,    -1,   458,    18,
      80,    -1,   458,    80,   131,    81,    -1,   458,    80,   131,
     129,    -1,     3,    -1,   459,   335,     3,    -1,    -1,   460,
       3,   466,   461,    -1,    -1,   461,    18,   166,    -1,   461,
     166,    -1,   461,    95,     4,    -1,   461,    95,     5,    -1,
     461,    95,     7,    -1,   461,    95,     6,    -1,   461,    95,
     296,   333,   334,    -1,   461,    95,   297,   333,   334,    -1,
     461,    95,   298,   333,   334,    -1,   461,    95,    64,    -1,
     461,    95,   333,   339,   334,    -1,   461,    40,    -1,   461,
      40,   333,     5,   335,     5,   334,    -1,   461,    40,   333,
       5,   334,    -1,   461,    45,   333,     5,   335,     5,   334,
      -1,   461,    45,   333,     5,   334,    -1,   461,    45,    -1,
     461,   226,   144,    -1,   461,   226,    -1,   461,   174,   144,
      -1,   461,   144,    -1,   461,    71,     4,    -1,   461,    70,
     333,   339,   334,    -1,   461,    63,     3,   226,    -1,   461,
      63,     3,   174,   144,    -1,   461,    63,     3,    70,   333,
     339,   334,    -1,   461,    48,    44,    43,   333,   339,   334,
      49,    -1,   461,    48,    44,    43,   333,   339,   334,    50,
      -1,   461,    48,    44,    43,   333,   339,   334,    -1,   461,
      43,   333,   339,   334,    49,    -1,   461,    43,   333,   339,
     334,    50,    -1,   461,    43,   333,   339,   334,    -1,    -1,
     333,     5,   334,    -1,   333,     5,   335,     5,   334,    -1,
      -1,    56,    -1,    -1,   464,   224,    -1,   464,   243,    -1,
      -1,   465,    74,   206,     4,    -1,   465,    75,     4,    -1,
      59,   462,    -1,   209,   462,   464,    -1,   205,   462,   464,
      -1,   162,   462,   464,    -1,   140,   462,   464,    -1,   132,
     462,   464,    -1,    58,   462,   464,    -1,   178,   462,   464,
      -1,    96,   462,   464,    -1,   114,   462,   464,    -1,    98,
     462,   464,    -1,    99,    -1,   222,    -1,   216,    -1,    97,
      -1,   241,    -1,    74,   462,   465,    -1,   234,   333,     5,
     334,   465,    -1,    56,   462,    -1,   236,   333,     5,   334,
      -1,   221,    -1,    53,    -1,   161,    -1,   155,    -1,   208,
     463,   465,    -1,   214,   463,   465,    -1,   158,   463,   465,
      -1,   148,   463,   465,    -1,   105,   333,   467,   334,   465,
      -1,   206,   333,   467,   334,   465,    -1,    54,    -1,   227,
      -1,   228,    -1,     4,    -1,   467,   335,     4,    -1,   469,
     400,   375,    -1,    -1,   134,    -1,   189,    -1,   470,    -1,
     206,   195,     3,    -1,   206,   195,    95,    -1,   206,   471,
      -1,   472,    -1,   471,   335,   472,    -1,     8,    20,   339,
      -1,     8,     9,   339,    -1,   473,    -1,    65,   175,     3,
     333,   474,   334,    43,    52,   478,   106,    -1,    65,   175,
       3,   333,   474,   334,    52,   478,   106,    -1,    65,    10,
     189,   175,     3,   333,   474,   334,    43,    52,   478,   106,
      -1,    65,    10,   189,   175,     3,   333,   474,   334,    52,
     478,   106,    -1,    65,   120,     3,   333,   474,   334,   186,
     477,    43,    52,   478,   106,    -1,    65,   120,     3,   333,
     474,   334,   186,   477,    52,   478,   106,    -1,    65,    10,
     189,   120,     3,   333,   474,   334,   186,   477,    43,    52,
     478,   106,    -1,    65,    10,   189,   120,     3,   333,   474,
     334,   186,   477,    52,   478,   106,    -1,    -1,   475,    -1,
     476,    -1,   475,   335,   476,    -1,     3,   466,    -1,    16,
       3,   466,    -1,   168,     3,   466,    -1,   130,     3,   466,
      -1,   132,    -1,   140,    -1,   234,    -1,   214,    -1,    54,
      -1,   114,    -1,    96,    -1,    58,    -1,    99,    -1,   216,
      -1,    -1,   478,   479,    -1,   478,    52,   478,   106,    -1,
     478,   136,   478,   106,   136,    -1,   478,   239,   478,   106,
     239,    -1,   478,   146,   478,   106,   146,    -1,   478,   113,
     478,   106,   113,    -1,   478,    69,   478,   106,    69,    -1,
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
     333,    -1,   334,    -1,   335,    -1,   331,    -1,   332,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      17,    -1,   336,    -1,   285,    -1,   286,    -1,   287,    -1,
     288,    -1,   289,    -1,     8,    -1,   480,    -1,    90,   175,
       3,    -1,    90,   175,   136,   244,     3,    -1,    90,   120,
       3,    -1,    90,   120,   136,   244,     3,    -1,   481,    -1,
      60,     3,   333,   334,    -1,    60,     3,   333,   482,   334,
      -1,   483,    -1,   482,   335,   483,    -1,     5,    -1,     4,
      -1,     7,    -1,   166,    -1,     6,    -1,     3,    -1,     8,
      -1,   484,    -1,    65,   192,     3,   485,   486,   170,     3,
     121,   100,   190,    52,   478,   106,    -1,    51,    -1,    36,
      -1,   137,    -1,   223,    -1,    89,    -1,   487,    -1,    90,
     192,     3,    -1,    90,   192,   136,   244,     3,    -1,    34,
     192,     3,   102,    -1,    34,   192,     3,    82,    -1,    -1,
     185,    26,    -1,   185,   489,    -1,     3,    -1,   489,   335,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   408,   408,   409,   414,   421,   422,   423,   441,   449,
     457,   463,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   496,   496,   505,   505,   507,   507,   509,   509,
     513,   514,   515,   516,   517,   520,   521,   524,   525,   528,
     529,   532,   532,   533,   533,   534,   534,   542,   542,   550,
     550,   561,   565,   566,   567,   568,   569,   570,   571,   572,
     576,   576,   578,   578,   580,   580,   583,   583,   585,   585,
     587,   587,   589,   589,   591,   591,   593,   593,   596,   596,
     598,   598,   600,   600,   602,   602,   604,   604,   606,   606,
     608,   608,   610,   610,   613,   613,   615,   615,   617,   617,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   656,   657,   658,   659,   660,   661,
     662,   663,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   688,   689,   691,   692,   693,   695,
     696,   697,   698,   705,   712,   719,   723,   727,   733,   734,
     735,   738,   744,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   762,   764,   766,   768,   772,   780,   791,   792,
     795,   796,   799,   807,   815,   826,   836,   837,   850,   866,
     867,   868,   869,   872,   879,   887,   888,   889,   892,   893,
     896,   897,   901,   902,   905,   907,   911,   912,   915,   917,
     921,   922,   925,   926,   929,   935,   942,   951,   952,   953,
     954,   957,   958,   959,   960,   961,   964,   965,   968,   969,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   983,
     984,   985,   993,   999,  1000,  1001,  1004,  1005,  1008,  1009,
    1013,  1020,  1021,  1022,  1025,  1026,  1030,  1032,  1034,  1036,
    1038,  1042,  1043,  1044,  1047,  1048,  1051,  1052,  1055,  1056,
    1057,  1060,  1061,  1064,  1065,  1069,  1071,  1073,  1075,  1078,
    1079,  1082,  1083,  1086,  1090,  1100,  1108,  1109,  1110,  1111,
    1115,  1119,  1121,  1125,  1125,  1127,  1132,  1139,  1146,  1156,
    1163,  1170,  1180,  1188,  1198,  1206,  1215,  1224,  1234,  1242,
    1251,  1260,  1270,  1279,  1291,  1296,  1301,  1307,  1314,  1321,
    1328,  1338,  1345,  1354,  1361,  1367,  1375,  1381,  1389,  1390,
    1391,  1392,  1393,  1397,  1404,  1413,  1420,  1426,  1437,  1440,
    1446,  1452,  1459,  1465,  1472,  1478,  1484,  1490,  1496,  1502,
    1508,  1514,  1520,  1526,  1532,  1538,  1544,  1550,  1556,  1564,
    1565,  1566,  1569,  1577,  1583,  1596,  1597,  1597,  1600,  1608,
    1618,  1619,  1620,  1621,  1622,  1625,  1625,  1628,  1629,  1632,
    1642,  1655,  1656,  1656,  1659,  1660,  1661,  1662,  1665,  1669,
    1670,  1671,  1672,  1678,  1681,  1687,  1692,  1698,  1706,  1715,
    1716,  1717,  1721,  1732,  1744,  1755,  1770,  1775,  1779,  1780,
    1784,  1786,  1788,  1790,  1794,  1795,  1801,  1805,  1807,  1809,
    1811,  1813,  1818,  1822,  1823,  1827,  1836,  1846,  1850,  1851,
    1852,  1853,  1854,  1855,  1857,  1861,  1862,  1865,  1880,  1887,
    1902,  1915,  1930,  1943,  1944,  1945,  1948,  1949,  1952,  1953,
    1954,  1955,  1956,  1957,  1958,  1959,  1960,  1962,  1964,  1966,
    1968,  1970,  1974,  1975,  1978,  1979,  1982,  1983,  1986,  1987,
    1988,  1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,
    1998,  1999,  2000,  2001,  2002,  2003,  2006,  2007,  2010,  2010,
    2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,  2029,
    2030,  2031,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,
    2046,  2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,  2055,
    2056,  2057,  2058,  2061,  2062,  2063,  2066,  2067,  2070,  2071,
    2072,  2075,  2076,  2077,  2081,  2082,  2083,  2084,  2085,  2086,
    2087,  2088,  2089,  2090,  2091,  2092,  2093,  2094,  2095,  2096,
    2097,  2098,  2099,  2100,  2101,  2102,  2103,  2104,  2105,  2106,
    2107,  2108,  2109,  2110,  2111,  2112,  2113,  2116,  2117,  2120,
    2133,  2134,  2135,  2139,  2142,  2143,  2144,  2145,  2145,  2147,
    2148,  2156,  2160,  2166,  2172,  2179,  2186,  2192,  2198,  2205,
    2214,  2215,  2218,  2219,  2222,  2223,  2224,  2225,  2228,  2229,
    2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2244,  2245,
    2246,  2247,  2248,  2249,  2250,  2251,  2254,  2255,  2256,  2256,
    2256,  2257,  2257,  2257,  2257,  2257,  2257,  2258,  2258,  2258,
    2258,  2258,  2258,  2258,  2258,  2258,  2259,  2259,  2259,  2259,
    2259,  2259,  2259,  2260,  2260,  2260,  2260,  2261,  2261,  2261,
    2261,  2261,  2261,  2261,  2261,  2261,  2261,  2261,  2261,  2262,
    2262,  2262,  2262,  2262,  2262,  2262,  2262,  2263,  2263,  2263,
    2263,  2263,  2263,  2263,  2263,  2264,  2264,  2264,  2264,  2264,
    2264,  2264,  2264,  2264,  2265,  2265,  2265,  2265,  2265,  2265,
    2265,  2265,  2266,  2266,  2266,  2267,  2267,  2267,  2267,  2267,
    2267,  2267,  2267,  2268,  2268,  2268,  2268,  2268,  2268,  2268,
    2269,  2269,  2269,  2269,  2269,  2269,  2269,  2270,  2270,  2270,
    2270,  2271,  2271,  2271,  2271,  2271,  2271,  2271,  2271,  2271,
    2271,  2271,  2271,  2272,  2272,  2272,  2272,  2272,  2273,  2280,
    2284,  2290,  2296,  2302,  2314,  2318,  2324,  2332,  2333,  2336,
    2337,  2338,  2339,  2340,  2341,  2342,  2349,  2353,  2361,  2362,
    2365,  2366,  2367,  2370,  2374,  2380,  2389,  2397,  2408,  2409,
    2410,  2413,  2414
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
  "FJSON_SEARCH", "FJSON_OBJECT", "FJSON_ARRAY", "FJSON_ARRAYAGG", "';'",
  "'.'", "'('", "')'", "','", "'='", "$accept", "stmt_list", "expr", "@1",
  "@2", "@3", "@4", "val_list", "opt_val_list", "@5", "@6", "@7", "@8",
  "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18",
  "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26", "@27", "@28",
  "@29", "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_window_partition",
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
  "@30", "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@31", "insert_vals",
  "insert_asgn_list", "replace_stmt", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_table_options", "shard_range_list", "shard_range_def",
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@32", "column_atts", "opt_length", "opt_binary",
  "opt_uz", "opt_csc", "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr",
  "create_procedure_stmt", "opt_proc_params", "proc_param_list",
  "proc_param", "proc_return_type", "proc_body_skip", "proc_body_any",
  "drop_procedure_stmt", "call_stmt", "call_arg_list", "call_arg",
  "create_trigger_stmt", "trigger_timing", "trigger_event",
  "drop_trigger_stmt", "opt_returning", "returning_col_list", 0
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
     576,    59,    46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   337,   338,   338,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   340,   339,   341,   339,   342,   339,   343,   339,
     339,   339,   339,   339,   339,   339,   339,   344,   344,   345,
     345,   346,   339,   347,   339,   348,   339,   349,   339,   350,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     351,   339,   352,   339,   353,   339,   354,   339,   355,   339,
     356,   339,   357,   339,   358,   339,   359,   339,   360,   339,
     361,   339,   362,   339,   363,   339,   364,   339,   365,   339,
     366,   339,   367,   339,   368,   339,   369,   339,   370,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   371,   371,
     371,   339,   339,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   339,   339,   339,   339,   373,   373,   339,   339,
     339,   339,   339,   339,   339,   374,   375,   375,   375,   376,
     376,   377,   377,   378,   378,   379,   379,   379,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   385,   385,
     386,   386,   387,   387,   388,   388,   388,   389,   389,   389,
     389,   390,   390,   390,   390,   390,   391,   391,   392,   392,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   394,
     394,   394,   395,   396,   396,   396,   397,   397,   398,   398,
     399,   399,   399,   399,   400,   400,   401,   401,   401,   401,
     401,   402,   402,   402,   403,   403,   404,   404,   405,   405,
     405,   406,   406,   407,   407,   408,   408,   408,   408,   409,
     409,   410,   410,   411,   374,   412,   413,   413,   413,   413,
     412,   414,   414,   415,   415,   412,   374,   416,   416,   374,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   418,   418,   418,   419,   419,   419,
     419,   374,   420,   374,   421,   421,   422,   422,   423,   423,
     423,   423,   423,   374,   424,   374,   425,   425,   374,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   427,
     427,   427,   374,   428,   428,   429,   430,   429,   431,   431,
     432,   432,   432,   432,   432,   433,   433,   434,   434,   435,
     435,   436,   437,   436,   438,   438,   438,   438,   428,   439,
     439,   439,   439,   374,   440,   440,   440,   374,   441,   442,
     442,   442,   443,   443,   443,   443,   374,   374,   444,   444,
     374,   374,   374,   374,   445,   445,   374,   446,   446,   446,
     446,   446,   374,   447,   447,   374,   448,   448,   449,   449,
     449,   449,   449,   449,   449,   450,   450,   451,   451,   448,
     448,   448,   448,   452,   452,   452,   453,   453,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   455,   455,   456,   456,   457,   457,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   459,   459,   460,   454,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   462,   462,   462,   463,   463,   464,   464,
     464,   465,   465,   465,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   467,   467,   468,
     469,   469,   469,   374,   470,   470,   470,   471,   471,   472,
     472,   374,   473,   473,   473,   473,   473,   473,   473,   473,
     474,   474,   475,   475,   476,   476,   476,   476,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   478,   478,
     478,   478,   478,   478,   478,   478,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   374,
     480,   480,   480,   480,   374,   481,   481,   482,   482,   483,
     483,   483,   483,   483,   483,   483,   374,   484,   485,   485,
     486,   486,   486,   374,   487,   487,   374,   374,   488,   488,
     488,   489,   489
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
       4,     6,     8,     4,     6,     6,     6,     6,     8,     3,
       8,    10,     3,     3,     3,     3,     4,     6,     1,     1,
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
       8,    10,     9,    11,    10,    12,    11,    13,     9,    11,
      10,    12,    11,    12,     1,     3,     1,     4,     4,     4,
       6,     1,     3,     2,     3,     5,     1,     3,     0,     2,
       2,     3,     3,     1,     3,     1,     3,     5,     1,    10,
      10,    17,    12,    19,    11,     6,     8,     6,     6,     6,
       9,     6,     5,     8,     7,     9,     8,    10,     9,     0,
       1,     2,     1,     9,     6,     0,     0,     5,     3,     5,
       0,     2,     2,     2,     2,     1,     0,     0,     3,     1,
       3,     3,     0,     6,     1,     1,     3,     3,     7,     3,
       3,     5,     5,     1,     8,     7,     7,     1,     9,     0,
       2,     2,     3,     5,     5,     7,     5,     1,     4,     4,
       3,     5,     3,     5,     0,     2,     1,     5,     7,     7,
       9,    11,     1,     2,     3,     1,     9,    11,     0,     4,
       3,     5,     5,     9,    10,     1,     3,     9,     9,     9,
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
       1,     1,     1,     1,     3,     5,     4,     4,     0,     2,
       2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   473,   319,     0,   400,     0,     0,
     400,     0,   260,     0,   400,     0,     0,     0,   215,   314,
     326,   329,   351,   358,   363,   365,   368,   392,   423,   427,
     437,   446,   452,   455,   603,   611,   769,   774,   786,   793,
       0,     0,     0,     0,     0,   444,     0,     0,     0,     0,
       0,   444,   474,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   406,     0,     0,   406,     0,     0,
     606,   607,     0,     0,     0,     0,   453,     0,     1,     2,
     353,     0,     0,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   475,     0,   444,   323,
       0,   318,   316,   317,     0,   440,     0,   772,     0,   352,
     770,     0,   794,     0,   442,     0,   327,     0,   402,   403,
     404,   405,   401,     0,   364,     0,     0,     0,     0,   604,
     605,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   271,   261,   212,     0,   213,   214,   262,   263,   264,
      11,   266,   268,   267,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
     216,   269,   354,   404,   401,   275,     0,     0,   276,   278,
     279,   285,   454,     3,     0,     0,   359,   360,   797,   796,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   784,
     780,   779,   783,   781,   785,   782,   775,     0,   777,     0,
       0,   445,   438,     0,   620,     0,     0,     0,     0,   620,
     789,   788,     0,   439,     0,     0,     0,     0,     0,   321,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     407,     0,   407,   610,   609,   608,     0,    49,     0,    30,
      29,    18,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,     0,     0,     0,     0,   308,
       0,     0,     0,     0,   293,   292,   296,   300,   297,     0,
       0,   294,   284,     0,   362,   361,     0,     0,     0,     0,
       0,   382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,   776,     0,     0,     0,   585,   594,   553,   553,
     553,   553,   553,   578,   553,   575,     0,   553,   553,   553,
     556,   587,   556,   586,   553,   553,   553,     0,   556,   553,
     556,   577,   584,   576,   595,   596,     0,     0,   579,   447,
       0,     0,     0,     0,     0,   621,   622,     0,     0,     0,
       0,     0,   792,   790,   791,     0,     0,     0,     0,     0,
     600,   324,     0,   240,     0,   219,   323,   441,   773,   771,
     795,   443,   328,     0,     0,     0,   436,     0,     0,     5,
      47,    50,     0,    44,     0,     0,   204,     0,     0,     0,
       0,   190,   188,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,   183,   184,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    21,    22,
      20,   210,   208,    42,     0,    40,   179,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    31,    23,    24,
      26,    12,    13,    14,    15,    16,    17,    25,    28,    27,
     273,   219,     0,   270,   356,   355,   275,     0,     0,     0,
     280,   313,   283,     0,   219,   277,   294,   294,     0,   287,
       0,   295,     0,   282,     0,     0,     0,     0,   378,   375,
     381,   377,   520,     0,     0,     0,     0,   379,   778,   620,
     620,     0,   582,   558,   564,   561,   558,   558,     0,   558,
     558,   558,   557,   561,   561,   558,   558,   558,     0,   561,
     558,   561,     0,     0,     0,     0,     0,   624,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   601,   602,     0,   518,   470,   285,
     220,     0,   247,   219,   320,   322,     0,   395,   409,     0,
       0,   394,   395,     0,   395,     0,    61,     0,   202,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,   146,   147,   148,   149,   150,   151,     0,     0,     0,
       0,   127,     0,     0,     0,   131,   132,   133,   135,     0,
       0,   137,     0,   140,   141,   142,     0,     0,     0,     0,
       0,     0,    68,    62,    63,    64,    65,    66,    67,   117,
     118,   119,     0,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,   170,     0,   173,    43,    41,     0,
       0,   211,   209,    53,     0,     0,    38,    34,    36,     0,
     221,     0,     0,   308,   310,   310,   310,     0,     0,     0,
     240,   298,   299,     0,     0,   301,     0,     0,     0,     0,
       0,   520,   520,     0,   389,   520,   384,     0,     0,     0,
       0,     0,   570,   580,   572,   574,   597,     0,   573,   569,
     568,   591,   590,   567,   571,   566,     0,   588,   565,   589,
       0,     0,   449,     0,   448,   625,   627,   626,     0,   623,
       0,   344,     0,     0,     0,     0,     0,   346,     0,     0,
       0,     0,     0,   638,     0,     0,     0,     0,     0,     0,
     600,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,     0,     0,     0,   798,   325,     0,     0,     0,
     418,   408,     0,     0,   395,   425,   395,   426,    48,   206,
       0,   205,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    72,
      74,     0,     0,     0,     0,     0,   106,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,   230,
     219,   357,   281,     0,     0,     0,     0,   432,     0,     0,
     247,   290,   288,     0,     0,   286,   302,     0,     0,     0,
       0,     0,   389,   389,   520,     0,     0,   532,     0,   537,
       0,     0,     0,     0,     0,   390,   541,   522,     0,   539,
     386,   389,   376,   383,     0,     0,   554,     0,   559,   560,
       0,     0,   561,     0,   561,   561,   583,     0,     0,   632,
     635,   634,   636,   633,   628,   629,   631,   637,   630,     0,
       0,     0,     0,     0,     0,   330,     0,     0,     0,     0,
       0,     0,   638,     0,     0,     0,     0,     0,     0,     0,
       0,   518,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   458,   518,     0,   599,   225,   225,   241,   242,
     248,     0,   315,   420,   419,     0,     0,   410,   415,   414,
       0,   412,   798,   424,   203,   207,     0,   112,   111,     0,
     116,     0,     0,   191,   192,   145,   123,   124,     0,     0,
     128,   129,   130,   134,   136,   138,   174,   175,   176,   177,
       0,    69,    78,    80,    76,    82,    84,    86,   120,     0,
       0,   122,   187,   232,   232,   232,    88,     0,     0,    96,
       0,     0,   104,   232,   232,   152,     0,     0,     0,   164,
     165,     0,     0,   168,     0,   171,     0,    52,    56,     0,
       0,    46,     0,     0,     0,    33,     0,     0,   240,   221,
     309,     0,     0,     0,     0,     0,     0,   798,   303,     0,
     289,     0,     0,     0,   516,     0,   380,   388,   389,   521,
     391,     0,     0,     0,     0,     0,     0,   542,   523,   524,
     526,   525,   530,     0,     0,     0,     0,   540,   538,   385,
       0,     0,   638,     0,     0,   563,   592,   598,   593,   581,
       0,   450,     0,   638,     0,     0,     0,     0,     0,   345,
       0,   338,     0,     0,     0,     0,   646,   647,   648,   650,
     649,   768,   653,   654,   655,   761,   652,   651,   756,   757,
     758,   759,   760,   743,   656,   697,   688,   693,   638,   739,
     729,   700,   732,   675,   682,   679,   666,   722,   711,   638,
     719,   737,   673,   674,   744,   660,   667,   715,   731,   736,
     733,   694,   672,   741,   613,   671,   691,   684,   681,   638,
     730,   720,   661,   710,   749,   687,   701,   683,   702,   686,
     725,   708,   669,   638,   658,   742,   664,   726,   678,   705,
     717,   677,   638,   706,   703,   704,   712,   724,   714,   680,
     685,   709,   698,   699,   716,   748,   721,   690,   723,   676,
     750,   707,   695,   689,   696,   692,   735,   663,   657,   728,
     734,   668,   670,   659,   740,   718,   738,   713,   727,   665,
     662,   746,   638,   747,   745,   763,   764,   765,   766,   767,
     754,   755,   751,   752,   753,   762,   639,     0,     0,   332,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,     0,     0,     0,     0,   456,
     469,   477,   520,   226,   227,     0,   244,   246,     0,     0,
       0,   801,   799,   800,   396,     0,   411,     0,     0,   393,
       0,     0,   115,   194,   195,   196,   197,   200,   199,   201,
     193,   198,     0,     0,     0,   232,   232,   232,   232,   232,
     232,     0,     0,     0,   236,   236,   236,   232,     0,     0,
       0,   232,     0,     0,     0,   232,   236,   236,     0,     0,
       0,     0,     0,     0,     0,    54,    58,    39,    35,    37,
     225,   228,   231,   247,   230,   311,     0,     0,     0,   433,
     434,     0,   428,     0,   369,   494,     0,   492,     0,   370,
       0,   387,     0,     0,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,   638,     0,   555,   562,     0,
     638,     0,   334,   347,   348,   349,     0,     0,     0,     0,
     331,   612,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,     0,     0,     0,   458,     0,     0,     0,     0,
     484,     0,     0,     0,   481,     0,   480,     0,   490,     0,
       0,     0,   519,   225,   243,   250,   249,     0,     0,   422,
     421,   417,   416,     0,   113,   110,   125,   126,   178,   236,
     236,   236,   236,   236,   236,   180,     0,   121,     0,     0,
       0,     0,     0,   236,    90,     0,     0,   236,    98,     0,
       0,   236,     0,     0,   161,   162,   163,   166,   167,     0,
     172,   223,     0,     0,   222,   251,   240,   307,     0,   306,
     305,     0,   304,     0,     0,     0,   374,     0,   517,   534,
       0,   552,   536,     0,     0,     0,   545,   543,   527,   528,
     529,   531,     0,   638,     0,   615,   451,     0,   617,     0,
     342,   339,     0,   640,     0,     0,     0,     0,     0,   638,
     336,     0,     0,     0,   333,   457,   471,     0,     0,     0,
       0,     0,   482,   483,   259,   478,   460,     0,     0,     0,
     245,   802,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,   234,   233,     0,    71,    73,    75,     0,   232,
       0,     0,     0,   232,     0,     0,     0,   107,   109,     0,
     229,   225,     0,   256,   247,   312,   435,   372,     0,   495,
     493,     0,   550,   551,     0,     0,     0,   638,     0,   614,
     616,   350,   335,   645,   644,   641,   643,   642,     0,   343,
     341,     0,   485,     0,     0,   491,     0,   459,     0,     0,
       0,     0,     0,     0,   413,    79,    81,    77,    83,    85,
      87,   181,     0,   225,   237,    89,   236,    92,    94,    97,
     236,   100,   102,   105,   169,   224,   253,   252,     0,   217,
     218,     0,   533,   535,   549,   546,     0,   619,   787,   337,
       0,   479,     0,   461,   462,     0,     0,   398,     0,   235,
     238,     0,     0,   232,   232,     0,   232,   232,     0,     0,
     257,     0,   547,   548,   618,     0,     0,     0,     0,     0,
       0,   225,    91,   236,   236,    99,   236,   236,   255,   254,
     496,     0,     0,     0,     0,     0,     0,   399,   239,     0,
       0,     0,     0,   498,     0,     0,     0,     0,   498,     0,
       0,    93,    95,   101,   103,   371,   497,     0,     0,     0,
     486,     0,     0,   465,   463,     0,   512,     0,     0,     0,
     498,   498,     0,     0,   464,     0,   513,   373,     0,   509,
     511,   510,     0,     0,     0,   488,   487,     0,   466,   514,
     515,   499,   507,   501,     0,   503,   508,   505,     0,   498,
       0,   502,   500,   506,   504,   489,     0,     0,     0,     0,
       0,     0,     0,   467,   468
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   550,   889,  1065,  1066,  1064,   551,   552,   879,
    1060,   880,  1061,   559,  1233,  1234,  1235,  1527,  1525,  1526,
    1528,  1529,  1530,  1537,  1779,  1883,  1884,  1541,  1783,  1886,
    1887,  1545,  1243,  1244,   565,  1009,   324,    17,    18,   533,
    1069,  1561,  1496,  1694,  1268,  1534,  1773,  1670,  1844,   772,
    1178,  1179,   985,  1793,  1859,  1485,    72,   240,   241,   433,
     247,   248,   249,   453,   250,   450,   702,   451,   698,  1085,
    1086,   690,  1074,  1566,   251,    19,    56,   104,   299,    20,
      21,   956,   957,    22,    23,   685,    80,    24,    25,    26,
    1110,    27,   990,  1648,  1763,    64,   123,   545,   779,   994,
    1508,  1190,   777,    28,    29,    75,   694,    30,    87,    31,
      32,    33,  1489,  1942,  1943,    55,   979,   980,  1578,  1576,
    1911,  1935,  1285,   981,   914,   722,   733,   922,   923,   509,
     927,   768,   769,    34,    70,    71,    35,   514,   515,   516,
    1139,  1153,  1466,    36,    37,   277,   278,    38,   292,   525,
      39,  1182,  1503
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1450
static const yytype_int16 yypact[] =
{
   10477,   -42,  -106,   153,   519, -1450,   629, -1450,    99,   200,
   -1450,    24, -1450,   203,    34,    76,   163,   -80, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
     382,   385,   491,   183,   335,   390,   556,   558,   170,   561,
     568,   390, -1450,   370,   496,   434,    51,    60,    67,   642,
      87,   106,   109,   377,   510,   652,   661,   510,   407,   405,
     333, -1450,  5782,   670,   555,    36, -1450,   676, -1450, 10477,
      48,    90,   490,   350,    11,   -24,   442,   690,   645,   364,
     540,   384,   469,   387,   415,   713, -1450,   420,   390,   397,
     731, -1450, -1450, -1450,   -91, -1450,   495, -1450,   502, -1450,
   -1450,   511, -1450,   525, -1450,   529, -1450,   531, -1450, -1450,
   -1450, -1450, -1450,   760, -1450,   574,   809,  8002,  8002, -1450,
   -1450,   781,   267, -1450, -1450, -1450, -1450,   811,  8002,  8002,
    8002, -1450, -1450, -1450,  6444, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450,   460,   497,   504,   514,   524,
     533,   537,   587,   601,   613,   638,   662,   699,   722,   743,
     769,   823,   840,   848,   850,   867,   868,   886,   888,   889,
     890,   892,   893,   894,   903,   905,   906,   907,   911,   913,
     914,   921,   922,   923,   924,   925,   926,   927,   928,   932,
     933,   936,   937,   939,   940,   941,   942,   948,   949,   951,
     959,   963,   964,   965,   967,   968,   969,   970,   972,   973,
     974,   976,   977,   979,   983,   984,   985,   986,   989,   994,
     995,   997,  1002,  1004,  1007,  1011,  1018,  1019,  8002, 10817,
     -82, -1450,   654,    39,    44,    46,    33,   -54,   326, -1450,
   -1450,   853, -1450, -1450,  1106,  1266, -1450, -1450, -1450, -1450,
     499,    85,  1291,   436,  1293,    89,   503,  1296,  1363, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450,   327, -1450,  1371,
    1373, -1450, -1450, 10571,    30,  1375,   684,  1136,  1378,    30,
   -1450, -1450,   -30, -1450,   761,   422,  1138,  1380,  1358, -1450,
     172,  -154,    36,  1382,  1383,  1384,  1386,  1394,  1395,  1398,
    -142,  1399,  -131, 10440, 10440, -1450,  1400,  8002,  8002,  1140,
    1140, -1450,  8002, 10371,   329, -1450,  8002,  6113,  8002,  8002,
    8002,  8002,  8002,  8002,  8002,  8002,  8002,  1070,  8002,  8002,
    8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,
    8002,  8002,  8002,  1072,  8002,  8002,  8002,  1076,  8002,  8002,
    8002,  8002,  8002,  8002,  6612,  8002,  8002,  8002,  8002,  8002,
    8002,  8002,  8002,  8002,  8002,  1078,  1080,  1087,  1088,  8002,
    8002,  1089,  1090,  1091,  8002,  8002,  1421,  1095,  1100,  8002,
    8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,
    8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8408, -1450,
    8002,  8002,  8002,  8002,  8002,    22,  1103,   656,  8002,  6278,
    8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,  8002,
    8002,  8002,  1434, -1450,    36,  1435,  8002,  1437,  1441,   284,
    1111,   342,  1443,    36, -1450, -1450, -1450,   302, -1450,    36,
    1304,  1280, -1450,  1450, -1450, -1450,  1451,  1453,  1454,  1455,
    1458, -1450,  1463,  1464,  1465, 10571,  1468,  1260,  1469,  1470,
    1471, -1450, -1450,   230,  1142,  1143, -1450, -1450,  1151,  1151,
    1151,  1151,  1151, -1450,  1151, -1450,  1167,  1151,  1151,  1151,
    1445, -1450,  1445, -1450,  1151,  1151,  1151,  1169,  1445,  1151,
    1445, -1450, -1450, -1450, -1450, -1450,  1170,  1171, -1450,   428,
   10571,  1502,  1503,  1504,  1174,  1187, -1450,  -149,  1506,  1547,
    1381,  1218, -1450, -1450, -1450,  1385,  1550,  1392,  1319,  1561,
    -107, -1450,  8002,  1396,    36,  -159,   397, -1450, -1450, -1450,
   -1450, -1450, -1450,  1562,  1563,   -94, -1450,  1562,   -65, -1450,
    1864, -1450,  1234, 10440, 10394,   331, -1450,  8002,  8002,  1362,
     105, -1450, -1450, -1450,  8431,  6777,  2164,  2464,  2764,  8469,
    8515,  8538,  8561,  8584,  8607, -1450,  3064,  3364,  3664,  3964,
    8634,  4264,  4564,  4864,  8676,  8702,  8725,   521,  5164,  8748,
    5466, -1450,  8786,  8809,  8832, -1450, 10843,  5810,  5865,  5891,
    5914,  8359,  1236,  8855,  8878,  8901,  8924,  8951,  8974,  9001,
    9042,  5939,  5977,  6136, -1450, -1450, -1450, -1450,  9065,  6183,
    1261,  1262,  1263,   598,   929,  1240,  1265,  1267,  6469,  9103,
    9126,  9149,  9172,  9195,  9218,  9241,  9268,  6629,  6795,  6947,
    6970,  7124,  7240,  7302,  7571,   954,  9291, -1450,   879,  1059,
     978, 10919, 10919, -1450,    16, -1450, -1450,  1369,  8002,  8002,
    1245,  8002, 10869,  1246,  1247,  1249,  8002,  1517,   851,  1115,
    1161,   751,   751,   660,   660,   660,   660,   664, -1450, -1450,
   -1450,  -159,  1466, -1450, -1450,  1250,   383,  1440,  1442,  1472,
   -1450, -1450, -1450,     5,  -129,   326,  1280,  1280,  1475,  1444,
      36, -1450,  1476, -1450,   -10, 10571, 10571,  1607, -1450, -1450,
   -1450, -1450, -1450, 10571,  1608,  1402,  1403, -1450, -1450,    30,
      30,  1610, -1450, -1450, -1450, -1450, -1450, -1450,  1616, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,  1616, -1450,
   -1450, -1450,  1617,  1618,  1459,  1294,  8002, -1450, 10571, 10571,
   10571,  1438,    30,  1406,   171,  -146,  1456,  1625,   430,  1627,
     -85,  1628,  1637,  1474, -1450, -1450,  1645,   458, -1450,   853,
   10440,  1595,  1499,  -159, -1450, -1450,  1632,  -127, -1450,   365,
    1325, -1450,  -127,  1325,  1488,  8002, -1450,  8002, -1450,  8002,
    7186, 10417,  1327,  8002,  8002, -1450,  8002,  6209,  1521,  1521,
    8002, -1450, -1450, -1450, -1450, -1450, -1450,  8002,  8002,  8002,
    8002, -1450,  8002,  8002,  8002, -1450, -1450, -1450, -1450,  8002,
    8002, -1450,  8002, -1450, -1450, -1450, 10571, 10571,  8002,  8002,
    8002,  1659, -1450,  1354,  1355,  1357,  1359,  1360,  1364, -1450,
   -1450, -1450,  8002,  8002,  8002, -1450,  8002,  1335,  1340,  1343,
    1367,  1673,  1376,  1674,  1390,  1352,  1368,  8002, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450,  8002,  8002,  8002,  8002,
    8002,  8002,  8002,  8002, -1450,  8002, -1450, -1450, -1450,  8002,
    1362, 10919, 10919,  1481, 10894,  8002, -1450, -1450, -1450,  1362,
    1570,    36,  1690,   284,  1575,  1575,  1575,  8002,  1699,  1701,
    1396, -1450, -1450,    36,  8002,   -87,    36,  1372,  1565,  1566,
    1374, -1450, -1450, 10571, 10488, -1450, -1450,  1703,  1708,  1379,
    1387,   371,   330,   627,   330,   330, -1450,   374,   330,   330,
     330,   627,   627,   330,   330,   330,   392,   627,   330,   627,
    1388,  1389,  1644,  8002, 10440, -1450, -1450, -1450,   464, -1450,
    1393, -1450,  1401,  1408,  1411,  1415,   398, -1450,  1483,   171,
    1713,    80,  1668, -1450,  1611,  1507,   171,   159,  1583,  1728,
     -84,  1751,  1422,  1612,   447,  1425,  1430,  1626,  1447,   409,
   -1450,  1773,  1362,   505,  8002,  1592, -1450,  7108,  1634,  1779,
   -1450, -1450,  1781,  7224,  -114, -1450,  -114, -1450, -1450, 10440,
    7633, -1450,  8002, -1450,  8385,  1015,  9318,  8002,  8002,  1452,
    1457,  9341,  9382,  9420,  7687,  7749,  9443,  9466,  9489,  9512,
    9535,  9558,  1473,  1480,  9585,  9608,  8018,  1482,  1460,  1477,
    1485,  1490,  1491,  1492,  1038,  8067,  9635,  9658, -1450, -1450,
   -1450,  1493,   417,  1494,   419,  1496, -1450, -1450,  9681,  8090,
    8113,  8151,  9707,  9737,  8174,  8197,  1085,  1467,  1497,  1498,
    8002,  1362,  8002,  1184,  1362,  1362,  1362,  1508,  1730,  1660,
    -159, -1450, -1450,  1646,  1500,  1511,  1515, 10440,  1767,    28,
    1499, -1450, 10440,  8002,  1516, -1450, -1450,   -87,  8002,  1518,
    1520,  1787, 10488, 10488, -1450,  1639,  1803,  1524,  1525,  1527,
    1764,  1827,  1528,  1833,    95, -1450, -1450, -1450,  1694,  1695,
   -1450, 10488, -1450, -1450,  1655,   590, -1450,  1845, -1450, -1450,
    1656,  1861, -1450,  1866, -1450, -1450, -1450,  1538,  9760, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,   594,
     171,  1869,  1878,  1894,  1895, -1450,  1896,  1567,   425,  1568,
    1670,   171, -1450,  1225,  1804,  1572,   427,  1671,   171,  1903,
     168,   458, -1450,   245,  8002,  1574,  1576,  1580,  1905,  1905,
    1586,  1787,    10,   458, 10571, -1450,   -21,    52,  1585, -1450,
    1505,   444, -1450, -1450, 10440,  1687,  1901, -1450, -1450, 10440,
     431, -1450,  1592, -1450, -1450, 10440,  8002, -1450, -1450,  8002,
   -1450,  9783, 10463, -1450, -1450, -1450, -1450, -1450,  8002,  8002,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
    8002, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,  8002,
    8002, -1450, -1450,  1613,  1613,  1613, -1450,  1615,   763, -1450,
    1619,   802, -1450,  1613,  1613, -1450,  8002,  8002,  8002, -1450,
   -1450,  8002,  8002, -1450,  8002, -1450,  8002, -1450, -1450,  1588,
    1589,  1184,  1593,  1594,  1596, -1450,  8002,  8002,  1396,  1570,
   -1450,  1923,  1923,  1923,  8002,  8002,  1928,  1592, 10440,  1905,
   -1450,  9806,  1935,  1937, -1450,   474, -1450, -1450, 10488, -1450,
   -1450,  1938,  8002,  1939,  1899,     4,  8002, -1450, -1450, -1450,
   -1450, -1450, -1450,  1635,  1636,  1640,  8002, -1450, -1450, -1450,
     464,  1898, -1450,  1614,  1947, -1450,   627, -1450,   627,   627,
    8002, -1450,  1900, -1450,   476,  1624,  1633,  1642,  1643, -1450,
     171, -1450,   171,  1641,   480,  1629, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450,  1769,   171, -1450,
    1652,   482,  1653,  1738,   171,   484,  1663,  1835,  1844,  1667,
    9829,  1935,  1905,  1905, -1450,   488,   492,  1937,   494,   225,
   -1450, -1450, -1450, -1450, -1450,  1974, -1450, -1450,   505,  8002,
    8002, -1450, -1450,  1657, -1450,  7555, -1450,  7671,  1669, -1450,
    9852,  9875, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450,  9902,  9925,  9952,  1613,  1613,  1613,  1613,  1613,
    1613,  1577,  9975,  1946,  1822,  1822,  1822,  1613,  1672,  1675,
    1676,  1613,  1678,  1679,  1680,  1613,  1822,  1822,  9998, 10024,
   10054, 10077, 10100,  8336, 10123, -1450, -1450, -1450, -1450, -1450,
   10732,  -155, 10440,  1499,  1660, -1450,   517,   530,   551, 10440,
   10440,  1984, -1450,   579,  1988, -1450,   582, -1450,   584, -1450,
    2004, -1450,   588, 10146,   592,  1682,  1683,  1876, -1450, 10169,
    1688,  1689,  1692, 10192,   595, -1450,  1929, -1450, -1450, 10219,
   -1450,  2229, -1450, -1450, -1450, -1450,  2018,   603,   628,   171,
   -1450, -1450,  2529,  2829,  3129,  3429,  3729,  4029,  1979,   653,
     171, -1450,   171,  1706,   678,    10,  8002,  1711,  1715,  1787,
   -1450,   680,   683,   685, -1450,  2029, -1450,   687, -1450,   563,
    2031,  1986,   432,    52, -1450, 10440, 10440,  2050,  2051, -1450,
   10440, -1450, 10440,  7224, -1450, -1450, -1450, -1450, -1450,  1822,
    1822,  1822,  1822,  1822,  1822, -1450,  8002, -1450,  2052,  2001,
    1724,  1726,  1729,  1822, -1450,  1760,  1766,  1822, -1450,  1768,
    1770,  1822,  1743,  1748, -1450, -1450, -1450, -1450, -1450,  8002,
   -1450, -1450,  1897,  8002, -1450,  1964,  1396, -1450,  2083, -1450,
   -1450,  8002, -1450,  1854,  1908,  2086, -1450,  2087, -1450, -1450,
    2088,   790, -1450,  2096,  8002,  8002, -1450, -1450, -1450, -1450,
   -1450, -1450,  2039, -1450,  4329, -1450, -1450,  4629, -1450,  1771,
   -1450, -1450,   689, -1450,  2033,  1993,  1971,  1962,  1871, -1450,
   -1450,   759,   784,   171, -1450,   225, -1450, 10242,  1935,  1937,
     786,  1934, -1450, -1450, -1450, -1450, -1450,  2111,   -18,   -74,
   -1450, -1450,  2098,  1788,   788,  1790,  1791,  1792,  1793,  1794,
    1795, 10269, -1450,  1796,  2127, -1450, -1450, -1450,  1798,  1613,
    1800,  1805,  1806,  1613,  1808,  1809,  1810, -1450, -1450, 10292,
   -1450, 10732,   367,  1998,  1499, -1450, 10440, -1450,  2136, -1450,
   -1450,  1814, -1450, -1450,  1815, 10315, 10341, -1450,  4929, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,  5229, -1450,
   -1450,   791, -1450,   794,   796, -1450,  2147, -1450,  2148,  2150,
    1824,  1825,  8002,  2157, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450,  2158,    52,  1830, -1450,  1822, -1450, -1450, -1450,
    1822, -1450, -1450, -1450, -1450, -1450,  1963,  1972,  1905, -1450,
   -1450,  1837, -1450, -1450,   795, -1450,  5529, -1450, -1450, -1450,
    1992, -1450,   596, -1450, -1450,  2178,  2194, 10440,  2180, -1450,
   -1450,  2195,  1867,  1613,  1613,  1868,  1613,  1613,  2053,  2054,
    1870,  2200, -1450, -1450, -1450,  2201,  2205,  2200,  1875,  1877,
    8002,    52, -1450,  1822,  1822, -1450,  1822,  1822, -1450, -1450,
   -1450,   798,   817,  1879,   800,  1880,  2013, 10440, -1450,  1885,
    1886,  1887,  1888, -1450,  2220,  2221,  2200,  2200, -1450,  2030,
    2222, -1450, -1450, -1450, -1450,    73, -1450,  1892,   818,   820,
     234,  2225,   843, -1450, -1450,   -29,  2099,   306,   -37,  2200,
   -1450, -1450,  2149,  1996, -1450,  2030, -1450, -1450,   319, -1450,
   -1450, -1450,    14,   313,   862,   234,   234,  2091, -1450, -1450,
   -1450, -1450, -1450, -1450,   308, -1450, -1450, -1450,   315, -1450,
    2025, -1450, -1450, -1450, -1450,   234,    61,  2072,  2073,  2080,
    2084,  2245,  2246, -1450, -1450
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1450,  2173,   -72, -1450, -1450, -1450, -1450,  -724, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1450, -1450, -1450, -1450, -1450,  1478,  1936, -1450,  -177,  -532,
     998, -1450, -1176, -1450,   694, -1096, -1450, -1449, -1450,  -894,
   -1450,   770, -1076, -1450, -1450, -1139, -1450, -1450,  1834,  -233,
    -225,  1826,  -415,  1509, -1450, -1450,   228, -1450, -1450, -1450,
    1186,  1407,   303,   -55, -1450, -1450, -1450,  2174,  1740, -1450,
   -1450,  -957, -1450, -1450, -1450, -1450, -1450, -1450, -1450, -1450,
   -1049, -1450,  -613, -1450, -1450,   591,  2212,  1973, -1450,  1510,
   -1450,   633,  1741, -1450, -1450, -1450, -1450, -1450,    59, -1450,
   -1450, -1450,   667, -1450,   341, -1450,  1141,  1128, -1446, -1443,
   -1342, -1294, -1161, -1450,  -904,   354,   143,   132,  -710,  -343,
    1569,  -965, -1450, -1450, -1450,  2175, -1450,  -276, -1450,  1552,
     999,  -947, -1450, -1450, -1450, -1450,  1832, -1450, -1450, -1450,
   -1450, -1088, -1450
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -601
static const yytype_int16 yytable[] =
{
     239,  1497,  1148,   774,  1277,  1162,  1080,  1092,  1093,  1156,
    1488,  1111,   439,   521,   269,   270,   271,   272,   273,   274,
    1493,   441,   877,   931,   932,   897,   302,   764,   653,   937,
    1486,   939,    68,   510,   699,   434,   245,  -429,  1631,   245,
     654,  1637,  -431,  1286,  1287,   988,   511,  -430,  1275,   409,
     764,  1956,  1962,  -600,    99,   313,   314,   435,   988,   522,
     907,   998,  1309,   105,   543,  1987,   319,   320,   321,   440,
     107,  1828,   323,  1494,  1586,   547,   534,   535,   532,    76,
    1971,   753,   765,  1083,   958,  1692,  1671,  1672,   458,   432,
     110,  1945,   465,  1493,   254,   255,   279,  1682,  1683,  1298,
    1299,  1300,  1301,  1830,  1509,   765,   908,   523,   532,   112,
      95,    42,   114,    12,   256,   410,   411,   412,   413,   414,
     415,   416,   712,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,  1535,  1536,
    1573,   780,    12,  1084,   764,   965,  1494,  1546,  1547,   890,
      40,   280,   442,  1946,    77,  1058,    43,   297,  1831,  1302,
     512,   459,   900,    78,   909,   466,   408,   747,   100,   995,
     783,   997,   258,    90,   951,    41,   443,   275,  1587,  1972,
    1693,   303,   878,  1324,   754,   101,  1963,   959,   655,  1572,
    1288,   544,   259,   524,  1334,  1829,   106,  1973,   513,   765,
     102,  1471,   544,   108,  1957,  1335,   899,  1490,   989,   681,
    1765,  1766,  1767,  1768,  1769,  1770,   910,  -600,  1988,    69,
    1974,  1191,   793,   111,  1778,   766,   767,   103,  1782,  1947,
    1588,   257,  1786,   269,   270,   271,   272,   273,   274,  1581,
      12,   986,   113,  1948,   303,   115,   553,    91,   966,  1161,
     554,    79,  1952,   436,   560,   564,   566,   567,   568,   569,
     570,   571,   572,   573,   574,  1639,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   443,   592,   593,   594,   905,   596,   597,   598,   599,
     600,   601,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,  1824,   656,  1823,    92,   618,   619,   773,
    1150,  1495,   623,   624,  1946,  1476,    65,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,  1259,   898,   648,   649,
     650,   651,   652,  1632,  1633,   276,   662,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
    1276,  1477,   911,   912,   239,  1596,   246,  -429,   781,   246,
     915,   784,  -431,  1607,  1563,  1608,  1601,  -430,   438,  1975,
     116,  1192,   792,  1193,  1691,    81,   409,   286,    82,  1157,
    1947,  1303,  1304,  1305,   444,  1640,   275,  1882,  1473,   687,
    1969,  1885,  -323,  1981,  1948,   945,   946,   947,   129,   532,
    1983,  1612,  1316,  1151,  1318,  1319,   127,    66,   688,  1478,
      73,  1641,  1613,   294,  1959,   527,   432,   128,  1306,  1659,
    1660,  1661,  1662,  1663,  1664,   556,   557,   788,   789,   461,
     794,  1673,  1614,   919,   920,  1677,   744,  1501,  1970,  1681,
    1095,   290,   696,   893,  1919,  1920,  1615,  1921,  1922,   445,
     770,   952,   953,   954,   955,  1616,   291,  1760,  1750,  -291,
    1502,  1479,  1097,   962,  1982,  1098,   446,  1099,  1976,  1960,
    1100,  1984,   963,  1022,  1023,   790,   791,  1695,  1081,   447,
     697,  1087,  1158,   797,    83,  1101,  1977,   295,   745,   462,
     130,  1474,  1102,  1103,   298,  1617,   467,  -323,  1176,  1961,
    1177,  1619,   463,   117,   448,   689,    84,  1624,  1129,  1978,
     287,   971,  1130,   746,    85,   260,    86,  1104,   972,    44,
     449,   410,   411,   412,   413,   414,   415,   416,  1269,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,  1118,  1914,   296,   261,   528,    88,
    1131,    89,   456,  1132,    93,  1856,   468,   558,  1756,   558,
    1094,    94,   262,  1119,   973,   457,  1106,   974,  1133,   469,
     263,    96,  1166,  1757,  1938,  1939,   881,   882,  1642,   884,
    1857,  1167,   264,   975,   408,   118,  1134,    45,  1107,   316,
     317,    67,   976,    46,  1135,    74,  1108,  1964,   410,   411,
     412,   413,   414,   415,   416,  1855,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,    97,   977,  1311,  1940,   734,   119,  1322,  1722,    47,
     118,   739,  1312,   741,   120,   109,  1323,  1723,  1724,   121,
     265,    98,  1732,  1727,    48,   124,  1965,  1966,  1109,   122,
    1746,   472,   473,  1741,   125,  1742,  1070,  1880,   131,   658,
     659,   266,   660,   242,   944,   661,   692,   443,  1136,   252,
    1137,   119,   268,  1846,   978,  1985,   281,  1850,   283,   243,
     429,   430,   431,   282,    49,   430,   431,   284,  1138,   991,
     992,  1120,  1121,  1059,   244,  1116,  1117,    57,  1122,  1123,
     285,    50,  1067,   288,    51,   999,   293,  1000,  1860,  1890,
     289,  1004,  1005,   267,  1006,  1918,  1124,  1123,  1011,   298,
      52,    53,  1145,  1146,   300,  1012,  1013,  1014,  1015,   304,
    1016,  1017,  1018,  1172,  1173,    54,   305,  1019,  1020,    58,
    1021,  1237,  1238,  1240,  1241,   306,  1024,  1025,  1026,  1331,
    1146,  1469,  1146,   310,    59,  1506,  1507,  1539,  1540,   307,
    1034,  1035,  1036,   308,  1037,   309,  1808,   425,   426,   427,
     428,   429,   430,   431,   311,  1048,  1821,  1903,  1904,    68,
    1906,  1907,  1818,   325,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1794,  1057,    60,  1175,  1543,  1544,  1579,  1580,
    1602,  1146,   312,  1063,  1610,  1146,  1621,  1146,  1625,  1173,
     318,    61,  1634,  1635,    62,  1077,  1636,  1635,  1638,  1580,
     326,  1492,  1082,   723,   724,   725,   726,   327,   727,  1802,
    1803,   729,   730,   731,  1892,  1893,    63,   328,   735,   736,
     737,  1697,  1698,   740,   518,   818,   819,   329,   924,   925,
    1866,   928,   929,   930,  1699,  1698,   330,   933,   934,   935,
     331,  1128,   938,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,  1260,  1700,  1698,  1262,  1263,  1264,
     411,   412,   413,   414,   415,   416,   452,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,  1180,  1702,  1635,  1184,  1704,  1705,  1706,  1707,
     332,  1189,  1709,  1710,   901,   902,  1712,  1713,  1896,  1897,
    1195,   526,   850,   851,   333,  1201,  1202,  1730,  1146,   410,
     411,   412,   413,   414,   415,   416,   334,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,  1731,  1146,   410,   411,   412,   413,   414,   415,
     416,   335,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,  1740,  1146,   437,
    1261,   413,   414,   415,   416,   336,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,  1278,  1744,  1146,  1751,  1705,  1281,  1752,  1635,  1753,
    1635,  1755,  1707,  1812,  1146,   410,   411,   412,   413,   414,
     415,   416,   337,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,   338,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   412,   413,   414,   415,   416,   339,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,  1480,  1819,  1146,   410,   411,   412,   413,   414,
     415,   416,   340,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,  1820,  1146,
    1825,  1580,  1834,  1507,  1510,  1869,  1146,  1511,  1870,  1705,
    1871,  1707,  1923,  1924,  1928,  1924,  1522,  1523,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,  1524,  1925,
    1926,   454,  1950,  1924,  1951,  1924,   341,  1531,  1532,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   342,  1548,  1549,  1550,  1954,  1955,  1551,
    1552,   343,  1553,   344,  1554,   423,   424,   425,   426,   427,
     428,   429,   430,   431,  1560,  1562,  1979,  1924,  1075,  1076,
     345,   346,  1569,  1570,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,  1567,  1568,   347,
    1583,   348,   349,   350,  1589,   351,   352,   353,  1336,  1337,
    1338,  1339,  1340,  1341,  1593,  1342,   354,  1343,   355,   356,
     357,  1344,  1345,  1346,   358,  1347,   359,   360,  1599,  1348,
    1349,  1350,  1351,  1352,   361,   362,   363,   364,   365,   366,
     367,   368,  1353,   852,   853,   369,   370,  1354,  1355,   371,
     372,  1356,   373,   374,   375,   376,  1357,  1358,  1359,  1360,
    1361,   377,   378,  1362,   379,  1363,  1364,  1365,   874,   875,
    1366,  1367,   380,  1368,  1369,  1370,   381,   382,   383,  1371,
     384,   385,   386,   387,  1372,   388,   389,   390,  1373,   391,
     392,   455,   393,  1374,  1375,  1376,   394,   395,   396,   397,
    1377,  1378,   398,  1379,  1380,  1381,  1382,   399,   400,  1383,
     401,  1384,  1385,  1386,  1387,   402,  1388,   403,  1389,  1390,
     404,  1391,  1392,  1393,   405,  1394,  1395,  1396,  1397,  1198,
    1199,   406,   407,  1398,   460,  1399,   464,  1400,  1401,   470,
    1402,  1403,  1404,  1405,  1406,  1407,   471,  1408,  1409,  1410,
    1411,  1412,  1228,  1229,   474,  1413,   475,  1414,   517,  1415,
     519,   520,   529,   530,   531,   536,   537,   538,  1416,   539,
    1417,  1418,  1419,  1420,  1421,  1422,  1423,   540,   541,  1424,
    1425,   542,   546,   549,   575,  1426,   591,  1427,  1428,  1429,
     595,  1430,   614,  1431,   615,  1432,  1433,  1434,  1435,  1253,
    1254,   616,   617,   620,   621,   622,   625,  1645,  1646,   626,
    1436,  1437,  1438,  1650,   627,  1652,   657,   680,   682,  1439,
     684,  1440,  1441,  1442,   686,   691,   693,   700,  1443,   701,
    1444,  1445,  1446,   703,   704,  1447,   705,   706,   707,  1448,
    1449,   708,  1450,  1451,  1452,  1453,   709,   710,   711,  1454,
     714,   713,   715,   716,   717,   719,   720,   410,   411,   412,
     413,   414,   415,   416,   721,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     728,   732,   738,   742,   743,   748,   749,   750,   751,   755,
    1455,  1456,  1457,  1458,  1459,   410,   411,   412,   413,   414,
     415,   416,   752,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     756,   757,   758,   760,  1747,   759,  1460,  1461,  1462,  1463,
    1464,  1465,   761,   762,   763,   776,   778,   771,   786,    12,
     833,   847,   848,   849,   854,   855,   -55,   856,   883,   886,
     887,  1189,   888,   891,   894,   892,   895,   410,   411,   412,
     413,   414,   415,   416,  1771,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     913,   916,   917,   918,   904,   921,   896,  1789,   903,   906,
     926,  1791,   940,   941,   948,   942,   960,   943,   961,  1796,
     964,   967,  1336,  1337,  1338,  1339,  1340,  1341,   950,  1342,
     968,  1343,  1805,  1806,   969,  1344,  1345,  1346,   970,  1347,
     983,   984,   987,  1348,  1349,  1350,  1351,  1352,   993,  1499,
     988,  1003,  1008,  1027,  1028,  1029,  1353,  1030,  1038,  1031,
    1032,  1354,  1355,  1039,  1033,  1356,  1040,  1041,  1042,  1044,
    1357,  1358,  1359,  1360,  1361,  1046,  1043,  1362,   -57,  1363,
    1364,  1365,  1068,  1071,  1366,  1367,  1073,  1368,  1369,  1370,
    1045,  1047,  1078,  1371,  1079,  1088,  1112,  1091,  1372,  1089,
    1090,  1113,  1373,  1114,  1127,  1147,  1149,  1374,  1375,  1376,
    1152,  1115,  1125,  1126,  1377,  1378,  1140,  1379,  1380,  1381,
    1382,  1160,  1154,  1383,  1141,  1611,  1385,  1386,  1387,  1155,
    1388,  1142,  1389,  1390,  1143,  1391,  1392,  1393,  1144,  1394,
    1395,  1396,  1397,  1159,  1163,  1164,  1165,  1398,  1168,  1399,
    1877,  1400,  1401,  1169,  1402,  1403,  1404,  1405,  1406,  1407,
    1170,  1408,  1409,  1410,  1411,  1412,  1174,  1181,  1185,  1413,
    1171,  1414,  1186,  1415,  1187,  1266,  1203,  1274,  1267,  1270,
    1284,  1204,  1416,  1222,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,  1255,  1256,  1424,  1425,  1289,  1290,  1216,  1294,  1426,
    1223,  1427,  1428,  1429,  1217,  1430,  1221,  1431,  1224,  1432,
    1433,  1434,  1435,  1225,  1226,  1227,  1236,  1239,  1917,  1242,
    1295,  1257,  1258,  1271,  1436,  1437,  1438,  1297,  1307,  1308,
    1500,  1310,  1265,  1439,  1272,  1440,  1441,  1442,  1273,  1279,
    1313,  1282,  1443,  1283,  1444,  1445,  1446,  1291,  1292,  1447,
    1293,  1296,  1314,  1448,  1449,  1315,  1450,  1451,  1452,  1453,
    1317,  1320,  1325,  1454,   410,   411,   412,   413,   414,   415,
     416,  1326,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,  1327,  1328,  1329,
    1330,  1332,  1333,  1470,  1467,  1468,  1472,  1481,  1484,  1482,
    1504,  1665,  1666,  1483,  1455,  1456,  1457,  1458,  1459,  1487,
    1498,  1505,  1555,  1556,  1533,  1538,  1565,  1557,  1558,  1542,
    1559,  1571,  1336,  1337,  1338,  1339,  1340,  1341,  1575,  1342,
    1577,  1343,  1585,  1582,  1584,  1344,  1345,  1346,  1597,  1347,
    1595,  1598,  1600,  1348,  1349,  1350,  1351,  1352,  1603,  1618,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,  1604,  1590,  1591,
    1623,  1354,  1355,  1592,  1609,  1356,  1605,  1643,  1606,  1627,
    1357,  1358,  1359,  1360,  1361,  1620,  1622,  1362,  1628,  1363,
    1364,  1365,  1647,  1669,  1366,  1367,  1626,  1368,  1369,  1370,
    1629,  1668,  1653,  1371,  1701,  1674,  1703,  1708,  1372,  1675,
    1676,  1678,  1373,  1679,  1680,  1714,  1715,  1374,  1375,  1376,
    1716,  1729,  1718,  1719,  1377,  1378,  1720,  1379,  1380,  1381,
    1382,  1739,  1754,  1383,  1758,  1725,  1385,  1386,  1387,  1743,
    1388,  1759,  1389,  1390,  1748,  1391,  1392,  1393,  1749,  1394,
    1395,  1396,  1397,  1761,  1762,  1772,  1774,  1398,  1775,  1399,
    1776,  1400,  1401,  1777,  1402,  1403,  1404,  1405,  1406,  1407,
    1780,  1408,  1409,  1410,  1411,  1412,  1781,  1787,  1784,  1413,
    1785,  1414,  1788,  1415,  1790,  1792,  1795,  1797,  1798,  1799,
    1800,  1807,  1416,  1801,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,  1804,  1813,  1424,  1425,  1811,  1814,  1815,  1816,  1426,
    1817,  1427,  1428,  1429,  1826,  1430,  1827,  1431,  1832,  1432,
    1433,  1434,  1435,  1833,  1835,  1836,  1837,  1838,  1839,  1840,
    1843,  1842,  1845,  1847,  1436,  1437,  1438,  1858,  1848,  1861,
    1849,  1851,  1852,  1439,  1853,  1440,  1441,  1442,  1862,  1863,
    1872,  1873,  1443,  1874,  1444,  1445,  1446,  1875,  1876,  1447,
    1878,  1879,  1888,  1448,  1449,  1881,  1450,  1451,  1452,  1453,
    1891,  1889,  1895,  1454,   410,   411,   412,   413,   414,   415,
     416,  1898,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,  1899,  1901,   785,
    1900,  1902,  1905,  1910,  1912,  1635,  1908,  1909,  1913,  1915,
    1930,  1916,  1927,  1929,  1455,  1456,  1457,  1458,  1459,  1931,
    1932,  1933,  1934,  1936,  1937,  1949,  1941,  1944,  1953,  1956,
    1958,  1967,  1336,  1337,  1338,  1339,  1340,  1341,  1980,  1342,
    1986,  1343,  1989,  1990,  1991,  1344,  1345,  1346,  1992,  1347,
    1993,  1994,   253,  1348,  1349,  1350,  1351,  1352,  1696,   555,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,  1564,  1644,   695,
     683,  1354,  1355,  1280,   301,  1356,   775,  1010,   982,   126,
    1357,  1358,  1359,  1360,  1361,   548,  1764,  1362,   782,  1363,
    1364,  1365,  1745,   996,  1366,  1367,  1968,  1368,  1369,  1370,
    1072,  1491,  1475,  1371,   949,   718,   315,   936,  1372,  1594,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1728,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   798,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1733,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   799,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1734,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   800,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1735,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   807,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1736,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   808,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1737,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   809,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1738,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   810,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1809,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   812,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1810,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   813,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1867,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,   814,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1868,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,     0,     0,   410,   411,   412,   413,
     414,   415,   416,     0,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   820,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1336,  1337,  1338,  1339,  1340,  1341,     0,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1346,     0,  1347,
       0,     0,     0,  1348,  1349,  1350,  1351,  1352,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,  1353,     0,     0,     0,
       0,  1354,  1355,     0,     0,  1356,     0,     0,     0,     0,
    1357,  1358,  1359,  1360,  1361,     0,     0,  1362,     0,  1363,
    1364,  1365,     0,     0,  1366,  1367,     0,  1368,  1369,  1370,
       0,     0,     0,  1371,     0,     0,     0,     0,  1372,     0,
       0,     0,  1373,     0,     0,     0,     0,  1374,  1375,  1376,
       0,     0,     0,     0,  1377,  1378,     0,  1379,  1380,  1381,
    1382,     0,     0,  1383,     0,  1894,  1385,  1386,  1387,     0,
    1388,     0,  1389,  1390,     0,  1391,  1392,  1393,     0,  1394,
    1395,  1396,  1397,     0,     0,     0,     0,  1398,     0,  1399,
       0,  1400,  1401,     0,  1402,  1403,  1404,  1405,  1406,  1407,
       0,  1408,  1409,  1410,  1411,  1412,     0,     0,     0,  1413,
       0,  1414,     0,  1415,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,     0,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,     0,     0,  1424,  1425,     0,     0,     0,     0,  1426,
       0,  1427,  1428,  1429,     0,  1430,     0,  1431,     0,  1432,
    1433,  1434,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,  1437,  1438,     0,     0,     0,
       0,     0,     0,  1439,     0,  1440,  1441,  1442,     0,     0,
       0,     0,  1443,     0,  1444,  1445,  1446,     0,     0,  1447,
       0,     0,     0,  1448,  1449,     0,  1450,  1451,  1452,  1453,
       0,     0,     0,  1454,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   822,     0,     0,     0,     0,     0,   140,   141,     0,
       0,     0,     0,     0,  1455,  1456,  1457,  1458,  1459,   142,
     410,   411,   412,   413,   414,   415,   416,     0,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,     0,     0,
    1460,  1461,  1462,  1463,  1464,  1465,     0,     0,     0,     0,
     147,     0,     0,     0,   148,   410,   411,   412,   413,   414,
     415,   416,     0,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     0,     0,
       0,   410,   411,   412,   413,   414,   415,   416,   149,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,   150,   410,
     411,   412,   413,   414,   415,   416,     0,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,   152,   153,     0,   154,   410,   411,   412,
     413,   414,   415,   416,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,   238,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     0,     0,     0,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,   827,   410,   411,   412,   413,
     414,   415,   416,     0,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,     0,
     561,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,     0,
       0,     0,     0,   410,   411,   412,   413,   414,   415,   416,
     828,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,     0,     0,     0,   410,
     411,   412,   413,   414,   415,   416,   829,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,     0,     0,     0,     0,   830,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   842,     0,     0,     0,     0,   150,
       0,   132,   133,   134,   135,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   139,     0,     0,     0,
       0,     0,     0,   140,     0,     0,     0,     0,     0,     0,
       0,     0,   843,     0,     0,   663,     0,   664,     0,     0,
       0,     0,     0,     0,     0,     0,  1007,     0,     0,     0,
       0,     0,   563,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,     0,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     0,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   150,     0,   238,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,     0,     0,     0,     0,     0,     0,   140,
       0,   844,     0,     0,     0,     0,     0,     0,   665,   410,
     411,   412,   413,   414,   415,   416,     0,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,     0,     0,   145,   146,   846,     0,
       0,     0,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
       0,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,     0,
     150,   666,     0,     0,     0,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,     0,     0,     0,     0,     0,     0,   140,   602,   410,
     411,   412,   413,   414,   415,   416,     0,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   322,     0,   145,   146,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,     0,     0,   238,   150,     0,
     132,   133,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,     0,     0,     0,
       0,     0,   140,     0,   857,   410,   411,   412,   413,   414,
     415,   416,     0,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,     0,     0,   145,
     146,     0,     0,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   796,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   150,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   410,   411,   412,
     413,   414,   415,   416,   866,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     410,   411,   412,   413,   414,   415,   416,     0,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,     0,     0,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     0,     0,
     238,   132,   133,   134,   135,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   139,     0,     0,     0,
     867,     0,     0,   140,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,     0,     0,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,   412,   413,
     414,   415,   416,  1183,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,     0,
       0,     0,     0,     0,     0,     0,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,     0,     0,     0,     0,     0,     0,   140,
     410,   411,   412,   413,   414,   415,   416,     0,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,     0,   150,     0,     0,     0,     0,     0,
       0,     0,   868,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1001,   144,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,     0,   869,     0,     0,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,  1188,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     150,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   870,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,     0,     0,   238,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,     0,   871,     0,     0,     0,     0,
     140,   410,   411,   412,   413,   414,   415,   416,     0,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,     0,     0,   410,   411,   412,   413,   414,   415,   416,
    1649,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,     0,     0,     0,     0,     0,   140,   410,   411,   412,
     413,   414,   415,   416,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,   150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,  1194,
     144,     0,     0,   145,   146,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
     411,   412,   413,   414,   415,   416,  1651,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   150,   193,     0,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   873,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,     0,     0,   238,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,     0,  1208,     0,     0,     0,     0,   140,   410,   411,
     412,   413,   414,   415,   416,     0,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,   410,   411,   412,
     413,   414,   415,   416,  1209,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     410,   411,   412,   413,   414,   415,   416,     0,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   410,   411,   412,   413,   414,   415,   416,
       0,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   410,   411,   412,   413,   414,   415,   416,   150,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   410,   411,   412,
     413,   414,   415,   416,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,   412,   413,
     414,   415,   416,  1220,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   410,
     411,   412,   413,   414,   415,   416,     0,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,   410,   411,   412,   413,   414,
     415,   416,  1230,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,  1246,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,  1247,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
     411,   412,   413,   414,   415,   416,  1248,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,     0,     0,  1196,     0,     0,  1251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   410,   411,   412,   413,   414,
     415,   416,  1252,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,     0,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,     0,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   410,   411,   412,
     413,   414,   415,   416,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,   831,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
       0,  1689,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,   412,   413,
     414,   415,   416,   832,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,  1197,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,   647,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,   795,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,   412,   413,
     414,   415,   416,   801,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   410,
     411,   412,   413,   414,   415,   416,     0,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,   802,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,   803,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,   804,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,   805,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   410,   411,   412,   413,   414,   415,
     416,   806,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
       0,   410,   411,   412,   413,   414,   415,   416,   811,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   410,   411,   412,   413,   414,   415,
     416,     0,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
     815,   410,   411,   412,   413,   414,   415,   416,     0,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,   816,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,   817,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,   821,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,   412,   413,   414,   415,   416,
     823,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   410,   411,   412,   413,
     414,   415,   416,   824,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   410,
     411,   412,   413,   414,   415,   416,   825,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,   834,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,   835,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,   836,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,   837,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,   410,   411,
     412,   413,   414,   415,   416,   838,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,   839,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,   410,   411,
     412,   413,   414,   415,   416,   840,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,     0,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,   841,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,   845,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     410,   411,   412,   413,   414,   415,   416,   858,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   410,   411,   412,   413,   414,   415,   416,
     859,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   410,   411,   412,   413,
     414,   415,   416,   860,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   410,
     411,   412,   413,   414,   415,   416,   861,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,   862,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,   863,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,   864,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,     0,     0,     0,     0,   410,   411,   412,   413,   414,
     415,   416,   865,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,   876,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,     0,     0,     0,     0,   410,   411,   412,   413,   414,
     415,   416,  1200,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,  1205,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   410,   411,   412,   413,   414,   415,   416,     0,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,  1206,   410,   411,   412,
     413,   414,   415,   416,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,     0,     0,     0,     0,   410,   411,   412,
     413,   414,   415,   416,  1207,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     410,   411,   412,   413,   414,   415,   416,  1210,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   410,   411,   412,   413,   414,   415,   416,
    1211,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   410,   411,   412,   413,
     414,   415,   416,  1212,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   410,
     411,   412,   413,   414,   415,   416,  1213,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,  1214,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,  1215,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,  1218,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,  1219,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,  1231,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,  1232,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   410,   411,
     412,   413,   414,   415,   416,  1245,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,     0,     0,     0,   410,   411,   412,   413,   414,   415,
     416,  1249,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
       0,     0,     0,     0,   410,   411,   412,   413,   414,   415,
     416,  1250,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   410,   411,   412,
     413,   414,   415,   416,  1321,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     410,   411,   412,   413,   414,   415,   416,  1512,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   410,   411,   412,   413,   414,   415,   416,
    1574,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   410,   411,   412,   413,
     414,   415,   416,  1630,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   410,
     411,   412,   413,   414,   415,   416,  1654,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,  1655,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,     0,     0,     0,     0,   410,
     411,   412,   413,   414,   415,   416,  1656,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,  1657,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,     0,     0,     0,     0,   410,
     411,   412,   413,   414,   415,   416,  1658,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   410,   411,   412,   413,   414,   415,   416,  1667,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   410,   411,   412,   413,   414,
     415,   416,  1684,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     0,     0,
       0,   410,   411,   412,   413,   414,   415,   416,  1685,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,     0,     0,
       0,   410,   411,   412,   413,   414,   415,   416,  1686,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   410,   411,   412,   413,   414,   415,
     416,  1687,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   410,   411,   412,
     413,   414,   415,   416,  1688,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     410,   411,   412,   413,   414,   415,   416,  1690,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   410,   411,   412,   413,   414,   415,   416,
    1711,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,     0,     0,     0,     0,
       0,     0,     0,  1717,     0,     0,  1095,     0,     0,     0,
       0,     1,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,  1096,     0,  1721,     0,  1097,     0,
       0,  1098,     0,  1099,     0,     0,  1100,     3,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     0,  1513,
    1514,  1101,     0,  1726,  1515,     0,  1516,     0,  1102,  1103,
       0,     0,     0,     0,     0,     0,     5,     6,     0,     0,
       0,     0,     0,     0,     0,     0,  1822,     0,     0,     0,
       0,     0,     0,  1104,     0,     0,     0,  1517,  1518,     0,
    1519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1105,     0,     0,  1841,     0,     0,     0,     0,     0,   322,
       0,     0,   787,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   477,  1854,   478,     0,   479,
     480,     0,  1106,     0,     0,  1002,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   481,     0,     0,     0,  1864,
       0,     0,     0,     0,  1107,     0,     8,     0,     9,     0,
       0,     0,  1108,     0,     0,     0,    10,   482,   483,   484,
     485,     0,     0,     0,     0,  1865,   486,     0,     0,     0,
       0,     0,     0,    11,    12,   487,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
      14,     0,     0,   488,  1520,  1521,     0,     0,    15,     0,
       0,   489,     0,     0,  1109,     0,     0,     0,     0,   490,
       0,     0,     0,     0,     0,     0,   491,     0,     0,   492,
       0,     0,   493,   494,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,   495,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,     0,     0,     0,     0,     0,
       0,     0,     0,  1493,     0,     0,   496,   497,     0,   498,
     499,     0,     0,     0,     0,   500,     0,   501,     0,     0,
       0,     0,   502,   503,     0,     0,     0,     0,   504,   505,
       0,     0,     0,     0,     0,   506,     0,   507,     0,     0,
       0,     0,   508,     0,     0,     0,     0,     0,     0,     0,
     409,     0,     0,     0,     0,     0,  1494,   410,   411,   412,
     413,   414,   415,   416,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,   410,   411,   412,   413,   414,   415,   416,
     432,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,     0,     0,     0,   410,
     411,   412,   413,   414,   415,   416,   826,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,     0,     0,   410,   411,   412,   413,   414,   415,
     416,   885,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
       0,     0,  -601,  -601,  -601,  -601,  1062,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431
};

static const yytype_int16 yycheck[] =
{
      72,  1177,   959,   535,  1080,   970,   900,   911,   912,   966,
    1171,   915,   245,   289,     3,     4,     5,     6,     7,     8,
      41,   246,     6,   733,   734,    20,   117,   134,     6,   739,
    1169,   741,     8,     3,   449,   117,     3,     3,  1481,     3,
      18,  1487,     3,  1092,  1093,   172,    16,     3,    20,     3,
     134,    80,    89,    43,     3,   127,   128,   139,   172,    89,
      70,   785,  1111,     3,   206,     4,   138,   139,   140,   246,
       3,    89,   144,    94,    70,   206,   230,   302,   237,     3,
      66,   230,   189,   170,   230,   240,  1535,  1536,     3,    43,
       3,    18,     3,    41,    46,    47,   120,  1546,  1547,     4,
       5,     6,     7,   177,  1192,   189,   116,   137,   237,     3,
      51,   217,     3,   207,    66,    10,    11,    12,    13,    14,
      15,    16,   465,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1234,  1235,
    1279,   235,   207,   230,   134,   230,    94,  1243,  1244,   681,
     192,   175,   206,    80,    78,   879,     3,    98,   232,    64,
     130,    76,   694,     0,   174,    76,   238,   510,   117,   782,
     235,   784,    82,     3,     3,   217,   335,   166,   174,   165,
     335,   335,   166,  1140,   333,   134,   223,   333,   166,  1277,
    1094,   333,   102,   223,  1151,   213,   136,   183,   168,   189,
     149,  1158,   333,   136,   233,  1152,   335,  1172,   335,   434,
    1659,  1660,  1661,  1662,  1663,  1664,   226,   207,   157,   195,
     206,   335,   117,   136,  1673,   332,   333,   176,  1677,   156,
     226,   183,  1681,     3,     4,     5,     6,     7,     8,  1288,
     207,   773,   136,   170,   335,   136,   318,    77,   333,   333,
     322,   331,    18,   335,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    40,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   335,   354,   355,   356,   700,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,  1749,   282,  1748,   136,   379,   380,   534,
     230,   332,   384,   385,    80,    70,   217,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,  1060,   332,   410,   411,
     412,   413,   414,  1482,  1483,   334,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     332,   116,   705,   706,   436,  1312,   333,   333,   545,   333,
     713,   548,   333,  1330,  1268,  1332,  1323,   333,   332,    66,
       3,   994,   559,   996,  1560,     3,     3,     3,     3,   230,
     156,   296,   297,   298,    68,   170,   166,  1846,   230,   115,
      81,  1850,   230,    95,   170,   748,   749,   750,     3,   237,
      95,  1358,  1122,   333,  1124,  1125,     9,   217,   134,   174,
     217,   196,  1369,     3,   118,     3,    43,    20,   333,  1525,
    1526,  1527,  1528,  1529,  1530,   106,   107,   106,   107,     3,
     335,  1537,  1389,   719,   720,  1541,    18,     3,   129,  1545,
      18,    36,   150,   686,  1903,  1904,  1403,  1906,  1907,   133,
     532,   290,   291,   292,   293,  1412,    51,  1643,  1629,   143,
      26,   226,    40,    43,   166,    43,   150,    45,   165,   173,
      48,   166,    52,   826,   827,   557,   558,  1563,   903,   163,
     188,   906,   333,   565,     3,    63,   183,    77,    70,    63,
      95,   333,    70,    71,   332,  1452,     3,   335,     3,   203,
       5,  1468,    76,   136,   188,   231,   333,  1474,    54,   206,
     136,    63,    58,    95,   189,    35,   136,    95,    70,    10,
     204,    10,    11,    12,    13,    14,    15,    16,  1070,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   224,  1897,   136,    67,   136,     3,
      96,     3,    63,    99,     3,   198,    63,   238,     5,   238,
     913,     3,    82,   243,   116,    76,   144,   119,   114,    76,
      90,   211,   135,    20,  1926,  1927,   658,   659,  1492,   661,
     223,   144,   102,   135,   666,    85,   132,    78,   166,   332,
     333,    10,   144,    84,   140,    14,   174,  1949,    10,    11,
      12,    13,    14,    15,    16,  1791,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   135,   174,    43,  1928,   492,   126,    43,    43,   120,
      85,   498,    52,   500,   134,     3,    52,    52,  1595,   139,
     160,   217,  1609,  1600,   135,     3,  1950,  1951,   226,   149,
    1625,   334,   335,  1620,     3,  1622,   891,  1843,   335,    13,
      14,   181,    16,     3,   746,    19,   334,   335,   214,     3,
     216,   126,   332,  1779,   226,  1979,   244,  1783,    43,   134,
      30,    31,    32,     3,   175,    31,    32,   333,   234,   334,
     335,    74,    75,   880,   149,   334,   335,    78,   334,   335,
     170,   192,   889,   244,   195,   787,     3,   789,  1794,  1858,
     333,   793,   794,   233,   796,  1901,   334,   335,   800,   332,
     211,   212,   334,   335,     3,   807,   808,   809,   810,   244,
     812,   813,   814,   334,   335,   226,   244,   819,   820,   120,
     822,   334,   335,   334,   335,   244,   828,   829,   830,   334,
     335,   334,   335,     3,   135,   334,   335,     4,     5,   244,
     842,   843,   844,   244,   846,   244,  1723,    26,    27,    28,
      29,    30,    31,    32,   210,   857,  1743,  1883,  1884,     8,
    1886,  1887,  1739,   333,   866,   867,   868,   869,   870,   871,
     872,   873,  1696,   875,   175,   982,     4,     5,   334,   335,
     334,   335,     3,   885,   334,   335,   334,   335,   334,   335,
       9,   192,   334,   335,   195,   897,   334,   335,   334,   335,
     333,  1174,   904,   479,   480,   481,   482,   333,   484,    49,
      50,   487,   488,   489,    49,    50,   217,   333,   494,   495,
     496,   334,   335,   499,   170,   334,   335,   333,   726,   727,
    1807,   729,   730,   731,   334,   335,   333,   735,   736,   737,
     333,   943,   740,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1061,   334,   335,  1064,  1065,  1066,
      11,    12,    13,    14,    15,    16,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   984,   334,   335,   987,   334,   335,   334,   335,
     333,   993,   334,   335,   696,   697,   334,   335,   332,   333,
    1002,   170,   334,   335,   333,  1007,  1008,   334,   335,    10,
      11,    12,    13,    14,    15,    16,   333,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   334,   335,    10,    11,    12,    13,    14,    15,
      16,   333,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   334,   335,   335,
    1062,    13,    14,    15,    16,   333,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1083,   334,   335,   334,   335,  1088,   334,   335,   334,
     335,   334,   335,   334,   335,    10,    11,    12,    13,    14,
      15,    16,   333,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   333,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    12,    13,    14,    15,    16,   333,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1164,   334,   335,    10,    11,    12,    13,    14,
      15,    16,   333,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   334,   335,
     334,   335,   334,   335,  1196,   334,   335,  1199,   334,   335,
     334,   335,   334,   335,   334,   335,  1208,  1209,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1220,   332,
     333,    45,   334,   335,   334,   335,   333,  1229,  1230,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   333,  1246,  1247,  1248,   334,   335,  1251,
    1252,   333,  1254,   333,  1256,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1266,  1267,   334,   335,   895,   896,
     333,   333,  1274,  1275,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  1272,  1273,   333,
    1292,   333,   333,   333,  1296,   333,   333,   333,     3,     4,
       5,     6,     7,     8,  1306,    10,   333,    12,   333,   333,
     333,    16,    17,    18,   333,    20,   333,   333,  1320,    24,
      25,    26,    27,    28,   333,   333,   333,   333,   333,   333,
     333,   333,    37,   334,   335,   333,   333,    42,    43,   333,
     333,    46,   333,   333,   333,   333,    51,    52,    53,    54,
      55,   333,   333,    58,   333,    60,    61,    62,   334,   335,
      65,    66,   333,    68,    69,    70,   333,   333,   333,    74,
     333,   333,   333,   333,    79,   333,   333,   333,    83,   333,
     333,    45,   333,    88,    89,    90,   333,   333,   333,   333,
      95,    96,   333,    98,    99,   100,   101,   333,   333,   104,
     333,   106,   107,   108,   109,   333,   111,   333,   113,   114,
     333,   116,   117,   118,   333,   120,   121,   122,   123,   334,
     335,   333,   333,   128,    63,   130,    63,   132,   133,    63,
     135,   136,   137,   138,   139,   140,     3,   142,   143,   144,
     145,   146,   334,   335,     3,   150,     3,   152,     3,   154,
     244,     3,   244,     3,    26,     3,     3,     3,   163,     3,
     165,   166,   167,   168,   169,   170,   171,     3,     3,   174,
     175,     3,     3,     3,   334,   180,   334,   182,   183,   184,
     334,   186,   334,   188,   334,   190,   191,   192,   193,   334,
     335,   334,   334,   334,   334,   334,     5,  1499,  1500,   334,
     205,   206,   207,  1505,   334,  1507,   333,     3,     3,   214,
       3,   216,   217,   218,     3,   334,     3,   143,   223,   169,
     225,   226,   227,     3,     3,   230,     3,     3,     3,   234,
     235,     3,   237,   238,   239,   240,     3,     3,     3,   244,
     210,     3,     3,     3,     3,   333,   333,    10,    11,    12,
      13,    14,    15,    16,   333,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     333,    56,   333,   333,   333,     3,     3,     3,   334,     3,
     285,   286,   287,   288,   289,    10,    11,    12,    13,    14,
      15,    16,   335,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,   170,   334,     3,  1626,   170,   331,   332,   333,   334,
     335,   336,   170,   244,     3,     3,     3,   171,   334,   207,
     334,   310,   310,   310,   334,   310,   207,   310,   333,   333,
     333,  1653,   333,   117,   144,   335,   144,    10,    11,    12,
      13,    14,    15,    16,  1666,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,     3,   210,   210,   170,     5,   144,  1689,   143,   143,
       4,  1693,     5,     5,   186,   166,   170,   333,     3,  1701,
       3,     3,     3,     4,     5,     6,     7,     8,   232,    10,
       3,    12,  1714,  1715,   170,    16,    17,    18,     3,    20,
      55,   152,    20,    24,    25,    26,    27,    28,   333,   154,
     172,   334,   141,     4,   310,   310,    37,   310,   333,   310,
     310,    42,    43,   333,   310,    46,   333,   310,     5,     5,
      51,    52,    53,    54,    55,   333,   310,    58,   207,    60,
      61,    62,   122,     3,    65,    66,   121,    68,    69,    70,
     310,   333,     3,    74,     3,   333,     3,   333,    79,   144,
     144,     3,    83,   334,    70,   232,     3,    88,    89,    90,
      52,   334,   334,   334,    95,    96,   333,    98,    99,   100,
     101,     3,   121,   104,   333,   106,   107,   108,   109,   232,
     111,   333,   113,   114,   333,   116,   117,   118,   333,   120,
     121,   122,   123,   170,     3,   333,   144,   128,   333,   130,
    1832,   132,   133,   333,   135,   136,   137,   138,   139,   140,
     144,   142,   143,   144,   145,   146,     3,   185,   144,   150,
     333,   152,     3,   154,     3,    55,   334,    20,   128,   143,
       3,   334,   163,   333,   165,   166,   167,   168,   169,   170,
     171,   334,   335,   174,   175,   166,     3,   334,    44,   180,
     333,   182,   183,   184,   334,   186,   334,   188,   333,   190,
     191,   192,   193,   333,   333,   333,   333,   333,  1900,   333,
       3,   334,   334,   333,   205,   206,   207,     4,   144,   144,
     335,   186,   334,   214,   333,   216,   217,   218,   333,   333,
       5,   333,   223,   333,   225,   226,   227,   333,   333,   230,
     333,   333,   206,   234,   235,     4,   237,   238,   239,   240,
       4,   333,     3,   244,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     3,     3,     3,
     333,   333,   232,   232,   100,   333,     3,   333,     3,   333,
     223,   334,   335,   333,   285,   286,   287,   288,   289,   333,
     335,    20,   334,   334,   311,   310,     3,   334,   334,   310,
     334,     3,     3,     4,     5,     6,     7,     8,     3,    10,
       3,    12,    43,     5,     5,    16,    17,    18,   334,    20,
      52,     4,    52,    24,    25,    26,    27,    28,   334,   190,
     331,   332,   333,   334,   335,   336,    37,   334,   333,   333,
     232,    42,    43,   333,   333,    46,   334,     3,   335,   144,
      51,    52,    53,    54,    55,   333,   333,    58,   144,    60,
      61,    62,   335,   171,    65,    66,   333,    68,    69,    70,
     333,    55,   333,    74,    20,   333,    18,     3,    79,   334,
     334,   333,    83,   334,   334,   333,   333,    88,    89,    90,
     144,     3,   334,   334,    95,    96,   334,    98,    99,   100,
     101,    52,     3,   104,     3,   106,   107,   108,   109,   333,
     111,    55,   113,   114,   333,   116,   117,   118,   333,   120,
     121,   122,   123,     3,     3,     3,    55,   128,   334,   130,
     334,   132,   133,   334,   135,   136,   137,   138,   139,   140,
     310,   142,   143,   144,   145,   146,   310,   334,   310,   150,
     310,   152,   334,   154,   187,   121,     3,   233,   180,     3,
       3,    52,   163,     5,   165,   166,   167,   168,   169,   170,
     171,     5,    69,   174,   175,   334,   113,   136,   146,   180,
     239,   182,   183,   184,   180,   186,     5,   188,    20,   190,
     191,   192,   193,   335,   334,   334,   334,   334,   334,   334,
       3,   335,   334,   333,   205,   206,   207,   139,   333,     3,
     334,   333,   333,   214,   334,   216,   217,   218,   334,   334,
       3,     3,   223,     3,   225,   226,   227,   333,   333,   230,
       3,     3,   199,   234,   235,   335,   237,   238,   239,   240,
     333,   199,   180,   244,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     3,     3,   335,
      20,   334,   334,     3,     3,   335,   153,   153,     3,   334,
     197,   334,   333,   333,   285,   286,   287,   288,   289,   334,
     334,   334,   334,     3,     3,   333,   196,     5,     3,    80,
     131,   235,     3,     4,     5,     6,     7,     8,   147,    10,
     215,    12,   170,   170,   164,    16,    17,    18,   164,    20,
       5,     5,    79,    24,    25,    26,    27,    28,  1564,   323,
     331,   332,   333,   334,   335,   336,    37,  1269,  1498,   443,
     436,    42,    43,  1087,   100,    46,   536,   799,   769,    67,
      51,    52,    53,    54,    55,   312,  1653,    58,   547,    60,
      61,    62,  1625,   783,    65,    66,  1955,    68,    69,    70,
     893,  1173,  1161,    74,   752,   473,   131,   738,    79,  1310,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      -1,    -1,    -1,   244,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     331,   332,   333,   334,   335,   336,    37,    -1,    -1,    -1,
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
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,   335,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    37,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
     331,   332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    92,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   126,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   166,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,    -1,   204,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
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
     328,   329,   330,    -1,    -1,   333,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,   335,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     335,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   335,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,   166,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   335,    -1,    -1,    37,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,   283,    -1,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,    -1,    -1,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   166,    -1,   333,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,   200,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,   335,    -1,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
      -1,   283,    -1,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    -1,    -1,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,    -1,
     166,   333,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,   238,    -1,    72,    73,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,   283,    -1,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    -1,    -1,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,    -1,    -1,   333,   166,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,   335,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   117,   283,    -1,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    -1,    -1,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   166,    -1,   333,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   335,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
     283,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    -1,    -1,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,    -1,
     333,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
     335,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    95,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,   106,    69,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    95,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     166,   283,    -1,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    -1,    -1,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,    -1,
      -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,   283,    -1,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    -1,    -1,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,    -1,    -1,   333,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,   335,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      95,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,   106,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    95,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   166,   283,    -1,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    -1,    -1,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,   283,    -1,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,    -1,    -1,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,    -1,    -1,   333,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,   335,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    10,    11,    12,
      13,    14,    15,    16,   335,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   166,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
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
     328,   329,   330,    -1,    -1,   333,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   335,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   335,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   335,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   335,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   335,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,   121,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   335,    18,    19,    20,    21,    22,    23,    24,
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
      -1,    -1,    -1,   284,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   334,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   334,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   334,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   334,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   334,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
     334,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     334,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   334,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   334,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   334,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   334,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   334,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     334,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   334,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   334,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   334,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   334,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   334,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     334,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   334,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   334,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   334,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   334,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   334,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   334,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   334,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     334,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   334,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   334,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   334,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   334,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   334,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   334,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   334,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   334,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   334,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   334,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   334,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     334,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,   334,    -1,    40,    -1,
      -1,    43,    -1,    45,    -1,    -1,    48,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    63,    -1,   334,    91,    -1,    93,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,   124,   125,    -1,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   218,    -1,   137,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,   334,    56,    -1,    58,
      59,    -1,   144,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,   166,    -1,   179,    -1,   181,    -1,
      -1,    -1,   174,    -1,    -1,    -1,   189,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   334,   105,    -1,    -1,    -1,
      -1,    -1,    -1,   206,   207,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
     223,    -1,    -1,   132,   241,   242,    -1,    -1,   231,    -1,
      -1,   140,    -1,    -1,   226,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,   158,
      -1,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   178,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,   205,   206,    -1,   208,
     209,    -1,    -1,    -1,    -1,   214,    -1,   216,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,   227,   228,
      -1,    -1,    -1,    -1,    -1,   234,    -1,   236,    -1,    -1,
      -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    94,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      43,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    42,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    42,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    89,    90,   137,   179,   181,
     189,   206,   207,   220,   223,   231,   338,   374,   375,   412,
     416,   417,   420,   421,   424,   425,   426,   428,   440,   441,
     444,   446,   447,   448,   470,   473,   480,   481,   484,   487,
     192,   217,   217,     3,    10,    78,    84,   120,   135,   175,
     192,   195,   211,   212,   226,   452,   413,    78,   120,   135,
     175,   192,   195,   217,   432,   217,   217,   432,     8,   195,
     471,   472,   393,   217,   432,   442,     3,    78,     0,   331,
     423,     3,     3,     3,   333,   189,   136,   445,     3,     3,
       3,    77,   136,     3,     3,   445,   211,   135,   217,     3,
     117,   134,   149,   176,   414,     3,   136,     3,   136,     3,
       3,   136,     3,   136,     3,   136,     3,   136,    85,   126,
     134,   139,   149,   433,     3,     3,   433,     9,    20,     3,
      95,   335,     3,     4,     5,     6,     7,     8,    17,    18,
      25,    26,    37,    64,    69,    72,    73,    88,    92,   126,
     166,   194,   201,   202,   204,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   283,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   333,   339,
     394,   395,     3,   134,   149,     3,   333,   397,   398,   399,
     401,   411,     3,   338,    46,    47,    66,   183,    82,   102,
      35,    67,    82,    90,   102,   160,   181,   233,   332,     3,
       4,     5,     6,     7,     8,   166,   334,   482,   483,   120,
     175,   244,     3,    43,   333,   170,     3,   136,   244,   333,
      36,    51,   485,     3,     3,    77,   136,   445,   332,   415,
       3,   414,   117,   335,   244,   244,   244,   244,   244,   244,
       3,   210,     3,   339,   339,   472,   332,   333,     9,   339,
     339,   339,   238,   339,   373,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   339,     3,
      10,    11,    12,    13,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    43,   396,   117,   139,   335,   335,   332,   396,
     375,   397,   206,   335,    68,   133,   150,   163,   188,   204,
     402,   404,    43,   400,    45,    45,    63,    76,     3,    76,
      63,     3,    63,    76,    63,     3,    76,     3,    63,    76,
      63,     3,   334,   335,     3,     3,    53,    54,    56,    58,
      59,    74,    96,    97,    98,    99,   105,   114,   132,   140,
     148,   155,   158,   161,   162,   178,   205,   206,   208,   209,
     214,   216,   221,   222,   227,   228,   234,   236,   241,   466,
       3,    16,   130,   168,   474,   475,   476,     3,   170,   244,
       3,   474,    89,   137,   223,   486,   170,     3,   136,   244,
       3,    26,   237,   376,   230,   397,     3,     3,     3,     3,
       3,     3,     3,   206,   333,   434,     3,   206,   434,     3,
     339,   344,   345,   339,   339,   373,   106,   107,   238,   350,
     339,    57,   151,   219,   339,   371,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   334,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   334,   339,   339,   339,   334,   339,   339,   339,   339,
     339,   339,    26,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   334,   334,   334,   334,   339,   339,
     334,   334,   334,   339,   339,     5,   334,   334,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   334,   339,   339,
     339,   339,   339,     6,    18,   166,   282,   333,    13,    14,
      16,    19,   339,    37,    39,   200,   333,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
       3,   397,     3,   395,     3,   422,     3,   115,   134,   231,
     408,   334,   334,     3,   443,   398,   150,   188,   405,   399,
     143,   169,   403,     3,     3,     3,     3,     3,     3,     3,
       3,     3,   466,     3,   210,     3,     3,     3,   483,   333,
     333,   333,   462,   462,   462,   462,   462,   462,   333,   462,
     462,   462,    56,   463,   463,   462,   462,   462,   333,   463,
     462,   463,   333,   333,    18,    70,    95,   466,     3,     3,
       3,   334,   335,   230,   333,     3,     3,   170,   334,   170,
       3,   170,   244,     3,   134,   189,   332,   333,   468,   469,
     339,   171,   386,   397,   376,   415,     3,   439,     3,   435,
     235,   375,   439,   235,   375,   335,   334,   218,   106,   107,
     339,   339,   375,   117,   335,   334,   117,   339,   335,   335,
     335,   334,   334,   334,   334,   334,   334,   335,   335,   335,
     335,   334,   335,   335,   335,   334,   334,   334,   334,   335,
     335,   334,   335,   334,   334,   334,    43,   335,   335,   335,
     335,   284,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   335,   335,   334,   335,   310,   310,   310,
     334,   335,   334,   335,   334,   310,   310,   335,   334,   334,
     334,   334,   334,   334,   334,   334,   335,   335,   335,   335,
     335,   335,   335,   335,   334,   335,   334,     6,   166,   346,
     348,   339,   339,   333,   339,    42,   333,   333,   333,   340,
     376,   117,   335,   396,   144,   144,   144,    20,   332,   335,
     376,   403,   403,   143,   170,   399,   143,    70,   116,   174,
     226,   466,   466,     3,   461,   466,     3,   210,   210,   474,
     474,     5,   464,   465,   464,   464,     4,   467,   464,   464,
     464,   465,   465,   464,   464,   464,   467,   465,   464,   465,
       5,     5,   166,   333,   339,   466,   466,   466,   186,   476,
     232,     3,   290,   291,   292,   293,   418,   419,   230,   333,
     170,     3,    43,    52,     3,   230,   333,     3,     3,   170,
       3,    63,    70,   116,   119,   135,   144,   174,   226,   453,
     454,   460,   400,    55,   152,   389,   376,    20,   172,   335,
     429,   334,   335,   333,   436,   429,   436,   429,   344,   339,
     339,   106,   218,   334,   339,   339,   339,   117,   141,   372,
     372,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   466,   466,   339,   339,   339,     4,   310,   310,
     310,   310,   310,   310,   339,   339,   339,   339,   333,   333,
     333,   310,     5,   310,     5,   310,   333,   333,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   344,   375,
     347,   349,    42,   339,   343,   341,   342,   375,   122,   377,
     397,     3,   408,   121,   409,   409,   409,   339,     3,     3,
     386,   399,   339,   170,   230,   406,   407,   399,   333,   144,
     144,   333,   461,   461,   466,    18,    36,    40,    43,    45,
      48,    63,    70,    71,    95,   112,   144,   166,   174,   226,
     427,   461,     3,     3,   334,   334,   334,   335,   224,   243,
      74,    75,   334,   335,   334,   334,   334,    70,   339,    54,
      58,    96,    99,   114,   132,   140,   214,   216,   234,   477,
     333,   333,   333,   333,   333,   334,   335,   232,   418,     3,
     230,   333,    52,   478,   121,   232,   418,   230,   333,   170,
       3,   333,   468,     3,   333,   144,   135,   144,   333,   333,
     144,   333,   334,   335,     3,   375,     3,     5,   387,   388,
     339,   185,   488,    95,   339,   144,     3,     3,    95,   339,
     438,   335,   429,   429,   106,   339,   121,   334,   334,   335,
     334,   339,   339,   334,   334,   334,   334,   334,   335,   335,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     335,   334,   333,   333,   333,   333,   333,   333,   334,   335,
     335,   334,   334,   351,   352,   353,   333,   334,   335,   333,
     334,   335,   333,   369,   370,   334,   335,   335,   335,   334,
     334,   335,   335,   334,   335,   334,   335,   334,   334,   344,
     375,   339,   375,   375,   375,   334,    55,   128,   381,   376,
     143,   333,   333,   333,    20,    20,   332,   389,   339,   333,
     407,   339,   333,   333,     3,   459,   427,   427,   461,   166,
       3,   333,   333,   333,    44,     3,   333,     4,     4,     5,
       6,     7,    64,   296,   297,   298,   333,   144,   144,   427,
     186,    43,    52,     5,   206,     4,   465,     4,   465,   465,
     333,   334,    43,    52,   418,     3,     3,     3,     3,     3,
     333,   334,   333,   232,   418,   478,     3,     4,     5,     6,
       7,     8,    10,    12,    16,    17,    18,    20,    24,    25,
      26,    27,    28,    37,    42,    43,    46,    51,    52,    53,
      54,    55,    58,    60,    61,    62,    65,    66,    68,    69,
      70,    74,    79,    83,    88,    89,    90,    95,    96,    98,
      99,   100,   101,   104,   106,   107,   108,   109,   111,   113,
     114,   116,   117,   118,   120,   121,   122,   123,   128,   130,
     132,   133,   135,   136,   137,   138,   139,   140,   142,   143,
     144,   145,   146,   150,   152,   154,   163,   165,   166,   167,
     168,   169,   170,   171,   174,   175,   180,   182,   183,   184,
     186,   188,   190,   191,   192,   193,   205,   206,   207,   214,
     216,   217,   218,   223,   225,   226,   227,   230,   234,   235,
     237,   238,   239,   240,   244,   285,   286,   287,   288,   289,
     331,   332,   333,   334,   335,   336,   479,   100,   333,   334,
     232,   418,     3,   230,   333,   453,    70,   116,   174,   226,
     339,   333,   333,   333,     3,   392,   392,   333,   459,   449,
     468,   454,   466,    41,    94,   332,   379,   379,   335,   154,
     335,     3,    26,   489,   223,    20,   334,   335,   437,   488,
     339,   339,   334,    86,    87,    91,    93,   124,   125,   127,
     241,   242,   339,   339,   339,   355,   356,   354,   357,   358,
     359,   339,   339,   311,   382,   382,   382,   360,   310,     4,
       5,   364,   310,     4,     5,   368,   382,   382,   339,   339,
     339,   339,   339,   339,   339,   334,   334,   334,   334,   334,
     339,   378,   339,   386,   377,     3,   410,   410,   410,   339,
     339,     3,   488,   392,   334,     3,   456,     3,   455,   334,
     335,   427,     5,   339,     5,    43,    70,   174,   226,   339,
     333,   333,   333,   339,   477,    52,   478,   334,     4,   339,
      52,   478,   334,   334,   334,   334,   335,   418,   418,   333,
     334,   106,   478,   478,   478,   478,   478,   478,   190,   418,
     333,   334,   333,   232,   418,   334,   333,   144,   144,   333,
     334,   456,   392,   392,   334,   335,   334,   455,   334,    40,
     170,   196,   461,     3,   388,   339,   339,   335,   430,    95,
     339,    95,   339,   333,   334,   334,   334,   334,   334,   382,
     382,   382,   382,   382,   382,   334,   335,   334,    55,   171,
     384,   384,   384,   382,   333,   334,   334,   382,   333,   334,
     334,   382,   384,   384,   334,   334,   334,   334,   334,   335,
     334,   379,   240,   335,   380,   389,   381,   334,   335,   334,
     334,    20,   334,    18,   334,   335,   334,   335,     3,   334,
     335,   334,   334,   335,   333,   333,   144,   334,   334,   334,
     334,   334,    43,    52,   478,   106,   334,   478,   106,     3,
     334,   334,   418,   106,   106,   106,   106,   106,   106,    52,
     334,   418,   418,   333,   334,   449,   468,   339,   333,   333,
     459,   334,   334,   334,     3,   334,     5,    20,     3,    55,
     379,     3,     3,   431,   438,   384,   384,   384,   384,   384,
     384,   339,     3,   383,    55,   334,   334,   334,   384,   361,
     310,   310,   384,   365,   310,   310,   384,   334,   334,   339,
     187,   339,   121,   390,   386,     3,   339,   233,   180,     3,
       3,     5,    49,    50,     5,   339,   339,    52,   478,   106,
     106,   334,   334,    69,   113,   136,   146,   239,   478,   334,
     334,   418,   334,   456,   455,   334,   180,     5,    89,   213,
     177,   232,    20,   335,   334,   334,   334,   334,   334,   334,
     334,   334,   335,     3,   385,   334,   382,   333,   333,   334,
     382,   333,   333,   334,   334,   379,   198,   223,   139,   391,
     389,     3,   334,   334,   334,   334,   478,   106,   106,   334,
     334,   334,     3,     3,     3,   333,   333,   339,     3,     3,
     379,   335,   384,   362,   363,   384,   366,   367,   199,   199,
     392,   333,    49,    50,   106,   180,   332,   333,     3,     3,
      20,     3,   334,   382,   382,   334,   382,   382,   153,   153,
       3,   457,     3,     3,   457,   334,   334,   339,   379,   384,
     384,   384,   384,   334,   335,   332,   333,   333,   334,   333,
     197,   334,   334,   334,   334,   458,     3,     3,   457,   457,
     458,   196,   450,   451,     5,    18,    80,   156,   170,   333,
     334,   334,    18,     3,   334,   335,    80,   233,   131,   118,
     173,   203,    89,   223,   457,   458,   458,   235,   451,    81,
     129,    66,   165,   183,   206,    66,   165,   183,   206,   334,
     147,    95,   166,    95,   166,   458,   215,     4,   157,   170,
     170,   164,   164,     5,     5
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
#line 415 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 421 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 422 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 424 "parser/evoparser.y"
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
#line 442 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 450 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 458 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 464 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 471 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 472 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 473 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 474 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 475 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 476 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 477 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 478 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 479 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 480 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 481 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 482 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 483 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 484 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 485 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 486 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 487 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 488 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 30:
#line 489 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 31:
#line 491 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 32:
#line 496 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 497 "parser/evoparser.y"
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
#line 505 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 506 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 36:
#line 507 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 508 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 509 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 510 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 513 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 41:
#line 514 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 42:
#line 515 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 43:
#line 516 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 44:
#line 517 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 45:
#line 520 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 46:
#line 521 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 47:
#line 524 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 48:
#line 525 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 49:
#line 528 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 51:
#line 532 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 532 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 533 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 533 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 534 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 535 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 542 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 543 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 550 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 551 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 61:
#line 561 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 62:
#line 565 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 63:
#line 566 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 567 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 568 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 569 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 570 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 571 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 69:
#line 572 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 70:
#line 576 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 71:
#line 577 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 72:
#line 578 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 73:
#line 579 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 74:
#line 580 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 75:
#line 581 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 76:
#line 583 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 77:
#line 584 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 78:
#line 585 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 79:
#line 586 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 80:
#line 587 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 588 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 82:
#line 589 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 590 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 84:
#line 591 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 592 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 86:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 594 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 88:
#line 596 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 597 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 598 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 91:
#line 599 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 600 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 93:
#line 601 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 602 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 95:
#line 603 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 604 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 605 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 98:
#line 606 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 99:
#line 607 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 100:
#line 608 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 101:
#line 609 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 610 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 103:
#line 611 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 613 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 105:
#line 614 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 106:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 107:
#line 616 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 108:
#line 617 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 109:
#line 618 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 110:
#line 621 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 111:
#line 622 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 112:
#line 623 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 113:
#line 624 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 114:
#line 625 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 115:
#line 626 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 116:
#line 627 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 117:
#line 628 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 629 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 119:
#line 630 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 631 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 632 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 122:
#line 633 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 634 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 124:
#line 635 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 125:
#line 636 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 126:
#line 637 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 127:
#line 638 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 128:
#line 639 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 129:
#line 640 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 130:
#line 641 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 131:
#line 642 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 132:
#line 643 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 133:
#line 644 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 134:
#line 645 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 135:
#line 646 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 136:
#line 647 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 137:
#line 648 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 138:
#line 649 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 139:
#line 650 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 140:
#line 651 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 141:
#line 652 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 142:
#line 653 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 143:
#line 654 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 144:
#line 656 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 145:
#line 657 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 146:
#line 658 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 147:
#line 659 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 148:
#line 660 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 149:
#line 661 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 150:
#line 662 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 151:
#line 663 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 152:
#line 665 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 153:
#line 666 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 154:
#line 667 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 155:
#line 668 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 156:
#line 669 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 157:
#line 670 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 158:
#line 671 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 159:
#line 672 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 160:
#line 673 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 161:
#line 674 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 162:
#line 675 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 163:
#line 676 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 164:
#line 677 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 165:
#line 678 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 166:
#line 679 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 167:
#line 680 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 168:
#line 681 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 169:
#line 682 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 170:
#line 683 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 171:
#line 684 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 172:
#line 685 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 686 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 174:
#line 688 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 175:
#line 689 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 176:
#line 691 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 177:
#line 692 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 178:
#line 693 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 179:
#line 695 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 180:
#line 696 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 181:
#line 697 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 182:
#line 698 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 183:
#line 705 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 184:
#line 712 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 185:
#line 719 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 186:
#line 723 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 187:
#line 727 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 188:
#line 733 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 189:
#line 734 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 190:
#line 735 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 191:
#line 739 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 192:
#line 745 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 193:
#line 751 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 194:
#line 752 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 195:
#line 753 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 196:
#line 754 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 197:
#line 755 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 198:
#line 756 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 199:
#line 757 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 200:
#line 758 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 201:
#line 759 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 202:
#line 763 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 203:
#line 765 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 204:
#line 767 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 205:
#line 769 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 206:
#line 773 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 207:
#line 781 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 208:
#line 791 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 209:
#line 792 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 210:
#line 795 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 211:
#line 796 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 212:
#line 800 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 213:
#line 808 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 214:
#line 816 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 215:
#line 827 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 216:
#line 836 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 217:
#line 841 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 218:
#line 854 "parser/evoparser.y"
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

  case 220:
#line 867 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 222:
#line 869 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 223:
#line 872 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 224:
#line 879 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 225:
#line 887 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 226:
#line 888 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 227:
#line 889 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 228:
#line 892 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 229:
#line 893 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 231:
#line 897 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 234:
#line 906 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 235:
#line 908 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 238:
#line 916 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 239:
#line 918 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 244:
#line 930 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 245:
#line 936 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 246:
#line 943 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 247:
#line 951 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 248:
#line 952 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 249:
#line 953 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 250:
#line 954 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 251:
#line 957 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 252:
#line 958 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 253:
#line 959 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 254:
#line 960 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 255:
#line 961 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 257:
#line 965 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 258:
#line 968 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 259:
#line 969 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 260:
#line 972 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 261:
#line 973 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 262:
#line 974 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 263:
#line 975 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 264:
#line 976 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 265:
#line 977 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 266:
#line 978 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 267:
#line 979 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 268:
#line 980 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 269:
#line 983 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 270:
#line 984 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 271:
#line 986 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 272:
#line 994 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 273:
#line 999 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 274:
#line 1000 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 275:
#line 1001 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 276:
#line 1004 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 277:
#line 1005 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 280:
#line 1014 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 281:
#line 1020 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 282:
#line 1021 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 283:
#line 1022 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 286:
#line 1031 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 287:
#line 1033 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 288:
#line 1035 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 289:
#line 1037 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 290:
#line 1039 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 291:
#line 1042 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 292:
#line 1043 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 293:
#line 1044 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 294:
#line 1047 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1048 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 296:
#line 1051 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1052 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 298:
#line 1055 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 299:
#line 1056 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 300:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1064 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 304:
#line 1065 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 305:
#line 1070 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 306:
#line 1072 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 307:
#line 1074 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 309:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1079 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 311:
#line 1082 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1083 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1086 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 314:
#line 1091 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 315:
#line 1101 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 316:
#line 1108 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 317:
#line 1109 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 318:
#line 1110 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 319:
#line 1111 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 320:
#line 1116 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 321:
#line 1120 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 322:
#line 1122 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 325:
#line 1128 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 326:
#line 1133 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 327:
#line 1140 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1147 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 329:
#line 1157 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 330:
#line 1164 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 331:
#line 1171 "parser/evoparser.y"
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

  case 332:
#line 1181 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 333:
#line 1189 "parser/evoparser.y"
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

  case 334:
#line 1199 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 335:
#line 1207 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 336:
#line 1216 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 337:
#line 1225 "parser/evoparser.y"
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

  case 338:
#line 1235 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 339:
#line 1243 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 340:
#line 1252 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 341:
#line 1261 "parser/evoparser.y"
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

  case 342:
#line 1271 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 343:
#line 1280 "parser/evoparser.y"
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

  case 344:
#line 1292 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 345:
#line 1297 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 346:
#line 1302 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 347:
#line 1308 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 348:
#line 1315 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 349:
#line 1322 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 350:
#line 1329 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 351:
#line 1339 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 352:
#line 1346 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 353:
#line 1355 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 354:
#line 1362 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 355:
#line 1368 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 356:
#line 1376 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 357:
#line 1382 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 359:
#line 1390 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 360:
#line 1391 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 361:
#line 1392 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 362:
#line 1393 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 363:
#line 1398 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 364:
#line 1405 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 365:
#line 1414 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 366:
#line 1421 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 367:
#line 1427 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 368:
#line 1437 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 369:
#line 1441 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 370:
#line 1447 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 371:
#line 1453 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 372:
#line 1460 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 373:
#line 1466 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 374:
#line 1473 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 375:
#line 1479 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 376:
#line 1485 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 377:
#line 1491 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 378:
#line 1497 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 379:
#line 1503 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 380:
#line 1509 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 381:
#line 1515 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 382:
#line 1521 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 383:
#line 1527 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 384:
#line 1533 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 385:
#line 1539 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 386:
#line 1545 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 387:
#line 1551 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 388:
#line 1557 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 389:
#line 1564 "parser/evoparser.y"
    { ;}
    break;

  case 390:
#line 1565 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 391:
#line 1566 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 392:
#line 1570 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 393:
#line 1578 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 394:
#line 1584 "parser/evoparser.y"
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

  case 396:
#line 1597 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 397:
#line 1597 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 398:
#line 1601 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 399:
#line 1609 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 400:
#line 1618 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 401:
#line 1619 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 402:
#line 1620 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 403:
#line 1621 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 404:
#line 1622 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 408:
#line 1629 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 409:
#line 1633 "parser/evoparser.y"
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

  case 410:
#line 1643 "parser/evoparser.y"
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

  case 411:
#line 1655 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 412:
#line 1656 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 413:
#line 1656 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 414:
#line 1659 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 415:
#line 1660 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 416:
#line 1661 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 417:
#line 1662 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 418:
#line 1666 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 419:
#line 1669 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 420:
#line 1670 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 421:
#line 1671 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 422:
#line 1672 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 423:
#line 1678 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 424:
#line 1684 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 425:
#line 1689 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 426:
#line 1694 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 427:
#line 1699 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 428:
#line 1708 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 429:
#line 1715 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 430:
#line 1716 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 431:
#line 1717 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 432:
#line 1722 "parser/evoparser.y"
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

  case 433:
#line 1733 "parser/evoparser.y"
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

  case 434:
#line 1745 "parser/evoparser.y"
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

  case 435:
#line 1756 "parser/evoparser.y"
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

  case 436:
#line 1771 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 437:
#line 1775 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 438:
#line 1779 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 439:
#line 1780 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 440:
#line 1785 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 441:
#line 1787 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 442:
#line 1789 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 443:
#line 1791 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 444:
#line 1794 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 445:
#line 1795 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 446:
#line 1801 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 447:
#line 1806 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 448:
#line 1808 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 449:
#line 1810 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 450:
#line 1812 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 451:
#line 1814 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 452:
#line 1818 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 453:
#line 1822 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 454:
#line 1823 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 455:
#line 1828 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 456:
#line 1838 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 457:
#line 1847 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 459:
#line 1851 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 460:
#line 1852 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 461:
#line 1853 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 462:
#line 1854 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 463:
#line 1856 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 464:
#line 1858 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 467:
#line 1866 "parser/evoparser.y"
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

  case 468:
#line 1881 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 469:
#line 1889 "parser/evoparser.y"
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

  case 470:
#line 1903 "parser/evoparser.y"
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

  case 471:
#line 1917 "parser/evoparser.y"
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

  case 472:
#line 1931 "parser/evoparser.y"
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

  case 473:
#line 1943 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 474:
#line 1944 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 475:
#line 1945 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 476:
#line 1948 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 477:
#line 1949 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 478:
#line 1952 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 479:
#line 1953 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 480:
#line 1954 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 481:
#line 1955 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 482:
#line 1956 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 483:
#line 1957 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 484:
#line 1958 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 485:
#line 1959 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 486:
#line 1961 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 487:
#line 1963 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 488:
#line 1965 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 489:
#line 1967 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 490:
#line 1969 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 491:
#line 1971 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 492:
#line 1974 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 493:
#line 1975 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 494:
#line 1978 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 495:
#line 1979 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 496:
#line 1982 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 497:
#line 1983 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 499:
#line 1987 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 500:
#line 1988 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 501:
#line 1989 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 502:
#line 1990 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 503:
#line 1991 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 504:
#line 1992 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 505:
#line 1993 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 506:
#line 1994 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 507:
#line 1995 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 508:
#line 1996 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 509:
#line 1997 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 510:
#line 1998 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 511:
#line 1999 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 512:
#line 2000 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 513:
#line 2001 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 514:
#line 2002 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 515:
#line 2003 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 516:
#line 2006 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 517:
#line 2007 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 518:
#line 2010 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 519:
#line 2012 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 520:
#line 2020 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 521:
#line 2021 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 523:
#line 2023 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 524:
#line 2024 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 525:
#line 2025 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 526:
#line 2026 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 527:
#line 2027 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 528:
#line 2028 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 529:
#line 2029 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 530:
#line 2030 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 531:
#line 2031 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 532:
#line 2038 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 533:
#line 2039 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 534:
#line 2040 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 535:
#line 2041 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 536:
#line 2042 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 537:
#line 2043 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 538:
#line 2044 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 539:
#line 2045 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 540:
#line 2046 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 541:
#line 2047 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 542:
#line 2048 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 543:
#line 2049 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 544:
#line 2050 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 545:
#line 2051 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 546:
#line 2052 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 547:
#line 2053 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 548:
#line 2054 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 549:
#line 2055 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 550:
#line 2056 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 551:
#line 2057 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 552:
#line 2058 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 553:
#line 2061 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 554:
#line 2062 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 555:
#line 2063 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 556:
#line 2066 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 557:
#line 2067 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 558:
#line 2070 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 559:
#line 2071 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 560:
#line 2072 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 562:
#line 2076 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 563:
#line 2077 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 564:
#line 2081 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 565:
#line 2082 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 566:
#line 2083 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 567:
#line 2084 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 568:
#line 2085 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 569:
#line 2086 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 570:
#line 2087 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 571:
#line 2088 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 572:
#line 2089 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 573:
#line 2090 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 574:
#line 2091 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 575:
#line 2092 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 576:
#line 2093 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 577:
#line 2094 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 578:
#line 2095 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 579:
#line 2096 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 580:
#line 2097 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 581:
#line 2098 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 582:
#line 2099 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 583:
#line 2100 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 584:
#line 2101 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 585:
#line 2102 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 586:
#line 2103 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 587:
#line 2104 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 588:
#line 2105 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 589:
#line 2106 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 590:
#line 2107 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 591:
#line 2108 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 592:
#line 2109 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 593:
#line 2110 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 594:
#line 2111 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 595:
#line 2112 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 596:
#line 2113 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 597:
#line 2116 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 598:
#line 2117 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 599:
#line 2121 "parser/evoparser.y"
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

  case 600:
#line 2133 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 601:
#line 2134 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 602:
#line 2135 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 603:
#line 2139 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 604:
#line 2142 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 605:
#line 2143 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 609:
#line 2147 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 610:
#line 2148 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 611:
#line 2156 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 612:
#line 2161 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 613:
#line 2167 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 614:
#line 2173 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 615:
#line 2180 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 616:
#line 2187 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 617:
#line 2193 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 618:
#line 2199 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 619:
#line 2206 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 624:
#line 2222 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 625:
#line 2223 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 626:
#line 2224 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 627:
#line 2225 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 628:
#line 2228 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 629:
#line 2229 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 630:
#line 2230 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 631:
#line 2231 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 632:
#line 2232 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 633:
#line 2233 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 634:
#line 2234 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 635:
#line 2235 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 636:
#line 2236 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 637:
#line 2237 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 646:
#line 2254 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 647:
#line 2255 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 768:
#line 2273 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 769:
#line 2280 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 770:
#line 2285 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 771:
#line 2291 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 772:
#line 2297 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 773:
#line 2303 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 774:
#line 2314 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 775:
#line 2319 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 776:
#line 2325 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 779:
#line 2336 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 780:
#line 2337 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 781:
#line 2338 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 782:
#line 2339 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 783:
#line 2340 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 784:
#line 2341 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 785:
#line 2342 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 786:
#line 2349 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 787:
#line 2354 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 788:
#line 2361 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 789:
#line 2362 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 790:
#line 2365 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 791:
#line 2366 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 792:
#line 2367 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 793:
#line 2370 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 794:
#line 2375 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 795:
#line 2381 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 796:
#line 2390 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 797:
#line 2398 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 799:
#line 2409 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 801:
#line 2413 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 802:
#line 2414 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9501 "parser/evoparser.tab.c"
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


#line 2417 "parser/evoparser.y"

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
