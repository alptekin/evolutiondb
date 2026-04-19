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
     DATABASE = 330,
     DECLARE = 331,
     DEFERRABLE = 332,
     DEFERRED = 333,
     DELIMITER = 334,
     DISABLE = 335,
     DO = 336,
     DOMAIN = 337,
     DELAYED = 338,
     DAY_HOUR = 339,
     DAY_MICROSECOND = 340,
     DISTINCT = 341,
     DELETE = 342,
     DROP = 343,
     DAY_MINUTE = 344,
     DISTINCTROW = 345,
     DAY_SECOND = 346,
     DESC = 347,
     DEFAULT = 348,
     DOUBLE = 349,
     DATETIME = 350,
     DECIMAL = 351,
     DATE = 352,
     EACH = 353,
     ELSEIF = 354,
     ENABLE = 355,
     ESCAPED = 356,
     EXCEPT = 357,
     ENUM = 358,
     END = 359,
     ELSE = 360,
     EXECUTE = 361,
     EXIT = 362,
     EXPLAIN = 363,
     FETCH = 364,
     FIRST = 365,
     FOREACH = 366,
     FLOAT = 367,
     FORCE = 368,
     FOREIGN = 369,
     FORMAT = 370,
     FROM = 371,
     FULL = 372,
     FULLTEXT = 373,
     FUNCTION = 374,
     FOR = 375,
     GROUP = 376,
     HANDLER = 377,
     HEADER = 378,
     HOUR_MINUTE = 379,
     HOUR_MICROSECOND = 380,
     HIGH_PRIORITY = 381,
     HOUR_SECOND = 382,
     HAVING = 383,
     IMMEDIATE = 384,
     INOUT = 385,
     INITIALLY = 386,
     INTEGER = 387,
     INNER = 388,
     IGNORE = 389,
     INDEX = 390,
     IF = 391,
     INSERT = 392,
     INTERSECT = 393,
     INTO = 394,
     INT = 395,
     INTERVAL = 396,
     ITERATE = 397,
     JOIN = 398,
     KEY = 399,
     LEAVE = 400,
     LOOP = 401,
     LESS = 402,
     LONGTEXT = 403,
     LOW_PRIORITY = 404,
     LEFT = 405,
     LEADING = 406,
     LIMIT = 407,
     LOCKED = 408,
     OFFSET = 409,
     LONGBLOB = 410,
     MATCH = 411,
     MAXVALUE = 412,
     MEDIUMTEXT = 413,
     MINUS = 414,
     MODIFY = 415,
     MEDIUMBLOB = 416,
     MEDIUMINT = 417,
     NATURAL = 418,
     NODE = 419,
     NO_ACTION = 420,
     NULLX = 421,
     OPEN = 422,
     OUT = 423,
     OUTER = 424,
     ON = 425,
     ORDER = 426,
     ONDUPLICATE = 427,
     PARTIAL = 428,
     PRIMARY = 429,
     PROCEDURE = 430,
     QUICK = 431,
     RANGE = 432,
     REAL = 433,
     RECLAIM = 434,
     REFERENCES = 435,
     RENAME = 436,
     RESIGNAL = 437,
     RESTRICT = 438,
     RETURN = 439,
     RETURNING = 440,
     RETURNS = 441,
     ROLLUP = 442,
     RIGHT = 443,
     REPLACE = 444,
     ROW = 445,
     SIGNAL = 446,
     TRIGGER = 447,
     UNTIL = 448,
     SQL_SMALL_RESULT = 449,
     SCHEMA = 450,
     SHARD = 451,
     SHARDS = 452,
     SHARE = 453,
     SKIP = 454,
     SOME = 455,
     SQL_CALC_FOUND_ROWS = 456,
     SQL_BIG_RESULT = 457,
     SIMPLE = 458,
     STDIN = 459,
     STDOUT = 460,
     STRAIGHT_JOIN = 461,
     SMALLINT = 462,
     SET = 463,
     SELECT = 464,
     QUOTE = 465,
     TINYTEXT = 466,
     TINYINT = 467,
     TO = 468,
     TEMPORARY = 469,
     GLOBAL = 470,
     PRESERVE = 471,
     TEXT = 472,
     THAN = 473,
     TIMESTAMP = 474,
     TABLE = 475,
     THEN = 476,
     TRAILING = 477,
     TRUNCATE = 478,
     TINYBLOB = 479,
     TIME = 480,
     UPDATE = 481,
     UNSIGNED = 482,
     UNION = 483,
     UNIQUE = 484,
     UUID = 485,
     JSON = 486,
     VIEW = 487,
     USING = 488,
     USE = 489,
     HASH = 490,
     VALIDATE = 491,
     VARCHAR = 492,
     VALUES = 493,
     VARBINARY = 494,
     WHERE = 495,
     WHEN = 496,
     WHILE = 497,
     WITH = 498,
     YEAR = 499,
     YEAR_MONTH = 500,
     ZEROFILL = 501,
     EXISTS = 502,
     FSUBSTRING = 503,
     FTRIM = 504,
     FDATE_ADD = 505,
     FDATE_SUB = 506,
     FDATEDIFF = 507,
     FYEAR = 508,
     FMONTH = 509,
     FDAY = 510,
     FHOUR = 511,
     FMINUTE = 512,
     FSECOND = 513,
     FNOW = 514,
     FLEFT = 515,
     FRIGHT = 516,
     FLPAD = 517,
     FRPAD = 518,
     FREVERSE = 519,
     FREPEAT = 520,
     FINSTR = 521,
     FLOCATE = 522,
     FABS = 523,
     FCEIL = 524,
     FFLOOR = 525,
     FROUND = 526,
     FPOWER = 527,
     FSQRT = 528,
     FMOD = 529,
     FRAND = 530,
     FLOG = 531,
     FLOG10 = 532,
     FSIGN = 533,
     FPI = 534,
     FCAST = 535,
     FCONVERT = 536,
     FNULLIF = 537,
     FIFNULL = 538,
     FIF = 539,
     UNKNOWN = 540,
     FGROUP_CONCAT = 541,
     SEPARATOR = 542,
     FCOUNT = 543,
     FSUM = 544,
     FAVG = 545,
     FMIN = 546,
     FMAX = 547,
     FUPPER = 548,
     FLOWER = 549,
     FLENGTH = 550,
     FCONCAT = 551,
     FREPLACE = 552,
     FCOALESCE = 553,
     FGEN_RANDOM_UUID = 554,
     FGEN_RANDOM_UUID_V7 = 555,
     FSNOWFLAKE_ID = 556,
     FLAST_INSERT_ID = 557,
     FSCOPE_IDENTITY = 558,
     FAT_IDENTITY = 559,
     FAT_LAST_INSERT_ID = 560,
     FEVO_SLEEP = 561,
     FEVO_JITTER = 562,
     FROW_NUMBER = 563,
     FRANK = 564,
     FDENSE_RANK = 565,
     FLEAD = 566,
     FLAG = 567,
     FNTILE = 568,
     FPERCENT_RANK = 569,
     FCUME_DIST = 570,
     OVER = 571,
     PARTITION = 572,
     FJSON_EXTRACT = 573,
     FJSON_UNQUOTE = 574,
     FJSON_TYPE = 575,
     FJSON_LENGTH = 576,
     FJSON_DEPTH = 577,
     FJSON_VALID = 578,
     FJSON_KEYS = 579,
     FJSON_PRETTY = 580,
     FJSON_QUOTE = 581,
     FJSON_SET = 582,
     FJSON_INSERT = 583,
     FJSON_REPLACE = 584,
     FJSON_REMOVE = 585,
     FJSON_CONTAINS = 586,
     FJSON_CONTAINS_PATH = 587,
     FJSON_SEARCH = 588,
     FJSON_OBJECT = 589,
     FJSON_ARRAY = 590,
     FJSON_ARRAYAGG = 591,
     SEQUENCE = 592,
     FNEXTVAL = 593,
     FCURRVAL = 594,
     FSETVAL = 595,
     FLASTVAL = 596,
     START = 597,
     INCREMENT = 598,
     MINVALUE = 599,
     CYCLE = 600
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
#define DATABASE 330
#define DECLARE 331
#define DEFERRABLE 332
#define DEFERRED 333
#define DELIMITER 334
#define DISABLE 335
#define DO 336
#define DOMAIN 337
#define DELAYED 338
#define DAY_HOUR 339
#define DAY_MICROSECOND 340
#define DISTINCT 341
#define DELETE 342
#define DROP 343
#define DAY_MINUTE 344
#define DISTINCTROW 345
#define DAY_SECOND 346
#define DESC 347
#define DEFAULT 348
#define DOUBLE 349
#define DATETIME 350
#define DECIMAL 351
#define DATE 352
#define EACH 353
#define ELSEIF 354
#define ENABLE 355
#define ESCAPED 356
#define EXCEPT 357
#define ENUM 358
#define END 359
#define ELSE 360
#define EXECUTE 361
#define EXIT 362
#define EXPLAIN 363
#define FETCH 364
#define FIRST 365
#define FOREACH 366
#define FLOAT 367
#define FORCE 368
#define FOREIGN 369
#define FORMAT 370
#define FROM 371
#define FULL 372
#define FULLTEXT 373
#define FUNCTION 374
#define FOR 375
#define GROUP 376
#define HANDLER 377
#define HEADER 378
#define HOUR_MINUTE 379
#define HOUR_MICROSECOND 380
#define HIGH_PRIORITY 381
#define HOUR_SECOND 382
#define HAVING 383
#define IMMEDIATE 384
#define INOUT 385
#define INITIALLY 386
#define INTEGER 387
#define INNER 388
#define IGNORE 389
#define INDEX 390
#define IF 391
#define INSERT 392
#define INTERSECT 393
#define INTO 394
#define INT 395
#define INTERVAL 396
#define ITERATE 397
#define JOIN 398
#define KEY 399
#define LEAVE 400
#define LOOP 401
#define LESS 402
#define LONGTEXT 403
#define LOW_PRIORITY 404
#define LEFT 405
#define LEADING 406
#define LIMIT 407
#define LOCKED 408
#define OFFSET 409
#define LONGBLOB 410
#define MATCH 411
#define MAXVALUE 412
#define MEDIUMTEXT 413
#define MINUS 414
#define MODIFY 415
#define MEDIUMBLOB 416
#define MEDIUMINT 417
#define NATURAL 418
#define NODE 419
#define NO_ACTION 420
#define NULLX 421
#define OPEN 422
#define OUT 423
#define OUTER 424
#define ON 425
#define ORDER 426
#define ONDUPLICATE 427
#define PARTIAL 428
#define PRIMARY 429
#define PROCEDURE 430
#define QUICK 431
#define RANGE 432
#define REAL 433
#define RECLAIM 434
#define REFERENCES 435
#define RENAME 436
#define RESIGNAL 437
#define RESTRICT 438
#define RETURN 439
#define RETURNING 440
#define RETURNS 441
#define ROLLUP 442
#define RIGHT 443
#define REPLACE 444
#define ROW 445
#define SIGNAL 446
#define TRIGGER 447
#define UNTIL 448
#define SQL_SMALL_RESULT 449
#define SCHEMA 450
#define SHARD 451
#define SHARDS 452
#define SHARE 453
#define SKIP 454
#define SOME 455
#define SQL_CALC_FOUND_ROWS 456
#define SQL_BIG_RESULT 457
#define SIMPLE 458
#define STDIN 459
#define STDOUT 460
#define STRAIGHT_JOIN 461
#define SMALLINT 462
#define SET 463
#define SELECT 464
#define QUOTE 465
#define TINYTEXT 466
#define TINYINT 467
#define TO 468
#define TEMPORARY 469
#define GLOBAL 470
#define PRESERVE 471
#define TEXT 472
#define THAN 473
#define TIMESTAMP 474
#define TABLE 475
#define THEN 476
#define TRAILING 477
#define TRUNCATE 478
#define TINYBLOB 479
#define TIME 480
#define UPDATE 481
#define UNSIGNED 482
#define UNION 483
#define UNIQUE 484
#define UUID 485
#define JSON 486
#define VIEW 487
#define USING 488
#define USE 489
#define HASH 490
#define VALIDATE 491
#define VARCHAR 492
#define VALUES 493
#define VARBINARY 494
#define WHERE 495
#define WHEN 496
#define WHILE 497
#define WITH 498
#define YEAR 499
#define YEAR_MONTH 500
#define ZEROFILL 501
#define EXISTS 502
#define FSUBSTRING 503
#define FTRIM 504
#define FDATE_ADD 505
#define FDATE_SUB 506
#define FDATEDIFF 507
#define FYEAR 508
#define FMONTH 509
#define FDAY 510
#define FHOUR 511
#define FMINUTE 512
#define FSECOND 513
#define FNOW 514
#define FLEFT 515
#define FRIGHT 516
#define FLPAD 517
#define FRPAD 518
#define FREVERSE 519
#define FREPEAT 520
#define FINSTR 521
#define FLOCATE 522
#define FABS 523
#define FCEIL 524
#define FFLOOR 525
#define FROUND 526
#define FPOWER 527
#define FSQRT 528
#define FMOD 529
#define FRAND 530
#define FLOG 531
#define FLOG10 532
#define FSIGN 533
#define FPI 534
#define FCAST 535
#define FCONVERT 536
#define FNULLIF 537
#define FIFNULL 538
#define FIF 539
#define UNKNOWN 540
#define FGROUP_CONCAT 541
#define SEPARATOR 542
#define FCOUNT 543
#define FSUM 544
#define FAVG 545
#define FMIN 546
#define FMAX 547
#define FUPPER 548
#define FLOWER 549
#define FLENGTH 550
#define FCONCAT 551
#define FREPLACE 552
#define FCOALESCE 553
#define FGEN_RANDOM_UUID 554
#define FGEN_RANDOM_UUID_V7 555
#define FSNOWFLAKE_ID 556
#define FLAST_INSERT_ID 557
#define FSCOPE_IDENTITY 558
#define FAT_IDENTITY 559
#define FAT_LAST_INSERT_ID 560
#define FEVO_SLEEP 561
#define FEVO_JITTER 562
#define FROW_NUMBER 563
#define FRANK 564
#define FDENSE_RANK 565
#define FLEAD 566
#define FLAG 567
#define FNTILE 568
#define FPERCENT_RANK 569
#define FCUME_DIST 570
#define OVER 571
#define PARTITION 572
#define FJSON_EXTRACT 573
#define FJSON_UNQUOTE 574
#define FJSON_TYPE 575
#define FJSON_LENGTH 576
#define FJSON_DEPTH 577
#define FJSON_VALID 578
#define FJSON_KEYS 579
#define FJSON_PRETTY 580
#define FJSON_QUOTE 581
#define FJSON_SET 582
#define FJSON_INSERT 583
#define FJSON_REPLACE 584
#define FJSON_REMOVE 585
#define FJSON_CONTAINS 586
#define FJSON_CONTAINS_PATH 587
#define FJSON_SEARCH 588
#define FJSON_OBJECT 589
#define FJSON_ARRAY 590
#define FJSON_ARRAYAGG 591
#define SEQUENCE 592
#define FNEXTVAL 593
#define FCURRVAL 594
#define FSETVAL 595
#define FLASTVAL 596
#define START 597
#define INCREMENT 598
#define MINVALUE 599
#define CYCLE 600




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
#line 841 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 854 "parser/evoparser.tab.c"

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
#define YYLAST   11440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  361
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  866
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2133

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   600

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     357,   358,    26,    24,   359,    25,   356,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   355,
       2,   360,     2,     2,     2,     2,     2,     2,     2,     2,
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
     354
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
     362,     0,    -1,   398,   355,    -1,   398,   355,   362,    -1,
       3,    -1,     3,   356,     3,    -1,    81,   356,     3,    -1,
     165,   357,     3,   358,    83,   357,     4,   358,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   175,
      -1,   363,    24,   363,    -1,   363,    25,   363,    -1,   363,
      26,   363,    -1,   363,    27,   363,    -1,   363,    28,   363,
      -1,   363,    29,   363,    -1,    25,   363,    -1,   357,   363,
     358,    -1,   363,    12,   363,    -1,   363,    10,   363,    -1,
     363,    11,   363,    -1,   363,    21,   363,    -1,   363,    22,
     363,    -1,   363,    30,   363,    -1,   363,    23,   363,    -1,
     363,    32,   363,    -1,   363,    31,   363,    -1,    18,   363,
      -1,    17,   363,    -1,   363,    20,   363,    -1,    -1,   363,
      20,   357,   364,   399,   358,    -1,    -1,   363,    20,    39,
     357,   365,   399,   358,    -1,    -1,   363,    20,   209,   357,
     366,   399,   358,    -1,    -1,   363,    20,    37,   357,   367,
     399,   358,    -1,   363,    15,   175,    -1,   363,    15,    18,
     175,    -1,   363,    15,     6,    -1,   363,    15,    18,     6,
      -1,     8,     9,   363,    -1,   363,    19,   363,    42,   363,
      -1,   363,    18,    19,   363,    42,   363,    -1,   363,    -1,
     363,   359,   368,    -1,    -1,   368,    -1,    -1,   363,    16,
     357,   370,   368,   358,    -1,    -1,   363,    18,    16,   357,
     371,   368,   358,    -1,    -1,   363,    16,   357,   372,   399,
     358,    -1,    -1,   363,    18,    16,   357,   373,   399,   358,
      -1,    -1,   256,   357,   374,   399,   358,    -1,     3,   357,
     369,   358,    -1,   297,   357,    26,   358,    -1,   297,   357,
     363,   358,    -1,   298,   357,   363,   358,    -1,   299,   357,
     363,   358,    -1,   300,   357,   363,   358,    -1,   301,   357,
     363,   358,    -1,   295,   357,   363,   358,    -1,   295,   357,
     363,   296,     4,   358,    -1,    -1,   317,   357,   358,   325,
     357,   375,   406,   408,   358,    -1,    -1,   318,   357,   358,
     325,   357,   376,   406,   408,   358,    -1,    -1,   319,   357,
     358,   325,   357,   377,   406,   408,   358,    -1,    -1,   298,
     357,   363,   358,   325,   357,   378,   406,   408,   358,    -1,
      -1,   297,   357,    26,   358,   325,   357,   379,   406,   408,
     358,    -1,    -1,   297,   357,   363,   358,   325,   357,   380,
     406,   408,   358,    -1,    -1,   299,   357,   363,   358,   325,
     357,   381,   406,   408,   358,    -1,    -1,   300,   357,   363,
     358,   325,   357,   382,   406,   408,   358,    -1,    -1,   301,
     357,   363,   358,   325,   357,   383,   406,   408,   358,    -1,
      -1,   320,   357,   363,   358,   325,   357,   384,   406,   408,
     358,    -1,    -1,   320,   357,   363,   359,     5,   358,   325,
     357,   385,   406,   408,   358,    -1,    -1,   320,   357,   363,
     359,     5,   359,     4,   358,   325,   357,   386,   406,   408,
     358,    -1,    -1,   320,   357,   363,   359,     5,   359,     5,
     358,   325,   357,   387,   406,   408,   358,    -1,    -1,   321,
     357,   363,   358,   325,   357,   388,   406,   408,   358,    -1,
      -1,   321,   357,   363,   359,     5,   358,   325,   357,   389,
     406,   408,   358,    -1,    -1,   321,   357,   363,   359,     5,
     359,     4,   358,   325,   357,   390,   406,   408,   358,    -1,
      -1,   321,   357,   363,   359,     5,   359,     5,   358,   325,
     357,   391,   406,   408,   358,    -1,    -1,   322,   357,     5,
     358,   325,   357,   392,   406,   408,   358,    -1,    -1,   323,
     357,   358,   325,   357,   393,   406,   408,   358,    -1,    -1,
     324,   357,   358,   325,   357,   394,   406,   408,   358,    -1,
     257,   357,   363,   359,   363,   359,   363,   358,    -1,   257,
     357,   363,   359,   363,   358,    -1,   257,   357,   363,   125,
     363,   358,    -1,   257,   357,   363,   125,   363,   129,   363,
     358,    -1,   258,   357,   363,   358,    -1,   258,   357,   395,
     363,   125,   363,   358,    -1,   258,   357,   395,   125,   363,
     358,    -1,   302,   357,   363,   358,    -1,   303,   357,   363,
     358,    -1,   304,   357,   363,   358,    -1,   305,   357,   363,
     359,   363,   358,    -1,   306,   357,   363,   359,   363,   359,
     363,   358,    -1,   307,   357,   363,   359,   363,   358,    -1,
     269,   357,   363,   359,   363,   358,    -1,   270,   357,   363,
     359,   363,   358,    -1,   271,   357,   363,   359,   363,   359,
     363,   358,    -1,   272,   357,   363,   359,   363,   359,   363,
     358,    -1,   273,   357,   363,   358,    -1,   274,   357,   363,
     359,   363,   358,    -1,   275,   357,   363,   359,   363,   358,
      -1,   276,   357,   363,   359,   363,   358,    -1,   277,   357,
     363,   358,    -1,   278,   357,   363,   358,    -1,   279,   357,
     363,   358,    -1,   280,   357,   363,   359,   363,   358,    -1,
     280,   357,   363,   358,    -1,   281,   357,   363,   359,   363,
     358,    -1,   282,   357,   363,   358,    -1,   283,   357,   363,
     359,   363,   358,    -1,   284,   357,   358,    -1,   285,   357,
     363,   358,    -1,   286,   357,   363,   358,    -1,   287,   357,
     363,   358,    -1,   288,   357,   358,    -1,   268,   357,   358,
      -1,   261,   357,   363,   359,   363,   358,    -1,   262,   357,
     363,   358,    -1,   263,   357,   363,   358,    -1,   264,   357,
     363,   358,    -1,   265,   357,   363,   358,    -1,   266,   357,
     363,   358,    -1,   267,   357,   363,   358,    -1,   327,   357,
     363,   359,   363,   358,    -1,   328,   357,   363,   358,    -1,
     329,   357,   363,   358,    -1,   330,   357,   363,   358,    -1,
     331,   357,   363,   358,    -1,   332,   357,   363,   358,    -1,
     333,   357,   363,   358,    -1,   334,   357,   363,   358,    -1,
     335,   357,   363,   358,    -1,   336,   357,   363,   359,   363,
     359,   363,   358,    -1,   337,   357,   363,   359,   363,   359,
     363,   358,    -1,   338,   357,   363,   359,   363,   359,   363,
     358,    -1,   339,   357,   363,   359,   363,   358,    -1,   340,
     357,   363,   359,   363,   358,    -1,   341,   357,   363,   359,
     363,   359,   363,   358,    -1,   342,   357,   363,   359,   363,
     359,   363,   358,    -1,   343,   357,   363,   359,   363,   358,
      -1,   343,   357,   363,   359,   363,   359,   363,   359,   363,
     358,    -1,   344,   357,   363,   358,    -1,   344,   357,   363,
     359,   363,   358,    -1,   344,   357,   363,   359,   363,   359,
     363,   358,    -1,   345,   357,   363,   358,    -1,   347,   357,
     363,   358,    -1,   348,   357,   363,   358,    -1,   349,   357,
     363,   359,   363,   358,    -1,   349,   357,   363,   359,   363,
     359,   363,   358,    -1,   350,   357,   358,    -1,   289,   357,
     363,    43,   503,   358,    -1,   290,   357,   363,   359,   503,
     358,    -1,   291,   357,   363,   359,   363,   358,    -1,   292,
     357,   363,   359,   363,   358,    -1,   293,   357,   363,   359,
     363,   359,   363,   358,    -1,   363,    15,   294,    -1,   305,
     357,   363,   359,   363,   359,   363,   358,    -1,   305,   357,
     363,   359,   363,   359,   363,   359,   363,   358,    -1,   308,
     357,   358,    -1,   309,   357,   358,    -1,   310,   357,   358,
      -1,   311,   357,   358,    -1,   312,   357,   358,    -1,   313,
      -1,   314,    -1,   315,   357,   363,   358,    -1,   316,   357,
     363,   359,   363,   358,    -1,   160,    -1,   231,    -1,    57,
      -1,   259,   357,   363,   359,   396,   358,    -1,   260,   357,
     363,   359,   396,   358,    -1,   150,   363,   253,    -1,   150,
     363,    93,    -1,   150,   363,    94,    -1,   150,   363,    98,
      -1,   150,   363,   100,    -1,   150,   363,   254,    -1,   150,
     363,   134,    -1,   150,   363,   133,    -1,   150,   363,   136,
      -1,    69,   363,   397,   113,    -1,    69,   363,   397,   114,
     363,   113,    -1,    69,   397,   113,    -1,    69,   397,   114,
     363,   113,    -1,   250,   363,   230,   363,    -1,   397,   250,
     363,   230,   363,    -1,   363,    14,   363,    -1,   363,    18,
      14,   363,    -1,   363,    13,   363,    -1,   363,    18,    13,
     363,    -1,    64,    -1,    72,    -1,    73,    -1,   399,    -1,
     218,   417,   418,    -1,   218,   417,   418,   125,   421,   400,
     401,   405,   410,   413,   414,   415,    -1,   218,   417,   418,
     148,     3,   125,   421,   400,   401,   405,   410,   413,    -1,
      -1,   249,   363,    -1,    -1,   130,    55,   402,   404,    -1,
     363,   403,    -1,   402,   359,   363,   403,    -1,    -1,    41,
      -1,   101,    -1,    -1,   252,   196,    -1,    -1,   137,   363,
      -1,    -1,   326,    55,   407,    -1,     3,    -1,   407,   359,
       3,    -1,    -1,   180,    55,   409,    -1,     3,   403,    -1,
     409,   359,     3,   403,    -1,    -1,   180,    55,   411,    -1,
     412,    -1,   411,   359,   412,    -1,     3,   403,    -1,     3,
     356,     3,   403,    -1,     5,   403,    -1,    -1,   161,   363,
      -1,   161,   363,   359,   363,    -1,   161,   363,   163,   363,
      -1,    -1,   129,   235,    -1,   129,   207,    -1,   129,   235,
     208,   162,    -1,   129,   207,   208,   162,    -1,    -1,   148,
     416,    -1,     3,    -1,   416,   359,     3,    -1,    -1,   417,
      37,    -1,   417,    95,    -1,   417,    99,    -1,   417,   135,
      -1,   417,   215,    -1,   417,   203,    -1,   417,   211,    -1,
     417,   210,    -1,   419,    -1,   418,   359,   419,    -1,    26,
      -1,   363,   420,    -1,    43,     3,    -1,     3,    -1,    -1,
     422,    -1,   421,   359,   422,    -1,   423,    -1,   425,    -1,
       3,   420,   432,    -1,     3,   356,     3,   420,   432,    -1,
     435,   424,     3,    -1,   357,   421,   358,    -1,    43,    -1,
      -1,   422,   426,   152,   423,   430,    -1,   422,   215,   423,
      -1,   422,   215,   423,   179,   363,    -1,   422,   428,   427,
     152,   423,   431,    -1,   422,   172,   429,   152,   423,    -1,
      -1,   142,    -1,    68,    -1,    -1,   178,    -1,   159,    -1,
     197,    -1,   159,   427,    -1,   197,   427,    -1,    -1,    -1,
     431,    -1,   179,   363,    -1,   242,   357,   416,   358,    -1,
     243,   153,   433,   357,   434,   358,    -1,   143,   153,   433,
     357,   434,   358,    -1,   122,   153,   433,   357,   434,   358,
      -1,    -1,   129,   152,    -1,    -1,     3,    -1,   434,   359,
       3,    -1,   357,   399,   358,    -1,   436,    -1,    96,   437,
     125,     3,   400,   410,   413,   529,    -1,   437,   158,    -1,
     437,   185,    -1,   437,   143,    -1,    -1,    96,   437,   438,
     125,   421,   400,    -1,     3,   439,    -1,   438,   359,     3,
     439,    -1,    -1,   356,    26,    -1,    96,   437,   125,   438,
     242,   421,   400,    -1,   440,    -1,    97,   229,     3,    -1,
      97,   229,   145,   256,     3,    -1,   441,    -1,    65,   144,
       3,   179,     3,   357,   442,   358,    -1,    65,   127,   144,
       3,   179,     3,   357,   442,   358,    -1,    65,   144,   145,
     256,     3,   179,     3,   357,   442,   358,    -1,    65,   238,
     144,     3,   179,     3,   357,   442,   358,    -1,    65,   238,
     144,   145,   256,     3,   179,     3,   357,   442,   358,    -1,
      65,   144,     3,   179,     3,   242,   244,   357,   442,   358,
      -1,    65,   144,   145,   256,     3,   179,     3,   242,   244,
     357,   442,   358,    -1,    65,   238,   144,     3,   179,     3,
     242,   244,   357,   442,   358,    -1,    65,   238,   144,   145,
     256,     3,   179,     3,   242,   244,   357,   442,   358,    -1,
      65,   144,    77,     3,   179,     3,   357,   442,   358,    -1,
      65,   144,    77,   145,   256,     3,   179,     3,   357,   442,
     358,    -1,    65,   238,   144,    77,     3,   179,     3,   357,
     442,   358,    -1,    65,   238,   144,    77,   145,   256,     3,
     179,     3,   357,   442,   358,    -1,    65,   144,    77,     3,
     179,     3,   242,   244,   357,   442,   358,    -1,    65,   238,
     144,    77,     3,   179,     3,   242,   244,   357,   442,   358,
      -1,     3,    -1,   442,   359,     3,    -1,   443,    -1,   302,
     357,     3,   358,    -1,   303,   357,     3,   358,    -1,   304,
     357,     3,   358,    -1,   305,   357,     3,   359,     3,   358,
      -1,   444,    -1,    97,   144,     3,    -1,   445,   447,    -1,
     232,   229,     3,    -1,   232,   229,     3,   359,   446,    -1,
       3,    -1,   446,   359,     3,    -1,    -1,   447,    66,    -1,
     447,   192,    -1,   447,    47,    45,    -1,   447,    46,    45,
      -1,   448,    -1,   188,   229,     3,    -1,   449,    -1,    38,
     229,     3,    -1,    38,   229,     3,   356,     3,    -1,   450,
      -1,    34,   229,     3,    35,    63,     3,    70,   357,   363,
     358,    -1,    34,   229,     3,    35,    63,     3,   238,   357,
     496,   358,    -1,    34,   229,     3,    35,    63,     3,   123,
     153,   357,   493,   358,   189,     3,   357,   494,   358,   495,
      -1,    34,   229,     3,    35,    63,     3,    70,   357,   363,
     358,    18,   245,    -1,    34,   229,     3,    35,    63,     3,
     123,   153,   357,   493,   358,   189,     3,   357,   494,   358,
     495,    18,   245,    -1,    34,   229,     3,    35,    63,     3,
     183,   153,   357,   492,   358,    -1,    34,   229,     3,    97,
      63,     3,    -1,    34,   229,     3,   190,    63,     3,   222,
       3,    -1,    34,   229,     3,   109,    63,     3,    -1,    34,
     229,     3,    89,    63,     3,    -1,    34,   229,     3,   245,
      63,     3,    -1,    34,   229,     3,    35,    76,     3,   503,
     498,   451,    -1,    34,   229,     3,    97,    76,     3,    -1,
      34,   229,     3,    97,     3,    -1,    34,   229,     3,   190,
      76,     3,   222,     3,    -1,    34,   229,     3,   190,     3,
     222,     3,    -1,    34,   229,     3,   169,    76,     3,   503,
     498,   451,    -1,    34,   229,     3,   169,     3,   503,   498,
     451,    -1,    34,   229,     3,    67,    76,     3,     3,   503,
     498,   451,    -1,    34,   229,     3,    67,     3,     3,   503,
     498,   451,    -1,    -1,   119,    -1,    36,     3,    -1,   452,
      -1,   146,   460,   461,     3,   462,   247,   464,   453,   455,
     529,    -1,   146,   460,   461,     3,   462,   399,    -1,    -1,
      -1,   181,   153,   235,   454,   459,    -1,    -1,   179,    80,
     456,   457,    -1,    -1,   357,     3,   358,    -1,   357,     3,
     359,     3,    -1,    90,    82,    -1,    -1,    90,   235,   458,
     217,   459,    -1,     3,    20,   363,    -1,   459,   359,     3,
      20,   363,    -1,    -1,   460,   158,    -1,   460,    92,    -1,
     460,   135,    -1,   460,   143,    -1,   148,    -1,    -1,    -1,
     357,   463,   358,    -1,     3,    -1,   463,   359,     3,    -1,
     357,   466,   358,    -1,    -1,   464,   359,   465,   357,   466,
     358,    -1,   363,    -1,   102,    -1,   466,   359,   363,    -1,
     466,   359,   102,    -1,   146,   460,   461,     3,   217,   467,
     453,    -1,     3,    20,   363,    -1,     3,    20,   102,    -1,
     467,   359,     3,    20,   363,    -1,   467,   359,     3,    20,
     102,    -1,   468,    -1,   198,   460,   461,     3,   462,   247,
     464,   453,    -1,   198,   460,   461,     3,   217,   467,   453,
      -1,   198,   460,   461,     3,   462,   399,   453,    -1,   469,
      -1,    -1,    78,     3,   470,   471,   473,   474,   475,    -1,
      -1,   357,   472,   358,    -1,     3,    -1,   472,   359,     3,
      -1,   125,    -1,   222,    -1,     4,    -1,   213,    -1,   214,
      -1,    -1,   476,    -1,   252,   357,   476,   358,    -1,   357,
     476,   358,    -1,   477,    -1,   476,   359,   477,    -1,   124,
      79,    -1,   124,   226,    -1,    88,     4,    -1,   132,    -1,
     132,     6,    -1,   175,     4,    -1,   219,     4,    -1,    79,
      -1,   478,    -1,   235,   479,   421,   217,   480,   400,   410,
     413,   529,    -1,    -1,   460,   158,    -1,   460,   143,    -1,
       3,    20,   363,    -1,     3,   356,     3,    20,   363,    -1,
     480,   359,     3,    20,   363,    -1,   480,   359,     3,   356,
       3,    20,   363,    -1,   190,   229,     3,   222,     3,    -1,
     481,    -1,    65,    84,   482,     3,    -1,    65,   204,   482,
       3,    -1,    97,    84,     3,    -1,    97,    84,   145,   256,
       3,    -1,    97,   204,     3,    -1,    97,   204,   145,   256,
       3,    -1,    -1,   145,   256,    -1,   483,    -1,    65,    91,
       3,    43,   503,    -1,    65,    91,     3,    43,   503,   102,
     363,    -1,    65,    91,     3,    43,   503,    18,   175,    -1,
      65,    91,     3,    43,   503,    70,   357,   363,   358,    -1,
      65,    91,     3,    43,   503,    18,   175,    70,   357,   363,
     358,    -1,   484,    -1,   243,     3,    -1,   243,    84,     3,
      -1,   485,    -1,    65,   489,   229,   482,     3,   357,   490,
     358,   486,    -1,    65,   489,   229,   482,     3,   356,     3,
     357,   490,   358,   486,    -1,    -1,   486,    40,    20,     5,
      -1,   486,    40,     5,    -1,   486,   179,     3,    96,     3,
      -1,   486,   179,     3,   225,     3,    -1,   486,   205,    55,
     244,   357,     3,   358,   206,     5,    -1,   486,   205,    55,
     186,   357,     3,   358,   357,   487,   358,    -1,   488,    -1,
     487,   359,   488,    -1,   205,     3,   247,   156,   227,     4,
     179,   173,     5,    -1,   205,     3,   247,   156,   227,   166,
     179,   173,     5,    -1,    65,   489,   229,   482,     3,   357,
     490,   358,   505,    -1,    65,   489,   229,   482,     3,   505,
      -1,    65,   489,   229,   482,     3,   356,     3,   357,   490,
     358,   505,    -1,    65,   489,   229,   482,     3,   356,     3,
     505,    -1,    -1,   223,    -1,   224,   223,    -1,   491,    -1,
     490,   359,   491,    -1,   183,   153,   357,   492,   358,    -1,
      63,     3,   183,   153,   357,   492,   358,    -1,   153,   357,
     416,   358,    -1,   144,   357,   416,   358,    -1,   127,   144,
     357,   416,   358,    -1,   127,   153,   357,   416,   358,    -1,
      70,   357,   363,   358,    -1,    63,     3,    70,   357,   363,
     358,    -1,   123,   153,   357,   493,   358,   189,     3,   357,
     494,   358,   495,    -1,   123,   153,   357,   493,   358,   189,
       3,   356,     3,   357,   494,   358,   495,    -1,    63,     3,
     123,   153,   357,   493,   358,   189,     3,   357,   494,   358,
     495,    -1,    63,     3,   123,   153,   357,   493,   358,   189,
       3,   356,     3,   357,   494,   358,   495,    -1,   238,   357,
     496,   358,    -1,    63,     3,   238,   357,   496,   358,    -1,
       3,    -1,   492,   359,     3,    -1,     3,    -1,   493,   359,
       3,    -1,     3,    -1,   494,   359,     3,    -1,    -1,   495,
     179,    96,    66,    -1,   495,   179,    96,   217,   175,    -1,
     495,   179,    96,   192,    -1,   495,   179,    96,   217,   102,
      -1,   495,   179,   235,    66,    -1,   495,   179,   235,   217,
     175,    -1,   495,   179,   235,   192,    -1,   495,   179,   235,
     217,   102,    -1,   495,   179,    96,   174,    -1,   495,   179,
     235,   174,    -1,   495,   165,   126,    -1,   495,   165,   212,
      -1,   495,   165,   182,    -1,   495,    86,    -1,   495,    18,
      86,    -1,   495,    86,   140,    87,    -1,   495,    86,   140,
     138,    -1,     3,    -1,   496,   359,     3,    -1,    -1,   497,
       3,   503,   498,    -1,    -1,   498,    18,   175,    -1,   498,
     175,    -1,   498,   102,     4,    -1,   498,   102,     5,    -1,
     498,   102,     7,    -1,   498,   102,     6,    -1,   498,   102,
     308,   357,   358,    -1,   498,   102,   309,   357,   358,    -1,
     498,   102,   310,   357,   358,    -1,   498,   102,    64,    -1,
     498,   102,   357,   363,   358,    -1,   498,    40,    -1,   498,
      40,   357,     5,   359,     5,   358,    -1,   498,    40,   357,
       5,   358,    -1,   498,    45,   357,     5,   359,     5,   358,
      -1,   498,    45,   357,     5,   358,    -1,   498,    45,    -1,
     498,   238,   153,    -1,   498,   238,    -1,   498,   183,   153,
      -1,   498,   153,    -1,   498,    71,     4,    -1,   498,    70,
     357,   363,   358,    -1,   498,    63,     3,   238,    -1,   498,
      63,     3,   183,   153,    -1,   498,    63,     3,    70,   357,
     363,   358,    -1,   498,    48,    44,    43,   357,   363,   358,
      49,    -1,   498,    48,    44,    43,   357,   363,   358,    50,
      -1,   498,    48,    44,    43,   357,   363,   358,    -1,   498,
      43,   357,   363,   358,    49,    -1,   498,    43,   357,   363,
     358,    50,    -1,   498,    43,   357,   363,   358,    -1,    -1,
     357,     5,   358,    -1,   357,     5,   359,     5,   358,    -1,
      -1,    56,    -1,    -1,   501,   236,    -1,   501,   255,    -1,
      -1,   502,    74,   217,     4,    -1,   502,    75,     4,    -1,
      59,   499,    -1,   221,   499,   501,    -1,   216,   499,   501,
      -1,   171,   499,   501,    -1,   149,   499,   501,    -1,   141,
     499,   501,    -1,    58,   499,   501,    -1,   187,   499,   501,
      -1,   103,   499,   501,    -1,   121,   499,   501,    -1,   105,
     499,   501,    -1,   106,    -1,   234,    -1,   228,    -1,   104,
      -1,   253,    -1,    74,   499,   502,    -1,   246,   357,     5,
     358,   502,    -1,    56,   499,    -1,   248,   357,     5,   358,
      -1,   233,    -1,    53,    -1,   170,    -1,   164,    -1,   220,
     500,   502,    -1,   226,   500,   502,    -1,   167,   500,   502,
      -1,   157,   500,   502,    -1,   112,   357,   504,   358,   502,
      -1,   217,   357,   504,   358,   502,    -1,    54,    -1,   239,
      -1,   240,    -1,     4,    -1,   504,   359,     4,    -1,   506,
     424,   399,    -1,    -1,   143,    -1,   198,    -1,   507,    -1,
     217,   204,     3,    -1,   217,   204,   102,    -1,   217,   508,
      -1,   509,    -1,   508,   359,   509,    -1,     8,    20,   363,
      -1,     8,     9,   363,    -1,   510,    -1,    65,   184,     3,
     357,   511,   358,    43,    52,   515,   113,    -1,    65,   184,
       3,   357,   511,   358,    52,   515,   113,    -1,    65,    10,
     198,   184,     3,   357,   511,   358,    43,    52,   515,   113,
      -1,    65,    10,   198,   184,     3,   357,   511,   358,    52,
     515,   113,    -1,    65,   128,     3,   357,   511,   358,   195,
     514,    43,    52,   515,   113,    -1,    65,   128,     3,   357,
     511,   358,   195,   514,    52,   515,   113,    -1,    65,    10,
     198,   128,     3,   357,   511,   358,   195,   514,    43,    52,
     515,   113,    -1,    65,    10,   198,   128,     3,   357,   511,
     358,   195,   514,    52,   515,   113,    -1,    -1,   512,    -1,
     513,    -1,   512,   359,   513,    -1,     3,   503,    -1,    16,
       3,   503,    -1,   177,     3,   503,    -1,   139,     3,   503,
      -1,   141,    -1,   149,    -1,   246,    -1,   226,    -1,    54,
      -1,   121,    -1,   103,    -1,    58,    -1,   106,    -1,   228,
      -1,    -1,   515,   516,    -1,   515,    52,   515,   113,    -1,
     515,   145,   515,   113,   145,    -1,   515,   251,   515,   113,
     251,    -1,   515,   155,   515,   113,   155,    -1,   515,   120,
     515,   113,   120,    -1,   515,    69,   515,   113,    69,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
      20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,
      42,    -1,   218,    -1,   146,    -1,   235,    -1,    96,    -1,
     125,    -1,   249,    -1,   217,    -1,   148,    -1,   247,    -1,
      65,    -1,    97,    -1,   229,    -1,   144,    -1,   230,    -1,
     114,    -1,   108,    -1,    85,    -1,    90,    -1,    60,    -1,
     193,    -1,   154,    -1,   151,    -1,    62,    -1,   176,    -1,
     118,    -1,    61,    -1,   131,    -1,   116,    -1,   177,    -1,
     139,    -1,   129,    -1,    46,    -1,   200,    -1,   191,    -1,
     115,    -1,   202,    -1,    51,    -1,   107,    -1,   199,    -1,
     201,    -1,    43,    -1,   179,    -1,   180,    -1,    55,    -1,
     130,    -1,   137,    -1,   161,    -1,   163,    -1,   152,    -1,
     159,    -1,   197,    -1,   142,    -1,   178,    -1,   126,    -1,
      68,    -1,   172,    -1,   242,    -1,   175,    -1,   102,    -1,
     183,    -1,   153,    -1,   238,    -1,    70,    -1,   123,    -1,
     189,    -1,    66,    -1,   192,    -1,   174,    -1,   141,    -1,
     149,    -1,   246,    -1,   226,    -1,    54,    -1,   121,    -1,
     103,    -1,    58,    -1,   106,    -1,   228,    -1,   216,    -1,
     105,    -1,    74,    -1,   239,    -1,    53,    -1,   237,    -1,
     111,    -1,   147,    -1,    37,    -1,    95,    -1,   256,    -1,
     250,    -1,   252,    -1,   184,    -1,   128,    -1,   195,    -1,
     357,    -1,   358,    -1,   359,    -1,   355,    -1,   356,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      17,    -1,   360,    -1,   297,    -1,   298,    -1,   299,    -1,
     300,    -1,   301,    -1,     8,    -1,   517,    -1,    97,   184,
       3,    -1,    97,   184,   145,   256,     3,    -1,    97,   128,
       3,    -1,    97,   128,   145,   256,     3,    -1,   518,    -1,
      60,     3,   357,   358,    -1,    60,     3,   357,   519,   358,
      -1,   520,    -1,   519,   359,   520,    -1,     5,    -1,     4,
      -1,     7,    -1,   175,    -1,     6,    -1,     3,    -1,     8,
      -1,   521,    -1,    65,   201,     3,   522,   523,   179,     3,
     129,   107,   199,    52,   515,   113,    -1,    51,    -1,    36,
      -1,   146,    -1,   235,    -1,    96,    -1,   524,    -1,    97,
     201,     3,    -1,    97,   201,   145,   256,     3,    -1,    34,
     201,     3,   109,    -1,    34,   201,     3,    89,    -1,   525,
      -1,    65,   346,   482,     3,   526,    -1,    -1,   526,   527,
      -1,   351,   252,     5,    -1,   351,     5,    -1,   352,    55,
       5,    -1,   352,     5,    -1,   353,     5,    -1,   166,     5,
      -1,   354,    -1,    18,   354,    -1,   528,    -1,    97,   346,
       3,    -1,    97,   346,   145,   256,     3,    -1,    34,   346,
       3,   526,    -1,    34,   346,     3,    47,    -1,    34,   346,
       3,    47,   252,     5,    -1,    34,   346,     3,   190,   222,
       3,    -1,    -1,   194,    26,    -1,   194,   530,    -1,     3,
      -1,   530,   359,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   425,   425,   426,   431,   438,   439,   440,   454,   455,
     473,   481,   489,   495,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   528,   528,   537,   537,   539,   539,
     541,   541,   545,   546,   547,   548,   549,   552,   553,   556,
     557,   560,   561,   564,   564,   565,   565,   566,   566,   574,
     574,   582,   582,   593,   597,   598,   599,   600,   601,   602,
     603,   604,   608,   608,   610,   610,   612,   612,   615,   615,
     617,   617,   619,   619,   621,   621,   623,   623,   625,   625,
     628,   628,   630,   630,   632,   632,   634,   634,   636,   636,
     638,   638,   640,   640,   642,   642,   645,   645,   647,   647,
     649,   649,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   688,   689,   690,   691,
     692,   693,   694,   695,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   714,   715,   716,   717,   718,   720,   721,   722,   723,
     724,   726,   727,   729,   730,   731,   733,   734,   735,   736,
     743,   750,   757,   761,   765,   769,   773,   777,   783,   784,
     785,   788,   794,   801,   802,   803,   804,   805,   806,   807,
     808,   809,   812,   814,   816,   818,   822,   830,   841,   842,
     845,   846,   849,   857,   865,   876,   886,   887,   900,   916,
     917,   918,   919,   922,   929,   937,   938,   939,   942,   943,
     946,   947,   951,   952,   955,   957,   961,   962,   965,   967,
     971,   972,   975,   976,   979,   985,   992,  1001,  1002,  1003,
    1004,  1007,  1008,  1009,  1010,  1011,  1014,  1015,  1018,  1019,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1033,
    1034,  1035,  1043,  1049,  1050,  1051,  1054,  1055,  1058,  1059,
    1063,  1070,  1071,  1072,  1075,  1076,  1080,  1082,  1084,  1086,
    1088,  1092,  1093,  1094,  1097,  1098,  1101,  1102,  1105,  1106,
    1107,  1110,  1111,  1114,  1115,  1119,  1121,  1123,  1125,  1128,
    1129,  1132,  1133,  1136,  1140,  1150,  1158,  1159,  1160,  1161,
    1165,  1169,  1171,  1175,  1175,  1177,  1182,  1189,  1196,  1206,
    1213,  1220,  1228,  1238,  1246,  1256,  1264,  1273,  1282,  1292,
    1300,  1309,  1318,  1328,  1337,  1349,  1354,  1359,  1365,  1372,
    1379,  1386,  1396,  1403,  1412,  1419,  1425,  1433,  1439,  1447,
    1448,  1449,  1450,  1451,  1455,  1462,  1471,  1478,  1484,  1495,
    1498,  1504,  1510,  1517,  1523,  1530,  1536,  1542,  1548,  1554,
    1560,  1566,  1572,  1578,  1584,  1590,  1596,  1602,  1608,  1614,
    1622,  1623,  1624,  1627,  1635,  1641,  1654,  1655,  1655,  1659,
    1660,  1663,  1664,  1665,  1669,  1670,  1670,  1674,  1682,  1692,
    1693,  1694,  1695,  1696,  1699,  1699,  1702,  1703,  1706,  1716,
    1729,  1730,  1730,  1733,  1734,  1735,  1736,  1739,  1743,  1744,
    1745,  1746,  1752,  1755,  1761,  1766,  1772,  1776,  1776,  1781,
    1782,  1784,  1785,  1789,  1790,  1794,  1795,  1796,  1799,  1800,
    1801,  1802,  1806,  1807,  1811,  1812,  1813,  1814,  1815,  1816,
    1817,  1818,  1822,  1830,  1839,  1840,  1841,  1845,  1856,  1868,
    1879,  1894,  1899,  1903,  1904,  1908,  1910,  1912,  1914,  1918,
    1919,  1925,  1929,  1931,  1933,  1935,  1937,  1942,  1946,  1947,
    1951,  1960,  1970,  1974,  1975,  1976,  1977,  1978,  1979,  1981,
    1985,  1986,  1989,  2004,  2011,  2026,  2039,  2054,  2067,  2068,
    2069,  2072,  2073,  2076,  2077,  2078,  2079,  2080,  2081,  2082,
    2083,  2084,  2086,  2088,  2090,  2092,  2094,  2098,  2099,  2102,
    2103,  2106,  2107,  2110,  2111,  2112,  2113,  2114,  2115,  2116,
    2117,  2118,  2119,  2120,  2121,  2122,  2123,  2124,  2125,  2126,
    2127,  2130,  2131,  2134,  2134,  2144,  2145,  2146,  2147,  2148,
    2149,  2150,  2151,  2152,  2153,  2154,  2155,  2162,  2163,  2164,
    2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,  2173,  2174,
    2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,  2185,  2186,
    2187,  2190,  2191,  2194,  2195,  2196,  2199,  2200,  2201,  2205,
    2206,  2207,  2208,  2209,  2210,  2211,  2212,  2213,  2214,  2215,
    2216,  2217,  2218,  2219,  2220,  2221,  2222,  2223,  2224,  2225,
    2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,  2234,  2235,
    2236,  2237,  2240,  2241,  2244,  2257,  2258,  2259,  2263,  2266,
    2267,  2268,  2269,  2269,  2271,  2272,  2280,  2284,  2290,  2296,
    2303,  2310,  2316,  2322,  2329,  2338,  2339,  2342,  2343,  2346,
    2347,  2348,  2349,  2352,  2353,  2354,  2355,  2356,  2357,  2358,
    2359,  2360,  2361,  2368,  2369,  2370,  2371,  2372,  2373,  2374,
    2375,  2378,  2379,  2380,  2380,  2380,  2381,  2381,  2381,  2381,
    2381,  2381,  2382,  2382,  2382,  2382,  2382,  2382,  2382,  2382,
    2382,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2384,  2384,
    2384,  2384,  2385,  2385,  2385,  2385,  2385,  2385,  2385,  2385,
    2385,  2385,  2385,  2385,  2386,  2386,  2386,  2386,  2386,  2386,
    2386,  2386,  2387,  2387,  2387,  2387,  2387,  2387,  2387,  2387,
    2388,  2388,  2388,  2388,  2388,  2388,  2388,  2388,  2388,  2389,
    2389,  2389,  2389,  2389,  2389,  2389,  2389,  2390,  2390,  2390,
    2391,  2391,  2391,  2391,  2391,  2391,  2391,  2391,  2392,  2392,
    2392,  2392,  2392,  2392,  2392,  2393,  2393,  2393,  2393,  2393,
    2393,  2393,  2394,  2394,  2394,  2394,  2395,  2395,  2395,  2395,
    2395,  2395,  2395,  2395,  2395,  2395,  2395,  2395,  2396,  2396,
    2396,  2396,  2396,  2397,  2404,  2408,  2414,  2420,  2426,  2438,
    2442,  2448,  2456,  2457,  2460,  2461,  2462,  2463,  2464,  2465,
    2466,  2473,  2477,  2485,  2486,  2489,  2490,  2491,  2494,  2498,
    2504,  2513,  2521,  2532,  2536,  2545,  2546,  2550,  2551,  2552,
    2553,  2554,  2555,  2556,  2557,  2560,  2564,  2570,  2580,  2587,
    2594,  2602,  2612,  2613,  2614,  2617,  2618
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
  "CSV", "CONFLICT", "EXCLUDED", "NOTHING", "AGAINST", "DATABASE",
  "DECLARE", "DEFERRABLE", "DEFERRED", "DELIMITER", "DISABLE", "DO",
  "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE",
  "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT",
  "DOUBLE", "DATETIME", "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE",
  "ESCAPED", "EXCEPT", "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN",
  "FETCH", "FIRST", "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FORMAT",
  "FROM", "FULL", "FULLTEXT", "FUNCTION", "FOR", "GROUP", "HANDLER",
  "HEADER", "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY",
  "HOUR_SECOND", "HAVING", "IMMEDIATE", "INOUT", "INITIALLY", "INTEGER",
  "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTERSECT", "INTO", "INT",
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
     596,   597,   598,   599,   600,    59,    46,    40,    41,    44,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   361,   362,   362,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   364,   363,   365,   363,   366,   363,
     367,   363,   363,   363,   363,   363,   363,   363,   363,   368,
     368,   369,   369,   370,   363,   371,   363,   372,   363,   373,
     363,   374,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   375,   363,   376,   363,   377,   363,   378,   363,
     379,   363,   380,   363,   381,   363,   382,   363,   383,   363,
     384,   363,   385,   363,   386,   363,   387,   363,   388,   363,
     389,   363,   390,   363,   391,   363,   392,   363,   393,   363,
     394,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   395,   395,
     395,   363,   363,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   363,   363,   363,   363,   397,   397,   363,   363,
     363,   363,   363,   363,   363,   398,   399,   399,   399,   400,
     400,   401,   401,   402,   402,   403,   403,   403,   404,   404,
     405,   405,   406,   406,   407,   407,   408,   408,   409,   409,
     410,   410,   411,   411,   412,   412,   412,   413,   413,   413,
     413,   414,   414,   414,   414,   414,   415,   415,   416,   416,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   418,
     418,   418,   419,   420,   420,   420,   421,   421,   422,   422,
     423,   423,   423,   423,   424,   424,   425,   425,   425,   425,
     425,   426,   426,   426,   427,   427,   428,   428,   429,   429,
     429,   430,   430,   431,   431,   432,   432,   432,   432,   433,
     433,   434,   434,   435,   398,   436,   437,   437,   437,   437,
     436,   438,   438,   439,   439,   436,   398,   440,   440,   398,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   442,   442,   442,   443,   443,
     443,   443,   398,   444,   398,   445,   445,   446,   446,   447,
     447,   447,   447,   447,   398,   448,   398,   449,   449,   398,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     451,   451,   451,   398,   452,   452,   453,   454,   453,   455,
     455,   456,   456,   456,   457,   458,   457,   459,   459,   460,
     460,   460,   460,   460,   461,   461,   462,   462,   463,   463,
     464,   465,   464,   466,   466,   466,   466,   452,   467,   467,
     467,   467,   398,   468,   468,   468,   398,   470,   469,   471,
     471,   472,   472,   473,   473,   474,   474,   474,   475,   475,
     475,   475,   476,   476,   477,   477,   477,   477,   477,   477,
     477,   477,   398,   478,   479,   479,   479,   480,   480,   480,
     480,   398,   398,   481,   481,   398,   398,   398,   398,   482,
     482,   398,   483,   483,   483,   483,   483,   398,   484,   484,
     398,   485,   485,   486,   486,   486,   486,   486,   486,   486,
     487,   487,   488,   488,   485,   485,   485,   485,   489,   489,
     489,   490,   490,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   492,   492,   493,
     493,   494,   494,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   496,   496,   497,   491,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   499,   499,
     499,   500,   500,   501,   501,   501,   502,   502,   502,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   504,   504,   505,   506,   506,   506,   398,   507,
     507,   507,   508,   508,   509,   509,   398,   510,   510,   510,
     510,   510,   510,   510,   510,   511,   511,   512,   512,   513,
     513,   513,   513,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   515,   515,   515,   515,   515,   515,   515,
     515,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,   398,   517,   517,   517,   517,   398,
     518,   518,   519,   519,   520,   520,   520,   520,   520,   520,
     520,   398,   521,   522,   522,   523,   523,   523,   398,   524,
     524,   398,   398,   398,   525,   526,   526,   527,   527,   527,
     527,   527,   527,   527,   527,   398,   528,   528,   398,   398,
     398,   398,   529,   529,   529,   530,   530
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
#define YYPACT_NINF -1568
static const yytype_int16 yypact[] =
{
    1937,  -120,   -84,   147, 10680,   372, -1568,   501, -1568,   233,
     265, -1568,    25, -1568,   282,    41,    81,   499,   166, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568,   531,   534,   555,   612,   268,   439,
     483,   629,   498,   669,    66,   685,   690,   483, -1568,   485,
     580,   483,   481, -1568,    82,    74,    88,   709,   105,   112,
     116,   125,   129,   392,   724,   726,   392,   122,    68,   391,
   -1568,  6163,   766,   541,    42, -1568,   783, -1568,  1937,   419,
      31,    32,    48,   440,    34,   -12,   554,   817,   794,   823,
     489,   665,   133,   599,   507,   108,   856, -1568,    72,   872,
     483,   522,   528,   883, -1568, -1568, -1568,   -94, -1568,   646,
   -1568,   656, -1568, -1568,   661, -1568,   663, -1568,   678, -1568,
     693, -1568,   707, -1568, -1568, -1568, -1568, -1568,   980, -1568,
     765,   988,  9643,  9643, -1568, -1568,   992,   279, -1568, -1568,
   -1568, -1568,  1000,  9643,  9643,  9643, -1568, -1568, -1568,  7207,
   -1568, -1568,   660, -1568, -1568, -1568,   667, -1568, -1568, -1568,
   -1568, -1568,   670,   694,   702,   720,   723,   729,   763,   779,
     787,   803,   811,   835,   868,   880,   896,   897,   898,   899,
     900,   901,   918,   922,   923,   926,   928,   930,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   943,   944,   945,
     951,   952,   953,   954,   955,   956,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   968,   969, -1568, -1568,   970,
     972,   973,   974,   983,   985,   986,   987,   991,   993,   994,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1010,  1011,
    1012,  1013,  1016,  1017,  1021,  1022,  1028,  1029,  1031,  1035,
    1036,  1039,  9643, 11287,   -99, -1568,   873,    44,    45,    17,
      40,   -49,   545, -1568, -1568,   979, -1568, -1568,  1258,  1357,
   -1568, -1568, -1568, -1568,   383,    93,  1341,    90,  1342,   438,
      91,  1343,  1155,  1186,    96,  1406, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568,   128, -1568,  1407,  1408, -1568, -1568,
   10947,  1233,    76,  1410,  1236,  1160,  1414,    76, -1568, -1568,
       2, -1568,  1239,   273,  1164, -1568,  1418,  1419,   314,  1397,
   -1568,   260,  -188,    42,  1424,  1425,  1426,  1427,  1430,  1435,
    1436,  1438,  -147,  1443,  -106, 11408, 11408, -1568,  1445,  9643,
    9643,  1242,  1242, -1568,  9643, 10730,   291,  1448,  1450, -1568,
    9643,  6511,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,
    9643,  1098,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,
    9643,  9643,  9643,  9643,  9643,  9643,  9643,  1105,  9643,  9643,
    9643,  1106,  9643,  9643,  9643,  9643,  9643,  9643,  7555,  9643,
    9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  1107,
    1109,  1111,  1114,  1121,  9643,  9643,  1129,  1131,  1133,  9643,
    9643,  1488,  1136,  1137,  9643,  9643,  9643,  9643,  9643,  9643,
    9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,
    9643,  9643,  9643,  9643,  9643,  9643,  1138,  2684, -1568,  9643,
    9643,  9643,  9643,  9643,    46,  1140,   712,  9643,  6859,  9643,
    9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,  9643,
    9643,  1495, -1568,    42,  1496,  9643,  1497,  1499,   300,  1153,
     315,  1511,    42, -1568, -1568, -1568,   -42, -1568,    42,  1363,
    1338, -1568,  1514, -1568, -1568,  1516,  1520,  1522,  1524,  1529,
   -1568,  1534,  1535,  1536, 10947,  1537,  1320,  1541,  1545,  1546,
    1547,  1548,  1196,  1549,    19,   465,  1551, -1568, -1568, -1568,
   -1568,   469,  1203,  1204, -1568, -1568,  1205,  1205,  1205,  1205,
    1205, -1568,  1205, -1568,  1206,  1205,  1205,  1205,  1509, -1568,
    1509, -1568,  1205,  1205,  1205,  1212,  1509,  1205,  1509, -1568,
   -1568, -1568, -1568, -1568,  1213,  1215, -1568,   449,  1550, 10947,
    1570,  1571,  1574,  1224,  1225, -1568,  -196,  1580,  1583,  1409,
    1229, -1568, -1568, -1568,  1417,  1622,  1459,  1398,  1652,    96,
    -109, -1568,   319, -1568, -1568,    21, -1568,  9643,  1476,    42,
    -103,   528, -1568, -1568, -1568, -1568, -1568, -1568, -1568,  1654,
    1678,   -96, -1568,  1654,   399, -1568,  1579, -1568,  1324, 11408,
   10815,   299, -1568,  9643,  9643, -1568,  1325,  1472,   550, -1568,
   -1568, -1568,  3008,  7903,  1621,  1648,  1692,  3332,  3656,  3980,
    4304,  4628,  4952, -1568,  1998,  2315,  2639,  2963,  5276,  3287,
    3611,  3935,  5600,  7727,  7751,   164,  4259,  7774,  4583, -1568,
    7923,  7967,  8019, -1568, 11332,  4907,  5231,  5555,  5879,  2360,
    1333,  8076,  8115,  8272,  8336,  8360,  8383,  8417,  8440,  5924,
    6321,  6369, -1568, -1568, -1568, -1568, -1568,  8464,  6527,  1367,
    1369,  1370,   577,   639,  1339,  1371,  1373,  6575,  8621,  8701,
    8724,  8781,  8805,  8970,  9011,  9042,  6598,  6621,  6677,  6725,
    6889,  6940,  6963,  6986,   752,  9065,  9105,  9130,  7027, -1568,
   -1568,  7424,  2034,  1069,  6250,  6250, -1568,    57, -1568, -1568,
    1481,  9643,  9643,  1344,  9643, 11358,  1368,  1372,  1374,  9643,
    2250,  2573,   866,  1184,  1192,  1192,   525,   525,   525,   525,
     651, -1568, -1568, -1568,  -103,  1575, -1568, -1568,  1375,   104,
    1573,  1577,  1582, -1568, -1568, -1568,     9,   167,   545,  1338,
    1338,  1576,  1554,    42, -1568,  1584, -1568,    16, 10947, 10947,
    1724, -1568, -1568, -1568, -1568, -1568, 10947,  1735,  1517,  1519,
   -1568, -1568, -1568, -1568, -1568, -1568,  1737, -1568,  1738, -1568,
   -1568,    76,    76,  1741, -1568, -1568, -1568, -1568, -1568, -1568,
    1749, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
    1749, -1568, -1568, -1568,  1750,  1752,  1588,  1416,  9643,  1420,
   -1568, 10947, 10947, 10947,  1572,    76,  1521,   149,  -159,  1587,
    1771,   496,  1772,  -154,  1773,  1775,  1600, -1568, -1568,  1777,
     401, -1568,   979, -1568,  1779, -1568, -1568, -1568,   860, 11408,
    1728,  1623,  -103, -1568, -1568,  1765,  -145, -1568,   336,  1431,
   -1568,  -145,  1431,  1610,  9643, -1568,  9643, -1568,  9643, 11191,
   10928,  1710,  1442,  9643,  9643, -1568,  9643, 11117,  1644,  1644,
    9643, -1568, -1568, -1568, -1568, -1568, -1568,  9643,  9643,  9643,
    9643, -1568,  9643,  9643,  9643, -1568, -1568, -1568, -1568,  9643,
    9643, -1568,  9643, -1568, -1568, -1568, 10947, 10947,  9643,  9643,
    9643,  1797, -1568,  1478,  1483,  1486,  1490,  1491,  1492, -1568,
   -1568, -1568,  9643,  9643,  9643, -1568,  9643,  1462,  1463,  1464,
    1498,  1817,  1500,  1819,  1501,  1471,  1473,  9643, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568,  9643,  9643,  9643,  9643,
    9643,  9643,  9643,  9643, -1568,  9643, -1568, -1568, -1568,  9643,
   -1568, -1568,  9643,  1472,  6250,  6250,  1613, 11383,  9643, -1568,
   -1568, -1568,  1472,  1702,    42,  1830,   300,  1707,  1707,  1707,
    9643,  1834,  1835,  1476, -1568, -1568,    42,  9643,   -78,    42,
    1485,  1690,  1691,  1504, -1568, -1568, 10947, 10865, -1568, -1568,
    1842,  1845, -1568, -1568,  1505,  1508,   360,  -118,   658,  -118,
    -118, -1568,   377,  -118,  -118,  -118,   658,   658,  -118,  -118,
    -118,   380,   658,  -118,   658,  1510,  1513,  1783,  9643, 11408,
     149, -1568, -1568, -1568,  1686, -1568,  1523, -1568,  1525,  1527,
    1530,  1543,   382, -1568,  1612,   149,  1851,   168,  1824, -1568,
    1748,  1635,   149,   172,  1715,  1898,  -108,  1899,  1552,  1751,
     468,  1553,  1556,  1753,  1558,   388, -1568,  1905,  1472, -1568,
   -1568,  1907,   -26,  1911,  1921,  1922,  1585,   619, -1568,  1581,
   -1568,   476,  9643,  1736, -1568,  8251,  1776,  1928, -1568, -1568,
    1931,  8599,  -131, -1568,  -131, -1568, -1568, 11408, 11225, -1568,
    9643,  1590, -1568,  7678,   946,  9154,  9643,  9643,  1591,  1593,
    9311,  9406,  9471,  7051,  7075,  9495,  9518,  9660,  9707,  9730,
    9755,  1594,  1596,  9812,  9836,  7231,  1597,  1599,  1601,  1602,
    1606,  1607,  1608,  1018,  7282,  9859, 10001, -1568, -1568, -1568,
    1609,   390,  1611,   396,  1619, -1568, -1568, 10024,  7305,  7328,
    7377, 10048, 10071,  7401,  7573,  1042,  1103,  1127,  1620,  1626,
    9643,  1472,  9643,  1592,  1472,  1472,  1472,  1627,  1893,  1813,
    -103, -1568, -1568,  1805,  1630,  1631,  1632, 11408,  1947,    35,
    1623, -1568, 11408,  9643,  1641, -1568, -1568,   -78,  9643,  1642,
    1646,  1966, 10865, 10865, -1568,  1802,  1989,  1647,  1649,  1674,
    1957,  2002,  1675,  2031,    99, -1568, -1568, -1568,  1883,  1884,
   -1568, 10865, -1568, -1568,  1843,   571, -1568,  2035, -1568, -1568,
    1822,  2063, -1568,  2064, -1568, -1568, -1568,  1712, 10096,   398,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
     575,   149,  2067,  2074,  2076,  2078, -1568,  2079,  1730,   400,
    1732,  1846,   149, -1568,  1329,  1984,  1740,   430,  1854,   149,
    2103,   189,   401, -1568,   272,  9643,  1755,  1756,  1758,  2104,
    2104,  1759,  1966,    54,   401, 10947, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568,   619,   432,   619,   -19,   437,  1780, -1568,
    1151,   130, -1568, -1568, 11408,  1873,  2089, -1568, -1568, 11408,
     444, -1568,  1938, -1568, -1568, 11408,  2114,  9643, -1568, -1568,
    9643, -1568, 10119, 10762, -1568, -1568, -1568, -1568, -1568,  9643,
    9643, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568,  9643, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
    9643,  9643, -1568, -1568,  1798,  1798,  1798, -1568,  1806,   800,
   -1568,  1807,   810, -1568,  1798,  1798, -1568,  9643,  9643,  9643,
   -1568, -1568,  9643,  9643, -1568,  9643, -1568,  9643, -1568,  9643,
   -1568, -1568,  1782,  1785,  1592,  1786,  1787,  1788, -1568,  9643,
    9643,  1476,  1702, -1568,  2138,  2138,  2138,  9643,  9643,  2144,
    1736, 11408,  2104, -1568, 10153,  2145,  2146, -1568,   458, -1568,
   -1568, 10865, -1568, -1568,  2147,  9643,  2151,  2107,    92,  9643,
   -1568, -1568, -1568, -1568, -1568, -1568,  1794,  1800,  1803,  9643,
   -1568, -1568, -1568,  1686,  2109, -1568,  1801,  2158, -1568,   658,
   -1568,   658,   658,  9643, -1568, -1568,  2115, -1568,   466,  1808,
    1810,  1820,  1818, -1568,   149, -1568,   149,  1828,   472,  1744,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568,  1988,   149, -1568,  1833,   474,  1838,  1948,   149,   477,
    1844,  2047,  2049,  1847, 10177,  2145,  2104,  2104, -1568,   490,
     493,  2146,   495,    26, -1568, -1568, -1568,   502, -1568, -1568,
   -1568, -1568,  2200, -1568, -1568,   476,  9643,  9643, -1568, -1568,
    1849, -1568,  8947, -1568,  9295,  1861,  2126,  1736,  1853, 10200,
   10223, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, 10246, 10269, 10292,  1798,  1798,  1798,  1798,  1798,  1798,
    1175, 10315,  2169,  2045,  2045,  2045,  1798,  1869,  1870,  1872,
    1798,  1875,  1876,  1877,  1798,  2045,  2045, 10342, 10365, 10389,
   10412, 10437,  7647, 10460, 10494, -1568, -1568, -1568, -1568, -1568,
   11248,   208, 11408,  1623,  1813, -1568,   504,   518,   523, 11408,
   11408,  2213, -1568,   542,  2218, -1568,   546, -1568,   549, -1568,
    2234, -1568,   566, 10518,   568,  1881,  1882,  2088, -1568, 10541,
    1891,  1892,  1895, 10564,   579, -1568,  2068, -1568, -1568, 10587,
   -1568,  2392, -1568, -1568, -1568, -1568,  2251,   573,   582,   149,
   -1568, -1568,  2716,  3040,  3364,  3688,  4012,  4336,  2203,   585,
     149, -1568,   149,  1901,   587,    54,  9643,  1909,  1926,  1966,
   -1568,   593,   621,   623, -1568,  2253, -1568,   644, -1568,   463,
    2259,  2209,   840, -1568,   437, -1568, 11408, 11408,  2284,  2285,
   -1568, 11408, -1568, 11408,  8599,  1932, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568,  2045,  2045,  2045,  2045,  2045,  2045, -1568,
    9643, -1568,  2287,  2236,  1934,  1935,  1941,  2045, -1568,  1970,
    1975,  2045, -1568,  1976,  1977,  2045,  1946,  1950, -1568, -1568,
   -1568, -1568, -1568,  9643, -1568, -1568, -1568,  2113,  9643, -1568,
    2182,  1476, -1568,  2309, -1568, -1568,  9643, -1568,  2071,  2124,
    2318, -1568,  2319, -1568, -1568,  2327,   773, -1568,  2343,  9643,
    9643, -1568, -1568, -1568, -1568, -1568, -1568,  2271, -1568,  4660,
   -1568, -1568,  4984, -1568,  1991, -1568, -1568,   647, -1568,  2281,
    2231,  2207,  2198,  2105, -1568, -1568,   649,   653,   149, -1568,
      26, -1568, 10610,  2145,  2146,   655,  2165, -1568, -1568, -1568,
   -1568, -1568,  2350,    -9,   -86, -1568, -1568,  2338,  2000,   659,
    2357,  2272,  2003,  2005,  2006,  2019,  2036,  2043, 10633, -1568,
    2044,  2390, -1568, -1568, -1568,  2048,  1798,  2050,  2054,  2055,
    1798,  2057,  2058,  2072, -1568, -1568, 10656, -1568, 11248,   -97,
    2257,  1623, -1568, 11408, -1568,  2418, -1568, -1568,  2073, -1568,
   -1568,  2075, 10683, 10706, -1568,  5308, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568,  5632, -1568, -1568,   662, -1568,
     717,   745, -1568,  2419, -1568,  2429,  2433,  2080,  2082,  9643,
    2437, -1568,   747,   -17, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568,  2438,   437,  2083, -1568,  2045, -1568, -1568, -1568,
    2045, -1568, -1568, -1568, -1568, -1568,  2240,  2241,  2104, -1568,
   -1568,  2094, -1568, -1568,   888, -1568,  5956, -1568, -1568, -1568,
    2266, -1568,   871, -1568, -1568,  2453,  2456, 11408,  2443, -1568,
    2461, -1568, -1568, -1568, -1568,  2462,  2110,  1798,  1798,  2111,
    1798,  1798,  2305,  2308,  2112,  2469, -1568, -1568, -1568,  2470,
    2471,  2469,  2117,  2118,  9643, -1568,  2261,   437, -1568,  2045,
    2045, -1568,  2045,  2045, -1568, -1568, -1568,   750,   874,  2122,
     875,  2123,  2275, 11408,  2285, -1568,  2125,  2127,  2128,  2132,
   -1568,  2481,  2488,  2469,  2469, -1568,  2288,  2487,  2000, -1568,
   -1568, -1568, -1568,   317, -1568,  2139,   877,   882,   445,  2498,
     884, -1568, -1568,   -18,  2362,   335,   106,  2469, -1568, -1568,
    2423,  2264, -1568,  2288, -1568, -1568,   370, -1568, -1568, -1568,
     464,   517,   886,   445,   445,  2348, -1568, -1568, -1568, -1568,
   -1568, -1568,   340, -1568, -1568, -1568,   343, -1568,  2289, -1568,
   -1568, -1568, -1568,   445,    47,  2335,  2340,  2351,  2352,  2521,
    2522, -1568, -1568
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1568,  2440,   -81, -1568, -1568, -1568, -1568,  -832, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568,  1651,  2177, -1568,  -211,  -584,
    1166, -1568, -1284, -1568,   851, -1220, -1568, -1542, -1568,  -981,
   -1568,   927, -1176, -1568, -1568, -1265, -1568, -1568,  2077,  -259,
    -253,  2081,  -473,  1708, -1568, -1568,   487, -1568, -1568, -1568,
    1362,  1578,   270,  -134, -1568, -1568, -1568,  2444,  1965, -1568,
   -1568, -1029, -1568, -1568, -1568, -1568, -1568, -1568, -1568, -1568,
   -1135, -1568,  -657, -1568, -1568, -1568, -1568, -1568,   505,   615,
    2482,  2216, -1568,  1699, -1568,   788,  1962, -1568, -1568, -1568,
   -1568, -1568, -1568, -1568, -1568, -1047,  1288, -1568, -1568, -1568,
   -1568,   434, -1568, -1568, -1568,   829, -1568,   484, -1568,  1316,
    1305, -1545, -1567, -1384, -1373, -1261, -1568,  -986,   386,   174,
     187,  -792,  -402,  1770, -1049, -1568, -1568, -1568,  2436, -1568,
    -299, -1568,  1761,  1165, -1014, -1568, -1568, -1568, -1568,  2069,
   -1568, -1568, -1568, -1568, -1568,  2282, -1568, -1568, -1363, -1568
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
     448,  1024,  1610,  1257,   785,   845,   473,  1692,  1751,   980,
    1284,   333,  1096,    77,   837,   837,  1086,   296,   297,   298,
     299,   300,   301,   269,  -474,   269,   826,  -476,  -475,   474,
    1086,  2125,   716,  1278,   589,  1388,  1757,  1399,  1400,   479,
     471,   345,   346,   960,   717,  2011,  1759,   284,  2094,   101,
     599,   144,   351,   352,   353,   322,  1422,   118,   355,   559,
     590,    44,  1611,  1044,    85,   112,   990,  1955,  1051,   838,
     838,   120,   560,   500,   506,   292,   497,  -645,   571,   285,
    1957,  1183,   775,  1411,  1412,  1413,  1414,   448,   123,    45,
    1986,   603,  1795,  1796,   512,   125,   306,   759,  1218,   127,
     282,   286,    13,  1806,  1807,  1654,  1655,  1693,   129,   287,
    1158,   142,   131,  1618,  1665,  1666,   314,  1219,  1987,   991,
     283,   288,   143,   102,   318,    47,   587,   471,   572,   323,
      48,   859,  1037,   501,   507,   760,  1619,   820,  1958,   319,
     973,   827,  1706,  1415,  1184,    86,   502,   508,   481,   498,
     145,   334,   307,   983,   449,   450,   451,   452,   453,   454,
     455,   447,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   837,  1045,   992,
    1279,   289,  2100,  1052,  1093,  1760,  1095,   113,  1401,   302,
     600,   103,  1438,  2126,  1087,   561,  1956,   324,  2012,   119,
     744,   718,   290,  1448,  1604,   114,    46,  2095,  1301,    78,
    1585,  1761,   961,   121,   846,   847,  1607,   573,   293,  1449,
     115,  1892,  1893,  1894,  1895,  1896,  1897,   839,   840,  1262,
     124,   600,   838,   562,   993,  1905,   482,   126,    13,  1909,
     475,   128,   513,  1913,  1776,   334,  1701,   116,  1084,   609,
     130,   786,  -645,   610,   132,  1707,   576,   291,   315,   618,
     622,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     988,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,  1950,   650,   651,   652,
     482,   654,   655,   656,   657,   658,   659,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,  1372,  1951,
    1708,  1752,  1753,   677,   678,  2083,   852,  1612,   682,   683,
     719,  2101,  1590,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   981,   994,   995,   711,   712,
     713,   714,   715,   477,   998,    63,   725,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,   742,
     860,  1389,   303,   863,   263,  1591,  1816,   270,  -474,   270,
    1683,  -476,  -475,  2084,   612,   613,   872,  1416,  1417,  1418,
    1251,  1716,   867,   868,  1258,  1727,   587,  1728,   577,  1031,
    1032,  1033,   750,  1721,  1783,  1784,  1785,  1786,  1787,  1788,
    1429,  1587,  1431,  1432,  2016,  1302,  1797,  1303,  2019,   583,
    1801,   504,  2119,   751,  1805,  2121,   495,   514,   515,   516,
     517,  1038,  1039,  1040,  1041,  1592,  1419,  2107,  1732,   496,
    1817,  2097,    74,  2090,  1057,   278,   279,   816,  1881,  1733,
     787,  1058,   296,   297,   298,   299,   300,   301,  1610,  1286,
    1885,  1287,  2085,  1882,   133,   280,   520,   521,  1875,  1734,
     976,   106,  1004,  1005,    75,   109,  2086,  2056,  2057,    87,
    2058,  2059,  -333,  1735,  1121,  1122,   849,  1820,  2108,   587,
    1593,    82,  1736,  1181,   505,  2120,  1187,  2098,  2122,   817,
     788,    88,   898,   899,  1059,  1252,   982,   134,  1060,  1259,
    2109,  2084,   869,   870,    90,   135,   584,    91,  1611,  1048,
     136,   614,   877,   752,   326,  1061,  1588,  2099,  1049,   614,
     137,   818,  1737,  1739,  1062,   468,   469,   470,    92,  1744,
     449,   450,   451,   452,   453,   454,   455,  1818,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  2113,  1063,    65,  1382,   449,   450,   451,
     452,   453,   454,   455,  1194,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
    2085,   281,  1267,   483,  1424,    93,   329,    13,  1436,  -333,
    1762,  1268,  1847,  1425,  2086,    94,    76,  1437,    96,    66,
      83,  1848,    98,   133,  1985,   348,   349,    95,  2110,  1064,
     964,   965,    99,   967,   302,    67,   862,  2050,   447,   449,
     450,   451,   452,   453,   454,   455,  2111,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   100,   755,   482,   873,   134,   843,   844,  2076,
    2077,  2112,   469,   470,   267,    68,  1976,   484,   104,  2014,
    1980,  2114,  2078,   105,  1089,  1090,  1871,  -301,  1070,   268,
    1857,  1849,    69,  2102,   485,    70,  1852,  1071,   107,  2115,
     110,  1866,   122,  1867,   806,  2103,  2104,   486,  1216,  1217,
     811,  1170,   813,  2024,   108,   721,   722,   139,   723,   140,
      71,   724,  1220,  1221,  2116,  1222,  1223,  1029,  1224,  1223,
    1246,  1247,   487,  1072,  2123,  1990,  1273,  1274,  1348,  1349,
     146,  1073,  1159,  2055,  1351,  1352,  1435,  1247,  1445,  1247,
     488,  1167,   449,   450,   451,   452,   453,   454,   455,   266,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  1097,   276,  1098,  1583,  1247,
    1608,  1285,  1103,  1104,  1074,  1105,   295,  2039,  2040,  1110,
    2042,  2043,  1623,  1624,  1658,  1659,  1111,  1112,  1113,  1114,
     308,  1115,  1116,  1117,  1662,  1663,  1699,  1700,  1118,  1119,
     309,  1120,  1929,  1930,  1722,  1247,   311,  1123,  1124,  1125,
    1730,  1247,  1741,  1247,  1935,  1745,  1274,   310,  1075,  1948,
    1921,  1133,  1134,  1135,   313,  1136,   312,    72,  1754,  1755,
    1945,  1756,  1755,  1758,  1700,   316,  1147,  1276,  1195,   321,
    1763,  1285,  1822,  1823,   317,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1606,  1156,   325,  1824,  1823,  1157,   327,
    1197,  1825,  1823,  1198,   329,  1199,   331,  1163,  1200,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,  1177,
    1827,  1755,   335,  1201,  1829,  1830,  1182,  1831,  1832,   874,
    1202,  1203,   336,   795,   796,   797,   798,   337,   799,   338,
    1996,   801,   802,   803,  1834,  1835,  1837,  1838,   807,   808,
     809,  1855,  1247,   812,   339,   930,   931,  2026,  2027,  1070,
    1856,  1247,  1204,  1865,  1247,  1869,  1247,  1228,  1071,   340,
    1373,  1876,  1830,  1375,  1376,  1377,   449,   450,   451,   452,
     453,   454,   455,   341,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,  1877,
    1755,  1878,  1755,   342,  1072,  1009,  1010,   343,  1013,  1014,
    1015,   344,  1073,  1206,  1018,  1019,  1020,   932,   933,  1023,
      77,  1290,  1880,  1832,  1294,  1939,  1247,  1946,  1247,   350,
    1299,  1947,  1247,  1952,  1700,  1207,   357,  1961,  1624,  1305,
    1999,  1247,   491,  1208,   358,  1312,  1313,   359,   449,   450,
     451,   452,   453,   454,   455,  1074,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   360,   449,   450,   451,   452,   453,   454,   455,   361,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  2000,  1830,   362,  1209,  1075,
     363,  1374,   452,   453,   454,   455,   364,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,  1391,  2001,  1832,  2009,  2010,  1394,  2060,  2061,
     954,   955,  1076,   449,   450,   451,   452,   453,   454,   455,
     365,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   366,   449,   450,   451,
     452,   453,   454,   455,   367,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     368,   449,   450,   451,   452,   453,   454,   455,   369,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,  1594,   449,   450,   451,   452,   453,
     454,   455,   370,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1077,   464,   465,
     466,   467,   468,   469,   470,   371,  1629,  2030,  2031,  1630,
    2062,  2063,   476,  2065,  2061,  2088,  2061,   372,  1641,  1642,
    2089,  2061,  2092,  2093,  2117,  2061,   984,   985,  1175,  1176,
    1643,  1687,  1688,   373,   374,   375,   376,   377,   378,  1650,
    1651,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   379,  1667,  1668,  1669,   380,
     381,  1670,  1671,   382,  1672,   383,  1673,   384,  1674,   385,
     386,   387,   388,   389,   390,   391,   392,   393,  1680,  1682,
     394,   395,   396,   493,  1309,  1310,  1689,  1690,   397,   398,
     399,   400,   401,   402,  1616,   403,   404,   405,   406,   407,
     408,   409,   410,   411,  1703,   412,   413,   414,  1709,   415,
     416,   417,  1450,  1451,  1452,  1453,  1454,  1455,  1713,  1456,
     418,  1457,   419,   420,   421,  1458,  1459,  1460,   422,  1461,
     423,   424,  1719,  1462,  1463,  1464,  1465,  1466,   425,   426,
     427,   428,   429,   430,   431,   432,  1467,   433,   434,   435,
     436,  1468,  1469,   437,   438,  1470,  1339,  1340,   439,   440,
    1471,  1472,  1473,  1474,  1475,   441,   442,  1476,   443,  1477,
    1478,  1479,   444,   445,  1480,  1481,   446,  1482,  1483,  1484,
    1364,  1365,   494,  1485,   499,   503,   509,   510,   511,   519,
     522,   523,   558,   566,  1486,   567,   568,   569,   575,  1487,
     578,   580,   581,   586,  1488,  1489,  1490,   591,   592,   593,
     594,  1491,  1492,   595,  1493,  1494,  1495,  1496,   596,   597,
    1497,   598,  1498,  1499,  1500,  1501,   602,  1502,   605,  1503,
    1504,   615,  1505,   616,  1506,  1507,   633,  1508,  1509,  1510,
    1511,  1366,  1367,   649,   653,   672,  1512,   673,  1513,   674,
    1514,  1515,   675,  1516,  1517,  1518,  1519,  1520,  1521,   676,
    1522,  1523,  1524,  1525,  1526,  1368,  1369,   679,  1527,   680,
    1528,   681,  1529,   684,   685,   686,   709,   720,   743,   745,
     747,  1530,   749,  1531,  1532,  1533,  1534,  1535,  1536,  1537,
    1617,   754,  1538,  1539,   756,   763,   764,   766,  1540,   767,
    1541,  1542,  1543,   768,  1544,   769,  1545,   770,  1546,  1547,
    1548,  1549,   771,  1789,  1790,  1766,  1767,   772,   773,   774,
     776,  1771,   777,  1773,   778,  1550,  1551,  1552,   779,   780,
     783,   782,   781,   819,   784,  1553,   789,  1554,  1555,  1556,
     791,   792,   793,   800,  1557,   804,  1558,  1559,  1560,   810,
     814,  1561,   815,   821,   822,  1562,  1563,   823,  1564,  1565,
    1566,  1567,   824,   828,   825,  1568,   829,   831,   830,   449,
     450,   451,   452,   453,   454,   455,   832,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   833,  1569,  1570,  1571,  1572,
    1573,   449,   450,   451,   452,   453,   454,   455,   834,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   835,   836,   850,   855,   449,   450,
     451,   452,   453,   454,   455,  1872,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   857,   865,   871,  1574,  1575,  1576,  1577,  1578,  1579,
      13,   913,   927,  1299,   928,   929,   935,   934,   936,   -57,
     974,   966,   449,   450,   451,   452,   453,   454,   455,  1898,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   969,   977,   996,   986,   970,
     978,   971,  1916,   987,   975,   979,   989,  1918,   999,  1000,
    1230,  1001,  1002,  1003,  1231,  1923,  1006,  1450,  1451,  1452,
    1453,  1454,  1455,  1011,  1456,  1025,  1457,  1026,  1932,  1933,
    1458,  1459,  1460,  1027,  1461,  1036,  1046,  1034,  1462,  1463,
    1464,  1465,  1466,  1028,  1047,  1050,  1053,  1030,  1054,  1055,
    1056,  1467,  1069,  1081,  1082,  1085,  1468,  1469,  1091,  1232,
    1470,  1086,  1233,  1101,  1107,  1471,  1472,  1473,  1474,  1475,
    1102,  1126,  1476,  1127,  1477,  1478,  1479,  1234,  1128,  1480,
    1481,  1129,  1482,  1483,  1484,  1130,  1131,  1132,  1485,  1137,
    1138,  1139,  1141,  1140,  1143,  1142,  1144,  1235,  1145,  1486,
    1146,   -59,  1168,  1171,  1487,  1236,  1173,  1178,  1179,  1488,
    1489,  1490,  1188,  1189,  1190,  1212,  1491,  1492,  1213,  1493,
    1494,  1495,  1496,  1227,  1250,  1497,  1248,  1731,  1499,  1500,
    1501,  1191,  1502,  1214,  1503,  1504,  1215,  1505,  1225,  1506,
    1507,  1226,  1508,  1509,  1510,  1511,  1253,  1255,  2007,  1256,
    1241,  1512,  1242,  1513,  1243,  1514,  1515,  1244,  1516,  1517,
    1518,  1519,  1520,  1521,  1260,  1522,  1523,  1524,  1525,  1526,
    1245,  1261,  1264,  1527,  1266,  1528,  1271,  1529,  1275,  1265,
    1269,  1277,  1237,  1270,  1238,  1272,  1530,  1280,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1281,  1282,  1538,  1539,  1295,
    1291,  1296,  1239,  1540,  1297,  1541,  1542,  1543,   864,  1544,
    1285,  1545,  1283,  1546,  1547,  1548,  1549,  1306,  1379,  1314,
    1380,  1315,  1327,  2053,  1328,  1332,  1333,  1383,  1334,  1335,
    1550,  1551,  1552,  1336,  1337,  1338,  1347,  1387,  1350,  1397,
    1553,     1,  1554,  1555,  1556,     2,  1353,  1402,  1370,  1557,
     878,  1558,  1559,  1560,  1371,  1378,  1561,  1384,  1385,  1386,
    1562,  1563,  1403,  1564,  1565,  1566,  1567,     3,  1392,  1395,
    1568,  1407,     4,  1396,  1404,  1408,  1405,   879,   449,   450,
     451,   452,   453,   454,   455,     5,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,  1406,  1409,     6,     7,  1410,  1420,  1421,  1423,  1427,
    1426,  1569,  1570,  1571,  1572,  1573,   451,   452,   453,   454,
     455,   880,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1428,  1430,  1433,
    1439,  1450,  1451,  1452,  1453,  1454,  1455,  1440,  1456,  1441,
    1457,  1442,  1443,     8,  1458,  1459,  1460,  1444,  1461,  1446,
    1447,  1581,  1462,  1463,  1464,  1465,  1466,  1582,  1584,  1574,
    1575,  1576,  1577,  1578,  1579,  1467,  1586,  1598,  1621,  1622,
    1468,  1469,  1595,  1596,  1470,  1597,  1601,  1626,  1628,  1471,
    1472,  1473,  1474,  1475,  1652,     9,  1476,    10,  1477,  1478,
    1479,  1657,  1661,  1480,  1481,    11,  1482,  1483,  1484,  1615,
    1675,  1685,  1485,  1676,  1677,  1678,  1679,  1691,  1695,  1697,
    1705,  1710,  1702,  1486,    12,    13,  1704,  1711,  1487,  1717,
    1712,  1715,  1718,  1488,  1489,  1490,  1723,  1720,  1724,    14,
    1491,  1492,    15,  1493,  1494,  1495,  1496,  1726,  1725,  1497,
      16,  1850,  1499,  1500,  1501,  1729,  1502,  1738,  1503,  1504,
    1740,  1505,  1743,  1506,  1507,  1742,  1508,  1509,  1510,  1511,
    1747,  1746,  1748,  1764,  1749,  1512,  1775,  1513,  1768,  1514,
    1515,  1777,  1516,  1517,  1518,  1519,  1520,  1521,  1774,  1522,
    1523,  1524,  1525,  1526,  1792,  1793,  1798,  1527,  1799,  1528,
    1800,  1529,  1802,  1826,  1803,  1804,  1828,  1833,  1839,  1840,
    1530,  1841,  1531,  1532,  1533,  1534,  1535,  1536,  1537,  1843,
    1844,  1538,  1539,  1845,  1854,  1864,  1879,  1540,  1868,  1541,
    1542,  1543,  1883,  1544,  1884,  1545,  1873,  1546,  1547,  1548,
    1549,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  1874,  1550,  1551,  1552,  1886,  1887,  1890,
    1899,  1901,  1902,  1903,  1553,  1907,  1554,  1555,  1556,  1904,
    1908,  1911,  1912,  1557,  1914,  1558,  1559,  1560,  1915,  1917,
    1561,  1919,  1922,  1925,  1562,  1563,  1924,  1564,  1565,  1566,
    1567,  1926,  1927,  1934,  1568,   449,   450,   451,   452,   453,
     454,   455,  1928,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,  1931,  1938,
    1940,  1941,  1942,  1943,  1953,  1954,  1944,   887,  1959,  1960,
    1962,  1965,  1963,  1966,  1967,  1569,  1570,  1571,  1572,  1573,
     449,   450,   451,   452,   453,   454,   455,  1968,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,  1973,  1969,  1450,  1451,  1452,  1453,  1454,
    1455,  1970,  1456,  1972,  1457,  1988,  1975,  1977,  1458,  1459,
    1460,  1978,  1461,  1979,  1981,  1982,  1462,  1463,  1464,  1465,
    1466,  1991,  2002,  1574,  1575,  1576,  1577,  1578,  1579,  1467,
    1983,  1992,  2003,  1993,  1468,  1469,  2004,  2005,  1470,  2006,
    2008,  2013,  2015,  1471,  1472,  1473,  1474,  1475,  2022,  2023,
    1476,  2025,  1477,  1478,  1479,  2029,  2032,  1480,  1481,  2033,
    1482,  1483,  1484,  2034,  2035,  2037,  1485,  2044,  2038,  2041,
    2045,  1755,  2046,  2048,  2049,  2051,  2052,  1486,  2054,  2064,
    2066,  2067,  1487,  2069,  2074,  2070,  2071,  1488,  1489,  1490,
    2072,  2075,  2082,  2079,  1491,  1492,  2087,  1493,  1494,  1495,
    1496,  2091,  2096,  1497,  2118,  1853,  1499,  1500,  1501,  2094,
    1502,  2105,  1503,  1504,  2127,  1505,  2124,  1506,  1507,  2128,
    1508,  1509,  1510,  1511,  2129,  2130,  2131,  2132,   277,  1512,
    1109,  1513,   611,  1514,  1515,  1821,  1516,  1517,  1518,  1519,
    1520,  1521,  1765,  1522,  1523,  1524,  1525,  1526,  1684,  1393,
    1068,  1527,   746,  1528,  1172,  1529,   854,   332,   141,  2068,
     604,  1094,  1889,   758,  1530,   861,  1531,  1532,  1533,  1534,
    1535,  1536,  1537,  1609,  1870,  1538,  1539,  2106,  1589,  1605,
    1021,  1540,   347,  1541,  1542,  1543,  1035,  1544,  1714,  1545,
     790,  1546,  1547,  1548,  1549,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   579,  1550,  1551,
    1552,     0,     0,     0,     0,     0,     0,     0,  1553,     0,
    1554,  1555,  1556,     0,     0,     0,     0,  1557,     0,  1558,
    1559,  1560,     0,     0,  1561,     0,     0,     0,  1562,  1563,
       0,  1564,  1565,  1566,  1567,     0,     0,     0,  1568,   449,
     450,   451,   452,   453,   454,   455,   911,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,   888,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1569,
    1570,  1571,  1572,  1573,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   912,  1450,
    1451,  1452,  1453,  1454,  1455,     0,  1456,     0,  1457,     0,
       0,     0,  1458,  1459,  1460,     0,  1461,     0,     0,     0,
    1462,  1463,  1464,  1465,  1466,     0,     0,  1574,  1575,  1576,
    1577,  1578,  1579,  1467,     0,     0,     0,     0,  1468,  1469,
       0,     0,  1470,     0,     0,     0,     0,  1471,  1472,  1473,
    1474,  1475,     0,     0,  1476,     0,  1477,  1478,  1479,     0,
       0,  1480,  1481,     0,  1482,  1483,  1484,     0,     0,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     465,   466,   467,   468,   469,   470,     0,     0,   889,     0,
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
       0,     0,     0,     0,     0,  1486,     0,     0,     0,     0,
    1487,     0,     0,     0,     0,  1488,  1489,  1490,     0,     0,
       0,     0,  1491,  1492,     0,  1493,  1494,  1495,  1496,     0,
       0,  1497,     0,  1859,  1499,  1500,  1501,     0,  1502,     0,
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
       0,     0,   890,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1569,  1570,  1571,
    1572,  1573,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   875,  1450,  1451,  1452,
    1453,  1454,  1455,     0,  1456,     0,  1457,     0,     0,     0,
    1458,  1459,  1460,     0,  1461,     0,     0,     0,  1462,  1463,
    1464,  1465,  1466,     0,     0,  1574,  1575,  1576,  1577,  1578,
    1579,  1467,     0,     0,     0,     0,  1468,  1469,     0,     0,
    1470,     0,     0,     0,     0,  1471,  1472,  1473,  1474,  1475,
       0,     0,  1476,     0,  1477,  1478,  1479,     0,     0,  1480,
    1481,     0,  1482,  1483,  1484,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1486,
       0,     0,     0,     0,  1487,     0,     0,     0,     0,  1488,
    1489,  1490,     0,     0,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,  1496,     0,     0,  1497,     0,  1860,  1499,  1500,
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
     467,   468,   469,   470,     0,     0,   892,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1569,  1570,  1571,  1572,  1573,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     881,  1450,  1451,  1452,  1453,  1454,  1455,     0,  1456,     0,
    1457,     0,     0,     0,  1458,  1459,  1460,     0,  1461,     0,
       0,     0,  1462,  1463,  1464,  1465,  1466,     0,     0,  1574,
    1575,  1576,  1577,  1578,  1579,  1467,     0,     0,     0,     0,
    1468,  1469,     0,     0,  1470,     0,     0,     0,     0,  1471,
    1472,  1473,  1474,  1475,     0,     0,  1476,     0,  1477,  1478,
    1479,     0,     0,  1480,  1481,     0,  1482,  1483,  1484,     0,
       0,     0,  1485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1486,     0,     0,     0,     0,  1487,     0,
       0,     0,     0,  1488,  1489,  1490,     0,     0,     0,     0,
    1491,  1492,     0,  1493,  1494,  1495,  1496,     0,     0,  1497,
       0,  1861,  1499,  1500,  1501,     0,  1502,     0,  1503,  1504,
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
     893,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   882,  1450,  1451,  1452,  1453,  1454,
    1455,     0,  1456,     0,  1457,     0,     0,     0,  1458,  1459,
    1460,     0,  1461,     0,     0,     0,  1462,  1463,  1464,  1465,
    1466,     0,     0,  1574,  1575,  1576,  1577,  1578,  1579,  1467,
       0,     0,     0,     0,  1468,  1469,     0,     0,  1470,     0,
       0,     0,     0,  1471,  1472,  1473,  1474,  1475,     0,     0,
    1476,     0,  1477,  1478,  1479,     0,     0,  1480,  1481,     0,
    1482,  1483,  1484,     0,     0,     0,  1485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1486,     0,     0,
       0,     0,  1487,     0,     0,     0,     0,  1488,  1489,  1490,
       0,     0,     0,     0,  1491,  1492,     0,  1493,  1494,  1495,
    1496,     0,     0,  1497,     0,  1862,  1499,  1500,  1501,     0,
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
     469,   470,     0,     0,   894,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1569,
    1570,  1571,  1572,  1573,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   883,  1450,
    1451,  1452,  1453,  1454,  1455,     0,  1456,     0,  1457,     0,
       0,     0,  1458,  1459,  1460,     0,  1461,     0,     0,     0,
    1462,  1463,  1464,  1465,  1466,     0,     0,  1574,  1575,  1576,
    1577,  1578,  1579,  1467,     0,     0,     0,     0,  1468,  1469,
       0,     0,  1470,     0,     0,     0,     0,  1471,  1472,  1473,
    1474,  1475,     0,     0,  1476,     0,  1477,  1478,  1479,     0,
       0,  1480,  1481,     0,  1482,  1483,  1484,     0,     0,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     465,   466,   467,   468,   469,   470,     0,     0,   900,     0,
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
       0,     0,     0,     0,     0,  1486,     0,     0,     0,     0,
    1487,     0,     0,     0,     0,  1488,  1489,  1490,     0,     0,
       0,     0,  1491,  1492,     0,  1493,  1494,  1495,  1496,     0,
       0,  1497,     0,  1936,  1499,  1500,  1501,     0,  1502,     0,
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
     466,   467,   468,   469,   470,     0,   885,  1450,  1451,  1452,
    1453,  1454,  1455,     0,  1456,     0,  1457,     0,     0,     0,
    1458,  1459,  1460,     0,  1461,     0,     0,     0,  1462,  1463,
    1464,  1465,  1466,     0,     0,  1574,  1575,  1576,  1577,  1578,
    1579,  1467,     0,     0,     0,     0,  1468,  1469,     0,     0,
    1470,     0,     0,     0,     0,  1471,  1472,  1473,  1474,  1475,
       0,     0,  1476,     0,  1477,  1478,  1479,     0,     0,  1480,
    1481,     0,  1482,  1483,  1484,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1486,
       0,     0,     0,     0,  1487,     0,     0,     0,     0,  1488,
    1489,  1490,     0,     0,     0,     0,  1491,  1492,     0,  1493,
    1494,  1495,  1496,     0,     0,  1497,     0,  1937,  1499,  1500,
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
     467,   468,   469,   470,     0,     0,   907,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1569,  1570,  1571,  1572,  1573,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     886,  1450,  1451,  1452,  1453,  1454,  1455,     0,  1456,     0,
    1457,     0,     0,     0,  1458,  1459,  1460,     0,  1461,     0,
       0,     0,  1462,  1463,  1464,  1465,  1466,     0,     0,  1574,
    1575,  1576,  1577,  1578,  1579,  1467,     0,     0,     0,     0,
    1468,  1469,     0,     0,  1470,     0,     0,     0,     0,  1471,
    1472,  1473,  1474,  1475,     0,     0,  1476,     0,  1477,  1478,
    1479,     0,     0,  1480,  1481,     0,  1482,  1483,  1484,     0,
       0,     0,  1485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1486,     0,     0,     0,     0,  1487,     0,
       0,     0,     0,  1488,  1489,  1490,     0,     0,     0,     0,
    1491,  1492,     0,  1493,  1494,  1495,  1496,     0,     0,  1497,
       0,  1997,  1499,  1500,  1501,     0,  1502,     0,  1503,  1504,
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
     908,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1569,  1570,  1571,  1572,  1573,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   891,  1450,  1451,  1452,  1453,  1454,
    1455,     0,  1456,     0,  1457,     0,     0,     0,  1458,  1459,
    1460,     0,  1461,     0,     0,     0,  1462,  1463,  1464,  1465,
    1466,     0,     0,  1574,  1575,  1576,  1577,  1578,  1579,  1467,
       0,     0,     0,     0,  1468,  1469,     0,     0,  1470,     0,
       0,     0,     0,  1471,  1472,  1473,  1474,  1475,     0,     0,
    1476,     0,  1477,  1478,  1479,     0,     0,  1480,  1481,     0,
    1482,  1483,  1484,     0,     0,     0,  1485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1486,     0,     0,
       0,     0,  1487,     0,     0,     0,     0,  1488,  1489,  1490,
       0,     0,     0,     0,  1491,  1492,     0,  1493,  1494,  1495,
    1496,     0,     0,  1497,     0,  1998,  1499,  1500,  1501,     0,
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
     469,   470,     0,     0,   909,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1569,
    1570,  1571,  1572,  1573,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   895,  1450,
    1451,  1452,  1453,  1454,  1455,     0,  1456,     0,  1457,     0,
       0,     0,  1458,  1459,  1460,     0,  1461,     0,     0,     0,
    1462,  1463,  1464,  1465,  1466,     0,     0,  1574,  1575,  1576,
    1577,  1578,  1579,  1467,     0,     0,     0,     0,  1468,  1469,
       0,     0,  1470,     0,     0,     0,     0,  1471,  1472,  1473,
    1474,  1475,     0,     0,  1476,     0,  1477,  1478,  1479,     0,
       0,  1480,  1481,     0,  1482,  1483,  1484,     0,     0,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   147,   148,   149,   150,
     151,   152,  1550,  1551,  1552,     0,     0,     0,     0,     0,
     153,   154,  1553,     0,  1554,  1555,  1556,     0,   155,   156,
       0,  1557,     0,  1558,  1559,  1560,     0,     0,  1561,     0,
     157,     0,  1562,  1563,     0,  1564,  1565,  1566,  1567,     0,
       0,     0,  1568,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,     0,   910,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,  1569,  1570,  1571,  1572,  1573,   163,     0,
       0,     0,   164,  -646,  -646,  -646,  -646,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   922,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1574,  1575,  1576,  1577,  1578,  1579,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   167,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
       0,     0,     0,   169,   170,     0,     0,     0,   171,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
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
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,   619,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,   449,   450,   451,   452,   453,
     454,   455,   162,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   620,     0,     0,     0,     0,   166,     0,     0,     0,
     923,     0,     0,     0,     0,     0,   167,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   924,     0,
       0,     0,     0,     0,     0,   449,   450,   451,   452,   453,
     454,   455,   621,   456,   457,   458,   459,   460,   461,   462,
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
       0,     0,     0,     0,   155,     0,   926,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   726,     0,   727,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,   158,     0,     0,     0,     0,   159,     0,
       0,   160,   161,     0,   937,     0,     0,     0,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,   450,   451,   452,   453,   454,   455,   946,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
     947,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,     0,   948,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,   449,   450,   451,   452,   453,   454,   455,   728,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   949,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
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
     147,   148,   149,   150,   151,   152,   729,     0,     0,     0,
       0,     0,     0,     0,   153,   154,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   950,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,   159,     0,     0,   160,
     161,     0,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,   449,   450,   451,   452,   453,   454,   455,   951,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,   952,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,   953,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,   959,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
    1319,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,  1320,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   354,     0,     0,
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
     155,   660,     0,   449,   450,   451,   452,   453,   454,   455,
    1331,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,   159,     0,     0,   160,   161,     0,
       0,     0,     0,     0,     0,     0,   162,     0,     0,     0,
       0,  1341,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1357,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,  1358,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,     0,     0,  1359,   449,   450,   451,
     452,   453,   454,   455,     0,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
    1362,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,  1307,     0,     0,
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
       0,     0,  1363,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   449,   450,   451,
     452,   453,   454,   455,   162,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,  1813,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   876,   449,
     450,   451,   452,   453,   454,   455,  1308,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,     0,   896,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   897,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,   450,   451,   452,   453,
     454,   455,   901,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
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
       0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
       0,   903,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
     159,     0,     0,   160,   161,   904,     0,     0,     0,     0,
       0,     0,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,  1293,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,   905,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   449,   450,   451,
     452,   453,   454,   455,   914,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   915,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
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
     916,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,   159,     0,
       0,   160,   161,     0,     0,     0,     0,     0,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   917,     0,     0,     0,     0,     0,
       0,  1298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   918,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,   919,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   920,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   921,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,   449,   450,   451,   452,   453,
     454,   455,   925,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
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
       0,     0,   155,     0,     0,     0,     0,     0,     0,   938,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,   159,     0,     0,   160,
     161,   449,   450,   451,   452,   453,   454,   455,   162,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,  1770,
       0,     0,   449,   450,   451,   452,   453,   454,   455,   939,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,   940,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,     0,     0,   449,   450,   451,   452,   453,
     454,   455,   167,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,   941,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   942,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     155,   449,   450,   451,   452,   453,   454,   455,   943,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,   159,     0,     0,   160,   161,   944,
       0,     0,     0,     0,     0,     0,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1772,     0,     0,
     945,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,   451,   452,
     453,   454,   455,   956,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,   957,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,   958,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,   449,   450,   451,   452,   453,
     454,   455,  1311,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   172,   173,   174,   175,   176,   177,   178,   179,   180,
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
     153,   154,     0,     0,     0,     0,     0,     0,   155,  1316,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   449,   450,   451,
     452,   453,   454,   455,   162,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,  1317,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,   449,   450,   451,   452,   453,   454,   455,  1318,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,   449,   450,   451,   452,
     453,   454,   455,  1321,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,  1322,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,   210,     0,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   259,   260,   261,     0,     0,     0,     0,     0,     0,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,   450,   451,   452,   453,   454,   455,  1323,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   449,   450,
     451,   452,   453,   454,   455,  1324,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   449,   450,   451,   452,   453,   454,   455,  1325,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,   449,   450,   451,   452,
     453,   454,   455,  1326,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   449,   450,   451,   452,   453,   454,   455,
    1329,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,   449,   450,   451,
     452,   453,   454,   455,  1330,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,  1342,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
       0,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   449,
     450,   451,   452,   453,   454,   455,     0,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,   449,   450,   451,   452,   453,   454,   455,  1343,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   449,   450,   451,   452,   453,
     454,   455,  1356,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,   449,
     450,   451,   452,   453,   454,   455,  1360,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   449,   450,   451,   452,   453,   454,   455,  1361,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1434,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,  1631,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   450,   451,   452,   453,   454,
     455,  1694,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,     0,   449,   450,
     451,   452,   453,   454,   455,  1750,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   449,   450,   451,   452,   453,   454,   455,  1778,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   449,   450,   451,   452,   453,   454,
     455,  1779,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   449,   450,   451,
     452,   453,   454,   455,  1780,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     449,   450,   451,   452,   453,   454,   455,  1781,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   449,   450,   451,   452,   453,   454,   455,
    1782,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,  1791,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
      49,     0,     0,   449,   450,   451,   452,   453,   454,   455,
    1808,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   449,   450,   451,   452,
     453,   454,   455,  1809,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,     0,
     449,   450,   451,   452,   453,   454,   455,  1810,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,    50,     0,     0,     0,     0,     0,
    1811,    51,   449,   450,   451,   452,   453,   454,   455,     0,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,  1812,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1814,     0,
       0,     0,     0,     0,    54,   449,   450,   451,   452,   453,
     454,   455,     0,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,     0,     0,
       0,     0,  1815,     0,     0,  1632,  1633,     0,     0,     0,
    1634,     0,  1635,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1836,     0,     0,     0,
       0,    56,     0,  1195,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1636,  1637,     0,  1638,  1842,
       0,  1196,     0,    58,    59,  1197,     0,     0,  1198,     0,
    1199,     0,     0,  1200,     0,     0,     0,     0,    60,     0,
       0,     0,  1846,     0,     0,     0,     0,     0,  1201,     0,
       0,     0,     0,     0,     0,  1202,  1203,     0,   449,   450,
     451,   452,   453,   454,   455,  1851,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,  1204,  1949,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,     0,     0,  1205,     0,     0,     0,     0,     0,
       0,  1971,     0,     0,     0,     0,     0,     0,     0,     0,
     524,   525,     0,   526,     0,   527,   528,     0,     0,     0,
       0,     0,     0,     0,  1984,  1639,  1640,     0,  1206,     0,
       0,   529,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1207,  1994,     0,     0,     0,   866,     0,     0,  1208,     0,
     530,   531,   532,   533,     0,     0,     0,     0,     0,   534,
       0,     0,     0,     0,  1995,     0,     0,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   536,     0,
       0,     0,     0,     0,     0,     0,   537,     0,     0,     0,
       0,     0,     0,  1209,   538,     0,     0,     0,     0,     0,
       0,   539,     0,     0,   540,     0,     0,   541,   542,     0,
       0,     0,     0,     0,     0,     0,     0,   449,   450,   451,
     452,   453,   454,   455,   543,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,  1100,     0,
       0,     0,     0,   544,   545,     0,     0,   546,   547,     0,
       0,     0,     0,   548,     0,   549,     0,     0,     0,     0,
     550,   551,     0,     0,     0,     0,   552,   553,     0,     0,
       0,     0,     0,   554,     0,   555,     0,     0,     0,     0,
     556,   449,   450,   451,   452,   453,   454,   455,     0,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,   450,   451,   452,   453,
     454,   455,  1106,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   449,   450,
     451,   452,   453,   454,   455,     0,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,  1610,
     448,     0,     0,     0,     0,     0,     0,   449,   450,   451,
     452,   453,   454,   455,  1099,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     471,     0,     0,     0,     0,     0,     0,     0,  1304,     0,
       0,     0,   449,   450,   451,   452,   453,   454,   455,  1611,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,     0,     0,     0,   449,   450,
     451,   452,   453,   454,   455,   906,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,     0,     0,   449,   450,   451,   452,   453,   454,   455,
     968,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,   449,   450,
     451,   452,   453,   454,   455,  1162,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470
};

static const yytype_int16 yycheck[] =
{
      81,  1030,   983,  1287,  1180,  1270,   590,  1056,   994,   995,
     269,  1272,   998,   805,   806,   488,  1045,   270,   317,   811,
       3,   813,    41,  1052,     5,     4,   125,  1390,  1595,    20,
    1077,   125,   864,     8,   143,   143,   181,     3,     4,     5,
       6,     7,     8,     3,     3,     3,   242,     3,     3,   148,
     181,     4,     6,    79,   242,    20,  1601,  1192,  1193,   270,
      43,   142,   143,     6,    18,    82,    40,    35,    86,     3,
     217,     3,   153,   154,   155,     3,  1211,     3,   159,     3,
     333,   201,   101,   242,     3,     3,    70,    96,   242,   198,
     198,     3,    16,     3,     3,    47,     3,    43,    96,    67,
     186,   179,   504,     4,     5,     6,     7,     3,     3,   229,
     207,   217,  1654,  1655,    18,     3,   128,   159,   236,     3,
      89,    89,   218,  1665,  1666,  1345,  1346,  1392,     3,    97,
     962,     9,     3,     3,  1354,  1355,     3,   255,   235,   123,
     109,   109,    20,    77,    36,   229,   249,    43,   146,    77,
       3,   247,     3,    63,    63,   197,    26,   559,   244,    51,
     744,   357,    70,    64,   242,    84,    76,    76,   217,    76,
     102,   359,   184,   757,    10,    11,    12,    13,    14,    15,
      16,   262,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   143,   357,   183,
     226,   169,    96,   357,   861,   179,   863,   125,  1194,   175,
     357,   145,  1241,   166,   359,   139,   225,   145,   235,   145,
     473,   175,   190,  1252,  1273,   143,   346,   245,   359,   204,
    1259,   205,   175,   145,   213,   214,  1283,   235,   190,  1253,
     158,  1783,  1784,  1785,  1786,  1787,  1788,   356,   357,   357,
     145,   357,   198,   177,   238,  1797,   359,   145,   218,  1801,
     359,   145,   166,  1805,  1627,   359,  1401,   185,   852,   350,
     145,   252,   218,   354,   145,   183,     3,   245,   145,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     763,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,  1873,   388,   389,   390,
     359,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,  1160,  1874,
     238,  1596,  1597,   414,   415,    18,   589,   356,   419,   420,
     294,   235,    70,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   356,   768,   769,   449,   450,
     451,   452,   453,   356,   776,     3,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     601,   356,   358,   604,   475,   123,  1680,   357,   357,   357,
    1381,   357,   357,    86,   113,   114,   617,   308,   309,   310,
     242,  1425,   113,   114,   242,  1444,   249,  1446,   145,   821,
     822,   823,   122,  1437,  1644,  1645,  1646,  1647,  1648,  1649,
    1222,   242,  1224,  1225,  1976,  1092,  1656,  1094,  1980,   125,
    1660,     3,   102,   143,  1664,   102,    63,   351,   352,   353,
     354,   302,   303,   304,   305,   183,   357,    87,  1472,    76,
     252,   126,   229,    18,    63,    46,    47,    18,     5,  1483,
       5,    70,     3,     4,     5,     6,     7,     8,    41,     3,
    1764,     5,   165,    20,    92,    66,   358,   359,  1749,  1503,
     749,    57,   791,   792,   229,    61,   179,  2039,  2040,     0,
    2042,  2043,   242,  1517,   906,   907,   587,  1683,   138,   249,
     238,   229,  1526,   986,    76,   175,   989,   182,   175,    70,
      55,   355,   358,   359,   123,   357,   359,   135,   127,   357,
      66,    86,   613,   614,     3,   143,   222,     3,   101,    43,
     148,   250,   623,   243,   110,   144,   357,   212,    52,   250,
     158,   102,  1566,  1582,   153,    30,    31,    32,     3,  1588,
      10,    11,    12,    13,    14,    15,    16,   359,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    66,   183,    84,  1170,    10,    11,    12,
      13,    14,    15,    16,   996,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     165,   192,   144,    68,    43,     3,   356,   218,    43,   359,
    1606,   153,    43,    52,   179,   357,    11,    52,   145,   128,
      15,    52,     3,    92,  1918,   356,   357,   198,   174,   238,
     721,   722,   144,   724,   175,   144,   247,  2031,   729,    10,
      11,    12,    13,    14,    15,    16,   192,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     3,   358,   359,   125,   135,   358,   359,  2063,
    2064,   217,    31,    32,   143,   184,  1906,   142,     3,  1973,
    1910,   174,  2065,     3,   358,   359,  1745,   152,    79,   158,
    1729,  1715,   201,  2087,   159,   204,  1720,    88,   223,   192,
     229,  1740,     3,  1742,   540,  2088,  2089,   172,   358,   359,
     546,   974,   548,  1988,   144,    13,    14,     3,    16,     3,
     229,    19,    74,    75,   217,   358,   359,   818,   358,   359,
     358,   359,   197,   124,  2117,  1921,   358,   359,   358,   359,
     359,   132,   963,  2037,   358,   359,   358,   359,   358,   359,
     215,   972,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   866,     3,   868,   358,   359,
     358,   359,   873,   874,   175,   876,   356,  2017,  2018,   880,
    2020,  2021,   358,   359,     4,     5,   887,   888,   889,   890,
     256,   892,   893,   894,     4,     5,   358,   359,   899,   900,
       3,   902,    49,    50,   358,   359,     3,   908,   909,   910,
     358,   359,   358,   359,  1848,   358,   359,    43,   219,  1868,
    1821,   922,   923,   924,   179,   926,   357,   346,   358,   359,
    1864,   358,   359,   358,   359,   256,   937,  1068,    18,     3,
     358,   359,   358,   359,   357,   946,   947,   948,   949,   950,
     951,   952,   953,  1275,   955,     3,   358,   359,   959,   357,
      40,   358,   359,    43,   356,    45,     3,   968,    48,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   980,
     358,   359,   256,    63,   358,   359,   987,   358,   359,   359,
      70,    71,   256,   527,   528,   529,   530,   256,   532,   256,
    1934,   535,   536,   537,   358,   359,   358,   359,   542,   543,
     544,   358,   359,   547,   256,   358,   359,    49,    50,    79,
     358,   359,   102,   358,   359,   358,   359,  1028,    88,   256,
    1161,   358,   359,  1164,  1165,  1166,    10,    11,    12,    13,
      14,    15,    16,   256,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   358,
     359,   358,   359,     3,   124,   798,   799,   222,   801,   802,
     803,     3,   132,   153,   807,   808,   809,   358,   359,   812,
       8,  1082,   358,   359,  1085,   358,   359,   358,   359,     9,
    1091,   358,   359,   358,   359,   175,   356,   358,   359,  1100,
     358,   359,    43,   183,   357,  1106,  1107,   357,    10,    11,
      12,    13,    14,    15,    16,   175,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   357,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   358,   359,   357,   238,   219,
     357,  1162,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1183,   358,   359,   358,   359,  1188,   358,   359,
     358,   359,   252,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   357,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     357,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1265,    10,    11,    12,    13,    14,
      15,    16,   357,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   357,    26,    27,
      28,    29,    30,    31,    32,   357,  1307,   356,   357,  1310,
     356,   357,   359,   358,   359,   358,   359,   357,  1319,  1320,
     358,   359,   358,   359,   358,   359,   759,   760,   978,   979,
    1331,  1385,  1386,   357,   357,   357,   357,   357,   357,  1340,
    1341,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   357,  1357,  1358,  1359,   357,
     357,  1362,  1363,   357,  1365,   357,  1367,   357,  1369,   357,
     357,   357,   357,   357,   357,   357,   357,   357,  1379,  1380,
     357,   357,   357,    45,   358,   359,  1387,  1388,   357,   357,
     357,   357,   357,   357,   163,   357,   357,   357,   357,   357,
     357,   357,   357,   357,  1405,   357,   357,   357,  1409,   357,
     357,   357,     3,     4,     5,     6,     7,     8,  1419,    10,
     357,    12,   357,   357,   357,    16,    17,    18,   357,    20,
     357,   357,  1433,    24,    25,    26,    27,    28,   357,   357,
     357,   357,   357,   357,   357,   357,    37,   357,   357,   357,
     357,    42,    43,   357,   357,    46,   358,   359,   357,   357,
      51,    52,    53,    54,    55,   357,   357,    58,   357,    60,
      61,    62,   357,   357,    65,    66,   357,    68,    69,    70,
     358,   359,    45,    74,    63,    63,    63,   252,   222,     3,
       3,     3,   179,     3,    85,   179,   256,     3,   179,    90,
     256,     3,     3,    26,    95,    96,    97,     3,     3,     3,
       3,   102,   103,     3,   105,   106,   107,   108,     3,     3,
     111,     3,   113,   114,   115,   116,     3,   118,     3,   120,
     121,     3,   123,     3,   125,   126,   358,   128,   129,   130,
     131,   358,   359,   358,   358,   358,   137,   358,   139,   358,
     141,   142,   358,   144,   145,   146,   147,   148,   149,   358,
     151,   152,   153,   154,   155,   358,   359,   358,   159,   358,
     161,   358,   163,     5,   358,   358,   358,   357,     3,     3,
       3,   172,     3,   174,   175,   176,   177,   178,   179,   180,
     359,   358,   183,   184,     3,   152,   178,     3,   189,     3,
     191,   192,   193,     3,   195,     3,   197,     3,   199,   200,
     201,   202,     3,   358,   359,  1616,  1617,     3,     3,     3,
       3,  1622,   222,  1624,     3,   216,   217,   218,     3,     3,
     354,     3,     5,     3,     5,   226,     5,   228,   229,   230,
     357,   357,   357,   357,   235,    56,   237,   238,   239,   357,
     357,   242,   357,     3,     3,   246,   247,     3,   249,   250,
     251,   252,   358,     3,   359,   256,     3,   358,   179,    10,
      11,    12,    13,    14,    15,    16,   179,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,   297,   298,   299,   300,
     301,    10,    11,    12,    13,    14,    15,    16,   179,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   256,     3,   180,     3,    10,    11,
      12,    13,    14,    15,    16,  1746,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     3,   358,   358,   355,   356,   357,   358,   359,   360,
     218,   358,   325,  1774,   325,   325,   325,   358,   325,   218,
     125,   357,    10,    11,    12,    13,    14,    15,    16,  1790,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   357,   153,     3,   152,   357,
     153,   357,  1813,   179,   359,   153,   152,  1818,     3,   222,
      54,   222,     5,     5,    58,  1826,     5,     3,     4,     5,
       6,     7,     8,     4,    10,     5,    12,     5,  1839,  1840,
      16,    17,    18,   175,    20,   244,   179,   195,    24,    25,
      26,    27,    28,   357,     3,     3,     3,   357,     3,   179,
       3,    37,     3,    55,   161,    20,    42,    43,   357,   103,
      46,   181,   106,    83,   150,    51,    52,    53,    54,    55,
     358,     4,    58,   325,    60,    61,    62,   121,   325,    65,
      66,   325,    68,    69,    70,   325,   325,   325,    74,   357,
     357,   357,     5,   325,     5,   325,   325,   141,   357,    85,
     357,   218,   130,     3,    90,   149,   129,     3,     3,    95,
      96,    97,   357,   153,   153,     3,   102,   103,     3,   105,
     106,   107,   108,    70,     3,   111,   244,   113,   114,   115,
     116,   357,   118,   358,   120,   121,   358,   123,   358,   125,
     126,   358,   128,   129,   130,   131,    52,   129,  1959,   244,
     357,   137,   357,   139,   357,   141,   142,   357,   144,   145,
     146,   147,   148,   149,   179,   151,   152,   153,   154,   155,
     357,     3,     3,   159,   153,   161,   153,   163,     3,   357,
     357,     4,   226,   357,   228,   357,   172,     6,   174,   175,
     176,   177,   178,   179,   180,     4,     4,   183,   184,   153,
     194,     3,   246,   189,     3,   191,   192,   193,   359,   195,
     359,   197,   357,   199,   200,   201,   202,   357,    55,   358,
     137,   358,   358,  2034,   358,   358,   357,   152,   357,   357,
     216,   217,   218,   357,   357,   357,   357,    20,   357,     3,
     226,    34,   228,   229,   230,    38,   357,   175,   358,   235,
     359,   237,   238,   239,   358,   358,   242,   357,   357,   357,
     246,   247,     3,   249,   250,   251,   252,    60,   357,   357,
     256,    44,    65,   357,   357,     3,   357,   359,    10,    11,
      12,    13,    14,    15,    16,    78,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   357,   357,    96,    97,     4,   153,   153,   195,   217,
       5,   297,   298,   299,   300,   301,    12,    13,    14,    15,
      16,   359,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     4,     4,   357,
       3,     3,     4,     5,     6,     7,     8,     3,    10,     3,
      12,     3,     3,   146,    16,    17,    18,   357,    20,   357,
     244,   107,    24,    25,    26,    27,    28,   357,   244,   355,
     356,   357,   358,   359,   360,    37,     3,     3,   235,    20,
      42,    43,   357,   357,    46,   357,   357,   179,     4,    51,
      52,    53,    54,    55,   326,   188,    58,   190,    60,    61,
      62,   325,   325,    65,    66,   198,    68,    69,    70,   359,
     358,     3,    74,   358,   358,   358,   358,     3,     3,     3,
      43,   357,     5,    85,   217,   218,     5,   357,    90,   358,
     357,    52,     4,    95,    96,    97,   358,    52,   358,   232,
     102,   103,   235,   105,   106,   107,   108,   359,   358,   111,
     243,   113,   114,   115,   116,   357,   118,   199,   120,   121,
     357,   123,   244,   125,   126,   357,   128,   129,   130,   131,
     153,   357,   153,     3,   357,   137,    80,   139,   359,   141,
     142,   358,   144,   145,   146,   147,   148,   149,   357,   151,
     152,   153,   154,   155,    55,   180,   357,   159,   358,   161,
     358,   163,   357,    20,   358,   358,    18,     3,   357,   357,
     172,   153,   174,   175,   176,   177,   178,   179,   180,   358,
     358,   183,   184,   358,     3,    52,     3,   189,   357,   191,
     192,   193,     3,   195,    55,   197,   357,   199,   200,   201,
     202,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   357,   216,   217,   218,     3,     3,   357,
       3,    55,   358,   358,   226,   325,   228,   229,   230,   358,
     325,   325,   325,   235,   358,   237,   238,   239,   358,   196,
     242,   129,     3,   189,   246,   247,   245,   249,   250,   251,
     252,     3,     3,    52,   256,    10,    11,    12,    13,    14,
      15,    16,     5,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     5,   358,
      69,   120,   145,   155,   189,     5,   251,   359,    20,   359,
       3,   358,    90,   358,   358,   297,   298,   299,   300,   301,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,   358,     3,     4,     5,     6,     7,
       8,   358,    10,   359,    12,   148,   358,   357,    16,    17,
      18,   357,    20,   358,   357,   357,    24,    25,    26,    27,
      28,     3,     3,   355,   356,   357,   358,   359,   360,    37,
     358,   358,     3,   358,    42,    43,     3,   357,    46,   357,
       3,     3,   359,    51,    52,    53,    54,    55,   208,   208,
      58,   357,    60,    61,    62,   189,     3,    65,    66,     3,
      68,    69,    70,    20,     3,     3,    74,   162,   358,   358,
     162,   359,     3,     3,     3,   358,   358,    85,   217,   357,
     357,   206,    90,   358,     3,   358,   358,    95,    96,    97,
     358,     3,     5,   205,   102,   103,   357,   105,   106,   107,
     108,     3,   140,   111,   156,   113,   114,   115,   116,    86,
     118,   247,   120,   121,   179,   123,   227,   125,   126,   179,
     128,   129,   130,   131,   173,   173,     5,     5,    88,   137,
     879,   139,   355,   141,   142,  1684,   144,   145,   146,   147,
     148,   149,  1615,   151,   152,   153,   154,   155,  1382,  1187,
     842,   159,   475,   161,   976,   163,   591,   113,    76,  2054,
     344,   862,  1774,   482,   172,   603,   174,   175,   176,   177,
     178,   179,   180,  1285,  1745,   183,   184,  2093,  1262,  1274,
     810,   189,   146,   191,   192,   193,   825,   195,  1423,   197,
     521,   199,   200,   201,   202,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   325,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
     228,   229,   230,    -1,    -1,    -1,    -1,   235,    -1,   237,
     238,   239,    -1,    -1,   242,    -1,    -1,    -1,   246,   247,
      -1,   249,   250,   251,   252,    -1,    -1,    -1,   256,    10,
      11,    12,    13,    14,    15,    16,   296,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,
     298,   299,   300,   301,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   358,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   355,   356,   357,
     358,   359,   360,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,    -1,    -1,    -1,    -1,   102,   103,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,    -1,   123,
      -1,   125,   126,    -1,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,    -1,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,    -1,    -1,   159,    -1,   161,    -1,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
     174,   175,   176,   177,   178,   179,   180,    -1,    -1,   183,
     184,    -1,    -1,    -1,    -1,   189,    -1,   191,   192,   193,
      -1,   195,    -1,   197,    -1,   199,   200,   201,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   228,   229,   230,    -1,    -1,    -1,
      -1,   235,    -1,   237,   238,   239,    -1,    -1,   242,    -1,
      -1,    -1,   246,   247,    -1,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   359,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   297,   298,   299,   300,   301,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   358,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   355,   356,   357,   358,   359,   360,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    95,    96,    97,    -1,    -1,
      -1,    -1,   102,   103,    -1,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,    -1,   123,    -1,   125,   126,    -1,   128,   129,
     130,   131,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
      -1,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,   161,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,   175,   176,   177,   178,   179,
     180,    -1,    -1,   183,   184,    -1,    -1,    -1,    -1,   189,
      -1,   191,   192,   193,    -1,   195,    -1,   197,    -1,   199,
     200,   201,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,   229,
     230,    -1,    -1,    -1,    -1,   235,    -1,   237,   238,   239,
      -1,    -1,   242,    -1,    -1,    -1,   246,   247,    -1,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,   298,   299,
     300,   301,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   358,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   355,   356,   357,   358,   359,
     360,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,
      96,    97,    -1,    -1,    -1,    -1,   102,   103,    -1,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,    -1,   123,    -1,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,   161,    -1,   163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,   175,
     176,   177,   178,   179,   180,    -1,    -1,   183,   184,    -1,
      -1,    -1,    -1,   189,    -1,   191,   192,   193,    -1,   195,
      -1,   197,    -1,   199,   200,   201,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,   229,   230,    -1,    -1,    -1,    -1,   235,
      -1,   237,   238,   239,    -1,    -1,   242,    -1,    -1,    -1,
     246,   247,    -1,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   359,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   297,   298,   299,   300,   301,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     358,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   355,
     356,   357,   358,   359,   360,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    95,    96,    97,    -1,    -1,    -1,    -1,
     102,   103,    -1,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
      -1,   123,    -1,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   139,    -1,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,   161,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,    -1,
      -1,   183,   184,    -1,    -1,    -1,    -1,   189,    -1,   191,
     192,   193,    -1,   195,    -1,   197,    -1,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,   228,   229,   230,    -1,
      -1,    -1,    -1,   235,    -1,   237,   238,   239,    -1,    -1,
     242,    -1,    -1,    -1,   246,   247,    -1,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   297,   298,   299,   300,   301,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   358,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   355,   356,   357,   358,   359,   360,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    95,    96,    97,
      -1,    -1,    -1,    -1,   102,   103,    -1,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,    -1,   123,    -1,   125,   126,    -1,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,    -1,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,    -1,    -1,
      -1,   159,    -1,   161,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,   174,   175,   176,   177,
     178,   179,   180,    -1,    -1,   183,   184,    -1,    -1,    -1,
      -1,   189,    -1,   191,   192,   193,    -1,   195,    -1,   197,
      -1,   199,   200,   201,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
     228,   229,   230,    -1,    -1,    -1,    -1,   235,    -1,   237,
     238,   239,    -1,    -1,   242,    -1,    -1,    -1,   246,   247,
      -1,   249,   250,   251,   252,    -1,    -1,    -1,   256,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,
     298,   299,   300,   301,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   358,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   355,   356,   357,
     358,   359,   360,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,    -1,    -1,    -1,    -1,   102,   103,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,    -1,   123,
      -1,   125,   126,    -1,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,    -1,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,    -1,    -1,   159,    -1,   161,    -1,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
     174,   175,   176,   177,   178,   179,   180,    -1,    -1,   183,
     184,    -1,    -1,    -1,    -1,   189,    -1,   191,   192,   193,
      -1,   195,    -1,   197,    -1,   199,   200,   201,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   228,   229,   230,    -1,    -1,    -1,
      -1,   235,    -1,   237,   238,   239,    -1,    -1,   242,    -1,
      -1,    -1,   246,   247,    -1,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   359,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   297,   298,   299,   300,   301,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   358,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   355,   356,   357,   358,   359,   360,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    95,    96,    97,    -1,    -1,
      -1,    -1,   102,   103,    -1,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,    -1,   123,    -1,   125,   126,    -1,   128,   129,
     130,   131,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
      -1,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,   161,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   174,   175,   176,   177,   178,   179,
     180,    -1,    -1,   183,   184,    -1,    -1,    -1,    -1,   189,
      -1,   191,   192,   193,    -1,   195,    -1,   197,    -1,   199,
     200,   201,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,   229,
     230,    -1,    -1,    -1,    -1,   235,    -1,   237,   238,   239,
      -1,    -1,   242,    -1,    -1,    -1,   246,   247,    -1,   249,
     250,   251,   252,    -1,    -1,    -1,   256,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,   298,   299,
     300,   301,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   358,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   355,   356,   357,   358,   359,
     360,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,
      96,    97,    -1,    -1,    -1,    -1,   102,   103,    -1,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,    -1,   123,    -1,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,    -1,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,   161,    -1,   163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,   175,
     176,   177,   178,   179,   180,    -1,    -1,   183,   184,    -1,
      -1,    -1,    -1,   189,    -1,   191,   192,   193,    -1,   195,
      -1,   197,    -1,   199,   200,   201,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,   229,   230,    -1,    -1,    -1,    -1,   235,
      -1,   237,   238,   239,    -1,    -1,   242,    -1,    -1,    -1,
     246,   247,    -1,   249,   250,   251,   252,    -1,    -1,    -1,
     256,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   359,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   297,   298,   299,   300,   301,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     358,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   355,
     356,   357,   358,   359,   360,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    95,    96,    97,    -1,    -1,    -1,    -1,
     102,   103,    -1,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
      -1,   123,    -1,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   139,    -1,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,   161,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,    -1,
      -1,   183,   184,    -1,    -1,    -1,    -1,   189,    -1,   191,
     192,   193,    -1,   195,    -1,   197,    -1,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,   228,   229,   230,    -1,
      -1,    -1,    -1,   235,    -1,   237,   238,   239,    -1,    -1,
     242,    -1,    -1,    -1,   246,   247,    -1,   249,   250,   251,
     252,    -1,    -1,    -1,   256,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   297,   298,   299,   300,   301,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   358,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   355,   356,   357,   358,   359,   360,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    95,    96,    97,
      -1,    -1,    -1,    -1,   102,   103,    -1,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,    -1,   123,    -1,   125,   126,    -1,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,    -1,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,    -1,    -1,
      -1,   159,    -1,   161,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,   174,   175,   176,   177,
     178,   179,   180,    -1,    -1,   183,   184,    -1,    -1,    -1,
      -1,   189,    -1,   191,   192,   193,    -1,   195,    -1,   197,
      -1,   199,   200,   201,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
     228,   229,   230,    -1,    -1,    -1,    -1,   235,    -1,   237,
     238,   239,    -1,    -1,   242,    -1,    -1,    -1,   246,   247,
      -1,   249,   250,   251,   252,    -1,    -1,    -1,   256,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,
     298,   299,   300,   301,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   358,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   355,   356,   357,
     358,   359,   360,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,    -1,    -1,    -1,    -1,   102,   103,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,    -1,   123,
      -1,   125,   126,    -1,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,    -1,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,    -1,    -1,   159,    -1,   161,    -1,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
     174,   175,   176,   177,   178,   179,   180,    -1,    -1,   183,
     184,    -1,    -1,    -1,    -1,   189,    -1,   191,   192,   193,
      -1,   195,    -1,   197,    -1,   199,   200,   201,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      17,    18,   226,    -1,   228,   229,   230,    -1,    25,    26,
      -1,   235,    -1,   237,   238,   239,    -1,    -1,   242,    -1,
      37,    -1,   246,   247,    -1,   249,   250,   251,   252,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,   359,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   297,   298,   299,   300,   301,    95,    -1,
      -1,    -1,    99,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   359,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,   356,   357,   358,   359,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   175,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,    -1,   210,   211,    -1,    -1,    -1,   215,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,    -1,   295,    -1,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,    -1,    -1,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
     347,   348,   349,   350,     3,     4,     5,     6,     7,     8,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    10,    11,    12,    13,    14,
      15,    16,    81,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
     359,    -1,    -1,    -1,    -1,    -1,   175,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   231,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,    -1,   295,    -1,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,    -1,    -1,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,   347,   348,
     349,   350,     3,     4,     5,     6,     7,     8,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,   359,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,   359,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   359,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     359,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   359,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    10,    11,    12,    13,    14,    15,    16,   209,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   359,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,   295,    -1,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,    -1,    -1,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    -1,   347,   348,   349,   350,
       3,     4,     5,     6,     7,     8,   357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   359,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   359,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   359,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   359,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,   359,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     359,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   359,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   250,    -1,    -1,
      -1,    -1,    -1,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,    -1,   295,    -1,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,    -1,    -1,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,   347,   348,   349,   350,     3,     4,
       5,     6,     7,     8,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    10,    11,    12,    13,    14,    15,    16,
     359,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   359,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,   359,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     359,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   129,    -1,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    -1,
     295,    -1,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      -1,    -1,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    -1,   347,   348,   349,   350,     3,     4,     5,     6,
       7,     8,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,   359,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,    12,
      13,    14,    15,    16,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,   359,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    10,
      11,    12,    13,    14,    15,    16,   358,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,   358,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   358,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,    -1,   295,    -1,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,    -1,    -1,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
     347,   348,   349,   350,     3,     4,     5,     6,     7,     8,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,   358,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   102,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    10,    11,    12,
      13,    14,    15,    16,   358,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   358,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,    -1,   295,    -1,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,    -1,    -1,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,   347,   348,
     349,   350,     3,     4,     5,     6,     7,     8,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
     358,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   358,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,   295,    -1,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,    -1,    -1,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    -1,   347,   348,   349,   350,
       3,     4,     5,     6,     7,     8,   357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,   358,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    81,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   358,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   175,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   358,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   358,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,    -1,   295,    -1,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,    -1,    -1,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,   347,   348,   349,   350,     3,     4,
       5,     6,     7,     8,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,   358,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   358,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    -1,
     295,    -1,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      -1,    -1,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    -1,   347,   348,   349,   350,     3,     4,     5,     6,
       7,     8,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,   358,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,    12,
      13,    14,    15,    16,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   358,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   358,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    10,    11,    12,    13,
      14,    15,    16,   358,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   358,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,    -1,   295,    -1,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,    -1,    -1,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
     347,   348,   349,   350,    -1,    -1,    -1,    -1,    -1,    -1,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    10,    11,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   358,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     358,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    10,    11,    12,
      13,    14,    15,    16,   358,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
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
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   358,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    10,
      11,    12,    13,    14,    15,    16,   358,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   358,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   358,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   358,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    10,    11,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   358,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   358,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     358,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   358,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     358,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   358,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    84,    -1,    -1,    -1,    -1,    -1,
     358,    91,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,
      -1,    -1,    -1,    -1,   144,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,   358,    -1,    -1,    93,    94,    -1,    -1,    -1,
      98,    -1,   100,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,
      -1,   201,    -1,    18,   204,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,    -1,   136,   358,
      -1,    36,    -1,   223,   224,    40,    -1,    -1,    43,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    10,    11,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,   102,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   358,   253,   254,    -1,   153,    -1,
      -1,    74,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,   358,    -1,    -1,    -1,   230,    -1,    -1,   183,    -1,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   157,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,   167,    -1,    -1,   170,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   187,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,    -1,    -1,    -1,    -1,
     233,   234,    -1,    -1,    -1,    -1,   239,   240,    -1,    -1,
      -1,    -1,    -1,   246,    -1,   248,    -1,    -1,    -1,    -1,
     253,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   125,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   113,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   101,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    43,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      42,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    42,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    78,    96,    97,   146,   188,
     190,   198,   217,   218,   232,   235,   243,   362,   398,   399,
     436,   440,   441,   444,   445,   448,   449,   450,   452,   468,
     469,   478,   481,   483,   484,   485,   507,   510,   517,   518,
     521,   524,   525,   528,   201,   229,   346,   229,     3,    10,
      84,    91,   127,   128,   144,   184,   201,   204,   223,   224,
     238,   346,   489,     3,   437,    84,   128,   144,   184,   201,
     204,   229,   346,   460,   229,   229,   460,     8,   204,   508,
     509,   417,   229,   460,   479,     3,    84,     0,   355,   447,
       3,     3,     3,     3,   357,   198,   145,   482,     3,   144,
       3,     3,    77,   145,     3,     3,   482,   223,   144,   482,
     229,   470,     3,   125,   143,   158,   185,   438,     3,   145,
       3,   145,     3,     3,   145,     3,   145,     3,   145,     3,
     145,     3,   145,    92,   135,   143,   148,   158,   461,     3,
       3,   461,     9,    20,     3,   102,   359,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    37,    64,    69,
      72,    73,    81,    95,    99,   135,   165,   175,   203,   210,
     211,   215,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     295,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   347,   348,
     349,   350,   357,   363,   418,   419,     3,   143,   158,     3,
     357,   421,   422,   423,   425,   435,     3,   362,    46,    47,
      66,   192,    89,   109,    35,    67,    89,    97,   109,   169,
     190,   245,    47,   190,   526,   356,     3,     4,     5,     6,
       7,     8,   175,   358,   519,   520,   128,   184,   256,     3,
      43,     3,   357,   179,     3,   145,   256,   357,    36,    51,
     522,     3,     3,    77,   145,     3,   482,   357,   471,   356,
     439,     3,   438,   125,   359,   256,   256,   256,   256,   256,
     256,   256,     3,   222,     3,   363,   363,   509,   356,   357,
       9,   363,   363,   363,   250,   363,   397,   356,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   363,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    43,   420,   125,   148,   359,   359,   356,   420,   399,
     421,   217,   359,    68,   142,   159,   172,   197,   215,   426,
     428,    43,   424,    45,    45,    63,    76,     3,    76,    63,
       3,    63,    76,    63,     3,    76,     3,    63,    76,    63,
     252,   222,    18,   166,   351,   352,   353,   354,   527,     3,
     358,   359,     3,     3,    53,    54,    56,    58,    59,    74,
     103,   104,   105,   106,   112,   121,   141,   149,   157,   164,
     167,   170,   171,   187,   216,   217,   220,   221,   226,   228,
     233,   234,   239,   240,   246,   248,   253,   503,   179,     3,
      16,   139,   177,   511,   512,   513,     3,   179,   256,     3,
     511,    96,   146,   235,   523,   179,     3,   145,   256,   526,
       3,     3,   472,   125,   222,   473,    26,   249,   400,   242,
     421,     3,     3,     3,     3,     3,     3,     3,     3,   217,
     357,   462,     3,   217,   462,     3,   363,   368,   369,   363,
     363,   397,   113,   114,   250,     3,     3,   374,   363,    57,
     160,   231,   363,   395,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   358,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   358,
     363,   363,   363,   358,   363,   363,   363,   363,   363,   363,
      26,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   358,   358,   358,   358,   358,   363,   363,   358,
     358,   358,   363,   363,     5,   358,   358,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   358,
     358,   363,   363,   363,   363,   363,     6,    18,   175,   294,
     357,    13,    14,    16,    19,   363,    37,    39,   209,   357,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,     3,   421,     3,   419,     3,   446,     3,
     122,   143,   243,   432,   358,   358,     3,   480,   422,   159,
     197,   429,   423,   152,   178,   427,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   503,     3,   222,     3,     3,
       3,     5,     3,   354,     5,     5,   252,     5,    55,     5,
     520,   357,   357,   357,   499,   499,   499,   499,   499,   499,
     357,   499,   499,   499,    56,   500,   500,   499,   499,   499,
     357,   500,   499,   500,   357,   357,    18,    70,   102,     3,
     503,     3,     3,     3,   358,   359,   242,   357,     3,     3,
     179,   358,   179,     3,   179,   256,     3,   143,   198,   356,
     357,   505,   506,   358,   359,     4,   213,   214,   474,   363,
     180,   410,   421,   400,   439,     3,   467,     3,   463,   247,
     399,   467,   247,   399,   359,   358,   230,   113,   114,   363,
     363,   358,   399,   125,   359,   358,   125,   363,   359,   359,
     359,   358,   358,   358,   358,   358,   358,   359,   359,   359,
     359,   358,   359,   359,   359,   358,   358,   358,   358,   359,
     359,   358,   359,   358,   358,   358,    43,   359,   359,   359,
     359,   296,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   359,   359,   359,   358,   359,   325,   325,   325,
     358,   359,   358,   359,   358,   325,   325,   359,   358,   358,
     358,   358,   358,   358,   358,   358,   359,   359,   359,   359,
     359,   359,   359,   359,   358,   359,   358,   358,   358,   359,
       6,   175,   370,   372,   363,   363,   357,   363,    42,   357,
     357,   357,   364,   400,   125,   359,   420,   153,   153,   153,
      20,   356,   359,   400,   427,   427,   152,   179,   423,   152,
      70,   123,   183,   238,   503,   503,     3,   498,   503,     3,
     222,   222,     5,     5,   511,   511,     5,   501,   502,   501,
     501,     4,   504,   501,   501,   501,   502,   502,   501,   501,
     501,   504,   502,   501,   502,     5,     5,   175,   357,   363,
     357,   503,   503,   503,   195,   513,   244,     3,   302,   303,
     304,   305,   442,   443,   242,   357,   179,     3,    43,    52,
       3,   242,   357,     3,     3,   179,     3,    63,    70,   123,
     127,   144,   153,   183,   238,   490,   491,   497,   424,     3,
      79,    88,   124,   132,   175,   219,   252,   357,   475,   476,
     477,    55,   161,   413,   400,    20,   181,   359,   453,   358,
     359,   357,   464,   453,   464,   453,   368,   363,   363,   113,
     230,    83,   358,   363,   363,   363,   125,   150,   396,   396,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   503,   503,   363,   363,   363,     4,   325,   325,   325,
     325,   325,   325,   363,   363,   363,   363,   357,   357,   357,
     325,     5,   325,     5,   325,   357,   357,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   368,   399,
     371,   373,    42,   363,   367,   365,   366,   399,   130,   401,
     421,     3,   432,   129,   433,   433,   433,   363,     3,     3,
     410,   423,   363,   179,   242,   430,   431,   423,   357,   153,
     153,   357,   498,   498,   503,    18,    36,    40,    43,    45,
      48,    63,    70,    71,   102,   119,   153,   175,   183,   238,
     451,   498,     3,     3,   358,   358,   358,   359,   236,   255,
      74,    75,   358,   359,   358,   358,   358,    70,   363,   442,
      54,    58,   103,   106,   121,   141,   149,   226,   228,   246,
     514,   357,   357,   357,   357,   357,   358,   359,   244,   442,
       3,   242,   357,    52,   515,   129,   244,   442,   242,   357,
     179,     3,   357,   505,     3,   357,   153,   144,   153,   357,
     357,   153,   357,   358,   359,     3,   399,     4,    79,   226,
       6,     4,     4,   357,   476,   359,     3,     5,   411,   412,
     363,   194,   529,   102,   363,   153,     3,     3,   102,   363,
     466,   359,   453,   453,   113,   363,   357,   129,   358,   358,
     359,   358,   363,   363,   358,   358,   358,   358,   358,   359,
     359,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   359,   358,   357,   357,   357,   357,   357,   357,   358,
     359,   359,   358,   358,   375,   376,   377,   357,   358,   359,
     357,   358,   359,   357,   393,   394,   358,   359,   359,   359,
     358,   358,   359,   359,   358,   359,   358,   359,   358,   359,
     358,   358,   368,   399,   363,   399,   399,   399,   358,    55,
     137,   405,   400,   152,   357,   357,   357,    20,    20,   356,
     413,   363,   357,   431,   363,   357,   357,     3,   496,   451,
     451,   498,   175,     3,   357,   357,   357,    44,     3,   357,
       4,     4,     5,     6,     7,    64,   308,   309,   310,   357,
     153,   153,   451,   195,    43,    52,     5,   217,     4,   502,
       4,   502,   502,   357,   358,   358,    43,    52,   442,     3,
       3,     3,     3,     3,   357,   358,   357,   244,   442,   515,
       3,     4,     5,     6,     7,     8,    10,    12,    16,    17,
      18,    20,    24,    25,    26,    27,    28,    37,    42,    43,
      46,    51,    52,    53,    54,    55,    58,    60,    61,    62,
      65,    66,    68,    69,    70,    74,    85,    90,    95,    96,
      97,   102,   103,   105,   106,   107,   108,   111,   113,   114,
     115,   116,   118,   120,   121,   123,   125,   126,   128,   129,
     130,   131,   137,   139,   141,   142,   144,   145,   146,   147,
     148,   149,   151,   152,   153,   154,   155,   159,   161,   163,
     172,   174,   175,   176,   177,   178,   179,   180,   183,   184,
     189,   191,   192,   193,   195,   197,   199,   200,   201,   202,
     216,   217,   218,   226,   228,   229,   230,   235,   237,   238,
     239,   242,   246,   247,   249,   250,   251,   252,   256,   297,
     298,   299,   300,   301,   355,   356,   357,   358,   359,   360,
     516,   107,   357,   358,   244,   442,     3,   242,   357,   490,
      70,   123,   183,   238,   363,   357,   357,   357,     3,   416,
     416,   357,   496,   486,   505,   491,   503,   476,   358,   477,
      41,   101,   356,   403,   403,   359,   163,   359,     3,    26,
     530,   235,    20,   358,   359,   465,   179,   455,     4,   363,
     363,   358,    93,    94,    98,   100,   133,   134,   136,   253,
     254,   363,   363,   363,   379,   380,   378,   381,   382,   383,
     363,   363,   326,   406,   406,   406,   384,   325,     4,     5,
     388,   325,     4,     5,   392,   406,   406,   363,   363,   363,
     363,   363,   363,   363,   363,   358,   358,   358,   358,   358,
     363,   402,   363,   410,   401,     3,   434,   434,   434,   363,
     363,     3,   529,   416,   358,     3,   493,     3,   492,   358,
     359,   451,     5,   363,     5,    43,    70,   183,   238,   363,
     357,   357,   357,   363,   514,    52,   515,   358,     4,   363,
      52,   515,   358,   358,   358,   358,   359,   442,   442,   357,
     358,   113,   515,   515,   515,   515,   515,   515,   199,   442,
     357,   358,   357,   244,   442,   358,   357,   153,   153,   357,
     358,   493,   416,   416,   358,   359,   358,   492,   358,    40,
     179,   205,   498,   358,     3,   412,   363,   363,   359,   454,
     102,   363,   102,   363,   357,    80,   529,   358,   358,   358,
     358,   358,   358,   406,   406,   406,   406,   406,   406,   358,
     359,   358,    55,   180,   408,   408,   408,   406,   357,   358,
     358,   406,   357,   358,   358,   406,   408,   408,   358,   358,
     358,   358,   358,   359,   358,   358,   403,   252,   359,   404,
     413,   405,   358,   359,   358,   358,    20,   358,    18,   358,
     359,   358,   359,     3,   358,   359,   358,   358,   359,   357,
     357,   153,   358,   358,   358,   358,   358,    43,    52,   515,
     113,   358,   515,   113,     3,   358,   358,   442,   113,   113,
     113,   113,   113,   113,    52,   358,   442,   442,   357,   358,
     486,   505,   363,   357,   357,   496,   358,   358,   358,     3,
     358,     5,    20,     3,    55,   403,     3,     3,   459,   466,
     357,   456,   408,   408,   408,   408,   408,   408,   363,     3,
     407,    55,   358,   358,   358,   408,   385,   325,   325,   408,
     389,   325,   325,   408,   358,   358,   363,   196,   363,   129,
     414,   410,     3,   363,   245,   189,     3,     3,     5,    49,
      50,     5,   363,   363,    52,   515,   113,   113,   358,   358,
      69,   120,   145,   155,   251,   515,   358,   358,   442,   358,
     493,   492,   358,   189,     5,    96,   225,   186,   244,    20,
     359,   358,     3,    90,   457,   358,   358,   358,   358,   358,
     358,   358,   359,     3,   409,   358,   406,   357,   357,   358,
     406,   357,   357,   358,   358,   403,   207,   235,   148,   415,
     413,     3,   358,   358,   358,   358,   515,   113,   113,   358,
     358,   358,     3,     3,     3,   357,   357,   363,     3,   358,
     359,    82,   235,     3,   403,   359,   408,   386,   387,   408,
     390,   391,   208,   208,   416,   357,    49,    50,   113,   189,
     356,   357,     3,     3,    20,     3,   458,     3,   358,   406,
     406,   358,   406,   406,   162,   162,     3,   494,     3,     3,
     494,   358,   358,   363,   217,   403,   408,   408,   408,   408,
     358,   359,   356,   357,   357,   358,   357,   206,   459,   358,
     358,   358,   358,   495,     3,     3,   494,   494,   495,   205,
     487,   488,     5,    18,    86,   165,   179,   357,   358,   358,
      18,     3,   358,   359,    86,   245,   140,   126,   182,   212,
      96,   235,   494,   495,   495,   247,   488,    87,   138,    66,
     174,   192,   217,    66,   174,   192,   217,   358,   156,   102,
     175,   102,   175,   495,   227,     4,   166,   179,   179,   173,
     173,     5,     5
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
#line 432 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 438 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 439 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 441 "parser/evoparser.y"
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
#line 454 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 456 "parser/evoparser.y"
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
#line 474 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 482 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 490 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 496 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 503 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 504 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 505 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 506 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 507 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 508 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 509 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 510 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 511 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 512 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 513 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 514 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 515 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 516 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 517 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 518 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 519 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 520 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 521 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 523 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 528 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 529 "parser/evoparser.y"
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
#line 537 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 538 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 539 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 540 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 541 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 542 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 545 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 43:
#line 546 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 44:
#line 547 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 45:
#line 548 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 46:
#line 549 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 47:
#line 552 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 48:
#line 553 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 49:
#line 556 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 50:
#line 557 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 51:
#line 560 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 53:
#line 564 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 54:
#line 564 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 55:
#line 565 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 56:
#line 565 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 57:
#line 566 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 567 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 59:
#line 574 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 60:
#line 575 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 61:
#line 582 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 62:
#line 583 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 63:
#line 593 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 64:
#line 597 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 65:
#line 598 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 599 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 600 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 601 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 602 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 70:
#line 603 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 71:
#line 604 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 72:
#line 608 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 73:
#line 609 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 74:
#line 610 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 75:
#line 611 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 76:
#line 612 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 77:
#line 613 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 78:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 616 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 80:
#line 617 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 81:
#line 618 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 82:
#line 619 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 620 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 84:
#line 621 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 622 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 86:
#line 623 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 624 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 88:
#line 625 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 89:
#line 626 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 90:
#line 628 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 91:
#line 629 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 630 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 93:
#line 631 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 632 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 95:
#line 633 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 96:
#line 634 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 97:
#line 635 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 98:
#line 636 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 637 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 100:
#line 638 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 101:
#line 639 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 102:
#line 640 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 103:
#line 641 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 104:
#line 642 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 105:
#line 643 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 106:
#line 645 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 107:
#line 646 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 108:
#line 647 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 109:
#line 648 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 110:
#line 649 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 111:
#line 650 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 112:
#line 653 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 113:
#line 654 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 114:
#line 655 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 115:
#line 656 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 116:
#line 657 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 658 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 118:
#line 659 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 660 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 661 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 121:
#line 662 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 122:
#line 663 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 123:
#line 664 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 124:
#line 665 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 125:
#line 666 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 126:
#line 667 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 127:
#line 668 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 128:
#line 669 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 129:
#line 670 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 130:
#line 671 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 131:
#line 672 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 132:
#line 673 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 133:
#line 674 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 134:
#line 675 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 135:
#line 676 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 136:
#line 677 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 137:
#line 678 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 138:
#line 679 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 139:
#line 680 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 140:
#line 681 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 141:
#line 682 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 142:
#line 683 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 143:
#line 684 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 144:
#line 685 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 145:
#line 686 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 146:
#line 688 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 147:
#line 689 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 148:
#line 690 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 149:
#line 691 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 150:
#line 692 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 151:
#line 693 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 152:
#line 694 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 153:
#line 695 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 154:
#line 697 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 155:
#line 698 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 156:
#line 699 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 157:
#line 700 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 158:
#line 701 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 159:
#line 702 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 160:
#line 703 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 161:
#line 704 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 162:
#line 705 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 163:
#line 706 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 164:
#line 707 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 165:
#line 708 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 166:
#line 709 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 167:
#line 710 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 168:
#line 711 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 169:
#line 712 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 170:
#line 713 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 171:
#line 714 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 172:
#line 715 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 716 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 174:
#line 717 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 175:
#line 718 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 176:
#line 720 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 177:
#line 721 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 178:
#line 722 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 179:
#line 723 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 180:
#line 724 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 181:
#line 726 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 182:
#line 727 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 183:
#line 729 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 184:
#line 730 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 185:
#line 731 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 186:
#line 733 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 187:
#line 734 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 188:
#line 735 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 189:
#line 736 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 190:
#line 743 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 191:
#line 750 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 192:
#line 757 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 761 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 765 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 195:
#line 769 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 196:
#line 773 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 197:
#line 777 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 198:
#line 783 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 784 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 200:
#line 785 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 201:
#line 789 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 202:
#line 795 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 203:
#line 801 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 204:
#line 802 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 803 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 804 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 207:
#line 805 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 208:
#line 806 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 209:
#line 807 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 808 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 211:
#line 809 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 212:
#line 813 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 213:
#line 815 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 214:
#line 817 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 215:
#line 819 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 216:
#line 823 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 217:
#line 831 "parser/evoparser.y"
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
#line 841 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 219:
#line 842 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 220:
#line 845 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 221:
#line 846 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 222:
#line 850 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 858 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 224:
#line 866 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 225:
#line 877 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 226:
#line 886 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 227:
#line 891 "parser/evoparser.y"
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
#line 904 "parser/evoparser.y"
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
#line 917 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 232:
#line 919 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 233:
#line 922 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 234:
#line 929 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 235:
#line 937 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 938 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 939 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 238:
#line 942 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 239:
#line 943 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 241:
#line 947 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 244:
#line 956 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 245:
#line 958 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 248:
#line 966 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 249:
#line 968 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 254:
#line 980 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 255:
#line 986 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 256:
#line 993 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 257:
#line 1001 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 258:
#line 1002 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1003 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 260:
#line 1004 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 261:
#line 1007 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 262:
#line 1008 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 263:
#line 1009 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 264:
#line 1010 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 265:
#line 1011 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 267:
#line 1015 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 268:
#line 1018 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1019 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 270:
#line 1022 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 271:
#line 1023 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 272:
#line 1024 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 273:
#line 1025 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 274:
#line 1026 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 275:
#line 1027 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 276:
#line 1028 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 277:
#line 1029 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 278:
#line 1030 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 279:
#line 1033 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 280:
#line 1034 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 281:
#line 1036 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 282:
#line 1044 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 283:
#line 1049 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 284:
#line 1050 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 285:
#line 1051 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 286:
#line 1054 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1055 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1064 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 291:
#line 1070 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 292:
#line 1071 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 293:
#line 1072 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 296:
#line 1081 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 297:
#line 1083 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 298:
#line 1085 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 299:
#line 1087 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 300:
#line 1089 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 301:
#line 1092 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 302:
#line 1093 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 303:
#line 1094 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 304:
#line 1097 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 305:
#line 1098 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 306:
#line 1101 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1102 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 308:
#line 1105 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 309:
#line 1106 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 310:
#line 1107 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 313:
#line 1114 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 314:
#line 1115 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 315:
#line 1120 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 316:
#line 1122 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 317:
#line 1124 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 319:
#line 1128 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1129 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 321:
#line 1132 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 322:
#line 1133 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 323:
#line 1136 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 324:
#line 1141 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 325:
#line 1151 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 326:
#line 1158 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 327:
#line 1159 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 328:
#line 1160 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 329:
#line 1161 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 330:
#line 1166 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 331:
#line 1170 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 332:
#line 1172 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 335:
#line 1178 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 336:
#line 1183 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 337:
#line 1190 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 338:
#line 1197 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 339:
#line 1207 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 340:
#line 1214 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 341:
#line 1221 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 342:
#line 1229 "parser/evoparser.y"
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
#line 1239 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 344:
#line 1247 "parser/evoparser.y"
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
#line 1257 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 346:
#line 1265 "parser/evoparser.y"
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
#line 1274 "parser/evoparser.y"
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
#line 1283 "parser/evoparser.y"
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
#line 1293 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 350:
#line 1301 "parser/evoparser.y"
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
#line 1310 "parser/evoparser.y"
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
#line 1319 "parser/evoparser.y"
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
#line 1329 "parser/evoparser.y"
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
#line 1338 "parser/evoparser.y"
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
#line 1350 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 356:
#line 1355 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 357:
#line 1360 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 358:
#line 1366 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 359:
#line 1373 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1380 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 361:
#line 1387 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1397 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 363:
#line 1404 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 364:
#line 1413 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 365:
#line 1420 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 366:
#line 1426 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 367:
#line 1434 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 368:
#line 1440 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 370:
#line 1448 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 371:
#line 1449 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 372:
#line 1450 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 373:
#line 1451 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 374:
#line 1456 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 375:
#line 1463 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 376:
#line 1472 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 377:
#line 1479 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 378:
#line 1485 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 379:
#line 1495 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 380:
#line 1499 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 381:
#line 1505 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 382:
#line 1511 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 383:
#line 1518 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 384:
#line 1524 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 385:
#line 1531 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 386:
#line 1537 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1543 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 388:
#line 1549 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 389:
#line 1555 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 390:
#line 1561 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 391:
#line 1567 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 392:
#line 1573 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 393:
#line 1579 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 394:
#line 1585 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 395:
#line 1591 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 396:
#line 1597 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 397:
#line 1603 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 398:
#line 1609 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 399:
#line 1615 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 400:
#line 1622 "parser/evoparser.y"
    { ;}
    break;

  case 401:
#line 1623 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 402:
#line 1624 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 403:
#line 1628 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 404:
#line 1636 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 405:
#line 1642 "parser/evoparser.y"
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
#line 1655 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 408:
#line 1655 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 411:
#line 1663 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 412:
#line 1664 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 413:
#line 1665 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 414:
#line 1669 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 415:
#line 1670 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 416:
#line 1671 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 417:
#line 1675 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 418:
#line 1683 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 419:
#line 1692 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 420:
#line 1693 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 421:
#line 1694 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 422:
#line 1695 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 423:
#line 1696 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 427:
#line 1703 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 428:
#line 1707 "parser/evoparser.y"
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
#line 1717 "parser/evoparser.y"
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
#line 1729 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 431:
#line 1730 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 432:
#line 1730 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 433:
#line 1733 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 434:
#line 1734 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 435:
#line 1735 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 436:
#line 1736 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 437:
#line 1740 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 438:
#line 1743 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 439:
#line 1744 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 440:
#line 1745 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 441:
#line 1746 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 442:
#line 1752 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 443:
#line 1758 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 444:
#line 1763 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 445:
#line 1768 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 446:
#line 1772 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 447:
#line 1776 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 448:
#line 1778 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 451:
#line 1784 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 452:
#line 1785 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 453:
#line 1789 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 454:
#line 1790 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 455:
#line 1794 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 456:
#line 1795 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 457:
#line 1796 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 464:
#line 1811 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 465:
#line 1812 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 466:
#line 1813 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 467:
#line 1814 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 468:
#line 1815 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 469:
#line 1816 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 470:
#line 1817 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 471:
#line 1818 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 472:
#line 1823 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 473:
#line 1832 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 474:
#line 1839 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 475:
#line 1840 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 476:
#line 1841 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 477:
#line 1846 "parser/evoparser.y"
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
#line 1857 "parser/evoparser.y"
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
#line 1869 "parser/evoparser.y"
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
#line 1880 "parser/evoparser.y"
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
#line 1895 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 482:
#line 1899 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 483:
#line 1903 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 484:
#line 1904 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 485:
#line 1909 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 486:
#line 1911 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 487:
#line 1913 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 488:
#line 1915 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 489:
#line 1918 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 490:
#line 1919 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 491:
#line 1925 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 492:
#line 1930 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 493:
#line 1932 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 494:
#line 1934 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 495:
#line 1936 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 496:
#line 1938 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 497:
#line 1942 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 498:
#line 1946 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 499:
#line 1947 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 500:
#line 1952 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 501:
#line 1962 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 502:
#line 1971 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 504:
#line 1975 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 505:
#line 1976 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 506:
#line 1977 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 507:
#line 1978 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 508:
#line 1980 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 509:
#line 1982 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 512:
#line 1990 "parser/evoparser.y"
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
#line 2005 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 514:
#line 2013 "parser/evoparser.y"
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
#line 2027 "parser/evoparser.y"
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
#line 2041 "parser/evoparser.y"
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
#line 2055 "parser/evoparser.y"
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
#line 2067 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 519:
#line 2068 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 520:
#line 2069 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 521:
#line 2072 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 522:
#line 2073 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 523:
#line 2076 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 524:
#line 2077 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 525:
#line 2078 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 526:
#line 2079 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 527:
#line 2080 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 528:
#line 2081 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 529:
#line 2082 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 530:
#line 2083 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 531:
#line 2085 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 532:
#line 2087 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 533:
#line 2089 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 534:
#line 2091 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 535:
#line 2093 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 536:
#line 2095 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 537:
#line 2098 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 538:
#line 2099 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 539:
#line 2102 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 540:
#line 2103 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 541:
#line 2106 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 542:
#line 2107 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 544:
#line 2111 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 545:
#line 2112 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 546:
#line 2113 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 547:
#line 2114 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 548:
#line 2115 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 549:
#line 2116 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 550:
#line 2117 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 551:
#line 2118 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 552:
#line 2119 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 553:
#line 2120 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 554:
#line 2121 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 555:
#line 2122 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 556:
#line 2123 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 557:
#line 2124 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 558:
#line 2125 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 559:
#line 2126 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 560:
#line 2127 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 561:
#line 2130 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 562:
#line 2131 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 563:
#line 2134 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 564:
#line 2136 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 565:
#line 2144 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 566:
#line 2145 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 568:
#line 2147 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 569:
#line 2148 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2149 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 571:
#line 2150 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 572:
#line 2151 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 573:
#line 2152 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 574:
#line 2153 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 575:
#line 2154 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 576:
#line 2155 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 577:
#line 2162 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 578:
#line 2163 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 579:
#line 2164 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 580:
#line 2165 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 581:
#line 2166 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 582:
#line 2167 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 583:
#line 2168 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 584:
#line 2169 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 585:
#line 2170 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 586:
#line 2171 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 587:
#line 2172 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 588:
#line 2173 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 589:
#line 2174 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 590:
#line 2175 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 591:
#line 2176 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 592:
#line 2177 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 593:
#line 2178 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 594:
#line 2179 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 595:
#line 2180 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 596:
#line 2181 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 597:
#line 2182 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 598:
#line 2185 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 599:
#line 2186 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 600:
#line 2187 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 601:
#line 2190 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 602:
#line 2191 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 603:
#line 2194 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 604:
#line 2195 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 605:
#line 2196 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 607:
#line 2200 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 608:
#line 2201 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 609:
#line 2205 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 610:
#line 2206 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 611:
#line 2207 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 612:
#line 2208 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 613:
#line 2209 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 614:
#line 2210 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 615:
#line 2211 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 616:
#line 2212 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 617:
#line 2213 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 618:
#line 2214 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 619:
#line 2215 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 620:
#line 2216 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 621:
#line 2217 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 622:
#line 2218 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 623:
#line 2219 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 624:
#line 2220 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 625:
#line 2221 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 626:
#line 2222 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 627:
#line 2223 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 628:
#line 2224 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 629:
#line 2225 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 630:
#line 2226 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 631:
#line 2227 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 632:
#line 2228 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 633:
#line 2229 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 634:
#line 2230 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 635:
#line 2231 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 636:
#line 2232 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 637:
#line 2233 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 638:
#line 2234 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 639:
#line 2235 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 640:
#line 2236 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 641:
#line 2237 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 642:
#line 2240 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 643:
#line 2241 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 644:
#line 2245 "parser/evoparser.y"
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
#line 2257 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 646:
#line 2258 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 647:
#line 2259 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 648:
#line 2263 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 649:
#line 2266 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 650:
#line 2267 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 654:
#line 2271 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 655:
#line 2272 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 656:
#line 2280 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 657:
#line 2285 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 658:
#line 2291 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 659:
#line 2297 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 660:
#line 2304 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 661:
#line 2311 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 662:
#line 2317 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 663:
#line 2323 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 664:
#line 2330 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 669:
#line 2346 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 670:
#line 2347 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 671:
#line 2348 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 672:
#line 2349 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 673:
#line 2352 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 674:
#line 2353 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 675:
#line 2354 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 676:
#line 2355 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 677:
#line 2356 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 678:
#line 2357 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 679:
#line 2358 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 680:
#line 2359 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 681:
#line 2360 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 682:
#line 2361 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 691:
#line 2378 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 692:
#line 2379 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 813:
#line 2397 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 814:
#line 2404 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 815:
#line 2409 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 816:
#line 2415 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 817:
#line 2421 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 818:
#line 2427 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 819:
#line 2438 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 820:
#line 2443 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 821:
#line 2449 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 824:
#line 2460 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 825:
#line 2461 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 826:
#line 2462 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 827:
#line 2463 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 828:
#line 2464 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 829:
#line 2465 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 830:
#line 2466 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 831:
#line 2473 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 832:
#line 2478 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 833:
#line 2485 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 834:
#line 2486 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 835:
#line 2489 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 836:
#line 2490 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 837:
#line 2491 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 838:
#line 2494 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 839:
#line 2499 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 840:
#line 2505 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 841:
#line 2514 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 842:
#line 2522 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 843:
#line 2532 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 844:
#line 2537 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 847:
#line 2550 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 848:
#line 2551 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 849:
#line 2552 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 850:
#line 2553 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 851:
#line 2554 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 852:
#line 2555 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 853:
#line 2556 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 854:
#line 2557 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 855:
#line 2560 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 856:
#line 2565 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 857:
#line 2571 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 858:
#line 2581 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 859:
#line 2588 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 860:
#line 2595 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 861:
#line 2603 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 863:
#line 2613 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 865:
#line 2617 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 866:
#line 2618 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10074 "parser/evoparser.tab.c"
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


#line 2621 "parser/evoparser.y"

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
