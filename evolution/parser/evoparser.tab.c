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
     FSCOPE_IDENTITY = 546,
     FAT_IDENTITY = 547,
     FAT_LAST_INSERT_ID = 548,
     FEVO_SLEEP = 549,
     FEVO_JITTER = 550,
     FROW_NUMBER = 551,
     FRANK = 552,
     FDENSE_RANK = 553,
     FLEAD = 554,
     FLAG = 555,
     FNTILE = 556,
     FPERCENT_RANK = 557,
     FCUME_DIST = 558,
     OVER = 559,
     PARTITION = 560,
     FJSON_EXTRACT = 561,
     FJSON_UNQUOTE = 562,
     FJSON_TYPE = 563,
     FJSON_LENGTH = 564,
     FJSON_DEPTH = 565,
     FJSON_VALID = 566,
     FJSON_KEYS = 567,
     FJSON_PRETTY = 568,
     FJSON_QUOTE = 569,
     FJSON_SET = 570,
     FJSON_INSERT = 571,
     FJSON_REPLACE = 572,
     FJSON_REMOVE = 573,
     FJSON_CONTAINS = 574,
     FJSON_CONTAINS_PATH = 575,
     FJSON_SEARCH = 576,
     FJSON_OBJECT = 577,
     FJSON_ARRAY = 578,
     FJSON_ARRAYAGG = 579,
     SEQUENCE = 580,
     FNEXTVAL = 581,
     FCURRVAL = 582,
     FSETVAL = 583,
     FLASTVAL = 584,
     START = 585,
     INCREMENT = 586,
     MINVALUE = 587,
     CYCLE = 588
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
#define FSCOPE_IDENTITY 546
#define FAT_IDENTITY 547
#define FAT_LAST_INSERT_ID 548
#define FEVO_SLEEP 549
#define FEVO_JITTER 550
#define FROW_NUMBER 551
#define FRANK 552
#define FDENSE_RANK 553
#define FLEAD 554
#define FLAG 555
#define FNTILE 556
#define FPERCENT_RANK 557
#define FCUME_DIST 558
#define OVER 559
#define PARTITION 560
#define FJSON_EXTRACT 561
#define FJSON_UNQUOTE 562
#define FJSON_TYPE 563
#define FJSON_LENGTH 564
#define FJSON_DEPTH 565
#define FJSON_VALID 566
#define FJSON_KEYS 567
#define FJSON_PRETTY 568
#define FJSON_QUOTE 569
#define FJSON_SET 570
#define FJSON_INSERT 571
#define FJSON_REPLACE 572
#define FJSON_REMOVE 573
#define FJSON_CONTAINS 574
#define FJSON_CONTAINS_PATH 575
#define FJSON_SEARCH 576
#define FJSON_OBJECT 577
#define FJSON_ARRAY 578
#define FJSON_ARRAYAGG 579
#define SEQUENCE 580
#define FNEXTVAL 581
#define FCURRVAL 582
#define FSETVAL 583
#define FLASTVAL 584
#define START 585
#define INCREMENT 586
#define MINVALUE 587
#define CYCLE 588




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
#line 817 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 830 "parser/evoparser.tab.c"

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
#define YYLAST   11011

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  349
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  829
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2056

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   588

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     345,   346,    26,    24,   347,    25,   344,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   343,
       2,   348,     2,     2,     2,     2,     2,     2,     2,     2,
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
     334,   335,   336,   337,   338,   339,   340,   341,   342
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
    1038,  1042,  1046,  1048,  1050,  1055,  1062,  1064,  1066,  1068,
    1075,  1082,  1086,  1090,  1094,  1098,  1102,  1106,  1110,  1114,
    1118,  1123,  1130,  1134,  1140,  1145,  1151,  1155,  1160,  1164,
    1169,  1171,  1173,  1175,  1177,  1181,  1194,  1207,  1208,  1211,
    1212,  1217,  1220,  1225,  1226,  1228,  1230,  1231,  1234,  1235,
    1238,  1239,  1243,  1245,  1249,  1250,  1254,  1257,  1262,  1263,
    1267,  1269,  1273,  1276,  1281,  1284,  1285,  1288,  1293,  1298,
    1299,  1302,  1305,  1310,  1315,  1316,  1319,  1321,  1325,  1326,
    1329,  1332,  1335,  1338,  1341,  1344,  1347,  1350,  1352,  1356,
    1358,  1361,  1364,  1366,  1367,  1369,  1373,  1375,  1377,  1381,
    1387,  1391,  1395,  1397,  1398,  1404,  1408,  1414,  1421,  1427,
    1428,  1430,  1432,  1433,  1435,  1437,  1439,  1442,  1445,  1446,
    1447,  1449,  1452,  1457,  1464,  1471,  1478,  1479,  1482,  1483,
    1485,  1489,  1493,  1495,  1504,  1507,  1510,  1513,  1514,  1521,
    1524,  1529,  1530,  1533,  1541,  1543,  1547,  1553,  1555,  1564,
    1575,  1585,  1597,  1608,  1621,  1633,  1647,  1657,  1669,  1680,
    1693,  1705,  1718,  1720,  1724,  1726,  1731,  1736,  1741,  1748,
    1750,  1754,  1757,  1761,  1767,  1769,  1773,  1774,  1777,  1780,
    1784,  1788,  1790,  1794,  1796,  1800,  1806,  1808,  1819,  1830,
    1848,  1861,  1881,  1893,  1900,  1909,  1916,  1923,  1930,  1940,
    1947,  1953,  1962,  1970,  1980,  1989,  2000,  2010,  2011,  2013,
    2016,  2018,  2028,  2035,  2036,  2037,  2043,  2047,  2053,  2054,
    2057,  2060,  2063,  2066,  2068,  2069,  2070,  2074,  2076,  2080,
    2084,  2085,  2092,  2094,  2096,  2100,  2104,  2112,  2116,  2120,
    2126,  2132,  2134,  2143,  2151,  2159,  2161,  2171,  2172,  2175,
    2178,  2182,  2188,  2194,  2202,  2208,  2210,  2215,  2220,  2224,
    2230,  2234,  2240,  2241,  2244,  2246,  2252,  2260,  2268,  2278,
    2290,  2292,  2295,  2299,  2301,  2311,  2323,  2324,  2329,  2333,
    2339,  2345,  2355,  2366,  2368,  2372,  2382,  2392,  2402,  2409,
    2421,  2430,  2431,  2433,  2436,  2438,  2442,  2448,  2456,  2461,
    2466,  2472,  2478,  2483,  2490,  2502,  2516,  2530,  2546,  2551,
    2558,  2560,  2564,  2566,  2570,  2572,  2576,  2577,  2582,  2588,
    2593,  2599,  2604,  2610,  2615,  2621,  2626,  2631,  2635,  2639,
    2643,  2646,  2650,  2655,  2660,  2662,  2666,  2667,  2672,  2673,
    2677,  2680,  2684,  2688,  2692,  2696,  2702,  2708,  2714,  2718,
    2724,  2727,  2735,  2741,  2749,  2755,  2758,  2762,  2765,  2769,
    2772,  2776,  2782,  2787,  2793,  2801,  2810,  2819,  2827,  2834,
    2841,  2847,  2848,  2852,  2858,  2859,  2861,  2862,  2865,  2868,
    2869,  2874,  2878,  2881,  2885,  2889,  2893,  2897,  2901,  2905,
    2909,  2913,  2917,  2921,  2923,  2925,  2927,  2929,  2931,  2935,
    2941,  2944,  2949,  2951,  2953,  2955,  2957,  2961,  2965,  2969,
    2973,  2979,  2985,  2987,  2989,  2991,  2993,  2997,  3001,  3002,
    3004,  3006,  3008,  3012,  3016,  3019,  3021,  3025,  3029,  3033,
    3035,  3046,  3056,  3069,  3081,  3094,  3106,  3121,  3135,  3136,
    3138,  3140,  3144,  3147,  3151,  3155,  3159,  3161,  3163,  3165,
    3167,  3169,  3171,  3173,  3175,  3177,  3179,  3180,  3183,  3188,
    3194,  3200,  3206,  3212,  3218,  3220,  3222,  3224,  3226,  3228,
    3230,  3232,  3234,  3236,  3238,  3240,  3242,  3244,  3246,  3248,
    3250,  3252,  3254,  3256,  3258,  3260,  3262,  3264,  3266,  3268,
    3270,  3272,  3274,  3276,  3278,  3280,  3282,  3284,  3286,  3288,
    3290,  3292,  3294,  3296,  3298,  3300,  3302,  3304,  3306,  3308,
    3310,  3312,  3314,  3316,  3318,  3320,  3322,  3324,  3326,  3328,
    3330,  3332,  3334,  3336,  3338,  3340,  3342,  3344,  3346,  3348,
    3350,  3352,  3354,  3356,  3358,  3360,  3362,  3364,  3366,  3368,
    3370,  3372,  3374,  3376,  3378,  3380,  3382,  3384,  3386,  3388,
    3390,  3392,  3394,  3396,  3398,  3400,  3402,  3404,  3406,  3408,
    3410,  3412,  3414,  3416,  3418,  3420,  3422,  3424,  3426,  3428,
    3430,  3432,  3434,  3436,  3438,  3440,  3442,  3444,  3446,  3448,
    3450,  3452,  3454,  3456,  3458,  3460,  3462,  3464,  3466,  3470,
    3476,  3480,  3486,  3488,  3493,  3499,  3501,  3505,  3507,  3509,
    3511,  3513,  3515,  3517,  3519,  3521,  3535,  3537,  3539,  3541,
    3543,  3545,  3547,  3551,  3557,  3562,  3567,  3569,  3575,  3576,
    3579,  3583,  3586,  3590,  3593,  3596,  3599,  3601,  3604,  3606,
    3610,  3616,  3621,  3626,  3633,  3640,  3641,  3644,  3647,  3649
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     350,     0,    -1,   386,   343,    -1,   386,   343,   350,    -1,
       3,    -1,     3,   344,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   166,    -1,   351,    24,
     351,    -1,   351,    25,   351,    -1,   351,    26,   351,    -1,
     351,    27,   351,    -1,   351,    28,   351,    -1,   351,    29,
     351,    -1,    25,   351,    -1,   345,   351,   346,    -1,   351,
      12,   351,    -1,   351,    10,   351,    -1,   351,    11,   351,
      -1,   351,    21,   351,    -1,   351,    22,   351,    -1,   351,
      30,   351,    -1,   351,    23,   351,    -1,   351,    32,   351,
      -1,   351,    31,   351,    -1,    18,   351,    -1,    17,   351,
      -1,   351,    20,   351,    -1,    -1,   351,    20,   345,   352,
     387,   346,    -1,    -1,   351,    20,    39,   345,   353,   387,
     346,    -1,    -1,   351,    20,   200,   345,   354,   387,   346,
      -1,    -1,   351,    20,    37,   345,   355,   387,   346,    -1,
     351,    15,   166,    -1,   351,    15,    18,   166,    -1,   351,
      15,     6,    -1,   351,    15,    18,     6,    -1,     8,     9,
     351,    -1,   351,    19,   351,    42,   351,    -1,   351,    18,
      19,   351,    42,   351,    -1,   351,    -1,   351,   347,   356,
      -1,    -1,   356,    -1,    -1,   351,    16,   345,   358,   356,
     346,    -1,    -1,   351,    18,    16,   345,   359,   356,   346,
      -1,    -1,   351,    16,   345,   360,   387,   346,    -1,    -1,
     351,    18,    16,   345,   361,   387,   346,    -1,    -1,   244,
     345,   362,   387,   346,    -1,     3,   345,   357,   346,    -1,
     285,   345,    26,   346,    -1,   285,   345,   351,   346,    -1,
     286,   345,   351,   346,    -1,   287,   345,   351,   346,    -1,
     288,   345,   351,   346,    -1,   289,   345,   351,   346,    -1,
     283,   345,   351,   346,    -1,   283,   345,   351,   284,     4,
     346,    -1,    -1,   305,   345,   346,   313,   345,   363,   394,
     396,   346,    -1,    -1,   306,   345,   346,   313,   345,   364,
     394,   396,   346,    -1,    -1,   307,   345,   346,   313,   345,
     365,   394,   396,   346,    -1,    -1,   286,   345,   351,   346,
     313,   345,   366,   394,   396,   346,    -1,    -1,   285,   345,
      26,   346,   313,   345,   367,   394,   396,   346,    -1,    -1,
     285,   345,   351,   346,   313,   345,   368,   394,   396,   346,
      -1,    -1,   287,   345,   351,   346,   313,   345,   369,   394,
     396,   346,    -1,    -1,   288,   345,   351,   346,   313,   345,
     370,   394,   396,   346,    -1,    -1,   289,   345,   351,   346,
     313,   345,   371,   394,   396,   346,    -1,    -1,   308,   345,
     351,   346,   313,   345,   372,   394,   396,   346,    -1,    -1,
     308,   345,   351,   347,     5,   346,   313,   345,   373,   394,
     396,   346,    -1,    -1,   308,   345,   351,   347,     5,   347,
       4,   346,   313,   345,   374,   394,   396,   346,    -1,    -1,
     308,   345,   351,   347,     5,   347,     5,   346,   313,   345,
     375,   394,   396,   346,    -1,    -1,   309,   345,   351,   346,
     313,   345,   376,   394,   396,   346,    -1,    -1,   309,   345,
     351,   347,     5,   346,   313,   345,   377,   394,   396,   346,
      -1,    -1,   309,   345,   351,   347,     5,   347,     4,   346,
     313,   345,   378,   394,   396,   346,    -1,    -1,   309,   345,
     351,   347,     5,   347,     5,   346,   313,   345,   379,   394,
     396,   346,    -1,    -1,   310,   345,     5,   346,   313,   345,
     380,   394,   396,   346,    -1,    -1,   311,   345,   346,   313,
     345,   381,   394,   396,   346,    -1,    -1,   312,   345,   346,
     313,   345,   382,   394,   396,   346,    -1,   245,   345,   351,
     347,   351,   347,   351,   346,    -1,   245,   345,   351,   347,
     351,   346,    -1,   245,   345,   351,   117,   351,   346,    -1,
     245,   345,   351,   117,   351,   121,   351,   346,    -1,   246,
     345,   351,   346,    -1,   246,   345,   383,   351,   117,   351,
     346,    -1,   246,   345,   383,   117,   351,   346,    -1,   290,
     345,   351,   346,    -1,   291,   345,   351,   346,    -1,   292,
     345,   351,   346,    -1,   293,   345,   351,   347,   351,   346,
      -1,   294,   345,   351,   347,   351,   347,   351,   346,    -1,
     295,   345,   351,   347,   351,   346,    -1,   257,   345,   351,
     347,   351,   346,    -1,   258,   345,   351,   347,   351,   346,
      -1,   259,   345,   351,   347,   351,   347,   351,   346,    -1,
     260,   345,   351,   347,   351,   347,   351,   346,    -1,   261,
     345,   351,   346,    -1,   262,   345,   351,   347,   351,   346,
      -1,   263,   345,   351,   347,   351,   346,    -1,   264,   345,
     351,   347,   351,   346,    -1,   265,   345,   351,   346,    -1,
     266,   345,   351,   346,    -1,   267,   345,   351,   346,    -1,
     268,   345,   351,   347,   351,   346,    -1,   268,   345,   351,
     346,    -1,   269,   345,   351,   347,   351,   346,    -1,   270,
     345,   351,   346,    -1,   271,   345,   351,   347,   351,   346,
      -1,   272,   345,   346,    -1,   273,   345,   351,   346,    -1,
     274,   345,   351,   346,    -1,   275,   345,   351,   346,    -1,
     276,   345,   346,    -1,   256,   345,   346,    -1,   249,   345,
     351,   347,   351,   346,    -1,   250,   345,   351,   346,    -1,
     251,   345,   351,   346,    -1,   252,   345,   351,   346,    -1,
     253,   345,   351,   346,    -1,   254,   345,   351,   346,    -1,
     255,   345,   351,   346,    -1,   315,   345,   351,   347,   351,
     346,    -1,   316,   345,   351,   346,    -1,   317,   345,   351,
     346,    -1,   318,   345,   351,   346,    -1,   319,   345,   351,
     346,    -1,   320,   345,   351,   346,    -1,   321,   345,   351,
     346,    -1,   322,   345,   351,   346,    -1,   323,   345,   351,
     346,    -1,   324,   345,   351,   347,   351,   347,   351,   346,
      -1,   325,   345,   351,   347,   351,   347,   351,   346,    -1,
     326,   345,   351,   347,   351,   347,   351,   346,    -1,   327,
     345,   351,   347,   351,   346,    -1,   328,   345,   351,   347,
     351,   346,    -1,   329,   345,   351,   347,   351,   347,   351,
     346,    -1,   330,   345,   351,   347,   351,   347,   351,   346,
      -1,   331,   345,   351,   347,   351,   346,    -1,   331,   345,
     351,   347,   351,   347,   351,   347,   351,   346,    -1,   332,
     345,   351,   346,    -1,   332,   345,   351,   347,   351,   346,
      -1,   332,   345,   351,   347,   351,   347,   351,   346,    -1,
     333,   345,   351,   346,    -1,   335,   345,   351,   346,    -1,
     336,   345,   351,   346,    -1,   337,   345,   351,   347,   351,
     346,    -1,   337,   345,   351,   347,   351,   347,   351,   346,
      -1,   338,   345,   346,    -1,   277,   345,   351,    43,   478,
     346,    -1,   278,   345,   351,   347,   478,   346,    -1,   279,
     345,   351,   347,   351,   346,    -1,   280,   345,   351,   347,
     351,   346,    -1,   281,   345,   351,   347,   351,   347,   351,
     346,    -1,   351,    15,   282,    -1,   293,   345,   351,   347,
     351,   347,   351,   346,    -1,   293,   345,   351,   347,   351,
     347,   351,   347,   351,   346,    -1,   296,   345,   346,    -1,
     297,   345,   346,    -1,   298,   345,   346,    -1,   299,   345,
     346,    -1,   300,   345,   346,    -1,   301,    -1,   302,    -1,
     303,   345,   351,   346,    -1,   304,   345,   351,   347,   351,
     346,    -1,   151,    -1,   219,    -1,    57,    -1,   247,   345,
     351,   347,   384,   346,    -1,   248,   345,   351,   347,   384,
     346,    -1,   141,   351,   241,    -1,   141,   351,    86,    -1,
     141,   351,    87,    -1,   141,   351,    91,    -1,   141,   351,
      93,    -1,   141,   351,   242,    -1,   141,   351,   125,    -1,
     141,   351,   124,    -1,   141,   351,   127,    -1,    69,   351,
     385,   106,    -1,    69,   351,   385,   107,   351,   106,    -1,
      69,   385,   106,    -1,    69,   385,   107,   351,   106,    -1,
     238,   351,   218,   351,    -1,   385,   238,   351,   218,   351,
      -1,   351,    14,   351,    -1,   351,    18,    14,   351,    -1,
     351,    13,   351,    -1,   351,    18,    13,   351,    -1,    64,
      -1,    72,    -1,    73,    -1,   387,    -1,   207,   405,   406,
      -1,   207,   405,   406,   117,   409,   388,   389,   393,   398,
     401,   402,   403,    -1,   207,   405,   406,   139,     3,   117,
     409,   388,   389,   393,   398,   401,    -1,    -1,   237,   351,
      -1,    -1,   122,    55,   390,   392,    -1,   351,   391,    -1,
     390,   347,   351,   391,    -1,    -1,    41,    -1,    94,    -1,
      -1,   240,   187,    -1,    -1,   128,   351,    -1,    -1,   314,
      55,   395,    -1,     3,    -1,   395,   347,     3,    -1,    -1,
     171,    55,   397,    -1,     3,   391,    -1,   397,   347,     3,
     391,    -1,    -1,   171,    55,   399,    -1,   400,    -1,   399,
     347,   400,    -1,     3,   391,    -1,     3,   344,     3,   391,
      -1,     5,   391,    -1,    -1,   152,   351,    -1,   152,   351,
     347,   351,    -1,   152,   351,   154,   351,    -1,    -1,   121,
     223,    -1,   121,   198,    -1,   121,   223,   199,   153,    -1,
     121,   198,   199,   153,    -1,    -1,   139,   404,    -1,     3,
      -1,   404,   347,     3,    -1,    -1,   405,    37,    -1,   405,
      88,    -1,   405,    92,    -1,   405,   126,    -1,   405,   204,
      -1,   405,   194,    -1,   405,   202,    -1,   405,   201,    -1,
     407,    -1,   406,   347,   407,    -1,    26,    -1,   351,   408,
      -1,    43,     3,    -1,     3,    -1,    -1,   410,    -1,   409,
     347,   410,    -1,   411,    -1,   413,    -1,     3,   408,   420,
      -1,     3,   344,     3,   408,   420,    -1,   423,   412,     3,
      -1,   345,   409,   346,    -1,    43,    -1,    -1,   410,   414,
     143,   411,   418,    -1,   410,   204,   411,    -1,   410,   204,
     411,   170,   351,    -1,   410,   416,   415,   143,   411,   419,
      -1,   410,   163,   417,   143,   411,    -1,    -1,   133,    -1,
      68,    -1,    -1,   169,    -1,   150,    -1,   188,    -1,   150,
     415,    -1,   188,   415,    -1,    -1,    -1,   419,    -1,   170,
     351,    -1,   230,   345,   404,   346,    -1,   231,   144,   421,
     345,   422,   346,    -1,   134,   144,   421,   345,   422,   346,
      -1,   115,   144,   421,   345,   422,   346,    -1,    -1,   121,
     143,    -1,    -1,     3,    -1,   422,   347,     3,    -1,   345,
     387,   346,    -1,   424,    -1,    89,   425,   117,     3,   388,
     398,   401,   504,    -1,   425,   149,    -1,   425,   176,    -1,
     425,   134,    -1,    -1,    89,   425,   426,   117,   409,   388,
      -1,     3,   427,    -1,   426,   347,     3,   427,    -1,    -1,
     344,    26,    -1,    89,   425,   117,   426,   230,   409,   388,
      -1,   428,    -1,    90,   217,     3,    -1,    90,   217,   136,
     244,     3,    -1,   429,    -1,    65,   135,     3,   170,     3,
     345,   430,   346,    -1,    65,   135,   136,   244,     3,   170,
       3,   345,   430,   346,    -1,    65,   226,   135,     3,   170,
       3,   345,   430,   346,    -1,    65,   226,   135,   136,   244,
       3,   170,     3,   345,   430,   346,    -1,    65,   135,     3,
     170,     3,   230,   232,   345,   430,   346,    -1,    65,   135,
     136,   244,     3,   170,     3,   230,   232,   345,   430,   346,
      -1,    65,   226,   135,     3,   170,     3,   230,   232,   345,
     430,   346,    -1,    65,   226,   135,   136,   244,     3,   170,
       3,   230,   232,   345,   430,   346,    -1,    65,   135,    77,
       3,   170,     3,   345,   430,   346,    -1,    65,   135,    77,
     136,   244,     3,   170,     3,   345,   430,   346,    -1,    65,
     226,   135,    77,     3,   170,     3,   345,   430,   346,    -1,
      65,   226,   135,    77,   136,   244,     3,   170,     3,   345,
     430,   346,    -1,    65,   135,    77,     3,   170,     3,   230,
     232,   345,   430,   346,    -1,    65,   226,   135,    77,     3,
     170,     3,   230,   232,   345,   430,   346,    -1,     3,    -1,
     430,   347,     3,    -1,   431,    -1,   290,   345,     3,   346,
      -1,   291,   345,     3,   346,    -1,   292,   345,     3,   346,
      -1,   293,   345,     3,   347,     3,   346,    -1,   432,    -1,
      90,   135,     3,    -1,   433,   435,    -1,   220,   217,     3,
      -1,   220,   217,     3,   347,   434,    -1,     3,    -1,   434,
     347,     3,    -1,    -1,   435,    66,    -1,   435,   183,    -1,
     435,    47,    45,    -1,   435,    46,    45,    -1,   436,    -1,
     179,   217,     3,    -1,   437,    -1,    38,   217,     3,    -1,
      38,   217,     3,   344,     3,    -1,   438,    -1,    34,   217,
       3,    35,    63,     3,    70,   345,   351,   346,    -1,    34,
     217,     3,    35,    63,     3,   226,   345,   471,   346,    -1,
      34,   217,     3,    35,    63,     3,   116,   144,   345,   468,
     346,   180,     3,   345,   469,   346,   470,    -1,    34,   217,
       3,    35,    63,     3,    70,   345,   351,   346,    18,   233,
      -1,    34,   217,     3,    35,    63,     3,   116,   144,   345,
     468,   346,   180,     3,   345,   469,   346,   470,    18,   233,
      -1,    34,   217,     3,    35,    63,     3,   174,   144,   345,
     467,   346,    -1,    34,   217,     3,    90,    63,     3,    -1,
      34,   217,     3,   181,    63,     3,   210,     3,    -1,    34,
     217,     3,   102,    63,     3,    -1,    34,   217,     3,    82,
      63,     3,    -1,    34,   217,     3,   233,    63,     3,    -1,
      34,   217,     3,    35,    76,     3,   478,   473,   439,    -1,
      34,   217,     3,    90,    76,     3,    -1,    34,   217,     3,
      90,     3,    -1,    34,   217,     3,   181,    76,     3,   210,
       3,    -1,    34,   217,     3,   181,     3,   210,     3,    -1,
      34,   217,     3,   160,    76,     3,   478,   473,   439,    -1,
      34,   217,     3,   160,     3,   478,   473,   439,    -1,    34,
     217,     3,    67,    76,     3,     3,   478,   473,   439,    -1,
      34,   217,     3,    67,     3,     3,   478,   473,   439,    -1,
      -1,   112,    -1,    36,     3,    -1,   440,    -1,   137,   444,
     445,     3,   446,   235,   448,   441,   504,    -1,   137,   444,
     445,     3,   446,   387,    -1,    -1,    -1,   172,   144,   223,
     442,   443,    -1,     3,    20,   351,    -1,   443,   347,     3,
      20,   351,    -1,    -1,   444,   149,    -1,   444,    85,    -1,
     444,   126,    -1,   444,   134,    -1,   139,    -1,    -1,    -1,
     345,   447,   346,    -1,     3,    -1,   447,   347,     3,    -1,
     345,   450,   346,    -1,    -1,   448,   347,   449,   345,   450,
     346,    -1,   351,    -1,    95,    -1,   450,   347,   351,    -1,
     450,   347,    95,    -1,   137,   444,   445,     3,   206,   451,
     441,    -1,     3,    20,   351,    -1,     3,    20,    95,    -1,
     451,   347,     3,    20,   351,    -1,   451,   347,     3,    20,
      95,    -1,   452,    -1,   189,   444,   445,     3,   446,   235,
     448,   441,    -1,   189,   444,   445,     3,   206,   451,   441,
      -1,   189,   444,   445,     3,   446,   387,   441,    -1,   453,
      -1,   223,   454,   409,   206,   455,   388,   398,   401,   504,
      -1,    -1,   444,   149,    -1,   444,   134,    -1,     3,    20,
     351,    -1,     3,   344,     3,    20,   351,    -1,   455,   347,
       3,    20,   351,    -1,   455,   347,     3,   344,     3,    20,
     351,    -1,   181,   217,     3,   210,     3,    -1,   456,    -1,
      65,    78,   457,     3,    -1,    65,   195,   457,     3,    -1,
      90,    78,     3,    -1,    90,    78,   136,   244,     3,    -1,
      90,   195,     3,    -1,    90,   195,   136,   244,     3,    -1,
      -1,   136,   244,    -1,   458,    -1,    65,    84,     3,    43,
     478,    -1,    65,    84,     3,    43,   478,    95,   351,    -1,
      65,    84,     3,    43,   478,    18,   166,    -1,    65,    84,
       3,    43,   478,    70,   345,   351,   346,    -1,    65,    84,
       3,    43,   478,    18,   166,    70,   345,   351,   346,    -1,
     459,    -1,   231,     3,    -1,   231,    78,     3,    -1,   460,
      -1,    65,   464,   217,   457,     3,   345,   465,   346,   461,
      -1,    65,   464,   217,   457,     3,   344,     3,   345,   465,
     346,   461,    -1,    -1,   461,    40,    20,     5,    -1,   461,
      40,     5,    -1,   461,   170,     3,    89,     3,    -1,   461,
     170,     3,   213,     3,    -1,   461,   196,    55,   232,   345,
       3,   346,   197,     5,    -1,   461,   196,    55,   177,   345,
       3,   346,   345,   462,   346,    -1,   463,    -1,   462,   347,
     463,    -1,   196,     3,   235,   147,   215,     4,   170,   164,
       5,    -1,   196,     3,   235,   147,   215,   157,   170,   164,
       5,    -1,    65,   464,   217,   457,     3,   345,   465,   346,
     480,    -1,    65,   464,   217,   457,     3,   480,    -1,    65,
     464,   217,   457,     3,   344,     3,   345,   465,   346,   480,
      -1,    65,   464,   217,   457,     3,   344,     3,   480,    -1,
      -1,   211,    -1,   212,   211,    -1,   466,    -1,   465,   347,
     466,    -1,   174,   144,   345,   467,   346,    -1,    63,     3,
     174,   144,   345,   467,   346,    -1,   144,   345,   404,   346,
      -1,   135,   345,   404,   346,    -1,   119,   135,   345,   404,
     346,    -1,   119,   144,   345,   404,   346,    -1,    70,   345,
     351,   346,    -1,    63,     3,    70,   345,   351,   346,    -1,
     116,   144,   345,   468,   346,   180,     3,   345,   469,   346,
     470,    -1,   116,   144,   345,   468,   346,   180,     3,   344,
       3,   345,   469,   346,   470,    -1,    63,     3,   116,   144,
     345,   468,   346,   180,     3,   345,   469,   346,   470,    -1,
      63,     3,   116,   144,   345,   468,   346,   180,     3,   344,
       3,   345,   469,   346,   470,    -1,   226,   345,   471,   346,
      -1,    63,     3,   226,   345,   471,   346,    -1,     3,    -1,
     467,   347,     3,    -1,     3,    -1,   468,   347,     3,    -1,
       3,    -1,   469,   347,     3,    -1,    -1,   470,   170,    89,
      66,    -1,   470,   170,    89,   206,   166,    -1,   470,   170,
      89,   183,    -1,   470,   170,    89,   206,    95,    -1,   470,
     170,   223,    66,    -1,   470,   170,   223,   206,   166,    -1,
     470,   170,   223,   183,    -1,   470,   170,   223,   206,    95,
      -1,   470,   170,    89,   165,    -1,   470,   170,   223,   165,
      -1,   470,   156,   118,    -1,   470,   156,   203,    -1,   470,
     156,   173,    -1,   470,    80,    -1,   470,    18,    80,    -1,
     470,    80,   131,    81,    -1,   470,    80,   131,   129,    -1,
       3,    -1,   471,   347,     3,    -1,    -1,   472,     3,   478,
     473,    -1,    -1,   473,    18,   166,    -1,   473,   166,    -1,
     473,    95,     4,    -1,   473,    95,     5,    -1,   473,    95,
       7,    -1,   473,    95,     6,    -1,   473,    95,   296,   345,
     346,    -1,   473,    95,   297,   345,   346,    -1,   473,    95,
     298,   345,   346,    -1,   473,    95,    64,    -1,   473,    95,
     345,   351,   346,    -1,   473,    40,    -1,   473,    40,   345,
       5,   347,     5,   346,    -1,   473,    40,   345,     5,   346,
      -1,   473,    45,   345,     5,   347,     5,   346,    -1,   473,
      45,   345,     5,   346,    -1,   473,    45,    -1,   473,   226,
     144,    -1,   473,   226,    -1,   473,   174,   144,    -1,   473,
     144,    -1,   473,    71,     4,    -1,   473,    70,   345,   351,
     346,    -1,   473,    63,     3,   226,    -1,   473,    63,     3,
     174,   144,    -1,   473,    63,     3,    70,   345,   351,   346,
      -1,   473,    48,    44,    43,   345,   351,   346,    49,    -1,
     473,    48,    44,    43,   345,   351,   346,    50,    -1,   473,
      48,    44,    43,   345,   351,   346,    -1,   473,    43,   345,
     351,   346,    49,    -1,   473,    43,   345,   351,   346,    50,
      -1,   473,    43,   345,   351,   346,    -1,    -1,   345,     5,
     346,    -1,   345,     5,   347,     5,   346,    -1,    -1,    56,
      -1,    -1,   476,   224,    -1,   476,   243,    -1,    -1,   477,
      74,   206,     4,    -1,   477,    75,     4,    -1,    59,   474,
      -1,   209,   474,   476,    -1,   205,   474,   476,    -1,   162,
     474,   476,    -1,   140,   474,   476,    -1,   132,   474,   476,
      -1,    58,   474,   476,    -1,   178,   474,   476,    -1,    96,
     474,   476,    -1,   114,   474,   476,    -1,    98,   474,   476,
      -1,    99,    -1,   222,    -1,   216,    -1,    97,    -1,   241,
      -1,    74,   474,   477,    -1,   234,   345,     5,   346,   477,
      -1,    56,   474,    -1,   236,   345,     5,   346,    -1,   221,
      -1,    53,    -1,   161,    -1,   155,    -1,   208,   475,   477,
      -1,   214,   475,   477,    -1,   158,   475,   477,    -1,   148,
     475,   477,    -1,   105,   345,   479,   346,   477,    -1,   206,
     345,   479,   346,   477,    -1,    54,    -1,   227,    -1,   228,
      -1,     4,    -1,   479,   347,     4,    -1,   481,   412,   387,
      -1,    -1,   134,    -1,   189,    -1,   482,    -1,   206,   195,
       3,    -1,   206,   195,    95,    -1,   206,   483,    -1,   484,
      -1,   483,   347,   484,    -1,     8,    20,   351,    -1,     8,
       9,   351,    -1,   485,    -1,    65,   175,     3,   345,   486,
     346,    43,    52,   490,   106,    -1,    65,   175,     3,   345,
     486,   346,    52,   490,   106,    -1,    65,    10,   189,   175,
       3,   345,   486,   346,    43,    52,   490,   106,    -1,    65,
      10,   189,   175,     3,   345,   486,   346,    52,   490,   106,
      -1,    65,   120,     3,   345,   486,   346,   186,   489,    43,
      52,   490,   106,    -1,    65,   120,     3,   345,   486,   346,
     186,   489,    52,   490,   106,    -1,    65,    10,   189,   120,
       3,   345,   486,   346,   186,   489,    43,    52,   490,   106,
      -1,    65,    10,   189,   120,     3,   345,   486,   346,   186,
     489,    52,   490,   106,    -1,    -1,   487,    -1,   488,    -1,
     487,   347,   488,    -1,     3,   478,    -1,    16,     3,   478,
      -1,   168,     3,   478,    -1,   130,     3,   478,    -1,   132,
      -1,   140,    -1,   234,    -1,   214,    -1,    54,    -1,   114,
      -1,    96,    -1,    58,    -1,    99,    -1,   216,    -1,    -1,
     490,   491,    -1,   490,    52,   490,   106,    -1,   490,   136,
     490,   106,   136,    -1,   490,   239,   490,   106,   239,    -1,
     490,   146,   490,   106,   146,    -1,   490,   113,   490,   106,
     113,    -1,   490,    69,   490,   106,    69,    -1,     3,    -1,
       4,    -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,
      18,    -1,    10,    -1,    12,    -1,    16,    -1,    42,    -1,
     207,    -1,   137,    -1,   223,    -1,    89,    -1,   117,    -1,
     237,    -1,   206,    -1,   139,    -1,   235,    -1,    65,    -1,
      90,    -1,   217,    -1,   135,    -1,   218,    -1,   107,    -1,
     101,    -1,    79,    -1,    83,    -1,    60,    -1,   184,    -1,
     145,    -1,   142,    -1,    62,    -1,   167,    -1,   111,    -1,
      61,    -1,   123,    -1,   109,    -1,   168,    -1,   130,    -1,
     121,    -1,    46,    -1,   191,    -1,   182,    -1,   108,    -1,
     193,    -1,    51,    -1,   100,    -1,   190,    -1,   192,    -1,
      43,    -1,   170,    -1,   171,    -1,    55,    -1,   122,    -1,
     128,    -1,   152,    -1,   154,    -1,   143,    -1,   150,    -1,
     188,    -1,   133,    -1,   169,    -1,   118,    -1,    68,    -1,
     163,    -1,   230,    -1,   166,    -1,    95,    -1,   174,    -1,
     144,    -1,   226,    -1,    70,    -1,   116,    -1,   180,    -1,
      66,    -1,   183,    -1,   165,    -1,   132,    -1,   140,    -1,
     234,    -1,   214,    -1,    54,    -1,   114,    -1,    96,    -1,
      58,    -1,    99,    -1,   216,    -1,   205,    -1,    98,    -1,
      74,    -1,   227,    -1,    53,    -1,   225,    -1,   104,    -1,
     138,    -1,    37,    -1,    88,    -1,   244,    -1,   238,    -1,
     240,    -1,   175,    -1,   120,    -1,   186,    -1,   345,    -1,
     346,    -1,   347,    -1,   343,    -1,   344,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    17,    -1,
     348,    -1,   285,    -1,   286,    -1,   287,    -1,   288,    -1,
     289,    -1,     8,    -1,   492,    -1,    90,   175,     3,    -1,
      90,   175,   136,   244,     3,    -1,    90,   120,     3,    -1,
      90,   120,   136,   244,     3,    -1,   493,    -1,    60,     3,
     345,   346,    -1,    60,     3,   345,   494,   346,    -1,   495,
      -1,   494,   347,   495,    -1,     5,    -1,     4,    -1,     7,
      -1,   166,    -1,     6,    -1,     3,    -1,     8,    -1,   496,
      -1,    65,   192,     3,   497,   498,   170,     3,   121,   100,
     190,    52,   490,   106,    -1,    51,    -1,    36,    -1,   137,
      -1,   223,    -1,    89,    -1,   499,    -1,    90,   192,     3,
      -1,    90,   192,   136,   244,     3,    -1,    34,   192,     3,
     102,    -1,    34,   192,     3,    82,    -1,   500,    -1,    65,
     334,   457,     3,   501,    -1,    -1,   501,   502,    -1,   339,
     240,     5,    -1,   339,     5,    -1,   340,    55,     5,    -1,
     340,     5,    -1,   341,     5,    -1,   157,     5,    -1,   342,
      -1,    18,   342,    -1,   503,    -1,    90,   334,     3,    -1,
      90,   334,   136,   244,     3,    -1,    34,   334,     3,   501,
      -1,    34,   334,     3,    47,    -1,    34,   334,     3,    47,
     240,     5,    -1,    34,   334,     3,   181,   210,     3,    -1,
      -1,   185,    26,    -1,   185,   505,    -1,     3,    -1,   505,
     347,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   413,   413,   414,   419,   426,   427,   428,   446,   454,
     462,   468,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   501,   501,   510,   510,   512,   512,   514,   514,
     518,   519,   520,   521,   522,   525,   526,   529,   530,   533,
     534,   537,   537,   538,   538,   539,   539,   547,   547,   555,
     555,   566,   570,   571,   572,   573,   574,   575,   576,   577,
     581,   581,   583,   583,   585,   585,   588,   588,   590,   590,
     592,   592,   594,   594,   596,   596,   598,   598,   601,   601,
     603,   603,   605,   605,   607,   607,   609,   609,   611,   611,
     613,   613,   615,   615,   618,   618,   620,   620,   622,   622,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   661,   662,   663,   664,   665,   666,
     667,   668,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   693,   694,   695,   696,   697,   699,
     700,   702,   703,   704,   706,   707,   708,   709,   716,   723,
     730,   734,   738,   742,   746,   750,   756,   757,   758,   761,
     767,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     785,   787,   789,   791,   795,   803,   814,   815,   818,   819,
     822,   830,   838,   849,   859,   860,   873,   889,   890,   891,
     892,   895,   902,   910,   911,   912,   915,   916,   919,   920,
     924,   925,   928,   930,   934,   935,   938,   940,   944,   945,
     948,   949,   952,   958,   965,   974,   975,   976,   977,   980,
     981,   982,   983,   984,   987,   988,   991,   992,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1006,  1007,  1008,
    1016,  1022,  1023,  1024,  1027,  1028,  1031,  1032,  1036,  1043,
    1044,  1045,  1048,  1049,  1053,  1055,  1057,  1059,  1061,  1065,
    1066,  1067,  1070,  1071,  1074,  1075,  1078,  1079,  1080,  1083,
    1084,  1087,  1088,  1092,  1094,  1096,  1098,  1101,  1102,  1105,
    1106,  1109,  1113,  1123,  1131,  1132,  1133,  1134,  1138,  1142,
    1144,  1148,  1148,  1150,  1155,  1162,  1169,  1179,  1186,  1193,
    1203,  1211,  1221,  1229,  1238,  1247,  1257,  1265,  1274,  1283,
    1293,  1302,  1314,  1319,  1324,  1330,  1337,  1344,  1351,  1361,
    1368,  1377,  1384,  1390,  1398,  1404,  1412,  1413,  1414,  1415,
    1416,  1420,  1427,  1436,  1443,  1449,  1460,  1463,  1469,  1475,
    1482,  1488,  1495,  1501,  1507,  1513,  1519,  1525,  1531,  1537,
    1543,  1549,  1555,  1561,  1567,  1573,  1579,  1587,  1588,  1589,
    1592,  1600,  1606,  1619,  1620,  1620,  1623,  1631,  1641,  1642,
    1643,  1644,  1645,  1648,  1648,  1651,  1652,  1655,  1665,  1678,
    1679,  1679,  1682,  1683,  1684,  1685,  1688,  1692,  1693,  1694,
    1695,  1701,  1704,  1710,  1715,  1721,  1729,  1738,  1739,  1740,
    1744,  1755,  1767,  1778,  1793,  1798,  1802,  1803,  1807,  1809,
    1811,  1813,  1817,  1818,  1824,  1828,  1830,  1832,  1834,  1836,
    1841,  1845,  1846,  1850,  1859,  1869,  1873,  1874,  1875,  1876,
    1877,  1878,  1880,  1884,  1885,  1888,  1903,  1910,  1925,  1938,
    1953,  1966,  1967,  1968,  1971,  1972,  1975,  1976,  1977,  1978,
    1979,  1980,  1981,  1982,  1983,  1985,  1987,  1989,  1991,  1993,
    1997,  1998,  2001,  2002,  2005,  2006,  2009,  2010,  2011,  2012,
    2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,
    2023,  2024,  2025,  2026,  2029,  2030,  2033,  2033,  2043,  2044,
    2045,  2046,  2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,
    2061,  2062,  2063,  2064,  2065,  2066,  2067,  2068,  2069,  2070,
    2071,  2072,  2073,  2074,  2075,  2076,  2077,  2078,  2079,  2080,
    2081,  2084,  2085,  2086,  2089,  2090,  2093,  2094,  2095,  2098,
    2099,  2100,  2104,  2105,  2106,  2107,  2108,  2109,  2110,  2111,
    2112,  2113,  2114,  2115,  2116,  2117,  2118,  2119,  2120,  2121,
    2122,  2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,
    2132,  2133,  2134,  2135,  2136,  2139,  2140,  2143,  2156,  2157,
    2158,  2162,  2165,  2166,  2167,  2168,  2168,  2170,  2171,  2179,
    2183,  2189,  2195,  2202,  2209,  2215,  2221,  2228,  2237,  2238,
    2241,  2242,  2245,  2246,  2247,  2248,  2251,  2252,  2253,  2254,
    2255,  2256,  2257,  2258,  2259,  2260,  2267,  2268,  2269,  2270,
    2271,  2272,  2273,  2274,  2277,  2278,  2279,  2279,  2279,  2280,
    2280,  2280,  2280,  2280,  2280,  2281,  2281,  2281,  2281,  2281,
    2281,  2281,  2281,  2281,  2282,  2282,  2282,  2282,  2282,  2282,
    2282,  2283,  2283,  2283,  2283,  2284,  2284,  2284,  2284,  2284,
    2284,  2284,  2284,  2284,  2284,  2284,  2284,  2285,  2285,  2285,
    2285,  2285,  2285,  2285,  2285,  2286,  2286,  2286,  2286,  2286,
    2286,  2286,  2286,  2287,  2287,  2287,  2287,  2287,  2287,  2287,
    2287,  2287,  2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,
    2289,  2289,  2289,  2290,  2290,  2290,  2290,  2290,  2290,  2290,
    2290,  2291,  2291,  2291,  2291,  2291,  2291,  2291,  2292,  2292,
    2292,  2292,  2292,  2292,  2292,  2293,  2293,  2293,  2293,  2294,
    2294,  2294,  2294,  2294,  2294,  2294,  2294,  2294,  2294,  2294,
    2294,  2295,  2295,  2295,  2295,  2295,  2296,  2303,  2307,  2313,
    2319,  2325,  2337,  2341,  2347,  2355,  2356,  2359,  2360,  2361,
    2362,  2363,  2364,  2365,  2372,  2376,  2384,  2385,  2388,  2389,
    2390,  2393,  2397,  2403,  2412,  2420,  2431,  2435,  2444,  2445,
    2449,  2450,  2451,  2452,  2453,  2454,  2455,  2456,  2459,  2463,
    2469,  2479,  2486,  2493,  2501,  2511,  2512,  2513,  2516,  2517
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
     586,   587,   588,    59,    46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   349,   350,   350,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   352,   351,   353,   351,   354,   351,   355,   351,
     351,   351,   351,   351,   351,   351,   351,   356,   356,   357,
     357,   358,   351,   359,   351,   360,   351,   361,   351,   362,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     363,   351,   364,   351,   365,   351,   366,   351,   367,   351,
     368,   351,   369,   351,   370,   351,   371,   351,   372,   351,
     373,   351,   374,   351,   375,   351,   376,   351,   377,   351,
     378,   351,   379,   351,   380,   351,   381,   351,   382,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   383,   383,   383,   351,
     351,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     351,   351,   351,   351,   385,   385,   351,   351,   351,   351,
     351,   351,   351,   386,   387,   387,   387,   388,   388,   389,
     389,   390,   390,   391,   391,   391,   392,   392,   393,   393,
     394,   394,   395,   395,   396,   396,   397,   397,   398,   398,
     399,   399,   400,   400,   400,   401,   401,   401,   401,   402,
     402,   402,   402,   402,   403,   403,   404,   404,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   406,   406,   406,
     407,   408,   408,   408,   409,   409,   410,   410,   411,   411,
     411,   411,   412,   412,   413,   413,   413,   413,   413,   414,
     414,   414,   415,   415,   416,   416,   417,   417,   417,   418,
     418,   419,   419,   420,   420,   420,   420,   421,   421,   422,
     422,   423,   386,   424,   425,   425,   425,   425,   424,   426,
     426,   427,   427,   424,   386,   428,   428,   386,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   430,   430,   430,   431,   431,   431,   431,   386,
     432,   386,   433,   433,   434,   434,   435,   435,   435,   435,
     435,   386,   436,   386,   437,   437,   386,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   439,   439,   439,
     386,   440,   440,   441,   442,   441,   443,   443,   444,   444,
     444,   444,   444,   445,   445,   446,   446,   447,   447,   448,
     449,   448,   450,   450,   450,   450,   440,   451,   451,   451,
     451,   386,   452,   452,   452,   386,   453,   454,   454,   454,
     455,   455,   455,   455,   386,   386,   456,   456,   386,   386,
     386,   386,   457,   457,   386,   458,   458,   458,   458,   458,
     386,   459,   459,   386,   460,   460,   461,   461,   461,   461,
     461,   461,   461,   462,   462,   463,   463,   460,   460,   460,
     460,   464,   464,   464,   465,   465,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     467,   467,   468,   468,   469,   469,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   471,   471,   472,   466,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   474,   474,   474,   475,   475,   476,   476,   476,   477,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   479,   479,   480,   481,   481,
     481,   386,   482,   482,   482,   483,   483,   484,   484,   386,
     485,   485,   485,   485,   485,   485,   485,   485,   486,   486,
     487,   487,   488,   488,   488,   488,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   490,
     490,   490,   490,   490,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   386,   492,   492,
     492,   492,   386,   493,   493,   494,   494,   495,   495,   495,
     495,   495,   495,   495,   386,   496,   497,   497,   498,   498,
     498,   386,   499,   499,   386,   386,   386,   500,   501,   501,
     502,   502,   502,   502,   502,   502,   502,   502,   386,   503,
     503,   386,   386,   386,   386,   504,   504,   504,   505,   505
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
       3,     3,     1,     1,     4,     6,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     3,    12,    12,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     1,     3,     0,     3,     2,     4,     0,     3,
       1,     3,     2,     4,     2,     0,     2,     4,     4,     0,
       2,     2,     4,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     8,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     3,     5,     1,     8,    10,
       9,    11,    10,    12,    11,    13,     9,    11,    10,    12,
      11,    12,     1,     3,     1,     4,     4,     4,     6,     1,
       3,     2,     3,     5,     1,     3,     0,     2,     2,     3,
       3,     1,     3,     1,     3,     5,     1,    10,    10,    17,
      12,    19,    11,     6,     8,     6,     6,     6,     9,     6,
       5,     8,     7,     9,     8,    10,     9,     0,     1,     2,
       1,     9,     6,     0,     0,     5,     3,     5,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     1,     3,     3,
       0,     6,     1,     1,     3,     3,     7,     3,     3,     5,
       5,     1,     8,     7,     7,     1,     9,     0,     2,     2,
       3,     5,     5,     7,     5,     1,     4,     4,     3,     5,
       3,     5,     0,     2,     1,     5,     7,     7,     9,    11,
       1,     2,     3,     1,     9,    11,     0,     4,     3,     5,
       5,     9,    10,     1,     3,     9,     9,     9,     6,    11,
       8,     0,     1,     2,     1,     3,     5,     7,     4,     4,
       5,     5,     4,     6,    11,    13,    13,    15,     4,     6,
       1,     3,     1,     3,     1,     3,     0,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     4,     3,     3,     3,
       2,     3,     4,     4,     1,     3,     0,     4,     0,     3,
       2,     3,     3,     3,     3,     5,     5,     5,     3,     5,
       2,     7,     5,     7,     5,     2,     3,     2,     3,     2,
       3,     5,     4,     5,     7,     8,     8,     7,     6,     6,
       5,     0,     3,     5,     0,     1,     0,     2,     2,     0,
       4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     5,
       2,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     1,     1,     1,     1,     3,     3,     0,     1,
       1,     1,     3,     3,     2,     1,     3,     3,     3,     1,
      10,     9,    12,    11,    12,    11,    14,    13,     0,     1,
       1,     3,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     4,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       3,     5,     1,     4,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,    13,     1,     1,     1,     1,
       1,     1,     3,     5,     4,     4,     1,     5,     0,     2,
       3,     2,     3,     2,     2,     2,     1,     2,     1,     3,
       5,     4,     4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   481,   327,     0,   408,     0,     0,
     408,     0,   268,     0,   408,     0,     0,     0,   223,   322,
     334,   337,   359,   366,   371,   373,   376,   400,   431,   435,
     445,   454,   460,   463,   611,   619,   777,   782,   794,   801,
     806,   818,     0,     0,     0,     0,     0,     0,   452,     0,
       0,     0,     0,     0,   452,   482,     0,     0,   452,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   414,
       0,     0,   414,     0,     0,   614,   615,     0,     0,     0,
       0,   461,     0,     1,     2,   361,     0,     0,   808,   374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   483,     0,     0,   452,   331,     0,   326,   324,
     325,     0,   448,     0,   780,     0,   360,   778,     0,   802,
       0,   450,     0,   335,     0,   819,     0,   410,   411,   412,
     413,   409,     0,   372,     0,     0,     0,     0,   612,   613,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     279,   269,   220,     0,   221,   222,   270,   271,   272,    11,
     274,   276,   275,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,   224,   277,   362,   412,
     409,   283,     0,     0,   284,   286,   287,   293,   462,     3,
       0,     0,   367,   368,   805,   804,     0,     0,     0,     0,
       0,     0,     0,     0,   822,     0,   821,     0,   792,   788,
     787,   791,   789,   793,   790,   783,     0,   785,     0,     0,
     453,   446,     0,   628,     0,     0,     0,     0,   628,   797,
     796,     0,   447,     0,     0,     0,   808,     0,     0,   329,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,   415,   618,   617,   616,     0,    49,     0,
      30,    29,    18,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,   316,     0,     0,     0,     0,
     301,   300,   304,   308,   305,     0,     0,   302,   292,     0,
     370,   369,     0,     0,     0,     0,     0,   390,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   816,   809,   375,   784,     0,     0,
       0,   593,   602,   561,   561,   561,   561,   561,   586,   561,
     583,     0,   561,   561,   561,   564,   595,   564,   594,   561,
     561,   561,     0,   564,   561,   564,   585,   592,   584,   603,
     604,     0,     0,   587,   455,     0,     0,     0,     0,     0,
     629,   630,     0,     0,     0,     0,     0,   800,   798,   799,
       0,     0,     0,     0,     0,   807,   608,   332,     0,   248,
       0,   227,   331,   449,   781,   779,   803,   451,   336,   820,
       0,     0,     0,   444,     0,     0,     5,    47,    50,     0,
      44,     0,     0,   212,     0,     0,     0,     0,   198,   196,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,   188,   189,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,    19,
      21,    22,    20,   218,   216,    42,     0,    40,   184,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    31,
      23,    24,    26,    12,    13,    14,    15,    16,    17,    25,
      28,    27,   281,   227,     0,   278,   364,   363,   283,     0,
       0,     0,   288,   321,   291,     0,   227,   285,   302,   302,
       0,   295,     0,   303,     0,   290,     0,     0,     0,     0,
     386,   383,   389,   385,   528,     0,     0,     0,     0,   387,
     823,   824,   817,   815,   811,     0,   813,     0,   814,   786,
     628,   628,     0,   590,   566,   572,   569,   566,   566,     0,
     566,   566,   566,   565,   569,   569,   566,   566,   566,     0,
     569,   566,   569,     0,     0,     0,     0,     0,   632,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   609,   610,     0,   526,   478,
     293,   228,     0,   255,   227,   328,   330,     0,   403,   417,
       0,     0,   402,   403,     0,   403,     0,    61,     0,   210,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,   146,   147,   148,   149,   150,   151,     0,     0,
       0,     0,   127,     0,     0,     0,   131,   132,   133,   135,
       0,     0,   137,     0,   140,   141,   142,     0,     0,     0,
       0,     0,     0,    68,    62,    63,    64,    65,    66,    67,
     117,   118,   119,     0,     0,     0,   194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,   173,   174,   175,
       0,    43,    41,     0,     0,   219,   217,    53,     0,     0,
      38,    34,    36,     0,   229,     0,     0,   316,   318,   318,
     318,     0,     0,     0,   248,   306,   307,     0,     0,   309,
       0,     0,     0,     0,     0,   528,   528,     0,   397,   528,
     392,     0,     0,   810,   812,     0,     0,     0,   578,   588,
     580,   582,   605,     0,   581,   577,   576,   599,   598,   575,
     579,   574,     0,   596,   573,   597,     0,     0,   457,     0,
     456,   633,   635,   634,     0,   631,     0,   352,     0,     0,
       0,     0,     0,   354,     0,     0,     0,     0,     0,   646,
       0,     0,     0,     0,     0,     0,   608,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   484,     0,     0,     0,
       0,   825,   333,     0,     0,     0,   426,   416,     0,     0,
     403,   433,   403,   434,    48,   214,     0,   213,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    72,    74,     0,     0,     0,
       0,     0,   106,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,   238,   227,   365,   289,
       0,     0,     0,     0,   440,     0,     0,   255,   298,   296,
       0,     0,   294,   310,     0,     0,     0,     0,     0,   397,
     397,   528,     0,     0,   540,     0,   545,     0,     0,     0,
       0,     0,   398,   549,   530,     0,   547,   394,   397,   384,
     391,     0,     0,   562,     0,   567,   568,     0,     0,   569,
       0,   569,   569,   591,     0,     0,   640,   643,   642,   644,
     641,   636,   637,   639,   645,   638,     0,     0,     0,     0,
       0,     0,   338,     0,     0,     0,     0,     0,     0,   646,
       0,     0,     0,     0,     0,     0,     0,     0,   526,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
     526,     0,   607,   233,   233,   249,   250,   256,     0,   323,
     428,   427,     0,     0,   418,   423,   422,     0,   420,   825,
     432,   211,   215,     0,   112,   111,     0,   116,     0,     0,
     199,   200,   145,   123,   124,     0,     0,   128,   129,   130,
     134,   136,   138,   179,   180,   181,   182,     0,    69,    78,
      80,    76,    82,    84,    86,   120,     0,     0,   122,   195,
     240,   240,   240,    88,     0,     0,    96,     0,     0,   104,
     240,   240,   152,     0,     0,     0,   164,   165,     0,     0,
     168,     0,   171,     0,   176,     0,    52,    56,     0,     0,
      46,     0,     0,     0,    33,     0,     0,   248,   229,   317,
       0,     0,     0,     0,     0,     0,   825,   311,     0,   297,
       0,     0,     0,   524,     0,   388,   396,   397,   529,   399,
       0,     0,     0,     0,     0,     0,   550,   531,   532,   534,
     533,   538,     0,     0,     0,     0,   548,   546,   393,     0,
       0,   646,     0,     0,   571,   600,   606,   601,   589,     0,
     458,     0,   646,     0,     0,     0,     0,     0,   353,     0,
     346,     0,     0,     0,     0,   654,   655,   656,   658,   657,
     776,   661,   662,   663,   769,   660,   659,   764,   765,   766,
     767,   768,   751,   664,   705,   696,   701,   646,   747,   737,
     708,   740,   683,   690,   687,   674,   730,   719,   646,   727,
     745,   681,   682,   752,   668,   675,   723,   739,   744,   741,
     702,   680,   749,   621,   679,   699,   692,   689,   646,   738,
     728,   669,   718,   757,   695,   709,   691,   710,   694,   733,
     716,   677,   646,   666,   750,   672,   734,   686,   713,   725,
     685,   646,   714,   711,   712,   720,   732,   722,   688,   693,
     717,   706,   707,   724,   756,   729,   698,   731,   684,   758,
     715,   703,   697,   704,   700,   743,   671,   665,   736,   742,
     676,   678,   667,   748,   726,   746,   721,   735,   673,   670,
     754,   646,   755,   753,   771,   772,   773,   774,   775,   762,
     763,   759,   760,   761,   770,   647,     0,     0,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   266,     0,     0,     0,     0,   464,   477,
     485,   528,   234,   235,     0,   252,   254,     0,     0,     0,
     828,   826,   827,   404,     0,   419,     0,     0,   401,     0,
       0,   115,   202,   203,   204,   205,   208,   207,   209,   201,
     206,     0,     0,     0,   240,   240,   240,   240,   240,   240,
       0,     0,     0,   244,   244,   244,   240,     0,     0,     0,
     240,     0,     0,     0,   240,   244,   244,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    58,    39,    35,    37,
     233,   236,   239,   255,   238,   319,     0,     0,     0,   441,
     442,     0,   436,     0,   377,   502,     0,   500,     0,   378,
       0,   395,     0,     0,     0,     0,     0,     0,   552,     0,
       0,     0,     0,     0,     0,   646,     0,   563,   570,     0,
     646,     0,   342,   355,   356,   357,     0,     0,     0,     0,
     339,   620,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,   466,     0,     0,     0,     0,
     492,     0,     0,     0,   489,     0,   488,     0,   498,     0,
       0,     0,   527,   233,   251,   258,   257,     0,     0,   430,
     429,   425,   424,     0,   113,   110,   125,   126,   183,   244,
     244,   244,   244,   244,   244,   185,     0,   121,     0,     0,
       0,     0,     0,   244,    90,     0,     0,   244,    98,     0,
       0,   244,     0,     0,   161,   162,   163,   166,   167,     0,
     172,   177,   231,     0,     0,   230,   259,   248,   315,     0,
     314,   313,     0,   312,     0,     0,     0,   382,     0,   525,
     542,     0,   560,   544,     0,     0,     0,   553,   551,   535,
     536,   537,   539,     0,   646,     0,   623,   459,     0,   625,
       0,   350,   347,     0,   648,     0,     0,     0,     0,     0,
     646,   344,     0,     0,     0,   341,   465,   479,     0,     0,
       0,     0,     0,   490,   491,   267,   486,   468,     0,     0,
       0,   253,   829,     0,   405,     0,     0,     0,     0,     0,
       0,     0,     0,   242,   241,     0,    71,    73,    75,     0,
     240,     0,     0,     0,   240,     0,     0,     0,   107,   109,
       0,   237,   233,     0,   264,   255,   320,   443,   380,     0,
     503,   501,     0,   558,   559,     0,     0,     0,   646,     0,
     622,   624,   358,   343,   653,   652,   649,   651,   650,     0,
     351,   349,     0,   493,     0,     0,   499,     0,   467,     0,
       0,     0,     0,     0,     0,   421,    79,    81,    77,    83,
      85,    87,   186,     0,   233,   245,    89,   244,    92,    94,
      97,   244,   100,   102,   105,   169,   232,   261,   260,     0,
     225,   226,     0,   541,   543,   557,   554,     0,   627,   795,
     345,     0,   487,     0,   469,   470,     0,     0,   406,     0,
     243,   246,     0,     0,   240,   240,     0,   240,   240,     0,
       0,   265,     0,   555,   556,   626,     0,     0,     0,     0,
       0,     0,   233,    91,   244,   244,    99,   244,   244,   263,
     262,   504,     0,     0,     0,     0,     0,     0,   407,   247,
       0,     0,     0,     0,   506,     0,     0,     0,     0,   506,
       0,     0,    93,    95,   101,   103,   379,   505,     0,     0,
       0,   494,     0,     0,   473,   471,     0,   520,     0,     0,
       0,   506,   506,     0,     0,   472,     0,   521,   381,     0,
     517,   519,   518,     0,     0,     0,   496,   495,     0,   474,
     522,   523,   507,   515,   509,     0,   511,   516,   513,     0,
     506,     0,   510,   508,   514,   512,   497,     0,     0,     0,
       0,     0,     0,     0,   475,   476
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   587,   943,  1122,  1123,  1121,   588,   589,   933,
    1117,   934,  1118,   596,  1290,  1291,  1292,  1586,  1584,  1585,
    1587,  1588,  1589,  1596,  1840,  1944,  1945,  1600,  1844,  1947,
    1948,  1604,  1300,  1301,   602,  1065,   345,    17,    18,   569,
    1126,  1621,  1555,  1755,  1327,  1593,  1834,  1730,  1905,   823,
    1235,  1236,  1041,  1854,  1920,  1544,    77,   256,   257,   459,
     263,   264,   265,   479,   266,   476,   744,   477,   740,  1142,
    1143,   732,  1131,  1626,   267,    19,    60,   111,   319,    20,
      21,  1012,  1013,    22,    23,   727,    85,    24,    25,    26,
    1167,    27,  1046,  1708,  1824,    69,   132,   582,   830,  1050,
    1567,  1247,   828,    28,    29,    80,   736,    30,    93,    31,
      32,    33,  1548,  2003,  2004,    59,  1035,  1036,  1638,  1636,
    1972,  1996,  1344,  1037,   968,   773,   784,   978,   979,   544,
     983,   819,   820,    34,    75,    76,    35,   549,   550,   551,
    1196,  1210,  1525,    36,    37,   296,   297,    38,   311,   560,
      39,    40,   286,   505,    41,  1239,  1562
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1507
static const yytype_int16 yypact[] =
{
   10494,  -140,  -112,   118, 10415, -1507,   631, -1507,   -50,   -15,
   -1507,    27, -1507,    30,    19,   101,   249,   -78, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507,   329,   416,   465,   470,   135,   314,   373,   587,
     619,   330,   664,   675,   373, -1507,   371,   525,   373,   475,
      52,   122,   266,   695,   320,   445,   448,   449,   450,   540,
     702,   704,   540,   148,    81,   365, -1507,  5961,   711,   554,
      48, -1507,   716, -1507, 10494,    56,   425,  1210,    28,   408,
      42,   306,   501,   751,   715,   424,   615,   451,   551,   453,
     468,   789, -1507,   447,   806,   373,   495,   809, -1507, -1507,
   -1507,   -91, -1507,   575, -1507,   586, -1507, -1507,   617, -1507,
     621, -1507,   623, -1507,   628, -1507,   633, -1507, -1507, -1507,
   -1507, -1507,   819, -1507,   670,   883,  8157,  8157, -1507, -1507,
     882,    86, -1507, -1507, -1507, -1507,   894,  8157,  8157,  8157,
   -1507, -1507, -1507,  6633, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507,   576,   584,   598,   635,   652,   668,
     676,   696,   719,   731,   752,   760,   783,   800,   829,   832,
     854,   880,   884,   890,   892,   901,   909,   910,   935,   936,
     945,   948,   949,   953,   963,   965,   966,   968,   969,   970,
     972,   973,   974,   975,   978,   979,   983,   984,   990,   991,
     993,   997,   998,  1001,  1007,  1009,  1010,  1011,  1012, -1507,
   -1507,  1014,  1015,  1018,  1019,  1020,  1021,  1026,  1027,  1028,
    1031,  1036,  1037,  1039,  1044,  1049,  1053,  1058,  1063,  1065,
    1068,  1075,  1081,  1082,  1083,  1085,  1087,  1091,  1092,  1093,
    1094,  1095,  1096,  1106,  8157, 10895,   -99, -1507,   572,    50,
      51,    22,    13,  -143,  5840, -1507, -1507,   916, -1507, -1507,
     917,   919, -1507, -1507, -1507, -1507,   435,    84,   904,   419,
     914,   108,   430,   976,  1164,   839,   100,  1089, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507,   169, -1507,  1268,  1449,
   -1507, -1507, 10613,    53,  1452,  1286,  1213,  1457,    53, -1507,
   -1507,   -23, -1507,  1294,   452,  1222, -1507,  1465,  1447, -1507,
     433,  -115,    48,  1471,  1472,  1473,  1474,  1475,  1476,  1477,
    1485,  -167,  1487,  -138, 10979, 10979, -1507,  1488,  8157,  8157,
    1192,  1192, -1507,  8157, 10632,    90, -1507,  8157,  6297,  8157,
    8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  1146,  8157,
    8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,
    8157,  8157,  8157,  8157,  1148,  8157,  8157,  8157,  1152,  8157,
    8157,  8157,  8157,  8157,  8157,  6801,  8157,  8157,  8157,  8157,
    8157,  8157,  8157,  8157,  8157,  8157,  1153,  1154,  1155,  1157,
    1161,  8157,  8157,  1162,  1165,  1166,  8157,  8157,  1505,  1169,
    1174,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,
    8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,
    8157,  8157,  8157,  1175,  2255, -1507,  8157,  8157,  8157,  8157,
    8157,    15,  1177,   746,  8157,  6465,  8157,  8157,  8157,  8157,
    8157,  8157,  8157,  8157,  8157,  8157,  8157,  8157,  1528, -1507,
      48,  1556,  8157,  1557,  1558,   289,  1216,   246,  1560,    48,
   -1507, -1507, -1507,     5, -1507,    48,  1433,  1434, -1507,  1601,
   -1507, -1507,  1602,  1603,  1604,  1605,  1617, -1507,  1618,  1625,
    1626, 10613,  1627,  1421,  1629,  1630,  1631,  1633,  1634,  1293,
    1635,    14,   422,  1636, -1507, -1507, -1507, -1507,    89,  1320,
    1329, -1507, -1507,  1331,  1331,  1331,  1331,  1331, -1507,  1331,
   -1507,  1333,  1331,  1331,  1331,  1583, -1507,  1583, -1507,  1331,
    1331,  1331,  1337,  1583,  1331,  1583, -1507, -1507, -1507, -1507,
   -1507,  1339,  1341, -1507,    92, 10613,  1689,  1690,  1691,  1349,
    1350, -1507,  -139,  1693,  1698,  1532,  1357, -1507, -1507, -1507,
    1534,  1704,  1538,  1466,  1708,   100,  -104, -1507,  8157,  1541,
      48,  -114,   495, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
    1710,  1716,   253, -1507,  1710,   295, -1507,  1111, -1507,  1374,
   10979,  1632,   380, -1507,  8157,  8157,  1515,   120, -1507, -1507,
   -1507,  2567,  7137,  1136,  1514,  1559,  2879,  3191,  3503,  3815,
    4127,  4439, -1507,  1898,  2210,  2522,  2834,  4751,  3146,  3458,
    3770,  5063,  5375,  8620,   523,  4082,  8643,  4394, -1507,  8666,
    8701,  8724, -1507,  8127,  4706,  5018,  5330,  5642,  1943,  1380,
    8747,  8770,  8793,  8816,  8856,  8881,  8904,  8949,  5688,  6070,
    6093, -1507, -1507, -1507, -1507, -1507,  8972,  6118,  1414,  1417,
    1422,   546,   585,  1388,  1423,  1425,  6156,  8995,  9030,  9053,
    9076,  9099,  9122,  9145,  9168,  6313,  6361,  6400,  6656,  6818,
    6969,  6994,  7219,   622,  9193,  9233,  9256,  7269, -1507, -1507,
    8926,  7651,  7674,  9278,  9278, -1507,    32, -1507, -1507,  1533,
    8157,  8157,  1394,  8157, 10921,  1396,  1398,  1399,  8157,  1526,
    1570,  1587,  1907,   828,   828,   686,   686,   686,   686,   596,
   -1507, -1507, -1507,  -114,  1628, -1507, -1507,  1400,   454,  1606,
    1610,  1611, -1507, -1507, -1507,    12,   -84,  5840,  1434,  1434,
    1613,  1578,    48, -1507,  1614, -1507,    -3, 10613, 10613,  1746,
   -1507, -1507, -1507, -1507, -1507, 10613,  1757,  1555,  1563, -1507,
   -1507, -1507, -1507, -1507, -1507,  1761, -1507,  1763, -1507, -1507,
      53,    53,  1770, -1507, -1507, -1507, -1507, -1507, -1507,  1774,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,  1774,
   -1507, -1507, -1507,  1777,  1782,  1622,  1444,  8157, -1507, 10613,
   10613, 10613,  1608,    53,  1565,   153,   -93,  1620,  1789,   462,
    1801,   127,  1807,  1808,  1642, -1507, -1507,  1811,   694, -1507,
     916, 10979,  1764,  1666,  -114, -1507, -1507,  1800,  -135, -1507,
     311,  1478, -1507,  -135,  1478,  1649,  8157, -1507,  8157, -1507,
    8157,  8060,  7156,  1479,  8157,  8157, -1507,  8157,  7607,  1681,
    1681,  8157, -1507, -1507, -1507, -1507, -1507, -1507,  8157,  8157,
    8157,  8157, -1507,  8157,  8157,  8157, -1507, -1507, -1507, -1507,
    8157,  8157, -1507,  8157, -1507, -1507, -1507, 10613, 10613,  8157,
    8157,  8157,  1820, -1507,  1522,  1523,  1527,  1529,  1531,  1535,
   -1507, -1507, -1507,  8157,  8157,  8157, -1507,  8157,  1482,  1494,
    1496,  1539,  1852,  1545,  1854,  1547,  1517,  1518,  8157, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507,  8157,  8157,  8157,
    8157,  8157,  8157,  8157,  8157, -1507,  8157, -1507, -1507, -1507,
    8157, -1507, -1507,  8157,  1515,  9278,  9278,  1657, 10954,  8157,
   -1507, -1507, -1507,  1515,  1743,    48,  1863,   289,  1750,  1750,
    1750,  8157,  1864,  1869,  1541, -1507, -1507,    48,  8157,   -69,
      48,  1530,  1729,  1730,  1537, -1507, -1507, 10613,  1135, -1507,
   -1507,  1873,  1875, -1507, -1507,  1546,  1548,   336,   286,   612,
     286,   286, -1507,   401,   286,   286,   286,   612,   612,   286,
     286,   286,   403,   612,   286,   612,  1549,  1550,  1813,  8157,
   10979, -1507, -1507, -1507,   657, -1507,  1540, -1507,  1542,  1554,
    1595,  1596,   432, -1507,  1659,   153,  1901,   176,  1853, -1507,
    1794,  1711,   153,   181,  1772,  1941,  -107,  1942,  1615,  1802,
     485,  1639,  1641,  1803,  1643,   444, -1507,  1973,  1515,   160,
    8157,  1792, -1507,  7253,  1845,  1987, -1507, -1507,  1991,  7589,
    -128, -1507,  -128, -1507, -1507, 10979, 10774, -1507,  8157, -1507,
    8597,   712,  9301,  8157,  8157,  1650,  1651,  9324,  9359,  9382,
    7339,  7721,  9405,  9428,  9451,  9474,  9497,  9522,  1652,  1658,
    9545,  9585,  7783,  1667,  1660,  1669,  1670,  1671,  1674,  1675,
     926,  8173,  9608,  9653, -1507, -1507, -1507,  1677,   461,  1678,
     478,  1679, -1507, -1507,  9688,  8221,  8244,  8503,  9711,  9734,
    8526,  8551,   980,  1004,  1059,  1685,  1686,  8157,  1515,  8157,
    1238,  1515,  1515,  1515,  1688,  1970,  1910,  -114, -1507, -1507,
    1896,  1697,  1701,  1702, 10979,  2028,    21,  1666, -1507, 10979,
    8157,  1705, -1507, -1507,   -69,  8157,  1706,  1707,  2050,  1135,
    1135, -1507,  1889,  2053,  1712,  1714,  1715,  2017,  2059,  1721,
    2063,   102, -1507, -1507, -1507,  1924,  1925, -1507,  1135, -1507,
   -1507,  1886,   537, -1507,  2072, -1507, -1507,  1872,  2076, -1507,
    2081, -1507, -1507, -1507,  1742,  9757, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507,   578,   153,  2087,  2091,
    2096,  2097, -1507,  2098,  1759,   481,  1771,  1870,   153, -1507,
    1279,  2006,  1778,   486,  1877,   153,  2119,   195,   694, -1507,
       8,  8157,  1779,  1781,  1783,  2127,  2127,  1786,  2050,    36,
     694, 10613, -1507,   -13,   369,  1785, -1507,   886,   242, -1507,
   -1507, 10979,  1911,  2113, -1507, -1507, 10979,   488, -1507,  1792,
   -1507, -1507, 10979,  8157, -1507, -1507,  8157, -1507,  9780, 10438,
   -1507, -1507, -1507, -1507, -1507,  8157,  8157, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507,  8157, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507,  8157,  8157, -1507, -1507,
    1821,  1821,  1821, -1507,  1823,   796, -1507,  1824,   810, -1507,
    1821,  1821, -1507,  8157,  8157,  8157, -1507, -1507,  8157,  8157,
   -1507,  8157, -1507,  8157, -1507,  8157, -1507, -1507,  1793,  1805,
    1238,  1806,  1810,  1814, -1507,  8157,  8157,  1541,  1743, -1507,
    2144,  2144,  2144,  8157,  8157,  2145,  1792, 10979,  2127, -1507,
    9803,  2150,  2151, -1507,   490, -1507, -1507,  1135, -1507, -1507,
    2157,  8157,  2159,  2126,    16,  8157, -1507, -1507, -1507, -1507,
   -1507, -1507,  1825,  1826,  1827,  8157, -1507, -1507, -1507,   657,
    2121, -1507,  1828,  2171, -1507,   612, -1507,   612,   612,  8157,
   -1507,  2124, -1507,   505,  1831,  1832,  1833,  1836, -1507,   153,
   -1507,   153,  1839,   517,  1663, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507,  1995,   153, -1507,  1841,
     529,  1842,  1956,   153,   532,  1849,  2046,  2051,  1851,  9826,
    2150,  2127,  2127, -1507,   536,   538,  2151,   541,     3, -1507,
   -1507, -1507, -1507, -1507,  2194, -1507, -1507,   160,  8157,  8157,
   -1507, -1507,  1856, -1507,  7705, -1507,  8041,  1859, -1507,  9851,
    9874, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507,  9897,  9937,  9960,  1821,  1821,  1821,  1821,  1821,  1821,
    1088,  9990,  2152,  2035,  2035,  2035,  1821,  1866,  1862,  1871,
    1821,  1899,  1897,  1900,  1821,  2035,  2035, 10017, 10040, 10063,
   10086, 10109,  8574, 10132, 10155, -1507, -1507, -1507, -1507, -1507,
   10863,   -86, 10979,  1666,  1910, -1507,   548,   577,   579, 10979,
   10979,  2179, -1507,   581,  2198, -1507,   614, -1507,   624, -1507,
    2215, -1507,   627, 10180,   629,  1902,  1903,  2105, -1507, 10203,
    1904,  1905,  1906, 10226,   613, -1507,  1975, -1507, -1507, 10249,
   -1507,  2287, -1507, -1507, -1507, -1507,  2250,   632,   636,   153,
   -1507, -1507,  2599,  2911,  3223,  3535,  3847,  4159,  2202,   638,
     153, -1507,   153,  1912,   642,    36,  8157,  1913,  1914,  2050,
   -1507,   691,   697,   705, -1507,  2252, -1507,   710, -1507,   574,
    2253,  2217,  5852,   369, -1507, 10979, 10979,  2285,  2293, -1507,
   10979, -1507, 10979,  7589, -1507, -1507, -1507, -1507, -1507,  2035,
    2035,  2035,  2035,  2035,  2035, -1507,  8157, -1507,  2295,  2245,
    1955,  1960,  1962,  2035, -1507,  1989,  1996,  2035, -1507,  1997,
    2003,  2035,  1971,  1979, -1507, -1507, -1507, -1507, -1507,  8157,
   -1507, -1507, -1507,  2139,  8157, -1507,  2206,  1541, -1507,  2325,
   -1507, -1507,  8157, -1507,  2099,  2154,  2328, -1507,  2332, -1507,
   -1507,  2331,  1017, -1507,  2338,  8157,  8157, -1507, -1507, -1507,
   -1507, -1507, -1507,  2292, -1507,  4471, -1507, -1507,  4783, -1507,
    2000, -1507, -1507,   747, -1507,  2268,  2237,  2218,  2205,  2120,
   -1507, -1507,   749,   823,   153, -1507,     3, -1507, 10289,  2150,
    2151,   826,  2178, -1507, -1507, -1507, -1507, -1507,  2355,   -25,
     252, -1507, -1507,  2342,  2016,   835,  2018,  2019,  2021,  2022,
    2023,  2025, 10319, -1507,  2026,  2369, -1507, -1507, -1507,  2032,
    1821,  2029,  2034,  2038,  1821,  2036,  2044,  2056, -1507, -1507,
   10346, -1507, 10863,   -34,  2241,  1666, -1507, 10979, -1507,  2387,
   -1507, -1507,  2060, -1507, -1507,  2065, 10369, 10392, -1507,  5095,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,  5407,
   -1507, -1507,   838, -1507,   840,   844, -1507,  2389, -1507,  2394,
    2396,  2067,  2068,  8157,  2411, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507,  2413,   369,  2071, -1507,  2035, -1507, -1507,
   -1507,  2035, -1507, -1507, -1507, -1507, -1507,  2222,  2229,  2127,
   -1507, -1507,  2089, -1507, -1507,  1143, -1507,  5719, -1507, -1507,
   -1507,  2256, -1507,   850, -1507, -1507,  2432,  2435, 10979,  2420,
   -1507, -1507,  2439,  2100,  1821,  1821,  2101,  1821,  1821,  2290,
    2291,  2102,  2442, -1507, -1507, -1507,  2445,  2448,  2442,  2114,
    2117,  8157,   369, -1507,  2035,  2035, -1507,  2035,  2035, -1507,
   -1507, -1507,   855,   852,  2123,   857,  2129,  2262, 10979, -1507,
    2118,  2130,  2135,  2136, -1507,  2462,  2463,  2442,  2442, -1507,
    2276,  2478, -1507, -1507, -1507, -1507,    94, -1507,  2140,   861,
     893,   309,  2481,   895, -1507, -1507,   -38,  2356,   291,     1,
    2442, -1507, -1507,  2406,  2254, -1507,  2276, -1507, -1507,   356,
   -1507, -1507, -1507,    61,   325,   897,   309,   309,  2341, -1507,
   -1507, -1507, -1507, -1507, -1507,    63, -1507, -1507, -1507,    80,
   -1507,  2275, -1507, -1507, -1507, -1507,   309,    79,  2321,  2326,
    2333,  2334,  2490,  2494, -1507, -1507
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1507,  2416,   -77, -1507, -1507, -1507, -1507,  -816, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1507, -1507, -1507, -1507, -1507,  1656,  2158, -1507,  -188,  -564,
    1179, -1507, -1233, -1507,   885, -1172, -1507, -1506, -1507,  -946,
   -1507,   951, -1134, -1507, -1507, -1222, -1507, -1507,  2049,  -250,
    -249,  2047,  -461,  1695, -1507, -1507,   512, -1507, -1507, -1507,
    1375,  1571,   303,   -56, -1507, -1507, -1507,  2421,  1948, -1507,
   -1507, -1005, -1507, -1507, -1507, -1507, -1507, -1507, -1507, -1507,
   -1088, -1507,  -799, -1507, -1507,   659,  2451,  2196, -1507,  1696,
   -1507,   842,  1972, -1507, -1507, -1507, -1507, -1507,   601, -1507,
   -1507, -1507,   873, -1507,   543, -1507,  1321,  1330, -1488, -1483,
   -1487, -1327, -1213, -1507,  -960,   531,   175,   -87,  -761,  -365,
    1773, -1024, -1507, -1507, -1507,  2423, -1507,  -296, -1507,  1758,
    1195,  -979, -1507, -1507, -1507, -1507,  2057, -1507, -1507, -1507,
   -1507, -1507,  2251, -1507, -1507, -1151, -1507
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -609
static const yytype_int16 yytable[] =
{
     255,  1556,  1219,  1336,  1545,  1149,  1150,   825,  1137,  1168,
    1205,   465,   556,   467,   741,  1547,   261,  1213,   460,   764,
    1054,   695,  -437,   987,   988,   435,   322,   815,  1552,   993,
     815,   995,   951,   696,  1051,    73,  1053,  1044,   931,   580,
     461,  1334,  2017,  1699,  1044,   288,   289,   290,   291,   292,
     293,   261,    42,  -439,  -438,   106,   545,  1691,  1697,   334,
     335,  1345,  1346,   468,  1889,   458,   557,   961,   584,   546,
     340,   341,   342,   571,   466,   284,   344,    43,  1535,  -608,
    1368,  1553,   816,  2048,   138,   816,  1646,   484,  1731,  1732,
    2023,   804,   288,   289,   290,   291,   292,   293,  1568,  1742,
    1743,  1140,   270,   271,    81,    45,  1357,  1358,  1359,  1360,
     795,   491,  2006,   962,   558,   570,  1633,  1115,   499,  1594,
    1595,    46,   272,   568,  1536,   112,   754,  2032,  1605,  1606,
     436,   437,   438,   439,   440,   441,   442,  1014,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   568,  1753,   738,  1007,   136,  2042,   944,
     485,  1141,   796,  1233,  1917,  1234,  1361,    70,   137,   107,
     815,   963,   954,  1700,  2007,  2044,   139,   434,   581,    82,
     798,   697,  1537,   547,   492,  1632,   108,   797,  1890,  1918,
    1647,  1347,  1383,   739,    44,  2018,   593,   594,   932,  1701,
     559,   109,    71,  1393,   469,  1549,   805,   581,   294,   285,
    1530,   723,  1045,  1826,  1827,  1828,  1829,  1830,  1831,  1248,
      12,   548,    74,   964,  2024,   816,  2033,  1839,   110,  2043,
    1394,  1843,   323,   469,  1538,  1847,  2049,   844,  1218,   273,
     817,   818,  1648,  -608,  2034,  1560,  2045,    78,   462,    83,
    2008,  1249,  1015,  1250,   765,   294,   323,   500,   113,  1641,
    1042,  1754,   590,   953,  2009,    84,   591,  2035,  1561,   114,
     597,   601,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   959,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   698,   629,   630,
     631,  1318,   633,   634,   635,   636,   637,   638,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,  1692,
    1693,   824,  1885,   117,   656,   657,  1884,  2013,   595,   661,
     662,  1554,    86,    96,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   952,  1021,   262,   690,
     691,   692,   693,   694,  -437,  1335,   464,   704,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,  1623,   965,   966,  1667,   255,  1668,  1752,   295,  2007,
     969,  2036,  1656,   262,   832,  -439,  -438,   835,  1362,  1363,
    1364,  1943,   115,  1661,   729,  1946,  1207,    97,   843,  2020,
    1552,  1214,  1719,  1720,  1721,  1722,  1723,  1724,  1375,    87,
    1377,  1378,   487,   730,  1733,  1532,   298,   766,  1737,  1891,
     337,   338,  1741,   493,  1001,  1002,  1003,  2030,  1672,   501,
     502,   503,   504,  1008,  1009,  1010,  1011,  1365,   119,  1673,
     313,   121,   123,   125,   305,   562,   118,   435,  1980,  1981,
      12,  1982,  1983,  1553,  2021,  2008,    98,   845,    88,  1674,
    1821,  1975,  1022,    89,   975,   976,  1811,   767,   947,  2009,
      90,   299,   488,  1675,  1892,  2031,   839,   840,   831,  1756,
    2037,   821,  1676,   494,  2022,   489,  1138,   458,   482,  1144,
    1999,  2000,    12,    91,   309,  1018,   495,   274,  2038,    92,
    1175,   483,  1078,  1079,  1019,   507,   508,   841,   842,   310,
     731,  1208,  1679,  2025,   314,   848,  1215,   275,  1684,  1176,
     834,  2039,  1677,   436,   437,   438,   439,   440,   441,   442,
    1533,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,  1328,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,  1817,
    1370,   120,   102,   315,   122,   124,   126,   306,   563,  1371,
      94,  1702,   734,   469,  1818,   436,   437,   438,   439,   440,
     441,   442,  1151,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   595,  1916,
    1223,  1381,    95,   935,   936,   127,   938,   456,   457,  1224,
    1382,   434,   436,   437,   438,   439,   440,   441,   442,   127,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   101,  1783,  1047,  1048,   104,
     103,  1807,  2001,  -331,  1793,  1784,   128,    99,  1907,    72,
     568,  1941,  1911,    79,   129,  1802,  1785,  1803,   100,   130,
     128,  1788,  1173,  1174,  2026,  2027,  1177,  1178,   259,   131,
     980,   981,   105,   984,   985,   986,  1127,  1951,   116,   989,
     990,   991,   785,   260,   994,   133,   317,   134,   790,    61,
     792,  1186,   140,  2046,   258,  1187,   455,   456,   457,   268,
    1000,  1921,   436,   437,   438,   439,   440,   441,   442,  1979,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   300,  1116,  1179,  1180,  1181,
    1180,    62,   287,  1188,   301,  1124,  1189,  1027,   302,   700,
     701,  1055,   702,  1056,  1028,   703,    63,  1060,  1061,   303,
    1062,  1190,  1964,  1965,  1067,  1967,  1968,   318,  1202,  1203,
    -331,  1068,  1069,  1070,  1071,   304,  1072,  1073,  1074,  1191,
    1229,  1230,   312,  1075,  1076,   307,  1077,  1192,   308,  1882,
    1598,  1599,  1080,  1081,  1082,  1869,    64,  1294,  1295,   316,
    1029,  1855,   320,  1030,  1602,  1603,  1090,  1091,  1092,   324,
    1093,  1879,   331,    65,  1297,  1298,    66,  1390,  1203,  1031,
     325,  1104,  1528,  1203,  1565,  1566,  1639,  1640,  1032,   318,
    1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,    67,  1113,
    1232,  1662,  1203,  1114,   451,   452,   453,   454,   455,   456,
     457,   326,  1120,  1670,  1203,   327,  1551,   328,  1033,   869,
     870,  1193,   329,  1194,  1134,  1681,  1203,   330,  1685,  1230,
     332,  1139,  1694,  1695,  1696,  1695,   333,  1698,  1640,  1927,
      73,  1195,   901,   902,  1758,  1759,   436,   437,   438,   439,
     440,   441,   442,   339,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   463,
    1034,   346,  1185,  1760,  1759,  1761,  1759,  1763,  1695,   347,
    1319,   903,   904,  1321,  1322,  1323,   436,   437,   438,   439,
     440,   441,   442,   348,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   478,
    1765,  1766,   480,  1237,   481,    68,  1241,   486,   925,   926,
    1767,  1768,  1246,  1770,  1771,  1773,  1774,   490,  1791,  1203,
     349,  1252,  1792,  1203,  1801,  1203,  1258,  1259,  1805,  1203,
     436,   437,   438,   439,   440,   441,   442,   350,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   351,   436,   437,   438,   439,   440,   441,
     442,   352,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,  1812,  1766,   496,
    1558,   353,  1320,  1813,  1695,   774,   775,   776,   777,   498,
     778,  1814,  1695,   780,   781,   782,  1816,  1768,  1255,  1256,
     786,   787,   788,  1337,   354,   791,  1863,  1864,  1340,   436,
     437,   438,   439,   440,   441,   442,   355,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   506,  1873,  1203,  1880,  1203,   356,   436,   437,
     438,   439,   440,   441,   442,   357,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   436,   437,   438,   439,   440,   441,   442,   358,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,  1539,   359,   436,   437,   438,   439,
     440,   441,   442,  1152,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,  1881,
    1203,  1153,  1886,  1640,   360,  1154,  1569,   361,  1155,  1570,
    1156,  1895,  1566,  1157,  1930,  1203,  1931,  1766,  1581,  1582,
    1932,  1768,  1953,  1954,  1957,  1958,  1986,  1987,  1158,   362,
    1583,  1984,  1985,  1989,  1985,  1159,  1160,  2011,  1985,  1590,
    1591,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   363,  1607,  1608,  1609,   364,
    1161,  1610,  1611,  1559,  1612,   365,  1613,   366,  1614,  2012,
    1985,  2015,  2016,  2040,  1985,   276,   367,  1162,  1620,  1622,
     955,   956,  1132,  1133,   368,   369,  1629,  1630,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   509,  1285,  1286,  1643,  1627,  1628,   277,  1649,  1163,
     370,   371,  1395,  1396,  1397,  1398,  1399,  1400,  1653,  1401,
     372,  1402,   278,   373,   374,  1403,  1404,  1405,   375,  1406,
     279,  1164,  1659,  1407,  1408,  1409,  1410,  1411,   376,  1165,
     377,   378,   280,   379,   380,   381,  1412,   382,   383,   384,
     385,  1413,  1414,   386,   387,  1415,  1310,  1311,   388,   389,
    1416,  1417,  1418,  1419,  1420,   390,   391,  1421,   392,  1422,
    1423,  1424,   393,   394,  1425,  1426,   395,  1427,  1428,  1429,
    1312,  1313,   396,  1430,   397,   398,   399,   400,  1431,   401,
     402,  1166,  1432,   403,   404,   405,   406,  1433,  1434,  1435,
     281,   407,   408,   409,  1436,  1437,   410,  1438,  1439,  1440,
    1441,   411,   412,  1442,   413,  1443,  1444,  1445,  1446,   414,
    1447,   282,  1448,  1449,   415,  1450,  1451,  1452,   416,  1453,
    1454,  1455,  1456,   417,   497,  1314,  1315,  1457,   418,  1458,
     419,  1459,  1460,   420,  1461,  1462,  1463,  1464,  1465,  1466,
     421,  1467,  1468,  1469,  1470,  1471,   422,   423,   424,  1472,
     425,  1473,   426,  1474,  1725,  1726,   427,   428,   429,   430,
     431,   432,  1475,   283,  1476,  1477,  1478,  1479,  1480,  1481,
    1482,   433,   510,  1483,  1484,   552,   553,   554,   836,  1485,
     555,  1486,  1487,  1488,   561,  1489,   564,  1490,   566,  1491,
    1492,  1493,  1494,   567,   572,   573,   574,   575,   576,   577,
     578,  1705,  1706,   849,  1495,  1496,  1497,  1710,   579,  1712,
     583,   586,   612,  1498,   628,  1499,  1500,  1501,   632,   651,
     652,   653,  1502,   654,  1503,  1504,  1505,   655,   658,  1506,
     663,   659,   660,  1507,  1508,   664,  1509,  1510,  1511,  1512,
     665,   688,   699,  1513,   436,   437,   438,   439,   440,   441,
     442,   722,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   724,
     726,   728,   733,   735,  1514,  1515,  1516,  1517,  1518,   436,
     437,   438,   439,   440,   441,   442,   742,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   743,   745,   746,   747,   748,   749,  1808,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     750,   751,  1519,  1520,  1521,  1522,  1523,  1524,   752,   753,
     755,   756,   757,   758,   759,   762,  1246,   761,   760,   783,
     763,   768,   436,   437,   438,   439,   440,   441,   442,  1832,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   770,  1395,  1396,  1397,  1398,
    1399,  1400,  1850,  1401,   771,  1402,   772,  1852,   779,  1403,
    1404,  1405,   789,  1406,   793,  1857,   794,  1407,  1408,  1409,
    1410,  1411,   799,   800,   801,   802,   806,   803,  1866,  1867,
    1412,   807,   808,   809,   810,  1413,  1414,   811,   812,  1415,
     813,   814,   822,   827,  1416,  1417,  1418,  1419,  1420,   829,
     837,  1421,    12,  1422,  1423,  1424,   884,   898,  1425,  1426,
     899,  1427,  1428,  1429,   905,   900,   906,  1430,   907,   937,
     -55,   940,  1431,   941,   942,   945,  1432,   946,   958,   967,
     948,  1433,  1434,  1435,   949,   950,   957,   960,  1436,  1437,
     970,  1438,  1439,  1440,  1441,   971,   973,  1442,   974,  1671,
    1444,  1445,  1446,   972,  1447,   977,  1448,  1449,   982,  1450,
    1451,  1452,   996,  1453,  1454,  1455,  1456,   997,   998,   999,
    1016,  1457,  1017,  1458,  1004,  1459,  1460,  1006,  1461,  1462,
    1463,  1464,  1465,  1466,  1020,  1467,  1468,  1469,  1470,  1471,
    1023,  1024,  1025,  1472,  1026,  1473,  1938,  1474,  1040,  1039,
    1043,  1044,  1064,  1049,  1083,  1059,  1475,  1094,  1476,  1477,
    1478,  1479,  1480,  1481,  1482,  1084,  1085,  1483,  1484,  1095,
    1086,  1096,  1087,  1485,  1088,  1486,  1487,  1488,  1089,  1489,
     838,  1490,  1097,  1491,  1492,  1493,  1494,  1098,  1099,  1100,
    1101,   850,  1102,  1103,   -57,  1125,  1128,  1135,  1495,  1496,
    1497,  1130,  1136,  1146,  1147,  1145,  1169,  1498,  1170,  1499,
    1500,  1501,  1148,  1184,  1978,  1197,  1502,  1198,  1503,  1504,
    1505,  1204,  1171,  1506,  1172,  1182,  1183,  1507,  1508,  1199,
    1509,  1510,  1511,  1512,  1206,  1209,   851,  1513,   436,   437,
     438,   439,   440,   441,   442,  1211,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   449,   450,   451,   452,   453,   454,   455,   456,   457,
    1200,  1201,  1216,  1212,  1217,  1220,  1222,  1227,  1514,  1515,
    1516,  1517,  1518,   436,   437,   438,   439,   440,   441,   442,
    1221,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,  1231,  1238,  1395,  1396,
    1397,  1398,  1399,  1400,  1225,  1401,  1226,  1402,  1228,  1242,
    1243,  1403,  1404,  1405,  1244,  1406,  1260,  1261,  1273,  1407,
    1408,  1409,  1410,  1411,  1274,  1279,  1519,  1520,  1521,  1522,
    1523,  1524,  1412,  1278,  1280,  1281,  1282,  1413,  1414,  1283,
    1284,  1415,  1293,  1296,  1299,  1325,  1416,  1417,  1418,  1419,
    1420,  1316,  1317,  1421,  1324,  1422,  1423,  1424,  1326,  1329,
    1425,  1426,  1330,  1427,  1428,  1429,  1331,  1332,  1333,  1430,
    1338,  1341,  1342,  1343,  1431,  1348,  1349,  1350,  1432,  1351,
    1352,  1353,  1354,  1433,  1434,  1435,  1355,  1356,  1366,  1367,
    1436,  1437,  1369,  1438,  1439,  1440,  1441,  1372,  1373,  1442,
    1374,  1786,  1444,  1445,  1446,  1376,  1447,  1379,  1448,  1449,
    1384,  1450,  1451,  1452,  1385,  1453,  1454,  1455,  1456,  1386,
    1387,  1388,  1392,  1457,  1389,  1458,  1526,  1459,  1460,  1529,
    1461,  1462,  1463,  1464,  1465,  1466,  1391,  1467,  1468,  1469,
    1470,  1471,  1531,  1527,  1540,  1472,  1541,  1473,  1542,  1474,
    1543,  1546,  1557,  1564,  1563,  1592,  1597,  1601,  1475,  1615,
    1476,  1477,  1478,  1479,  1480,  1481,  1482,  1625,  1631,  1483,
    1484,  1616,  1617,  1635,  1637,  1485,  1618,  1486,  1487,  1488,
    1619,  1489,  1642,  1490,  1644,  1491,  1492,  1493,  1494,  1645,
    1650,  1651,  1652,  1655,  1657,  1658,  1660,  1663,  1664,  1665,
    1495,  1496,  1497,  1666,  1669,  1678,  1680,  1682,  1683,  1498,
    1687,  1499,  1500,  1501,  1686,  1688,  1689,  1703,  1502,  1762,
    1503,  1504,  1505,  1707,  1713,  1506,  1729,  1728,  1735,  1507,
    1508,  1734,  1509,  1510,  1511,  1512,  1764,  1736,  1769,  1513,
     436,   437,   438,   439,   440,   441,   442,   882,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,  1739,  1738,   858,  1740,  1775,  1776,  1777,
    1779,  1780,  1781,  1790,  1800,  1815,  1819,  1804,  1809,  1810,
    1514,  1515,  1516,  1517,  1518,   436,   437,   438,   439,   440,
     441,   442,  1820,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,  1822,   883,
    1395,  1396,  1397,  1398,  1399,  1400,  1823,  1401,  1833,  1402,
    1835,  1836,  1841,  1403,  1404,  1405,  1837,  1406,  1838,  1842,
    1845,  1407,  1408,  1409,  1410,  1411,  1846,  1848,  1519,  1520,
    1521,  1522,  1523,  1524,  1412,  1849,  1851,  1853,  1856,  1413,
    1414,  1860,  1858,  1415,  1859,  1861,  1862,  1874,  1416,  1417,
    1418,  1419,  1420,  1865,  1868,  1421,  1872,  1422,  1423,  1424,
    1875,  1877,  1425,  1426,  1876,  1427,  1428,  1429,  1887,  1878,
    1888,  1430,  1893,  1894,  1896,  1897,  1431,  1898,  1899,  1900,
    1432,  1901,  1904,  1903,  1908,  1433,  1434,  1435,  1906,  1909,
    1919,  1912,  1436,  1437,  1910,  1438,  1439,  1440,  1441,  1913,
    1922,  1442,  1933,  1789,  1444,  1445,  1446,  1934,  1447,  1935,
    1448,  1449,  1914,  1450,  1451,  1452,  1923,  1453,  1454,  1455,
    1456,  1924,  1936,  1937,  1939,  1457,  1940,  1458,  1942,  1459,
    1460,  1949,  1461,  1462,  1463,  1464,  1465,  1466,  1950,  1467,
    1468,  1469,  1470,  1471,  1952,  1959,  1956,  1472,  1960,  1473,
    1961,  1474,  1962,  1969,  1970,  1971,  1963,  1966,  1973,  1695,
    1475,  1974,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1991,
    1976,  1483,  1484,  1977,  1992,  1997,  1998,  1485,  1988,  1486,
    1487,  1488,  2002,  1489,  1990,  1490,  1993,  1491,  1492,  1493,
    1494,  1994,  1995,  2005,  2014,  2010,  2017,  2019,  2041,  2028,
    2047,  2050,  1495,  1496,  1497,  2054,  2051,  2052,  2053,  2055,
     269,  1498,   592,  1499,  1500,  1501,  1066,  1624,  1704,  1757,
    1502,   725,  1503,  1504,  1505,  1038,   737,  1506,  1129,  1339,
     826,  1507,  1508,   135,  1509,  1510,  1511,  1512,   321,   585,
    1052,  1513,   436,   437,   438,   439,   440,   441,   442,  1534,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,  1825,   833,   859,  1806,  2029,
    1550,  1005,   992,   336,  1654,   769,     0,   565,     0,     0,
       0,     0,  1514,  1515,  1516,  1517,  1518,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
       0,   689,  1395,  1396,  1397,  1398,  1399,  1400,     0,  1401,
       0,  1402,     0,     0,     0,  1403,  1404,  1405,     0,  1406,
       0,     0,     0,  1407,  1408,  1409,  1410,  1411,     0,     0,
    1519,  1520,  1521,  1522,  1523,  1524,  1412,     0,     0,     0,
       0,  1413,  1414,     0,     0,  1415,     0,     0,     0,     0,
    1416,  1417,  1418,  1419,  1420,     0,     0,  1421,     0,  1422,
    1423,  1424,     0,     0,  1425,  1426,     0,  1427,  1428,  1429,
       0,     0,     0,  1430,     0,     0,     0,     0,  1431,     0,
       0,     0,  1432,     0,     0,     0,     0,  1433,  1434,  1435,
       0,     0,     0,     0,  1436,  1437,     0,  1438,  1439,  1440,
    1441,     0,     0,  1442,     0,  1794,  1444,  1445,  1446,     0,
    1447,     0,  1448,  1449,     0,  1450,  1451,  1452,     0,  1453,
    1454,  1455,  1456,     0,     0,     0,     0,  1457,     0,  1458,
       0,  1459,  1460,     0,  1461,  1462,  1463,  1464,  1465,  1466,
       0,  1467,  1468,  1469,  1470,  1471,     0,     0,     0,  1472,
       0,  1473,     0,  1474,     0,     0,     0,     0,     0,     0,
       0,     0,  1475,     0,  1476,  1477,  1478,  1479,  1480,  1481,
    1482,     0,     0,  1483,  1484,     0,     0,     0,     0,  1485,
       0,  1486,  1487,  1488,     0,  1489,     0,  1490,     0,  1491,
    1492,  1493,  1494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1495,  1496,  1497,     0,     0,     0,
       0,     0,     0,  1498,     0,  1499,  1500,  1501,     0,     0,
       0,     0,  1502,     0,  1503,  1504,  1505,     0,     0,  1506,
       0,     0,     0,  1507,  1508,     0,  1509,  1510,  1511,  1512,
       0,     0,     0,  1513,   436,   437,   438,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,   860,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1514,  1515,  1516,  1517,  1518,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,   846,  1395,  1396,  1397,  1398,  1399,  1400,
       0,  1401,     0,  1402,     0,     0,     0,  1403,  1404,  1405,
       0,  1406,     0,     0,     0,  1407,  1408,  1409,  1410,  1411,
       0,     0,  1519,  1520,  1521,  1522,  1523,  1524,  1412,     0,
       0,     0,     0,  1413,  1414,     0,     0,  1415,     0,     0,
       0,     0,  1416,  1417,  1418,  1419,  1420,     0,     0,  1421,
       0,  1422,  1423,  1424,     0,     0,  1425,  1426,     0,  1427,
    1428,  1429,     0,     0,     0,  1430,     0,     0,     0,     0,
    1431,     0,     0,     0,  1432,     0,     0,     0,     0,  1433,
    1434,  1435,     0,     0,     0,     0,  1436,  1437,     0,  1438,
    1439,  1440,  1441,     0,     0,  1442,     0,  1795,  1444,  1445,
    1446,     0,  1447,     0,  1448,  1449,     0,  1450,  1451,  1452,
       0,  1453,  1454,  1455,  1456,     0,     0,     0,     0,  1457,
       0,  1458,     0,  1459,  1460,     0,  1461,  1462,  1463,  1464,
    1465,  1466,     0,  1467,  1468,  1469,  1470,  1471,     0,     0,
       0,  1472,     0,  1473,     0,  1474,     0,     0,     0,     0,
       0,     0,     0,     0,  1475,     0,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,     0,     0,  1483,  1484,     0,     0,     0,
       0,  1485,     0,  1486,  1487,  1488,     0,  1489,     0,  1490,
       0,  1491,  1492,  1493,  1494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1495,  1496,  1497,     0,
       0,     0,     0,     0,     0,  1498,     0,  1499,  1500,  1501,
       0,     0,     0,     0,  1502,     0,  1503,  1504,  1505,     0,
       0,  1506,     0,     0,     0,  1507,  1508,     0,  1509,  1510,
    1511,  1512,     0,     0,     0,  1513,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,   861,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1514,  1515,  1516,  1517,
    1518,   436,   437,   438,   439,   440,   441,   442,     0,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,   852,  1395,  1396,  1397,  1398,
    1399,  1400,     0,  1401,     0,  1402,     0,     0,     0,  1403,
    1404,  1405,     0,  1406,     0,     0,     0,  1407,  1408,  1409,
    1410,  1411,     0,     0,  1519,  1520,  1521,  1522,  1523,  1524,
    1412,     0,     0,     0,     0,  1413,  1414,     0,     0,  1415,
       0,     0,     0,     0,  1416,  1417,  1418,  1419,  1420,     0,
       0,  1421,     0,  1422,  1423,  1424,     0,     0,  1425,  1426,
       0,  1427,  1428,  1429,     0,     0,     0,  1430,     0,     0,
       0,     0,  1431,     0,     0,     0,  1432,     0,     0,     0,
       0,  1433,  1434,  1435,     0,     0,     0,     0,  1436,  1437,
       0,  1438,  1439,  1440,  1441,     0,     0,  1442,     0,  1796,
    1444,  1445,  1446,     0,  1447,     0,  1448,  1449,     0,  1450,
    1451,  1452,     0,  1453,  1454,  1455,  1456,     0,     0,     0,
       0,  1457,     0,  1458,     0,  1459,  1460,     0,  1461,  1462,
    1463,  1464,  1465,  1466,     0,  1467,  1468,  1469,  1470,  1471,
       0,     0,     0,  1472,     0,  1473,     0,  1474,     0,     0,
       0,     0,     0,     0,     0,     0,  1475,     0,  1476,  1477,
    1478,  1479,  1480,  1481,  1482,     0,     0,  1483,  1484,     0,
       0,     0,     0,  1485,     0,  1486,  1487,  1488,     0,  1489,
       0,  1490,     0,  1491,  1492,  1493,  1494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1495,  1496,
    1497,     0,     0,     0,     0,     0,     0,  1498,     0,  1499,
    1500,  1501,     0,     0,     0,     0,  1502,     0,  1503,  1504,
    1505,     0,     0,  1506,     0,     0,     0,  1507,  1508,     0,
    1509,  1510,  1511,  1512,     0,     0,     0,  1513,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,     0,   863,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1514,  1515,
    1516,  1517,  1518,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   853,  1395,  1396,
    1397,  1398,  1399,  1400,     0,  1401,     0,  1402,     0,     0,
       0,  1403,  1404,  1405,     0,  1406,     0,     0,     0,  1407,
    1408,  1409,  1410,  1411,     0,     0,  1519,  1520,  1521,  1522,
    1523,  1524,  1412,     0,     0,     0,     0,  1413,  1414,     0,
       0,  1415,     0,     0,     0,     0,  1416,  1417,  1418,  1419,
    1420,     0,     0,  1421,     0,  1422,  1423,  1424,     0,     0,
    1425,  1426,     0,  1427,  1428,  1429,     0,     0,     0,  1430,
       0,     0,     0,     0,  1431,     0,     0,     0,  1432,     0,
       0,     0,     0,  1433,  1434,  1435,     0,     0,     0,     0,
    1436,  1437,     0,  1438,  1439,  1440,  1441,     0,     0,  1442,
       0,  1797,  1444,  1445,  1446,     0,  1447,     0,  1448,  1449,
       0,  1450,  1451,  1452,     0,  1453,  1454,  1455,  1456,     0,
       0,     0,     0,  1457,     0,  1458,     0,  1459,  1460,     0,
    1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,  1468,  1469,
    1470,  1471,     0,     0,     0,  1472,     0,  1473,     0,  1474,
       0,     0,     0,     0,     0,     0,     0,     0,  1475,     0,
    1476,  1477,  1478,  1479,  1480,  1481,  1482,     0,     0,  1483,
    1484,     0,     0,     0,     0,  1485,     0,  1486,  1487,  1488,
       0,  1489,     0,  1490,     0,  1491,  1492,  1493,  1494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1495,  1496,  1497,     0,     0,     0,     0,     0,     0,  1498,
       0,  1499,  1500,  1501,     0,     0,     0,     0,  1502,     0,
    1503,  1504,  1505,     0,     0,  1506,     0,     0,     0,  1507,
    1508,     0,  1509,  1510,  1511,  1512,     0,     0,     0,  1513,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,     0,     0,   864,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1514,  1515,  1516,  1517,  1518,   436,   437,   438,   439,   440,
     441,   442,     0,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,     0,   854,
    1395,  1396,  1397,  1398,  1399,  1400,     0,  1401,     0,  1402,
       0,     0,     0,  1403,  1404,  1405,     0,  1406,     0,     0,
       0,  1407,  1408,  1409,  1410,  1411,     0,     0,  1519,  1520,
    1521,  1522,  1523,  1524,  1412,     0,     0,     0,     0,  1413,
    1414,     0,     0,  1415,     0,     0,     0,     0,  1416,  1417,
    1418,  1419,  1420,     0,     0,  1421,     0,  1422,  1423,  1424,
       0,     0,  1425,  1426,     0,  1427,  1428,  1429,     0,     0,
       0,  1430,     0,     0,     0,     0,  1431,     0,     0,     0,
    1432,     0,     0,     0,     0,  1433,  1434,  1435,     0,     0,
       0,     0,  1436,  1437,     0,  1438,  1439,  1440,  1441,     0,
       0,  1442,     0,  1798,  1444,  1445,  1446,     0,  1447,     0,
    1448,  1449,     0,  1450,  1451,  1452,     0,  1453,  1454,  1455,
    1456,     0,     0,     0,     0,  1457,     0,  1458,     0,  1459,
    1460,     0,  1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,
    1468,  1469,  1470,  1471,     0,     0,     0,  1472,     0,  1473,
       0,  1474,     0,     0,     0,     0,     0,     0,     0,     0,
    1475,     0,  1476,  1477,  1478,  1479,  1480,  1481,  1482,     0,
       0,  1483,  1484,     0,     0,     0,     0,  1485,     0,  1486,
    1487,  1488,     0,  1489,     0,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1495,  1496,  1497,     0,     0,     0,     0,     0,
       0,  1498,     0,  1499,  1500,  1501,     0,     0,     0,     0,
    1502,     0,  1503,  1504,  1505,     0,     0,  1506,     0,     0,
       0,  1507,  1508,     0,  1509,  1510,  1511,  1512,     0,     0,
       0,  1513,   436,   437,   438,   439,   440,   441,   442,     0,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,     0,     0,   865,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1514,  1515,  1516,  1517,  1518,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
       0,   855,  1395,  1396,  1397,  1398,  1399,  1400,     0,  1401,
       0,  1402,     0,     0,     0,  1403,  1404,  1405,     0,  1406,
       0,     0,     0,  1407,  1408,  1409,  1410,  1411,     0,     0,
    1519,  1520,  1521,  1522,  1523,  1524,  1412,     0,     0,     0,
       0,  1413,  1414,     0,     0,  1415,     0,     0,     0,     0,
    1416,  1417,  1418,  1419,  1420,     0,     0,  1421,     0,  1422,
    1423,  1424,     0,     0,  1425,  1426,     0,  1427,  1428,  1429,
       0,     0,     0,  1430,     0,     0,     0,     0,  1431,     0,
       0,     0,  1432,     0,     0,     0,     0,  1433,  1434,  1435,
       0,     0,     0,     0,  1436,  1437,     0,  1438,  1439,  1440,
    1441,     0,     0,  1442,     0,  1799,  1444,  1445,  1446,     0,
    1447,     0,  1448,  1449,     0,  1450,  1451,  1452,     0,  1453,
    1454,  1455,  1456,     0,     0,     0,     0,  1457,     0,  1458,
       0,  1459,  1460,     0,  1461,  1462,  1463,  1464,  1465,  1466,
       0,  1467,  1468,  1469,  1470,  1471,     0,     0,     0,  1472,
       0,  1473,     0,  1474,     0,     0,     0,     0,     0,     0,
       0,     0,  1475,     0,  1476,  1477,  1478,  1479,  1480,  1481,
    1482,     0,     0,  1483,  1484,     0,     0,     0,     0,  1485,
       0,  1486,  1487,  1488,     0,  1489,     0,  1490,     0,  1491,
    1492,  1493,  1494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1495,  1496,  1497,     0,     0,     0,
       0,     0,     0,  1498,     0,  1499,  1500,  1501,     0,     0,
       0,     0,  1502,     0,  1503,  1504,  1505,     0,     0,  1506,
       0,     0,     0,  1507,  1508,     0,  1509,  1510,  1511,  1512,
       0,     0,     0,  1513,   436,   437,   438,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,   871,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1514,  1515,  1516,  1517,  1518,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,   856,  1395,  1396,  1397,  1398,  1399,  1400,
       0,  1401,     0,  1402,     0,     0,     0,  1403,  1404,  1405,
       0,  1406,     0,     0,     0,  1407,  1408,  1409,  1410,  1411,
       0,     0,  1519,  1520,  1521,  1522,  1523,  1524,  1412,     0,
       0,     0,     0,  1413,  1414,     0,     0,  1415,     0,     0,
       0,     0,  1416,  1417,  1418,  1419,  1420,     0,     0,  1421,
       0,  1422,  1423,  1424,     0,     0,  1425,  1426,     0,  1427,
    1428,  1429,     0,     0,     0,  1430,     0,     0,     0,     0,
    1431,     0,     0,     0,  1432,     0,     0,     0,     0,  1433,
    1434,  1435,     0,     0,     0,     0,  1436,  1437,     0,  1438,
    1439,  1440,  1441,     0,     0,  1442,     0,  1870,  1444,  1445,
    1446,     0,  1447,     0,  1448,  1449,     0,  1450,  1451,  1452,
       0,  1453,  1454,  1455,  1456,     0,     0,     0,     0,  1457,
       0,  1458,     0,  1459,  1460,     0,  1461,  1462,  1463,  1464,
    1465,  1466,     0,  1467,  1468,  1469,  1470,  1471,     0,     0,
       0,  1472,     0,  1473,     0,  1474,     0,     0,     0,     0,
       0,     0,     0,     0,  1475,     0,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,     0,     0,  1483,  1484,     0,     0,     0,
       0,  1485,     0,  1486,  1487,  1488,     0,  1489,     0,  1490,
       0,  1491,  1492,  1493,  1494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1495,  1496,  1497,     0,
       0,     0,     0,     0,     0,  1498,     0,  1499,  1500,  1501,
       0,     0,     0,     0,  1502,     0,  1503,  1504,  1505,     0,
       0,  1506,     0,     0,     0,  1507,  1508,     0,  1509,  1510,
    1511,  1512,     0,     0,     0,  1513,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,   873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1514,  1515,  1516,  1517,
    1518,   436,   437,   438,   439,   440,   441,   442,     0,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,   857,  1395,  1396,  1397,  1398,
    1399,  1400,     0,  1401,     0,  1402,     0,     0,     0,  1403,
    1404,  1405,     0,  1406,     0,     0,     0,  1407,  1408,  1409,
    1410,  1411,     0,     0,  1519,  1520,  1521,  1522,  1523,  1524,
    1412,     0,     0,     0,     0,  1413,  1414,     0,     0,  1415,
       0,     0,     0,     0,  1416,  1417,  1418,  1419,  1420,     0,
       0,  1421,     0,  1422,  1423,  1424,     0,     0,  1425,  1426,
       0,  1427,  1428,  1429,     0,     0,     0,  1430,     0,     0,
       0,     0,  1431,     0,     0,     0,  1432,     0,     0,     0,
       0,  1433,  1434,  1435,     0,     0,     0,     0,  1436,  1437,
       0,  1438,  1439,  1440,  1441,     0,     0,  1442,     0,  1871,
    1444,  1445,  1446,     0,  1447,     0,  1448,  1449,     0,  1450,
    1451,  1452,     0,  1453,  1454,  1455,  1456,     0,     0,     0,
       0,  1457,     0,  1458,     0,  1459,  1460,     0,  1461,  1462,
    1463,  1464,  1465,  1466,     0,  1467,  1468,  1469,  1470,  1471,
       0,     0,     0,  1472,     0,  1473,     0,  1474,     0,     0,
       0,     0,     0,     0,     0,     0,  1475,     0,  1476,  1477,
    1478,  1479,  1480,  1481,  1482,     0,     0,  1483,  1484,     0,
       0,     0,     0,  1485,     0,  1486,  1487,  1488,     0,  1489,
       0,  1490,     0,  1491,  1492,  1493,  1494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1495,  1496,
    1497,     0,     0,     0,     0,     0,     0,  1498,     0,  1499,
    1500,  1501,     0,     0,     0,     0,  1502,     0,  1503,  1504,
    1505,     0,     0,  1506,     0,     0,     0,  1507,  1508,     0,
    1509,  1510,  1511,  1512,     0,     0,     0,  1513,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,     0,   878,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1514,  1515,
    1516,  1517,  1518,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   862,  1395,  1396,
    1397,  1398,  1399,  1400,     0,  1401,     0,  1402,     0,     0,
       0,  1403,  1404,  1405,     0,  1406,     0,     0,     0,  1407,
    1408,  1409,  1410,  1411,     0,     0,  1519,  1520,  1521,  1522,
    1523,  1524,  1412,     0,     0,     0,     0,  1413,  1414,     0,
       0,  1415,     0,     0,     0,     0,  1416,  1417,  1418,  1419,
    1420,     0,     0,  1421,     0,  1422,  1423,  1424,     0,     0,
    1425,  1426,     0,  1427,  1428,  1429,     0,     0,     0,  1430,
       0,     0,     0,     0,  1431,     0,     0,     0,  1432,     0,
       0,     0,     0,  1433,  1434,  1435,     0,     0,     0,     0,
    1436,  1437,     0,  1438,  1439,  1440,  1441,     0,     0,  1442,
       0,  1928,  1444,  1445,  1446,     0,  1447,     0,  1448,  1449,
       0,  1450,  1451,  1452,     0,  1453,  1454,  1455,  1456,     0,
       0,     0,     0,  1457,     0,  1458,     0,  1459,  1460,     0,
    1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,  1468,  1469,
    1470,  1471,     0,     0,     0,  1472,     0,  1473,     0,  1474,
       0,     0,     0,     0,     0,     0,     0,     0,  1475,     0,
    1476,  1477,  1478,  1479,  1480,  1481,  1482,     0,     0,  1483,
    1484,     0,     0,     0,     0,  1485,     0,  1486,  1487,  1488,
       0,  1489,     0,  1490,     0,  1491,  1492,  1493,  1494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1495,  1496,  1497,     0,     0,     0,     0,     0,     0,  1498,
       0,  1499,  1500,  1501,     0,     0,     0,     0,  1502,     0,
    1503,  1504,  1505,     0,     0,  1506,     0,     0,     0,  1507,
    1508,     0,  1509,  1510,  1511,  1512,     0,     0,     0,  1513,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,     0,     0,   879,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1514,  1515,  1516,  1517,  1518,   436,   437,   438,   439,   440,
     441,   442,     0,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,     0,   866,
    1395,  1396,  1397,  1398,  1399,  1400,     0,  1401,     0,  1402,
       0,     0,     0,  1403,  1404,  1405,     0,  1406,     0,     0,
       0,  1407,  1408,  1409,  1410,  1411,     0,     0,  1519,  1520,
    1521,  1522,  1523,  1524,  1412,     0,     0,     0,     0,  1413,
    1414,     0,     0,  1415,     0,     0,     0,     0,  1416,  1417,
    1418,  1419,  1420,     0,     0,  1421,     0,  1422,  1423,  1424,
       0,     0,  1425,  1426,     0,  1427,  1428,  1429,     0,     0,
       0,  1430,     0,     0,     0,     0,  1431,     0,     0,     0,
    1432,     0,     0,     0,     0,  1433,  1434,  1435,     0,     0,
       0,     0,  1436,  1437,     0,  1438,  1439,  1440,  1441,     0,
       0,  1442,     0,  1929,  1444,  1445,  1446,     0,  1447,     0,
    1448,  1449,     0,  1450,  1451,  1452,     0,  1453,  1454,  1455,
    1456,     0,     0,     0,     0,  1457,     0,  1458,     0,  1459,
    1460,     0,  1461,  1462,  1463,  1464,  1465,  1466,     0,  1467,
    1468,  1469,  1470,  1471,     0,     0,     0,  1472,     0,  1473,
       0,  1474,     0,     0,     0,     0,     0,     0,     0,     0,
    1475,     0,  1476,  1477,  1478,  1479,  1480,  1481,  1482,     0,
       0,  1483,  1484,     0,     0,     0,     0,  1485,     0,  1486,
    1487,  1488,     0,  1489,     0,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1495,  1496,  1497,     0,     0,     0,     0,     0,
       0,  1498,     0,  1499,  1500,  1501,     0,     0,     0,     0,
    1502,     0,  1503,  1504,  1505,     0,     0,  1506,     0,     0,
       0,  1507,  1508,     0,  1509,  1510,  1511,  1512,     0,     0,
       0,  1513,   436,   437,   438,   439,   440,   441,   442,     0,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,     0,     0,   880,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1514,  1515,  1516,  1517,  1518,     0,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   867,  1395,  1396,  1397,  1398,  1399,  1400,     0,  1401,
       0,  1402,     0,     0,     0,  1403,  1404,  1405,     0,  1406,
       0,     0,     0,  1407,  1408,  1409,  1410,  1411,     0,     0,
    1519,  1520,  1521,  1522,  1523,  1524,  1412,     0,     0,     0,
       0,  1413,  1414,     0,     0,  1415,     0,     0,     0,     0,
    1416,  1417,  1418,  1419,  1420,     0,     0,  1421,     0,  1422,
    1423,  1424,     0,     0,  1425,  1426,     0,  1427,  1428,  1429,
       0,     0,     0,  1430,     0,     0,     0,     0,  1431,     0,
       0,     0,  1432,     0,     0,     0,     0,  1433,  1434,  1435,
       0,     0,     0,     0,  1436,  1437,     0,  1438,  1439,  1440,
    1441,     0,     0,  1442,     0,  1955,  1444,  1445,  1446,     0,
    1447,     0,  1448,  1449,     0,  1450,  1451,  1452,     0,  1453,
    1454,  1455,  1456,     0,     0,     0,     0,  1457,     0,  1458,
       0,  1459,  1460,     0,  1461,  1462,  1463,  1464,  1465,  1466,
       0,  1467,  1468,  1469,  1470,  1471,     0,     0,     0,  1472,
    1152,  1473,     0,  1474,     0,     0,     0,     0,     0,     0,
       0,     0,  1475,     0,  1476,  1477,  1478,  1479,  1480,  1481,
    1482,     0,  1154,  1483,  1484,  1155,     0,  1156,     0,  1485,
    1157,  1486,  1487,  1488,     0,  1489,     0,  1490,   470,  1491,
    1492,  1493,  1494,     0,     0,  1158,     0,     0,     0,     0,
       0,     0,  1159,  1160,  1495,  1496,  1497,     0,     0,     0,
       0,     0,     0,  1498,     0,  1499,  1500,  1501,     0,     0,
       0,     0,  1502,     0,  1503,  1504,  1505,  1161,     0,  1506,
       0,     0,     0,  1507,  1508,     0,  1509,  1510,  1511,  1512,
       0,     0,     0,  1513,   141,   142,   143,   144,   145,   146,
       0,     0,     0,   471,     0,     0,     0,     0,   147,   148,
       0,     0,     0,  -299,     0,     0,   149,   150,     0,   881,
     472,     0,     0,     0,     0,     0,  1163,     0,   151,     0,
       0,     0,     0,   473,  1514,  1515,  1516,  1517,  1518,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1164,     0,
       0,     0,     0,     0,     0,   152,  1165,     0,   474,     0,
     153,     0,     0,   154,   155,   893,     0,     0,     0,     0,
       0,     0,     0,     0,   475,     0,     0,     0,     0,   156,
       0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,  1519,  1520,  1521,  1522,  1523,  1524,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1166,     0,
     436,   437,   438,   439,   440,   441,   442,   158,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   159,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,   161,   162,     0,   163,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,     0,   202,     0,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,     0,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     0,   250,   251,   252,   253,
     141,   142,   143,   144,   145,   146,   254,     0,     0,     0,
       0,     0,     0,     0,   147,   148,     0,     0,     0,     0,
       0,     0,   149,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,     0,     0,     0,
       0,     0,     0,     0,   598,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,   153,     0,     0,   154,
     155,   436,   437,   438,   439,   440,   441,   442,     0,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     436,   437,   438,   439,   440,   441,   442,   894,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,     0,     0,     0,     0,     0,     0,     0,
     895,     0,     0,     0,     0,     0,     0,     0,   599,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,   897,     0,     0,   141,   142,
     143,   144,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   148,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   705,   908,   706,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   600,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,   153,     0,     0,   154,   155,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
     202,     0,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   159,   250,   251,   252,   253,   141,   142,   143,   144,
     145,   146,   254,     0,     0,     0,     0,     0,     0,     0,
     147,   148,     0,     0,     0,     0,     0,     0,   149,     0,
     917,     0,     0,     0,     0,   707,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,     0,     0,     0,     0,     0,     0,   152,     0,     0,
       0,     0,   153,     0,     0,   154,   155,     0,   918,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   919,   202,     0,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     0,     0,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   159,
     250,   251,   252,   253,   141,   142,   143,   144,   145,   146,
     708,     0,     0,     0,     0,     0,     0,     0,   147,   148,
       0,     0,     0,     0,     0,     0,   149,   639,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,     0,
     153,   343,     0,   154,   155,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,     0,   202,     0,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   159,   250,   251,
     252,   253,     0,     0,     0,     0,     0,     0,   254,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,   920,   436,   437,   438,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,     0,   202,     0,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,     0,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     0,   250,   251,   252,   253,
     141,   142,   143,   144,   145,   146,   254,     0,     0,     0,
       0,     0,     0,     0,   147,   148,     0,     0,     0,     0,
       0,     0,   149,     0,     0,   921,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,   153,     0,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,     0,   847,     0,   141,   142,   143,   144,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
     147,   148,     0,     0,     0,     0,     0,     0,   149,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   922,   152,     0,     0,
       0,     0,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   923,     0,     0,     0,     0,     0,     0,  1240,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,     0,  1058,     0,     0,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   159,
     202,     0,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,     0,   250,   251,   252,   253,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,     0,   202,     0,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   924,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     0,   250,   251,
     252,   253,   141,   142,   143,   144,   145,   146,   254,     0,
       0,     0,     0,     0,     0,     0,   147,   148,     0,     0,
       0,     0,     0,     0,   149,     0,   930,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,     0,     0,     0,     0,   153,     0,
       0,   154,   155,   438,   439,   440,   441,   442,     0,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,  1245,     0,  1265,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,   141,   142,
     143,   144,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   148,  1063,     0,     0,     0,     0,     0,
     149,   436,   437,   438,   439,   440,   441,   442,     0,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,   159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,   153,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   436,   437,   438,   439,   440,   441,   442,
    1709,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   159,   202,     0,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,     0,   250,   251,   252,   253,     0,     0,
       0,     0,     0,     0,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,     0,   202,     0,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     0,     0,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     0,
     250,   251,   252,   253,   141,   142,   143,   144,   145,   146,
     254,     0,     0,     0,     0,     0,     0,     0,   147,   148,
       0,     0,     0,     0,     0,     0,   149,     0,  1266,     0,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,     0,
     153,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1277,     0,     0,     0,     0,     0,  1711,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     141,   142,   143,   144,   145,   146,  1057,     0,     0,     0,
     877,     0,     0,     0,   147,   148,     0,     0,     0,     0,
       0,     0,   149,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,   153,     0,     0,   154,
     155,   436,   437,   438,   439,   440,   441,   442,     0,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   159,   202,     0,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,     0,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     0,   250,   251,   252,   253,
       0,     0,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
     202,     0,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,     0,   250,   251,   252,   253,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   436,   437,   438,   439,   440,   441,   442,
    1287,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,   436,   437,   438,   439,   440,   441,   442,  1303,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,  1304,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   436,   437,   438,   439,   440,   441,   442,  1253,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
    1305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   436,   437,   438,   439,
     440,   441,   442,  1308,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,   436,   437,   438,   439,   440,   441,   442,  1309,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,  1749,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   437,   438,   439,
     440,   441,   442,  1254,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   436,
     437,   438,   439,   440,   441,   442,   868,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   436,   437,   438,   439,   440,   441,   442,   872,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   436,   437,   438,   439,   440,
     441,   442,   874,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     436,   437,   438,   439,   440,   441,   442,   875,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
     876,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,   885,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   436,
     437,   438,   439,   440,   441,   442,   886,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   436,   437,   438,   439,   440,   441,   442,   887,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   436,   437,   438,   439,   440,
     441,   442,   888,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,   889,   436,   437,   438,   439,   440,   441,   442,
       0,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   890,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   436,   437,   438,   439,   440,   441,   442,
     891,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,  -609,  -609,  -609,  -609,   892,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   436,   437,   438,   439,   440,   441,   442,   896,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,   909,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   436,
     437,   438,   439,   440,   441,   442,   910,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   436,   437,   438,   439,   440,   441,   442,   911,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   436,   437,   438,   439,   440,
     441,   442,   912,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   436,   437,
     438,   439,   440,   441,   442,   913,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   436,   437,   438,   439,   440,   441,   442,   914,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,   915,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   436,   437,   438,
     439,   440,   441,   442,   916,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
       0,     0,   436,   437,   438,   439,   440,   441,   442,   927,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   436,   437,   438,   439,   440,
     441,   442,     0,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,     0,   928,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   436,   437,   438,   439,   440,
     441,   442,   929,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   436,   437,
     438,   439,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,     0,     0,     0,     0,     0,  1257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   436,   437,   438,   439,   440,   441,   442,
    1262,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   436,   437,
     438,   439,   440,   441,   442,  1263,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   436,   437,   438,   439,   440,   441,   442,  1264,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,  1267,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   436,   437,   438,
     439,   440,   441,   442,  1268,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     436,   437,   438,   439,   440,   441,   442,  1269,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
    1270,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,  1271,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
       0,   436,   437,   438,   439,   440,   441,   442,  1272,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   436,   437,   438,   439,   440,   441,
     442,  1275,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   436,   437,   438,
     439,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
       0,  1276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   436,   437,   438,
     439,   440,   441,   442,  1288,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,     0,     0,     0,     0,     0,     0,  1289,
     436,   437,   438,   439,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,     0,     0,     0,     0,   436,   437,   438,
     439,   440,   441,   442,  1302,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     436,   437,   438,   439,   440,   441,   442,  1306,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
    1307,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,  1380,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   436,
     437,   438,   439,   440,   441,   442,  1571,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   436,   437,   438,   439,   440,   441,   442,  1634,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   436,   437,   438,   439,   440,
     441,   442,  1690,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,     0,     0,
     436,   437,   438,   439,   440,   441,   442,  1714,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   436,   437,   438,   439,   440,   441,   442,
    1715,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   436,   437,   438,   439,
     440,   441,   442,  1716,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   436,
     437,   438,   439,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,  1717,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   436,
     437,   438,   439,   440,   441,   442,  1718,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,     0,     0,     0,     0,     0,     0,   436,
     437,   438,   439,   440,   441,   442,  1727,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,     0,     0,     0,     0,   436,   437,   438,   439,
     440,   441,   442,  1744,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   436,
     437,   438,   439,   440,   441,   442,  1745,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   436,   437,   438,   439,   440,   441,   442,  1746,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,    47,     0,     0,     0,     0,
       0,     0,  1747,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   436,   437,
     438,   439,   440,   441,   442,  1748,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,     0,     0,     0,     0,     0,     0,     0,  1750,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,    49,
       0,  1751,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1572,  1573,  1772,     0,     1,  1574,
       0,  1575,     2,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1778,
      51,     0,     0,     0,     3,     0,     0,     0,     0,     4,
       0,     0,  1576,  1577,     0,  1578,     0,     0,     0,     0,
       0,     0,  1782,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,  1787,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,     0,     0,
       0,     7,     0,     0,     0,  1883,     0,     0,     0,     0,
       0,    57,   436,   437,   438,   439,   440,   441,   442,     0,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,  1902,   511,   512,     0,   513,
       0,   514,   515,     8,     0,     9,     0,     0,     0,  1579,
    1580,     0,     0,    10,     0,     0,     0,   516,     0,     0,
       0,     0,  1915,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,     0,    13,  1925,     0,    14,   521,     0,
       0,     0,     0,     0,     0,    15,     0,   522,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1926,     0,
       0,     0,     0,     0,     0,   523,     0,     0,     0,    58,
       0,     0,     0,   524,     0,     0,     0,     0,     0,     0,
       0,   525,     0,     0,     0,     0,     0,     0,   526,     0,
       0,   527,     0,     0,   528,   529,     0,     0,     0,     0,
       0,     0,     0,     0,   436,   437,   438,   439,   440,   441,
     442,   530,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   531,   532,
       0,   533,   534,     0,     0,     0,     0,   535,     0,   536,
       0,     0,     0,     0,   537,   538,     0,     0,     0,     0,
     539,   540,     0,     0,     0,     0,     0,   541,     0,   542,
       0,     0,     0,     0,   543,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,     0,     0,   436,   437,   438,   439,   440,   441,   442,
    1251,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,     0,   435,     0,
       0,     0,     0,     0,  1552,   436,   437,   438,   439,   440,
     441,   442,     0,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,     0,     0,
       0,   436,   437,   438,   439,   440,   441,   442,   458,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,     0,     0,  1553,     0,     0,
       0,     0,     0,   939,   436,   437,   438,   439,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,     0,   436,
     437,   438,   439,   440,   441,   442,  1119,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457
};

static const yytype_int16 yycheck[] =
{
      77,  1234,  1026,  1137,  1226,   965,   966,   571,   954,   969,
    1015,   261,   308,   262,   475,  1228,     3,  1022,   117,     5,
     836,     6,     3,   784,   785,     3,   117,   134,    41,   790,
     134,   792,    20,    18,   833,     8,   835,   172,     6,   206,
     139,    20,    80,    40,   172,     3,     4,     5,     6,     7,
       8,     3,   192,     3,     3,     3,     3,  1540,  1546,   136,
     137,  1149,  1150,   206,    89,    43,    89,    70,   206,    16,
     147,   148,   149,   322,   262,    47,   153,   217,    70,    43,
    1168,    94,   189,     4,     3,   189,    70,     3,  1594,  1595,
      89,   230,     3,     4,     5,     6,     7,     8,  1249,  1605,
    1606,   170,    46,    47,     3,   217,     4,     5,     6,     7,
      18,     3,    18,   116,   137,   230,  1338,   933,    18,  1291,
    1292,     3,    66,   237,   116,     3,   491,    66,  1300,  1301,
      10,    11,    12,    13,    14,    15,    16,   230,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   237,   240,   150,     3,     9,    95,   723,
      76,   230,    70,     3,   198,     5,    64,   217,    20,   117,
     134,   174,   736,   170,    80,    95,    95,   254,   345,    78,
     545,   166,   174,   130,    76,  1336,   134,    95,   213,   223,
     174,  1151,  1197,   188,   334,   233,   106,   107,   166,   196,
     223,   149,   217,  1208,   347,  1229,   345,   345,   166,   181,
    1215,   460,   347,  1719,  1720,  1721,  1722,  1723,  1724,   347,
     207,   168,   195,   226,   223,   189,   165,  1733,   176,   166,
    1209,  1737,   347,   347,   226,  1741,   157,   117,   345,   183,
     344,   345,   226,   207,   183,     3,   166,   217,   347,     0,
     156,  1050,   345,  1052,   240,   166,   347,   157,   136,  1347,
     824,   347,   339,   347,   170,   343,   343,   206,    26,     3,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   742,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   282,   375,   376,
     377,  1117,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,  1541,
    1542,   570,  1810,     3,   401,   402,  1809,    18,   238,   406,
     407,   344,     3,     3,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   344,   230,   345,   436,
     437,   438,   439,   440,   345,   344,   344,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,  1327,   747,   748,  1389,   462,  1391,  1620,   346,    80,
     755,    66,  1371,   345,   582,   345,   345,   585,   296,   297,
     298,  1907,   136,  1382,   115,  1911,   230,    77,   596,   118,
      41,   230,  1584,  1585,  1586,  1587,  1588,  1589,  1179,     3,
    1181,  1182,     3,   134,  1596,   230,   120,     5,  1600,   177,
     344,   345,  1604,     3,   799,   800,   801,    81,  1417,   339,
     340,   341,   342,   290,   291,   292,   293,   345,     3,  1428,
       3,     3,     3,     3,     3,     3,   136,     3,  1964,  1965,
     207,  1967,  1968,    94,   173,   156,   136,   347,     3,  1448,
    1703,  1958,   345,     3,   770,   771,  1689,    55,   728,   170,
     345,   175,    63,  1462,   232,   129,   106,   107,   235,  1623,
     165,   568,  1471,    63,   203,    76,   957,    43,    63,   960,
    1987,  1988,   207,   189,    36,    43,    76,    82,   183,   136,
     224,    76,   877,   878,    52,   346,   347,   594,   595,    51,
     231,   345,  1527,  2010,    77,   602,   345,   102,  1533,   243,
     235,   206,  1511,    10,    11,    12,    13,    14,    15,    16,
     345,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,  1127,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     5,
      43,   136,   211,   136,   136,   136,   136,   136,   136,    52,
       3,  1551,   346,   347,    20,    10,    11,    12,    13,    14,
      15,    16,   967,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   238,  1852,
     135,    43,     3,   700,   701,    85,   703,    31,    32,   144,
      52,   708,    10,    11,    12,    13,    14,    15,    16,    85,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    54,    43,   346,   347,    58,
     135,  1685,  1989,   230,  1669,    52,   126,     3,  1840,    10,
     237,  1904,  1844,    14,   134,  1680,  1655,  1682,     3,   139,
     126,  1660,   346,   347,  2011,  2012,    74,    75,   134,   149,
     777,   778,   217,   780,   781,   782,   945,  1919,     3,   786,
     787,   788,   527,   149,   791,     3,   105,     3,   533,    78,
     535,    54,   347,  2040,     3,    58,    30,    31,    32,     3,
     797,  1855,    10,    11,    12,    13,    14,    15,    16,  1962,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   244,   934,   346,   347,   346,
     347,   120,   344,    96,     3,   943,    99,    63,    43,    13,
      14,   838,    16,   840,    70,    19,   135,   844,   845,   345,
     847,   114,  1944,  1945,   851,  1947,  1948,   344,   346,   347,
     347,   858,   859,   860,   861,   170,   863,   864,   865,   132,
     346,   347,     3,   870,   871,   244,   873,   140,   345,  1804,
       4,     5,   879,   880,   881,  1784,   175,   346,   347,     3,
     116,  1757,     3,   119,     4,     5,   893,   894,   895,   244,
     897,  1800,     3,   192,   346,   347,   195,   346,   347,   135,
     244,   908,   346,   347,   346,   347,   346,   347,   144,   344,
     917,   918,   919,   920,   921,   922,   923,   924,   217,   926,
    1038,   346,   347,   930,    26,    27,    28,    29,    30,    31,
      32,   244,   939,   346,   347,   244,  1231,   244,   174,   346,
     347,   214,   244,   216,   951,   346,   347,   244,   346,   347,
     210,   958,   346,   347,   346,   347,     3,   346,   347,  1868,
       8,   234,   346,   347,   346,   347,    10,    11,    12,    13,
      14,    15,    16,     9,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   347,
     226,   345,   999,   346,   347,   346,   347,   346,   347,   345,
    1118,   346,   347,  1121,  1122,  1123,    10,    11,    12,    13,
      14,    15,    16,   345,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    43,
     346,   347,    45,  1040,    45,   334,  1043,    63,   346,   347,
     346,   347,  1049,   346,   347,   346,   347,    63,   346,   347,
     345,  1058,   346,   347,   346,   347,  1063,  1064,   346,   347,
      10,    11,    12,    13,    14,    15,    16,   345,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   345,    10,    11,    12,    13,    14,    15,
      16,   345,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   346,   347,    63,
     154,   345,  1119,   346,   347,   514,   515,   516,   517,   210,
     519,   346,   347,   522,   523,   524,   346,   347,   346,   347,
     529,   530,   531,  1140,   345,   534,    49,    50,  1145,    10,
      11,    12,    13,    14,    15,    16,   345,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     3,   346,   347,   346,   347,   345,    10,    11,
      12,    13,    14,    15,    16,   345,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   345,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1221,   345,    10,    11,    12,    13,
      14,    15,    16,    18,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   346,
     347,    36,   346,   347,   345,    40,  1253,   345,    43,  1256,
      45,   346,   347,    48,   346,   347,   346,   347,  1265,  1266,
     346,   347,    49,    50,   344,   345,   344,   345,    63,   345,
    1277,   346,   347,   346,   347,    70,    71,   346,   347,  1286,
    1287,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   345,  1303,  1304,  1305,   345,
      95,  1308,  1309,   347,  1311,   345,  1313,   345,  1315,   346,
     347,   346,   347,   346,   347,    35,   345,   112,  1325,  1326,
     738,   739,   949,   950,   345,   345,  1333,  1334,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     3,   346,   347,  1351,  1331,  1332,    67,  1355,   144,
     345,   345,     3,     4,     5,     6,     7,     8,  1365,    10,
     345,    12,    82,   345,   345,    16,    17,    18,   345,    20,
      90,   166,  1379,    24,    25,    26,    27,    28,   345,   174,
     345,   345,   102,   345,   345,   345,    37,   345,   345,   345,
     345,    42,    43,   345,   345,    46,   346,   347,   345,   345,
      51,    52,    53,    54,    55,   345,   345,    58,   345,    60,
      61,    62,   345,   345,    65,    66,   345,    68,    69,    70,
     346,   347,   345,    74,   345,   345,   345,   345,    79,   345,
     345,   226,    83,   345,   345,   345,   345,    88,    89,    90,
     160,   345,   345,   345,    95,    96,   345,    98,    99,   100,
     101,   345,   345,   104,   345,   106,   107,   108,   109,   345,
     111,   181,   113,   114,   345,   116,   117,   118,   345,   120,
     121,   122,   123,   345,   240,   346,   347,   128,   345,   130,
     345,   132,   133,   345,   135,   136,   137,   138,   139,   140,
     345,   142,   143,   144,   145,   146,   345,   345,   345,   150,
     345,   152,   345,   154,   346,   347,   345,   345,   345,   345,
     345,   345,   163,   233,   165,   166,   167,   168,   169,   170,
     171,   345,     3,   174,   175,     3,   170,   244,   347,   180,
       3,   182,   183,   184,   170,   186,   244,   188,     3,   190,
     191,   192,   193,    26,     3,     3,     3,     3,     3,     3,
       3,  1558,  1559,   347,   205,   206,   207,  1564,     3,  1566,
       3,     3,   346,   214,   346,   216,   217,   218,   346,   346,
     346,   346,   223,   346,   225,   226,   227,   346,   346,   230,
       5,   346,   346,   234,   235,   346,   237,   238,   239,   240,
     346,   346,   345,   244,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
       3,     3,   346,     3,   285,   286,   287,   288,   289,    10,
      11,    12,    13,    14,    15,    16,   143,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   169,     3,     3,     3,     3,     3,  1686,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,     3,   343,   344,   345,   346,   347,   348,     3,     3,
       3,   210,     3,     3,     3,   342,  1713,     3,     5,    56,
       5,     5,    10,    11,    12,    13,    14,    15,    16,  1726,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   345,     3,     4,     5,     6,
       7,     8,  1749,    10,   345,    12,   345,  1754,   345,    16,
      17,    18,   345,    20,   345,  1762,   345,    24,    25,    26,
      27,    28,     3,     3,     3,   346,     3,   347,  1775,  1776,
      37,     3,   170,   346,   170,    42,    43,     3,   170,    46,
     244,     3,   171,     3,    51,    52,    53,    54,    55,     3,
     346,    58,   207,    60,    61,    62,   346,   313,    65,    66,
     313,    68,    69,    70,   346,   313,   313,    74,   313,   345,
     207,   345,    79,   345,   345,   117,    83,   347,   170,     3,
     144,    88,    89,    90,   144,   144,   143,   143,    95,    96,
       3,    98,    99,   100,   101,   210,     5,   104,     5,   106,
     107,   108,   109,   210,   111,     5,   113,   114,     4,   116,
     117,   118,     5,   120,   121,   122,   123,     5,   166,   345,
     170,   128,     3,   130,   186,   132,   133,   232,   135,   136,
     137,   138,   139,   140,     3,   142,   143,   144,   145,   146,
       3,     3,   170,   150,     3,   152,  1893,   154,   152,    55,
      20,   172,   141,   345,     4,   346,   163,   345,   165,   166,
     167,   168,   169,   170,   171,   313,   313,   174,   175,   345,
     313,   345,   313,   180,   313,   182,   183,   184,   313,   186,
     218,   188,   313,   190,   191,   192,   193,     5,   313,     5,
     313,   347,   345,   345,   207,   122,     3,     3,   205,   206,
     207,   121,     3,   144,   144,   345,     3,   214,     3,   216,
     217,   218,   345,    70,  1961,   345,   223,   345,   225,   226,
     227,   232,   346,   230,   346,   346,   346,   234,   235,   345,
     237,   238,   239,   240,     3,    52,   347,   244,    10,    11,
      12,    13,    14,    15,    16,   121,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     345,   345,   170,   232,     3,     3,   144,   144,   285,   286,
     287,   288,   289,    10,    11,    12,    13,    14,    15,    16,
     345,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,   185,     3,     4,
       5,     6,     7,     8,   345,    10,   345,    12,   345,   144,
       3,    16,    17,    18,     3,    20,   346,   346,   346,    24,
      25,    26,    27,    28,   346,   345,   343,   344,   345,   346,
     347,   348,    37,   346,   345,   345,   345,    42,    43,   345,
     345,    46,   345,   345,   345,    55,    51,    52,    53,    54,
      55,   346,   346,    58,   346,    60,    61,    62,   128,   143,
      65,    66,   345,    68,    69,    70,   345,   345,    20,    74,
     345,   345,   345,     3,    79,   166,     3,   345,    83,   345,
     345,    44,     3,    88,    89,    90,   345,     4,   144,   144,
      95,    96,   186,    98,    99,   100,   101,     5,   206,   104,
       4,   106,   107,   108,   109,     4,   111,   345,   113,   114,
       3,   116,   117,   118,     3,   120,   121,   122,   123,     3,
       3,     3,   232,   128,   345,   130,   100,   132,   133,   232,
     135,   136,   137,   138,   139,   140,   345,   142,   143,   144,
     145,   146,     3,   345,   345,   150,   345,   152,   345,   154,
       3,   345,   347,    20,   223,   314,   313,   313,   163,   346,
     165,   166,   167,   168,   169,   170,   171,     3,     3,   174,
     175,   346,   346,     3,     3,   180,   346,   182,   183,   184,
     346,   186,     5,   188,     5,   190,   191,   192,   193,    43,
     345,   345,   345,    52,   346,     4,    52,   346,   346,   346,
     205,   206,   207,   347,   345,   190,   345,   345,   232,   214,
     144,   216,   217,   218,   345,   144,   345,     3,   223,    20,
     225,   226,   227,   347,   345,   230,   171,    55,   346,   234,
     235,   345,   237,   238,   239,   240,    18,   346,     3,   244,
      10,    11,    12,    13,    14,    15,    16,   284,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   346,   345,   347,   346,   345,   345,   144,
     346,   346,   346,     3,    52,     3,     3,   345,   345,   345,
     285,   286,   287,   288,   289,    10,    11,    12,    13,    14,
      15,    16,    55,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,   346,
       3,     4,     5,     6,     7,     8,     3,    10,     3,    12,
      55,   346,   313,    16,    17,    18,   346,    20,   346,   313,
     313,    24,    25,    26,    27,    28,   313,   346,   343,   344,
     345,   346,   347,   348,    37,   346,   187,   121,     3,    42,
      43,     3,   233,    46,   180,     3,     5,    69,    51,    52,
      53,    54,    55,     5,    52,    58,   346,    60,    61,    62,
     113,   146,    65,    66,   136,    68,    69,    70,   180,   239,
       5,    74,    20,   347,   346,   346,    79,   346,   346,   346,
      83,   346,     3,   347,   345,    88,    89,    90,   346,   345,
     139,   345,    95,    96,   346,    98,    99,   100,   101,   345,
       3,   104,     3,   106,   107,   108,   109,     3,   111,     3,
     113,   114,   346,   116,   117,   118,   346,   120,   121,   122,
     123,   346,   345,   345,     3,   128,     3,   130,   347,   132,
     133,   199,   135,   136,   137,   138,   139,   140,   199,   142,
     143,   144,   145,   146,   345,     3,   180,   150,     3,   152,
      20,   154,     3,   153,   153,     3,   346,   346,     3,   347,
     163,     3,   165,   166,   167,   168,   169,   170,   171,   197,
     346,   174,   175,   346,   346,     3,     3,   180,   345,   182,
     183,   184,   196,   186,   345,   188,   346,   190,   191,   192,
     193,   346,   346,     5,     3,   345,    80,   131,   147,   235,
     215,   170,   205,   206,   207,     5,   170,   164,   164,     5,
      84,   214,   344,   216,   217,   218,   850,  1328,  1557,  1624,
     223,   462,   225,   226,   227,   820,   469,   230,   947,  1144,
     572,   234,   235,    72,   237,   238,   239,   240,   107,   333,
     834,   244,    10,    11,    12,    13,    14,    15,    16,  1218,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,  1713,   584,   347,  1685,  2016,
    1230,   803,   789,   140,  1369,   508,    -1,   316,    -1,    -1,
      -1,    -1,   285,   286,   287,   288,   289,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   346,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     343,   344,   345,   346,   347,   348,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   346,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   343,   344,   345,   346,   347,   348,    37,    -1,
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
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,   286,   287,   288,
     289,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   346,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   343,   344,   345,   346,   347,   348,
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
      32,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
     287,   288,   289,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   346,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   343,   344,   345,   346,
     347,   348,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
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
      30,    31,    32,    -1,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,   286,   287,   288,   289,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   346,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   343,   344,
     345,   346,   347,   348,    37,    -1,    -1,    -1,    -1,    42,
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
      28,    29,    30,    31,    32,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,   286,   287,   288,   289,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   346,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     343,   344,   345,   346,   347,   348,    37,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,   289,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   346,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   343,   344,   345,   346,   347,   348,    37,    -1,
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
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,   286,   287,   288,
     289,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   346,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   343,   344,   345,   346,   347,   348,
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
      32,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
     287,   288,   289,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   346,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   343,   344,   345,   346,
     347,   348,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
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
      30,    31,    32,    -1,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,   286,   287,   288,   289,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   346,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   343,   344,
     345,   346,   347,   348,    37,    -1,    -1,    -1,    -1,    42,
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
      28,    29,    30,    31,    32,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,   286,   287,   288,   289,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   346,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     343,   344,   345,   346,   347,   348,    37,    -1,    -1,    -1,
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
      18,   152,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   163,    -1,   165,   166,   167,   168,   169,   170,
     171,    -1,    40,   174,   175,    43,    -1,    45,    -1,   180,
      48,   182,   183,   184,    -1,   186,    -1,   188,    68,   190,
     191,   192,   193,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,   205,   206,   207,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,    -1,    -1,
      -1,    -1,   223,    -1,   225,   226,   227,    95,    -1,   230,
      -1,    -1,    -1,   234,   235,    -1,   237,   238,   239,   240,
      -1,    -1,    -1,   244,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,   143,    -1,    -1,    25,    26,    -1,   347,
     150,    -1,    -1,    -1,    -1,    -1,   144,    -1,    37,    -1,
      -1,    -1,    -1,   163,   285,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    64,   174,    -1,   188,    -1,
      69,    -1,    -1,    72,    73,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,   344,   345,   346,   347,   348,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      10,    11,    12,    13,    14,    15,    16,   126,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   166,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,   204,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,   283,    -1,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,    -1,   335,   336,   337,   338,
       3,     4,     5,     6,     7,     8,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   347,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,   347,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,   347,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
     283,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   166,   335,   336,   337,   338,     3,     4,     5,     6,
       7,     8,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
     347,    -1,    -1,    -1,    -1,   200,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,   347,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   347,   283,    -1,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,    -1,    -1,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   166,
     335,   336,   337,   338,     3,     4,     5,     6,     7,     8,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,   238,    -1,    72,    73,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,   283,    -1,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,    -1,    -1,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   166,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,   345,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   347,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,   283,    -1,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,    -1,   335,   336,   337,   338,
       3,     4,     5,     6,     7,     8,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,   347,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   117,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   347,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    95,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   166,
     283,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    -1,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,   283,    -1,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   347,    -1,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,    -1,   335,   336,
     337,   338,     3,     4,     5,     6,     7,     8,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,   347,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    95,    -1,   347,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,   117,    -1,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      95,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   166,   283,    -1,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,    -1,    -1,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    -1,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    -1,   283,    -1,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,    -1,    -1,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
     335,   336,   337,   338,     3,     4,     5,     6,     7,     8,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,   347,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    95,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,     4,     5,     6,     7,     8,   106,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   166,   283,    -1,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,    -1,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,    -1,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
     283,    -1,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,    -1,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    -1,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     347,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   347,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   347,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   121,    18,
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
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   347,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   347,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   347,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    11,    12,    13,
      14,    15,    16,   346,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   346,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   346,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   346,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     346,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   346,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   346,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   346,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   346,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     346,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    13,    14,    15,    16,   346,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   346,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   346,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   346,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   346,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   346,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   346,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   346,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   346,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   346,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   346,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     346,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   346,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   346,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   346,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   346,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   346,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     346,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   346,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   346,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   346,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   346,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,   346,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   346,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   346,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     346,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   346,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   346,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   346,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   346,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     346,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   346,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   346,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   346,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   346,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    -1,    -1,    -1,    -1,
      -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   346,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    84,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,   346,    -1,    34,    91,
      -1,    93,    38,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,
     135,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,   124,   125,    -1,   127,    -1,    -1,    -1,    -1,
      -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,   212,    -1,    -1,
      -1,   137,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,   226,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   346,    53,    54,    -1,    56,
      -1,    58,    59,   179,    -1,   181,    -1,    -1,    -1,   241,
     242,    -1,    -1,   189,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,   220,   346,    -1,   223,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   231,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,   334,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,   158,    -1,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   178,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,
      -1,   208,   209,    -1,    -1,    -1,    -1,   214,    -1,   216,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
     227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,   236,
      -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     106,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    41,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    43,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    42,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    89,    90,   137,   179,   181,
     189,   206,   207,   220,   223,   231,   350,   386,   387,   424,
     428,   429,   432,   433,   436,   437,   438,   440,   452,   453,
     456,   458,   459,   460,   482,   485,   492,   493,   496,   499,
     500,   503,   192,   217,   334,   217,     3,    10,    78,    84,
     120,   135,   175,   192,   195,   211,   212,   226,   334,   464,
     425,    78,   120,   135,   175,   192,   195,   217,   334,   444,
     217,   217,   444,     8,   195,   483,   484,   405,   217,   444,
     454,     3,    78,     0,   343,   435,     3,     3,     3,     3,
     345,   189,   136,   457,     3,     3,     3,    77,   136,     3,
       3,   457,   211,   135,   457,   217,     3,   117,   134,   149,
     176,   426,     3,   136,     3,   136,     3,     3,   136,     3,
     136,     3,   136,     3,   136,     3,   136,    85,   126,   134,
     139,   149,   445,     3,     3,   445,     9,    20,     3,    95,
     347,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    37,    64,    69,    72,    73,    88,    92,   126,   166,
     194,   201,   202,   204,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   283,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     335,   336,   337,   338,   345,   351,   406,   407,     3,   134,
     149,     3,   345,   409,   410,   411,   413,   423,     3,   350,
      46,    47,    66,   183,    82,   102,    35,    67,    82,    90,
     102,   160,   181,   233,    47,   181,   501,   344,     3,     4,
       5,     6,     7,     8,   166,   346,   494,   495,   120,   175,
     244,     3,    43,   345,   170,     3,   136,   244,   345,    36,
      51,   497,     3,     3,    77,   136,     3,   457,   344,   427,
       3,   426,   117,   347,   244,   244,   244,   244,   244,   244,
     244,     3,   210,     3,   351,   351,   484,   344,   345,     9,
     351,   351,   351,   238,   351,   385,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   351,     3,    10,    11,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    43,   408,
     117,   139,   347,   347,   344,   408,   387,   409,   206,   347,
      68,   133,   150,   163,   188,   204,   414,   416,    43,   412,
      45,    45,    63,    76,     3,    76,    63,     3,    63,    76,
      63,     3,    76,     3,    63,    76,    63,   240,   210,    18,
     157,   339,   340,   341,   342,   502,     3,   346,   347,     3,
       3,    53,    54,    56,    58,    59,    74,    96,    97,    98,
      99,   105,   114,   132,   140,   148,   155,   158,   161,   162,
     178,   205,   206,   208,   209,   214,   216,   221,   222,   227,
     228,   234,   236,   241,   478,     3,    16,   130,   168,   486,
     487,   488,     3,   170,   244,     3,   486,    89,   137,   223,
     498,   170,     3,   136,   244,   501,     3,    26,   237,   388,
     230,   409,     3,     3,     3,     3,     3,     3,     3,     3,
     206,   345,   446,     3,   206,   446,     3,   351,   356,   357,
     351,   351,   385,   106,   107,   238,   362,   351,    57,   151,
     219,   351,   383,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   346,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   346,   351,
     351,   351,   346,   351,   351,   351,   351,   351,   351,    26,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   346,   346,   346,   346,   346,   351,   351,   346,   346,
     346,   351,   351,     5,   346,   346,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   346,   346,
     351,   351,   351,   351,   351,     6,    18,   166,   282,   345,
      13,    14,    16,    19,   351,    37,    39,   200,   345,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,     3,   409,     3,   407,     3,   434,     3,   115,
     134,   231,   420,   346,   346,     3,   455,   410,   150,   188,
     417,   411,   143,   169,   415,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   478,     3,   210,     3,     3,     3,
       5,     3,   342,     5,     5,   240,     5,    55,     5,   495,
     345,   345,   345,   474,   474,   474,   474,   474,   474,   345,
     474,   474,   474,    56,   475,   475,   474,   474,   474,   345,
     475,   474,   475,   345,   345,    18,    70,    95,   478,     3,
       3,     3,   346,   347,   230,   345,     3,     3,   170,   346,
     170,     3,   170,   244,     3,   134,   189,   344,   345,   480,
     481,   351,   171,   398,   409,   388,   427,     3,   451,     3,
     447,   235,   387,   451,   235,   387,   347,   346,   218,   106,
     107,   351,   351,   387,   117,   347,   346,   117,   351,   347,
     347,   347,   346,   346,   346,   346,   346,   346,   347,   347,
     347,   347,   346,   347,   347,   347,   346,   346,   346,   346,
     347,   347,   346,   347,   346,   346,   346,    43,   347,   347,
     347,   347,   284,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   347,   347,   347,   346,   347,   313,   313,
     313,   346,   347,   346,   347,   346,   313,   313,   347,   346,
     346,   346,   346,   346,   346,   346,   346,   347,   347,   347,
     347,   347,   347,   347,   347,   346,   347,   346,   346,   346,
     347,     6,   166,   358,   360,   351,   351,   345,   351,    42,
     345,   345,   345,   352,   388,   117,   347,   408,   144,   144,
     144,    20,   344,   347,   388,   415,   415,   143,   170,   411,
     143,    70,   116,   174,   226,   478,   478,     3,   473,   478,
       3,   210,   210,     5,     5,   486,   486,     5,   476,   477,
     476,   476,     4,   479,   476,   476,   476,   477,   477,   476,
     476,   476,   479,   477,   476,   477,     5,     5,   166,   345,
     351,   478,   478,   478,   186,   488,   232,     3,   290,   291,
     292,   293,   430,   431,   230,   345,   170,     3,    43,    52,
       3,   230,   345,     3,     3,   170,     3,    63,    70,   116,
     119,   135,   144,   174,   226,   465,   466,   472,   412,    55,
     152,   401,   388,    20,   172,   347,   441,   346,   347,   345,
     448,   441,   448,   441,   356,   351,   351,   106,   218,   346,
     351,   351,   351,   117,   141,   384,   384,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   478,   478,
     351,   351,   351,     4,   313,   313,   313,   313,   313,   313,
     351,   351,   351,   351,   345,   345,   345,   313,     5,   313,
       5,   313,   345,   345,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   356,   387,   359,   361,    42,
     351,   355,   353,   354,   387,   122,   389,   409,     3,   420,
     121,   421,   421,   421,   351,     3,     3,   398,   411,   351,
     170,   230,   418,   419,   411,   345,   144,   144,   345,   473,
     473,   478,    18,    36,    40,    43,    45,    48,    63,    70,
      71,    95,   112,   144,   166,   174,   226,   439,   473,     3,
       3,   346,   346,   346,   347,   224,   243,    74,    75,   346,
     347,   346,   346,   346,    70,   351,    54,    58,    96,    99,
     114,   132,   140,   214,   216,   234,   489,   345,   345,   345,
     345,   345,   346,   347,   232,   430,     3,   230,   345,    52,
     490,   121,   232,   430,   230,   345,   170,     3,   345,   480,
       3,   345,   144,   135,   144,   345,   345,   144,   345,   346,
     347,     3,   387,     3,     5,   399,   400,   351,   185,   504,
      95,   351,   144,     3,     3,    95,   351,   450,   347,   441,
     441,   106,   351,   121,   346,   346,   347,   346,   351,   351,
     346,   346,   346,   346,   346,   347,   347,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   347,   346,   345,
     345,   345,   345,   345,   345,   346,   347,   347,   346,   346,
     363,   364,   365,   345,   346,   347,   345,   346,   347,   345,
     381,   382,   346,   347,   347,   347,   346,   346,   347,   347,
     346,   347,   346,   347,   346,   347,   346,   346,   356,   387,
     351,   387,   387,   387,   346,    55,   128,   393,   388,   143,
     345,   345,   345,    20,    20,   344,   401,   351,   345,   419,
     351,   345,   345,     3,   471,   439,   439,   473,   166,     3,
     345,   345,   345,    44,     3,   345,     4,     4,     5,     6,
       7,    64,   296,   297,   298,   345,   144,   144,   439,   186,
      43,    52,     5,   206,     4,   477,     4,   477,   477,   345,
     346,    43,    52,   430,     3,     3,     3,     3,     3,   345,
     346,   345,   232,   430,   490,     3,     4,     5,     6,     7,
       8,    10,    12,    16,    17,    18,    20,    24,    25,    26,
      27,    28,    37,    42,    43,    46,    51,    52,    53,    54,
      55,    58,    60,    61,    62,    65,    66,    68,    69,    70,
      74,    79,    83,    88,    89,    90,    95,    96,    98,    99,
     100,   101,   104,   106,   107,   108,   109,   111,   113,   114,
     116,   117,   118,   120,   121,   122,   123,   128,   130,   132,
     133,   135,   136,   137,   138,   139,   140,   142,   143,   144,
     145,   146,   150,   152,   154,   163,   165,   166,   167,   168,
     169,   170,   171,   174,   175,   180,   182,   183,   184,   186,
     188,   190,   191,   192,   193,   205,   206,   207,   214,   216,
     217,   218,   223,   225,   226,   227,   230,   234,   235,   237,
     238,   239,   240,   244,   285,   286,   287,   288,   289,   343,
     344,   345,   346,   347,   348,   491,   100,   345,   346,   232,
     430,     3,   230,   345,   465,    70,   116,   174,   226,   351,
     345,   345,   345,     3,   404,   404,   345,   471,   461,   480,
     466,   478,    41,    94,   344,   391,   391,   347,   154,   347,
       3,    26,   505,   223,    20,   346,   347,   449,   504,   351,
     351,   346,    86,    87,    91,    93,   124,   125,   127,   241,
     242,   351,   351,   351,   367,   368,   366,   369,   370,   371,
     351,   351,   314,   394,   394,   394,   372,   313,     4,     5,
     376,   313,     4,     5,   380,   394,   394,   351,   351,   351,
     351,   351,   351,   351,   351,   346,   346,   346,   346,   346,
     351,   390,   351,   398,   389,     3,   422,   422,   422,   351,
     351,     3,   504,   404,   346,     3,   468,     3,   467,   346,
     347,   439,     5,   351,     5,    43,    70,   174,   226,   351,
     345,   345,   345,   351,   489,    52,   490,   346,     4,   351,
      52,   490,   346,   346,   346,   346,   347,   430,   430,   345,
     346,   106,   490,   490,   490,   490,   490,   490,   190,   430,
     345,   346,   345,   232,   430,   346,   345,   144,   144,   345,
     346,   468,   404,   404,   346,   347,   346,   467,   346,    40,
     170,   196,   473,     3,   400,   351,   351,   347,   442,    95,
     351,    95,   351,   345,   346,   346,   346,   346,   346,   394,
     394,   394,   394,   394,   394,   346,   347,   346,    55,   171,
     396,   396,   396,   394,   345,   346,   346,   394,   345,   346,
     346,   394,   396,   396,   346,   346,   346,   346,   346,   347,
     346,   346,   391,   240,   347,   392,   401,   393,   346,   347,
     346,   346,    20,   346,    18,   346,   347,   346,   347,     3,
     346,   347,   346,   346,   347,   345,   345,   144,   346,   346,
     346,   346,   346,    43,    52,   490,   106,   346,   490,   106,
       3,   346,   346,   430,   106,   106,   106,   106,   106,   106,
      52,   346,   430,   430,   345,   346,   461,   480,   351,   345,
     345,   471,   346,   346,   346,     3,   346,     5,    20,     3,
      55,   391,     3,     3,   443,   450,   396,   396,   396,   396,
     396,   396,   351,     3,   395,    55,   346,   346,   346,   396,
     373,   313,   313,   396,   377,   313,   313,   396,   346,   346,
     351,   187,   351,   121,   402,   398,     3,   351,   233,   180,
       3,     3,     5,    49,    50,     5,   351,   351,    52,   490,
     106,   106,   346,   346,    69,   113,   136,   146,   239,   490,
     346,   346,   430,   346,   468,   467,   346,   180,     5,    89,
     213,   177,   232,    20,   347,   346,   346,   346,   346,   346,
     346,   346,   346,   347,     3,   397,   346,   394,   345,   345,
     346,   394,   345,   345,   346,   346,   391,   198,   223,   139,
     403,   401,     3,   346,   346,   346,   346,   490,   106,   106,
     346,   346,   346,     3,     3,     3,   345,   345,   351,     3,
       3,   391,   347,   396,   374,   375,   396,   378,   379,   199,
     199,   404,   345,    49,    50,   106,   180,   344,   345,     3,
       3,    20,     3,   346,   394,   394,   346,   394,   394,   153,
     153,     3,   469,     3,     3,   469,   346,   346,   351,   391,
     396,   396,   396,   396,   346,   347,   344,   345,   345,   346,
     345,   197,   346,   346,   346,   346,   470,     3,     3,   469,
     469,   470,   196,   462,   463,     5,    18,    80,   156,   170,
     345,   346,   346,    18,     3,   346,   347,    80,   233,   131,
     118,   173,   203,    89,   223,   469,   470,   470,   235,   463,
      81,   129,    66,   165,   183,   206,    66,   165,   183,   206,
     346,   147,    95,   166,    95,   166,   470,   215,     4,   157,
     170,   170,   164,   164,     5,     5
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
#line 420 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 426 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 427 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 429 "parser/evoparser.y"
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
#line 447 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 455 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 463 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 469 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 476 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 477 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 478 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 479 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 480 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 481 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 482 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 483 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 484 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 485 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 486 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 487 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 488 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 489 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 490 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 491 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 492 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 493 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 30:
#line 494 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 31:
#line 496 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 32:
#line 501 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 502 "parser/evoparser.y"
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
#line 510 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 511 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 36:
#line 512 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 513 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 514 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 515 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 518 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 41:
#line 519 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 42:
#line 520 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 43:
#line 521 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 44:
#line 522 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 45:
#line 525 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 46:
#line 526 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 47:
#line 529 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 48:
#line 530 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 49:
#line 533 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 51:
#line 537 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 537 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 538 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 538 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 539 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 540 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 547 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 548 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 555 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 556 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 61:
#line 566 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 62:
#line 570 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 63:
#line 571 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 572 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 573 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 574 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 575 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 576 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 69:
#line 577 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 70:
#line 581 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 71:
#line 582 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 72:
#line 583 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 73:
#line 584 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 74:
#line 585 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 75:
#line 586 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 76:
#line 588 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 77:
#line 589 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 78:
#line 590 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 79:
#line 591 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 80:
#line 592 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 593 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 82:
#line 594 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 595 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 84:
#line 596 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 597 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 86:
#line 598 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 599 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 88:
#line 601 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 602 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 603 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 91:
#line 604 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 605 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 93:
#line 606 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 607 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 95:
#line 608 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 609 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 610 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 98:
#line 611 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 99:
#line 612 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 100:
#line 613 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 101:
#line 614 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 103:
#line 616 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 618 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 105:
#line 619 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 106:
#line 620 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 107:
#line 621 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 108:
#line 622 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 109:
#line 623 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 110:
#line 626 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 111:
#line 627 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 112:
#line 628 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 113:
#line 629 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 114:
#line 630 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 115:
#line 631 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 116:
#line 632 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 117:
#line 633 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 634 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 119:
#line 635 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 636 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 637 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 122:
#line 638 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 639 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 124:
#line 640 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 125:
#line 641 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 126:
#line 642 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 127:
#line 643 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 128:
#line 644 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 129:
#line 645 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 130:
#line 646 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 131:
#line 647 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 132:
#line 648 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 133:
#line 649 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 134:
#line 650 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 135:
#line 651 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 136:
#line 652 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 137:
#line 653 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 138:
#line 654 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 139:
#line 655 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 140:
#line 656 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 141:
#line 657 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 142:
#line 658 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 143:
#line 659 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 144:
#line 661 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 145:
#line 662 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 146:
#line 663 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 147:
#line 664 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 148:
#line 665 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 149:
#line 666 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 150:
#line 667 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 151:
#line 668 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 152:
#line 670 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 153:
#line 671 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 154:
#line 672 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 155:
#line 673 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 156:
#line 674 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 157:
#line 675 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 158:
#line 676 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 159:
#line 677 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 160:
#line 678 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 161:
#line 679 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 162:
#line 680 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 163:
#line 681 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 164:
#line 682 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 165:
#line 683 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 166:
#line 684 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 167:
#line 685 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 168:
#line 686 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 169:
#line 687 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 170:
#line 688 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 171:
#line 689 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 172:
#line 690 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 691 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 174:
#line 693 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 175:
#line 694 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 176:
#line 695 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 177:
#line 696 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 178:
#line 697 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 179:
#line 699 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 180:
#line 700 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 181:
#line 702 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 182:
#line 703 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 183:
#line 704 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 184:
#line 706 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 185:
#line 707 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 186:
#line 708 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 187:
#line 709 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 188:
#line 716 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 189:
#line 723 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 190:
#line 730 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 191:
#line 734 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 192:
#line 738 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 742 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 746 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 195:
#line 750 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 196:
#line 756 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 197:
#line 757 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 198:
#line 758 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 199:
#line 762 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 200:
#line 768 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 201:
#line 774 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 202:
#line 775 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 203:
#line 776 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 204:
#line 777 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 778 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 779 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 207:
#line 780 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 208:
#line 781 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 209:
#line 782 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 786 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 211:
#line 788 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 212:
#line 790 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 213:
#line 792 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 214:
#line 796 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 215:
#line 804 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 216:
#line 814 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 217:
#line 815 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 218:
#line 818 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 219:
#line 819 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 220:
#line 823 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 221:
#line 831 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 222:
#line 839 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 850 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 224:
#line 859 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 225:
#line 864 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 226:
#line 877 "parser/evoparser.y"
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

  case 228:
#line 890 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 230:
#line 892 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 231:
#line 895 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 232:
#line 902 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 233:
#line 910 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 234:
#line 911 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 235:
#line 912 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 236:
#line 915 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 916 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 239:
#line 920 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 242:
#line 929 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 243:
#line 931 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 246:
#line 939 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 247:
#line 941 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 252:
#line 953 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 253:
#line 959 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 254:
#line 966 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 255:
#line 974 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 256:
#line 975 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 257:
#line 976 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 258:
#line 977 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 259:
#line 980 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 260:
#line 981 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 261:
#line 982 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 262:
#line 983 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 263:
#line 984 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 265:
#line 988 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 266:
#line 991 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 267:
#line 992 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 268:
#line 995 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 996 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 270:
#line 997 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 271:
#line 998 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 272:
#line 999 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 273:
#line 1000 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 274:
#line 1001 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 275:
#line 1002 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 276:
#line 1003 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 277:
#line 1006 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 278:
#line 1007 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 279:
#line 1009 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 280:
#line 1017 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 281:
#line 1022 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 282:
#line 1023 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 283:
#line 1024 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 284:
#line 1027 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1028 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1037 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 289:
#line 1043 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 290:
#line 1044 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 291:
#line 1045 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 294:
#line 1054 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 295:
#line 1056 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 296:
#line 1058 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 297:
#line 1060 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 298:
#line 1062 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 299:
#line 1065 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 300:
#line 1066 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1067 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 302:
#line 1070 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1071 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 304:
#line 1074 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 305:
#line 1075 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 306:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 307:
#line 1079 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 308:
#line 1080 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 311:
#line 1087 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 312:
#line 1088 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 313:
#line 1093 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 314:
#line 1095 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 315:
#line 1097 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 317:
#line 1101 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 318:
#line 1102 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 319:
#line 1105 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1106 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 321:
#line 1109 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 322:
#line 1114 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 323:
#line 1124 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 324:
#line 1131 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 325:
#line 1132 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 326:
#line 1133 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 327:
#line 1134 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 328:
#line 1139 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 329:
#line 1143 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 330:
#line 1145 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 333:
#line 1151 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 334:
#line 1156 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 335:
#line 1163 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 336:
#line 1170 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 337:
#line 1180 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 338:
#line 1187 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 339:
#line 1194 "parser/evoparser.y"
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

  case 340:
#line 1204 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 341:
#line 1212 "parser/evoparser.y"
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

  case 342:
#line 1222 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 343:
#line 1230 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 344:
#line 1239 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 345:
#line 1248 "parser/evoparser.y"
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

  case 346:
#line 1258 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 347:
#line 1266 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 348:
#line 1275 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 349:
#line 1284 "parser/evoparser.y"
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

  case 350:
#line 1294 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 351:
#line 1303 "parser/evoparser.y"
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

  case 352:
#line 1315 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 353:
#line 1320 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 354:
#line 1325 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 355:
#line 1331 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 356:
#line 1338 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 357:
#line 1345 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 358:
#line 1352 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 359:
#line 1362 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 360:
#line 1369 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 361:
#line 1378 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 362:
#line 1385 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 363:
#line 1391 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 364:
#line 1399 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 365:
#line 1405 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 367:
#line 1413 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 368:
#line 1414 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 369:
#line 1415 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 370:
#line 1416 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 371:
#line 1421 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 372:
#line 1428 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 373:
#line 1437 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 374:
#line 1444 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 375:
#line 1450 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 376:
#line 1460 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 377:
#line 1464 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 378:
#line 1470 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 379:
#line 1476 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 380:
#line 1483 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 381:
#line 1489 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 382:
#line 1496 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 383:
#line 1502 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 384:
#line 1508 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 385:
#line 1514 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 386:
#line 1520 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1526 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 388:
#line 1532 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 389:
#line 1538 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 390:
#line 1544 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 391:
#line 1550 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 392:
#line 1556 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 393:
#line 1562 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 394:
#line 1568 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 395:
#line 1574 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 396:
#line 1580 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 397:
#line 1587 "parser/evoparser.y"
    { ;}
    break;

  case 398:
#line 1588 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 399:
#line 1589 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 400:
#line 1593 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 401:
#line 1601 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 402:
#line 1607 "parser/evoparser.y"
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

  case 404:
#line 1620 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 405:
#line 1620 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 406:
#line 1624 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 407:
#line 1632 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 408:
#line 1641 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 409:
#line 1642 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 410:
#line 1643 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 411:
#line 1644 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 412:
#line 1645 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 416:
#line 1652 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 417:
#line 1656 "parser/evoparser.y"
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

  case 418:
#line 1666 "parser/evoparser.y"
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

  case 419:
#line 1678 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 420:
#line 1679 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 421:
#line 1679 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 422:
#line 1682 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 423:
#line 1683 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 424:
#line 1684 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 425:
#line 1685 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 426:
#line 1689 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 427:
#line 1692 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 428:
#line 1693 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 429:
#line 1694 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 430:
#line 1695 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 431:
#line 1701 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 432:
#line 1707 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 433:
#line 1712 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 434:
#line 1717 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 435:
#line 1722 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 436:
#line 1731 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 437:
#line 1738 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 438:
#line 1739 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 439:
#line 1740 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 440:
#line 1745 "parser/evoparser.y"
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

  case 441:
#line 1756 "parser/evoparser.y"
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

  case 442:
#line 1768 "parser/evoparser.y"
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

  case 443:
#line 1779 "parser/evoparser.y"
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

  case 444:
#line 1794 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 445:
#line 1798 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 446:
#line 1802 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 447:
#line 1803 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 448:
#line 1808 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 449:
#line 1810 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 450:
#line 1812 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 451:
#line 1814 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 452:
#line 1817 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 453:
#line 1818 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 454:
#line 1824 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 455:
#line 1829 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 456:
#line 1831 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 457:
#line 1833 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 458:
#line 1835 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 459:
#line 1837 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 460:
#line 1841 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 461:
#line 1845 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 462:
#line 1846 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 463:
#line 1851 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 464:
#line 1861 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 465:
#line 1870 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 467:
#line 1874 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 468:
#line 1875 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 469:
#line 1876 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 470:
#line 1877 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 471:
#line 1879 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 472:
#line 1881 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 475:
#line 1889 "parser/evoparser.y"
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

  case 476:
#line 1904 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 477:
#line 1912 "parser/evoparser.y"
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

  case 478:
#line 1926 "parser/evoparser.y"
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

  case 479:
#line 1940 "parser/evoparser.y"
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

  case 480:
#line 1954 "parser/evoparser.y"
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

  case 481:
#line 1966 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 482:
#line 1967 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 483:
#line 1968 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 484:
#line 1971 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 485:
#line 1972 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 486:
#line 1975 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 487:
#line 1976 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 488:
#line 1977 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 489:
#line 1978 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 490:
#line 1979 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 491:
#line 1980 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 492:
#line 1981 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 493:
#line 1982 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 494:
#line 1984 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 495:
#line 1986 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 496:
#line 1988 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 497:
#line 1990 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 498:
#line 1992 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 499:
#line 1994 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 500:
#line 1997 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 501:
#line 1998 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 502:
#line 2001 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 503:
#line 2002 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 504:
#line 2005 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 505:
#line 2006 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 507:
#line 2010 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 508:
#line 2011 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 509:
#line 2012 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 510:
#line 2013 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 511:
#line 2014 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 512:
#line 2015 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 513:
#line 2016 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 514:
#line 2017 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 515:
#line 2018 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 516:
#line 2019 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 517:
#line 2020 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 518:
#line 2021 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 519:
#line 2022 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 520:
#line 2023 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 521:
#line 2024 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 522:
#line 2025 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 523:
#line 2026 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 524:
#line 2029 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 525:
#line 2030 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 526:
#line 2033 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 527:
#line 2035 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 528:
#line 2043 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 529:
#line 2044 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 531:
#line 2046 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 532:
#line 2047 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 533:
#line 2048 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 534:
#line 2049 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 535:
#line 2050 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 536:
#line 2051 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 537:
#line 2052 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 538:
#line 2053 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 539:
#line 2054 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 540:
#line 2061 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 541:
#line 2062 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 542:
#line 2063 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 543:
#line 2064 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 544:
#line 2065 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 545:
#line 2066 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 546:
#line 2067 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 547:
#line 2068 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 548:
#line 2069 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 549:
#line 2070 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 550:
#line 2071 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 551:
#line 2072 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 552:
#line 2073 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 553:
#line 2074 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 554:
#line 2075 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 555:
#line 2076 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 556:
#line 2077 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 557:
#line 2078 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 558:
#line 2079 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 559:
#line 2080 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 560:
#line 2081 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 561:
#line 2084 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 562:
#line 2085 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 563:
#line 2086 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 564:
#line 2089 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 565:
#line 2090 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 566:
#line 2093 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 567:
#line 2094 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 568:
#line 2095 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 570:
#line 2099 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 571:
#line 2100 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 572:
#line 2104 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 573:
#line 2105 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 574:
#line 2106 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 575:
#line 2107 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 576:
#line 2108 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 577:
#line 2109 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 578:
#line 2110 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 579:
#line 2111 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 580:
#line 2112 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 581:
#line 2113 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 582:
#line 2114 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 583:
#line 2115 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 584:
#line 2116 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 585:
#line 2117 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 586:
#line 2118 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 587:
#line 2119 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 588:
#line 2120 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 589:
#line 2121 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 590:
#line 2122 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 591:
#line 2123 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 592:
#line 2124 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 593:
#line 2125 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 594:
#line 2126 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 595:
#line 2127 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 596:
#line 2128 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 597:
#line 2129 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 598:
#line 2130 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 599:
#line 2131 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 600:
#line 2132 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 601:
#line 2133 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 602:
#line 2134 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 603:
#line 2135 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 604:
#line 2136 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 605:
#line 2139 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 606:
#line 2140 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 607:
#line 2144 "parser/evoparser.y"
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

  case 608:
#line 2156 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 609:
#line 2157 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 610:
#line 2158 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 611:
#line 2162 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 612:
#line 2165 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 613:
#line 2166 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 617:
#line 2170 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 618:
#line 2171 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 619:
#line 2179 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 620:
#line 2184 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 621:
#line 2190 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 622:
#line 2196 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 623:
#line 2203 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 624:
#line 2210 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 625:
#line 2216 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 626:
#line 2222 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 627:
#line 2229 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 632:
#line 2245 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 633:
#line 2246 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 634:
#line 2247 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 635:
#line 2248 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 636:
#line 2251 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 637:
#line 2252 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 638:
#line 2253 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 639:
#line 2254 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 640:
#line 2255 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 641:
#line 2256 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 642:
#line 2257 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 643:
#line 2258 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 644:
#line 2259 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 645:
#line 2260 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 654:
#line 2277 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 655:
#line 2278 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 776:
#line 2296 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 777:
#line 2303 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 778:
#line 2308 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 779:
#line 2314 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 780:
#line 2320 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 781:
#line 2326 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 782:
#line 2337 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 783:
#line 2342 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 784:
#line 2348 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 787:
#line 2359 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 788:
#line 2360 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 789:
#line 2361 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 790:
#line 2362 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 791:
#line 2363 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 792:
#line 2364 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 793:
#line 2365 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 794:
#line 2372 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 795:
#line 2377 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 796:
#line 2384 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 797:
#line 2385 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 798:
#line 2388 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 799:
#line 2389 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 800:
#line 2390 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 801:
#line 2393 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 802:
#line 2398 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 803:
#line 2404 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 804:
#line 2413 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 805:
#line 2421 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 806:
#line 2431 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 807:
#line 2436 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 810:
#line 2449 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 811:
#line 2450 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 812:
#line 2451 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 813:
#line 2452 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 814:
#line 2453 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 815:
#line 2454 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 816:
#line 2455 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 817:
#line 2456 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 818:
#line 2459 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 819:
#line 2464 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 820:
#line 2470 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 821:
#line 2480 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 822:
#line 2487 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 823:
#line 2494 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 824:
#line 2502 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 826:
#line 2512 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 828:
#line 2516 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 829:
#line 2517 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9749 "parser/evoparser.tab.c"
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


#line 2520 "parser/evoparser.y"

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
