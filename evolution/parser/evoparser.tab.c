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
     DATABASE = 326,
     DECLARE = 327,
     DEFERRABLE = 328,
     DEFERRED = 329,
     DELIMITER = 330,
     DISABLE = 331,
     DO = 332,
     DOMAIN = 333,
     DELAYED = 334,
     DAY_HOUR = 335,
     DAY_MICROSECOND = 336,
     DISTINCT = 337,
     DELETE = 338,
     DROP = 339,
     DAY_MINUTE = 340,
     DISTINCTROW = 341,
     DAY_SECOND = 342,
     DESC = 343,
     DEFAULT = 344,
     DOUBLE = 345,
     DATETIME = 346,
     DECIMAL = 347,
     DATE = 348,
     EACH = 349,
     ELSEIF = 350,
     ENABLE = 351,
     ESCAPED = 352,
     EXCEPT = 353,
     ENUM = 354,
     END = 355,
     ELSE = 356,
     EXECUTE = 357,
     EXIT = 358,
     EXPLAIN = 359,
     FETCH = 360,
     FIRST = 361,
     FOREACH = 362,
     FLOAT = 363,
     FORCE = 364,
     FOREIGN = 365,
     FORMAT = 366,
     FROM = 367,
     FULL = 368,
     FULLTEXT = 369,
     FUNCTION = 370,
     FOR = 371,
     GROUP = 372,
     HANDLER = 373,
     HEADER = 374,
     HOUR_MINUTE = 375,
     HOUR_MICROSECOND = 376,
     HIGH_PRIORITY = 377,
     HOUR_SECOND = 378,
     HAVING = 379,
     IMMEDIATE = 380,
     INOUT = 381,
     INITIALLY = 382,
     INTEGER = 383,
     INNER = 384,
     IGNORE = 385,
     INDEX = 386,
     IF = 387,
     INSERT = 388,
     INTERSECT = 389,
     INTO = 390,
     INT = 391,
     INTERVAL = 392,
     ITERATE = 393,
     JOIN = 394,
     KEY = 395,
     LEAVE = 396,
     LOOP = 397,
     LESS = 398,
     LONGTEXT = 399,
     LOW_PRIORITY = 400,
     LEFT = 401,
     LEADING = 402,
     LIMIT = 403,
     LOCKED = 404,
     OFFSET = 405,
     LONGBLOB = 406,
     MATCH = 407,
     MAXVALUE = 408,
     MEDIUMTEXT = 409,
     MINUS = 410,
     MODIFY = 411,
     MEDIUMBLOB = 412,
     MEDIUMINT = 413,
     NATURAL = 414,
     NODE = 415,
     NO_ACTION = 416,
     NULLX = 417,
     OPEN = 418,
     OUT = 419,
     OUTER = 420,
     ON = 421,
     ORDER = 422,
     ONDUPLICATE = 423,
     PARTIAL = 424,
     PRIMARY = 425,
     PROCEDURE = 426,
     QUICK = 427,
     RANGE = 428,
     REAL = 429,
     RECLAIM = 430,
     REFERENCES = 431,
     RENAME = 432,
     RESIGNAL = 433,
     RESTRICT = 434,
     RETURN = 435,
     RETURNING = 436,
     RETURNS = 437,
     ROLLUP = 438,
     RIGHT = 439,
     REPLACE = 440,
     ROW = 441,
     SIGNAL = 442,
     TRIGGER = 443,
     UNTIL = 444,
     SQL_SMALL_RESULT = 445,
     SCHEMA = 446,
     SHARD = 447,
     SHARDS = 448,
     SHARE = 449,
     SKIP = 450,
     SOME = 451,
     SQL_CALC_FOUND_ROWS = 452,
     SQL_BIG_RESULT = 453,
     SIMPLE = 454,
     STDIN = 455,
     STDOUT = 456,
     STRAIGHT_JOIN = 457,
     SMALLINT = 458,
     SET = 459,
     SELECT = 460,
     QUOTE = 461,
     TINYTEXT = 462,
     TINYINT = 463,
     TO = 464,
     TEMPORARY = 465,
     GLOBAL = 466,
     PRESERVE = 467,
     TEXT = 468,
     THAN = 469,
     TIMESTAMP = 470,
     TABLE = 471,
     THEN = 472,
     TRAILING = 473,
     TRUNCATE = 474,
     TINYBLOB = 475,
     TIME = 476,
     UPDATE = 477,
     UNSIGNED = 478,
     UNION = 479,
     UNIQUE = 480,
     UUID = 481,
     JSON = 482,
     VIEW = 483,
     USING = 484,
     USE = 485,
     HASH = 486,
     VALIDATE = 487,
     VARCHAR = 488,
     VALUES = 489,
     VARBINARY = 490,
     WHERE = 491,
     WHEN = 492,
     WHILE = 493,
     WITH = 494,
     YEAR = 495,
     YEAR_MONTH = 496,
     ZEROFILL = 497,
     EXISTS = 498,
     FSUBSTRING = 499,
     FTRIM = 500,
     FDATE_ADD = 501,
     FDATE_SUB = 502,
     FDATEDIFF = 503,
     FYEAR = 504,
     FMONTH = 505,
     FDAY = 506,
     FHOUR = 507,
     FMINUTE = 508,
     FSECOND = 509,
     FNOW = 510,
     FLEFT = 511,
     FRIGHT = 512,
     FLPAD = 513,
     FRPAD = 514,
     FREVERSE = 515,
     FREPEAT = 516,
     FINSTR = 517,
     FLOCATE = 518,
     FABS = 519,
     FCEIL = 520,
     FFLOOR = 521,
     FROUND = 522,
     FPOWER = 523,
     FSQRT = 524,
     FMOD = 525,
     FRAND = 526,
     FLOG = 527,
     FLOG10 = 528,
     FSIGN = 529,
     FPI = 530,
     FCAST = 531,
     FCONVERT = 532,
     FNULLIF = 533,
     FIFNULL = 534,
     FIF = 535,
     UNKNOWN = 536,
     FGROUP_CONCAT = 537,
     SEPARATOR = 538,
     FCOUNT = 539,
     FSUM = 540,
     FAVG = 541,
     FMIN = 542,
     FMAX = 543,
     FUPPER = 544,
     FLOWER = 545,
     FLENGTH = 546,
     FCONCAT = 547,
     FREPLACE = 548,
     FCOALESCE = 549,
     FGEN_RANDOM_UUID = 550,
     FGEN_RANDOM_UUID_V7 = 551,
     FSNOWFLAKE_ID = 552,
     FLAST_INSERT_ID = 553,
     FSCOPE_IDENTITY = 554,
     FAT_IDENTITY = 555,
     FAT_LAST_INSERT_ID = 556,
     FEVO_SLEEP = 557,
     FEVO_JITTER = 558,
     FROW_NUMBER = 559,
     FRANK = 560,
     FDENSE_RANK = 561,
     FLEAD = 562,
     FLAG = 563,
     FNTILE = 564,
     FPERCENT_RANK = 565,
     FCUME_DIST = 566,
     OVER = 567,
     PARTITION = 568,
     FJSON_EXTRACT = 569,
     FJSON_UNQUOTE = 570,
     FJSON_TYPE = 571,
     FJSON_LENGTH = 572,
     FJSON_DEPTH = 573,
     FJSON_VALID = 574,
     FJSON_KEYS = 575,
     FJSON_PRETTY = 576,
     FJSON_QUOTE = 577,
     FJSON_SET = 578,
     FJSON_INSERT = 579,
     FJSON_REPLACE = 580,
     FJSON_REMOVE = 581,
     FJSON_CONTAINS = 582,
     FJSON_CONTAINS_PATH = 583,
     FJSON_SEARCH = 584,
     FJSON_OBJECT = 585,
     FJSON_ARRAY = 586,
     FJSON_ARRAYAGG = 587,
     SEQUENCE = 588,
     FNEXTVAL = 589,
     FCURRVAL = 590,
     FSETVAL = 591,
     FLASTVAL = 592,
     START = 593,
     INCREMENT = 594,
     MINVALUE = 595,
     CYCLE = 596
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
#define DATABASE 326
#define DECLARE 327
#define DEFERRABLE 328
#define DEFERRED 329
#define DELIMITER 330
#define DISABLE 331
#define DO 332
#define DOMAIN 333
#define DELAYED 334
#define DAY_HOUR 335
#define DAY_MICROSECOND 336
#define DISTINCT 337
#define DELETE 338
#define DROP 339
#define DAY_MINUTE 340
#define DISTINCTROW 341
#define DAY_SECOND 342
#define DESC 343
#define DEFAULT 344
#define DOUBLE 345
#define DATETIME 346
#define DECIMAL 347
#define DATE 348
#define EACH 349
#define ELSEIF 350
#define ENABLE 351
#define ESCAPED 352
#define EXCEPT 353
#define ENUM 354
#define END 355
#define ELSE 356
#define EXECUTE 357
#define EXIT 358
#define EXPLAIN 359
#define FETCH 360
#define FIRST 361
#define FOREACH 362
#define FLOAT 363
#define FORCE 364
#define FOREIGN 365
#define FORMAT 366
#define FROM 367
#define FULL 368
#define FULLTEXT 369
#define FUNCTION 370
#define FOR 371
#define GROUP 372
#define HANDLER 373
#define HEADER 374
#define HOUR_MINUTE 375
#define HOUR_MICROSECOND 376
#define HIGH_PRIORITY 377
#define HOUR_SECOND 378
#define HAVING 379
#define IMMEDIATE 380
#define INOUT 381
#define INITIALLY 382
#define INTEGER 383
#define INNER 384
#define IGNORE 385
#define INDEX 386
#define IF 387
#define INSERT 388
#define INTERSECT 389
#define INTO 390
#define INT 391
#define INTERVAL 392
#define ITERATE 393
#define JOIN 394
#define KEY 395
#define LEAVE 396
#define LOOP 397
#define LESS 398
#define LONGTEXT 399
#define LOW_PRIORITY 400
#define LEFT 401
#define LEADING 402
#define LIMIT 403
#define LOCKED 404
#define OFFSET 405
#define LONGBLOB 406
#define MATCH 407
#define MAXVALUE 408
#define MEDIUMTEXT 409
#define MINUS 410
#define MODIFY 411
#define MEDIUMBLOB 412
#define MEDIUMINT 413
#define NATURAL 414
#define NODE 415
#define NO_ACTION 416
#define NULLX 417
#define OPEN 418
#define OUT 419
#define OUTER 420
#define ON 421
#define ORDER 422
#define ONDUPLICATE 423
#define PARTIAL 424
#define PRIMARY 425
#define PROCEDURE 426
#define QUICK 427
#define RANGE 428
#define REAL 429
#define RECLAIM 430
#define REFERENCES 431
#define RENAME 432
#define RESIGNAL 433
#define RESTRICT 434
#define RETURN 435
#define RETURNING 436
#define RETURNS 437
#define ROLLUP 438
#define RIGHT 439
#define REPLACE 440
#define ROW 441
#define SIGNAL 442
#define TRIGGER 443
#define UNTIL 444
#define SQL_SMALL_RESULT 445
#define SCHEMA 446
#define SHARD 447
#define SHARDS 448
#define SHARE 449
#define SKIP 450
#define SOME 451
#define SQL_CALC_FOUND_ROWS 452
#define SQL_BIG_RESULT 453
#define SIMPLE 454
#define STDIN 455
#define STDOUT 456
#define STRAIGHT_JOIN 457
#define SMALLINT 458
#define SET 459
#define SELECT 460
#define QUOTE 461
#define TINYTEXT 462
#define TINYINT 463
#define TO 464
#define TEMPORARY 465
#define GLOBAL 466
#define PRESERVE 467
#define TEXT 468
#define THAN 469
#define TIMESTAMP 470
#define TABLE 471
#define THEN 472
#define TRAILING 473
#define TRUNCATE 474
#define TINYBLOB 475
#define TIME 476
#define UPDATE 477
#define UNSIGNED 478
#define UNION 479
#define UNIQUE 480
#define UUID 481
#define JSON 482
#define VIEW 483
#define USING 484
#define USE 485
#define HASH 486
#define VALIDATE 487
#define VARCHAR 488
#define VALUES 489
#define VARBINARY 490
#define WHERE 491
#define WHEN 492
#define WHILE 493
#define WITH 494
#define YEAR 495
#define YEAR_MONTH 496
#define ZEROFILL 497
#define EXISTS 498
#define FSUBSTRING 499
#define FTRIM 500
#define FDATE_ADD 501
#define FDATE_SUB 502
#define FDATEDIFF 503
#define FYEAR 504
#define FMONTH 505
#define FDAY 506
#define FHOUR 507
#define FMINUTE 508
#define FSECOND 509
#define FNOW 510
#define FLEFT 511
#define FRIGHT 512
#define FLPAD 513
#define FRPAD 514
#define FREVERSE 515
#define FREPEAT 516
#define FINSTR 517
#define FLOCATE 518
#define FABS 519
#define FCEIL 520
#define FFLOOR 521
#define FROUND 522
#define FPOWER 523
#define FSQRT 524
#define FMOD 525
#define FRAND 526
#define FLOG 527
#define FLOG10 528
#define FSIGN 529
#define FPI 530
#define FCAST 531
#define FCONVERT 532
#define FNULLIF 533
#define FIFNULL 534
#define FIF 535
#define UNKNOWN 536
#define FGROUP_CONCAT 537
#define SEPARATOR 538
#define FCOUNT 539
#define FSUM 540
#define FAVG 541
#define FMIN 542
#define FMAX 543
#define FUPPER 544
#define FLOWER 545
#define FLENGTH 546
#define FCONCAT 547
#define FREPLACE 548
#define FCOALESCE 549
#define FGEN_RANDOM_UUID 550
#define FGEN_RANDOM_UUID_V7 551
#define FSNOWFLAKE_ID 552
#define FLAST_INSERT_ID 553
#define FSCOPE_IDENTITY 554
#define FAT_IDENTITY 555
#define FAT_LAST_INSERT_ID 556
#define FEVO_SLEEP 557
#define FEVO_JITTER 558
#define FROW_NUMBER 559
#define FRANK 560
#define FDENSE_RANK 561
#define FLEAD 562
#define FLAG 563
#define FNTILE 564
#define FPERCENT_RANK 565
#define FCUME_DIST 566
#define OVER 567
#define PARTITION 568
#define FJSON_EXTRACT 569
#define FJSON_UNQUOTE 570
#define FJSON_TYPE 571
#define FJSON_LENGTH 572
#define FJSON_DEPTH 573
#define FJSON_VALID 574
#define FJSON_KEYS 575
#define FJSON_PRETTY 576
#define FJSON_QUOTE 577
#define FJSON_SET 578
#define FJSON_INSERT 579
#define FJSON_REPLACE 580
#define FJSON_REMOVE 581
#define FJSON_CONTAINS 582
#define FJSON_CONTAINS_PATH 583
#define FJSON_SEARCH 584
#define FJSON_OBJECT 585
#define FJSON_ARRAY 586
#define FJSON_ARRAYAGG 587
#define SEQUENCE 588
#define FNEXTVAL 589
#define FCURRVAL 590
#define FSETVAL 591
#define FLASTVAL 592
#define START 593
#define INCREMENT 594
#define MINVALUE 595
#define CYCLE 596




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
#line 833 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 846 "parser/evoparser.tab.c"

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
#define YYFINAL  86
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   11187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  357
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  166
/* YYNRULES -- Number of rules.  */
#define YYNRULES  855
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2098

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   596

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     353,   354,    26,    24,   355,    25,   352,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   351,
       2,   356,     2,     2,     2,     2,     2,     2,     2,     2,
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
     344,   345,   346,   347,   348,   349,   350
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
    2126,  2132,  2134,  2143,  2151,  2159,  2161,  2162,  2170,  2171,
    2175,  2177,  2181,  2183,  2185,  2187,  2189,  2191,  2192,  2194,
    2199,  2203,  2205,  2209,  2212,  2215,  2218,  2220,  2223,  2226,
    2229,  2231,  2233,  2243,  2244,  2247,  2250,  2254,  2260,  2266,
    2274,  2280,  2282,  2287,  2292,  2296,  2302,  2306,  2312,  2313,
    2316,  2318,  2324,  2332,  2340,  2350,  2362,  2364,  2367,  2371,
    2373,  2383,  2395,  2396,  2401,  2405,  2411,  2417,  2427,  2438,
    2440,  2444,  2454,  2464,  2474,  2481,  2493,  2502,  2503,  2505,
    2508,  2510,  2514,  2520,  2528,  2533,  2538,  2544,  2550,  2555,
    2562,  2574,  2588,  2602,  2618,  2623,  2630,  2632,  2636,  2638,
    2642,  2644,  2648,  2649,  2654,  2660,  2665,  2671,  2676,  2682,
    2687,  2693,  2698,  2703,  2707,  2711,  2715,  2718,  2722,  2727,
    2732,  2734,  2738,  2739,  2744,  2745,  2749,  2752,  2756,  2760,
    2764,  2768,  2774,  2780,  2786,  2790,  2796,  2799,  2807,  2813,
    2821,  2827,  2830,  2834,  2837,  2841,  2844,  2848,  2854,  2859,
    2865,  2873,  2882,  2891,  2899,  2906,  2913,  2919,  2920,  2924,
    2930,  2931,  2933,  2934,  2937,  2940,  2941,  2946,  2950,  2953,
    2957,  2961,  2965,  2969,  2973,  2977,  2981,  2985,  2989,  2993,
    2995,  2997,  2999,  3001,  3003,  3007,  3013,  3016,  3021,  3023,
    3025,  3027,  3029,  3033,  3037,  3041,  3045,  3051,  3057,  3059,
    3061,  3063,  3065,  3069,  3073,  3074,  3076,  3078,  3080,  3084,
    3088,  3091,  3093,  3097,  3101,  3105,  3107,  3118,  3128,  3141,
    3153,  3166,  3178,  3193,  3207,  3208,  3210,  3212,  3216,  3219,
    3223,  3227,  3231,  3233,  3235,  3237,  3239,  3241,  3243,  3245,
    3247,  3249,  3251,  3252,  3255,  3260,  3266,  3272,  3278,  3284,
    3290,  3292,  3294,  3296,  3298,  3300,  3302,  3304,  3306,  3308,
    3310,  3312,  3314,  3316,  3318,  3320,  3322,  3324,  3326,  3328,
    3330,  3332,  3334,  3336,  3338,  3340,  3342,  3344,  3346,  3348,
    3350,  3352,  3354,  3356,  3358,  3360,  3362,  3364,  3366,  3368,
    3370,  3372,  3374,  3376,  3378,  3380,  3382,  3384,  3386,  3388,
    3390,  3392,  3394,  3396,  3398,  3400,  3402,  3404,  3406,  3408,
    3410,  3412,  3414,  3416,  3418,  3420,  3422,  3424,  3426,  3428,
    3430,  3432,  3434,  3436,  3438,  3440,  3442,  3444,  3446,  3448,
    3450,  3452,  3454,  3456,  3458,  3460,  3462,  3464,  3466,  3468,
    3470,  3472,  3474,  3476,  3478,  3480,  3482,  3484,  3486,  3488,
    3490,  3492,  3494,  3496,  3498,  3500,  3502,  3504,  3506,  3508,
    3510,  3512,  3514,  3516,  3518,  3520,  3522,  3524,  3526,  3528,
    3530,  3532,  3534,  3536,  3538,  3542,  3548,  3552,  3558,  3560,
    3565,  3571,  3573,  3577,  3579,  3581,  3583,  3585,  3587,  3589,
    3591,  3593,  3607,  3609,  3611,  3613,  3615,  3617,  3619,  3623,
    3629,  3634,  3639,  3641,  3647,  3648,  3651,  3655,  3658,  3662,
    3665,  3668,  3671,  3673,  3676,  3678,  3682,  3688,  3693,  3698,
    3705,  3712,  3713,  3716,  3719,  3721
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     358,     0,    -1,   394,   351,    -1,   394,   351,   358,    -1,
       3,    -1,     3,   352,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   171,    -1,   359,    24,
     359,    -1,   359,    25,   359,    -1,   359,    26,   359,    -1,
     359,    27,   359,    -1,   359,    28,   359,    -1,   359,    29,
     359,    -1,    25,   359,    -1,   353,   359,   354,    -1,   359,
      12,   359,    -1,   359,    10,   359,    -1,   359,    11,   359,
      -1,   359,    21,   359,    -1,   359,    22,   359,    -1,   359,
      30,   359,    -1,   359,    23,   359,    -1,   359,    32,   359,
      -1,   359,    31,   359,    -1,    18,   359,    -1,    17,   359,
      -1,   359,    20,   359,    -1,    -1,   359,    20,   353,   360,
     395,   354,    -1,    -1,   359,    20,    39,   353,   361,   395,
     354,    -1,    -1,   359,    20,   205,   353,   362,   395,   354,
      -1,    -1,   359,    20,    37,   353,   363,   395,   354,    -1,
     359,    15,   171,    -1,   359,    15,    18,   171,    -1,   359,
      15,     6,    -1,   359,    15,    18,     6,    -1,     8,     9,
     359,    -1,   359,    19,   359,    42,   359,    -1,   359,    18,
      19,   359,    42,   359,    -1,   359,    -1,   359,   355,   364,
      -1,    -1,   364,    -1,    -1,   359,    16,   353,   366,   364,
     354,    -1,    -1,   359,    18,    16,   353,   367,   364,   354,
      -1,    -1,   359,    16,   353,   368,   395,   354,    -1,    -1,
     359,    18,    16,   353,   369,   395,   354,    -1,    -1,   252,
     353,   370,   395,   354,    -1,     3,   353,   365,   354,    -1,
     293,   353,    26,   354,    -1,   293,   353,   359,   354,    -1,
     294,   353,   359,   354,    -1,   295,   353,   359,   354,    -1,
     296,   353,   359,   354,    -1,   297,   353,   359,   354,    -1,
     291,   353,   359,   354,    -1,   291,   353,   359,   292,     4,
     354,    -1,    -1,   313,   353,   354,   321,   353,   371,   402,
     404,   354,    -1,    -1,   314,   353,   354,   321,   353,   372,
     402,   404,   354,    -1,    -1,   315,   353,   354,   321,   353,
     373,   402,   404,   354,    -1,    -1,   294,   353,   359,   354,
     321,   353,   374,   402,   404,   354,    -1,    -1,   293,   353,
      26,   354,   321,   353,   375,   402,   404,   354,    -1,    -1,
     293,   353,   359,   354,   321,   353,   376,   402,   404,   354,
      -1,    -1,   295,   353,   359,   354,   321,   353,   377,   402,
     404,   354,    -1,    -1,   296,   353,   359,   354,   321,   353,
     378,   402,   404,   354,    -1,    -1,   297,   353,   359,   354,
     321,   353,   379,   402,   404,   354,    -1,    -1,   316,   353,
     359,   354,   321,   353,   380,   402,   404,   354,    -1,    -1,
     316,   353,   359,   355,     5,   354,   321,   353,   381,   402,
     404,   354,    -1,    -1,   316,   353,   359,   355,     5,   355,
       4,   354,   321,   353,   382,   402,   404,   354,    -1,    -1,
     316,   353,   359,   355,     5,   355,     5,   354,   321,   353,
     383,   402,   404,   354,    -1,    -1,   317,   353,   359,   354,
     321,   353,   384,   402,   404,   354,    -1,    -1,   317,   353,
     359,   355,     5,   354,   321,   353,   385,   402,   404,   354,
      -1,    -1,   317,   353,   359,   355,     5,   355,     4,   354,
     321,   353,   386,   402,   404,   354,    -1,    -1,   317,   353,
     359,   355,     5,   355,     5,   354,   321,   353,   387,   402,
     404,   354,    -1,    -1,   318,   353,     5,   354,   321,   353,
     388,   402,   404,   354,    -1,    -1,   319,   353,   354,   321,
     353,   389,   402,   404,   354,    -1,    -1,   320,   353,   354,
     321,   353,   390,   402,   404,   354,    -1,   253,   353,   359,
     355,   359,   355,   359,   354,    -1,   253,   353,   359,   355,
     359,   354,    -1,   253,   353,   359,   121,   359,   354,    -1,
     253,   353,   359,   121,   359,   125,   359,   354,    -1,   254,
     353,   359,   354,    -1,   254,   353,   391,   359,   121,   359,
     354,    -1,   254,   353,   391,   121,   359,   354,    -1,   298,
     353,   359,   354,    -1,   299,   353,   359,   354,    -1,   300,
     353,   359,   354,    -1,   301,   353,   359,   355,   359,   354,
      -1,   302,   353,   359,   355,   359,   355,   359,   354,    -1,
     303,   353,   359,   355,   359,   354,    -1,   265,   353,   359,
     355,   359,   354,    -1,   266,   353,   359,   355,   359,   354,
      -1,   267,   353,   359,   355,   359,   355,   359,   354,    -1,
     268,   353,   359,   355,   359,   355,   359,   354,    -1,   269,
     353,   359,   354,    -1,   270,   353,   359,   355,   359,   354,
      -1,   271,   353,   359,   355,   359,   354,    -1,   272,   353,
     359,   355,   359,   354,    -1,   273,   353,   359,   354,    -1,
     274,   353,   359,   354,    -1,   275,   353,   359,   354,    -1,
     276,   353,   359,   355,   359,   354,    -1,   276,   353,   359,
     354,    -1,   277,   353,   359,   355,   359,   354,    -1,   278,
     353,   359,   354,    -1,   279,   353,   359,   355,   359,   354,
      -1,   280,   353,   354,    -1,   281,   353,   359,   354,    -1,
     282,   353,   359,   354,    -1,   283,   353,   359,   354,    -1,
     284,   353,   354,    -1,   264,   353,   354,    -1,   257,   353,
     359,   355,   359,   354,    -1,   258,   353,   359,   354,    -1,
     259,   353,   359,   354,    -1,   260,   353,   359,   354,    -1,
     261,   353,   359,   354,    -1,   262,   353,   359,   354,    -1,
     263,   353,   359,   354,    -1,   323,   353,   359,   355,   359,
     354,    -1,   324,   353,   359,   354,    -1,   325,   353,   359,
     354,    -1,   326,   353,   359,   354,    -1,   327,   353,   359,
     354,    -1,   328,   353,   359,   354,    -1,   329,   353,   359,
     354,    -1,   330,   353,   359,   354,    -1,   331,   353,   359,
     354,    -1,   332,   353,   359,   355,   359,   355,   359,   354,
      -1,   333,   353,   359,   355,   359,   355,   359,   354,    -1,
     334,   353,   359,   355,   359,   355,   359,   354,    -1,   335,
     353,   359,   355,   359,   354,    -1,   336,   353,   359,   355,
     359,   354,    -1,   337,   353,   359,   355,   359,   355,   359,
     354,    -1,   338,   353,   359,   355,   359,   355,   359,   354,
      -1,   339,   353,   359,   355,   359,   354,    -1,   339,   353,
     359,   355,   359,   355,   359,   355,   359,   354,    -1,   340,
     353,   359,   354,    -1,   340,   353,   359,   355,   359,   354,
      -1,   340,   353,   359,   355,   359,   355,   359,   354,    -1,
     341,   353,   359,   354,    -1,   343,   353,   359,   354,    -1,
     344,   353,   359,   354,    -1,   345,   353,   359,   355,   359,
     354,    -1,   345,   353,   359,   355,   359,   355,   359,   354,
      -1,   346,   353,   354,    -1,   285,   353,   359,    43,   495,
     354,    -1,   286,   353,   359,   355,   495,   354,    -1,   287,
     353,   359,   355,   359,   354,    -1,   288,   353,   359,   355,
     359,   354,    -1,   289,   353,   359,   355,   359,   355,   359,
     354,    -1,   359,    15,   290,    -1,   301,   353,   359,   355,
     359,   355,   359,   354,    -1,   301,   353,   359,   355,   359,
     355,   359,   355,   359,   354,    -1,   304,   353,   354,    -1,
     305,   353,   354,    -1,   306,   353,   354,    -1,   307,   353,
     354,    -1,   308,   353,   354,    -1,   309,    -1,   310,    -1,
     311,   353,   359,   354,    -1,   312,   353,   359,   355,   359,
     354,    -1,   156,    -1,   227,    -1,    57,    -1,   255,   353,
     359,   355,   392,   354,    -1,   256,   353,   359,   355,   392,
     354,    -1,   146,   359,   249,    -1,   146,   359,    89,    -1,
     146,   359,    90,    -1,   146,   359,    94,    -1,   146,   359,
      96,    -1,   146,   359,   250,    -1,   146,   359,   130,    -1,
     146,   359,   129,    -1,   146,   359,   132,    -1,    69,   359,
     393,   109,    -1,    69,   359,   393,   110,   359,   109,    -1,
      69,   393,   109,    -1,    69,   393,   110,   359,   109,    -1,
     246,   359,   226,   359,    -1,   393,   246,   359,   226,   359,
      -1,   359,    14,   359,    -1,   359,    18,    14,   359,    -1,
     359,    13,   359,    -1,   359,    18,    13,   359,    -1,    64,
      -1,    72,    -1,    73,    -1,   395,    -1,   214,   413,   414,
      -1,   214,   413,   414,   121,   417,   396,   397,   401,   406,
     409,   410,   411,    -1,   214,   413,   414,   144,     3,   121,
     417,   396,   397,   401,   406,   409,    -1,    -1,   245,   359,
      -1,    -1,   126,    55,   398,   400,    -1,   359,   399,    -1,
     398,   355,   359,   399,    -1,    -1,    41,    -1,    97,    -1,
      -1,   248,   192,    -1,    -1,   133,   359,    -1,    -1,   322,
      55,   403,    -1,     3,    -1,   403,   355,     3,    -1,    -1,
     176,    55,   405,    -1,     3,   399,    -1,   405,   355,     3,
     399,    -1,    -1,   176,    55,   407,    -1,   408,    -1,   407,
     355,   408,    -1,     3,   399,    -1,     3,   352,     3,   399,
      -1,     5,   399,    -1,    -1,   157,   359,    -1,   157,   359,
     355,   359,    -1,   157,   359,   159,   359,    -1,    -1,   125,
     231,    -1,   125,   203,    -1,   125,   231,   204,   158,    -1,
     125,   203,   204,   158,    -1,    -1,   144,   412,    -1,     3,
      -1,   412,   355,     3,    -1,    -1,   413,    37,    -1,   413,
      91,    -1,   413,    95,    -1,   413,   131,    -1,   413,   211,
      -1,   413,   199,    -1,   413,   207,    -1,   413,   206,    -1,
     415,    -1,   414,   355,   415,    -1,    26,    -1,   359,   416,
      -1,    43,     3,    -1,     3,    -1,    -1,   418,    -1,   417,
     355,   418,    -1,   419,    -1,   421,    -1,     3,   416,   428,
      -1,     3,   352,     3,   416,   428,    -1,   431,   420,     3,
      -1,   353,   417,   354,    -1,    43,    -1,    -1,   418,   422,
     148,   419,   426,    -1,   418,   211,   419,    -1,   418,   211,
     419,   175,   359,    -1,   418,   424,   423,   148,   419,   427,
      -1,   418,   168,   425,   148,   419,    -1,    -1,   138,    -1,
      68,    -1,    -1,   174,    -1,   155,    -1,   193,    -1,   155,
     423,    -1,   193,   423,    -1,    -1,    -1,   427,    -1,   175,
     359,    -1,   238,   353,   412,   354,    -1,   239,   149,   429,
     353,   430,   354,    -1,   139,   149,   429,   353,   430,   354,
      -1,   118,   149,   429,   353,   430,   354,    -1,    -1,   125,
     148,    -1,    -1,     3,    -1,   430,   355,     3,    -1,   353,
     395,   354,    -1,   432,    -1,    92,   433,   121,     3,   396,
     406,   409,   521,    -1,   433,   154,    -1,   433,   181,    -1,
     433,   139,    -1,    -1,    92,   433,   434,   121,   417,   396,
      -1,     3,   435,    -1,   434,   355,     3,   435,    -1,    -1,
     352,    26,    -1,    92,   433,   121,   434,   238,   417,   396,
      -1,   436,    -1,    93,   225,     3,    -1,    93,   225,   141,
     252,     3,    -1,   437,    -1,    65,   140,     3,   175,     3,
     353,   438,   354,    -1,    65,   140,   141,   252,     3,   175,
       3,   353,   438,   354,    -1,    65,   234,   140,     3,   175,
       3,   353,   438,   354,    -1,    65,   234,   140,   141,   252,
       3,   175,     3,   353,   438,   354,    -1,    65,   140,     3,
     175,     3,   238,   240,   353,   438,   354,    -1,    65,   140,
     141,   252,     3,   175,     3,   238,   240,   353,   438,   354,
      -1,    65,   234,   140,     3,   175,     3,   238,   240,   353,
     438,   354,    -1,    65,   234,   140,   141,   252,     3,   175,
       3,   238,   240,   353,   438,   354,    -1,    65,   140,    77,
       3,   175,     3,   353,   438,   354,    -1,    65,   140,    77,
     141,   252,     3,   175,     3,   353,   438,   354,    -1,    65,
     234,   140,    77,     3,   175,     3,   353,   438,   354,    -1,
      65,   234,   140,    77,   141,   252,     3,   175,     3,   353,
     438,   354,    -1,    65,   140,    77,     3,   175,     3,   238,
     240,   353,   438,   354,    -1,    65,   234,   140,    77,     3,
     175,     3,   238,   240,   353,   438,   354,    -1,     3,    -1,
     438,   355,     3,    -1,   439,    -1,   298,   353,     3,   354,
      -1,   299,   353,     3,   354,    -1,   300,   353,     3,   354,
      -1,   301,   353,     3,   355,     3,   354,    -1,   440,    -1,
      93,   140,     3,    -1,   441,   443,    -1,   228,   225,     3,
      -1,   228,   225,     3,   355,   442,    -1,     3,    -1,   442,
     355,     3,    -1,    -1,   443,    66,    -1,   443,   188,    -1,
     443,    47,    45,    -1,   443,    46,    45,    -1,   444,    -1,
     184,   225,     3,    -1,   445,    -1,    38,   225,     3,    -1,
      38,   225,     3,   352,     3,    -1,   446,    -1,    34,   225,
       3,    35,    63,     3,    70,   353,   359,   354,    -1,    34,
     225,     3,    35,    63,     3,   234,   353,   488,   354,    -1,
      34,   225,     3,    35,    63,     3,   119,   149,   353,   485,
     354,   185,     3,   353,   486,   354,   487,    -1,    34,   225,
       3,    35,    63,     3,    70,   353,   359,   354,    18,   241,
      -1,    34,   225,     3,    35,    63,     3,   119,   149,   353,
     485,   354,   185,     3,   353,   486,   354,   487,    18,   241,
      -1,    34,   225,     3,    35,    63,     3,   179,   149,   353,
     484,   354,    -1,    34,   225,     3,    93,    63,     3,    -1,
      34,   225,     3,   186,    63,     3,   218,     3,    -1,    34,
     225,     3,   105,    63,     3,    -1,    34,   225,     3,    85,
      63,     3,    -1,    34,   225,     3,   241,    63,     3,    -1,
      34,   225,     3,    35,    76,     3,   495,   490,   447,    -1,
      34,   225,     3,    93,    76,     3,    -1,    34,   225,     3,
      93,     3,    -1,    34,   225,     3,   186,    76,     3,   218,
       3,    -1,    34,   225,     3,   186,     3,   218,     3,    -1,
      34,   225,     3,   165,    76,     3,   495,   490,   447,    -1,
      34,   225,     3,   165,     3,   495,   490,   447,    -1,    34,
     225,     3,    67,    76,     3,     3,   495,   490,   447,    -1,
      34,   225,     3,    67,     3,     3,   495,   490,   447,    -1,
      -1,   115,    -1,    36,     3,    -1,   448,    -1,   142,   452,
     453,     3,   454,   243,   456,   449,   521,    -1,   142,   452,
     453,     3,   454,   395,    -1,    -1,    -1,   177,   149,   231,
     450,   451,    -1,     3,    20,   359,    -1,   451,   355,     3,
      20,   359,    -1,    -1,   452,   154,    -1,   452,    88,    -1,
     452,   131,    -1,   452,   139,    -1,   144,    -1,    -1,    -1,
     353,   455,   354,    -1,     3,    -1,   455,   355,     3,    -1,
     353,   458,   354,    -1,    -1,   456,   355,   457,   353,   458,
     354,    -1,   359,    -1,    98,    -1,   458,   355,   359,    -1,
     458,   355,    98,    -1,   142,   452,   453,     3,   213,   459,
     449,    -1,     3,    20,   359,    -1,     3,    20,    98,    -1,
     459,   355,     3,    20,   359,    -1,   459,   355,     3,    20,
      98,    -1,   460,    -1,   194,   452,   453,     3,   454,   243,
     456,   449,    -1,   194,   452,   453,     3,   213,   459,   449,
      -1,   194,   452,   453,     3,   454,   395,   449,    -1,   461,
      -1,    -1,    78,     3,   462,   463,   465,   466,   467,    -1,
      -1,   353,   464,   354,    -1,     3,    -1,   464,   355,     3,
      -1,   121,    -1,   218,    -1,     4,    -1,   209,    -1,   210,
      -1,    -1,   468,    -1,   248,   353,   468,   354,    -1,   353,
     468,   354,    -1,   469,    -1,   468,   355,   469,    -1,   120,
      79,    -1,   120,   222,    -1,    84,     4,    -1,   128,    -1,
     128,     6,    -1,   171,     4,    -1,   215,     4,    -1,    79,
      -1,   470,    -1,   231,   471,   417,   213,   472,   396,   406,
     409,   521,    -1,    -1,   452,   154,    -1,   452,   139,    -1,
       3,    20,   359,    -1,     3,   352,     3,    20,   359,    -1,
     472,   355,     3,    20,   359,    -1,   472,   355,     3,   352,
       3,    20,   359,    -1,   186,   225,     3,   218,     3,    -1,
     473,    -1,    65,    80,   474,     3,    -1,    65,   200,   474,
       3,    -1,    93,    80,     3,    -1,    93,    80,   141,   252,
       3,    -1,    93,   200,     3,    -1,    93,   200,   141,   252,
       3,    -1,    -1,   141,   252,    -1,   475,    -1,    65,    87,
       3,    43,   495,    -1,    65,    87,     3,    43,   495,    98,
     359,    -1,    65,    87,     3,    43,   495,    18,   171,    -1,
      65,    87,     3,    43,   495,    70,   353,   359,   354,    -1,
      65,    87,     3,    43,   495,    18,   171,    70,   353,   359,
     354,    -1,   476,    -1,   239,     3,    -1,   239,    80,     3,
      -1,   477,    -1,    65,   481,   225,   474,     3,   353,   482,
     354,   478,    -1,    65,   481,   225,   474,     3,   352,     3,
     353,   482,   354,   478,    -1,    -1,   478,    40,    20,     5,
      -1,   478,    40,     5,    -1,   478,   175,     3,    92,     3,
      -1,   478,   175,     3,   221,     3,    -1,   478,   201,    55,
     240,   353,     3,   354,   202,     5,    -1,   478,   201,    55,
     182,   353,     3,   354,   353,   479,   354,    -1,   480,    -1,
     479,   355,   480,    -1,   201,     3,   243,   152,   223,     4,
     175,   169,     5,    -1,   201,     3,   243,   152,   223,   162,
     175,   169,     5,    -1,    65,   481,   225,   474,     3,   353,
     482,   354,   497,    -1,    65,   481,   225,   474,     3,   497,
      -1,    65,   481,   225,   474,     3,   352,     3,   353,   482,
     354,   497,    -1,    65,   481,   225,   474,     3,   352,     3,
     497,    -1,    -1,   219,    -1,   220,   219,    -1,   483,    -1,
     482,   355,   483,    -1,   179,   149,   353,   484,   354,    -1,
      63,     3,   179,   149,   353,   484,   354,    -1,   149,   353,
     412,   354,    -1,   140,   353,   412,   354,    -1,   123,   140,
     353,   412,   354,    -1,   123,   149,   353,   412,   354,    -1,
      70,   353,   359,   354,    -1,    63,     3,    70,   353,   359,
     354,    -1,   119,   149,   353,   485,   354,   185,     3,   353,
     486,   354,   487,    -1,   119,   149,   353,   485,   354,   185,
       3,   352,     3,   353,   486,   354,   487,    -1,    63,     3,
     119,   149,   353,   485,   354,   185,     3,   353,   486,   354,
     487,    -1,    63,     3,   119,   149,   353,   485,   354,   185,
       3,   352,     3,   353,   486,   354,   487,    -1,   234,   353,
     488,   354,    -1,    63,     3,   234,   353,   488,   354,    -1,
       3,    -1,   484,   355,     3,    -1,     3,    -1,   485,   355,
       3,    -1,     3,    -1,   486,   355,     3,    -1,    -1,   487,
     175,    92,    66,    -1,   487,   175,    92,   213,   171,    -1,
     487,   175,    92,   188,    -1,   487,   175,    92,   213,    98,
      -1,   487,   175,   231,    66,    -1,   487,   175,   231,   213,
     171,    -1,   487,   175,   231,   188,    -1,   487,   175,   231,
     213,    98,    -1,   487,   175,    92,   170,    -1,   487,   175,
     231,   170,    -1,   487,   161,   122,    -1,   487,   161,   208,
      -1,   487,   161,   178,    -1,   487,    82,    -1,   487,    18,
      82,    -1,   487,    82,   136,    83,    -1,   487,    82,   136,
     134,    -1,     3,    -1,   488,   355,     3,    -1,    -1,   489,
       3,   495,   490,    -1,    -1,   490,    18,   171,    -1,   490,
     171,    -1,   490,    98,     4,    -1,   490,    98,     5,    -1,
     490,    98,     7,    -1,   490,    98,     6,    -1,   490,    98,
     304,   353,   354,    -1,   490,    98,   305,   353,   354,    -1,
     490,    98,   306,   353,   354,    -1,   490,    98,    64,    -1,
     490,    98,   353,   359,   354,    -1,   490,    40,    -1,   490,
      40,   353,     5,   355,     5,   354,    -1,   490,    40,   353,
       5,   354,    -1,   490,    45,   353,     5,   355,     5,   354,
      -1,   490,    45,   353,     5,   354,    -1,   490,    45,    -1,
     490,   234,   149,    -1,   490,   234,    -1,   490,   179,   149,
      -1,   490,   149,    -1,   490,    71,     4,    -1,   490,    70,
     353,   359,   354,    -1,   490,    63,     3,   234,    -1,   490,
      63,     3,   179,   149,    -1,   490,    63,     3,    70,   353,
     359,   354,    -1,   490,    48,    44,    43,   353,   359,   354,
      49,    -1,   490,    48,    44,    43,   353,   359,   354,    50,
      -1,   490,    48,    44,    43,   353,   359,   354,    -1,   490,
      43,   353,   359,   354,    49,    -1,   490,    43,   353,   359,
     354,    50,    -1,   490,    43,   353,   359,   354,    -1,    -1,
     353,     5,   354,    -1,   353,     5,   355,     5,   354,    -1,
      -1,    56,    -1,    -1,   493,   232,    -1,   493,   251,    -1,
      -1,   494,    74,   213,     4,    -1,   494,    75,     4,    -1,
      59,   491,    -1,   217,   491,   493,    -1,   212,   491,   493,
      -1,   167,   491,   493,    -1,   145,   491,   493,    -1,   137,
     491,   493,    -1,    58,   491,   493,    -1,   183,   491,   493,
      -1,    99,   491,   493,    -1,   117,   491,   493,    -1,   101,
     491,   493,    -1,   102,    -1,   230,    -1,   224,    -1,   100,
      -1,   249,    -1,    74,   491,   494,    -1,   242,   353,     5,
     354,   494,    -1,    56,   491,    -1,   244,   353,     5,   354,
      -1,   229,    -1,    53,    -1,   166,    -1,   160,    -1,   216,
     492,   494,    -1,   222,   492,   494,    -1,   163,   492,   494,
      -1,   153,   492,   494,    -1,   108,   353,   496,   354,   494,
      -1,   213,   353,   496,   354,   494,    -1,    54,    -1,   235,
      -1,   236,    -1,     4,    -1,   496,   355,     4,    -1,   498,
     420,   395,    -1,    -1,   139,    -1,   194,    -1,   499,    -1,
     213,   200,     3,    -1,   213,   200,    98,    -1,   213,   500,
      -1,   501,    -1,   500,   355,   501,    -1,     8,    20,   359,
      -1,     8,     9,   359,    -1,   502,    -1,    65,   180,     3,
     353,   503,   354,    43,    52,   507,   109,    -1,    65,   180,
       3,   353,   503,   354,    52,   507,   109,    -1,    65,    10,
     194,   180,     3,   353,   503,   354,    43,    52,   507,   109,
      -1,    65,    10,   194,   180,     3,   353,   503,   354,    52,
     507,   109,    -1,    65,   124,     3,   353,   503,   354,   191,
     506,    43,    52,   507,   109,    -1,    65,   124,     3,   353,
     503,   354,   191,   506,    52,   507,   109,    -1,    65,    10,
     194,   124,     3,   353,   503,   354,   191,   506,    43,    52,
     507,   109,    -1,    65,    10,   194,   124,     3,   353,   503,
     354,   191,   506,    52,   507,   109,    -1,    -1,   504,    -1,
     505,    -1,   504,   355,   505,    -1,     3,   495,    -1,    16,
       3,   495,    -1,   173,     3,   495,    -1,   135,     3,   495,
      -1,   137,    -1,   145,    -1,   242,    -1,   222,    -1,    54,
      -1,   117,    -1,    99,    -1,    58,    -1,   102,    -1,   224,
      -1,    -1,   507,   508,    -1,   507,    52,   507,   109,    -1,
     507,   141,   507,   109,   141,    -1,   507,   247,   507,   109,
     247,    -1,   507,   151,   507,   109,   151,    -1,   507,   116,
     507,   109,   116,    -1,   507,    69,   507,   109,    69,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
      20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,
      42,    -1,   214,    -1,   142,    -1,   231,    -1,    92,    -1,
     121,    -1,   245,    -1,   213,    -1,   144,    -1,   243,    -1,
      65,    -1,    93,    -1,   225,    -1,   140,    -1,   226,    -1,
     110,    -1,   104,    -1,    81,    -1,    86,    -1,    60,    -1,
     189,    -1,   150,    -1,   147,    -1,    62,    -1,   172,    -1,
     114,    -1,    61,    -1,   127,    -1,   112,    -1,   173,    -1,
     135,    -1,   125,    -1,    46,    -1,   196,    -1,   187,    -1,
     111,    -1,   198,    -1,    51,    -1,   103,    -1,   195,    -1,
     197,    -1,    43,    -1,   175,    -1,   176,    -1,    55,    -1,
     126,    -1,   133,    -1,   157,    -1,   159,    -1,   148,    -1,
     155,    -1,   193,    -1,   138,    -1,   174,    -1,   122,    -1,
      68,    -1,   168,    -1,   238,    -1,   171,    -1,    98,    -1,
     179,    -1,   149,    -1,   234,    -1,    70,    -1,   119,    -1,
     185,    -1,    66,    -1,   188,    -1,   170,    -1,   137,    -1,
     145,    -1,   242,    -1,   222,    -1,    54,    -1,   117,    -1,
      99,    -1,    58,    -1,   102,    -1,   224,    -1,   212,    -1,
     101,    -1,    74,    -1,   235,    -1,    53,    -1,   233,    -1,
     107,    -1,   143,    -1,    37,    -1,    91,    -1,   252,    -1,
     246,    -1,   248,    -1,   180,    -1,   124,    -1,   191,    -1,
     353,    -1,   354,    -1,   355,    -1,   351,    -1,   352,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      17,    -1,   356,    -1,   293,    -1,   294,    -1,   295,    -1,
     296,    -1,   297,    -1,     8,    -1,   509,    -1,    93,   180,
       3,    -1,    93,   180,   141,   252,     3,    -1,    93,   124,
       3,    -1,    93,   124,   141,   252,     3,    -1,   510,    -1,
      60,     3,   353,   354,    -1,    60,     3,   353,   511,   354,
      -1,   512,    -1,   511,   355,   512,    -1,     5,    -1,     4,
      -1,     7,    -1,   171,    -1,     6,    -1,     3,    -1,     8,
      -1,   513,    -1,    65,   197,     3,   514,   515,   175,     3,
     125,   103,   195,    52,   507,   109,    -1,    51,    -1,    36,
      -1,   142,    -1,   231,    -1,    92,    -1,   516,    -1,    93,
     197,     3,    -1,    93,   197,   141,   252,     3,    -1,    34,
     197,     3,   105,    -1,    34,   197,     3,    85,    -1,   517,
      -1,    65,   342,   474,     3,   518,    -1,    -1,   518,   519,
      -1,   347,   248,     5,    -1,   347,     5,    -1,   348,    55,
       5,    -1,   348,     5,    -1,   349,     5,    -1,   162,     5,
      -1,   350,    -1,    18,   350,    -1,   520,    -1,    93,   342,
       3,    -1,    93,   342,   141,   252,     3,    -1,    34,   342,
       3,   518,    -1,    34,   342,     3,    47,    -1,    34,   342,
       3,    47,   248,     5,    -1,    34,   342,     3,   186,   218,
       3,    -1,    -1,   190,    26,    -1,   190,   522,    -1,     3,
      -1,   522,   355,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   421,   421,   422,   427,   434,   435,   436,   454,   462,
     470,   476,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   509,   509,   518,   518,   520,   520,   522,   522,
     526,   527,   528,   529,   530,   533,   534,   537,   538,   541,
     542,   545,   545,   546,   546,   547,   547,   555,   555,   563,
     563,   574,   578,   579,   580,   581,   582,   583,   584,   585,
     589,   589,   591,   591,   593,   593,   596,   596,   598,   598,
     600,   600,   602,   602,   604,   604,   606,   606,   609,   609,
     611,   611,   613,   613,   615,   615,   617,   617,   619,   619,
     621,   621,   623,   623,   626,   626,   628,   628,   630,   630,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   669,   670,   671,   672,   673,   674,
     675,   676,   678,   679,   680,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   701,   702,   703,   704,   705,   707,
     708,   710,   711,   712,   714,   715,   716,   717,   724,   731,
     738,   742,   746,   750,   754,   758,   764,   765,   766,   769,
     775,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     793,   795,   797,   799,   803,   811,   822,   823,   826,   827,
     830,   838,   846,   857,   867,   868,   881,   897,   898,   899,
     900,   903,   910,   918,   919,   920,   923,   924,   927,   928,
     932,   933,   936,   938,   942,   943,   946,   948,   952,   953,
     956,   957,   960,   966,   973,   982,   983,   984,   985,   988,
     989,   990,   991,   992,   995,   996,   999,  1000,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1014,  1015,  1016,
    1024,  1030,  1031,  1032,  1035,  1036,  1039,  1040,  1044,  1051,
    1052,  1053,  1056,  1057,  1061,  1063,  1065,  1067,  1069,  1073,
    1074,  1075,  1078,  1079,  1082,  1083,  1086,  1087,  1088,  1091,
    1092,  1095,  1096,  1100,  1102,  1104,  1106,  1109,  1110,  1113,
    1114,  1117,  1121,  1131,  1139,  1140,  1141,  1142,  1146,  1150,
    1152,  1156,  1156,  1158,  1163,  1170,  1177,  1187,  1194,  1201,
    1211,  1219,  1229,  1237,  1246,  1255,  1265,  1273,  1282,  1291,
    1301,  1310,  1322,  1327,  1332,  1338,  1345,  1352,  1359,  1369,
    1376,  1385,  1392,  1398,  1406,  1412,  1420,  1421,  1422,  1423,
    1424,  1428,  1435,  1444,  1451,  1457,  1468,  1471,  1477,  1483,
    1490,  1496,  1503,  1509,  1515,  1521,  1527,  1533,  1539,  1545,
    1551,  1557,  1563,  1569,  1575,  1581,  1587,  1595,  1596,  1597,
    1600,  1608,  1614,  1627,  1628,  1628,  1631,  1639,  1649,  1650,
    1651,  1652,  1653,  1656,  1656,  1659,  1660,  1663,  1673,  1686,
    1687,  1687,  1690,  1691,  1692,  1693,  1696,  1700,  1701,  1702,
    1703,  1709,  1712,  1718,  1723,  1729,  1733,  1733,  1738,  1739,
    1741,  1742,  1746,  1747,  1751,  1752,  1753,  1756,  1757,  1758,
    1759,  1763,  1764,  1768,  1769,  1770,  1771,  1772,  1773,  1774,
    1775,  1779,  1787,  1796,  1797,  1798,  1802,  1813,  1825,  1836,
    1851,  1856,  1860,  1861,  1865,  1867,  1869,  1871,  1875,  1876,
    1882,  1886,  1888,  1890,  1892,  1894,  1899,  1903,  1904,  1908,
    1917,  1927,  1931,  1932,  1933,  1934,  1935,  1936,  1938,  1942,
    1943,  1946,  1961,  1968,  1983,  1996,  2011,  2024,  2025,  2026,
    2029,  2030,  2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,
    2041,  2043,  2045,  2047,  2049,  2051,  2055,  2056,  2059,  2060,
    2063,  2064,  2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,
    2075,  2076,  2077,  2078,  2079,  2080,  2081,  2082,  2083,  2084,
    2087,  2088,  2091,  2091,  2101,  2102,  2103,  2104,  2105,  2106,
    2107,  2108,  2109,  2110,  2111,  2112,  2119,  2120,  2121,  2122,
    2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,
    2133,  2134,  2135,  2136,  2137,  2138,  2139,  2142,  2143,  2144,
    2147,  2148,  2151,  2152,  2153,  2156,  2157,  2158,  2162,  2163,
    2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,  2173,
    2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,  2183,
    2184,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,  2193,
    2194,  2197,  2198,  2201,  2214,  2215,  2216,  2220,  2223,  2224,
    2225,  2226,  2226,  2228,  2229,  2237,  2241,  2247,  2253,  2260,
    2267,  2273,  2279,  2286,  2295,  2296,  2299,  2300,  2303,  2304,
    2305,  2306,  2309,  2310,  2311,  2312,  2313,  2314,  2315,  2316,
    2317,  2318,  2325,  2326,  2327,  2328,  2329,  2330,  2331,  2332,
    2335,  2336,  2337,  2337,  2337,  2338,  2338,  2338,  2338,  2338,
    2338,  2339,  2339,  2339,  2339,  2339,  2339,  2339,  2339,  2339,
    2340,  2340,  2340,  2340,  2340,  2340,  2340,  2341,  2341,  2341,
    2341,  2342,  2342,  2342,  2342,  2342,  2342,  2342,  2342,  2342,
    2342,  2342,  2342,  2343,  2343,  2343,  2343,  2343,  2343,  2343,
    2343,  2344,  2344,  2344,  2344,  2344,  2344,  2344,  2344,  2345,
    2345,  2345,  2345,  2345,  2345,  2345,  2345,  2345,  2346,  2346,
    2346,  2346,  2346,  2346,  2346,  2346,  2347,  2347,  2347,  2348,
    2348,  2348,  2348,  2348,  2348,  2348,  2348,  2349,  2349,  2349,
    2349,  2349,  2349,  2349,  2350,  2350,  2350,  2350,  2350,  2350,
    2350,  2351,  2351,  2351,  2351,  2352,  2352,  2352,  2352,  2352,
    2352,  2352,  2352,  2352,  2352,  2352,  2352,  2353,  2353,  2353,
    2353,  2353,  2354,  2361,  2365,  2371,  2377,  2383,  2395,  2399,
    2405,  2413,  2414,  2417,  2418,  2419,  2420,  2421,  2422,  2423,
    2430,  2434,  2442,  2443,  2446,  2447,  2448,  2451,  2455,  2461,
    2470,  2478,  2489,  2493,  2502,  2503,  2507,  2508,  2509,  2510,
    2511,  2512,  2513,  2514,  2517,  2521,  2527,  2537,  2544,  2551,
    2559,  2569,  2570,  2571,  2574,  2575
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
  "CSV", "DATABASE", "DECLARE", "DEFERRABLE", "DEFERRED", "DELIMITER",
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
  "insert_stmt", "opt_ondupupdate", "@30", "upsert_asgn_list",
  "insert_opts", "opt_into", "opt_col_names", "insert_col_list",
  "insert_vals_list", "@31", "insert_vals", "insert_asgn_list",
  "replace_stmt", "copy_stmt", "@32", "opt_copy_cols", "copy_col_list",
  "copy_direction", "copy_target", "opt_copy_options", "copy_option_list",
  "copy_option", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_table_options",
  "shard_range_list", "shard_range_def", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list",
  "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@33", "column_atts", "opt_length", "opt_binary",
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
     596,    59,    46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   357,   358,   358,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   360,   359,   361,   359,   362,   359,   363,   359,
     359,   359,   359,   359,   359,   359,   359,   364,   364,   365,
     365,   366,   359,   367,   359,   368,   359,   369,   359,   370,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     371,   359,   372,   359,   373,   359,   374,   359,   375,   359,
     376,   359,   377,   359,   378,   359,   379,   359,   380,   359,
     381,   359,   382,   359,   383,   359,   384,   359,   385,   359,
     386,   359,   387,   359,   388,   359,   389,   359,   390,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   391,   391,   391,   359,
     359,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     359,   359,   359,   359,   393,   393,   359,   359,   359,   359,
     359,   359,   359,   394,   395,   395,   395,   396,   396,   397,
     397,   398,   398,   399,   399,   399,   400,   400,   401,   401,
     402,   402,   403,   403,   404,   404,   405,   405,   406,   406,
     407,   407,   408,   408,   408,   409,   409,   409,   409,   410,
     410,   410,   410,   410,   411,   411,   412,   412,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   414,   414,   414,
     415,   416,   416,   416,   417,   417,   418,   418,   419,   419,
     419,   419,   420,   420,   421,   421,   421,   421,   421,   422,
     422,   422,   423,   423,   424,   424,   425,   425,   425,   426,
     426,   427,   427,   428,   428,   428,   428,   429,   429,   430,
     430,   431,   394,   432,   433,   433,   433,   433,   432,   434,
     434,   435,   435,   432,   394,   436,   436,   394,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   438,   438,   438,   439,   439,   439,   439,   394,
     440,   394,   441,   441,   442,   442,   443,   443,   443,   443,
     443,   394,   444,   394,   445,   445,   394,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   447,   447,
     394,   448,   448,   449,   450,   449,   451,   451,   452,   452,
     452,   452,   452,   453,   453,   454,   454,   455,   455,   456,
     457,   456,   458,   458,   458,   458,   448,   459,   459,   459,
     459,   394,   460,   460,   460,   394,   462,   461,   463,   463,
     464,   464,   465,   465,   466,   466,   466,   467,   467,   467,
     467,   468,   468,   469,   469,   469,   469,   469,   469,   469,
     469,   394,   470,   471,   471,   471,   472,   472,   472,   472,
     394,   394,   473,   473,   394,   394,   394,   394,   474,   474,
     394,   475,   475,   475,   475,   475,   394,   476,   476,   394,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   479,
     479,   480,   480,   477,   477,   477,   477,   481,   481,   481,
     482,   482,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   484,   484,   485,   485,
     486,   486,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     488,   488,   489,   483,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   491,   491,   491,
     492,   492,   493,   493,   493,   494,   494,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   496,   496,   497,   498,   498,   498,   394,   499,   499,
     499,   500,   500,   501,   501,   394,   502,   502,   502,   502,
     502,   502,   502,   502,   503,   503,   504,   504,   505,   505,
     505,   505,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   507,   507,   507,   507,   507,   507,   507,   507,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   394,   509,   509,   509,   509,   394,   510,
     510,   511,   511,   512,   512,   512,   512,   512,   512,   512,
     394,   513,   514,   514,   515,   515,   515,   394,   516,   516,
     394,   394,   394,   517,   518,   518,   519,   519,   519,   519,
     519,   519,   519,   519,   394,   520,   520,   394,   394,   394,
     394,   521,   521,   521,   522,   522
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
       5,     1,     8,     7,     7,     1,     0,     7,     0,     3,
       1,     3,     1,     1,     1,     1,     1,     0,     1,     4,
       3,     1,     3,     2,     2,     2,     1,     2,     2,     2,
       1,     1,     9,     0,     2,     2,     3,     5,     5,     7,
       5,     1,     4,     4,     3,     5,     3,     5,     0,     2,
       1,     5,     7,     7,     9,    11,     1,     2,     3,     1,
       9,    11,     0,     4,     3,     5,     5,     9,    10,     1,
       3,     9,     9,     9,     6,    11,     8,     0,     1,     2,
       1,     3,     5,     7,     4,     4,     5,     5,     4,     6,
      11,    13,    13,    15,     4,     6,     1,     3,     1,     3,
       1,     3,     0,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     4,     3,     3,     3,     2,     3,     4,     4,
       1,     3,     0,     4,     0,     3,     2,     3,     3,     3,
       3,     5,     5,     5,     3,     5,     2,     7,     5,     7,
       5,     2,     3,     2,     3,     2,     3,     5,     4,     5,
       7,     8,     8,     7,     6,     6,     5,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     1,
       1,     1,     3,     3,     0,     1,     1,     1,     3,     3,
       2,     1,     3,     3,     3,     1,    10,     9,    12,    11,
      12,    11,    14,    13,     0,     1,     1,     3,     2,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     4,     5,     5,     5,     5,     5,
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
       1,     1,     1,     1,     3,     5,     3,     5,     1,     4,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,    13,     1,     1,     1,     1,     1,     1,     3,     5,
       4,     4,     1,     5,     0,     2,     3,     2,     3,     2,
       2,     2,     1,     2,     1,     3,     5,     4,     4,     6,
       6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   507,     0,   327,     0,   408,     0,
       0,   408,     0,   268,     0,   408,     0,     0,     0,   223,
     322,   334,   337,   359,   366,   371,   373,   376,   400,   431,
     435,   461,   471,   480,   486,   489,   637,   645,   803,   808,
     820,   827,   832,   844,     0,     0,     0,     0,     0,     0,
     478,     0,     0,     0,     0,     0,   478,   508,     0,     0,
     478,     0,   436,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   414,     0,     0,   414,     0,     0,   640,   641,
       0,     0,     0,     0,   487,     0,     1,     2,   361,     0,
       0,   834,   374,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   509,     0,     0,   478,   438,
     331,     0,   326,   324,   325,     0,   474,     0,   806,     0,
     360,   804,     0,   828,     0,   476,     0,   335,     0,   845,
       0,   410,   411,   412,   413,   409,     0,   372,     0,     0,
       0,     0,   638,   639,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   279,   269,   220,     0,   221,   222,
     270,   271,   272,    11,   274,   276,   275,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
     224,   277,   362,   412,   409,   283,     0,     0,   284,   286,
     287,   293,   488,     3,     0,     0,   367,   368,   831,   830,
       0,     0,     0,     0,     0,     0,     0,     0,   848,     0,
     847,     0,   818,   814,   813,   817,   815,   819,   816,   809,
       0,   811,     0,     0,   479,   472,     0,   654,     0,     0,
       0,     0,   654,   823,   822,     0,   473,     0,     0,     0,
     834,     0,     0,     0,     0,   329,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   415,     0,   415,
     644,   643,   642,     0,    49,     0,    30,    29,    18,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,   316,     0,     0,     0,     0,   301,   300,   304,   308,
     305,     0,     0,   302,   292,     0,   370,   369,     0,     0,
       0,     0,     0,   390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     842,   835,   375,   810,     0,     0,     0,   619,   628,   587,
     587,   587,   587,   587,   612,   587,   609,     0,   587,   587,
     587,   590,   621,   590,   620,   587,   587,   587,     0,   590,
     587,   590,   611,   618,   610,   629,   630,     0,     0,   613,
     481,     0,     0,     0,     0,     0,   655,   656,     0,     0,
       0,     0,     0,   826,   824,   825,     0,     0,     0,     0,
       0,   833,   634,   440,     0,   442,   443,     0,   332,     0,
     248,     0,   227,   331,   475,   807,   805,   829,   477,   336,
     846,     0,     0,     0,   470,     0,     0,     5,    47,    50,
       0,    44,     0,     0,   212,     0,     0,     0,     0,   198,
     196,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
      19,    21,    22,    20,   218,   216,    42,     0,    40,   184,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      31,    23,    24,    26,    12,    13,    14,    15,    16,    17,
      25,    28,    27,   281,   227,     0,   278,   364,   363,   283,
       0,     0,     0,   288,   321,   291,     0,   227,   285,   302,
     302,     0,   295,     0,   303,     0,   290,     0,     0,     0,
       0,   386,   383,   389,   385,   554,     0,     0,     0,     0,
     387,   849,   850,   843,   841,   837,     0,   839,     0,   840,
     812,   654,   654,     0,   616,   592,   598,   595,   592,   592,
       0,   592,   592,   592,   591,   595,   595,   592,   592,   592,
       0,   595,   592,   595,     0,     0,     0,     0,     0,   658,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   635,   636,     0,   552,
     504,   293,   439,     0,   444,   445,   446,   447,   228,     0,
     255,   227,   328,   330,     0,   403,   417,     0,     0,   402,
     403,     0,   403,     0,    61,     0,   210,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,   146,
     147,   148,   149,   150,   151,     0,     0,     0,     0,   127,
       0,     0,     0,   131,   132,   133,   135,     0,     0,   137,
       0,   140,   141,   142,     0,     0,     0,     0,     0,     0,
      68,    62,    63,    64,    65,    66,    67,   117,   118,   119,
       0,     0,     0,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,   173,   174,   175,     0,    43,    41,
       0,     0,   219,   217,    53,     0,     0,    38,    34,    36,
       0,   229,     0,     0,   316,   318,   318,   318,     0,     0,
       0,   248,   306,   307,     0,     0,   309,     0,     0,     0,
       0,     0,   554,   554,     0,   397,   554,   392,     0,     0,
     836,   838,     0,     0,     0,   604,   614,   606,   608,   631,
       0,   607,   603,   602,   625,   624,   601,   605,   600,     0,
     622,   599,   623,     0,     0,   483,     0,   482,   659,   661,
     660,     0,   657,     0,   352,     0,     0,     0,     0,     0,
     354,     0,     0,     0,     0,     0,   672,     0,     0,     0,
       0,     0,     0,   634,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   510,     0,     0,   441,   460,     0,     0,
     456,     0,     0,     0,     0,   437,   448,   451,     0,     0,
     851,   333,     0,     0,     0,   426,   416,     0,     0,   403,
     433,   403,   434,    48,   214,     0,   213,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    72,    74,     0,     0,     0,     0,
       0,   106,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,   238,   227,   365,   289,     0,
       0,     0,     0,   466,     0,     0,   255,   298,   296,     0,
       0,   294,   310,     0,     0,     0,     0,     0,   397,   397,
     554,     0,     0,   566,     0,   571,     0,     0,     0,     0,
       0,   398,   575,   556,     0,   573,   394,   397,   384,   391,
       0,     0,   588,     0,   593,   594,     0,     0,   595,     0,
     595,   595,   617,     0,     0,   666,   669,   668,   670,   667,
     662,   663,   665,   671,   664,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   672,     0,
       0,     0,     0,     0,     0,     0,     0,   552,   506,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   492,   552,
       0,   633,   455,   453,   454,   457,   458,   459,     0,     0,
       0,   233,   233,   249,   250,   256,     0,   323,   428,   427,
       0,     0,   418,   423,   422,     0,   420,   851,   432,   211,
     215,     0,   112,   111,     0,   116,     0,     0,   199,   200,
     145,   123,   124,     0,     0,   128,   129,   130,   134,   136,
     138,   179,   180,   181,   182,     0,    69,    78,    80,    76,
      82,    84,    86,   120,     0,     0,   122,   195,   240,   240,
     240,    88,     0,     0,    96,     0,     0,   104,   240,   240,
     152,     0,     0,     0,   164,   165,     0,     0,   168,     0,
     171,     0,   176,     0,    52,    56,     0,     0,    46,     0,
       0,     0,    33,     0,     0,   248,   229,   317,     0,     0,
       0,     0,     0,     0,   851,   311,     0,   297,     0,     0,
       0,   550,     0,   388,   396,   397,   555,   399,     0,     0,
       0,     0,     0,     0,   576,   557,   558,   560,   559,   564,
       0,     0,     0,     0,   574,   572,   393,     0,     0,   672,
       0,     0,   597,   626,   632,   627,   615,     0,   484,     0,
     672,     0,     0,     0,     0,     0,   353,     0,   346,     0,
       0,     0,     0,   680,   681,   682,   684,   683,   802,   687,
     688,   689,   795,   686,   685,   790,   791,   792,   793,   794,
     777,   690,   731,   722,   727,   672,   773,   763,   734,   766,
     709,   716,   713,   700,   756,   745,   672,   753,   771,   707,
     708,   778,   694,   701,   749,   765,   770,   767,   728,   706,
     775,   647,   705,   725,   718,   715,   672,   764,   754,   695,
     744,   783,   721,   735,   717,   736,   720,   759,   742,   703,
     672,   692,   776,   698,   760,   712,   739,   751,   711,   672,
     740,   737,   738,   746,   758,   748,   714,   719,   743,   732,
     733,   750,   782,   755,   724,   757,   710,   784,   741,   729,
     723,   730,   726,   769,   697,   691,   762,   768,   702,   704,
     693,   774,   752,   772,   747,   761,   699,   696,   780,   672,
     781,   779,   797,   798,   799,   800,   801,   788,   789,   785,
     786,   787,   796,   673,     0,     0,   340,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,   490,   503,   511,   554,
       0,   450,   452,   234,   235,     0,   252,   254,     0,     0,
       0,   854,   852,   853,   404,     0,   419,     0,     0,   401,
       0,     0,   115,   202,   203,   204,   205,   208,   207,   209,
     201,   206,     0,     0,     0,   240,   240,   240,   240,   240,
     240,     0,     0,     0,   244,   244,   244,   240,     0,     0,
       0,   240,     0,     0,     0,   240,   244,   244,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    58,    39,    35,
      37,   233,   236,   239,   255,   238,   319,     0,     0,     0,
     467,   468,     0,   462,     0,   377,   528,     0,   526,     0,
     378,     0,   395,     0,     0,     0,     0,     0,     0,   578,
       0,     0,     0,     0,     0,     0,   672,     0,   589,   596,
       0,   672,     0,   342,   355,   356,   357,     0,     0,     0,
       0,   339,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,   492,     0,     0,     0,
       0,   518,     0,     0,     0,   515,     0,   514,     0,   524,
       0,     0,     0,   553,   449,   233,   251,   258,   257,     0,
       0,   430,   429,   425,   424,     0,   113,   110,   125,   126,
     183,   244,   244,   244,   244,   244,   244,   185,     0,   121,
       0,     0,     0,     0,     0,   244,    90,     0,     0,   244,
      98,     0,     0,   244,     0,     0,   161,   162,   163,   166,
     167,     0,   172,   177,   231,     0,     0,   230,   259,   248,
     315,     0,   314,   313,     0,   312,     0,     0,     0,   382,
       0,   551,   568,     0,   586,   570,     0,     0,     0,   579,
     577,   561,   562,   563,   565,     0,   672,     0,   649,   485,
       0,   651,     0,   350,   347,     0,   674,     0,     0,     0,
       0,     0,   672,   344,     0,     0,     0,   341,   491,   505,
       0,     0,     0,     0,     0,   516,   517,   267,   512,   494,
       0,     0,     0,   253,   855,     0,   405,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   241,     0,    71,    73,
      75,     0,   240,     0,     0,     0,   240,     0,     0,     0,
     107,   109,     0,   237,   233,     0,   264,   255,   320,   469,
     380,     0,   529,   527,     0,   584,   585,     0,     0,     0,
     672,     0,   648,   650,   358,   343,   679,   678,   675,   677,
     676,     0,   351,   349,     0,   519,     0,     0,   525,     0,
     493,     0,     0,     0,     0,     0,     0,   421,    79,    81,
      77,    83,    85,    87,   186,     0,   233,   245,    89,   244,
      92,    94,    97,   244,   100,   102,   105,   169,   232,   261,
     260,     0,   225,   226,     0,   567,   569,   583,   580,     0,
     653,   821,   345,     0,   513,     0,   495,   496,     0,     0,
     406,     0,   243,   246,     0,     0,   240,   240,     0,   240,
     240,     0,     0,   265,     0,   581,   582,   652,     0,     0,
       0,     0,     0,     0,   233,    91,   244,   244,    99,   244,
     244,   263,   262,   530,     0,     0,     0,     0,     0,     0,
     407,   247,     0,     0,     0,     0,   532,     0,     0,     0,
       0,   532,     0,     0,    93,    95,   101,   103,   379,   531,
       0,     0,     0,   520,     0,     0,   499,   497,     0,   546,
       0,     0,     0,   532,   532,     0,     0,   498,     0,   547,
     381,     0,   543,   545,   544,     0,     0,     0,   522,   521,
       0,   500,   548,   549,   533,   541,   535,     0,   537,   542,
     539,     0,   532,     0,   536,   534,   540,   538,   523,     0,
       0,     0,     0,     0,     0,     0,   501,   502
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   598,   960,  1151,  1152,  1150,   599,   600,   950,
    1146,   951,  1147,   607,  1328,  1329,  1330,  1627,  1625,  1626,
    1628,  1629,  1630,  1637,  1882,  1986,  1987,  1641,  1886,  1989,
    1990,  1645,  1338,  1339,   613,  1094,   351,    18,    19,   580,
    1155,  1662,  1596,  1797,  1365,  1634,  1876,  1772,  1947,   840,
    1273,  1274,  1070,  1896,  1962,  1582,    80,   260,   261,   465,
     267,   268,   269,   485,   270,   482,   755,   483,   751,  1171,
    1172,   743,  1160,  1667,   271,    20,    63,   115,   325,    21,
      22,  1029,  1030,    23,    24,   738,    88,    25,    26,    27,
    1196,    28,  1075,  1750,  1866,    72,   136,   593,   847,  1079,
    1608,  1285,   845,    29,    30,   109,   323,   574,   577,   837,
    1065,  1066,  1067,    31,    83,   747,    32,    96,    33,    34,
      35,  1586,  2045,  2046,    61,  1052,  1053,  1679,  1677,  2014,
    2038,  1382,  1054,   985,   784,   795,   995,   996,   550,  1000,
     830,   831,    36,    78,    79,    37,   555,   556,   557,  1225,
    1239,  1563,    38,    39,   300,   301,    40,   315,   566,    41,
      42,   290,   511,    43,  1277,  1603
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1529
static const yytype_int16 yypact[] =
{
   10755,  -127,  -139,   102, 10703,   152, -1529,   348, -1529,   294,
     332, -1529,    22, -1529,   418,    37,    91,   182,   -85, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529,   524,   645,   660,   663,   301,   481,
     539,   682,   688,   423,   692,   699,   539, -1529,   479,   564,
     539,   506, -1529,    38,    87,   123,   740,   194,   269,   396,
     398,   422,   538,   754,   760,   538,   489,    89,   378, -1529,
    6133,   764,   605,    40, -1529,   767, -1529, 10755,   137,   363,
     456,    28,   389,    31,   -10,   531,   796,   763,   470,   638,
     433,   576,   480,   399,   837, -1529,   424,   841,   539,   496,
     501,   861, -1529, -1529, -1529,  -100, -1529,   616, -1529,   621,
   -1529, -1529,   623, -1529,   631, -1529,   635, -1529,   640, -1529,
     685, -1529, -1529, -1529, -1529, -1529,   891, -1529,   733,   970,
    8500,  8500, -1529, -1529,   895,   142, -1529, -1529, -1529, -1529,
     999,  8500,  8500,  8500, -1529, -1529, -1529,  6992, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,   658,   668,
     735,   749,   772,   799,   838,   869,   881,   915,   917,   919,
     929,   937,   940,   969,   975,   976,  1000,  1001,  1002,  1003,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1023,
    1025,  1027,  1029,  1033,  1035,  1036,  1037,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1054,  1055,  1058,  1059,  1061,
    1062,  1063,  1064, -1529, -1529,  1070,  1071,  1073,  1077,  1078,
    1081,  1089,  1090,  1091,  1093,  1094,  1096,  1097,  1098,  1099,
    1101,  1102,  1103,  1104,  1111,  1114,  1119,  1120,  1122,  1127,
    1129,  1132,  1134,  1142,  1143,  1144,  1145,  1146,  8500, 11053,
     -95, -1529,   932,    41,    43,    15,    16,  -149,   592, -1529,
   -1529,  1258, -1529, -1529,  1261,  1265, -1529, -1529, -1529, -1529,
     560,    98,  1294,   430,  1306,   112,   454,  1318,  1190,  1243,
      95,  1498, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
     180, -1529,  1500,  1503, -1529, -1529, 10813,    90,  1510,  1346,
    1271,  1527,    90, -1529, -1529,   325, -1529,  1356,   434,  1280,
   -1529,  1530,  1531,   -39,  1518, -1529,   226,  -160,    40,  1533,
    1542,  1545,  1546,  1547,  1548,  1550,  1554,  -137,  1556,  -133,
   11155, 11155, -1529,  1558,  8500,  8500,   900,   900, -1529,  8500,
    6593,   337, -1529,  8500,  6477,  8500,  8500,  8500,  8500,  8500,
    8500,  8500,  8500,  8500,  1212,  8500,  8500,  8500,  8500,  8500,
    8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,
    1213,  8500,  8500,  8500,  1214,  8500,  8500,  8500,  8500,  8500,
    8500,  7111,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,
    8500,  8500,  1215,  1216,  1217,  1218,  1219,  8500,  8500,  1220,
    1221,  1222,  8500,  8500,  1572,  1228,  1229,  8500,  8500,  8500,
    8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,
    8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  1230,
    2651, -1529,  8500,  8500,  8500,  8500,  8500,    14,  1225,   654,
    8500,  6648,  8500,  8500,  8500,  8500,  8500,  8500,  8500,  8500,
    8500,  8500,  8500,  8500,  1582, -1529,    40,  1583,  8500,  1584,
    1585,   -50,  1236,   283,  1591,    40, -1529, -1529, -1529,   -36,
   -1529,    40,  1447,  1422, -1529,  1594, -1529, -1529,  1596,  1600,
    1601,  1603,  1604, -1529,  1605,  1608,  1613, 10813,  1614,  1400,
    1617,  1618,  1626,  1640,  1643,  1298,  1644,    20,    80,  1645,
   -1529, -1529, -1529, -1529,   158,  1299,  1300, -1529, -1529,  1301,
    1301,  1301,  1301,  1301, -1529,  1301, -1529,  1302,  1301,  1301,
    1301,  1595, -1529,  1595, -1529,  1301,  1301,  1301,  1303,  1595,
    1301,  1595, -1529, -1529, -1529, -1529, -1529,  1304,  1305, -1529,
     448, 10813,  1656,  1662,  1663,  1313,  1314, -1529,   243,  1665,
    1667,  1496,  1319, -1529, -1529, -1529,  1497,  1673,  1502,  1426,
    1676,    95,   -94, -1529,   302, -1529, -1529,    61, -1529,  8500,
    1504,    40,  -164,   501, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529,  1701,  1702,   -38, -1529,  1701,   246, -1529,  1612, -1529,
    1352, 11155,  7474,   367, -1529,  8500,  8500,  1493,   118, -1529,
   -1529, -1529,  2971,  7455,  1671,  1966,  2286,  3291,  3611,  3931,
    4251,  4571,  4891, -1529,  2606,  2926,  3246,  3566,  5211,  3886,
    4206,  4526,  5531,  7008,  8971,   222,  4846,  8994,  5166, -1529,
    9017,  9040,  9063, -1529, 11079,  5486,  5806,  5852,  6230,  2331,
    1354,  9086,  9109,  9132,  9155,  9192,  9215,  9240,  9263,  6255,
    6287,  6335, -1529, -1529, -1529, -1529, -1529,  9286,  6493,  1388,
    1389,  1391,   579,   695,  1359,  1393,  1394,  6541,  9331,  9354,
    9377,  9400,  9423,  9446,  9469,  9492,  6844,  7077,  7128,  7182,
    7205,  7590,  7638,  7663,   886,  9529,  9552,  9577,  8053, -1529,
   -1529,   956,  2009,  7053,  7328,  7328, -1529,    42, -1529, -1529,
    1511,  8500,  8500,  1364,  8500, 11105,  1379,  1381,  1383,  8500,
    1016,  1224,  1028,  1201,  1189,  1189,   707,   707,   707,   707,
     656, -1529, -1529, -1529,  -164,  1621, -1529, -1529,  1390,   471,
    1597,  1606,  1607, -1529, -1529, -1529,     7,  -161,   592,  1422,
    1422,  1609,  1569,    40, -1529,  1610, -1529,    -7, 10813, 10813,
    1749, -1529, -1529, -1529, -1529, -1529, 10813,  1750,  1536,  1541,
   -1529, -1529, -1529, -1529, -1529, -1529,  1756, -1529,  1757, -1529,
   -1529,    90,    90,  1758, -1529, -1529, -1529, -1529, -1529, -1529,
    1760, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
    1760, -1529, -1529, -1529,  1762,  1763,  1599,  1418,  8500, -1529,
   10813, 10813, 10813,  1581,    90,  1539,   155,   265,  1598,  1777,
      64,  1779,   267,  1783,  1784,  1615, -1529, -1529,  1791,   701,
   -1529,  1258, -1529,  1792, -1529, -1529, -1529,   -17, 11155,  1741,
    1641,  -164, -1529, -1529,  1780,  -146, -1529,   391,  1446, -1529,
    -146,  1446,  1624,  8500, -1529,  8500, -1529,  8500,  7520,  7936,
    1448,  8500,  8500, -1529,  8500,  6568,  1657,  1657,  8500, -1529,
   -1529, -1529, -1529, -1529, -1529,  8500,  8500,  8500,  8500, -1529,
    8500,  8500,  8500, -1529, -1529, -1529, -1529,  8500,  8500, -1529,
    8500, -1529, -1529, -1529, 10813, 10813,  8500,  8500,  8500,  1801,
   -1529,  1485,  1486,  1487,  1489,  1490,  1491, -1529, -1529, -1529,
    8500,  8500,  8500, -1529,  8500,  1460,  1464,  1465,  1499,  1814,
    1507,  1818,  1508,  1478,  1483,  8500, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529,  8500,  8500,  8500,  8500,  8500,  8500,
    8500,  8500, -1529,  8500, -1529, -1529, -1529,  8500, -1529, -1529,
    8500,  1493,  7328,  7328,  1627, 11130,  8500, -1529, -1529, -1529,
    1493,  1712,    40,  1840,   -50,  1721,  1721,  1721,  8500,  1848,
    1849,  1504, -1529, -1529,    40,  8500,   -71,    40,  1501,  1704,
    1708,  1506, -1529, -1529, 10813, 10711, -1529, -1529,  1859,  1866,
   -1529, -1529,  1521,  1522,   394,  -141,   678,  -141,  -141, -1529,
     401,  -141,  -141,  -141,   678,   678,  -141,  -141,  -141,   407,
     678,  -141,   678,  1523,  1525,  1811,  8500, 11155, -1529, -1529,
   -1529,   405, -1529,  1532, -1529,  1534,  1535,  1537,  1551,   419,
   -1529,  1646,   155,  1880,   272,  1832, -1529,  1764,  1652,   155,
     275,  1725,  1898,   -92,  1902,  1553,  1766,   411,  1560,  1564,
    1773,  1571,   432, -1529,  1904,  1493, -1529, -1529,  1905,   -26,
    1919,  1922,  1923,  1575,   561, -1529,  1574, -1529,   611,  8500,
    1740, -1529,  7574,  1782,  1929, -1529, -1529,  1930,  7918,  -144,
   -1529,  -144, -1529, -1529, 11155,  8400, -1529,  8500, -1529,  1320,
     934,  9600,  8500,  8500,  1580,  1586,  9623,  9646,  9691,  8101,
    8126,  9714,  9737,  9760,  9783,  9806,  9829,  1587,  1588,  9866,
    9889,  8516,  1589,  1593,  1602,  1611,  1619,  1620,  1630,  1004,
    8564,  9914,  9937, -1529, -1529, -1529,  1647,   435,  1648,   437,
    1649, -1529, -1529,  9960,  8587,  8854,  8877,  9983, 10006,  8902,
    8925,  1051,  1085,  1108,  1590,  1650,  8500,  1493,  8500,  1151,
    1493,  1493,  1493,  1651,  1883,  1806,  -164, -1529, -1529,  1802,
    1653,  1654,  1655, 11155,  1931,    34,  1641, -1529, 11155,  8500,
    1658, -1529, -1529,   -71,  8500,  1659,  1660,  1949, 10711, 10711,
   -1529,  1788,  1950,  1661,  1689,  1690,  1916,  1959,  1691,  1970,
     117, -1529, -1529, -1529,  1850,  1854, -1529, 10711, -1529, -1529,
    1772,   510, -1529,  2004, -1529, -1529,  1797,  2011, -1529,  2041,
   -1529, -1529, -1529,  1699, 10051, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529,   607,   155,  2051,  2053,  2054,
    2055, -1529,  2059,  1711,   439,  1713,  1825,   155, -1529,  1367,
    1969,  1720,   450,  1841,   155,  2079,   282,   701, -1529,    50,
    8500,  1730,  1731,  1734,  2085,  2085,  1737,  1949,   -14,   701,
   10813, -1529, -1529, -1529, -1529, -1529, -1529, -1529,   561,   467,
     561,   -18,   393,  1736, -1529,  1135,   526, -1529, -1529, 11155,
    1861,  2073, -1529, -1529, 11155,   472, -1529,  1740, -1529, -1529,
   11155,  8500, -1529, -1529,  8500, -1529, 10074, 10712, -1529, -1529,
   -1529, -1529, -1529,  8500,  8500, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529,  8500, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529,  8500,  8500, -1529, -1529,  1778,  1778,
    1778, -1529,  1781,   774, -1529,  1785,   832, -1529,  1778,  1778,
   -1529,  8500,  8500,  8500, -1529, -1529,  8500,  8500, -1529,  8500,
   -1529,  8500, -1529,  8500, -1529, -1529,  1745,  1753,  1151,  1761,
    1765,  1767, -1529,  8500,  8500,  1504,  1712, -1529,  2107,  2107,
    2107,  8500,  8500,  2111,  1740, 11155,  2085, -1529, 10097,  2113,
    2115, -1529,   484, -1529, -1529, 10711, -1529, -1529,  2117,  8500,
    2118,  2077,   -11,  8500, -1529, -1529, -1529, -1529, -1529, -1529,
    1774,  1775,  1786,  8500, -1529, -1529, -1529,   405,  2074, -1529,
    1771,  2126, -1529,   678, -1529,   678,   678,  8500, -1529,  2080,
   -1529,   488,  1789,  1794,  1795,  1776, -1529,   155, -1529,   155,
    1787,   493,  1723, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529,  1938,   155, -1529,  1798,   497,  1803,
    1897,   155,   511,  1805,  1989,  2012,  1810, 10120,  2113,  2085,
    2085, -1529,   527,   536,  2115,   585,    11, -1529, -1529, -1529,
     642, -1529, -1529, -1529, -1529,  2163, -1529, -1529,   611,  8500,
    8500, -1529, -1529,  1816, -1529,  8037, -1529,  8381,  1819, -1529,
   10143, 10166, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, 10203, 10226, 10251,  1778,  1778,  1778,  1778,  1778,
    1778,  1174, 10274,  2119,  1997,  1997,  1997,  1778,  1822,  1823,
    1828,  1778,  1826,  1835,  1842,  1778,  1997,  1997, 10297, 10320,
   10343, 10366, 10411,  8948, 10434, 10457, -1529, -1529, -1529, -1529,
   -1529,  7543,  -165, 11155,  1641,  1806, -1529,   648,   651,   655,
   11155, 11155,  2175, -1529,   730,  2179, -1529,   732, -1529,   736,
   -1529,  2196, -1529,   738, 10480,   787,  1851,  1852,  2052, -1529,
   10503,  1853,  1855,  1856, 10540,   610, -1529,  2043, -1529, -1529,
   10563, -1529,  2363, -1529, -1529, -1529, -1529,  2200,   789,   814,
     155, -1529, -1529,  2683,  3003,  3323,  3643,  3963,  4283,  2154,
     853,   155, -1529,   155,  1867,   855,   -14,  8500,  1868,  1871,
    1949, -1529,   858,   882,   884, -1529,  2205, -1529,   888, -1529,
     460,  2209,  2170,   601, -1529,   393, -1529, 11155, 11155,  2223,
    2224, -1529, 11155, -1529, 11155,  7918, -1529, -1529, -1529, -1529,
   -1529,  1997,  1997,  1997,  1997,  1997,  1997, -1529,  8500, -1529,
    2226,  2178,  1881,  1888,  1889,  1997, -1529,  1924,  1925,  1997,
   -1529,  1926,  1927,  1997,  1890,  1895, -1529, -1529, -1529, -1529,
   -1529,  8500, -1529, -1529, -1529,  2045,  8500, -1529,  2125,  1504,
   -1529,  2248, -1529, -1529,  8500, -1529,  2013,  2067,  2250, -1529,
    2255, -1529, -1529,  2254,  1208, -1529,  2256,  8500,  8500, -1529,
   -1529, -1529, -1529, -1529, -1529,  2208, -1529,  4603, -1529, -1529,
    4923, -1529,  1908, -1529, -1529,   905, -1529,  2194,  2148,  2129,
    2120,  2019, -1529, -1529,   910,   920,   155, -1529,    11, -1529,
   10588,  2113,  2115,   922,  2087, -1529, -1529, -1529, -1529, -1529,
    2268,   326,   296, -1529, -1529,  2259,  1920,   924,  1928,  1933,
    1939,  1940,  1965,  1968, 10611, -1529,  1937,  2277, -1529, -1529,
   -1529,  1971,  1778,  1967,  1973,  1974,  1778,  1976,  1977,  1978,
   -1529, -1529, 10634, -1529,  7543,   312,  2139,  1641, -1529, 11155,
   -1529,  2281, -1529, -1529,  1979, -1529, -1529,  1980, 10657, 10680,
   -1529,  5243, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529,  5563, -1529, -1529,   926, -1529,   931,   941, -1529,  2300,
   -1529,  2320,  2321,  1982,  1995,  8500,  2324, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529,  2328,   393,  2010, -1529,  1997,
   -1529, -1529, -1529,  1997, -1529, -1529, -1529, -1529, -1529,  2160,
    2168,  2085, -1529, -1529,  2021, -1529, -1529,  1248, -1529,  5883,
   -1529, -1529, -1529,  2191, -1529,   947, -1529, -1529,  2374,  2375,
   11155,  2362, -1529, -1529,  2381,  2031,  1778,  1778,  2032,  1778,
    1778,  2234,  2235,  2046,  2399, -1529, -1529, -1529,  2400,  2401,
    2399,  2056,  2057,  8500,   393, -1529,  1997,  1997, -1529,  1997,
    1997, -1529, -1529, -1529,   948,   952,  2060,   953,  2066,  2206,
   11155, -1529,  2058,  2068,  2072,  2076, -1529,  2404,  2417,  2399,
    2399, -1529,  2233,  2422, -1529, -1529, -1529, -1529,   379, -1529,
    2082,   957,   960,   397,  2433,   962, -1529, -1529,   -40,  2302,
     308,    -5,  2399, -1529, -1529,  2357,  2197, -1529,  2233, -1529,
   -1529,   328, -1529, -1529, -1529,   442,   445,   964,   397,   397,
    2289, -1529, -1529, -1529, -1529, -1529, -1529,   341, -1529, -1529,
   -1529,   360, -1529,  2219, -1529, -1529, -1529, -1529,   397,    62,
    2270,  2271,  2274,  2278,  2443,  2445, -1529, -1529
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1529,  2364,   -80, -1529, -1529, -1529, -1529,  -757, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1529, -1529, -1529, -1529,  1592,  2102, -1529,  -209,  -574,
    1087, -1529, -1270, -1529,   792, -1221, -1529, -1195, -1529,  -970,
   -1529,   860, -1162, -1529, -1529, -1249, -1529, -1529,  1992,  -252,
    -259,  1988,  -453,  1637, -1529, -1529,   571, -1529, -1529, -1529,
    1296,  1512,   358,   -43, -1529, -1529, -1529,  2360,  1900, -1529,
   -1529, -1027, -1529, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1123, -1529,  -755, -1529, -1529,   544,  2403,  2142, -1529,  1635,
   -1529,   737,  1896, -1529, -1529, -1529, -1529, -1529, -1529, -1529,
   -1529, -1012,  1223, -1529, -1529, -1529, -1529,    96, -1529, -1529,
   -1529,   768, -1529,   441, -1529,  1250,  1256, -1433, -1528, -1378,
   -1353, -1248, -1529,  -972,   349,    46,   202,  -779,  -398,  1695,
   -1040, -1529, -1529, -1529,  2358, -1529,  -297, -1529,  1703,  1109,
   -1017, -1529, -1529, -1529, -1529,  2005, -1529, -1529, -1529, -1529,
   -1529,  2189, -1529, -1529, -1199, -1529
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -635
static const yytype_int16 yytable[] =
{
     259,  1166,  1597,  1248,  1374,  1234,  1583,   473,   842,  1585,
    1178,  1179,  1242,   471,  1197,   562,  1004,  1005,   441,   265,
     706,   328,  1010,  1593,  1012,   775,   466,   968,   752,  -634,
      76,  1073,   707,  1073,   292,   293,   294,   295,   296,   297,
    -463,   110,  2059,   265,  -465,   826,  -464,   826,   948,   467,
    1732,  1740,  1269,  1263,  1372,  1383,  1384,   472,   464,  1687,
     340,   341,  1057,   978,   474,   834,  2090,  1058,   740,   582,
      44,   346,   347,   348,  1406,   288,   591,   350,   581,  1594,
     595,   579,   575,  1795,   579,   777,    47,  2065,  1609,   741,
     116,  1204,   142,   551,    84,  1080,  1083,  1082,    45,   765,
     827,   490,   827,  1059,  1169,    48,   552,  1035,  1635,  1636,
    1205,  1060,   979,   505,   302,   497,  1036,  1646,  1647,   749,
    1573,  1395,  1396,  1397,  1398,   826,   118,  1674,   442,   443,
     444,   445,   446,   447,   448,   778,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,  1738,   104,   809,  1061,    62,   107,   750,  1024,   111,
     961,   292,   293,   294,   295,   296,   297,  1170,  1688,  1574,
     303,    85,   980,   971,   491,  1673,    13,   112,   440,   576,
     827,  1399,    86,   274,   275,   708,  1741,   143,   498,   742,
    1796,   475,   113,  1144,   970,   329,  1264,   121,  1062,  1421,
    -634,  2060,   298,   276,   321,   848,   475,   734,  1385,  1074,
    1431,  1286,  1742,   949,   289,    46,   592,  1568,  1587,   114,
     592,  1432,    77,  1689,  2091,   553,  2066,   981,   117,  1575,
      13,  1063,   442,   443,   444,   445,   446,   447,   448,   861,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   329,  1590,   506,   828,   829,
     468,  1247,  1682,   554,   119,   601,    87,  1071,   776,   602,
     835,   836,   123,   608,   612,   614,   615,   616,   617,   618,
     619,   620,   621,   622,  1576,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     976,   640,   641,   642,   709,   644,   645,   646,   647,   648,
     649,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   841,  1926,  1287,   277,  1288,   667,   668,   298,
    1733,  1734,   672,   673,  1595,   122,  1064,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   969,
     982,   983,   701,   702,   703,   704,   705,   470,   986,   266,
     715,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   849,   299,  1373,   852,   259,  1356,
    -463,  1794,  1697,   266,  -465,  1664,  -464,  2048,   860,   125,
    1708,   127,  1709,  1702,  1761,  1762,  1763,  1764,  1765,  1766,
     124,  2072,  1018,  1019,  1020,  2055,  1775,   563,  1931,  1927,
    1779,  1400,  1401,  1402,  1783,   129,    99,   317,    64,  1413,
    2062,  1415,  1416,   493,  1593,   313,   309,   568,  1713,  2084,
    1773,  1774,   507,   508,   509,   510,   604,   605,   278,  1714,
     314,  1784,  1785,  1025,  1026,  1027,  1028,   499,  2086,  1215,
      13,  2049,  2073,  1216,  -331,  1859,   806,   564,   279,  1715,
    1403,   579,    65,   862,   441,  1863,   856,   857,  1933,  2049,
    1860,   815,  1853,  1716,   992,   993,  2063,   964,    66,   851,
    1594,   280,  1717,   494,   343,   344,  1107,  1108,   140,   838,
     100,   318,  1798,  1031,  1217,  1038,   495,  1218,  2074,   141,
    1236,  2078,  2085,  1243,   464,  1959,  2064,   500,   807,    73,
    1570,  1167,  1219,   281,  1173,   858,   859,    89,    67,  1601,
     501,  2087,  1718,   865,   513,   514,  1934,   126,  1720,   128,
    2050,   282,  1220,  1960,  1725,    68,   808,  1932,    69,   283,
    1221,  1252,  1602,  1408,  2051,    75,   565,    74,  2050,    82,
    1253,   284,  1409,   130,   101,   319,  1868,  1869,  1870,  1871,
    1872,  1873,  2051,    70,   310,   569,   886,   887,   324,   796,
    1881,  -331,  1366,   606,  1885,   801,  1180,   803,  1889,   442,
     443,   444,   445,   446,   447,   448,   816,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,  2075,   606,  1271,  2079,  1272,  1743,  1032,  1181,
    1039,   285,  2017,   488,  1958,  1237,   131,  1222,  1244,  1223,
    2076,   952,   953,  2080,   955,  1571,   489,   745,   475,   440,
    1057,  1183,   286,    81,  1184,  1058,  1185,  1224,    90,  1186,
    1419,  2041,  2042,  1825,    93,  2077,   832,   833,  2081,  1420,
     476,  1949,  1826,    91,  1187,  1953,    92,   711,   712,   132,
     713,  1188,  1189,   714,  2067,    94,  1983,   133,  2043,  1827,
      95,  1059,   134,  1835,  1830,    97,  1849,   462,   463,  1060,
      71,    98,   135,   131,  1844,   102,  1845,   287,   105,  1190,
    2068,  2069,   103,  1156,   106,   442,   443,   444,   445,   446,
     447,   448,  1993,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,  1017,  2088,
     477,   108,  1061,   144,  2021,  1963,   132,   461,   462,   463,
    -299,   291,  1145,   120,   263,  1076,  1077,   478,  1202,  1203,
    1192,  1153,  1206,  1207,  1985,  1208,  1209,   137,  1988,   264,
     479,  1210,  1209,   138,  1044,  2006,  2007,   262,  2009,  2010,
     272,  1045,  1193,  1231,  1232,  1084,  1062,  1085,  1639,  1640,
    1194,  1089,  1090,   304,  1091,   480,  1258,  1259,  1096,  1332,
    1333,  1335,  1336,  1428,  1232,  1097,  1098,  1099,  1100,   305,
    1101,  1102,  1103,   481,  1566,  1232,   306,  1104,  1105,  1911,
    1106,  2022,  2023,   308,  2024,  2025,  1109,  1110,  1111,  1924,
    1046,  1591,  1270,   307,  1047,  1921,  1606,  1607,   311,  1897,
    1119,  1120,  1121,   312,  1122,  1195,  1643,  1644,  1680,  1681,
     316,  1048,  1703,  1232,   320,  1133,  1261,  1711,  1232,   322,
    1049,  1722,  1232,   324,  1134,  1135,  1136,  1137,  1138,  1139,
    1140,  1141,  1589,  1142,   326,  1726,  1259,  1143,   330,   785,
     786,   787,   788,   331,   789,   332,  1149,   791,   792,   793,
    1050,  1735,  1736,   333,   797,   798,   799,   334,  1163,   802,
    1737,  1736,   335,  1969,   337,  1168,   442,   443,   444,   445,
     446,   447,   448,    76,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   918,   919,  1051,  1214,   336,  1357,  1739,
    1681,  1359,  1360,  1361,   442,   443,   444,   445,   446,   447,
     448,   338,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   443,   444,   445,
     446,   447,   448,   339,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,  1275,
     997,   998,  1279,  1001,  1002,  1003,  1744,  1270,  1284,  1006,
    1007,  1008,  1800,  1801,  1011,  1802,  1801,  1290,   345,  1803,
    1801,   352,  1296,  1297,   442,   443,   444,   445,   446,   447,
     448,   353,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   920,
     921,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   442,   443,   444,   445,   446,   447,   448,  1358,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,  1805,  1736,  1807,  1808,   354,  1375,
    1809,  1810,  1812,  1813,  1378,   442,   443,   444,   445,   446,
     447,   448,   355,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   442,   443,
     444,   445,   446,   447,   448,   356,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,  1815,  1816,  1833,  1232,   442,   443,   444,   445,   446,
     447,   448,   357,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,  1834,  1232,
    1577,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,   358,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,  1843,  1232,  1847,
    1232,  1610,  1854,  1808,  1611,   457,   458,   459,   460,   461,
     462,   463,   359,  1622,  1623,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   360,  1624,  1855,  1736,  1856,  1736,
     942,   943,  1858,  1810,  1631,  1632,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,  1905,  1906,  1915,
    1232,  1648,  1649,  1650,  1922,  1232,  1651,  1652,   361,  1653,
     362,  1654,   363,  1655,  1923,  1232,  1928,  1681,  1937,  1607,
    1972,  1232,   364,  1661,  1663,  1973,  1808,   469,  1293,  1294,
     365,  1670,  1671,   366,  1599,  1974,  1810,  1995,  1996,  1999,
    2000,   484,  2026,  2027,  2028,  2029,   486,  2031,  2027,  1684,
     487,  2053,  2027,  1690,  2054,  2027,  2057,  2058,  2082,  2027,
     972,   973,   367,  1694,  1161,  1162,  1668,  1669,   368,   369,
     442,   443,   444,   445,   446,   447,   448,  1700,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   370,   371,   372,   373,   492,  1323,  1324,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   496,
    1433,  1434,  1435,  1436,  1437,  1438,   383,  1439,   384,  1440,
     385,   502,   386,  1441,  1442,  1443,   387,  1444,   388,   389,
     390,  1445,  1446,  1447,  1448,  1449,   391,   392,   393,   394,
     395,   396,   397,   398,  1450,  1348,  1349,   399,   400,  1451,
    1452,   401,   402,  1453,   403,   404,   405,   406,  1454,  1455,
    1456,  1457,  1458,   407,   408,  1459,   409,  1460,  1461,  1462,
     410,   411,  1463,  1464,   412,  1465,  1466,  1467,   503,  1350,
    1351,  1468,   413,   414,   415,  1291,   416,   417,  1469,   418,
     419,   420,   421,  1470,   422,   423,   424,   425,  1471,  1472,
    1473,   504,  1352,  1353,   426,  1474,  1475,   427,  1476,  1477,
    1478,  1479,   428,   429,  1480,   430,  1481,  1482,  1483,  1484,
     431,  1485,   432,  1486,  1487,   433,  1488,   434,  1489,  1490,
    1600,  1491,  1492,  1493,  1494,   435,   436,   437,   438,   439,
    1495,   512,  1496,   515,  1497,  1498,   516,  1499,  1500,  1501,
    1502,  1503,  1504,   558,  1505,  1506,  1507,  1508,  1509,  1747,
    1748,   559,  1510,   560,  1511,  1752,  1512,  1754,  1767,  1768,
     561,   567,   570,   572,   573,  1513,   583,  1514,  1515,  1516,
    1517,  1518,  1519,  1520,   578,   584,  1521,  1522,   585,   586,
     587,   588,  1523,   589,  1524,  1525,  1526,   590,  1527,   594,
    1528,   597,  1529,  1530,  1531,  1532,   623,   639,   643,   662,
     663,   664,   665,   666,   669,   670,   671,   674,   710,  1533,
    1534,  1535,   675,   676,   699,   733,   735,   737,   739,  1536,
     744,  1537,  1538,  1539,   746,   753,   754,   756,  1540,   757,
    1541,  1542,  1543,   758,   759,  1544,   760,   761,   762,  1545,
    1546,   763,  1547,  1548,  1549,  1550,   764,   766,   767,  1551,
     768,   769,   442,   443,   444,   445,   446,   447,   448,   770,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   771,   772,  1850,   773,   774,
     779,   794,   781,   782,   783,   790,   800,   804,   805,   810,
    1552,  1553,  1554,  1555,  1556,   811,   812,   813,   817,   814,
     818,   819,   821,   820,  1292,  1284,   822,   823,   824,   825,
     839,   442,   443,   444,   445,   446,   447,   448,  1874,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   844,   846,   854,    13,   901,   915,
     916,  1892,   917,   922,   923,   924,  1894,   954,  1557,  1558,
    1559,  1560,  1561,  1562,  1899,   -55,  1433,  1434,  1435,  1436,
    1437,  1438,   957,  1439,   958,  1440,   959,  1908,  1909,  1441,
    1442,  1443,   962,  1444,   975,   963,   965,  1445,  1446,  1447,
    1448,  1449,   984,   987,   988,   966,   967,   974,   977,   989,
    1450,   990,   991,   994,   999,  1451,  1452,  1013,  1014,  1453,
    1015,  1016,  1021,  1033,  1454,  1455,  1456,  1457,  1458,  1023,
    1034,  1459,  1037,  1460,  1461,  1462,  1040,  1041,  1463,  1464,
    1042,  1465,  1466,  1467,  1043,  1056,  1068,  1468,  1069,  1078,
    1072,  1073,  1088,  1093,  1469,  1112,  1113,  1114,  1115,  1470,
    1116,  1117,  1118,  1123,  1471,  1472,  1473,  1124,  1125,  1127,
    1126,  1474,  1475,  1129,  1476,  1477,  1478,  1479,  1128,  1130,
    1480,  1131,  1712,  1482,  1483,  1484,  1132,  1485,  1154,  1486,
    1487,   -57,  1488,  1157,  1489,  1490,  1159,  1491,  1492,  1493,
    1494,  1164,  1165,  1175,  1174,  1980,  1495,  1176,  1496,  1177,
    1497,  1498,  1198,  1499,  1500,  1501,  1502,  1503,  1504,  1199,
    1505,  1506,  1507,  1508,  1509,  1200,  1201,  1211,  1510,  1212,
    1511,  1213,  1512,  1235,  1238,  1226,  1233,  1227,  1228,  1240,
    1229,  1513,  1241,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
    1245,  1246,  1521,  1522,  1230,  1249,  1250,  1260,  1523,  1262,
    1524,  1525,  1526,  1254,  1527,  1251,  1528,  1255,  1529,  1530,
    1531,  1532,  1256,  2020,  1257,  1265,  1266,  1267,  1268,  1270,
    1276,  1280,  1281,  1282,  1298,  1533,  1534,  1535,  1363,  1364,
    1299,  1311,  1312,  1316,  1354,  1536,  1317,  1537,  1538,  1539,
    1367,  1371,  1381,  1387,  1540,  1318,  1541,  1542,  1543,  1386,
    1391,  1544,  1392,  1407,  1319,  1545,  1546,   853,  1547,  1548,
    1549,  1550,  1320,  1321,  1394,  1551,   442,   443,   444,   445,
     446,   447,   448,  1322,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,  1404,
    1331,  1334,  1337,  1405,  1355,  1362,  1368,  1369,  1370,  1410,
    1411,  1376,  1379,  1380,  1388,  1412,  1552,  1553,  1554,  1555,
    1556,   444,   445,   446,   447,   448,   866,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,  1389,  1390,  1393,  1414,  1433,  1434,  1435,  1436,
    1437,  1438,  1417,  1439,  1422,  1440,  1423,  1424,  1425,  1441,
    1442,  1443,  1426,  1444,  1427,  1430,  1429,  1445,  1446,  1447,
    1448,  1449,  1564,  1565,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,  1567,  1569,  1578,  1579,  1451,  1452,  1580,  1581,  1453,
    1584,  1598,  1604,  1605,  1454,  1455,  1456,  1457,  1458,  1656,
    1633,  1459,  1638,  1460,  1461,  1462,  1642,  1657,  1463,  1464,
    1666,  1465,  1466,  1467,  1672,  1658,  1676,  1468,  1678,  1659,
    1686,  1660,  1683,  1685,  1469,  1698,  1696,  1691,  1692,  1470,
    1699,  1707,  1701,  1719,  1471,  1472,  1473,  1724,  1728,  1693,
    1710,  1474,  1475,  1704,  1476,  1477,  1478,  1479,  1705,  1706,
    1480,  1721,  1828,  1482,  1483,  1484,  1723,  1485,  1727,  1486,
    1487,  1729,  1488,  1730,  1489,  1490,  1745,  1491,  1492,  1493,
    1494,  1749,  1755,  1771,  1770,  1776,  1495,  1777,  1496,  1780,
    1497,  1498,  1778,  1499,  1500,  1501,  1502,  1503,  1504,  1781,
    1505,  1506,  1507,  1508,  1509,  1804,  1782,  1806,  1510,  1811,
    1511,  1819,  1512,  1832,  1817,  1818,  1842,  1821,  1857,  1822,
    1823,  1513,  1861,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
    1846,  1851,  1521,  1522,  1852,  1862,  1864,  1865,  1523,  1875,
    1524,  1525,  1526,  1877,  1527,  1878,  1528,  1893,  1529,  1530,
    1531,  1532,  1879,  1880,  1890,  1883,  1884,  1887,  1888,  1891,
    1895,  1898,  1901,  1902,  1900,  1533,  1534,  1535,  1903,  1904,
    1910,  1907,  1914,  1916,  1917,  1536,  1920,  1537,  1538,  1539,
    1918,  1919,  1929,  1930,  1540,  1936,  1541,  1542,  1543,  1935,
    1946,  1544,  1938,  1961,  1964,  1545,  1546,  1939,  1547,  1548,
    1549,  1550,  1945,  1940,  1941,  1551,   442,   443,   444,   445,
     446,   447,   448,  1975,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,  1942,
    1950,   867,  1943,  1976,  1977,  1948,  1951,  1981,  1952,  1954,
    1955,  1982,  1956,  1965,  1966,  1978,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,  1979,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,  1991,  1984,  1433,  1434,  1435,  1436,
    1437,  1438,  1992,  1439,  1994,  1440,  1998,  2001,  2002,  1441,
    1442,  1443,  2003,  1444,  2004,  2005,  2008,  1445,  1446,  1447,
    1448,  1449,  2011,  2012,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,  1736,  2013,  2015,  2016,  1451,  1452,  2039,  2033,  1453,
    2018,  2019,  2034,  2030,  1454,  1455,  1456,  1457,  1458,  2032,
    2040,  1459,  2035,  1460,  1461,  1462,  2036,  2047,  1463,  1464,
    2037,  1465,  1466,  1467,  2044,  2052,  2056,  1468,  2061,  2059,
    2070,  2083,  2089,  2094,  1469,  2092,  2093,  2095,  2096,  1470,
    2097,   273,   603,  1665,  1471,  1472,  1473,  1799,  1746,  1095,
     736,  1474,  1475,   748,  1476,  1477,  1478,  1479,  1055,  1377,
    1480,   327,  1831,  1482,  1483,  1484,  1158,  1485,   139,  1486,
    1487,   596,  1488,   843,  1489,  1490,  1081,  1491,  1492,  1493,
    1494,   850,  1867,  1592,  1848,  1009,  1495,  1572,  1496,  2071,
    1497,  1498,   342,  1499,  1500,  1501,  1502,  1503,  1504,   571,
    1505,  1506,  1507,  1508,  1509,  1588,  1695,  1022,  1510,   780,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,   899,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   900,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1836,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   875,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   700,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1837,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   876,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   863,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1838,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   877,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   869,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1839,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   878,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   870,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1840,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   880,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   871,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1841,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   881,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   872,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1912,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   882,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   873,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1913,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   888,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   874,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1970,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   890,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,   879,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1971,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   895,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,     0,   442,   443,   444,   445,   446,   447,   448,     0,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   883,  1433,  1434,  1435,  1436,
    1437,  1438,     0,  1439,     0,  1440,     0,     0,     0,  1441,
    1442,  1443,     0,  1444,     0,     0,     0,  1445,  1446,  1447,
    1448,  1449,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
    1450,     0,     0,     0,     0,  1451,  1452,     0,     0,  1453,
       0,     0,     0,     0,  1454,  1455,  1456,  1457,  1458,     0,
       0,  1459,     0,  1460,  1461,  1462,     0,     0,  1463,  1464,
       0,  1465,  1466,  1467,     0,     0,     0,  1468,     0,     0,
       0,     0,     0,     0,  1469,     0,     0,     0,     0,  1470,
       0,     0,     0,     0,  1471,  1472,  1473,     0,     0,     0,
       0,  1474,  1475,     0,  1476,  1477,  1478,  1479,     0,     0,
    1480,     0,  1997,  1482,  1483,  1484,     0,  1485,     0,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,  1492,  1493,
    1494,     0,     0,     0,     0,     0,  1495,     0,  1496,     0,
    1497,  1498,     0,  1499,  1500,  1501,  1502,  1503,  1504,     0,
    1505,  1506,  1507,  1508,  1509,     0,     0,     0,  1510,     0,
    1511,     0,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
       0,     0,  1521,  1522,     0,     0,     0,     0,  1523,     0,
    1524,  1525,  1526,     0,  1527,     0,  1528,     0,  1529,  1530,
    1531,  1532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,  1536,     0,  1537,  1538,  1539,
       0,     0,     0,     0,  1540,     0,  1541,  1542,  1543,     0,
       0,  1544,     0,     0,     0,  1545,  1546,     0,  1547,  1548,
    1549,  1550,     0,     0,     0,  1551,   145,   146,   147,   148,
     149,   150,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   153,   154,
       0,   896,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,  1552,  1553,  1554,  1555,
    1556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   897,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,     0,     0,   161,     0,
       0,     0,     0,     0,  1557,  1558,  1559,  1560,  1561,  1562,
     442,   443,   444,   445,   446,   447,   448,     0,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,     0,   162,   442,   443,   444,   445,   446,
     447,   448,     0,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   443,   444,
     445,   446,   447,   448,   163,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,   165,
     166,     0,     0,     0,   167,   442,   443,   444,   445,   446,
     447,   448,     0,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,     0,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,     0,     0,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,   254,   255,   256,   257,
     145,   146,   147,   148,   149,   150,   258,     0,     0,     0,
       0,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   153,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,     0,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,     0,     0,     0,   442,   443,
     444,   445,   446,   447,   448,   898,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,     0,   442,   443,   444,   445,   446,   447,   448,
     910,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,     0,
       0,     0,     0,   610,     0,     0,     0,     0,     0,     0,
       0,     0,   911,     0,     0,     0,     0,     0,   163,     0,
       0,   145,   146,   147,   148,   149,   150,     0,     0,     0,
       0,     0,     0,     0,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   716,     0,   717,     0,  1092,
     912,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   611,     0,     0,     0,     0,     0,
       0,     0,   156,     0,     0,     0,     0,   157,     0,     0,
     158,   159,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,     0,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   163,
     254,   255,   256,   257,     0,     0,     0,     0,     0,     0,
     258,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,   914,     0,
       0,     0,     0,   718,   442,   443,   444,   445,   446,   447,
     448,     0,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   925,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
       0,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     0,
       0,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,   254,   255,   256,   257,   145,   146,   147,   148,   149,
     150,   719,     0,     0,     0,     0,     0,     0,     0,   151,
     152,     0,     0,     0,     0,     0,     0,   153,   442,   443,
     444,   445,   446,   447,   448,     0,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   445,   446,   447,   448,
       0,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,   442,   443,   444,
     445,   446,   447,   448,     0,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
       0,     0,     0,     0,   145,   146,   147,   148,   149,   150,
       0,     0,     0,     0,     0,     0,     0,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   153,   650,   442,   443,
     444,   445,   446,   447,   448,     0,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,     0,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,     0,
     157,     0,     0,   158,   159,     0,     0,     0,     0,     0,
       0,     0,   442,   443,   444,   445,   446,   447,   448,   934,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   442,   443,   444,   445,   446,
     447,   448,     0,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   349,     0,
       0,     0,     0,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   163,   206,     0,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     0,     0,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,   254,   255,   256,   257,     0,
       0,  -635,  -635,  -635,  -635,   258,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,   884,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,     0,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   935,     0,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,   254,   255,   256,   257,   145,   146,
     147,   148,   149,   150,   258,     0,     0,     0,     0,     0,
       0,     0,   151,   152,     0,     0,     0,     0,     0,     0,
     153,     0,     0,   936,   442,   443,   444,   445,   446,   447,
     448,     0,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,   157,     0,     0,   158,   159,     0,
     442,   443,   444,   445,   446,   447,   448,   937,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
     938,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   864,   145,   146,   147,
     148,   149,   150,     0,  1593,     0,     0,     0,     0,     0,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   153,
     442,   443,   444,   445,   446,   447,   448,     0,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,     0,     0,     0,   163,     0,     0,  1086,
       0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
    1594,     0,     0,   157,     0,     0,   158,   159,   442,   443,
     444,   445,   446,   447,   448,     0,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,  1278,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,     0,
     855,     0,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   163,   206,     0,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,     0,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,     0,   254,   255,
     256,   257,     0,     0,     0,     0,     0,     0,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,     0,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,     0,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,   254,   255,   256,
     257,   145,   146,   147,   148,   149,   150,   258,     0,     0,
       0,     0,     0,     0,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   153,     0,   939,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,     0,     0,     0,     0,   157,     0,     0,
     158,   159,     0,   940,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1283,     0,   941,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   146,   147,   148,   149,   150,     0,     0,     0,     0,
       0,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   153,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,     0,  1751,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,  1087,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   163,   206,
       0,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     0,
       0,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,   254,   255,   256,   257,     0,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,     0,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
     254,   255,   256,   257,   145,   146,   147,   148,   149,   150,
     258,     0,     0,     0,     0,     0,     0,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   153,     0,   947,     0,
     442,   443,   444,   445,   446,   447,   448,     0,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,     0,
     157,     0,     0,   158,   159,     0,  1303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1753,
       0,  1304,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,   146,   147,   148,   149,   150,  1289,
       0,     0,     0,     0,     0,     0,     0,   151,   152,     0,
       0,     0,     0,     0,     0,   153,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   442,   443,   444,   445,   446,   447,
     448,     0,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,     0,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   163,   206,     0,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     0,     0,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,   254,   255,   256,   257,     0,     0,
       0,     0,     0,     0,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,     0,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,     0,     0,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,     0,   254,   255,   256,   257,     0,     0,     0,
       0,     0,     0,   258,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,   443,   444,   445,   446,   447,
     448,  1315,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,     0,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
       0,     0,   442,   443,   444,   445,   446,   447,   448,  1325,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   442,   443,   444,   445,   446,
     447,   448,  1341,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   442,   443,
     444,   445,   446,   447,   448,     0,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,     0,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,     0,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,     0,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   442,   443,   444,   445,   446,   447,   448,     0,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   442,   443,   444,   445,   446,
     447,   448,     0,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,   443,   444,   445,   446,   447,   448,  1342,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   442,   443,   444,   445,   446,
     447,   448,  1343,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
     442,   443,   444,   445,   446,   447,   448,  1346,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
    1347,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,  1791,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,     0,     0,     0,   885,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,   443,   444,   445,   446,   447,   448,   889,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,   891,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,   892,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,   893,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
     902,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,   903,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   442,
     443,   444,   445,   446,   447,   448,   904,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   442,   443,   444,   445,   446,   447,   448,   905,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
     443,   444,   445,   446,   447,   448,   906,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   442,   443,   444,   445,   446,   447,   448,   907,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,   442,   443,   444,
     445,   446,   447,   448,   908,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,   909,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
     913,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,     0,     0,     0,   926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,   443,   444,   445,   446,   447,   448,   927,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,   928,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,   929,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,   930,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
     931,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,   932,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   442,
     443,   444,   445,   446,   447,   448,   933,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,   443,   444,   445,
     446,   447,   448,   944,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   442,
     443,   444,   445,   446,   447,   448,   945,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,     0,     0,   442,   443,   444,   445,   446,   447,
     448,   946,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,  1295,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,  1300,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
    1301,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,     0,     0,     0,  1302,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,   443,   444,   445,   446,   447,   448,  1305,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,  1306,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,  1307,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,  1308,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
    1309,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,  1310,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   442,   443,   444,   445,   446,   447,   448,
    1313,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,  1314,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,   442,   443,   444,   445,   446,   447,   448,  1326,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,  1327,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,  1340,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,  1344,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
    1345,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,     0,
       0,     0,     0,     0,     0,  1418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,   443,   444,   445,   446,   447,   448,  1612,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,  1675,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,  1731,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,  1756,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
    1757,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,   443,   444,   445,   446,   447,   448,  1758,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   442,   443,   444,   445,   446,   447,   448,
    1759,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,   442,   443,
     444,   445,   446,   447,   448,  1760,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   442,   443,   444,   445,   446,   447,   448,  1769,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   442,   443,   444,   445,   446,   447,
     448,  1786,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   442,   443,   444,
     445,   446,   447,   448,  1787,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     442,   443,   444,   445,   446,   447,   448,  1788,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,    49,     0,     0,     0,     0,     0,     0,
    1789,     0,   442,   443,   444,   445,   446,   447,   448,  1181,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,     0,     0,  1182,     0,     0,
       0,  1183,     0,     0,  1184,     0,  1185,     0,     0,  1186,
       0,     0,     0,     0,     0,  1790,     0,     0,     0,     0,
       0,     0,     0,     0,  1187,     0,     0,     0,     0,     0,
       0,  1188,  1189,    50,     0,     0,     0,     0,  1792,     1,
      51,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,  1613,  1614,     0,     0,     0,  1615,     0,  1616,  1190,
       0,  1793,     0,     0,     0,     3,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,  1191,    52,     0,     0,
       0,     0,     0,     5,  1814,     0,     0,     0,     0,     0,
       0,  1617,  1618,    53,  1619,     0,     0,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,  1820,     0,     0,
    1192,     0,     0,     0,     0,     0,   517,   518,     0,   519,
       0,   520,   521,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1193,    54,     0,     0,     0,   522,     0,     0,
    1194,     0,     0,     0,  1824,     0,     0,     8,     0,     0,
      55,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,   523,   524,   525,   526,     0,  1829,     0,     0,
       0,   527,    57,    58,     0,     0,     0,     0,     0,     0,
     528,     0,     0,     0,     0,     0,     0,    59,     0,     9,
       0,    10,  1925,     0,     0,  1195,     0,     0,     0,    11,
     529,     0,     0,     0,     0,     0,     0,     0,   530,     0,
       0,  1620,  1621,     0,     0,  1944,   531,     0,    12,    13,
       0,     0,     0,   532,     0,     0,   533,     0,     0,   534,
     535,     0,     0,    14,     0,     0,    15,     0,  1957,     0,
       0,     0,     0,     0,    16,     0,   536,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1967,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   537,   538,     0,     0,   539,
     540,     0,     0,     0,  1968,   541,     0,   542,     0,     0,
       0,     0,   543,   544,     0,    60,     0,     0,   545,   546,
       0,     0,     0,     0,     0,   547,   441,   548,     0,     0,
       0,     0,   549,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,     0,     0,     0,   442,
     443,   444,   445,   446,   447,   448,   464,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,     0,     0,     0,   442,   443,   444,   445,   446,
     447,   448,   894,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,     0,
     442,   443,   444,   445,   446,   447,   448,   956,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,     0,     0,   442,   443,   444,   445,   446,
     447,   448,  1148,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463
};

static const yytype_int16 yycheck[] =
{
      80,   971,  1272,  1043,  1166,  1032,  1255,   266,   582,  1257,
     982,   983,  1039,   265,   986,   312,   795,   796,     3,     3,
       6,   121,   801,    41,   803,     5,   121,    20,   481,    43,
       8,   177,    18,   177,     3,     4,     5,     6,     7,     8,
       3,     3,    82,     3,     3,   139,     3,   139,     6,   144,
    1578,    40,  1064,    79,    20,  1178,  1179,   266,    43,    70,
     140,   141,    79,    70,   213,     4,     4,    84,   118,   328,
     197,   151,   152,   153,  1197,    47,   213,   157,   238,    97,
     213,   245,   121,   248,   245,     5,   225,    92,  1287,   139,
       3,   232,     3,     3,     3,   850,   853,   852,   225,   497,
     194,     3,   194,   120,   175,     3,    16,    43,  1329,  1330,
     251,   128,   119,    18,   124,     3,    52,  1338,  1339,   155,
      70,     4,     5,     6,     7,   139,     3,  1376,    10,    11,
      12,    13,    14,    15,    16,    55,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1584,    56,   551,   171,     3,    60,   193,     3,   121,
     734,     3,     4,     5,     6,     7,     8,   238,   179,   119,
     180,    80,   179,   747,    76,  1374,   214,   139,   258,   218,
     194,    64,     0,    46,    47,   171,   175,    98,    76,   239,
     355,   355,   154,   950,   355,   355,   222,     3,   215,  1226,
     214,   241,   171,    66,   108,   243,   355,   466,  1180,   355,
    1237,   355,   201,   171,   186,   342,   353,  1244,  1258,   181,
     353,  1238,   200,   234,   162,   135,   231,   234,   141,   179,
     214,   248,    10,    11,    12,    13,    14,    15,    16,   121,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   355,  1268,   162,   352,   353,
     355,   353,  1385,   173,   141,   345,   351,   841,   248,   349,
     209,   210,     3,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   234,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     753,   381,   382,   383,   290,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   581,  1851,  1079,   188,  1081,   407,   408,   171,
    1579,  1580,   412,   413,   352,   141,   353,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   352,
     758,   759,   442,   443,   444,   445,   446,   352,   766,   353,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   593,   354,   352,   596,   468,  1146,
     353,  1661,  1409,   353,   353,  1365,   353,    18,   607,     3,
    1427,     3,  1429,  1420,  1625,  1626,  1627,  1628,  1629,  1630,
     141,    83,   810,   811,   812,    18,  1637,    92,    92,  1852,
    1641,   304,   305,   306,  1645,     3,     3,     3,    80,  1208,
     122,  1210,  1211,     3,    41,    36,     3,     3,  1455,    98,
    1635,  1636,   347,   348,   349,   350,   109,   110,    85,  1466,
      51,  1646,  1647,   298,   299,   300,   301,     3,    98,    54,
     214,    82,   134,    58,   238,     5,    18,   142,   105,  1486,
     353,   245,   124,   355,     3,  1745,   109,   110,   182,    82,
      20,   238,  1730,  1500,   781,   782,   178,   739,   140,   243,
      97,    35,  1509,    63,   352,   353,   894,   895,     9,   579,
      77,    77,  1664,   238,    99,   238,    76,   102,    66,    20,
     238,    66,   171,   238,    43,   203,   208,    63,    70,   225,
     238,   974,   117,    67,   977,   605,   606,     3,   180,     3,
      76,   171,  1549,   613,   354,   355,   240,   141,  1565,   141,
     161,    85,   137,   231,  1571,   197,    98,   221,   200,    93,
     145,   140,    26,    43,   175,    11,   231,   225,   161,    15,
     149,   105,    52,   141,   141,   141,  1761,  1762,  1763,  1764,
    1765,  1766,   175,   225,   141,   141,   354,   355,   352,   533,
    1775,   355,  1156,   246,  1779,   539,   984,   541,  1783,    10,
      11,    12,    13,    14,    15,    16,   353,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   170,   246,     3,   170,     5,  1589,   353,    18,
     353,   165,  2000,    63,  1894,   353,    88,   222,   353,   224,
     188,   711,   712,   188,   714,   353,    76,   354,   355,   719,
      79,    40,   186,   225,    43,    84,    45,   242,     3,    48,
      43,  2029,  2030,    43,   353,   213,   354,   355,   213,    52,
      68,  1882,    52,     3,    63,  1886,     3,    13,    14,   131,
      16,    70,    71,    19,  2052,   194,  1946,   139,  2031,  1696,
     141,   120,   144,  1710,  1701,     3,  1726,    31,    32,   128,
     342,     3,   154,    88,  1721,     3,  1723,   241,   219,    98,
    2053,  2054,     3,   962,   140,    10,    11,    12,    13,    14,
      15,    16,  1961,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   808,  2082,
     138,   225,   171,   355,  2004,  1897,   131,    30,    31,    32,
     148,   352,   951,     3,   139,   354,   355,   155,   354,   355,
     149,   960,    74,    75,  1949,   354,   355,     3,  1953,   154,
     168,   354,   355,     3,    63,  1986,  1987,     3,  1989,  1990,
       3,    70,   171,   354,   355,   855,   215,   857,     4,     5,
     179,   861,   862,   252,   864,   193,   354,   355,   868,   354,
     355,   354,   355,   354,   355,   875,   876,   877,   878,     3,
     880,   881,   882,   211,   354,   355,    43,   887,   888,  1826,
     890,  2006,  2007,   175,  2009,  2010,   896,   897,   898,  1846,
     119,   354,   355,   353,   123,  1842,   354,   355,   252,  1799,
     910,   911,   912,   353,   914,   234,     4,     5,   354,   355,
       3,   140,   354,   355,     3,   925,  1055,   354,   355,   353,
     149,   354,   355,   352,   934,   935,   936,   937,   938,   939,
     940,   941,  1260,   943,     3,   354,   355,   947,   252,   520,
     521,   522,   523,   252,   525,   252,   956,   528,   529,   530,
     179,   354,   355,   252,   535,   536,   537,   252,   968,   540,
     354,   355,   252,  1910,     3,   975,    10,    11,    12,    13,
      14,    15,    16,     8,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   354,   355,   234,  1016,   252,  1147,   354,
     355,  1150,  1151,  1152,    10,    11,    12,    13,    14,    15,
      16,   218,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,  1069,
     788,   789,  1072,   791,   792,   793,   354,   355,  1078,   797,
     798,   799,   354,   355,   802,   354,   355,  1087,     9,   354,
     355,   353,  1092,  1093,    10,    11,    12,    13,    14,    15,
      16,   353,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   354,
     355,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,  1148,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   354,   355,   354,   355,   353,  1169,
     354,   355,   354,   355,  1174,    10,    11,    12,    13,    14,
      15,    16,   353,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   353,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   354,   355,   354,   355,    10,    11,    12,    13,    14,
      15,    16,   353,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   354,   355,
    1250,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   353,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   354,   355,   354,
     355,  1291,   354,   355,  1294,    26,    27,    28,    29,    30,
      31,    32,   353,  1303,  1304,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   353,  1315,   354,   355,   354,   355,
     354,   355,   354,   355,  1324,  1325,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    49,    50,   354,
     355,  1341,  1342,  1343,   354,   355,  1346,  1347,   353,  1349,
     353,  1351,   353,  1353,   354,   355,   354,   355,   354,   355,
     354,   355,   353,  1363,  1364,   354,   355,   355,   354,   355,
     353,  1371,  1372,   353,   159,   354,   355,    49,    50,   352,
     353,    43,   354,   355,   352,   353,    45,   354,   355,  1389,
      45,   354,   355,  1393,   354,   355,   354,   355,   354,   355,
     749,   750,   353,  1403,   966,   967,  1369,  1370,   353,   353,
      10,    11,    12,    13,    14,    15,    16,  1417,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   353,   353,   353,   353,    63,   354,   355,
     353,   353,   353,   353,   353,   353,   353,   353,   353,    63,
       3,     4,     5,     6,     7,     8,   353,    10,   353,    12,
     353,    63,   353,    16,    17,    18,   353,    20,   353,   353,
     353,    24,    25,    26,    27,    28,   353,   353,   353,   353,
     353,   353,   353,   353,    37,   354,   355,   353,   353,    42,
      43,   353,   353,    46,   353,   353,   353,   353,    51,    52,
      53,    54,    55,   353,   353,    58,   353,    60,    61,    62,
     353,   353,    65,    66,   353,    68,    69,    70,   248,   354,
     355,    74,   353,   353,   353,   125,   353,   353,    81,   353,
     353,   353,   353,    86,   353,   353,   353,   353,    91,    92,
      93,   218,   354,   355,   353,    98,    99,   353,   101,   102,
     103,   104,   353,   353,   107,   353,   109,   110,   111,   112,
     353,   114,   353,   116,   117,   353,   119,   353,   121,   122,
     355,   124,   125,   126,   127,   353,   353,   353,   353,   353,
     133,     3,   135,     3,   137,   138,     3,   140,   141,   142,
     143,   144,   145,     3,   147,   148,   149,   150,   151,  1599,
    1600,   175,   155,   252,   157,  1605,   159,  1607,   354,   355,
       3,   175,   252,     3,     3,   168,     3,   170,   171,   172,
     173,   174,   175,   176,    26,     3,   179,   180,     3,     3,
       3,     3,   185,     3,   187,   188,   189,     3,   191,     3,
     193,     3,   195,   196,   197,   198,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,     5,   353,   212,
     213,   214,   354,   354,   354,     3,     3,     3,     3,   222,
     354,   224,   225,   226,     3,   148,   174,     3,   231,     3,
     233,   234,   235,     3,     3,   238,     3,     3,     3,   242,
     243,     3,   245,   246,   247,   248,     3,     3,   218,   252,
       3,     3,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     5,     3,  1727,   350,     5,
       5,    56,   353,   353,   353,   353,   353,   353,   353,     3,
     293,   294,   295,   296,   297,     3,     3,   354,     3,   355,
       3,   175,   175,   354,   354,  1755,     3,   175,   252,     3,
     176,    10,    11,    12,    13,    14,    15,    16,  1768,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     3,     3,   354,   214,   354,   321,
     321,  1791,   321,   354,   321,   321,  1796,   353,   351,   352,
     353,   354,   355,   356,  1804,   214,     3,     4,     5,     6,
       7,     8,   353,    10,   353,    12,   353,  1817,  1818,    16,
      17,    18,   121,    20,   175,   355,   149,    24,    25,    26,
      27,    28,     3,     3,   218,   149,   149,   148,   148,   218,
      37,     5,     5,     5,     4,    42,    43,     5,     5,    46,
     171,   353,   191,   175,    51,    52,    53,    54,    55,   240,
       3,    58,     3,    60,    61,    62,     3,     3,    65,    66,
     175,    68,    69,    70,     3,     3,    55,    74,   157,   353,
      20,   177,   354,   146,    81,     4,   321,   321,   321,    86,
     321,   321,   321,   353,    91,    92,    93,   353,   353,     5,
     321,    98,    99,     5,   101,   102,   103,   104,   321,   321,
     107,   353,   109,   110,   111,   112,   353,   114,   126,   116,
     117,   214,   119,     3,   121,   122,   125,   124,   125,   126,
     127,     3,     3,   149,   353,  1935,   133,   149,   135,   353,
     137,   138,     3,   140,   141,   142,   143,   144,   145,     3,
     147,   148,   149,   150,   151,   354,   354,   354,   155,   354,
     157,    70,   159,     3,    52,   353,   240,   353,   353,   125,
     353,   168,   240,   170,   171,   172,   173,   174,   175,   176,
     175,     3,   179,   180,   353,     3,   353,     3,   185,     4,
     187,   188,   189,   353,   191,   149,   193,   353,   195,   196,
     197,   198,   149,  2003,   353,     6,     4,     4,   353,   355,
     190,   149,     3,     3,   354,   212,   213,   214,    55,   133,
     354,   354,   354,   354,   354,   222,   353,   224,   225,   226,
     148,    20,     3,     3,   231,   353,   233,   234,   235,   171,
      44,   238,     3,   191,   353,   242,   243,   355,   245,   246,
     247,   248,   353,   353,     4,   252,    10,    11,    12,    13,
      14,    15,    16,   353,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   149,
     353,   353,   353,   149,   354,   354,   353,   353,   353,     5,
     213,   353,   353,   353,   353,     4,   293,   294,   295,   296,
     297,    12,    13,    14,    15,    16,   355,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   353,   353,   353,     4,     3,     4,     5,     6,
       7,     8,   353,    10,     3,    12,     3,     3,     3,    16,
      17,    18,     3,    20,   353,   240,   353,    24,    25,    26,
      27,    28,   103,   353,   351,   352,   353,   354,   355,   356,
      37,   240,     3,   353,   353,    42,    43,   353,     3,    46,
     353,   355,   231,    20,    51,    52,    53,    54,    55,   354,
     322,    58,   321,    60,    61,    62,   321,   354,    65,    66,
       3,    68,    69,    70,     3,   354,     3,    74,     3,   354,
      43,   354,     5,     5,    81,   354,    52,   353,   353,    86,
       4,   355,    52,   195,    91,    92,    93,   240,   149,   353,
     353,    98,    99,   354,   101,   102,   103,   104,   354,   354,
     107,   353,   109,   110,   111,   112,   353,   114,   353,   116,
     117,   149,   119,   353,   121,   122,     3,   124,   125,   126,
     127,   355,   353,   176,    55,   353,   133,   354,   135,   353,
     137,   138,   354,   140,   141,   142,   143,   144,   145,   354,
     147,   148,   149,   150,   151,    20,   354,    18,   155,     3,
     157,   149,   159,     3,   353,   353,    52,   354,     3,   354,
     354,   168,     3,   170,   171,   172,   173,   174,   175,   176,
     353,   353,   179,   180,   353,    55,     3,     3,   185,     3,
     187,   188,   189,    55,   191,   354,   193,   192,   195,   196,
     197,   198,   354,   354,   354,   321,   321,   321,   321,   354,
     125,     3,   185,     3,   241,   212,   213,   214,     3,     5,
      52,     5,   354,    69,   116,   222,   247,   224,   225,   226,
     141,   151,   185,     5,   231,   355,   233,   234,   235,    20,
       3,   238,   354,   144,     3,   242,   243,   354,   245,   246,
     247,   248,   355,   354,   354,   252,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   354,
     353,   355,   354,     3,     3,   354,   353,     3,   354,   353,
     353,     3,   354,   354,   354,   353,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,   353,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   204,   355,     3,     4,     5,     6,
       7,     8,   204,    10,   353,    12,   185,     3,     3,    16,
      17,    18,    20,    20,     3,   354,   354,    24,    25,    26,
      27,    28,   158,   158,   351,   352,   353,   354,   355,   356,
      37,   355,     3,     3,     3,    42,    43,     3,   202,    46,
     354,   354,   354,   353,    51,    52,    53,    54,    55,   353,
       3,    58,   354,    60,    61,    62,   354,     5,    65,    66,
     354,    68,    69,    70,   201,   353,     3,    74,   136,    82,
     243,   152,   223,   169,    81,   175,   175,   169,     5,    86,
       5,    87,   350,  1366,    91,    92,    93,  1665,  1598,   867,
     468,    98,    99,   475,   101,   102,   103,   104,   831,  1173,
     107,   111,   109,   110,   111,   112,   964,   114,    75,   116,
     117,   339,   119,   583,   121,   122,   851,   124,   125,   126,
     127,   595,  1755,  1270,  1726,   800,   133,  1247,   135,  2058,
     137,   138,   144,   140,   141,   142,   143,   144,   145,   320,
     147,   148,   149,   150,   151,  1259,  1407,   814,   155,   514,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,   292,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   354,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   351,   352,   353,   354,   355,   356,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     107,    -1,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,   135,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
     157,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,   225,   226,
      -1,    -1,    -1,    -1,   231,    -1,   233,   234,   235,    -1,
      -1,   238,    -1,    -1,    -1,   242,   243,    -1,   245,   246,
     247,   248,    -1,    -1,    -1,   252,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,   293,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,   355,   356,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   131,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   171,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
     207,    -1,    -1,    -1,   211,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,    -1,   291,    -1,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,    -1,    -1,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,   343,   344,   345,   346,
       3,     4,     5,     6,     7,     8,   353,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   355,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     355,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,   121,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,    -1,   291,    -1,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   171,
     343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,
     353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,   205,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,    -1,   291,
      -1,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,    -1,
      -1,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,   343,   344,   345,   346,     3,     4,     5,     6,     7,
       8,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   355,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   246,    -1,
      -1,    -1,    -1,    -1,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   171,   291,    -1,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,    -1,    -1,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    -1,   343,   344,   345,   346,    -1,
      -1,    13,    14,    15,    16,   353,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   354,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,    -1,   291,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   355,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,   343,   344,   345,   346,     3,     4,
       5,     6,     7,     8,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,   355,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      10,    11,    12,    13,    14,    15,    16,   355,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     355,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   121,     3,     4,     5,
       6,     7,     8,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,   171,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      97,    -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    98,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   171,   291,    -1,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    -1,    -1,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,   343,   344,
     345,   346,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    -1,   291,    -1,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,    -1,    -1,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,    -1,   343,   344,   345,
     346,     3,     4,     5,     6,     7,     8,   353,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,   355,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    98,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   171,   291,
      -1,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,    -1,
      -1,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,   343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,
      -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,    -1,   291,    -1,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
     343,   344,   345,   346,     3,     4,     5,     6,     7,     8,
     353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,   355,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   171,   291,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,   343,   344,   345,   346,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      -1,   291,    -1,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,    -1,    -1,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,   343,   344,   345,   346,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   355,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   355,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   355,    18,    19,    20,    21,    22,    23,    24,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   355,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   355,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   355,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     355,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   355,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   354,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   354,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   354,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   354,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   354,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   354,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   354,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   354,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   354,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   354,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   354,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   354,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   354,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   354,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   354,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   354,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     354,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   354,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   354,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   354,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   354,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   354,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    -1,    -1,    -1,    -1,    -1,    -1,
     354,    -1,    10,    11,    12,    13,    14,    15,    16,    18,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    80,    -1,    -1,    -1,    -1,   354,    34,
      87,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    -1,    96,    98,
      -1,   354,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,   115,   124,    -1,    -1,
      -1,    -1,    -1,    78,   354,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   140,   132,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,   180,    -1,    -1,    -1,    74,    -1,    -1,
     179,    -1,    -1,    -1,   354,    -1,    -1,   142,    -1,    -1,
     197,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,   100,   101,   102,    -1,   354,    -1,    -1,
      -1,   108,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,   184,
      -1,   186,   354,    -1,    -1,   234,    -1,    -1,    -1,   194,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,   249,   250,    -1,    -1,   354,   153,    -1,   213,   214,
      -1,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
     167,    -1,    -1,   228,    -1,    -1,   231,    -1,   354,    -1,
      -1,    -1,    -1,    -1,   239,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,    -1,    -1,   216,
     217,    -1,    -1,    -1,   354,   222,    -1,   224,    -1,    -1,
      -1,    -1,   229,   230,    -1,   342,    -1,    -1,   235,   236,
      -1,    -1,    -1,    -1,    -1,   242,     3,   244,    -1,    -1,
      -1,    -1,   249,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    43,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    42,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    78,    92,    93,   142,   184,
     186,   194,   213,   214,   228,   231,   239,   358,   394,   395,
     432,   436,   437,   440,   441,   444,   445,   446,   448,   460,
     461,   470,   473,   475,   476,   477,   499,   502,   509,   510,
     513,   516,   517,   520,   197,   225,   342,   225,     3,    10,
      80,    87,   124,   140,   180,   197,   200,   219,   220,   234,
     342,   481,     3,   433,    80,   124,   140,   180,   197,   200,
     225,   342,   452,   225,   225,   452,     8,   200,   500,   501,
     413,   225,   452,   471,     3,    80,     0,   351,   443,     3,
       3,     3,     3,   353,   194,   141,   474,     3,     3,     3,
      77,   141,     3,     3,   474,   219,   140,   474,   225,   462,
       3,   121,   139,   154,   181,   434,     3,   141,     3,   141,
       3,     3,   141,     3,   141,     3,   141,     3,   141,     3,
     141,    88,   131,   139,   144,   154,   453,     3,     3,   453,
       9,    20,     3,    98,   355,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    37,    64,    69,    72,    73,
      91,    95,   131,   171,   199,   206,   207,   211,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   291,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   343,   344,   345,   346,   353,   359,
     414,   415,     3,   139,   154,     3,   353,   417,   418,   419,
     421,   431,     3,   358,    46,    47,    66,   188,    85,   105,
      35,    67,    85,    93,   105,   165,   186,   241,    47,   186,
     518,   352,     3,     4,     5,     6,     7,     8,   171,   354,
     511,   512,   124,   180,   252,     3,    43,   353,   175,     3,
     141,   252,   353,    36,    51,   514,     3,     3,    77,   141,
       3,   474,   353,   463,   352,   435,     3,   434,   121,   355,
     252,   252,   252,   252,   252,   252,   252,     3,   218,     3,
     359,   359,   501,   352,   353,     9,   359,   359,   359,   246,
     359,   393,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     359,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    43,   416,   121,   144,   355,   355,
     352,   416,   395,   417,   213,   355,    68,   138,   155,   168,
     193,   211,   422,   424,    43,   420,    45,    45,    63,    76,
       3,    76,    63,     3,    63,    76,    63,     3,    76,     3,
      63,    76,    63,   248,   218,    18,   162,   347,   348,   349,
     350,   519,     3,   354,   355,     3,     3,    53,    54,    56,
      58,    59,    74,    99,   100,   101,   102,   108,   117,   137,
     145,   153,   160,   163,   166,   167,   183,   212,   213,   216,
     217,   222,   224,   229,   230,   235,   236,   242,   244,   249,
     495,     3,    16,   135,   173,   503,   504,   505,     3,   175,
     252,     3,   503,    92,   142,   231,   515,   175,     3,   141,
     252,   518,     3,     3,   464,   121,   218,   465,    26,   245,
     396,   238,   417,     3,     3,     3,     3,     3,     3,     3,
       3,   213,   353,   454,     3,   213,   454,     3,   359,   364,
     365,   359,   359,   393,   109,   110,   246,   370,   359,    57,
     156,   227,   359,   391,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   354,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   354,
     359,   359,   359,   354,   359,   359,   359,   359,   359,   359,
      26,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   354,   354,   354,   354,   354,   359,   359,   354,
     354,   354,   359,   359,     5,   354,   354,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   354,
     354,   359,   359,   359,   359,   359,     6,    18,   171,   290,
     353,    13,    14,    16,    19,   359,    37,    39,   205,   353,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,     3,   417,     3,   415,     3,   442,     3,
     118,   139,   239,   428,   354,   354,     3,   472,   418,   155,
     193,   425,   419,   148,   174,   423,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   495,     3,   218,     3,     3,
       3,     5,     3,   350,     5,     5,   248,     5,    55,     5,
     512,   353,   353,   353,   491,   491,   491,   491,   491,   491,
     353,   491,   491,   491,    56,   492,   492,   491,   491,   491,
     353,   492,   491,   492,   353,   353,    18,    70,    98,   495,
       3,     3,     3,   354,   355,   238,   353,     3,     3,   175,
     354,   175,     3,   175,   252,     3,   139,   194,   352,   353,
     497,   498,   354,   355,     4,   209,   210,   466,   359,   176,
     406,   417,   396,   435,     3,   459,     3,   455,   243,   395,
     459,   243,   395,   355,   354,   226,   109,   110,   359,   359,
     395,   121,   355,   354,   121,   359,   355,   355,   355,   354,
     354,   354,   354,   354,   354,   355,   355,   355,   355,   354,
     355,   355,   355,   354,   354,   354,   354,   355,   355,   354,
     355,   354,   354,   354,    43,   355,   355,   355,   355,   292,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     355,   355,   355,   354,   355,   321,   321,   321,   354,   355,
     354,   355,   354,   321,   321,   355,   354,   354,   354,   354,
     354,   354,   354,   354,   355,   355,   355,   355,   355,   355,
     355,   355,   354,   355,   354,   354,   354,   355,     6,   171,
     366,   368,   359,   359,   353,   359,    42,   353,   353,   353,
     360,   396,   121,   355,   416,   149,   149,   149,    20,   352,
     355,   396,   423,   423,   148,   175,   419,   148,    70,   119,
     179,   234,   495,   495,     3,   490,   495,     3,   218,   218,
       5,     5,   503,   503,     5,   493,   494,   493,   493,     4,
     496,   493,   493,   493,   494,   494,   493,   493,   493,   496,
     494,   493,   494,     5,     5,   171,   353,   359,   495,   495,
     495,   191,   505,   240,     3,   298,   299,   300,   301,   438,
     439,   238,   353,   175,     3,    43,    52,     3,   238,   353,
       3,     3,   175,     3,    63,    70,   119,   123,   140,   149,
     179,   234,   482,   483,   489,   420,     3,    79,    84,   120,
     128,   171,   215,   248,   353,   467,   468,   469,    55,   157,
     409,   396,    20,   177,   355,   449,   354,   355,   353,   456,
     449,   456,   449,   364,   359,   359,   109,   226,   354,   359,
     359,   359,   121,   146,   392,   392,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   495,   495,   359,
     359,   359,     4,   321,   321,   321,   321,   321,   321,   359,
     359,   359,   359,   353,   353,   353,   321,     5,   321,     5,
     321,   353,   353,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   364,   395,   367,   369,    42,   359,
     363,   361,   362,   395,   126,   397,   417,     3,   428,   125,
     429,   429,   429,   359,     3,     3,   406,   419,   359,   175,
     238,   426,   427,   419,   353,   149,   149,   353,   490,   490,
     495,    18,    36,    40,    43,    45,    48,    63,    70,    71,
      98,   115,   149,   171,   179,   234,   447,   490,     3,     3,
     354,   354,   354,   355,   232,   251,    74,    75,   354,   355,
     354,   354,   354,    70,   359,    54,    58,    99,   102,   117,
     137,   145,   222,   224,   242,   506,   353,   353,   353,   353,
     353,   354,   355,   240,   438,     3,   238,   353,    52,   507,
     125,   240,   438,   238,   353,   175,     3,   353,   497,     3,
     353,   149,   140,   149,   353,   353,   149,   353,   354,   355,
       3,   395,     4,    79,   222,     6,     4,     4,   353,   468,
     355,     3,     5,   407,   408,   359,   190,   521,    98,   359,
     149,     3,     3,    98,   359,   458,   355,   449,   449,   109,
     359,   125,   354,   354,   355,   354,   359,   359,   354,   354,
     354,   354,   354,   355,   355,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   355,   354,   353,   353,   353,
     353,   353,   353,   354,   355,   355,   354,   354,   371,   372,
     373,   353,   354,   355,   353,   354,   355,   353,   389,   390,
     354,   355,   355,   355,   354,   354,   355,   355,   354,   355,
     354,   355,   354,   355,   354,   354,   364,   395,   359,   395,
     395,   395,   354,    55,   133,   401,   396,   148,   353,   353,
     353,    20,    20,   352,   409,   359,   353,   427,   359,   353,
     353,     3,   488,   447,   447,   490,   171,     3,   353,   353,
     353,    44,     3,   353,     4,     4,     5,     6,     7,    64,
     304,   305,   306,   353,   149,   149,   447,   191,    43,    52,
       5,   213,     4,   494,     4,   494,   494,   353,   354,    43,
      52,   438,     3,     3,     3,     3,     3,   353,   354,   353,
     240,   438,   507,     3,     4,     5,     6,     7,     8,    10,
      12,    16,    17,    18,    20,    24,    25,    26,    27,    28,
      37,    42,    43,    46,    51,    52,    53,    54,    55,    58,
      60,    61,    62,    65,    66,    68,    69,    70,    74,    81,
      86,    91,    92,    93,    98,    99,   101,   102,   103,   104,
     107,   109,   110,   111,   112,   114,   116,   117,   119,   121,
     122,   124,   125,   126,   127,   133,   135,   137,   138,   140,
     141,   142,   143,   144,   145,   147,   148,   149,   150,   151,
     155,   157,   159,   168,   170,   171,   172,   173,   174,   175,
     176,   179,   180,   185,   187,   188,   189,   191,   193,   195,
     196,   197,   198,   212,   213,   214,   222,   224,   225,   226,
     231,   233,   234,   235,   238,   242,   243,   245,   246,   247,
     248,   252,   293,   294,   295,   296,   297,   351,   352,   353,
     354,   355,   356,   508,   103,   353,   354,   240,   438,     3,
     238,   353,   482,    70,   119,   179,   234,   359,   353,   353,
     353,     3,   412,   412,   353,   488,   478,   497,   483,   495,
     468,   354,   469,    41,    97,   352,   399,   399,   355,   159,
     355,     3,    26,   522,   231,    20,   354,   355,   457,   521,
     359,   359,   354,    89,    90,    94,    96,   129,   130,   132,
     249,   250,   359,   359,   359,   375,   376,   374,   377,   378,
     379,   359,   359,   322,   402,   402,   402,   380,   321,     4,
       5,   384,   321,     4,     5,   388,   402,   402,   359,   359,
     359,   359,   359,   359,   359,   359,   354,   354,   354,   354,
     354,   359,   398,   359,   406,   397,     3,   430,   430,   430,
     359,   359,     3,   521,   412,   354,     3,   485,     3,   484,
     354,   355,   447,     5,   359,     5,    43,    70,   179,   234,
     359,   353,   353,   353,   359,   506,    52,   507,   354,     4,
     359,    52,   507,   354,   354,   354,   354,   355,   438,   438,
     353,   354,   109,   507,   507,   507,   507,   507,   507,   195,
     438,   353,   354,   353,   240,   438,   354,   353,   149,   149,
     353,   354,   485,   412,   412,   354,   355,   354,   484,   354,
      40,   175,   201,   490,   354,     3,   408,   359,   359,   355,
     450,    98,   359,    98,   359,   353,   354,   354,   354,   354,
     354,   402,   402,   402,   402,   402,   402,   354,   355,   354,
      55,   176,   404,   404,   404,   402,   353,   354,   354,   402,
     353,   354,   354,   402,   404,   404,   354,   354,   354,   354,
     354,   355,   354,   354,   399,   248,   355,   400,   409,   401,
     354,   355,   354,   354,    20,   354,    18,   354,   355,   354,
     355,     3,   354,   355,   354,   354,   355,   353,   353,   149,
     354,   354,   354,   354,   354,    43,    52,   507,   109,   354,
     507,   109,     3,   354,   354,   438,   109,   109,   109,   109,
     109,   109,    52,   354,   438,   438,   353,   354,   478,   497,
     359,   353,   353,   488,   354,   354,   354,     3,   354,     5,
      20,     3,    55,   399,     3,     3,   451,   458,   404,   404,
     404,   404,   404,   404,   359,     3,   403,    55,   354,   354,
     354,   404,   381,   321,   321,   404,   385,   321,   321,   404,
     354,   354,   359,   192,   359,   125,   410,   406,     3,   359,
     241,   185,     3,     3,     5,    49,    50,     5,   359,   359,
      52,   507,   109,   109,   354,   354,    69,   116,   141,   151,
     247,   507,   354,   354,   438,   354,   485,   484,   354,   185,
       5,    92,   221,   182,   240,    20,   355,   354,   354,   354,
     354,   354,   354,   354,   354,   355,     3,   405,   354,   402,
     353,   353,   354,   402,   353,   353,   354,   354,   399,   203,
     231,   144,   411,   409,     3,   354,   354,   354,   354,   507,
     109,   109,   354,   354,   354,     3,     3,     3,   353,   353,
     359,     3,     3,   399,   355,   404,   382,   383,   404,   386,
     387,   204,   204,   412,   353,    49,    50,   109,   185,   352,
     353,     3,     3,    20,     3,   354,   402,   402,   354,   402,
     402,   158,   158,     3,   486,     3,     3,   486,   354,   354,
     359,   399,   404,   404,   404,   404,   354,   355,   352,   353,
     353,   354,   353,   202,   354,   354,   354,   354,   487,     3,
       3,   486,   486,   487,   201,   479,   480,     5,    18,    82,
     161,   175,   353,   354,   354,    18,     3,   354,   355,    82,
     241,   136,   122,   178,   208,    92,   231,   486,   487,   487,
     243,   480,    83,   134,    66,   170,   188,   213,    66,   170,
     188,   213,   354,   152,    98,   171,    98,   171,   487,   223,
       4,   162,   175,   175,   169,   169,     5,     5
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
#line 428 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 434 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 435 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 437 "parser/evoparser.y"
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
#line 455 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 463 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 471 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 477 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 484 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 485 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 486 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 487 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 488 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 489 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 490 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 491 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 492 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 493 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 494 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 495 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 496 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 497 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 498 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 499 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 500 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 501 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 30:
#line 502 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 31:
#line 504 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 32:
#line 509 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 510 "parser/evoparser.y"
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
#line 518 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 519 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 36:
#line 520 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 521 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 522 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 523 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 526 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 41:
#line 527 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 42:
#line 528 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 43:
#line 529 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 44:
#line 530 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 45:
#line 533 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 46:
#line 534 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 47:
#line 537 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 48:
#line 538 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 49:
#line 541 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 51:
#line 545 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 545 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 546 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 546 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 547 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 548 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 555 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 556 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 563 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 564 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 61:
#line 574 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 62:
#line 578 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 63:
#line 579 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 580 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 581 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 582 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 583 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 584 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 69:
#line 585 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 70:
#line 589 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 71:
#line 590 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 72:
#line 591 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 73:
#line 592 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 74:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 75:
#line 594 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 76:
#line 596 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 77:
#line 597 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 78:
#line 598 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 79:
#line 599 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 80:
#line 600 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 601 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 82:
#line 602 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 603 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 84:
#line 604 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 605 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 86:
#line 606 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 607 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 88:
#line 609 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 610 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 611 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 91:
#line 612 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 613 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 93:
#line 614 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 95:
#line 616 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 617 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 618 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 98:
#line 619 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 99:
#line 620 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 100:
#line 621 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 101:
#line 622 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 623 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 103:
#line 624 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 626 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 105:
#line 627 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 106:
#line 628 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 107:
#line 629 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 108:
#line 630 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 109:
#line 631 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 110:
#line 634 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 111:
#line 635 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 112:
#line 636 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 113:
#line 637 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 114:
#line 638 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 115:
#line 639 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 116:
#line 640 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 117:
#line 641 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 642 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 119:
#line 643 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 644 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 645 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 122:
#line 646 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 647 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 124:
#line 648 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 125:
#line 649 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 126:
#line 650 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 127:
#line 651 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 128:
#line 652 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 129:
#line 653 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 130:
#line 654 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 131:
#line 655 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 132:
#line 656 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 133:
#line 657 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 134:
#line 658 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 135:
#line 659 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 136:
#line 660 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 137:
#line 661 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 138:
#line 662 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 139:
#line 663 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 140:
#line 664 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 141:
#line 665 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 142:
#line 666 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 143:
#line 667 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 144:
#line 669 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 145:
#line 670 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 146:
#line 671 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 147:
#line 672 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 148:
#line 673 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 149:
#line 674 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 150:
#line 675 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 151:
#line 676 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 152:
#line 678 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 153:
#line 679 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 154:
#line 680 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 155:
#line 681 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 156:
#line 682 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 157:
#line 683 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 158:
#line 684 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 159:
#line 685 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 160:
#line 686 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 161:
#line 687 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 162:
#line 688 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 163:
#line 689 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 164:
#line 690 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 165:
#line 691 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 166:
#line 692 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 167:
#line 693 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 168:
#line 694 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 169:
#line 695 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 170:
#line 696 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 171:
#line 697 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 172:
#line 698 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 699 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 174:
#line 701 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 175:
#line 702 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 176:
#line 703 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 177:
#line 704 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 178:
#line 705 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 179:
#line 707 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 180:
#line 708 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 181:
#line 710 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 182:
#line 711 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 183:
#line 712 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 184:
#line 714 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 185:
#line 715 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 186:
#line 716 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 187:
#line 717 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 188:
#line 724 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 189:
#line 731 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 190:
#line 738 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 191:
#line 742 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 192:
#line 746 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 750 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 754 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 195:
#line 758 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 196:
#line 764 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 197:
#line 765 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 198:
#line 766 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 199:
#line 770 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 200:
#line 776 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 201:
#line 782 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 202:
#line 783 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 203:
#line 784 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 204:
#line 785 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 786 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 787 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 207:
#line 788 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 208:
#line 789 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 209:
#line 790 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 794 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 211:
#line 796 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 212:
#line 798 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 213:
#line 800 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 214:
#line 804 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 215:
#line 812 "parser/evoparser.y"
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
#line 822 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 217:
#line 823 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 218:
#line 826 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 219:
#line 827 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 220:
#line 831 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 221:
#line 839 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 222:
#line 847 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 858 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 224:
#line 867 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 225:
#line 872 "parser/evoparser.y"
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
#line 885 "parser/evoparser.y"
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
#line 898 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 230:
#line 900 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 231:
#line 903 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 232:
#line 910 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 233:
#line 918 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 234:
#line 919 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 235:
#line 920 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 236:
#line 923 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 924 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 239:
#line 928 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 242:
#line 937 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 243:
#line 939 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 246:
#line 947 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 247:
#line 949 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 252:
#line 961 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 253:
#line 967 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 254:
#line 974 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 255:
#line 982 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 256:
#line 983 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 257:
#line 984 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 258:
#line 985 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 259:
#line 988 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 260:
#line 989 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 261:
#line 990 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 262:
#line 991 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 263:
#line 992 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 265:
#line 996 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 266:
#line 999 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 267:
#line 1000 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 268:
#line 1003 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1004 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 270:
#line 1005 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 271:
#line 1006 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 272:
#line 1007 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 273:
#line 1008 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 274:
#line 1009 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 275:
#line 1010 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 276:
#line 1011 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 277:
#line 1014 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 278:
#line 1015 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 279:
#line 1017 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 280:
#line 1025 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 281:
#line 1030 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 282:
#line 1031 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 283:
#line 1032 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 284:
#line 1035 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1036 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1045 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 289:
#line 1051 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 290:
#line 1052 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 291:
#line 1053 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 294:
#line 1062 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 295:
#line 1064 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 296:
#line 1066 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 297:
#line 1068 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 298:
#line 1070 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 299:
#line 1073 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 300:
#line 1074 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1075 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 302:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1079 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 304:
#line 1082 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 305:
#line 1083 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 306:
#line 1086 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 307:
#line 1087 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 308:
#line 1088 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 311:
#line 1095 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 312:
#line 1096 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 313:
#line 1101 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 314:
#line 1103 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 315:
#line 1105 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 317:
#line 1109 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 318:
#line 1110 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 319:
#line 1113 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1114 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 321:
#line 1117 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 322:
#line 1122 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 323:
#line 1132 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 324:
#line 1139 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 325:
#line 1140 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 326:
#line 1141 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 327:
#line 1142 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 328:
#line 1147 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 329:
#line 1151 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 330:
#line 1153 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 333:
#line 1159 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 334:
#line 1164 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 335:
#line 1171 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 336:
#line 1178 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 337:
#line 1188 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 338:
#line 1195 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 339:
#line 1202 "parser/evoparser.y"
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
#line 1212 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 341:
#line 1220 "parser/evoparser.y"
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
#line 1230 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 343:
#line 1238 "parser/evoparser.y"
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
#line 1247 "parser/evoparser.y"
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
#line 1256 "parser/evoparser.y"
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
#line 1266 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 347:
#line 1274 "parser/evoparser.y"
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
#line 1283 "parser/evoparser.y"
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
#line 1292 "parser/evoparser.y"
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
#line 1302 "parser/evoparser.y"
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
#line 1311 "parser/evoparser.y"
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
#line 1323 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 353:
#line 1328 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 354:
#line 1333 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 355:
#line 1339 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 356:
#line 1346 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 357:
#line 1353 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 358:
#line 1360 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 359:
#line 1370 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 360:
#line 1377 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 361:
#line 1386 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 362:
#line 1393 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 363:
#line 1399 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 364:
#line 1407 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 365:
#line 1413 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 367:
#line 1421 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 368:
#line 1422 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 369:
#line 1423 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 370:
#line 1424 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 371:
#line 1429 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 372:
#line 1436 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 373:
#line 1445 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 374:
#line 1452 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 375:
#line 1458 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 376:
#line 1468 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 377:
#line 1472 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 378:
#line 1478 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 379:
#line 1484 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 380:
#line 1491 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 381:
#line 1497 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 382:
#line 1504 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 383:
#line 1510 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 384:
#line 1516 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 385:
#line 1522 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 386:
#line 1528 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1534 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 388:
#line 1540 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 389:
#line 1546 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 390:
#line 1552 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 391:
#line 1558 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 392:
#line 1564 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 393:
#line 1570 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 394:
#line 1576 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 395:
#line 1582 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 396:
#line 1588 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 397:
#line 1595 "parser/evoparser.y"
    { ;}
    break;

  case 398:
#line 1596 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 399:
#line 1597 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 400:
#line 1601 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 401:
#line 1609 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 402:
#line 1615 "parser/evoparser.y"
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
#line 1628 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 405:
#line 1628 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 406:
#line 1632 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 407:
#line 1640 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 408:
#line 1649 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 409:
#line 1650 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 410:
#line 1651 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 411:
#line 1652 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 412:
#line 1653 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 416:
#line 1660 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 417:
#line 1664 "parser/evoparser.y"
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
#line 1674 "parser/evoparser.y"
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
#line 1686 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 420:
#line 1687 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 421:
#line 1687 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 422:
#line 1690 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 423:
#line 1691 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 424:
#line 1692 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 425:
#line 1693 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 426:
#line 1697 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 427:
#line 1700 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 428:
#line 1701 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 429:
#line 1702 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 430:
#line 1703 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 431:
#line 1709 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 432:
#line 1715 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 433:
#line 1720 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 434:
#line 1725 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 435:
#line 1729 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 436:
#line 1733 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 437:
#line 1735 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 440:
#line 1741 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 441:
#line 1742 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 442:
#line 1746 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 443:
#line 1747 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 444:
#line 1751 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 445:
#line 1752 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 446:
#line 1753 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 453:
#line 1768 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 454:
#line 1769 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 455:
#line 1770 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 456:
#line 1771 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 457:
#line 1772 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 458:
#line 1773 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 459:
#line 1774 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 460:
#line 1775 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 461:
#line 1780 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 462:
#line 1789 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 463:
#line 1796 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 464:
#line 1797 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 465:
#line 1798 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 466:
#line 1803 "parser/evoparser.y"
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

  case 467:
#line 1814 "parser/evoparser.y"
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

  case 468:
#line 1826 "parser/evoparser.y"
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

  case 469:
#line 1837 "parser/evoparser.y"
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

  case 470:
#line 1852 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 471:
#line 1856 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 472:
#line 1860 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 473:
#line 1861 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 474:
#line 1866 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 475:
#line 1868 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 476:
#line 1870 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 477:
#line 1872 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 478:
#line 1875 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 479:
#line 1876 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 480:
#line 1882 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 481:
#line 1887 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 482:
#line 1889 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 483:
#line 1891 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 484:
#line 1893 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 485:
#line 1895 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 486:
#line 1899 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 487:
#line 1903 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 488:
#line 1904 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 489:
#line 1909 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 490:
#line 1919 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 491:
#line 1928 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 493:
#line 1932 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 494:
#line 1933 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 495:
#line 1934 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 496:
#line 1935 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 497:
#line 1937 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 498:
#line 1939 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 501:
#line 1947 "parser/evoparser.y"
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

  case 502:
#line 1962 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 503:
#line 1970 "parser/evoparser.y"
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

  case 504:
#line 1984 "parser/evoparser.y"
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

  case 505:
#line 1998 "parser/evoparser.y"
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

  case 506:
#line 2012 "parser/evoparser.y"
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

  case 507:
#line 2024 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 508:
#line 2025 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 509:
#line 2026 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 510:
#line 2029 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 511:
#line 2030 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 512:
#line 2033 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 513:
#line 2034 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 514:
#line 2035 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 515:
#line 2036 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 516:
#line 2037 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 517:
#line 2038 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 518:
#line 2039 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 519:
#line 2040 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 520:
#line 2042 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 521:
#line 2044 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 522:
#line 2046 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 523:
#line 2048 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 524:
#line 2050 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 525:
#line 2052 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 526:
#line 2055 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 527:
#line 2056 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 528:
#line 2059 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 529:
#line 2060 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 530:
#line 2063 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 531:
#line 2064 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 533:
#line 2068 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 534:
#line 2069 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 535:
#line 2070 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 536:
#line 2071 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 537:
#line 2072 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 538:
#line 2073 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 539:
#line 2074 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 540:
#line 2075 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 541:
#line 2076 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 542:
#line 2077 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 543:
#line 2078 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 544:
#line 2079 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 545:
#line 2080 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 546:
#line 2081 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 547:
#line 2082 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 548:
#line 2083 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 549:
#line 2084 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 550:
#line 2087 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 551:
#line 2088 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 552:
#line 2091 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 553:
#line 2093 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 554:
#line 2101 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 555:
#line 2102 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 557:
#line 2104 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 558:
#line 2105 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 559:
#line 2106 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 560:
#line 2107 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 561:
#line 2108 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 562:
#line 2109 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 563:
#line 2110 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 564:
#line 2111 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 565:
#line 2112 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 566:
#line 2119 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 567:
#line 2120 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 568:
#line 2121 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 569:
#line 2122 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 570:
#line 2123 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 571:
#line 2124 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 572:
#line 2125 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 573:
#line 2126 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 574:
#line 2127 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 575:
#line 2128 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 576:
#line 2129 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 577:
#line 2130 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 578:
#line 2131 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 579:
#line 2132 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 580:
#line 2133 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 581:
#line 2134 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 582:
#line 2135 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 583:
#line 2136 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 584:
#line 2137 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 585:
#line 2138 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 586:
#line 2139 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 587:
#line 2142 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 588:
#line 2143 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 589:
#line 2144 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 590:
#line 2147 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 591:
#line 2148 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 592:
#line 2151 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 593:
#line 2152 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 594:
#line 2153 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 596:
#line 2157 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 597:
#line 2158 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 598:
#line 2162 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 599:
#line 2163 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 600:
#line 2164 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 601:
#line 2165 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 602:
#line 2166 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 603:
#line 2167 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 604:
#line 2168 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 605:
#line 2169 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 606:
#line 2170 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 607:
#line 2171 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 608:
#line 2172 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 609:
#line 2173 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 610:
#line 2174 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 611:
#line 2175 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 612:
#line 2176 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 613:
#line 2177 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 614:
#line 2178 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 615:
#line 2179 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 616:
#line 2180 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 617:
#line 2181 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 618:
#line 2182 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 619:
#line 2183 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 620:
#line 2184 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 621:
#line 2185 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 622:
#line 2186 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 623:
#line 2187 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 624:
#line 2188 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 625:
#line 2189 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 626:
#line 2190 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 627:
#line 2191 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 628:
#line 2192 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 629:
#line 2193 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 630:
#line 2194 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 631:
#line 2197 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 632:
#line 2198 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 633:
#line 2202 "parser/evoparser.y"
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

  case 634:
#line 2214 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 635:
#line 2215 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 636:
#line 2216 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 637:
#line 2220 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 638:
#line 2223 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 639:
#line 2224 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 643:
#line 2228 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 644:
#line 2229 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 645:
#line 2237 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 646:
#line 2242 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 647:
#line 2248 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 648:
#line 2254 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 649:
#line 2261 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 650:
#line 2268 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 651:
#line 2274 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 652:
#line 2280 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 653:
#line 2287 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 658:
#line 2303 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 659:
#line 2304 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 660:
#line 2305 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 661:
#line 2306 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 662:
#line 2309 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 663:
#line 2310 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 664:
#line 2311 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 665:
#line 2312 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 666:
#line 2313 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 667:
#line 2314 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 668:
#line 2315 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 669:
#line 2316 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 670:
#line 2317 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 671:
#line 2318 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 680:
#line 2335 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 681:
#line 2336 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 802:
#line 2354 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 803:
#line 2361 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 804:
#line 2366 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 805:
#line 2372 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 806:
#line 2378 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 807:
#line 2384 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 808:
#line 2395 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 809:
#line 2400 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 810:
#line 2406 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 813:
#line 2417 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 814:
#line 2418 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 815:
#line 2419 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 816:
#line 2420 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 817:
#line 2421 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 818:
#line 2422 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 819:
#line 2423 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 820:
#line 2430 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 821:
#line 2435 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 822:
#line 2442 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 823:
#line 2443 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 824:
#line 2446 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 825:
#line 2447 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 826:
#line 2448 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 827:
#line 2451 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 828:
#line 2456 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 829:
#line 2462 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 830:
#line 2471 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 831:
#line 2479 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 832:
#line 2489 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 833:
#line 2494 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 836:
#line 2507 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 837:
#line 2508 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 838:
#line 2509 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 839:
#line 2510 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 840:
#line 2511 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 841:
#line 2512 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 842:
#line 2513 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 843:
#line 2514 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 844:
#line 2517 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 845:
#line 2522 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 846:
#line 2528 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 847:
#line 2538 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 848:
#line 2545 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 849:
#line 2552 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 850:
#line 2560 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 852:
#line 2570 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 854:
#line 2574 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 855:
#line 2575 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9927 "parser/evoparser.tab.c"
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


#line 2578 "parser/evoparser.y"

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
