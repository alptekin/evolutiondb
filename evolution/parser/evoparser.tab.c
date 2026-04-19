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
     DATABASE = 329,
     DECLARE = 330,
     DEFERRABLE = 331,
     DEFERRED = 332,
     DELIMITER = 333,
     DISABLE = 334,
     DO = 335,
     DOMAIN = 336,
     DELAYED = 337,
     DAY_HOUR = 338,
     DAY_MICROSECOND = 339,
     DISTINCT = 340,
     DELETE = 341,
     DROP = 342,
     DAY_MINUTE = 343,
     DISTINCTROW = 344,
     DAY_SECOND = 345,
     DESC = 346,
     DEFAULT = 347,
     DOUBLE = 348,
     DATETIME = 349,
     DECIMAL = 350,
     DATE = 351,
     EACH = 352,
     ELSEIF = 353,
     ENABLE = 354,
     ESCAPED = 355,
     EXCEPT = 356,
     ENUM = 357,
     END = 358,
     ELSE = 359,
     EXECUTE = 360,
     EXIT = 361,
     EXPLAIN = 362,
     FETCH = 363,
     FIRST = 364,
     FOREACH = 365,
     FLOAT = 366,
     FORCE = 367,
     FOREIGN = 368,
     FORMAT = 369,
     FROM = 370,
     FULL = 371,
     FULLTEXT = 372,
     FUNCTION = 373,
     FOR = 374,
     GROUP = 375,
     HANDLER = 376,
     HEADER = 377,
     HOUR_MINUTE = 378,
     HOUR_MICROSECOND = 379,
     HIGH_PRIORITY = 380,
     HOUR_SECOND = 381,
     HAVING = 382,
     IMMEDIATE = 383,
     INOUT = 384,
     INITIALLY = 385,
     INTEGER = 386,
     INNER = 387,
     IGNORE = 388,
     INDEX = 389,
     IF = 390,
     INSERT = 391,
     INTERSECT = 392,
     INTO = 393,
     INT = 394,
     INTERVAL = 395,
     ITERATE = 396,
     JOIN = 397,
     KEY = 398,
     LEAVE = 399,
     LOOP = 400,
     LESS = 401,
     LONGTEXT = 402,
     LOW_PRIORITY = 403,
     LEFT = 404,
     LEADING = 405,
     LIMIT = 406,
     LOCKED = 407,
     OFFSET = 408,
     LONGBLOB = 409,
     MATCH = 410,
     MAXVALUE = 411,
     MEDIUMTEXT = 412,
     MINUS = 413,
     MODIFY = 414,
     MEDIUMBLOB = 415,
     MEDIUMINT = 416,
     NATURAL = 417,
     NODE = 418,
     NO_ACTION = 419,
     NULLX = 420,
     OPEN = 421,
     OUT = 422,
     OUTER = 423,
     ON = 424,
     ORDER = 425,
     ONDUPLICATE = 426,
     PARTIAL = 427,
     PRIMARY = 428,
     PROCEDURE = 429,
     QUICK = 430,
     RANGE = 431,
     REAL = 432,
     RECLAIM = 433,
     REFERENCES = 434,
     RENAME = 435,
     RESIGNAL = 436,
     RESTRICT = 437,
     RETURN = 438,
     RETURNING = 439,
     RETURNS = 440,
     ROLLUP = 441,
     RIGHT = 442,
     REPLACE = 443,
     ROW = 444,
     SIGNAL = 445,
     TRIGGER = 446,
     UNTIL = 447,
     SQL_SMALL_RESULT = 448,
     SCHEMA = 449,
     SHARD = 450,
     SHARDS = 451,
     SHARE = 452,
     SKIP = 453,
     SOME = 454,
     SQL_CALC_FOUND_ROWS = 455,
     SQL_BIG_RESULT = 456,
     SIMPLE = 457,
     STDIN = 458,
     STDOUT = 459,
     STRAIGHT_JOIN = 460,
     SMALLINT = 461,
     SET = 462,
     SELECT = 463,
     QUOTE = 464,
     TINYTEXT = 465,
     TINYINT = 466,
     TO = 467,
     TEMPORARY = 468,
     GLOBAL = 469,
     PRESERVE = 470,
     TEXT = 471,
     THAN = 472,
     TIMESTAMP = 473,
     TABLE = 474,
     THEN = 475,
     TRAILING = 476,
     TRUNCATE = 477,
     TINYBLOB = 478,
     TIME = 479,
     UPDATE = 480,
     UNSIGNED = 481,
     UNION = 482,
     UNIQUE = 483,
     UUID = 484,
     JSON = 485,
     VIEW = 486,
     USING = 487,
     USE = 488,
     HASH = 489,
     VALIDATE = 490,
     VARCHAR = 491,
     VALUES = 492,
     VARBINARY = 493,
     WHERE = 494,
     WHEN = 495,
     WHILE = 496,
     WITH = 497,
     YEAR = 498,
     YEAR_MONTH = 499,
     ZEROFILL = 500,
     EXISTS = 501,
     FSUBSTRING = 502,
     FTRIM = 503,
     FDATE_ADD = 504,
     FDATE_SUB = 505,
     FDATEDIFF = 506,
     FYEAR = 507,
     FMONTH = 508,
     FDAY = 509,
     FHOUR = 510,
     FMINUTE = 511,
     FSECOND = 512,
     FNOW = 513,
     FLEFT = 514,
     FRIGHT = 515,
     FLPAD = 516,
     FRPAD = 517,
     FREVERSE = 518,
     FREPEAT = 519,
     FINSTR = 520,
     FLOCATE = 521,
     FABS = 522,
     FCEIL = 523,
     FFLOOR = 524,
     FROUND = 525,
     FPOWER = 526,
     FSQRT = 527,
     FMOD = 528,
     FRAND = 529,
     FLOG = 530,
     FLOG10 = 531,
     FSIGN = 532,
     FPI = 533,
     FCAST = 534,
     FCONVERT = 535,
     FNULLIF = 536,
     FIFNULL = 537,
     FIF = 538,
     UNKNOWN = 539,
     FGROUP_CONCAT = 540,
     SEPARATOR = 541,
     FCOUNT = 542,
     FSUM = 543,
     FAVG = 544,
     FMIN = 545,
     FMAX = 546,
     FUPPER = 547,
     FLOWER = 548,
     FLENGTH = 549,
     FCONCAT = 550,
     FREPLACE = 551,
     FCOALESCE = 552,
     FGEN_RANDOM_UUID = 553,
     FGEN_RANDOM_UUID_V7 = 554,
     FSNOWFLAKE_ID = 555,
     FLAST_INSERT_ID = 556,
     FSCOPE_IDENTITY = 557,
     FAT_IDENTITY = 558,
     FAT_LAST_INSERT_ID = 559,
     FEVO_SLEEP = 560,
     FEVO_JITTER = 561,
     FROW_NUMBER = 562,
     FRANK = 563,
     FDENSE_RANK = 564,
     FLEAD = 565,
     FLAG = 566,
     FNTILE = 567,
     FPERCENT_RANK = 568,
     FCUME_DIST = 569,
     OVER = 570,
     PARTITION = 571,
     FJSON_EXTRACT = 572,
     FJSON_UNQUOTE = 573,
     FJSON_TYPE = 574,
     FJSON_LENGTH = 575,
     FJSON_DEPTH = 576,
     FJSON_VALID = 577,
     FJSON_KEYS = 578,
     FJSON_PRETTY = 579,
     FJSON_QUOTE = 580,
     FJSON_SET = 581,
     FJSON_INSERT = 582,
     FJSON_REPLACE = 583,
     FJSON_REMOVE = 584,
     FJSON_CONTAINS = 585,
     FJSON_CONTAINS_PATH = 586,
     FJSON_SEARCH = 587,
     FJSON_OBJECT = 588,
     FJSON_ARRAY = 589,
     FJSON_ARRAYAGG = 590,
     SEQUENCE = 591,
     FNEXTVAL = 592,
     FCURRVAL = 593,
     FSETVAL = 594,
     FLASTVAL = 595,
     START = 596,
     INCREMENT = 597,
     MINVALUE = 598,
     CYCLE = 599
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
#define DATABASE 329
#define DECLARE 330
#define DEFERRABLE 331
#define DEFERRED 332
#define DELIMITER 333
#define DISABLE 334
#define DO 335
#define DOMAIN 336
#define DELAYED 337
#define DAY_HOUR 338
#define DAY_MICROSECOND 339
#define DISTINCT 340
#define DELETE 341
#define DROP 342
#define DAY_MINUTE 343
#define DISTINCTROW 344
#define DAY_SECOND 345
#define DESC 346
#define DEFAULT 347
#define DOUBLE 348
#define DATETIME 349
#define DECIMAL 350
#define DATE 351
#define EACH 352
#define ELSEIF 353
#define ENABLE 354
#define ESCAPED 355
#define EXCEPT 356
#define ENUM 357
#define END 358
#define ELSE 359
#define EXECUTE 360
#define EXIT 361
#define EXPLAIN 362
#define FETCH 363
#define FIRST 364
#define FOREACH 365
#define FLOAT 366
#define FORCE 367
#define FOREIGN 368
#define FORMAT 369
#define FROM 370
#define FULL 371
#define FULLTEXT 372
#define FUNCTION 373
#define FOR 374
#define GROUP 375
#define HANDLER 376
#define HEADER 377
#define HOUR_MINUTE 378
#define HOUR_MICROSECOND 379
#define HIGH_PRIORITY 380
#define HOUR_SECOND 381
#define HAVING 382
#define IMMEDIATE 383
#define INOUT 384
#define INITIALLY 385
#define INTEGER 386
#define INNER 387
#define IGNORE 388
#define INDEX 389
#define IF 390
#define INSERT 391
#define INTERSECT 392
#define INTO 393
#define INT 394
#define INTERVAL 395
#define ITERATE 396
#define JOIN 397
#define KEY 398
#define LEAVE 399
#define LOOP 400
#define LESS 401
#define LONGTEXT 402
#define LOW_PRIORITY 403
#define LEFT 404
#define LEADING 405
#define LIMIT 406
#define LOCKED 407
#define OFFSET 408
#define LONGBLOB 409
#define MATCH 410
#define MAXVALUE 411
#define MEDIUMTEXT 412
#define MINUS 413
#define MODIFY 414
#define MEDIUMBLOB 415
#define MEDIUMINT 416
#define NATURAL 417
#define NODE 418
#define NO_ACTION 419
#define NULLX 420
#define OPEN 421
#define OUT 422
#define OUTER 423
#define ON 424
#define ORDER 425
#define ONDUPLICATE 426
#define PARTIAL 427
#define PRIMARY 428
#define PROCEDURE 429
#define QUICK 430
#define RANGE 431
#define REAL 432
#define RECLAIM 433
#define REFERENCES 434
#define RENAME 435
#define RESIGNAL 436
#define RESTRICT 437
#define RETURN 438
#define RETURNING 439
#define RETURNS 440
#define ROLLUP 441
#define RIGHT 442
#define REPLACE 443
#define ROW 444
#define SIGNAL 445
#define TRIGGER 446
#define UNTIL 447
#define SQL_SMALL_RESULT 448
#define SCHEMA 449
#define SHARD 450
#define SHARDS 451
#define SHARE 452
#define SKIP 453
#define SOME 454
#define SQL_CALC_FOUND_ROWS 455
#define SQL_BIG_RESULT 456
#define SIMPLE 457
#define STDIN 458
#define STDOUT 459
#define STRAIGHT_JOIN 460
#define SMALLINT 461
#define SET 462
#define SELECT 463
#define QUOTE 464
#define TINYTEXT 465
#define TINYINT 466
#define TO 467
#define TEMPORARY 468
#define GLOBAL 469
#define PRESERVE 470
#define TEXT 471
#define THAN 472
#define TIMESTAMP 473
#define TABLE 474
#define THEN 475
#define TRAILING 476
#define TRUNCATE 477
#define TINYBLOB 478
#define TIME 479
#define UPDATE 480
#define UNSIGNED 481
#define UNION 482
#define UNIQUE 483
#define UUID 484
#define JSON 485
#define VIEW 486
#define USING 487
#define USE 488
#define HASH 489
#define VALIDATE 490
#define VARCHAR 491
#define VALUES 492
#define VARBINARY 493
#define WHERE 494
#define WHEN 495
#define WHILE 496
#define WITH 497
#define YEAR 498
#define YEAR_MONTH 499
#define ZEROFILL 500
#define EXISTS 501
#define FSUBSTRING 502
#define FTRIM 503
#define FDATE_ADD 504
#define FDATE_SUB 505
#define FDATEDIFF 506
#define FYEAR 507
#define FMONTH 508
#define FDAY 509
#define FHOUR 510
#define FMINUTE 511
#define FSECOND 512
#define FNOW 513
#define FLEFT 514
#define FRIGHT 515
#define FLPAD 516
#define FRPAD 517
#define FREVERSE 518
#define FREPEAT 519
#define FINSTR 520
#define FLOCATE 521
#define FABS 522
#define FCEIL 523
#define FFLOOR 524
#define FROUND 525
#define FPOWER 526
#define FSQRT 527
#define FMOD 528
#define FRAND 529
#define FLOG 530
#define FLOG10 531
#define FSIGN 532
#define FPI 533
#define FCAST 534
#define FCONVERT 535
#define FNULLIF 536
#define FIFNULL 537
#define FIF 538
#define UNKNOWN 539
#define FGROUP_CONCAT 540
#define SEPARATOR 541
#define FCOUNT 542
#define FSUM 543
#define FAVG 544
#define FMIN 545
#define FMAX 546
#define FUPPER 547
#define FLOWER 548
#define FLENGTH 549
#define FCONCAT 550
#define FREPLACE 551
#define FCOALESCE 552
#define FGEN_RANDOM_UUID 553
#define FGEN_RANDOM_UUID_V7 554
#define FSNOWFLAKE_ID 555
#define FLAST_INSERT_ID 556
#define FSCOPE_IDENTITY 557
#define FAT_IDENTITY 558
#define FAT_LAST_INSERT_ID 559
#define FEVO_SLEEP 560
#define FEVO_JITTER 561
#define FROW_NUMBER 562
#define FRANK 563
#define FDENSE_RANK 564
#define FLEAD 565
#define FLAG 566
#define FNTILE 567
#define FPERCENT_RANK 568
#define FCUME_DIST 569
#define OVER 570
#define PARTITION 571
#define FJSON_EXTRACT 572
#define FJSON_UNQUOTE 573
#define FJSON_TYPE 574
#define FJSON_LENGTH 575
#define FJSON_DEPTH 576
#define FJSON_VALID 577
#define FJSON_KEYS 578
#define FJSON_PRETTY 579
#define FJSON_QUOTE 580
#define FJSON_SET 581
#define FJSON_INSERT 582
#define FJSON_REPLACE 583
#define FJSON_REMOVE 584
#define FJSON_CONTAINS 585
#define FJSON_CONTAINS_PATH 586
#define FJSON_SEARCH 587
#define FJSON_OBJECT 588
#define FJSON_ARRAY 589
#define FJSON_ARRAYAGG 590
#define SEQUENCE 591
#define FNEXTVAL 592
#define FCURRVAL 593
#define FSETVAL 594
#define FLASTVAL 595
#define START 596
#define INCREMENT 597
#define MINVALUE 598
#define CYCLE 599




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
#line 839 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 852 "parser/evoparser.tab.c"

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
#define YYLAST   11094

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  360
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  864
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2117

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   599

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     356,   357,    26,    24,   358,    25,   355,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   354,
       2,   359,     2,     2,     2,     2,     2,     2,     2,     2,
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
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    20,    22,    24,
      26,    28,    30,    32,    36,    40,    44,    48,    52,    56,
      59,    63,    67,    71,    75,    79,    83,    87,    91,    95,
      99,   102,   105,   109,   110,   117,   118,   126,   127,   135,
     136,   144,   148,   153,   157,   162,   166,   172,   179,   181,
     185,   186,   188,   189,   196,   197,   205,   206,   213,   214,
     222,   223,   229,   234,   239,   244,   249,   254,   259,   264,
     269,   276,   277,   287,   288,   298,   299,   309,   310,   321,
     322,   333,   334,   345,   346,   357,   358,   369,   370,   381,
     382,   393,   394,   407,   408,   423,   424,   439,   440,   451,
     452,   465,   466,   481,   482,   497,   498,   509,   510,   520,
     521,   531,   540,   547,   554,   563,   568,   576,   583,   588,
     593,   598,   605,   614,   621,   628,   635,   644,   653,   658,
     665,   672,   679,   684,   689,   694,   701,   706,   713,   718,
     725,   729,   734,   739,   744,   748,   752,   759,   764,   769,
     774,   779,   784,   789,   796,   801,   806,   811,   816,   821,
     826,   831,   836,   845,   854,   863,   870,   877,   886,   895,
     902,   913,   918,   925,   934,   939,   944,   949,   956,   965,
     969,   976,   983,   990,   997,  1006,  1010,  1019,  1030,  1034,
    1038,  1042,  1046,  1050,  1052,  1054,  1059,  1066,  1068,  1070,
    1072,  1079,  1086,  1090,  1094,  1098,  1102,  1106,  1110,  1114,
    1118,  1122,  1127,  1134,  1138,  1144,  1149,  1155,  1159,  1164,
    1168,  1173,  1175,  1177,  1179,  1181,  1185,  1198,  1211,  1212,
    1215,  1216,  1221,  1224,  1229,  1230,  1232,  1234,  1235,  1238,
    1239,  1242,  1243,  1247,  1249,  1253,  1254,  1258,  1261,  1266,
    1267,  1271,  1273,  1277,  1280,  1285,  1288,  1289,  1292,  1297,
    1302,  1303,  1306,  1309,  1314,  1319,  1320,  1323,  1325,  1329,
    1330,  1333,  1336,  1339,  1342,  1345,  1348,  1351,  1354,  1356,
    1360,  1362,  1365,  1368,  1370,  1371,  1373,  1377,  1379,  1381,
    1385,  1391,  1395,  1399,  1401,  1402,  1408,  1412,  1418,  1425,
    1431,  1432,  1434,  1436,  1437,  1439,  1441,  1443,  1446,  1449,
    1450,  1451,  1453,  1456,  1461,  1468,  1475,  1482,  1483,  1486,
    1487,  1489,  1493,  1497,  1499,  1508,  1511,  1514,  1517,  1518,
    1525,  1528,  1533,  1534,  1537,  1545,  1547,  1551,  1557,  1559,
    1568,  1579,  1589,  1601,  1612,  1625,  1637,  1651,  1661,  1673,
    1684,  1697,  1709,  1722,  1724,  1728,  1730,  1735,  1740,  1745,
    1752,  1754,  1758,  1761,  1765,  1771,  1773,  1777,  1778,  1781,
    1784,  1788,  1792,  1794,  1798,  1800,  1804,  1810,  1812,  1823,
    1834,  1852,  1865,  1885,  1897,  1904,  1913,  1920,  1927,  1934,
    1944,  1951,  1957,  1966,  1974,  1984,  1993,  2004,  2014,  2015,
    2017,  2020,  2022,  2033,  2040,  2041,  2042,  2048,  2049,  2054,
    2055,  2059,  2064,  2067,  2068,  2074,  2078,  2084,  2085,  2088,
    2091,  2094,  2097,  2099,  2100,  2101,  2105,  2107,  2111,  2115,
    2116,  2123,  2125,  2127,  2131,  2135,  2143,  2147,  2151,  2157,
    2163,  2165,  2174,  2182,  2190,  2192,  2193,  2201,  2202,  2206,
    2208,  2212,  2214,  2216,  2218,  2220,  2222,  2223,  2225,  2230,
    2234,  2236,  2240,  2243,  2246,  2249,  2251,  2254,  2257,  2260,
    2262,  2264,  2274,  2275,  2278,  2281,  2285,  2291,  2297,  2305,
    2311,  2313,  2318,  2323,  2327,  2333,  2337,  2343,  2344,  2347,
    2349,  2355,  2363,  2371,  2381,  2393,  2395,  2398,  2402,  2404,
    2414,  2426,  2427,  2432,  2436,  2442,  2448,  2458,  2469,  2471,
    2475,  2485,  2495,  2505,  2512,  2524,  2533,  2534,  2536,  2539,
    2541,  2545,  2551,  2559,  2564,  2569,  2575,  2581,  2586,  2593,
    2605,  2619,  2633,  2649,  2654,  2661,  2663,  2667,  2669,  2673,
    2675,  2679,  2680,  2685,  2691,  2696,  2702,  2707,  2713,  2718,
    2724,  2729,  2734,  2738,  2742,  2746,  2749,  2753,  2758,  2763,
    2765,  2769,  2770,  2775,  2776,  2780,  2783,  2787,  2791,  2795,
    2799,  2805,  2811,  2817,  2821,  2827,  2830,  2838,  2844,  2852,
    2858,  2861,  2865,  2868,  2872,  2875,  2879,  2885,  2890,  2896,
    2904,  2913,  2922,  2930,  2937,  2944,  2950,  2951,  2955,  2961,
    2962,  2964,  2965,  2968,  2971,  2972,  2977,  2981,  2984,  2988,
    2992,  2996,  3000,  3004,  3008,  3012,  3016,  3020,  3024,  3026,
    3028,  3030,  3032,  3034,  3038,  3044,  3047,  3052,  3054,  3056,
    3058,  3060,  3064,  3068,  3072,  3076,  3082,  3088,  3090,  3092,
    3094,  3096,  3100,  3104,  3105,  3107,  3109,  3111,  3115,  3119,
    3122,  3124,  3128,  3132,  3136,  3138,  3149,  3159,  3172,  3184,
    3197,  3209,  3224,  3238,  3239,  3241,  3243,  3247,  3250,  3254,
    3258,  3262,  3264,  3266,  3268,  3270,  3272,  3274,  3276,  3278,
    3280,  3282,  3283,  3286,  3291,  3297,  3303,  3309,  3315,  3321,
    3323,  3325,  3327,  3329,  3331,  3333,  3335,  3337,  3339,  3341,
    3343,  3345,  3347,  3349,  3351,  3353,  3355,  3357,  3359,  3361,
    3363,  3365,  3367,  3369,  3371,  3373,  3375,  3377,  3379,  3381,
    3383,  3385,  3387,  3389,  3391,  3393,  3395,  3397,  3399,  3401,
    3403,  3405,  3407,  3409,  3411,  3413,  3415,  3417,  3419,  3421,
    3423,  3425,  3427,  3429,  3431,  3433,  3435,  3437,  3439,  3441,
    3443,  3445,  3447,  3449,  3451,  3453,  3455,  3457,  3459,  3461,
    3463,  3465,  3467,  3469,  3471,  3473,  3475,  3477,  3479,  3481,
    3483,  3485,  3487,  3489,  3491,  3493,  3495,  3497,  3499,  3501,
    3503,  3505,  3507,  3509,  3511,  3513,  3515,  3517,  3519,  3521,
    3523,  3525,  3527,  3529,  3531,  3533,  3535,  3537,  3539,  3541,
    3543,  3545,  3547,  3549,  3551,  3553,  3555,  3557,  3559,  3561,
    3563,  3565,  3567,  3569,  3573,  3579,  3583,  3589,  3591,  3596,
    3602,  3604,  3608,  3610,  3612,  3614,  3616,  3618,  3620,  3622,
    3624,  3638,  3640,  3642,  3644,  3646,  3648,  3650,  3654,  3660,
    3665,  3670,  3672,  3678,  3679,  3682,  3686,  3689,  3693,  3696,
    3699,  3702,  3704,  3707,  3709,  3713,  3719,  3724,  3729,  3736,
    3743,  3744,  3747,  3750,  3752
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     361,     0,    -1,   397,   354,    -1,   397,   354,   361,    -1,
       3,    -1,     3,   355,     3,    -1,    81,   355,     3,    -1,
       8,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
     174,    -1,   362,    24,   362,    -1,   362,    25,   362,    -1,
     362,    26,   362,    -1,   362,    27,   362,    -1,   362,    28,
     362,    -1,   362,    29,   362,    -1,    25,   362,    -1,   356,
     362,   357,    -1,   362,    12,   362,    -1,   362,    10,   362,
      -1,   362,    11,   362,    -1,   362,    21,   362,    -1,   362,
      22,   362,    -1,   362,    30,   362,    -1,   362,    23,   362,
      -1,   362,    32,   362,    -1,   362,    31,   362,    -1,    18,
     362,    -1,    17,   362,    -1,   362,    20,   362,    -1,    -1,
     362,    20,   356,   363,   398,   357,    -1,    -1,   362,    20,
      39,   356,   364,   398,   357,    -1,    -1,   362,    20,   208,
     356,   365,   398,   357,    -1,    -1,   362,    20,    37,   356,
     366,   398,   357,    -1,   362,    15,   174,    -1,   362,    15,
      18,   174,    -1,   362,    15,     6,    -1,   362,    15,    18,
       6,    -1,     8,     9,   362,    -1,   362,    19,   362,    42,
     362,    -1,   362,    18,    19,   362,    42,   362,    -1,   362,
      -1,   362,   358,   367,    -1,    -1,   367,    -1,    -1,   362,
      16,   356,   369,   367,   357,    -1,    -1,   362,    18,    16,
     356,   370,   367,   357,    -1,    -1,   362,    16,   356,   371,
     398,   357,    -1,    -1,   362,    18,    16,   356,   372,   398,
     357,    -1,    -1,   255,   356,   373,   398,   357,    -1,     3,
     356,   368,   357,    -1,   296,   356,    26,   357,    -1,   296,
     356,   362,   357,    -1,   297,   356,   362,   357,    -1,   298,
     356,   362,   357,    -1,   299,   356,   362,   357,    -1,   300,
     356,   362,   357,    -1,   294,   356,   362,   357,    -1,   294,
     356,   362,   295,     4,   357,    -1,    -1,   316,   356,   357,
     324,   356,   374,   405,   407,   357,    -1,    -1,   317,   356,
     357,   324,   356,   375,   405,   407,   357,    -1,    -1,   318,
     356,   357,   324,   356,   376,   405,   407,   357,    -1,    -1,
     297,   356,   362,   357,   324,   356,   377,   405,   407,   357,
      -1,    -1,   296,   356,    26,   357,   324,   356,   378,   405,
     407,   357,    -1,    -1,   296,   356,   362,   357,   324,   356,
     379,   405,   407,   357,    -1,    -1,   298,   356,   362,   357,
     324,   356,   380,   405,   407,   357,    -1,    -1,   299,   356,
     362,   357,   324,   356,   381,   405,   407,   357,    -1,    -1,
     300,   356,   362,   357,   324,   356,   382,   405,   407,   357,
      -1,    -1,   319,   356,   362,   357,   324,   356,   383,   405,
     407,   357,    -1,    -1,   319,   356,   362,   358,     5,   357,
     324,   356,   384,   405,   407,   357,    -1,    -1,   319,   356,
     362,   358,     5,   358,     4,   357,   324,   356,   385,   405,
     407,   357,    -1,    -1,   319,   356,   362,   358,     5,   358,
       5,   357,   324,   356,   386,   405,   407,   357,    -1,    -1,
     320,   356,   362,   357,   324,   356,   387,   405,   407,   357,
      -1,    -1,   320,   356,   362,   358,     5,   357,   324,   356,
     388,   405,   407,   357,    -1,    -1,   320,   356,   362,   358,
       5,   358,     4,   357,   324,   356,   389,   405,   407,   357,
      -1,    -1,   320,   356,   362,   358,     5,   358,     5,   357,
     324,   356,   390,   405,   407,   357,    -1,    -1,   321,   356,
       5,   357,   324,   356,   391,   405,   407,   357,    -1,    -1,
     322,   356,   357,   324,   356,   392,   405,   407,   357,    -1,
      -1,   323,   356,   357,   324,   356,   393,   405,   407,   357,
      -1,   256,   356,   362,   358,   362,   358,   362,   357,    -1,
     256,   356,   362,   358,   362,   357,    -1,   256,   356,   362,
     124,   362,   357,    -1,   256,   356,   362,   124,   362,   128,
     362,   357,    -1,   257,   356,   362,   357,    -1,   257,   356,
     394,   362,   124,   362,   357,    -1,   257,   356,   394,   124,
     362,   357,    -1,   301,   356,   362,   357,    -1,   302,   356,
     362,   357,    -1,   303,   356,   362,   357,    -1,   304,   356,
     362,   358,   362,   357,    -1,   305,   356,   362,   358,   362,
     358,   362,   357,    -1,   306,   356,   362,   358,   362,   357,
      -1,   268,   356,   362,   358,   362,   357,    -1,   269,   356,
     362,   358,   362,   357,    -1,   270,   356,   362,   358,   362,
     358,   362,   357,    -1,   271,   356,   362,   358,   362,   358,
     362,   357,    -1,   272,   356,   362,   357,    -1,   273,   356,
     362,   358,   362,   357,    -1,   274,   356,   362,   358,   362,
     357,    -1,   275,   356,   362,   358,   362,   357,    -1,   276,
     356,   362,   357,    -1,   277,   356,   362,   357,    -1,   278,
     356,   362,   357,    -1,   279,   356,   362,   358,   362,   357,
      -1,   279,   356,   362,   357,    -1,   280,   356,   362,   358,
     362,   357,    -1,   281,   356,   362,   357,    -1,   282,   356,
     362,   358,   362,   357,    -1,   283,   356,   357,    -1,   284,
     356,   362,   357,    -1,   285,   356,   362,   357,    -1,   286,
     356,   362,   357,    -1,   287,   356,   357,    -1,   267,   356,
     357,    -1,   260,   356,   362,   358,   362,   357,    -1,   261,
     356,   362,   357,    -1,   262,   356,   362,   357,    -1,   263,
     356,   362,   357,    -1,   264,   356,   362,   357,    -1,   265,
     356,   362,   357,    -1,   266,   356,   362,   357,    -1,   326,
     356,   362,   358,   362,   357,    -1,   327,   356,   362,   357,
      -1,   328,   356,   362,   357,    -1,   329,   356,   362,   357,
      -1,   330,   356,   362,   357,    -1,   331,   356,   362,   357,
      -1,   332,   356,   362,   357,    -1,   333,   356,   362,   357,
      -1,   334,   356,   362,   357,    -1,   335,   356,   362,   358,
     362,   358,   362,   357,    -1,   336,   356,   362,   358,   362,
     358,   362,   357,    -1,   337,   356,   362,   358,   362,   358,
     362,   357,    -1,   338,   356,   362,   358,   362,   357,    -1,
     339,   356,   362,   358,   362,   357,    -1,   340,   356,   362,
     358,   362,   358,   362,   357,    -1,   341,   356,   362,   358,
     362,   358,   362,   357,    -1,   342,   356,   362,   358,   362,
     357,    -1,   342,   356,   362,   358,   362,   358,   362,   358,
     362,   357,    -1,   343,   356,   362,   357,    -1,   343,   356,
     362,   358,   362,   357,    -1,   343,   356,   362,   358,   362,
     358,   362,   357,    -1,   344,   356,   362,   357,    -1,   346,
     356,   362,   357,    -1,   347,   356,   362,   357,    -1,   348,
     356,   362,   358,   362,   357,    -1,   348,   356,   362,   358,
     362,   358,   362,   357,    -1,   349,   356,   357,    -1,   288,
     356,   362,    43,   502,   357,    -1,   289,   356,   362,   358,
     502,   357,    -1,   290,   356,   362,   358,   362,   357,    -1,
     291,   356,   362,   358,   362,   357,    -1,   292,   356,   362,
     358,   362,   358,   362,   357,    -1,   362,    15,   293,    -1,
     304,   356,   362,   358,   362,   358,   362,   357,    -1,   304,
     356,   362,   358,   362,   358,   362,   358,   362,   357,    -1,
     307,   356,   357,    -1,   308,   356,   357,    -1,   309,   356,
     357,    -1,   310,   356,   357,    -1,   311,   356,   357,    -1,
     312,    -1,   313,    -1,   314,   356,   362,   357,    -1,   315,
     356,   362,   358,   362,   357,    -1,   159,    -1,   230,    -1,
      57,    -1,   258,   356,   362,   358,   395,   357,    -1,   259,
     356,   362,   358,   395,   357,    -1,   149,   362,   252,    -1,
     149,   362,    92,    -1,   149,   362,    93,    -1,   149,   362,
      97,    -1,   149,   362,    99,    -1,   149,   362,   253,    -1,
     149,   362,   133,    -1,   149,   362,   132,    -1,   149,   362,
     135,    -1,    69,   362,   396,   112,    -1,    69,   362,   396,
     113,   362,   112,    -1,    69,   396,   112,    -1,    69,   396,
     113,   362,   112,    -1,   249,   362,   229,   362,    -1,   396,
     249,   362,   229,   362,    -1,   362,    14,   362,    -1,   362,
      18,    14,   362,    -1,   362,    13,   362,    -1,   362,    18,
      13,   362,    -1,    64,    -1,    72,    -1,    73,    -1,   398,
      -1,   217,   416,   417,    -1,   217,   416,   417,   124,   420,
     399,   400,   404,   409,   412,   413,   414,    -1,   217,   416,
     417,   147,     3,   124,   420,   399,   400,   404,   409,   412,
      -1,    -1,   248,   362,    -1,    -1,   129,    55,   401,   403,
      -1,   362,   402,    -1,   401,   358,   362,   402,    -1,    -1,
      41,    -1,   100,    -1,    -1,   251,   195,    -1,    -1,   136,
     362,    -1,    -1,   325,    55,   406,    -1,     3,    -1,   406,
     358,     3,    -1,    -1,   179,    55,   408,    -1,     3,   402,
      -1,   408,   358,     3,   402,    -1,    -1,   179,    55,   410,
      -1,   411,    -1,   410,   358,   411,    -1,     3,   402,    -1,
       3,   355,     3,   402,    -1,     5,   402,    -1,    -1,   160,
     362,    -1,   160,   362,   358,   362,    -1,   160,   362,   162,
     362,    -1,    -1,   128,   234,    -1,   128,   206,    -1,   128,
     234,   207,   161,    -1,   128,   206,   207,   161,    -1,    -1,
     147,   415,    -1,     3,    -1,   415,   358,     3,    -1,    -1,
     416,    37,    -1,   416,    94,    -1,   416,    98,    -1,   416,
     134,    -1,   416,   214,    -1,   416,   202,    -1,   416,   210,
      -1,   416,   209,    -1,   418,    -1,   417,   358,   418,    -1,
      26,    -1,   362,   419,    -1,    43,     3,    -1,     3,    -1,
      -1,   421,    -1,   420,   358,   421,    -1,   422,    -1,   424,
      -1,     3,   419,   431,    -1,     3,   355,     3,   419,   431,
      -1,   434,   423,     3,    -1,   356,   420,   357,    -1,    43,
      -1,    -1,   421,   425,   151,   422,   429,    -1,   421,   214,
     422,    -1,   421,   214,   422,   178,   362,    -1,   421,   427,
     426,   151,   422,   430,    -1,   421,   171,   428,   151,   422,
      -1,    -1,   141,    -1,    68,    -1,    -1,   177,    -1,   158,
      -1,   196,    -1,   158,   426,    -1,   196,   426,    -1,    -1,
      -1,   430,    -1,   178,   362,    -1,   241,   356,   415,   357,
      -1,   242,   152,   432,   356,   433,   357,    -1,   142,   152,
     432,   356,   433,   357,    -1,   121,   152,   432,   356,   433,
     357,    -1,    -1,   128,   151,    -1,    -1,     3,    -1,   433,
     358,     3,    -1,   356,   398,   357,    -1,   435,    -1,    95,
     436,   124,     3,   399,   409,   412,   528,    -1,   436,   157,
      -1,   436,   184,    -1,   436,   142,    -1,    -1,    95,   436,
     437,   124,   420,   399,    -1,     3,   438,    -1,   437,   358,
       3,   438,    -1,    -1,   355,    26,    -1,    95,   436,   124,
     437,   241,   420,   399,    -1,   439,    -1,    96,   228,     3,
      -1,    96,   228,   144,   255,     3,    -1,   440,    -1,    65,
     143,     3,   178,     3,   356,   441,   357,    -1,    65,   143,
     144,   255,     3,   178,     3,   356,   441,   357,    -1,    65,
     237,   143,     3,   178,     3,   356,   441,   357,    -1,    65,
     237,   143,   144,   255,     3,   178,     3,   356,   441,   357,
      -1,    65,   143,     3,   178,     3,   241,   243,   356,   441,
     357,    -1,    65,   143,   144,   255,     3,   178,     3,   241,
     243,   356,   441,   357,    -1,    65,   237,   143,     3,   178,
       3,   241,   243,   356,   441,   357,    -1,    65,   237,   143,
     144,   255,     3,   178,     3,   241,   243,   356,   441,   357,
      -1,    65,   143,    77,     3,   178,     3,   356,   441,   357,
      -1,    65,   143,    77,   144,   255,     3,   178,     3,   356,
     441,   357,    -1,    65,   237,   143,    77,     3,   178,     3,
     356,   441,   357,    -1,    65,   237,   143,    77,   144,   255,
       3,   178,     3,   356,   441,   357,    -1,    65,   143,    77,
       3,   178,     3,   241,   243,   356,   441,   357,    -1,    65,
     237,   143,    77,     3,   178,     3,   241,   243,   356,   441,
     357,    -1,     3,    -1,   441,   358,     3,    -1,   442,    -1,
     301,   356,     3,   357,    -1,   302,   356,     3,   357,    -1,
     303,   356,     3,   357,    -1,   304,   356,     3,   358,     3,
     357,    -1,   443,    -1,    96,   143,     3,    -1,   444,   446,
      -1,   231,   228,     3,    -1,   231,   228,     3,   358,   445,
      -1,     3,    -1,   445,   358,     3,    -1,    -1,   446,    66,
      -1,   446,   191,    -1,   446,    47,    45,    -1,   446,    46,
      45,    -1,   447,    -1,   187,   228,     3,    -1,   448,    -1,
      38,   228,     3,    -1,    38,   228,     3,   355,     3,    -1,
     449,    -1,    34,   228,     3,    35,    63,     3,    70,   356,
     362,   357,    -1,    34,   228,     3,    35,    63,     3,   237,
     356,   495,   357,    -1,    34,   228,     3,    35,    63,     3,
     122,   152,   356,   492,   357,   188,     3,   356,   493,   357,
     494,    -1,    34,   228,     3,    35,    63,     3,    70,   356,
     362,   357,    18,   244,    -1,    34,   228,     3,    35,    63,
       3,   122,   152,   356,   492,   357,   188,     3,   356,   493,
     357,   494,    18,   244,    -1,    34,   228,     3,    35,    63,
       3,   182,   152,   356,   491,   357,    -1,    34,   228,     3,
      96,    63,     3,    -1,    34,   228,     3,   189,    63,     3,
     221,     3,    -1,    34,   228,     3,   108,    63,     3,    -1,
      34,   228,     3,    88,    63,     3,    -1,    34,   228,     3,
     244,    63,     3,    -1,    34,   228,     3,    35,    76,     3,
     502,   497,   450,    -1,    34,   228,     3,    96,    76,     3,
      -1,    34,   228,     3,    96,     3,    -1,    34,   228,     3,
     189,    76,     3,   221,     3,    -1,    34,   228,     3,   189,
       3,   221,     3,    -1,    34,   228,     3,   168,    76,     3,
     502,   497,   450,    -1,    34,   228,     3,   168,     3,   502,
     497,   450,    -1,    34,   228,     3,    67,    76,     3,     3,
     502,   497,   450,    -1,    34,   228,     3,    67,     3,     3,
     502,   497,   450,    -1,    -1,   118,    -1,    36,     3,    -1,
     451,    -1,   145,   459,   460,     3,   461,   246,   463,   452,
     454,   528,    -1,   145,   459,   460,     3,   461,   398,    -1,
      -1,    -1,   180,   152,   234,   453,   458,    -1,    -1,   178,
      80,   455,   456,    -1,    -1,   356,     3,   357,    -1,   356,
       3,   358,     3,    -1,    89,    82,    -1,    -1,    89,   234,
     457,   216,   458,    -1,     3,    20,   362,    -1,   458,   358,
       3,    20,   362,    -1,    -1,   459,   157,    -1,   459,    91,
      -1,   459,   134,    -1,   459,   142,    -1,   147,    -1,    -1,
      -1,   356,   462,   357,    -1,     3,    -1,   462,   358,     3,
      -1,   356,   465,   357,    -1,    -1,   463,   358,   464,   356,
     465,   357,    -1,   362,    -1,   101,    -1,   465,   358,   362,
      -1,   465,   358,   101,    -1,   145,   459,   460,     3,   216,
     466,   452,    -1,     3,    20,   362,    -1,     3,    20,   101,
      -1,   466,   358,     3,    20,   362,    -1,   466,   358,     3,
      20,   101,    -1,   467,    -1,   197,   459,   460,     3,   461,
     246,   463,   452,    -1,   197,   459,   460,     3,   216,   466,
     452,    -1,   197,   459,   460,     3,   461,   398,   452,    -1,
     468,    -1,    -1,    78,     3,   469,   470,   472,   473,   474,
      -1,    -1,   356,   471,   357,    -1,     3,    -1,   471,   358,
       3,    -1,   124,    -1,   221,    -1,     4,    -1,   212,    -1,
     213,    -1,    -1,   475,    -1,   251,   356,   475,   357,    -1,
     356,   475,   357,    -1,   476,    -1,   475,   358,   476,    -1,
     123,    79,    -1,   123,   225,    -1,    87,     4,    -1,   131,
      -1,   131,     6,    -1,   174,     4,    -1,   218,     4,    -1,
      79,    -1,   477,    -1,   234,   478,   420,   216,   479,   399,
     409,   412,   528,    -1,    -1,   459,   157,    -1,   459,   142,
      -1,     3,    20,   362,    -1,     3,   355,     3,    20,   362,
      -1,   479,   358,     3,    20,   362,    -1,   479,   358,     3,
     355,     3,    20,   362,    -1,   189,   228,     3,   221,     3,
      -1,   480,    -1,    65,    83,   481,     3,    -1,    65,   203,
     481,     3,    -1,    96,    83,     3,    -1,    96,    83,   144,
     255,     3,    -1,    96,   203,     3,    -1,    96,   203,   144,
     255,     3,    -1,    -1,   144,   255,    -1,   482,    -1,    65,
      90,     3,    43,   502,    -1,    65,    90,     3,    43,   502,
     101,   362,    -1,    65,    90,     3,    43,   502,    18,   174,
      -1,    65,    90,     3,    43,   502,    70,   356,   362,   357,
      -1,    65,    90,     3,    43,   502,    18,   174,    70,   356,
     362,   357,    -1,   483,    -1,   242,     3,    -1,   242,    83,
       3,    -1,   484,    -1,    65,   488,   228,   481,     3,   356,
     489,   357,   485,    -1,    65,   488,   228,   481,     3,   355,
       3,   356,   489,   357,   485,    -1,    -1,   485,    40,    20,
       5,    -1,   485,    40,     5,    -1,   485,   178,     3,    95,
       3,    -1,   485,   178,     3,   224,     3,    -1,   485,   204,
      55,   243,   356,     3,   357,   205,     5,    -1,   485,   204,
      55,   185,   356,     3,   357,   356,   486,   357,    -1,   487,
      -1,   486,   358,   487,    -1,   204,     3,   246,   155,   226,
       4,   178,   172,     5,    -1,   204,     3,   246,   155,   226,
     165,   178,   172,     5,    -1,    65,   488,   228,   481,     3,
     356,   489,   357,   504,    -1,    65,   488,   228,   481,     3,
     504,    -1,    65,   488,   228,   481,     3,   355,     3,   356,
     489,   357,   504,    -1,    65,   488,   228,   481,     3,   355,
       3,   504,    -1,    -1,   222,    -1,   223,   222,    -1,   490,
      -1,   489,   358,   490,    -1,   182,   152,   356,   491,   357,
      -1,    63,     3,   182,   152,   356,   491,   357,    -1,   152,
     356,   415,   357,    -1,   143,   356,   415,   357,    -1,   126,
     143,   356,   415,   357,    -1,   126,   152,   356,   415,   357,
      -1,    70,   356,   362,   357,    -1,    63,     3,    70,   356,
     362,   357,    -1,   122,   152,   356,   492,   357,   188,     3,
     356,   493,   357,   494,    -1,   122,   152,   356,   492,   357,
     188,     3,   355,     3,   356,   493,   357,   494,    -1,    63,
       3,   122,   152,   356,   492,   357,   188,     3,   356,   493,
     357,   494,    -1,    63,     3,   122,   152,   356,   492,   357,
     188,     3,   355,     3,   356,   493,   357,   494,    -1,   237,
     356,   495,   357,    -1,    63,     3,   237,   356,   495,   357,
      -1,     3,    -1,   491,   358,     3,    -1,     3,    -1,   492,
     358,     3,    -1,     3,    -1,   493,   358,     3,    -1,    -1,
     494,   178,    95,    66,    -1,   494,   178,    95,   216,   174,
      -1,   494,   178,    95,   191,    -1,   494,   178,    95,   216,
     101,    -1,   494,   178,   234,    66,    -1,   494,   178,   234,
     216,   174,    -1,   494,   178,   234,   191,    -1,   494,   178,
     234,   216,   101,    -1,   494,   178,    95,   173,    -1,   494,
     178,   234,   173,    -1,   494,   164,   125,    -1,   494,   164,
     211,    -1,   494,   164,   181,    -1,   494,    85,    -1,   494,
      18,    85,    -1,   494,    85,   139,    86,    -1,   494,    85,
     139,   137,    -1,     3,    -1,   495,   358,     3,    -1,    -1,
     496,     3,   502,   497,    -1,    -1,   497,    18,   174,    -1,
     497,   174,    -1,   497,   101,     4,    -1,   497,   101,     5,
      -1,   497,   101,     7,    -1,   497,   101,     6,    -1,   497,
     101,   307,   356,   357,    -1,   497,   101,   308,   356,   357,
      -1,   497,   101,   309,   356,   357,    -1,   497,   101,    64,
      -1,   497,   101,   356,   362,   357,    -1,   497,    40,    -1,
     497,    40,   356,     5,   358,     5,   357,    -1,   497,    40,
     356,     5,   357,    -1,   497,    45,   356,     5,   358,     5,
     357,    -1,   497,    45,   356,     5,   357,    -1,   497,    45,
      -1,   497,   237,   152,    -1,   497,   237,    -1,   497,   182,
     152,    -1,   497,   152,    -1,   497,    71,     4,    -1,   497,
      70,   356,   362,   357,    -1,   497,    63,     3,   237,    -1,
     497,    63,     3,   182,   152,    -1,   497,    63,     3,    70,
     356,   362,   357,    -1,   497,    48,    44,    43,   356,   362,
     357,    49,    -1,   497,    48,    44,    43,   356,   362,   357,
      50,    -1,   497,    48,    44,    43,   356,   362,   357,    -1,
     497,    43,   356,   362,   357,    49,    -1,   497,    43,   356,
     362,   357,    50,    -1,   497,    43,   356,   362,   357,    -1,
      -1,   356,     5,   357,    -1,   356,     5,   358,     5,   357,
      -1,    -1,    56,    -1,    -1,   500,   235,    -1,   500,   254,
      -1,    -1,   501,    74,   216,     4,    -1,   501,    75,     4,
      -1,    59,   498,    -1,   220,   498,   500,    -1,   215,   498,
     500,    -1,   170,   498,   500,    -1,   148,   498,   500,    -1,
     140,   498,   500,    -1,    58,   498,   500,    -1,   186,   498,
     500,    -1,   102,   498,   500,    -1,   120,   498,   500,    -1,
     104,   498,   500,    -1,   105,    -1,   233,    -1,   227,    -1,
     103,    -1,   252,    -1,    74,   498,   501,    -1,   245,   356,
       5,   357,   501,    -1,    56,   498,    -1,   247,   356,     5,
     357,    -1,   232,    -1,    53,    -1,   169,    -1,   163,    -1,
     219,   499,   501,    -1,   225,   499,   501,    -1,   166,   499,
     501,    -1,   156,   499,   501,    -1,   111,   356,   503,   357,
     501,    -1,   216,   356,   503,   357,   501,    -1,    54,    -1,
     238,    -1,   239,    -1,     4,    -1,   503,   358,     4,    -1,
     505,   423,   398,    -1,    -1,   142,    -1,   197,    -1,   506,
      -1,   216,   203,     3,    -1,   216,   203,   101,    -1,   216,
     507,    -1,   508,    -1,   507,   358,   508,    -1,     8,    20,
     362,    -1,     8,     9,   362,    -1,   509,    -1,    65,   183,
       3,   356,   510,   357,    43,    52,   514,   112,    -1,    65,
     183,     3,   356,   510,   357,    52,   514,   112,    -1,    65,
      10,   197,   183,     3,   356,   510,   357,    43,    52,   514,
     112,    -1,    65,    10,   197,   183,     3,   356,   510,   357,
      52,   514,   112,    -1,    65,   127,     3,   356,   510,   357,
     194,   513,    43,    52,   514,   112,    -1,    65,   127,     3,
     356,   510,   357,   194,   513,    52,   514,   112,    -1,    65,
      10,   197,   127,     3,   356,   510,   357,   194,   513,    43,
      52,   514,   112,    -1,    65,    10,   197,   127,     3,   356,
     510,   357,   194,   513,    52,   514,   112,    -1,    -1,   511,
      -1,   512,    -1,   511,   358,   512,    -1,     3,   502,    -1,
      16,     3,   502,    -1,   176,     3,   502,    -1,   138,     3,
     502,    -1,   140,    -1,   148,    -1,   245,    -1,   225,    -1,
      54,    -1,   120,    -1,   102,    -1,    58,    -1,   105,    -1,
     227,    -1,    -1,   514,   515,    -1,   514,    52,   514,   112,
      -1,   514,   144,   514,   112,   144,    -1,   514,   250,   514,
     112,   250,    -1,   514,   154,   514,   112,   154,    -1,   514,
     119,   514,   112,   119,    -1,   514,    69,   514,   112,    69,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,
      -1,    42,    -1,   217,    -1,   145,    -1,   234,    -1,    95,
      -1,   124,    -1,   248,    -1,   216,    -1,   147,    -1,   246,
      -1,    65,    -1,    96,    -1,   228,    -1,   143,    -1,   229,
      -1,   113,    -1,   107,    -1,    84,    -1,    89,    -1,    60,
      -1,   192,    -1,   153,    -1,   150,    -1,    62,    -1,   175,
      -1,   117,    -1,    61,    -1,   130,    -1,   115,    -1,   176,
      -1,   138,    -1,   128,    -1,    46,    -1,   199,    -1,   190,
      -1,   114,    -1,   201,    -1,    51,    -1,   106,    -1,   198,
      -1,   200,    -1,    43,    -1,   178,    -1,   179,    -1,    55,
      -1,   129,    -1,   136,    -1,   160,    -1,   162,    -1,   151,
      -1,   158,    -1,   196,    -1,   141,    -1,   177,    -1,   125,
      -1,    68,    -1,   171,    -1,   241,    -1,   174,    -1,   101,
      -1,   182,    -1,   152,    -1,   237,    -1,    70,    -1,   122,
      -1,   188,    -1,    66,    -1,   191,    -1,   173,    -1,   140,
      -1,   148,    -1,   245,    -1,   225,    -1,    54,    -1,   120,
      -1,   102,    -1,    58,    -1,   105,    -1,   227,    -1,   215,
      -1,   104,    -1,    74,    -1,   238,    -1,    53,    -1,   236,
      -1,   110,    -1,   146,    -1,    37,    -1,    94,    -1,   255,
      -1,   249,    -1,   251,    -1,   183,    -1,   127,    -1,   194,
      -1,   356,    -1,   357,    -1,   358,    -1,   354,    -1,   355,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    17,    -1,   359,    -1,   296,    -1,   297,    -1,   298,
      -1,   299,    -1,   300,    -1,     8,    -1,   516,    -1,    96,
     183,     3,    -1,    96,   183,   144,   255,     3,    -1,    96,
     127,     3,    -1,    96,   127,   144,   255,     3,    -1,   517,
      -1,    60,     3,   356,   357,    -1,    60,     3,   356,   518,
     357,    -1,   519,    -1,   518,   358,   519,    -1,     5,    -1,
       4,    -1,     7,    -1,   174,    -1,     6,    -1,     3,    -1,
       8,    -1,   520,    -1,    65,   200,     3,   521,   522,   178,
       3,   128,   106,   198,    52,   514,   112,    -1,    51,    -1,
      36,    -1,   145,    -1,   234,    -1,    95,    -1,   523,    -1,
      96,   200,     3,    -1,    96,   200,   144,   255,     3,    -1,
      34,   200,     3,   108,    -1,    34,   200,     3,    88,    -1,
     524,    -1,    65,   345,   481,     3,   525,    -1,    -1,   525,
     526,    -1,   350,   251,     5,    -1,   350,     5,    -1,   351,
      55,     5,    -1,   351,     5,    -1,   352,     5,    -1,   165,
       5,    -1,   353,    -1,    18,   353,    -1,   527,    -1,    96,
     345,     3,    -1,    96,   345,   144,   255,     3,    -1,    34,
     345,     3,   525,    -1,    34,   345,     3,    47,    -1,    34,
     345,     3,    47,   251,     5,    -1,    34,   345,     3,   189,
     221,     3,    -1,    -1,   193,    26,    -1,   193,   529,    -1,
       3,    -1,   529,   358,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   424,   424,   425,   430,   437,   438,   439,   440,   458,
     466,   474,   480,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   513,   513,   522,   522,   524,   524,   526,
     526,   530,   531,   532,   533,   534,   537,   538,   541,   542,
     545,   546,   549,   549,   550,   550,   551,   551,   559,   559,
     567,   567,   578,   582,   583,   584,   585,   586,   587,   588,
     589,   593,   593,   595,   595,   597,   597,   600,   600,   602,
     602,   604,   604,   606,   606,   608,   608,   610,   610,   613,
     613,   615,   615,   617,   617,   619,   619,   621,   621,   623,
     623,   625,   625,   627,   627,   630,   630,   632,   632,   634,
     634,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   673,   674,   675,   676,   677,
     678,   679,   680,   682,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   701,   702,   703,   705,   706,   707,   708,   709,
     711,   712,   714,   715,   716,   718,   719,   720,   721,   728,
     735,   742,   746,   750,   754,   758,   762,   768,   769,   770,
     773,   779,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   797,   799,   801,   803,   807,   815,   826,   827,   830,
     831,   834,   842,   850,   861,   871,   872,   885,   901,   902,
     903,   904,   907,   914,   922,   923,   924,   927,   928,   931,
     932,   936,   937,   940,   942,   946,   947,   950,   952,   956,
     957,   960,   961,   964,   970,   977,   986,   987,   988,   989,
     992,   993,   994,   995,   996,   999,  1000,  1003,  1004,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1018,  1019,
    1020,  1028,  1034,  1035,  1036,  1039,  1040,  1043,  1044,  1048,
    1055,  1056,  1057,  1060,  1061,  1065,  1067,  1069,  1071,  1073,
    1077,  1078,  1079,  1082,  1083,  1086,  1087,  1090,  1091,  1092,
    1095,  1096,  1099,  1100,  1104,  1106,  1108,  1110,  1113,  1114,
    1117,  1118,  1121,  1125,  1135,  1143,  1144,  1145,  1146,  1150,
    1154,  1156,  1160,  1160,  1162,  1167,  1174,  1181,  1191,  1198,
    1205,  1215,  1223,  1233,  1241,  1250,  1259,  1269,  1277,  1286,
    1295,  1305,  1314,  1326,  1331,  1336,  1342,  1349,  1356,  1363,
    1373,  1380,  1389,  1396,  1402,  1410,  1416,  1424,  1425,  1426,
    1427,  1428,  1432,  1439,  1448,  1455,  1461,  1472,  1475,  1481,
    1487,  1494,  1500,  1507,  1513,  1519,  1525,  1531,  1537,  1543,
    1549,  1555,  1561,  1567,  1573,  1579,  1585,  1591,  1599,  1600,
    1601,  1604,  1612,  1618,  1631,  1632,  1632,  1636,  1637,  1640,
    1641,  1642,  1646,  1647,  1647,  1651,  1659,  1669,  1670,  1671,
    1672,  1673,  1676,  1676,  1679,  1680,  1683,  1693,  1706,  1707,
    1707,  1710,  1711,  1712,  1713,  1716,  1720,  1721,  1722,  1723,
    1729,  1732,  1738,  1743,  1749,  1753,  1753,  1758,  1759,  1761,
    1762,  1766,  1767,  1771,  1772,  1773,  1776,  1777,  1778,  1779,
    1783,  1784,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,
    1799,  1807,  1816,  1817,  1818,  1822,  1833,  1845,  1856,  1871,
    1876,  1880,  1881,  1885,  1887,  1889,  1891,  1895,  1896,  1902,
    1906,  1908,  1910,  1912,  1914,  1919,  1923,  1924,  1928,  1937,
    1947,  1951,  1952,  1953,  1954,  1955,  1956,  1958,  1962,  1963,
    1966,  1981,  1988,  2003,  2016,  2031,  2044,  2045,  2046,  2049,
    2050,  2053,  2054,  2055,  2056,  2057,  2058,  2059,  2060,  2061,
    2063,  2065,  2067,  2069,  2071,  2075,  2076,  2079,  2080,  2083,
    2084,  2087,  2088,  2089,  2090,  2091,  2092,  2093,  2094,  2095,
    2096,  2097,  2098,  2099,  2100,  2101,  2102,  2103,  2104,  2107,
    2108,  2111,  2111,  2121,  2122,  2123,  2124,  2125,  2126,  2127,
    2128,  2129,  2130,  2131,  2132,  2139,  2140,  2141,  2142,  2143,
    2144,  2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,  2153,
    2154,  2155,  2156,  2157,  2158,  2159,  2162,  2163,  2164,  2167,
    2168,  2171,  2172,  2173,  2176,  2177,  2178,  2182,  2183,  2184,
    2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,  2193,  2194,
    2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,  2203,  2204,
    2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,  2213,  2214,
    2217,  2218,  2221,  2234,  2235,  2236,  2240,  2243,  2244,  2245,
    2246,  2246,  2248,  2249,  2257,  2261,  2267,  2273,  2280,  2287,
    2293,  2299,  2306,  2315,  2316,  2319,  2320,  2323,  2324,  2325,
    2326,  2329,  2330,  2331,  2332,  2333,  2334,  2335,  2336,  2337,
    2338,  2345,  2346,  2347,  2348,  2349,  2350,  2351,  2352,  2355,
    2356,  2357,  2357,  2357,  2358,  2358,  2358,  2358,  2358,  2358,
    2359,  2359,  2359,  2359,  2359,  2359,  2359,  2359,  2359,  2360,
    2360,  2360,  2360,  2360,  2360,  2360,  2361,  2361,  2361,  2361,
    2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,
    2362,  2362,  2363,  2363,  2363,  2363,  2363,  2363,  2363,  2363,
    2364,  2364,  2364,  2364,  2364,  2364,  2364,  2364,  2365,  2365,
    2365,  2365,  2365,  2365,  2365,  2365,  2365,  2366,  2366,  2366,
    2366,  2366,  2366,  2366,  2366,  2367,  2367,  2367,  2368,  2368,
    2368,  2368,  2368,  2368,  2368,  2368,  2369,  2369,  2369,  2369,
    2369,  2369,  2369,  2370,  2370,  2370,  2370,  2370,  2370,  2370,
    2371,  2371,  2371,  2371,  2372,  2372,  2372,  2372,  2372,  2372,
    2372,  2372,  2372,  2372,  2372,  2372,  2373,  2373,  2373,  2373,
    2373,  2374,  2381,  2385,  2391,  2397,  2403,  2415,  2419,  2425,
    2433,  2434,  2437,  2438,  2439,  2440,  2441,  2442,  2443,  2450,
    2454,  2462,  2463,  2466,  2467,  2468,  2471,  2475,  2481,  2490,
    2498,  2509,  2513,  2522,  2523,  2527,  2528,  2529,  2530,  2531,
    2532,  2533,  2534,  2537,  2541,  2547,  2557,  2564,  2571,  2579,
    2589,  2590,  2591,  2594,  2595
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
  "CSV", "CONFLICT", "EXCLUDED", "NOTHING", "DATABASE", "DECLARE",
  "DEFERRABLE", "DEFERRED", "DELIMITER", "DISABLE", "DO", "DOMAIN",
  "DELAYED", "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP",
  "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE",
  "DATETIME", "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE", "ESCAPED",
  "EXCEPT", "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN", "FETCH",
  "FIRST", "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FORMAT", "FROM",
  "FULL", "FULLTEXT", "FUNCTION", "FOR", "GROUP", "HANDLER", "HEADER",
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
     596,   597,   598,   599,    59,    46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   360,   361,   361,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   363,   362,   364,   362,   365,   362,   366,
     362,   362,   362,   362,   362,   362,   362,   362,   367,   367,
     368,   368,   369,   362,   370,   362,   371,   362,   372,   362,
     373,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   374,   362,   375,   362,   376,   362,   377,   362,   378,
     362,   379,   362,   380,   362,   381,   362,   382,   362,   383,
     362,   384,   362,   385,   362,   386,   362,   387,   362,   388,
     362,   389,   362,   390,   362,   391,   362,   392,   362,   393,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   394,   394,   394,
     362,   362,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   362,   362,   362,   362,   396,   396,   362,   362,   362,
     362,   362,   362,   362,   397,   398,   398,   398,   399,   399,
     400,   400,   401,   401,   402,   402,   402,   403,   403,   404,
     404,   405,   405,   406,   406,   407,   407,   408,   408,   409,
     409,   410,   410,   411,   411,   411,   412,   412,   412,   412,
     413,   413,   413,   413,   413,   414,   414,   415,   415,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   417,   417,
     417,   418,   419,   419,   419,   420,   420,   421,   421,   422,
     422,   422,   422,   423,   423,   424,   424,   424,   424,   424,
     425,   425,   425,   426,   426,   427,   427,   428,   428,   428,
     429,   429,   430,   430,   431,   431,   431,   431,   432,   432,
     433,   433,   434,   397,   435,   436,   436,   436,   436,   435,
     437,   437,   438,   438,   435,   397,   439,   439,   397,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   441,   441,   441,   442,   442,   442,   442,
     397,   443,   397,   444,   444,   445,   445,   446,   446,   446,
     446,   446,   397,   447,   397,   448,   448,   397,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   450,   450,
     450,   397,   451,   451,   452,   453,   452,   454,   454,   455,
     455,   455,   456,   457,   456,   458,   458,   459,   459,   459,
     459,   459,   460,   460,   461,   461,   462,   462,   463,   464,
     463,   465,   465,   465,   465,   451,   466,   466,   466,   466,
     397,   467,   467,   467,   397,   469,   468,   470,   470,   471,
     471,   472,   472,   473,   473,   473,   474,   474,   474,   474,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     397,   477,   478,   478,   478,   479,   479,   479,   479,   397,
     397,   480,   480,   397,   397,   397,   397,   481,   481,   397,
     482,   482,   482,   482,   482,   397,   483,   483,   397,   484,
     484,   485,   485,   485,   485,   485,   485,   485,   486,   486,
     487,   487,   484,   484,   484,   484,   488,   488,   488,   489,
     489,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   491,   491,   492,   492,   493,
     493,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   495,
     495,   496,   490,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   498,   498,   498,   499,
     499,   500,   500,   500,   501,   501,   501,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     503,   503,   504,   505,   505,   505,   397,   506,   506,   506,
     507,   507,   508,   508,   397,   509,   509,   509,   509,   509,
     509,   509,   509,   510,   510,   511,   511,   512,   512,   512,
     512,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   514,   514,   514,   514,   514,   514,   514,   514,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   397,   516,   516,   516,   516,   397,   517,   517,
     518,   518,   519,   519,   519,   519,   519,   519,   519,   397,
     520,   521,   521,   522,   522,   522,   397,   523,   523,   397,
     397,   397,   524,   525,   525,   526,   526,   526,   526,   526,
     526,   526,   526,   397,   527,   527,   397,   397,   397,   397,
     528,   528,   528,   529,   529
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     0,     6,     0,     7,     0,     7,     0,
       7,     3,     4,     3,     4,     3,     5,     6,     1,     3,
       0,     1,     0,     6,     0,     7,     0,     6,     0,     7,
       0,     5,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     0,     9,     0,     9,     0,     9,     0,    10,     0,
      10,     0,    10,     0,    10,     0,    10,     0,    10,     0,
      10,     0,    12,     0,    14,     0,    14,     0,    10,     0,
      12,     0,    14,     0,    14,     0,    10,     0,     9,     0,
       9,     8,     6,     6,     8,     4,     7,     6,     4,     4,
       4,     6,     8,     6,     6,     6,     8,     8,     4,     6,
       6,     6,     4,     4,     4,     6,     4,     6,     4,     6,
       3,     4,     4,     4,     3,     3,     6,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     8,     8,     8,     6,     6,     8,     8,     6,
      10,     4,     6,     8,     4,     4,     4,     6,     8,     3,
       6,     6,     6,     6,     8,     3,     8,    10,     3,     3,
       3,     3,     3,     1,     1,     4,     6,     1,     1,     1,
       6,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     3,     5,     4,     5,     3,     4,     3,
       4,     1,     1,     1,     1,     3,    12,    12,     0,     2,
       0,     4,     2,     4,     0,     1,     1,     0,     2,     0,
       2,     0,     3,     1,     3,     0,     3,     2,     4,     0,
       3,     1,     3,     2,     4,     2,     0,     2,     4,     4,
       0,     2,     2,     4,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     2,     1,     0,     1,     3,     1,     1,     3,
       5,     3,     3,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       0,     1,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     8,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     3,     5,     1,     8,
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
      11,     0,     4,     3,     5,     5,     9,    10,     1,     3,
       9,     9,     9,     6,    11,     8,     0,     1,     2,     1,
       3,     5,     7,     4,     4,     5,     5,     4,     6,    11,
      13,    13,    15,     4,     6,     1,     3,     1,     3,     1,
       3,     0,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     4,     3,     3,     3,     2,     3,     4,     4,     1,
       3,     0,     4,     0,     3,     2,     3,     3,     3,     3,
       5,     5,     5,     3,     5,     2,     7,     5,     7,     5,
       2,     3,     2,     3,     2,     3,     5,     4,     5,     7,
       8,     8,     7,     6,     6,     5,     0,     3,     5,     0,
       1,     0,     2,     2,     0,     4,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     1,     1,
       1,     3,     3,     0,     1,     1,     1,     3,     3,     2,
       1,     3,     3,     3,     1,    10,     9,    12,    11,    12,
      11,    14,    13,     0,     1,     1,     3,     2,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     4,     5,     5,     5,     5,     5,     1,
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
       1,     1,     1,     3,     5,     3,     5,     1,     4,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
      13,     1,     1,     1,     1,     1,     1,     3,     5,     4,
       4,     1,     5,     0,     2,     3,     2,     3,     2,     2,
       2,     1,     2,     1,     3,     5,     4,     4,     6,     6,
       0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   516,     0,   328,     0,   417,     0,
       0,   417,     0,   269,     0,   417,     0,     0,     0,   224,
     323,   335,   338,   360,   367,   372,   374,   377,   401,   440,
     444,   470,   480,   489,   495,   498,   646,   654,   812,   817,
     829,   836,   841,   853,     0,     0,     0,     0,     0,     0,
     487,     0,     0,     0,     0,     0,   487,   517,     0,     0,
     487,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   423,     0,     0,   423,     0,     0,   649,   650,
       0,     0,     0,     0,   496,     0,     1,     2,   362,     0,
       0,   843,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   518,     0,     0,   487,   447,
     332,     0,   327,   325,   326,     0,   483,     0,   815,     0,
     361,   813,     0,   837,     0,   485,     0,   336,     0,   854,
       0,   419,   420,   421,   422,   418,     0,   373,     0,     0,
       0,     0,   647,   648,     0,     4,     8,     9,    11,    10,
       7,     0,     0,     0,   280,   270,   221,     0,   222,   223,
       0,   271,   272,   273,    12,   275,   277,   276,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     284,   225,   278,   363,   421,   418,   284,     0,     0,   285,
     287,   288,   294,   497,     3,     0,     0,   368,   369,   840,
     839,     0,     0,     0,     0,     0,     0,     0,     0,   857,
       0,   856,     0,   827,   823,   822,   826,   824,   828,   825,
     818,     0,   820,     0,     0,   488,   481,     0,   663,     0,
       0,     0,     0,   663,   832,   831,     0,   482,     0,     0,
       0,   843,     0,     0,     0,     0,   330,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   424,     0,
     424,   653,   652,   651,     0,    50,     0,    31,    30,    19,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,     0,     0,
       0,     0,     0,   317,     0,     0,     0,     0,   302,   301,
     305,   309,   306,     0,     0,   303,   293,     0,   371,   370,
       0,     0,     0,     0,     0,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   851,   844,   376,   819,     0,     0,     0,   628,
     637,   596,   596,   596,   596,   596,   621,   596,   618,     0,
     596,   596,   596,   599,   630,   599,   629,   596,   596,   596,
       0,   599,   596,   599,   620,   627,   619,   638,   639,     0,
       0,   622,   490,     0,     0,     0,     0,     0,   664,   665,
       0,     0,     0,     0,     0,   835,   833,   834,     0,     0,
       0,     0,     0,   842,   643,   449,     0,   451,   452,     0,
     333,     0,   249,     0,   228,   332,   484,   816,   814,   838,
     486,   337,   855,     0,     0,     0,   479,     0,     0,     5,
      48,    51,     0,    45,     0,     0,   213,     0,     0,     6,
       0,     0,   199,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   188,   189,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,    20,    22,    23,    21,   219,   217,    43,
       0,    41,   185,    52,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    32,    24,    25,    27,    13,    14,    15,
      16,    17,    18,    26,    29,    28,   282,   228,     0,   279,
     365,   364,   284,     0,     0,     0,   289,   322,   292,     0,
     228,   286,   303,   303,     0,   296,     0,   304,     0,   291,
       0,     0,     0,     0,   387,   384,   390,   386,   563,     0,
       0,     0,     0,   388,   858,   859,   852,   850,   846,     0,
     848,     0,   849,   821,   663,   663,     0,   625,   601,   607,
     604,   601,   601,     0,   601,   601,   601,   600,   604,   604,
     601,   601,   601,     0,   604,   601,   604,     0,     0,     0,
       0,     0,   667,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   644,
     645,     0,   561,   513,   294,   448,     0,   453,   454,   455,
     456,   229,     0,   256,   228,   329,   331,     0,   404,   426,
       0,     0,   403,   404,     0,   404,     0,    62,     0,   211,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,   147,   148,   149,   150,   151,   152,     0,     0,
       0,     0,   128,     0,     0,     0,   132,   133,   134,   136,
       0,     0,   138,     0,   141,   142,   143,     0,     0,     0,
       0,     0,     0,    69,    63,    64,    65,    66,    67,    68,
     118,   119,   120,     0,     0,     0,   195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,     0,     0,     0,
       0,     0,     0,     0,     0,   171,     0,   174,   175,   176,
       0,    44,    42,     0,     0,   220,   218,    54,     0,     0,
      39,    35,    37,     0,   230,     0,     0,   317,   319,   319,
     319,     0,     0,     0,   249,   307,   308,     0,     0,   310,
       0,     0,     0,     0,     0,   563,   563,     0,   398,   563,
     393,     0,     0,   845,   847,     0,     0,     0,   613,   623,
     615,   617,   640,     0,   616,   612,   611,   634,   633,   610,
     614,   609,     0,   631,   608,   632,     0,     0,   492,     0,
     491,   668,   670,   669,     0,   666,     0,   353,     0,     0,
       0,     0,     0,   355,     0,     0,     0,     0,     0,   681,
       0,     0,     0,     0,     0,     0,   643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   519,     0,     0,   450,
     469,     0,     0,   465,     0,     0,     0,     0,   446,   457,
     460,     0,     0,   860,   334,     0,     0,     0,   435,   425,
       0,     0,   404,   442,   404,   443,    49,   215,     0,   214,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    73,    75,     0,
       0,     0,     0,     0,   107,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,   239,   228,
     366,   290,     0,     0,     0,     0,   475,     0,     0,   256,
     299,   297,     0,     0,   295,   311,     0,     0,     0,     0,
       0,   398,   398,   563,     0,     0,   575,     0,   580,     0,
       0,     0,     0,     0,   399,   584,   565,     0,   582,   395,
     398,   385,   392,     0,     0,   597,     0,   602,   603,     0,
       0,   604,     0,   604,   604,   626,     0,     0,   675,   678,
     677,   679,   676,   671,   672,   674,   680,   673,     0,     0,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,   681,     0,     0,     0,     0,     0,     0,     0,     0,
     561,   515,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   501,   561,     0,   642,   464,   462,   463,   466,   467,
     468,     0,     0,     0,   234,   234,   250,   251,   257,     0,
     324,   437,   436,     0,     0,   427,   432,   431,     0,   429,
     407,   441,   212,   216,     0,   113,   112,     0,   117,     0,
       0,   200,   201,   146,   124,   125,     0,     0,   129,   130,
     131,   135,   137,   139,   180,   181,   182,   183,     0,    70,
      79,    81,    77,    83,    85,    87,   121,     0,     0,   123,
     196,   241,   241,   241,    89,     0,     0,    97,     0,     0,
     105,   241,   241,   153,     0,     0,     0,   165,   166,     0,
       0,   169,     0,   172,     0,   177,     0,    53,    57,     0,
       0,    47,     0,     0,     0,    34,     0,     0,   249,   230,
     318,     0,     0,     0,     0,     0,     0,   860,   312,     0,
     298,     0,     0,     0,   559,     0,   389,   397,   398,   564,
     400,     0,     0,     0,     0,     0,     0,   585,   566,   567,
     569,   568,   573,     0,     0,     0,     0,   583,   581,   394,
       0,     0,   681,     0,     0,   606,   635,   641,   636,   624,
       0,   493,     0,   681,     0,     0,     0,     0,     0,   354,
       0,   347,     0,     0,     0,     0,   689,   690,   691,   693,
     692,   811,   696,   697,   698,   804,   695,   694,   799,   800,
     801,   802,   803,   786,   699,   740,   731,   736,   681,   782,
     772,   743,   775,   718,   725,   722,   709,   765,   754,   681,
     762,   780,   716,   717,   787,   703,   710,   758,   774,   779,
     776,   737,   715,   784,   656,   714,   734,   727,   724,   681,
     773,   763,   704,   753,   792,   730,   744,   726,   745,   729,
     768,   751,   712,   681,   701,   785,   707,   769,   721,   748,
     760,   720,   681,   749,   746,   747,   755,   767,   757,   723,
     728,   752,   741,   742,   759,   791,   764,   733,   766,   719,
     793,   750,   738,   732,   739,   735,   778,   706,   700,   771,
     777,   711,   713,   702,   783,   761,   781,   756,   770,   708,
     705,   789,   681,   790,   788,   806,   807,   808,   809,   810,
     797,   798,   794,   795,   796,   805,   682,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,   499,
     512,   520,   563,     0,   459,   461,   235,   236,     0,   253,
     255,     0,     0,     0,   863,   861,   862,   405,     0,   428,
       0,     0,     0,   860,     0,     0,   116,   203,   204,   205,
     206,   209,   208,   210,   202,   207,     0,     0,     0,   241,
     241,   241,   241,   241,   241,     0,     0,     0,   245,   245,
     245,   241,     0,     0,     0,   241,     0,     0,     0,   241,
     245,   245,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    59,    40,    36,    38,   234,   237,   240,   256,   239,
     320,     0,     0,     0,   476,   477,     0,   471,     0,   378,
     537,     0,   535,     0,   379,     0,   396,     0,     0,     0,
       0,     0,     0,   587,     0,     0,     0,     0,     0,     0,
     681,     0,   598,   605,     0,   681,     0,   343,   356,   357,
     358,     0,     0,     0,     0,   340,   655,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
     501,     0,     0,     0,     0,   527,     0,     0,     0,   524,
       0,   523,     0,   533,     0,     0,     0,   562,   458,   234,
     252,   259,   258,     0,     0,   439,   438,   434,   433,     0,
     409,   402,   114,   111,   126,   127,   184,   245,   245,   245,
     245,   245,   245,   186,     0,   122,     0,     0,     0,     0,
       0,   245,    91,     0,     0,   245,    99,     0,     0,   245,
       0,     0,   162,   163,   164,   167,   168,     0,   173,   178,
     232,     0,     0,   231,   260,   249,   316,     0,   315,   314,
       0,   313,     0,     0,     0,   383,     0,   560,   577,     0,
     595,   579,     0,     0,     0,   588,   586,   570,   571,   572,
     574,     0,   681,     0,   658,   494,     0,   660,     0,   351,
     348,     0,   683,     0,     0,     0,     0,     0,   681,   345,
       0,     0,     0,   342,   500,   514,     0,     0,     0,     0,
       0,   525,   526,   268,   521,   503,     0,     0,     0,   254,
     864,     0,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   242,     0,    72,    74,    76,     0,
     241,     0,     0,     0,   241,     0,     0,     0,   108,   110,
       0,   238,   234,     0,   265,   256,   321,   478,   381,     0,
     538,   536,     0,   593,   594,     0,     0,     0,   681,     0,
     657,   659,   359,   344,   688,   687,   684,   686,   685,     0,
     352,   350,     0,   528,     0,     0,   534,     0,   502,     0,
       0,     0,     0,     0,     0,   430,     0,     0,   408,    80,
      82,    78,    84,    86,    88,   187,     0,   234,   246,    90,
     245,    93,    95,    98,   245,   101,   103,   106,   170,   233,
     262,   261,     0,   226,   227,     0,   576,   578,   592,   589,
       0,   662,   830,   346,     0,   522,     0,   504,   505,     0,
       0,   415,     0,   410,     0,   412,   413,   244,   247,     0,
       0,   241,   241,     0,   241,   241,     0,     0,   266,     0,
     590,   591,   661,     0,     0,     0,     0,     0,     0,   411,
       0,   234,    92,   245,   245,   100,   245,   245,   264,   263,
     539,     0,     0,     0,     0,     0,     0,   416,     0,   248,
       0,     0,     0,     0,   541,     0,     0,     0,     0,   541,
       0,     0,   414,    94,    96,   102,   104,   380,   540,     0,
       0,     0,   529,     0,     0,   508,   506,     0,   555,     0,
       0,     0,   541,   541,     0,     0,   507,     0,   556,   382,
       0,   552,   554,   553,     0,     0,     0,   531,   530,     0,
     509,   557,   558,   542,   550,   544,     0,   546,   551,   548,
       0,   541,     0,   545,   543,   549,   547,   532,     0,     0,
       0,     0,     0,     0,     0,   510,   511
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   600,   963,  1154,  1155,  1153,   601,   602,   953,
    1149,   954,  1150,   610,  1331,  1332,  1333,  1631,  1629,  1630,
    1632,  1633,  1634,  1641,  1890,  2001,  2002,  1645,  1894,  2004,
    2005,  1649,  1341,  1342,   616,  1097,   352,    18,    19,   582,
    1158,  1666,  1599,  1803,  1368,  1638,  1884,  1778,  1958,   843,
    1276,  1277,  1073,  1904,  1973,  1585,    80,   261,   262,   467,
     268,   269,   270,   487,   271,   484,   758,   485,   754,  1174,
    1175,   746,  1163,  1671,   272,    20,    63,   115,   326,    21,
      22,  1032,  1033,    23,    24,   741,    88,    25,    26,    27,
    1199,    28,  1078,  1754,  1613,  1875,  1948,  2020,  1872,    72,
     136,   595,   850,  1082,  1611,  1288,   848,    29,    30,   109,
     324,   576,   579,   840,  1068,  1069,  1070,    31,    83,   750,
      32,    96,    33,    34,    35,  1589,  2064,  2065,    61,  1055,
    1056,  1683,  1681,  2031,  2057,  1385,  1057,   988,   787,   798,
     998,   999,   552,  1003,   833,   834,    36,    78,    79,    37,
     557,   558,   559,  1228,  1242,  1566,    38,    39,   301,   302,
      40,   316,   568,    41,    42,   291,   513,    43,  1280,  1606
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1563
static const yytype_int16 yypact[] =
{
   10632,   238,  -112,   124,   498,   172, -1563,  1013, -1563,   212,
     220, -1563,    39, -1563,   237,    36,    86,   530,   164, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563,   532,   596,   614,   669,   222,   340,
     396,   685,   690,   128,   699,   701,   396, -1563,   407,   587,
     396,   551, -1563,    46,    75,   125,   739,   429,   433,   436,
     441,   471,   576,   748,   759,   576,   171,    84,   425, -1563,
    6160,   783,   575,    38, -1563,   787, -1563, 10632,   388,   412,
     638,    79,   437,    30,   -16,   547,   792,   769,   467,   650,
     476,   581,   469,    81,   844, -1563,   366,   862,   396,   536,
     535,   901, -1563, -1563, -1563,   -72, -1563,   631, -1563,   681,
   -1563, -1563,   683, -1563,   719, -1563,   785, -1563,   793, -1563,
     836, -1563, -1563, -1563, -1563, -1563,   953, -1563,   707,   986,
    8552,  8552, -1563, -1563,   992,   320, -1563, -1563, -1563, -1563,
    1086,  8552,  8552,  8552, -1563, -1563, -1563,  7004, -1563, -1563,
     743, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,   755,
     856,   859,   868,   890,   915,   917,   919,   946,   954,   955,
     957,   958,   959,   961,   962,   963,   972,   974,   975,   976,
     980,   982,   983,   990,   991,   993,   994,   995,   996,   997,
     999,  1000,  1001,  1005,  1006,  1010,  1011,  1017,  1018,  1020,
    1024,  1025,  1028,  1034,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1046, -1563, -1563,  1047,  1048,  1049,  1051,
    1052,  1053,  1058,  1059,  1060,  1061,  1064,  1069,  1070,  1072,
    1077,  1079,  1082,  1084,  1087,  1092,  1093,  1098,  1100,  1103,
    1110,  1116,  1117,  1118,  1120,  1122,  1126,  1127,  1128,  8552,
   11001,   -84, -1563,   881,    40,    43,    16,    14,  -130,   673,
   -1563, -1563,  1208, -1563, -1563,  1056,  1236, -1563, -1563, -1563,
   -1563,   611,    89,  1285,    96,  1347,    95,   100,  1387,  1234,
    1265,    62,  1484, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563,   354, -1563,  1486,  1494, -1563, -1563, 10749,    48,  1495,
    1323,  1247,  1500,    48, -1563, -1563,   398, -1563,  1326,   477,
    1251, -1563,  1507,  1509,   303,  1493, -1563,   216,  -176,    38,
    1517,  1518,  1521,  1522,  1523,  1524,  1526,  1528,  -148,  1532,
     266,  7554,  7554, -1563,  1533,  8552,  8552,  1577,  1577, -1563,
    8552,  1054,   -59,  1535, -1563,  8552,  6507,  8552,  8552,  8552,
    8552,  8552,  8552,  8552,  8552,  8552,  1182,  8552,  8552,  8552,
    8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,
    8552,  8552,  1183,  8552,  8552,  8552,  1184,  8552,  8552,  8552,
    8552,  8552,  8552,  7123,  8552,  8552,  8552,  8552,  8552,  8552,
    8552,  8552,  8552,  8552,  1186,  1190,  1191,  1192,  1193,  8552,
    8552,  1195,  1199,  1200,  8552,  8552,  1554,  1203,  1204,  8552,
    8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,
    8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,  8552,
    8552,  1207,  2322, -1563,  8552,  8552,  8552,  8552,  8552,    44,
    1213,   734,  8552,  6657,  8552,  8552,  8552,  8552,  8552,  8552,
    8552,  8552,  8552,  8552,  8552,  8552,  1567, -1563,    38,  1568,
    8552,  1607,  1609,   497,  1223,   371,  1622,    38, -1563, -1563,
   -1563,   323, -1563,    38,  1460,  1464, -1563,  1639, -1563, -1563,
    1640,  1664,  1665,  1666,  1667, -1563,  1674,  1675,  1690, 10749,
    1692,  1475,  1694,  1695,  1696,  1697,  1700,  1351,  1701,    20,
     107,  1702, -1563, -1563, -1563, -1563,   189,  1344,  1352, -1563,
   -1563,  1353,  1353,  1353,  1353,  1353, -1563,  1353, -1563,  1354,
    1353,  1353,  1353,  1663, -1563,  1663, -1563,  1353,  1353,  1353,
    1365,  1663,  1353,  1663, -1563, -1563, -1563, -1563, -1563,  1367,
    1371, -1563,    73, 10749,  1726,  1728,  1734,  1381,  1382, -1563,
     166,  1736,  1738,  1564,  1389, -1563, -1563, -1563,  1569,  1745,
    1575,  1501,  1752,    62,  -118, -1563,   424, -1563, -1563,    27,
   -1563,  8552,  1578,    38,  -174,   535, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563,  1755,  1761,  -124, -1563,  1755,   454, -1563,
    1156, -1563,  1408,  7554,  6571,   401, -1563,  8552,  8552, -1563,
    1555,   126, -1563, -1563, -1563,  2645,  7470,  1179,  1563,  1608,
    2968,  3291,  3614,  3937,  4260,  4583, -1563,  1634,  1957,  2277,
    2600,  4906,  2923,  3246,  3569,  5229,  5552,  8909,   233,  3892,
    8932,  4215, -1563,  8957,  8990,  9013, -1563,  6626,  4538,  4861,
    5184,  5507,  1999,  1414,  9036,  9059,  9082,  9105,  9128,  9151,
    9174,  9197,  5830,  5876,  6257, -1563, -1563, -1563, -1563, -1563,
    9220,  6285,  1451,  1455,  1456,   537,   633,  1424,  1459,  1461,
    6325,  9249,  9272,  9297,  9330,  9353,  9376,  9399,  9422,  6365,
    6523,  6687,  6729,  6864,  7089,  7140,  7187,   745,  9445,  9468,
    9491,  7213, -1563, -1563,  7343,  8031,  8051,  8306,  8306, -1563,
      49, -1563, -1563,  1571,  8552,  8552,  1428,  8552, 11027,  1430,
    1433,  1434,  8552,  2212,  1888,  1231,  1133,   824,   824,   706,
     706,   706,   706,   676, -1563, -1563, -1563,  -174,  1669, -1563,
   -1563,  1436,    87,  1644,  1646,  1648, -1563, -1563, -1563,     6,
    -160,   673,  1464,  1464,  1650,  1613,    38, -1563,  1654, -1563,
      -1, 10749, 10749,  1796, -1563, -1563, -1563, -1563, -1563, 10749,
    1803,  1586,  1587, -1563, -1563, -1563, -1563, -1563, -1563,  1806,
   -1563,  1811, -1563, -1563,    48,    48,  1812, -1563, -1563, -1563,
   -1563, -1563, -1563,  1815, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563,  1815, -1563, -1563, -1563,  1819,  1821,  1655,
    1478,  8552, -1563, 10749, 10749, 10749,  1637,    48,  1596,   158,
     175,  1662,  1838,   452,  1839,   228,  1840,  1842,  1672, -1563,
   -1563,  1844,   570, -1563,  1208, -1563,  1854, -1563, -1563, -1563,
     368,  7554,  1809,  1705,  -174, -1563, -1563,  1847,  -138, -1563,
     431,  1513, -1563,  -138,  1513,  1691,  8552, -1563,  8552, -1563,
    8552,  7985,  7028,  1516,  8552,  8552, -1563,  8552,  6598,  1727,
    1727,  8552, -1563, -1563, -1563, -1563, -1563, -1563,  8552,  8552,
    8552,  8552, -1563,  8552,  8552,  8552, -1563, -1563, -1563, -1563,
    8552,  8552, -1563,  8552, -1563, -1563, -1563, 10749, 10749,  8552,
    8552,  8552,  1871, -1563,  1553,  1556,  1565,  1570,  1573,  1579,
   -1563, -1563, -1563,  8552,  8552,  8552, -1563,  8552,  1537,  1539,
    1545,  1581,  1873,  1598,  1883,  1602,  1572,  1574,  8552, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563,  8552,  8552,  8552,
    8552,  8552,  8552,  8552,  8552, -1563,  8552, -1563, -1563, -1563,
    8552, -1563, -1563,  8552,  1555,  8306,  8306,  1710, 11052,  8552,
   -1563, -1563, -1563,  1555,  1800,    38,  1928,   497,  1804,  1804,
    1804,  8552,  1931,  1936,  1578, -1563, -1563,    38,  8552,   -77,
      38,  1584,  1789,  1791,  1591, -1563, -1563, 10749, 10598, -1563,
   -1563,  1945,  1947, -1563, -1563,  1594,  1595,   451,  -135,   741,
    -135,  -135, -1563,   472,  -135,  -135,  -135,   741,   741,  -135,
    -135,  -135,   481,   741,  -135,   741,  1603,  1604,  1885,  8552,
    7554, -1563, -1563, -1563,  1647, -1563,  1606, -1563,  1618,  1635,
    1638,  1641,   483, -1563,  1721,   158,  1962,   270,  1938, -1563,
    1865,  1753,   158,   271,  1817,  1995,  -122,  1996,  1645,  1848,
     525,  1676,  1677,  1850,  1684,   488, -1563,  2000,  1555, -1563,
   -1563,  2012,   -23,  2036,  2040,  2041,  1698,   806, -1563,  1688,
   -1563,   110,  8552,  1857, -1563,  7620,  1900,  2050, -1563, -1563,
    2057,  7967,  -136, -1563,  -136, -1563, -1563,  7554,  8451, -1563,
    8552, -1563,  8650,   895,  9514,  8552,  8552,  1704,  1712,  9537,
    9560,  9589,  7489,  7586,  9612,  9637,  9670,  9693,  9716,  9739,
    1713,  1714,  9762,  9785,  7636,  1715,  1719,  1720,  1722,  1723,
    1724,  1725,   939,  7684,  9808,  9831, -1563, -1563, -1563,  1731,
     510,  1732,   514,  1739, -1563, -1563,  9854,  7830,  8102,  8150,
    9877,  9900,  8179,  8568,  1007,  1031,  1094,  1733,  1737,  8552,
    1555,  8552,  1660,  1555,  1555,  1555,  1741,  2047,  1967,  -174,
   -1563, -1563,  1953,  1750,  1751,  1754,  7554,  2088,     7,  1705,
   -1563,  7554,  8552,  1756, -1563, -1563,   -77,  8552,  1757,  1758,
    2106, 10598, 10598, -1563,  1937,  2113,  1762,  1763,  1765,  2073,
    2119,  1767,  2120,   102, -1563, -1563, -1563,  1976,  1977, -1563,
   10598, -1563, -1563,  1940,   626, -1563,  2125, -1563, -1563,  1915,
    2135, -1563,  2136, -1563, -1563, -1563,  1786,  9929, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,   627,   158,
    2144,  2146,  2149,  2151, -1563,  2154,  1807,   516,  1808,  1919,
     158, -1563,  1317,  2059,  1810,   518,  1925,   158,  2167,   280,
     570, -1563,   350,  8552,  1824,  1830,  1831,  2170,  2170,  1832,
    2106,   486,   570, 10749, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563,   806,   520,   806,   -19,    77,  1834, -1563,   582,    94,
   -1563, -1563,  7554,  1956,  2174, -1563, -1563,  7554,   523, -1563,
    2017, -1563, -1563,  7554,  8552, -1563, -1563,  8552, -1563,  9952,
   10580, -1563, -1563, -1563, -1563, -1563,  8552,  8552, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,  8552, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563,  8552,  8552, -1563,
   -1563,  1872,  1872,  1872, -1563,  1874,   813, -1563,  1875,   879,
   -1563,  1872,  1872, -1563,  8552,  8552,  8552, -1563, -1563,  8552,
    8552, -1563,  8552, -1563,  8552, -1563,  8552, -1563, -1563,  1843,
    1846,  1660,  1855,  1858,  1859, -1563,  8552,  8552,  1578,  1800,
   -1563,  2193,  2193,  2193,  8552,  8552,  2198,  1857,  7554,  2170,
   -1563,  9977,  2208,  2214, -1563,   531, -1563, -1563, 10598, -1563,
   -1563,  2213,  8552,  2215,  2181,   333,  8552, -1563, -1563, -1563,
   -1563, -1563, -1563,  1870,  1889,  1893,  8552, -1563, -1563, -1563,
    1647,  2176, -1563,  1894,  2246, -1563,   741, -1563,   741,   741,
    8552, -1563,  2200, -1563,   539,  1896,  1897,  1898,  1899, -1563,
     158, -1563,   158,  1905,   543,  1708, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563,  2064,   158, -1563,
    1907,   545,  1908,  2023,   158,   573,  1914,  2121,  2122,  1922,
   10010,  2208,  2170,  2170, -1563,   577,   585,  2214,   590,   298,
   -1563, -1563, -1563,   621, -1563, -1563, -1563, -1563,  2268, -1563,
   -1563,   110,  8552,  8552, -1563, -1563,  1917, -1563,  8086, -1563,
    8433,  1927,  2204,  1857, 10033, 10056, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, 10079, 10102, 10125,  1872,
    1872,  1872,  1872,  1872,  1872,  1123, 10148,  2230,  2131,  2131,
    2131,  1872,  1955,  1959,  1960,  1872,  1958,  1961,  1963,  1872,
    2131,  2131, 10171, 10194, 10217, 10240, 10269,  8616, 10292, 10317,
   -1563, -1563, -1563, -1563, -1563, 10918,   167,  7554,  1705,  1967,
   -1563,   630,   636,   639,  7554,  7554,  2292, -1563,   641,  2295,
   -1563,   645, -1563,   647, -1563,  2316, -1563,   649, 10350,   651,
    1965,  1966,  2171, -1563, 10373,  1968,  1969,  1982, 10396,   637,
   -1563,  2031, -1563, -1563, 10419, -1563,  2354, -1563, -1563, -1563,
   -1563,  2321,   654,   656,   158, -1563, -1563,  2677,  3000,  3323,
    3646,  3969,  4292,  2303,   730,   158, -1563,   158,  2007,   732,
     486,  8552,  2009,  2011,  2106, -1563,   736,   742,   770, -1563,
    2365, -1563,   772, -1563,   534,  2366,  2318, 10619, -1563,    77,
   -1563,  7554,  7554,  2372,  2373, -1563,  7554, -1563,  7554,  7967,
    2021, -1563, -1563, -1563, -1563, -1563, -1563,  2131,  2131,  2131,
    2131,  2131,  2131, -1563,  8552, -1563,  2380,  2329,  2035,  2037,
    2038,  2131, -1563,  2069,  2074,  2131, -1563,  2075,  2077,  2131,
    2045,  2046, -1563, -1563, -1563, -1563, -1563,  8552, -1563, -1563,
   -1563,  2209,  8552, -1563,  2282,  1578, -1563,  2408, -1563, -1563,
    8552, -1563,  2169,  2229,  2415, -1563,  2418, -1563, -1563,  2420,
     883, -1563,  2421,  8552,  8552, -1563, -1563, -1563, -1563, -1563,
   -1563,  2375, -1563,  4615, -1563, -1563,  4938, -1563,  2072, -1563,
   -1563,   774, -1563,  2361,  2312,  2288,  2279,  2184, -1563, -1563,
     861,   874,   158, -1563,   298, -1563, 10442,  2208,  2214,   876,
    2247, -1563, -1563, -1563, -1563, -1563,  2431,   293,   -75, -1563,
   -1563,  2417,  2081,   885,  2437,  2352,  2085,  2087,  2089,  2090,
    2094,  2095, 10465, -1563,  2096,  2442, -1563, -1563, -1563,  2100,
    1872,  2097,  2107,  2105,  1872,  2109,  2114,  2115, -1563, -1563,
   10488, -1563, 10918,   239,  2328,  1705, -1563,  7554, -1563,  2474,
   -1563, -1563,  2123, -1563, -1563,  2128, 10511, 10534, -1563,  5261,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,  5584,
   -1563, -1563,   887, -1563,   892,   910, -1563,  2483, -1563,  2484,
    2485,  2133,  2137,  8552,  2488, -1563,   920,   -34, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563,  2493,    77,  2145, -1563,
    2131, -1563, -1563, -1563,  2131, -1563, -1563, -1563, -1563, -1563,
    2302,  2304,  2170, -1563, -1563,  2157, -1563, -1563,   935, -1563,
    5907, -1563, -1563, -1563,  2327, -1563,   924, -1563, -1563,  2507,
    2514,  7554,  2498, -1563,  2516, -1563, -1563, -1563, -1563,  2517,
    2164,  1872,  1872,  2165,  1872,  1872,  2362,  2363,  2168,  2531,
   -1563, -1563, -1563,  2532,  2535,  2531,  2182,  2183,  8552, -1563,
    2325,    77, -1563,  2131,  2131, -1563,  2131,  2131, -1563, -1563,
   -1563,   925,   929,  2187,   931,  2191,  2344,  7554,  2373, -1563,
    2194,  2199,  2201,  2202, -1563,  2554,  2557,  2531,  2531, -1563,
    2357,  2558,  2081, -1563, -1563, -1563, -1563,   411, -1563,  2206,
     933,   941,   460,  2561,   943, -1563, -1563,    -3,  2426,   294,
     397,  2531, -1563, -1563,  2481,  2326, -1563,  2357, -1563, -1563,
     370, -1563, -1563, -1563,    10,   325,   947,   460,   460,  2412,
   -1563, -1563, -1563, -1563, -1563, -1563,     4, -1563, -1563, -1563,
      13, -1563,  2342, -1563, -1563, -1563, -1563,   460,    41,  2395,
    2396,  2403,  2404,  2572,  2573, -1563, -1563
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1563,  2497,   -80, -1563, -1563, -1563, -1563,  -824, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563,  1716,  2234, -1563,  -209,  -577,
    1211, -1563, -1272, -1563,   918, -1208, -1563, -1556, -1563,  -973,
   -1563,   988, -1165, -1563, -1563, -1256, -1563, -1563,  2124,  -255,
    -259,  2116,  -454,  1764, -1563, -1563,   540, -1563, -1563, -1563,
    1420,  1630,   337,   -64, -1563, -1563, -1563,  2490,  2022, -1563,
   -1563, -1030, -1563, -1563, -1563, -1563, -1563, -1563, -1563, -1563,
   -1115, -1563,  -751, -1563, -1563, -1563, -1563, -1563,   568,   561,
    2533,  2293, -1563,  1780, -1563,   858,  2039, -1563, -1563, -1563,
   -1563, -1563, -1563, -1563, -1563, -1039,  1364, -1563, -1563, -1563,
   -1563,   386, -1563, -1563, -1563,   908, -1563,   562, -1563,  1390,
    1379, -1530, -1551, -1562, -1358, -1246, -1563,  -976,   698,   184,
     181,  -783,  -364,  1841, -1040, -1563, -1563, -1563,  2499, -1563,
    -295, -1563,  1825,  1235, -1006, -1563, -1563, -1563, -1563,  2130,
   -1563, -1563, -1563, -1563, -1563,  2341, -1563, -1563, -1281, -1563
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -644
static const yytype_int16 yytable[] =
{
     260,  1169,  1586,  1600,  1377,  1237,  1251,   845,   475,  1181,
    1182,   473,  1245,  1200,  1588,  1007,  1008,   266,   564,   443,
     829,  1013,  1596,  1015,   829,   778,   971,  1375,  1272,   755,
    1736,   837,  1086,   293,   294,   295,   296,   297,   298,  -472,
     468,   266,  1076,  -474,  1076,  2109,  -473,    76,  1995,   110,
     709,   553,   329,   606,   607,   951,  1266,  1742,   474,   466,
     341,   342,   710,   469,   554,   583,  1386,  1387,   593,   981,
     584,   347,   348,   349,   581,   830,  2093,   351,   116,   830,
     507,  1597,  2078,  1779,  1780,  1409,   476,   142,   581,    84,
     443,   809,   492,    13,  1790,  1791,  1677,  1604,   499,   495,
    1207,  1172,  1083,   501,  1085,  2103,  1398,  1399,  1400,  1401,
    1941,   303,   780,  1274,  2105,  1275,    47,   314,  1596,  1208,
    1605,   982,   851,  1678,  1639,  1640,   289,    48,   118,  1147,
     466,    99,   315,  1650,  1651,   768,   444,   445,   446,   447,
     448,   449,   450,   810,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   496,
     964,  1027,   781,   502,  1173,   493,  1402,   304,  1942,    85,
     111,   500,   497,   974,   811,    62,   503,  1597,  2104,   442,
     140,   983,   330,  2094,   477,   143,   555,  2106,   112,   812,
     608,   141,   293,   294,   295,   296,   297,   298,   973,  1424,
    1996,  2095,  1267,   113,   299,   100,  2110,  1388,   594,   737,
    1434,  1876,  1877,  1878,  1879,  1880,  1881,  1571,   711,   117,
    1077,  1590,  1289,   952,   556,  1889,  2096,   508,   477,  1893,
     114,    13,  1593,  1897,  1250,  1435,   984,   831,   832,   838,
     839,  2079,    77,   444,   445,   446,   447,   448,   449,   450,
     864,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   603,  1074,   290,   119,
     604,   779,   101,  1686,   470,   611,   615,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   330,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   979,   643,   644,   645,  1934,   647,   648,   649,
     650,   651,   652,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   844,  1359,  1737,  1738,  1935,   670,
     671,  1290,  1761,  1291,   675,   676,  1598,   712,  1744,   680,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   972,  1376,   299,   704,   705,   706,   707,   708,   318,
     267,   472,   718,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   852,   300,  1939,   855,
     260,  2097,  -472,  1800,   267,  1668,  -474,   985,   986,  -473,
    1712,   863,  1713,  1691,  2000,   989,  1701,   818,  2003,  1403,
    1404,  1405,   509,   510,   511,   512,  1034,  1706,  1801,  2081,
    1576,  1767,  1768,  1769,  1770,  1771,  1772,   577,  1416,  2067,
    1418,  1419,   121,  1781,   275,   276,   123,  1785,    44,   125,
      73,  1789,   104,   319,   127,  1970,   107,  1060,    74,  1021,
    1022,  1023,  1717,  2034,   277,  1061,  2091,  -332,  1406,  1028,
    1029,  1030,  1031,  1718,   581,    81,    45,  2040,  2041,  1041,
    2042,  2043,  1577,  1971,   129,  2082,  1745,  1869,  2074,   310,
     570,   752,   597,  1719,   865,  2060,  2061,   967,  1859,   995,
     996,  1062,  2084,   565,   322,  1038,  2068,  1720,  2098,  1063,
     279,   841,  1746,  1804,  1039,  2083,  1721,  2092,    49,  2086,
     320,  1239,  1246,   859,   860,  1692,  2099,  1940,    87,   753,
     280,  1573,   819,  1170,   578,  1802,  1176,   861,   862,  -643,
      86,  1035,  1578,  1110,  1111,    89,   868,    94,  1724,  1865,
      95,  2100,  1064,   566,  1729,  2068,  1722,   444,   445,   446,
     447,   448,   449,   450,  1866,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
    1693,   325,    75,   122,  -332,  2069,    82,   124,    93,   278,
     126,    50,  1369,    46,  1042,   128,  1065,  1579,    51,  2070,
     889,   890,   444,   445,   446,   447,   448,   449,   450,    90,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   130,  1747,    91,   743,  1066,
     311,   571,   594,  1183,  2069,    52,  1240,  1247,   829,   105,
    1969,  2085,   567,  1047,   955,   956,  1574,   958,  2070,   744,
    1048,    53,   442,   444,   445,   446,   447,   448,   449,   450,
     608,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   131,   131,  1255,  1411,
    1422,    13,    92,   281,   490,   344,   345,  1256,  1412,  1423,
    1831,    54,  1960,   830,  1841,  1998,  1964,   491,    97,  1832,
    1855,  2062,  1049,    98,  1833,  1850,  1050,  1851,    55,  1836,
     854,    56,   102,  -643,   103,   282,  1159,   464,   465,   132,
     132,   515,   516,  1051,  2087,  2088,  2008,   264,   133,   799,
      57,    58,  1052,   134,  1067,   804,   283,   806,   748,   477,
     106,  1020,   265,   135,   284,    59,   463,   464,   465,   745,
    1974,   478,   120,  2107,  1602,  1148,   285,   714,   715,  2039,
     716,   137,  1053,   717,  1156,   444,   445,   446,   447,   448,
     449,   450,   138,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,  1087,   108,
    1088,   835,   836,   144,  1092,  1093,   263,  1094,  1079,  1080,
     273,  1099,   292,  2023,  2024,   306,  2026,  2027,  1100,  1101,
    1102,  1103,   305,  1104,  1105,  1106,   286,  1054,  1205,  1206,
    1107,  1108,   307,  1109,   479,  1209,  1210,  1643,  1644,  1112,
    1113,  1114,  1932,   308,  -300,   313,  1919,   287,   309,  1211,
    1212,   480,  1905,  1122,  1123,  1124,   312,  1125,  1213,  1212,
    1234,  1235,  1929,    60,   481,  1261,  1262,   317,  1136,  1264,
     459,   460,   461,   462,   463,   464,   465,  1137,  1138,  1139,
    1140,  1141,  1142,  1143,  1144,   321,  1145,  1335,  1336,   482,
    1146,  1338,  1339,  1431,  1235,  1569,  1235,  1594,  1273,  1152,
    1609,  1610,   288,  1647,  1648,  1060,   331,   483,  1684,  1685,
     325,  1166,   323,  1061,   921,   922,  1707,  1235,  1171,  1592,
    1715,  1235,  1726,  1235,   327,   444,   445,   446,   447,   448,
     449,   450,  1980,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   339,  1062,
    1730,  1262,  1913,  1914,  1739,  1740,   332,  1063,   333,  1217,
    1603,  1360,  1741,  1740,  1362,  1363,  1364,  1743,  1685,   444,
     445,   446,   447,   448,   449,   450,   338,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,  1000,  1001,   334,  1004,  1005,  1006,  1748,  1273,
    1064,  1009,  1010,  1011,  2010,  2011,  1014,  1806,  1807,   340,
     923,   924,  1278,  1808,  1807,  1282,  1809,  1807,  1811,  1740,
      76,  1287,  1813,  1814,  1815,  1816,  1818,  1819,  1821,  1822,
    1293,  1839,  1235,  1840,  1235,  1299,  1300,   444,   445,   446,
     447,   448,   449,   450,  1065,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     335,   444,   445,   446,   447,   448,   449,   450,   336,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1361,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,  1849,  1235,  1853,
    1235,   337,  1378,  1860,  1814,   346,    64,  1381,   353,  1861,
    1740,   488,   945,   946,   444,   445,   446,   447,   448,   449,
     450,   354,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,  1862,  1740,  1864,
    1816,  1923,  1235,   444,   445,   446,   447,   448,   449,   450,
      65,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,    66,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,  1580,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,    67,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   355,    68,  1614,   356,    69,  1615,  1930,  1235,
     788,   789,   790,   791,   357,   792,  1626,  1627,   794,   795,
     796,  1931,  1235,  1936,  1685,   800,   801,   802,  1628,   471,
     805,    70,  1945,  1610,  1983,  1235,   358,  1635,  1636,  1984,
    1814,   486,  1296,  1297,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,  1652,  1653,  1654,  1985,  1816,  1655,
    1656,   359,  1657,   360,  1658,   361,  1659,  1993,  1994,  2014,
    2015,   489,  2044,  2045,  2046,  2047,  1665,  1667,  2049,  2045,
    2072,  2045,   975,   976,  1674,  1675,  1326,  1327,  2073,  2045,
    2076,  2077,   362,   350,  2101,  2045,  1164,  1165,  1672,  1673,
     363,   364,  1688,   365,   366,   367,  1694,   368,   369,   370,
    1436,  1437,  1438,  1439,  1440,  1441,  1698,  1442,   371,  1443,
     372,   373,   374,  1444,  1445,  1446,   375,  1447,   376,   377,
    1704,  1448,  1449,  1450,  1451,  1452,   378,   379,   494,   380,
     381,   382,   383,   384,  1453,   385,   386,   387,    71,  1454,
    1455,   388,   389,  1456,  1351,  1352,   390,   391,  1457,  1458,
    1459,  1460,  1461,   392,   393,  1462,   394,  1463,  1464,  1465,
     395,   396,  1466,  1467,   397,  1468,  1469,  1470,  1353,  1354,
     398,  1471,   399,   400,   401,   402,   403,   404,   405,   406,
     407,  1472,   408,   409,   410,   411,  1473,   412,   413,   414,
     498,  1474,  1475,  1476,   415,   416,   417,   418,  1477,  1478,
     419,  1479,  1480,  1481,  1482,   420,   421,  1483,   422,  1484,
    1485,  1486,  1487,   423,  1488,   424,  1489,  1490,   425,  1491,
     426,  1492,  1493,   427,  1494,  1495,  1496,  1497,   428,   429,
     504,  1355,  1356,  1498,   430,  1499,   431,  1500,  1501,   432,
    1502,  1503,  1504,  1505,  1506,  1507,   433,  1508,  1509,  1510,
    1511,  1512,   434,   435,   436,  1513,   437,  1514,   438,  1515,
    1773,  1774,   439,   440,   441,   505,   506,   514,  1516,   517,
    1517,  1518,  1519,  1520,  1521,  1522,  1523,   518,   560,  1524,
    1525,   561,   562,   563,   569,  1526,   572,  1527,  1528,  1529,
     574,  1530,   575,  1531,   856,  1532,  1533,  1534,  1535,   580,
     585,   586,  1751,  1752,   587,   588,   589,   590,  1756,   591,
    1758,   592,  1536,  1537,  1538,   596,   599,   869,   609,   626,
     642,   646,  1539,   665,  1540,  1541,  1542,   666,   667,   668,
     669,  1543,   672,  1544,  1545,  1546,   673,   674,  1547,   677,
     678,   679,  1548,  1549,   702,  1550,  1551,  1552,  1553,   713,
     736,   738,  1554,   444,   445,   446,   447,   448,   449,   450,
     747,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     740,   756,   742,  1555,  1556,  1557,  1558,  1559,   444,   445,
     446,   447,   448,   449,   450,   749,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   757,   759,   760,   444,   445,   446,   447,   448,   449,
     450,  1856,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   761,   762,   763,
     764,  1560,  1561,  1562,  1563,  1564,  1565,   765,   766,  1287,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   767,  1882,   769,   770,   771,   772,   773,
     784,  1218,   774,   775,   776,  1219,   777,   782,   785,   786,
     793,  1436,  1437,  1438,  1439,  1440,  1441,  1900,  1442,   797,
    1443,   803,  1902,   807,  1444,  1445,  1446,   808,  1447,   813,
    1907,   814,  1448,  1449,  1450,  1451,  1452,   815,   816,   820,
     817,   821,   822,  1916,  1917,  1453,   823,   824,   825,  1220,
    1454,  1455,  1221,   826,  1456,   828,   827,   842,   847,  1457,
    1458,  1459,  1460,  1461,   849,   857,  1462,  1222,  1463,  1464,
    1465,   904,    13,  1466,  1467,   918,  1468,  1469,  1470,   919,
     920,   925,  1471,   926,   957,   927,   960,  1223,   -56,   961,
     962,   978,  1472,   965,   966,  1224,   968,  1473,   969,   987,
     970,   977,  1474,  1475,  1476,   980,   990,   991,   992,  1477,
    1478,   993,  1479,  1480,  1481,  1482,   994,   997,  1483,  1002,
    1716,  1485,  1486,  1487,  1016,  1488,  1017,  1489,  1490,  1018,
    1491,  1024,  1492,  1493,  1019,  1494,  1495,  1496,  1497,  1026,
    1036,  1037,  1040,  1043,  1498,  1044,  1499,  1046,  1500,  1501,
    1045,  1502,  1503,  1504,  1505,  1506,  1507,  1059,  1508,  1509,
    1510,  1511,  1512,  1991,  1071,  1072,  1513,  1075,  1514,  1081,
    1515,  1076,  1225,  1091,  1226,  1115,  1096,  1116,  1130,  1516,
    1117,  1517,  1518,  1519,  1520,  1521,  1522,  1523,  1132,  1118,
    1524,  1525,  1227,  1126,  1119,  1127,  1526,  1120,  1527,  1528,
    1529,  1128,  1530,  1121,  1531,  1129,  1532,  1533,  1534,  1535,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   870,  1131,  1536,  1537,  1538,  1133,   -58,  1134,  1157,
    1135,  1160,  1162,  1539,  1167,  1540,  1541,  1542,  2037,  1168,
    1177,  1178,  1543,  1179,  1544,  1545,  1546,  1180,  1201,  1547,
    1202,  1203,  1204,  1548,  1549,  1216,  1550,  1551,  1552,  1553,
    1214,  1215,  1229,  1554,  1236,  1238,   871,   444,   445,   446,
     447,   448,   449,   450,  1230,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
    1241,  1231,   878,  1243,  1232,  1248,  1244,  1233,  1249,  1252,
    1254,  1253,  1259,  1263,  1555,  1556,  1557,  1558,  1559,   444,
     445,   446,   447,   448,   449,   450,  1265,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,  1257,  1258,  1436,  1437,  1438,  1439,  1440,  1441,
    1260,  1442,  1268,  1443,  1269,  1270,  1273,  1444,  1445,  1446,
    1279,  1447,  1283,  1284,  1271,  1448,  1449,  1450,  1451,  1452,
    1285,  1301,  1560,  1561,  1562,  1563,  1564,  1565,  1453,  1302,
    1314,  1315,  1319,  1454,  1455,  1320,  1321,  1456,  1322,  1323,
    1324,  1325,  1457,  1458,  1459,  1460,  1461,  1334,  1337,  1462,
    1357,  1463,  1464,  1465,  1358,  1340,  1466,  1467,  1365,  1468,
    1469,  1470,  1366,  1367,  1370,  1471,  1371,  1372,  1374,  1384,
    1373,  1389,  1379,  1382,  1383,  1472,  1390,  1394,  1391,  1392,
    1473,  1393,  1395,  1396,  1397,  1474,  1475,  1476,  1407,  1408,
    1413,  1414,  1477,  1478,  1410,  1479,  1480,  1481,  1482,  1415,
    1417,  1483,  1420,  1834,  1485,  1486,  1487,  1425,  1488,  1426,
    1489,  1490,  1427,  1491,  1428,  1492,  1493,  1429,  1494,  1495,
    1496,  1497,  1433,  1430,  1432,  1567,  1568,  1498,  1570,  1499,
    1572,  1500,  1501,  1584,  1502,  1503,  1504,  1505,  1506,  1507,
    1581,  1508,  1509,  1510,  1511,  1512,  1582,  1583,  1587,  1513,
    1607,  1514,  1601,  1515,  1608,  1612,  1670,  1637,  1642,  1646,
    1660,  1676,  1516,  1661,  1517,  1518,  1519,  1520,  1521,  1522,
    1523,  1680,  1662,  1524,  1525,  1663,  1664,  1682,  1687,  1526,
    1689,  1527,  1528,  1529,  1690,  1530,  1695,  1531,  1700,  1532,
    1533,  1534,  1535,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,  1696,  1536,  1537,  1538,  1697,
    1703,  1702,  1705,  1708,  1709,  1710,  1539,  1711,  1540,  1541,
    1542,  1714,  1723,  1725,  1727,  1543,  1728,  1544,  1545,  1546,
    1731,  1749,  1547,  1732,  1733,  1753,  1548,  1549,  1734,  1550,
    1551,  1552,  1553,  1759,  1760,  1776,  1554,   444,   445,   446,
     447,   448,   449,   450,   902,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
    1777,  1782,  1810,  1812,  1786,   879,  1783,  1784,  1787,  1817,
    1788,  1823,  1824,  1825,  1838,  1827,  1828,  1555,  1556,  1557,
    1558,  1559,   444,   445,   446,   447,   448,   449,   450,  1829,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,  1848,   903,  1436,  1437,  1438,
    1439,  1440,  1441,  1852,  1442,  1857,  1443,  1858,  1863,  1867,
    1444,  1445,  1446,  1868,  1447,  1870,  1871,  1874,  1448,  1449,
    1450,  1451,  1452,  1883,  1885,  1560,  1561,  1562,  1563,  1564,
    1565,  1453,  1886,  1891,  1887,  1888,  1454,  1455,  1892,  1895,
    1456,  1896,  1898,  1899,  1901,  1457,  1458,  1459,  1460,  1461,
    1903,  1906,  1462,  1908,  1463,  1464,  1465,  1909,  1910,  1466,
    1467,  1911,  1468,  1469,  1470,  1912,  1915,  1918,  1471,  1922,
    1924,  1925,  1926,  1927,  1928,  1937,  1938,  1943,  1472,  1944,
    1946,  1947,  1949,  1473,  1950,  1957,  1951,  1952,  1474,  1475,
    1476,  1953,  1954,  1961,  1956,  1477,  1478,  1959,  1479,  1480,
    1481,  1482,  1963,  1962,  1483,  1965,  1837,  1485,  1486,  1487,
    1966,  1488,  1967,  1489,  1490,  1972,  1491,  1975,  1492,  1493,
    1976,  1494,  1495,  1496,  1497,  1977,  1986,  1987,  1988,  1989,
    1498,  1992,  1499,  1990,  1500,  1501,  1997,  1502,  1503,  1504,
    1505,  1506,  1507,  1999,  1508,  1509,  1510,  1511,  1512,  2006,
    2016,  2007,  1513,  2009,  1514,  2013,  1515,  2017,  2018,  2019,
    2021,  2022,  2025,  2028,  2029,  1516,  1740,  1517,  1518,  1519,
    1520,  1521,  1522,  1523,  2030,  2032,  1524,  1525,  2033,  2035,
    2036,  2038,  1526,  2048,  1527,  1528,  1529,  2050,  1530,  2051,
    1531,  2053,  1532,  1533,  1534,  1535,  2054,  2058,  2055,  2056,
    2059,  2063,  2071,  2066,  2075,  2080,  2078,  2102,  2108,  1536,
    1537,  1538,  2089,  2111,  2112,  2113,  2114,  2115,  2116,  1539,
    1669,  1540,  1541,  1542,   274,   605,  1098,  1805,  1543,  1750,
    1544,  1545,  1546,   751,   739,  1547,  1380,  1161,  1058,  1548,
    1549,   328,  1550,  1551,  1552,  1553,  2052,   846,   139,  1554,
     444,   445,   446,   447,   448,   449,   450,  1873,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   598,  1084,   880,   853,  1595,  1854,  2090,
    1575,  1591,  1025,   343,  1012,  1699,   783,     0,     0,     0,
    1555,  1556,  1557,  1558,  1559,   444,   445,   446,   447,   448,
     449,   450,   573,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,   703,
    1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,     0,  1443,
       0,     0,     0,  1444,  1445,  1446,     0,  1447,     0,     0,
       0,  1448,  1449,  1450,  1451,  1452,     0,     0,  1560,  1561,
    1562,  1563,  1564,  1565,  1453,     0,     0,     0,     0,  1454,
    1455,     0,     0,  1456,     0,     0,     0,     0,  1457,  1458,
    1459,  1460,  1461,     0,     0,  1462,     0,  1463,  1464,  1465,
       0,     0,  1466,  1467,     0,  1468,  1469,  1470,     0,     0,
       0,  1471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1472,     0,     0,     0,     0,  1473,     0,     0,     0,
       0,  1474,  1475,  1476,     0,     0,     0,     0,  1477,  1478,
       0,  1479,  1480,  1481,  1482,     0,     0,  1483,     0,  1842,
    1485,  1486,  1487,     0,  1488,     0,  1489,  1490,     0,  1491,
       0,  1492,  1493,     0,  1494,  1495,  1496,  1497,     0,     0,
       0,     0,     0,  1498,     0,  1499,     0,  1500,  1501,     0,
    1502,  1503,  1504,  1505,  1506,  1507,     0,  1508,  1509,  1510,
    1511,  1512,     0,     0,     0,  1513,     0,  1514,     0,  1515,
       0,     0,     0,     0,     0,     0,     0,     0,  1516,     0,
    1517,  1518,  1519,  1520,  1521,  1522,  1523,     0,     0,  1524,
    1525,     0,     0,     0,     0,  1526,     0,  1527,  1528,  1529,
       0,  1530,     0,  1531,     0,  1532,  1533,  1534,  1535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1536,  1537,  1538,     0,     0,     0,     0,     0,
       0,     0,  1539,     0,  1540,  1541,  1542,     0,     0,     0,
       0,  1543,     0,  1544,  1545,  1546,     0,     0,  1547,     0,
       0,     0,  1548,  1549,     0,  1550,  1551,  1552,  1553,     0,
       0,     0,  1554,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   881,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1555,  1556,  1557,  1558,  1559,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,   866,  1436,  1437,  1438,  1439,  1440,  1441,     0,
    1442,     0,  1443,     0,     0,     0,  1444,  1445,  1446,     0,
    1447,     0,     0,     0,  1448,  1449,  1450,  1451,  1452,     0,
       0,  1560,  1561,  1562,  1563,  1564,  1565,  1453,     0,     0,
       0,     0,  1454,  1455,     0,     0,  1456,     0,     0,     0,
       0,  1457,  1458,  1459,  1460,  1461,     0,     0,  1462,     0,
    1463,  1464,  1465,     0,     0,  1466,  1467,     0,  1468,  1469,
    1470,     0,     0,     0,  1471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1472,     0,     0,     0,     0,  1473,
       0,     0,     0,     0,  1474,  1475,  1476,     0,     0,     0,
       0,  1477,  1478,     0,  1479,  1480,  1481,  1482,     0,     0,
    1483,     0,  1843,  1485,  1486,  1487,     0,  1488,     0,  1489,
    1490,     0,  1491,     0,  1492,  1493,     0,  1494,  1495,  1496,
    1497,     0,     0,     0,     0,     0,  1498,     0,  1499,     0,
    1500,  1501,     0,  1502,  1503,  1504,  1505,  1506,  1507,     0,
    1508,  1509,  1510,  1511,  1512,     0,     0,     0,  1513,     0,
    1514,     0,  1515,     0,     0,     0,     0,     0,     0,     0,
       0,  1516,     0,  1517,  1518,  1519,  1520,  1521,  1522,  1523,
       0,     0,  1524,  1525,     0,     0,     0,     0,  1526,     0,
    1527,  1528,  1529,     0,  1530,     0,  1531,     0,  1532,  1533,
    1534,  1535,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1536,  1537,  1538,     0,     0,
       0,     0,     0,     0,     0,  1539,     0,  1540,  1541,  1542,
       0,     0,     0,     0,  1543,     0,  1544,  1545,  1546,     0,
       0,  1547,     0,     0,     0,  1548,  1549,     0,  1550,  1551,
    1552,  1553,     0,     0,     0,  1554,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   883,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1555,  1556,  1557,  1558,
    1559,   444,   445,   446,   447,   448,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,   872,  1436,  1437,  1438,  1439,
    1440,  1441,     0,  1442,     0,  1443,     0,     0,     0,  1444,
    1445,  1446,     0,  1447,     0,     0,     0,  1448,  1449,  1450,
    1451,  1452,     0,     0,  1560,  1561,  1562,  1563,  1564,  1565,
    1453,     0,     0,     0,     0,  1454,  1455,     0,     0,  1456,
       0,     0,     0,     0,  1457,  1458,  1459,  1460,  1461,     0,
       0,  1462,     0,  1463,  1464,  1465,     0,     0,  1466,  1467,
       0,  1468,  1469,  1470,     0,     0,     0,  1471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1472,     0,     0,
       0,     0,  1473,     0,     0,     0,     0,  1474,  1475,  1476,
       0,     0,     0,     0,  1477,  1478,     0,  1479,  1480,  1481,
    1482,     0,     0,  1483,     0,  1844,  1485,  1486,  1487,     0,
    1488,     0,  1489,  1490,     0,  1491,     0,  1492,  1493,     0,
    1494,  1495,  1496,  1497,     0,     0,     0,     0,     0,  1498,
       0,  1499,     0,  1500,  1501,     0,  1502,  1503,  1504,  1505,
    1506,  1507,     0,  1508,  1509,  1510,  1511,  1512,     0,     0,
       0,  1513,     0,  1514,     0,  1515,     0,     0,     0,     0,
       0,     0,     0,     0,  1516,     0,  1517,  1518,  1519,  1520,
    1521,  1522,  1523,     0,     0,  1524,  1525,     0,     0,     0,
       0,  1526,     0,  1527,  1528,  1529,     0,  1530,     0,  1531,
       0,  1532,  1533,  1534,  1535,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1536,  1537,
    1538,     0,     0,     0,     0,     0,     0,     0,  1539,     0,
    1540,  1541,  1542,     0,     0,     0,     0,  1543,     0,  1544,
    1545,  1546,     0,     0,  1547,     0,     0,     0,  1548,  1549,
       0,  1550,  1551,  1552,  1553,     0,     0,     0,  1554,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,   884,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1555,
    1556,  1557,  1558,  1559,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,   873,  1436,
    1437,  1438,  1439,  1440,  1441,     0,  1442,     0,  1443,     0,
       0,     0,  1444,  1445,  1446,     0,  1447,     0,     0,     0,
    1448,  1449,  1450,  1451,  1452,     0,     0,  1560,  1561,  1562,
    1563,  1564,  1565,  1453,     0,     0,     0,     0,  1454,  1455,
       0,     0,  1456,     0,     0,     0,     0,  1457,  1458,  1459,
    1460,  1461,     0,     0,  1462,     0,  1463,  1464,  1465,     0,
       0,  1466,  1467,     0,  1468,  1469,  1470,     0,     0,     0,
    1471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1472,     0,     0,     0,     0,  1473,     0,     0,     0,     0,
    1474,  1475,  1476,     0,     0,     0,     0,  1477,  1478,     0,
    1479,  1480,  1481,  1482,     0,     0,  1483,     0,  1845,  1485,
    1486,  1487,     0,  1488,     0,  1489,  1490,     0,  1491,     0,
    1492,  1493,     0,  1494,  1495,  1496,  1497,     0,     0,     0,
       0,     0,  1498,     0,  1499,     0,  1500,  1501,     0,  1502,
    1503,  1504,  1505,  1506,  1507,     0,  1508,  1509,  1510,  1511,
    1512,     0,     0,     0,  1513,     0,  1514,     0,  1515,     0,
       0,     0,     0,     0,     0,     0,     0,  1516,     0,  1517,
    1518,  1519,  1520,  1521,  1522,  1523,     0,     0,  1524,  1525,
       0,     0,     0,     0,  1526,     0,  1527,  1528,  1529,     0,
    1530,     0,  1531,     0,  1532,  1533,  1534,  1535,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1536,  1537,  1538,     0,     0,     0,     0,     0,     0,
       0,  1539,     0,  1540,  1541,  1542,     0,     0,     0,     0,
    1543,     0,  1544,  1545,  1546,     0,     0,  1547,     0,     0,
       0,  1548,  1549,     0,  1550,  1551,  1552,  1553,     0,     0,
       0,  1554,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   885,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1555,  1556,  1557,  1558,  1559,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,   874,  1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,
       0,  1443,     0,     0,     0,  1444,  1445,  1446,     0,  1447,
       0,     0,     0,  1448,  1449,  1450,  1451,  1452,     0,     0,
    1560,  1561,  1562,  1563,  1564,  1565,  1453,     0,     0,     0,
       0,  1454,  1455,     0,     0,  1456,     0,     0,     0,     0,
    1457,  1458,  1459,  1460,  1461,     0,     0,  1462,     0,  1463,
    1464,  1465,     0,     0,  1466,  1467,     0,  1468,  1469,  1470,
       0,     0,     0,  1471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1472,     0,     0,     0,     0,  1473,     0,
       0,     0,     0,  1474,  1475,  1476,     0,     0,     0,     0,
    1477,  1478,     0,  1479,  1480,  1481,  1482,     0,     0,  1483,
       0,  1846,  1485,  1486,  1487,     0,  1488,     0,  1489,  1490,
       0,  1491,     0,  1492,  1493,     0,  1494,  1495,  1496,  1497,
       0,     0,     0,     0,     0,  1498,     0,  1499,     0,  1500,
    1501,     0,  1502,  1503,  1504,  1505,  1506,  1507,     0,  1508,
    1509,  1510,  1511,  1512,     0,     0,     0,  1513,     0,  1514,
       0,  1515,     0,     0,     0,     0,     0,     0,     0,     0,
    1516,     0,  1517,  1518,  1519,  1520,  1521,  1522,  1523,     0,
       0,  1524,  1525,     0,     0,     0,     0,  1526,     0,  1527,
    1528,  1529,     0,  1530,     0,  1531,     0,  1532,  1533,  1534,
    1535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1536,  1537,  1538,     0,     0,     0,
       0,     0,     0,     0,  1539,     0,  1540,  1541,  1542,     0,
       0,     0,     0,  1543,     0,  1544,  1545,  1546,     0,     0,
    1547,     0,     0,     0,  1548,  1549,     0,  1550,  1551,  1552,
    1553,     0,     0,     0,  1554,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     891,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1555,  1556,  1557,  1558,  1559,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,   875,  1436,  1437,  1438,  1439,  1440,
    1441,     0,  1442,     0,  1443,     0,     0,     0,  1444,  1445,
    1446,     0,  1447,     0,     0,     0,  1448,  1449,  1450,  1451,
    1452,     0,     0,  1560,  1561,  1562,  1563,  1564,  1565,  1453,
       0,     0,     0,     0,  1454,  1455,     0,     0,  1456,     0,
       0,     0,     0,  1457,  1458,  1459,  1460,  1461,     0,     0,
    1462,     0,  1463,  1464,  1465,     0,     0,  1466,  1467,     0,
    1468,  1469,  1470,     0,     0,     0,  1471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1472,     0,     0,     0,
       0,  1473,     0,     0,     0,     0,  1474,  1475,  1476,     0,
       0,     0,     0,  1477,  1478,     0,  1479,  1480,  1481,  1482,
       0,     0,  1483,     0,  1847,  1485,  1486,  1487,     0,  1488,
       0,  1489,  1490,     0,  1491,     0,  1492,  1493,     0,  1494,
    1495,  1496,  1497,     0,     0,     0,     0,     0,  1498,     0,
    1499,     0,  1500,  1501,     0,  1502,  1503,  1504,  1505,  1506,
    1507,     0,  1508,  1509,  1510,  1511,  1512,     0,     0,     0,
    1513,     0,  1514,     0,  1515,     0,     0,     0,     0,     0,
       0,     0,     0,  1516,     0,  1517,  1518,  1519,  1520,  1521,
    1522,  1523,     0,     0,  1524,  1525,     0,     0,     0,     0,
    1526,     0,  1527,  1528,  1529,     0,  1530,     0,  1531,     0,
    1532,  1533,  1534,  1535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1536,  1537,  1538,
       0,     0,     0,     0,     0,     0,     0,  1539,     0,  1540,
    1541,  1542,     0,     0,     0,     0,  1543,     0,  1544,  1545,
    1546,     0,     0,  1547,     0,     0,     0,  1548,  1549,     0,
    1550,  1551,  1552,  1553,     0,     0,     0,  1554,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,   893,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1555,  1556,
    1557,  1558,  1559,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,   876,  1436,  1437,
    1438,  1439,  1440,  1441,     0,  1442,     0,  1443,     0,     0,
       0,  1444,  1445,  1446,     0,  1447,     0,     0,     0,  1448,
    1449,  1450,  1451,  1452,     0,     0,  1560,  1561,  1562,  1563,
    1564,  1565,  1453,     0,     0,     0,     0,  1454,  1455,     0,
       0,  1456,     0,     0,     0,     0,  1457,  1458,  1459,  1460,
    1461,     0,     0,  1462,     0,  1463,  1464,  1465,     0,     0,
    1466,  1467,     0,  1468,  1469,  1470,     0,     0,     0,  1471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1472,
       0,     0,     0,     0,  1473,     0,     0,     0,     0,  1474,
    1475,  1476,     0,     0,     0,     0,  1477,  1478,     0,  1479,
    1480,  1481,  1482,     0,     0,  1483,     0,  1920,  1485,  1486,
    1487,     0,  1488,     0,  1489,  1490,     0,  1491,     0,  1492,
    1493,     0,  1494,  1495,  1496,  1497,     0,     0,     0,     0,
       0,  1498,     0,  1499,     0,  1500,  1501,     0,  1502,  1503,
    1504,  1505,  1506,  1507,     0,  1508,  1509,  1510,  1511,  1512,
       0,     0,     0,  1513,     0,  1514,     0,  1515,     0,     0,
       0,     0,     0,     0,     0,     0,  1516,     0,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,     0,     0,  1524,  1525,     0,
       0,     0,     0,  1526,     0,  1527,  1528,  1529,     0,  1530,
       0,  1531,     0,  1532,  1533,  1534,  1535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1536,  1537,  1538,     0,     0,     0,     0,     0,     0,     0,
    1539,     0,  1540,  1541,  1542,     0,     0,     0,     0,  1543,
       0,  1544,  1545,  1546,     0,     0,  1547,     0,     0,     0,
    1548,  1549,     0,  1550,  1551,  1552,  1553,     0,     0,     0,
    1554,   444,   445,   446,   447,   448,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   898,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1555,  1556,  1557,  1558,  1559,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
     877,  1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,     0,
    1443,     0,     0,     0,  1444,  1445,  1446,     0,  1447,     0,
       0,     0,  1448,  1449,  1450,  1451,  1452,     0,     0,  1560,
    1561,  1562,  1563,  1564,  1565,  1453,     0,     0,     0,     0,
    1454,  1455,     0,     0,  1456,     0,     0,     0,     0,  1457,
    1458,  1459,  1460,  1461,     0,     0,  1462,     0,  1463,  1464,
    1465,     0,     0,  1466,  1467,     0,  1468,  1469,  1470,     0,
       0,     0,  1471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1472,     0,     0,     0,     0,  1473,     0,     0,
       0,     0,  1474,  1475,  1476,     0,     0,     0,     0,  1477,
    1478,     0,  1479,  1480,  1481,  1482,     0,     0,  1483,     0,
    1921,  1485,  1486,  1487,     0,  1488,     0,  1489,  1490,     0,
    1491,     0,  1492,  1493,     0,  1494,  1495,  1496,  1497,     0,
       0,     0,     0,     0,  1498,     0,  1499,     0,  1500,  1501,
       0,  1502,  1503,  1504,  1505,  1506,  1507,     0,  1508,  1509,
    1510,  1511,  1512,     0,     0,     0,  1513,     0,  1514,     0,
    1515,     0,     0,     0,     0,     0,     0,     0,     0,  1516,
       0,  1517,  1518,  1519,  1520,  1521,  1522,  1523,     0,     0,
    1524,  1525,     0,     0,     0,     0,  1526,     0,  1527,  1528,
    1529,     0,  1530,     0,  1531,     0,  1532,  1533,  1534,  1535,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1536,  1537,  1538,     0,     0,     0,     0,
       0,     0,     0,  1539,     0,  1540,  1541,  1542,     0,     0,
       0,     0,  1543,     0,  1544,  1545,  1546,     0,     0,  1547,
       0,     0,     0,  1548,  1549,     0,  1550,  1551,  1552,  1553,
       0,     0,     0,  1554,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   899,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1555,  1556,  1557,  1558,  1559,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,   882,  1436,  1437,  1438,  1439,  1440,  1441,
       0,  1442,     0,  1443,     0,     0,     0,  1444,  1445,  1446,
       0,  1447,     0,     0,     0,  1448,  1449,  1450,  1451,  1452,
       0,     0,  1560,  1561,  1562,  1563,  1564,  1565,  1453,     0,
       0,     0,     0,  1454,  1455,     0,     0,  1456,     0,     0,
       0,     0,  1457,  1458,  1459,  1460,  1461,     0,     0,  1462,
       0,  1463,  1464,  1465,     0,     0,  1466,  1467,     0,  1468,
    1469,  1470,     0,     0,     0,  1471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1472,     0,     0,     0,     0,
    1473,     0,     0,     0,     0,  1474,  1475,  1476,     0,     0,
       0,     0,  1477,  1478,     0,  1479,  1480,  1481,  1482,     0,
       0,  1483,     0,  1981,  1485,  1486,  1487,     0,  1488,     0,
    1489,  1490,     0,  1491,     0,  1492,  1493,     0,  1494,  1495,
    1496,  1497,     0,     0,     0,     0,     0,  1498,     0,  1499,
       0,  1500,  1501,     0,  1502,  1503,  1504,  1505,  1506,  1507,
       0,  1508,  1509,  1510,  1511,  1512,     0,     0,     0,  1513,
       0,  1514,     0,  1515,     0,     0,     0,     0,     0,     0,
       0,     0,  1516,     0,  1517,  1518,  1519,  1520,  1521,  1522,
    1523,     0,     0,  1524,  1525,     0,     0,     0,     0,  1526,
       0,  1527,  1528,  1529,     0,  1530,     0,  1531,     0,  1532,
    1533,  1534,  1535,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1536,  1537,  1538,     0,
       0,     0,     0,     0,     0,     0,  1539,     0,  1540,  1541,
    1542,     0,     0,     0,     0,  1543,     0,  1544,  1545,  1546,
       0,     0,  1547,     0,     0,     0,  1548,  1549,     0,  1550,
    1551,  1552,  1553,     0,     0,     0,  1554,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   900,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1555,  1556,  1557,
    1558,  1559,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,   886,  1436,  1437,  1438,
    1439,  1440,  1441,     0,  1442,     0,  1443,     0,     0,     0,
    1444,  1445,  1446,     0,  1447,     0,     0,     0,  1448,  1449,
    1450,  1451,  1452,     0,     0,  1560,  1561,  1562,  1563,  1564,
    1565,  1453,     0,     0,     0,     0,  1454,  1455,     0,     0,
    1456,     0,     0,     0,     0,  1457,  1458,  1459,  1460,  1461,
       0,     0,  1462,     0,  1463,  1464,  1465,     0,     0,  1466,
    1467,     0,  1468,  1469,  1470,     0,     0,     0,  1471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1472,     0,
       0,     0,     0,  1473,     0,     0,     0,     0,  1474,  1475,
    1476,     0,     0,     0,     0,  1477,  1478,     0,  1479,  1480,
    1481,  1482,     0,     0,  1483,     0,  1982,  1485,  1486,  1487,
       0,  1488,     0,  1489,  1490,     0,  1491,     0,  1492,  1493,
       0,  1494,  1495,  1496,  1497,     0,     0,     0,     0,     0,
    1498,     0,  1499,     0,  1500,  1501,     0,  1502,  1503,  1504,
    1505,  1506,  1507,     0,  1508,  1509,  1510,  1511,  1512,     0,
       0,     0,  1513,     0,  1514,     0,  1515,     0,     0,     0,
       0,     0,     0,     0,     0,  1516,     0,  1517,  1518,  1519,
    1520,  1521,  1522,  1523,     0,     0,  1524,  1525,     0,     0,
       0,     0,  1526,     0,  1527,  1528,  1529,     0,  1530,     0,
    1531,     0,  1532,  1533,  1534,  1535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1536,
    1537,  1538,     0,     0,     0,     0,     0,     0,     0,  1539,
       0,  1540,  1541,  1542,     0,     0,     0,     0,  1543,     0,
    1544,  1545,  1546,     0,     0,  1547,     0,     0,     0,  1548,
    1549,     0,  1550,  1551,  1552,  1553,     0,     0,     0,  1554,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,   901,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1555,  1556,  1557,  1558,  1559,     0,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   887,
    1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,     0,  1443,
       0,     0,     0,  1444,  1445,  1446,     0,  1447,     0,     0,
       0,  1448,  1449,  1450,  1451,  1452,     0,     0,  1560,  1561,
    1562,  1563,  1564,  1565,  1453,     0,     0,     0,     0,  1454,
    1455,     0,     0,  1456,     0,     0,     0,     0,  1457,  1458,
    1459,  1460,  1461,     0,     0,  1462,     0,  1463,  1464,  1465,
       0,     0,  1466,  1467,     0,  1468,  1469,  1470,     0,     0,
       0,  1471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1472,     0,     0,     0,     0,  1473,     0,     0,     0,
       0,  1474,  1475,  1476,     0,     0,     0,     0,  1477,  1478,
       0,  1479,  1480,  1481,  1482,     0,     0,  1483,     0,  2012,
    1485,  1486,  1487,     0,  1488,     0,  1489,  1490,     0,  1491,
       0,  1492,  1493,     0,  1494,  1495,  1496,  1497,     0,     0,
       0,     0,     0,  1498,     0,  1499,     0,  1500,  1501,     0,
    1502,  1503,  1504,  1505,  1506,  1507,     0,  1508,  1509,  1510,
    1511,  1512,     0,     0,     0,  1513,     0,  1514,     0,  1515,
       0,     0,     0,     0,     0,     0,     0,     0,  1516,     0,
    1517,  1518,  1519,  1520,  1521,  1522,  1523,     0,     0,  1524,
    1525,     0,     0,     0,     0,  1526,     0,  1527,  1528,  1529,
       0,  1530,     0,  1531,     0,  1532,  1533,  1534,  1535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1536,  1537,  1538,     0,     0,     0,     0,     0,
       0,     0,  1539,     0,  1540,  1541,  1542,     0,     0,     0,
       0,  1543,     0,  1544,  1545,  1546,     0,     0,  1547,     0,
       0,     0,  1548,  1549,     0,  1550,  1551,  1552,  1553,     0,
       0,     0,  1554,   145,   146,   147,   148,   149,   150,     0,
       0,     0,     0,     0,     0,     0,     0,   151,   152,     0,
       0,     0,     0,     0,     0,   153,   154,     0,   913,     0,
       0,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,  1555,  1556,  1557,  1558,  1559,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   914,     0,     0,     0,     0,     0,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,     0,     0,     0,   162,     0,
       0,  1560,  1561,  1562,  1563,  1564,  1565,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,   163,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,     0,   166,
     167,     0,     0,     0,   168,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,     0,     0,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,     0,   255,   256,   257,   258,
     145,   146,   147,   148,   149,   150,   259,     0,     0,     0,
       0,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   153,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,   612,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   444,   445,   446,   447,   448,   449,   450,   160,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,     0,   444,   445,
     446,   447,   448,   449,   450,   915,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,     0,     0,     0,   444,   445,   446,   447,
     448,   449,   450,   917,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
     145,   146,   147,   148,   149,   150,   613,     0,     0,   897,
       0,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,   164,   153,   928,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   719,     0,   720,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,   156,  1095,   937,     0,     0,   157,     0,     0,   158,
     159,     0,     0,     0,     0,     0,     0,   614,   160,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     858,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   164,     0,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,     0,   255,   256,   257,   258,     0,     0,     0,
       0,     0,     0,   259,     0,   721,     0,     0,     0,     0,
       0,     0,     0,     0,   444,   445,   446,   447,   448,   449,
     450,   938,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     0,     0,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,     0,   255,   256,   257,   258,   145,   146,   147,
     148,   149,   150,   722,     0,     0,     0,     0,     0,     0,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,     0,     0,     0,     0,     0,   444,   445,
     446,   447,   448,   449,   450,   939,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,     0,     0,     0,     0,     0,   156,     0,
       0,     0,     0,   157,     0,     0,   158,   159,     0,     0,
       0,     0,     0,     0,     0,   160,     0,   940,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,     0,     0,   145,   146,   147,   148,
     149,   150,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   153,   653,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   444,   445,   446,
     447,   448,   449,   450,   160,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   941,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,   350,     0,     0,     0,  1090,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   164,   207,     0,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,     0,
     255,   256,   257,   258,   445,   446,   447,   448,   449,   450,
     259,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,   207,     0,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   942,     0,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,     0,   255,
     256,   257,   258,   145,   146,   147,   148,   149,   150,   259,
       0,     0,     0,     0,     0,     0,     0,   151,   152,     0,
       0,     0,     0,     0,     0,   153,     0,     0,   943,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,   157,
       0,     0,   158,   159,     0,   944,     0,     0,     0,     0,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   444,   445,   446,   447,   448,   449,
     450,   950,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,     0,
       0,     0,     0,     0,   867,     0,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,   145,   146,   147,   148,   149,   150,     0,
       0,     0,     0,     0,     0,     0,     0,   151,   152,     0,
       0,     0,     0,     0,   164,   153,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,   157,
       0,     0,   158,   159,   444,   445,   446,   447,   448,   449,
     450,   160,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,     0,
       0,  1281,     0,     0,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   164,     0,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,     0,   255,   256,   257,   258,
       0,     0,     0,     0,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1306,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,  1307,     0,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,     0,   255,   256,   257,   258,
     145,   146,   147,   148,   149,   150,   259,     0,     0,     0,
       0,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   153,     0,  1318,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,   157,     0,     0,   158,
     159,     0,  1328,   446,   447,   448,   449,   450,   160,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   447,   448,   449,   450,  1286,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,     0,     0,   145,
     146,   147,   148,   149,   150,     0,     0,  1089,     0,     0,
       0,     0,     0,   151,   152,     0,     0,     0,     0,     0,
       0,   153,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,     0,   157,     0,     0,   158,   159,
     444,   445,   446,   447,   448,   449,   450,   160,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,  1755,  1344,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     164,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     0,     0,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,     0,   255,   256,   257,   258,     0,     0,  -644,
    -644,  -644,  -644,   259,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,     0,
     207,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,     0,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,     0,   255,   256,   257,   258,   145,   146,   147,   148,
     149,   150,   259,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   153,     0,
    1345,   444,   445,   446,   447,   448,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
       0,     0,   157,     0,     0,   158,   159,     0,  1346,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1757,     0,     0,  1349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,   146,   147,   148,   149,
     150,     0,     0,  1292,     0,     0,     0,     0,     0,   151,
     152,     0,     0,     0,     0,     0,     0,   153,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,     0,     0,     0,     0,   164,     0,     0,
       0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   444,   445,   446,   447,
     448,   449,   450,   160,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   164,   207,     0,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,  1294,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,     0,   207,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,     0,   255,   256,
     257,   258,     0,     0,     0,     0,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,  1350,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   444,   445,   446,
     447,   448,   449,   450,  1797,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1295,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,   888,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,   892,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   444,   445,   446,
     447,   448,   449,   450,   894,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,   895,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
     896,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,   905,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,   906,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,   907,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,   908,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,   909,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,   910,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,   911,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,   912,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,   916,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,   929,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,   930,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   444,   445,   446,
     447,   448,   449,   450,   931,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,   932,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
     933,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,   934,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,   935,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,   936,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,   947,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,   948,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,   949,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1298,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,  1303,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,  1304,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,  1305,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,  1308,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   444,   445,   446,
     447,   448,   449,   450,  1309,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1310,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1311,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,  1312,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,  1313,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,  1316,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,  1317,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,  1329,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1330,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1343,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,  1347,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,  1348,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,  1421,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,  1616,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   444,   445,   446,
     447,   448,   449,   450,  1679,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1735,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1762,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,  1763,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,  1764,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,  1765,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,  1766,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,  1775,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1792,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1793,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,     0,
       0,     0,     0,     0,  1794,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1795,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,  1184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1796,     0,     0,     0,
       0,     0,     0,     0,  1185,     0,     0,  1184,  1186,     0,
       0,  1187,     0,  1188,     0,     0,  1189,     0,     0,  1798,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1186,
       0,  1190,  1187,     0,  1188,     0,     1,  1189,  1191,  1192,
       2,     0,  1617,  1618,  1799,     0,     0,  1619,     0,  1620,
       0,     0,  1190,     0,     0,     0,     0,     0,     0,  1191,
    1192,     0,     3,     0,     0,     0,     0,     4,     0,  1193,
       0,     0,     0,     0,     0,     0,     0,  1820,     0,     0,
       5,     0,  1621,  1622,     0,  1623,  1194,     0,     0,     0,
    1193,     0,     0,     0,     0,     0,     0,     6,     7,     0,
    1826,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1195,     0,     0,  1830,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1195,  1196,     0,     0,     0,  1835,     8,     0,     0,
    1197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1196,     0,     0,     0,     0,     0,  1933,
       0,  1197,   519,   520,     0,   521,     0,   522,   523,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,  1955,   524,     0,     0,     0,     0,     0,    11,
       0,     0,  1624,  1625,     0,  1198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1968,     0,     0,    12,    13,
       0,   525,   526,   527,   528,     0,  1198,     0,     0,     0,
     529,     0,     0,    14,     0,     0,    15,     0,  1978,   530,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   531,
       0,  1979,     0,     0,     0,     0,     0,   532,     0,     0,
       0,     0,     0,     0,     0,   533,     0,     0,     0,     0,
       0,     0,   534,     0,     0,   535,     0,     0,   536,   537,
       0,     0,     0,     0,     0,     0,     0,     0,   444,   445,
     446,   447,   448,   449,   450,   538,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,     0,     0,     0,     0,     0,     0,  1596,
       0,     0,     0,     0,   539,   540,     0,     0,   541,   542,
       0,     0,     0,     0,   543,     0,   544,     0,     0,     0,
       0,   545,   546,     0,     0,     0,     0,   547,   548,     0,
       0,     0,     0,     0,   549,     0,   550,     0,     0,     0,
       0,   551,     0,     0,   443,     0,     0,     0,     0,     0,
       0,   444,   445,   446,   447,   448,   449,   450,  1597,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,   444,   445,   446,
     447,   448,   449,   450,   466,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   444,   445,   446,   447,   448,   449,   450,   959,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1151
};

static const yytype_int16 yycheck[] =
{
      80,   974,  1258,  1275,  1169,  1035,  1046,   584,   267,   985,
     986,   266,  1042,   989,  1260,   798,   799,     3,   313,     3,
     142,   804,    41,   806,   142,     5,    20,    20,  1067,   483,
    1581,     4,   856,     3,     4,     5,     6,     7,     8,     3,
     124,     3,   180,     3,   180,     4,     3,     8,    82,     3,
       6,     3,   124,   112,   113,     6,    79,  1587,   267,    43,
     140,   141,    18,   147,    16,   241,  1181,  1182,   216,    70,
     329,   151,   152,   153,   248,   197,    66,   157,     3,   197,
      18,   100,    85,  1639,  1640,  1200,   216,     3,   248,     3,
       3,    18,     3,   217,  1650,  1651,  1377,     3,     3,     3,
     235,   178,   853,     3,   855,   101,     4,     5,     6,     7,
     185,   127,     5,     3,   101,     5,   228,    36,    41,   254,
      26,   122,   246,  1379,  1332,  1333,    47,     3,     3,   953,
      43,     3,    51,  1341,  1342,   499,    10,    11,    12,    13,
      14,    15,    16,    70,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    63,
     737,     3,    55,    63,   241,    76,    64,   183,   243,    83,
     124,    76,    76,   750,   101,     3,    76,   100,   174,   259,
       9,   182,   358,   173,   358,   101,   138,   174,   142,   553,
     249,    20,     3,     4,     5,     6,     7,     8,   358,  1229,
     234,   191,   225,   157,   174,    77,   165,  1183,   356,   468,
    1240,  1767,  1768,  1769,  1770,  1771,  1772,  1247,   174,   144,
     358,  1261,   358,   174,   176,  1781,   216,   165,   358,  1785,
     184,   217,  1271,  1789,   356,  1241,   237,   355,   356,   212,
     213,   244,   203,    10,    11,    12,    13,    14,    15,    16,
     124,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   346,   844,   189,   144,
     350,   251,   144,  1388,   358,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   358,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   756,   383,   384,   385,  1857,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   583,  1149,  1582,  1583,  1858,   409,
     410,  1082,  1613,  1084,   414,   415,   355,   293,    40,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   355,   355,   174,   444,   445,   446,   447,   448,     3,
     356,   355,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   595,   357,    95,   598,
     470,    66,   356,  1665,   356,  1368,   356,   761,   762,   356,
    1430,   610,  1432,    70,  1960,   769,  1412,   241,  1964,   307,
     308,   309,   350,   351,   352,   353,   241,  1423,   251,   125,
      70,  1629,  1630,  1631,  1632,  1633,  1634,   124,  1211,    18,
    1213,  1214,     3,  1641,    46,    47,     3,  1645,   200,     3,
     228,  1649,    56,    77,     3,   206,    60,    79,   228,   813,
     814,   815,  1458,  2015,    66,    87,    86,   241,   356,   301,
     302,   303,   304,  1469,   248,   228,   228,  2023,  2024,   241,
    2026,  2027,   122,   234,     3,   181,   178,  1749,    18,     3,
       3,   158,   216,  1489,   358,  2047,  2048,   742,  1734,   784,
     785,   123,    95,    95,   108,    43,    85,  1503,   173,   131,
      88,   581,   204,  1668,    52,   211,  1512,   137,    10,  2071,
     144,   241,   241,   112,   113,   182,   191,   224,   354,   196,
     108,   241,   356,   977,   221,   358,   980,   607,   608,    43,
       0,   356,   182,   897,   898,     3,   616,   197,  1568,     5,
     144,   216,   174,   145,  1574,    85,  1552,    10,    11,    12,
      13,    14,    15,    16,    20,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     237,   355,    11,   144,   358,   164,    15,   144,   356,   191,
     144,    83,  1159,   345,   356,   144,   218,   237,    90,   178,
     357,   358,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   144,  1592,     3,   121,   251,
     144,   144,   356,   987,   164,   127,   356,   356,   142,   222,
    1902,   234,   234,    63,   714,   715,   356,   717,   178,   142,
      70,   143,   722,    10,    11,    12,    13,    14,    15,    16,
     249,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    91,    91,   143,    43,
      43,   217,     3,    35,    63,   355,   356,   152,    52,    52,
      43,   183,  1890,   197,  1714,  1957,  1894,    76,     3,    52,
    1730,  2049,   122,     3,  1700,  1725,   126,  1727,   200,  1705,
     246,   203,     3,   217,     3,    67,   965,    31,    32,   134,
     134,   357,   358,   143,  2072,  2073,  1972,   142,   142,   535,
     222,   223,   152,   147,   356,   541,    88,   543,   357,   358,
     143,   811,   157,   157,    96,   237,    30,    31,    32,   242,
    1905,    68,     3,  2101,   162,   954,   108,    13,    14,  2021,
      16,     3,   182,    19,   963,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   858,   228,
     860,   357,   358,   358,   864,   865,     3,   867,   357,   358,
       3,   871,   355,  2001,  2002,     3,  2004,  2005,   878,   879,
     880,   881,   255,   883,   884,   885,   168,   237,   357,   358,
     890,   891,    43,   893,   141,    74,    75,     4,     5,   899,
     900,   901,  1852,   356,   151,   356,  1832,   189,   178,   357,
     358,   158,  1805,   913,   914,   915,   255,   917,   357,   358,
     357,   358,  1848,   345,   171,   357,   358,     3,   928,  1058,
      26,    27,    28,    29,    30,    31,    32,   937,   938,   939,
     940,   941,   942,   943,   944,     3,   946,   357,   358,   196,
     950,   357,   358,   357,   358,   357,   358,   357,   358,   959,
     357,   358,   244,     4,     5,    79,   255,   214,   357,   358,
     355,   971,   356,    87,   357,   358,   357,   358,   978,  1263,
     357,   358,   357,   358,     3,    10,    11,    12,    13,    14,
      15,    16,  1918,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   221,   123,
     357,   358,    49,    50,   357,   358,   255,   131,   255,  1019,
     358,  1150,   357,   358,  1153,  1154,  1155,   357,   358,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   791,   792,   255,   794,   795,   796,   357,   358,
     174,   800,   801,   802,    49,    50,   805,   357,   358,     3,
     357,   358,  1072,   357,   358,  1075,   357,   358,   357,   358,
       8,  1081,   357,   358,   357,   358,   357,   358,   357,   358,
    1090,   357,   358,   357,   358,  1095,  1096,    10,    11,    12,
      13,    14,    15,    16,   218,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     255,    10,    11,    12,    13,    14,    15,    16,   255,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,  1151,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   357,   358,   357,
     358,   255,  1172,   357,   358,     9,    83,  1177,   355,   357,
     358,    45,   357,   358,    10,    11,    12,    13,    14,    15,
      16,   356,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   357,   358,   357,
     358,   357,   358,    10,    11,    12,    13,    14,    15,    16,
     127,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   143,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,  1253,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   183,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   356,   200,  1294,   356,   203,  1297,   357,   358,
     522,   523,   524,   525,   356,   527,  1306,  1307,   530,   531,
     532,   357,   358,   357,   358,   537,   538,   539,  1318,   358,
     542,   228,   357,   358,   357,   358,   356,  1327,  1328,   357,
     358,    43,   357,   358,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1344,  1345,  1346,   357,   358,  1349,
    1350,   356,  1352,   356,  1354,   356,  1356,   357,   358,   355,
     356,    45,   357,   358,   355,   356,  1366,  1367,   357,   358,
     357,   358,   752,   753,  1374,  1375,   357,   358,   357,   358,
     357,   358,   356,   249,   357,   358,   969,   970,  1372,  1373,
     356,   356,  1392,   356,   356,   356,  1396,   356,   356,   356,
       3,     4,     5,     6,     7,     8,  1406,    10,   356,    12,
     356,   356,   356,    16,    17,    18,   356,    20,   356,   356,
    1420,    24,    25,    26,    27,    28,   356,   356,    63,   356,
     356,   356,   356,   356,    37,   356,   356,   356,   345,    42,
      43,   356,   356,    46,   357,   358,   356,   356,    51,    52,
      53,    54,    55,   356,   356,    58,   356,    60,    61,    62,
     356,   356,    65,    66,   356,    68,    69,    70,   357,   358,
     356,    74,   356,   356,   356,   356,   356,   356,   356,   356,
     356,    84,   356,   356,   356,   356,    89,   356,   356,   356,
      63,    94,    95,    96,   356,   356,   356,   356,   101,   102,
     356,   104,   105,   106,   107,   356,   356,   110,   356,   112,
     113,   114,   115,   356,   117,   356,   119,   120,   356,   122,
     356,   124,   125,   356,   127,   128,   129,   130,   356,   356,
      63,   357,   358,   136,   356,   138,   356,   140,   141,   356,
     143,   144,   145,   146,   147,   148,   356,   150,   151,   152,
     153,   154,   356,   356,   356,   158,   356,   160,   356,   162,
     357,   358,   356,   356,   356,   251,   221,     3,   171,     3,
     173,   174,   175,   176,   177,   178,   179,     3,     3,   182,
     183,   178,   255,     3,   178,   188,   255,   190,   191,   192,
       3,   194,     3,   196,   358,   198,   199,   200,   201,    26,
       3,     3,  1602,  1603,     3,     3,     3,     3,  1608,     3,
    1610,     3,   215,   216,   217,     3,     3,   358,     3,   357,
     357,   357,   225,   357,   227,   228,   229,   357,   357,   357,
     357,   234,   357,   236,   237,   238,   357,   357,   241,     5,
     357,   357,   245,   246,   357,   248,   249,   250,   251,   356,
       3,     3,   255,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,   151,     3,   296,   297,   298,   299,   300,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   177,     3,     3,    10,    11,    12,    13,    14,    15,
      16,  1731,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     3,     3,     3,
       3,   354,   355,   356,   357,   358,   359,     3,     3,  1759,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,  1774,     3,   221,     3,     3,     3,
     356,    54,     5,     3,   353,    58,     5,     5,   356,   356,
     356,     3,     4,     5,     6,     7,     8,  1797,    10,    56,
      12,   356,  1802,   356,    16,    17,    18,   356,    20,     3,
    1810,     3,    24,    25,    26,    27,    28,     3,   357,     3,
     358,     3,   178,  1823,  1824,    37,   357,   178,     3,   102,
      42,    43,   105,   178,    46,     3,   255,   179,     3,    51,
      52,    53,    54,    55,     3,   357,    58,   120,    60,    61,
      62,   357,   217,    65,    66,   324,    68,    69,    70,   324,
     324,   357,    74,   324,   356,   324,   356,   140,   217,   356,
     356,   178,    84,   124,   358,   148,   152,    89,   152,     3,
     152,   151,    94,    95,    96,   151,     3,   221,   221,   101,
     102,     5,   104,   105,   106,   107,     5,     5,   110,     4,
     112,   113,   114,   115,     5,   117,     5,   119,   120,   174,
     122,   194,   124,   125,   356,   127,   128,   129,   130,   243,
     178,     3,     3,     3,   136,     3,   138,     3,   140,   141,
     178,   143,   144,   145,   146,   147,   148,     3,   150,   151,
     152,   153,   154,  1943,    55,   160,   158,    20,   160,   356,
     162,   180,   225,   357,   227,     4,   149,   324,     5,   171,
     324,   173,   174,   175,   176,   177,   178,   179,     5,   324,
     182,   183,   245,   356,   324,   356,   188,   324,   190,   191,
     192,   356,   194,   324,   196,   324,   198,   199,   200,   201,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   358,   324,   215,   216,   217,   324,   217,   356,   129,
     356,     3,   128,   225,     3,   227,   228,   229,  2018,     3,
     356,   152,   234,   152,   236,   237,   238,   356,     3,   241,
       3,   357,   357,   245,   246,    70,   248,   249,   250,   251,
     357,   357,   356,   255,   243,     3,   358,    10,    11,    12,
      13,    14,    15,    16,   356,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      52,   356,   358,   128,   356,   178,   243,   356,     3,     3,
     152,   356,   152,     3,   296,   297,   298,   299,   300,    10,
      11,    12,    13,    14,    15,    16,     4,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   356,   356,     3,     4,     5,     6,     7,     8,
     356,    10,     6,    12,     4,     4,   358,    16,    17,    18,
     193,    20,   152,     3,   356,    24,    25,    26,    27,    28,
       3,   357,   354,   355,   356,   357,   358,   359,    37,   357,
     357,   357,   357,    42,    43,   356,   356,    46,   356,   356,
     356,   356,    51,    52,    53,    54,    55,   356,   356,    58,
     357,    60,    61,    62,   357,   356,    65,    66,   357,    68,
      69,    70,    55,   136,   151,    74,   356,   356,    20,     3,
     356,   174,   356,   356,   356,    84,     3,    44,   356,   356,
      89,   356,     3,   356,     4,    94,    95,    96,   152,   152,
       5,   216,   101,   102,   194,   104,   105,   106,   107,     4,
       4,   110,   356,   112,   113,   114,   115,     3,   117,     3,
     119,   120,     3,   122,     3,   124,   125,     3,   127,   128,
     129,   130,   243,   356,   356,   106,   356,   136,   243,   138,
       3,   140,   141,     3,   143,   144,   145,   146,   147,   148,
     356,   150,   151,   152,   153,   154,   356,   356,   356,   158,
     234,   160,   358,   162,    20,   178,     3,   325,   324,   324,
     357,     3,   171,   357,   173,   174,   175,   176,   177,   178,
     179,     3,   357,   182,   183,   357,   357,     3,     5,   188,
       5,   190,   191,   192,    43,   194,   356,   196,    52,   198,
     199,   200,   201,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   356,   215,   216,   217,   356,
       4,   357,    52,   357,   357,   357,   225,   358,   227,   228,
     229,   356,   198,   356,   356,   234,   243,   236,   237,   238,
     356,     3,   241,   152,   152,   358,   245,   246,   356,   248,
     249,   250,   251,   356,    80,    55,   255,    10,    11,    12,
      13,    14,    15,    16,   295,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     179,   356,    20,    18,   356,   358,   357,   357,   357,     3,
     357,   356,   356,   152,     3,   357,   357,   296,   297,   298,
     299,   300,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    52,   357,     3,     4,     5,
       6,     7,     8,   356,    10,   356,    12,   356,     3,     3,
      16,    17,    18,    55,    20,     3,     3,   356,    24,    25,
      26,    27,    28,     3,    55,   354,   355,   356,   357,   358,
     359,    37,   357,   324,   357,   357,    42,    43,   324,   324,
      46,   324,   357,   357,   195,    51,    52,    53,    54,    55,
     128,     3,    58,   244,    60,    61,    62,   188,     3,    65,
      66,     3,    68,    69,    70,     5,     5,    52,    74,   357,
      69,   119,   144,   154,   250,   188,     5,    20,    84,   358,
       3,    89,   357,    89,   357,     3,   357,   357,    94,    95,
      96,   357,   357,   356,   358,   101,   102,   357,   104,   105,
     106,   107,   357,   356,   110,   356,   112,   113,   114,   115,
     356,   117,   357,   119,   120,   147,   122,     3,   124,   125,
     357,   127,   128,   129,   130,   357,     3,     3,     3,   356,
     136,     3,   138,   356,   140,   141,     3,   143,   144,   145,
     146,   147,   148,   358,   150,   151,   152,   153,   154,   207,
       3,   207,   158,   356,   160,   188,   162,     3,    20,     3,
       3,   357,   357,   161,   161,   171,   358,   173,   174,   175,
     176,   177,   178,   179,     3,     3,   182,   183,     3,   357,
     357,   216,   188,   356,   190,   191,   192,   356,   194,   205,
     196,   357,   198,   199,   200,   201,   357,     3,   357,   357,
       3,   204,   356,     5,     3,   139,    85,   155,   226,   215,
     216,   217,   246,   178,   178,   172,   172,     5,     5,   225,
    1369,   227,   228,   229,    87,   351,   870,  1669,   234,  1601,
     236,   237,   238,   477,   470,   241,  1176,   967,   834,   245,
     246,   111,   248,   249,   250,   251,  2038,   585,    75,   255,
      10,    11,    12,    13,    14,    15,    16,  1759,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   340,   854,   358,   597,  1273,  1730,  2077,
    1250,  1262,   817,   144,   803,  1410,   516,    -1,    -1,    -1,
     296,   297,   298,   299,   300,    10,    11,    12,    13,    14,
      15,    16,   321,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   357,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   354,   355,
     356,   357,   358,   359,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    95,    96,    -1,    -1,    -1,    -1,   101,   102,
      -1,   104,   105,   106,   107,    -1,    -1,   110,    -1,   112,
     113,   114,   115,    -1,   117,    -1,   119,   120,    -1,   122,
      -1,   124,   125,    -1,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,   136,    -1,   138,    -1,   140,   141,    -1,
     143,   144,   145,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
     173,   174,   175,   176,   177,   178,   179,    -1,    -1,   182,
     183,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,
      -1,   194,    -1,   196,    -1,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,   227,   228,   229,    -1,    -1,    -1,
      -1,   234,    -1,   236,   237,   238,    -1,    -1,   241,    -1,
      -1,    -1,   245,   246,    -1,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,   298,   299,   300,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   357,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,   354,   355,   356,   357,   358,   359,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    -1,    -1,    -1,
      -1,   101,   102,    -1,   104,   105,   106,   107,    -1,    -1,
     110,    -1,   112,   113,   114,   115,    -1,   117,    -1,   119,
     120,    -1,   122,    -1,   124,   125,    -1,   127,   128,   129,
     130,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,    -1,
     140,   141,    -1,   143,   144,   145,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,   174,   175,   176,   177,   178,   179,
      -1,    -1,   182,   183,    -1,    -1,    -1,    -1,   188,    -1,
     190,   191,   192,    -1,   194,    -1,   196,    -1,   198,   199,
     200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,   216,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,   227,   228,   229,
      -1,    -1,    -1,    -1,   234,    -1,   236,   237,   238,    -1,
      -1,   241,    -1,    -1,    -1,   245,   246,    -1,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,   297,   298,   299,
     300,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   357,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,   354,   355,   356,   357,   358,   359,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,   106,
     107,    -1,    -1,   110,    -1,   112,   113,   114,   115,    -1,
     117,    -1,   119,   120,    -1,   122,    -1,   124,   125,    -1,
     127,   128,   129,   130,    -1,    -1,    -1,    -1,    -1,   136,
      -1,   138,    -1,   140,   141,    -1,   143,   144,   145,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,    -1,
      -1,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   171,    -1,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,   182,   183,    -1,    -1,    -1,
      -1,   188,    -1,   190,   191,   192,    -1,   194,    -1,   196,
      -1,   198,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     227,   228,   229,    -1,    -1,    -1,    -1,   234,    -1,   236,
     237,   238,    -1,    -1,   241,    -1,    -1,    -1,   245,   246,
      -1,   248,   249,   250,   251,    -1,    -1,    -1,   255,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,   298,   299,   300,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   357,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,   354,   355,   356,
     357,   358,   359,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    -1,    -1,    -1,    -1,   101,   102,    -1,
     104,   105,   106,   107,    -1,    -1,   110,    -1,   112,   113,
     114,   115,    -1,   117,    -1,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,   128,   129,   130,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,    -1,   140,   141,    -1,   143,
     144,   145,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
     174,   175,   176,   177,   178,   179,    -1,    -1,   182,   183,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,    -1,
     194,    -1,   196,    -1,   198,   199,   200,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,
     234,    -1,   236,   237,   238,    -1,    -1,   241,    -1,    -1,
      -1,   245,   246,    -1,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,   297,   298,   299,   300,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   357,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
     354,   355,   356,   357,   358,   359,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    -1,    -1,    -1,    -1,
     101,   102,    -1,   104,   105,   106,   107,    -1,    -1,   110,
      -1,   112,   113,   114,   115,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,    -1,   127,   128,   129,   130,
      -1,    -1,    -1,    -1,    -1,   136,    -1,   138,    -1,   140,
     141,    -1,   143,   144,   145,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,    -1,    -1,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,   174,   175,   176,   177,   178,   179,    -1,
      -1,   182,   183,    -1,    -1,    -1,    -1,   188,    -1,   190,
     191,   192,    -1,   194,    -1,   196,    -1,   198,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,   227,   228,   229,    -1,
      -1,    -1,    -1,   234,    -1,   236,   237,   238,    -1,    -1,
     241,    -1,    -1,    -1,   245,   246,    -1,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   357,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,   354,   355,   356,   357,   358,   359,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    95,    96,    -1,
      -1,    -1,    -1,   101,   102,    -1,   104,   105,   106,   107,
      -1,    -1,   110,    -1,   112,   113,   114,   115,    -1,   117,
      -1,   119,   120,    -1,   122,    -1,   124,   125,    -1,   127,
     128,   129,   130,    -1,    -1,    -1,    -1,    -1,   136,    -1,
     138,    -1,   140,   141,    -1,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,    -1,    -1,
     158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,   174,   175,   176,   177,
     178,   179,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,
     188,    -1,   190,   191,   192,    -1,   194,    -1,   196,    -1,
     198,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,   227,
     228,   229,    -1,    -1,    -1,    -1,   234,    -1,   236,   237,
     238,    -1,    -1,   241,    -1,    -1,    -1,   245,   246,    -1,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,
     298,   299,   300,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   357,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,   354,   355,   356,   357,
     358,   359,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    -1,    -1,    -1,    -1,   101,   102,    -1,   104,
     105,   106,   107,    -1,    -1,   110,    -1,   112,   113,   114,
     115,    -1,   117,    -1,   119,   120,    -1,   122,    -1,   124,
     125,    -1,   127,   128,   129,   130,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   138,    -1,   140,   141,    -1,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,    -1,    -1,   158,    -1,   160,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,
     175,   176,   177,   178,   179,    -1,    -1,   182,   183,    -1,
      -1,    -1,    -1,   188,    -1,   190,   191,   192,    -1,   194,
      -1,   196,    -1,   198,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,   234,
      -1,   236,   237,   238,    -1,    -1,   241,    -1,    -1,    -1,
     245,   246,    -1,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,   298,   299,   300,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     357,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,   354,
     355,   356,   357,   358,   359,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    95,    96,    -1,    -1,    -1,    -1,   101,
     102,    -1,   104,   105,   106,   107,    -1,    -1,   110,    -1,
     112,   113,   114,   115,    -1,   117,    -1,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,   128,   129,   130,    -1,
      -1,    -1,    -1,    -1,   136,    -1,   138,    -1,   140,   141,
      -1,   143,   144,   145,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,   174,   175,   176,   177,   178,   179,    -1,    -1,
     182,   183,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,
     192,    -1,   194,    -1,   196,    -1,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,   216,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,   227,   228,   229,    -1,    -1,
      -1,    -1,   234,    -1,   236,   237,   238,    -1,    -1,   241,
      -1,    -1,    -1,   245,   246,    -1,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   358,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   357,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,   354,   355,   356,   357,   358,   359,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    -1,    -1,
      -1,    -1,   101,   102,    -1,   104,   105,   106,   107,    -1,
      -1,   110,    -1,   112,   113,   114,   115,    -1,   117,    -1,
     119,   120,    -1,   122,    -1,   124,   125,    -1,   127,   128,
     129,   130,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
      -1,   140,   141,    -1,   143,   144,   145,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,    -1,    -1,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,   174,   175,   176,   177,   178,
     179,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,   188,
      -1,   190,   191,   192,    -1,   194,    -1,   196,    -1,   198,
     199,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,   227,   228,
     229,    -1,    -1,    -1,    -1,   234,    -1,   236,   237,   238,
      -1,    -1,   241,    -1,    -1,    -1,   245,   246,    -1,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,   298,
     299,   300,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,   357,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,   354,   355,   356,   357,   358,
     359,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,
     106,   107,    -1,    -1,   110,    -1,   112,   113,   114,   115,
      -1,   117,    -1,   119,   120,    -1,   122,    -1,   124,   125,
      -1,   127,   128,   129,   130,    -1,    -1,    -1,    -1,    -1,
     136,    -1,   138,    -1,   140,   141,    -1,   143,   144,   145,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
      -1,    -1,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,   175,
     176,   177,   178,   179,    -1,    -1,   182,   183,    -1,    -1,
      -1,    -1,   188,    -1,   190,   191,   192,    -1,   194,    -1,
     196,    -1,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
     216,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   227,   228,   229,    -1,    -1,    -1,    -1,   234,    -1,
     236,   237,   238,    -1,    -1,   241,    -1,    -1,    -1,   245,
     246,    -1,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     296,   297,   298,   299,   300,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   357,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,   354,   355,
     356,   357,   358,   359,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    95,    96,    -1,    -1,    -1,    -1,   101,   102,
      -1,   104,   105,   106,   107,    -1,    -1,   110,    -1,   112,
     113,   114,   115,    -1,   117,    -1,   119,   120,    -1,   122,
      -1,   124,   125,    -1,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,   136,    -1,   138,    -1,   140,   141,    -1,
     143,   144,   145,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
     173,   174,   175,   176,   177,   178,   179,    -1,    -1,   182,
     183,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,
      -1,   194,    -1,   196,    -1,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,   227,   228,   229,    -1,    -1,    -1,
      -1,   234,    -1,   236,   237,   238,    -1,    -1,   241,    -1,
      -1,    -1,   245,   246,    -1,   248,   249,   250,   251,    -1,
      -1,    -1,   255,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,   296,   297,   298,   299,   300,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,   358,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    98,    -1,
      -1,   354,   355,   356,   357,   358,   359,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,   134,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,   209,
     210,    -1,    -1,    -1,   214,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,    -1,   294,    -1,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,    -1,    -1,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    -1,   346,   347,   348,   349,
       3,     4,     5,     6,     7,     8,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    81,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   358,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
       3,     4,     5,     6,     7,     8,   159,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,   174,    25,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    64,   124,   358,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,   230,    81,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     229,   294,    -1,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   174,    -1,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    -1,   346,   347,   348,   349,    -1,    -1,    -1,
      -1,    -1,    -1,   356,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   358,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
      -1,   294,    -1,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,    -1,    -1,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    -1,   346,   347,   348,   349,     3,     4,     5,
       6,     7,     8,   356,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,    12,
      13,    14,    15,    16,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   358,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,    -1,    -1,    -1,   229,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   174,   294,    -1,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    -1,    -1,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    -1,
     346,   347,   348,   349,    11,    12,    13,    14,    15,    16,
     356,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,    -1,   294,    -1,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   358,    -1,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    -1,   346,
     347,   348,   349,     3,     4,     5,     6,     7,     8,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,   358,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    -1,   358,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   358,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,   174,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    10,    11,    12,    13,    14,    15,
      16,    81,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,    -1,   294,    -1,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   174,    -1,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    -1,   346,   347,   348,   349,
      -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,    -1,   294,    -1,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   358,    -1,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    -1,   346,   347,   348,   349,
       3,     4,     5,     6,     7,     8,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,   358,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,   358,    12,    13,    14,    15,    16,    81,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    13,    14,    15,    16,   101,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      10,    11,    12,    13,    14,    15,    16,    81,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,   101,   358,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     174,   294,    -1,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,    -1,    -1,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    -1,   346,   347,   348,   349,    -1,    -1,    13,
      14,    15,    16,   356,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,    -1,
     294,    -1,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      -1,    -1,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,    -1,   346,   347,   348,   349,     3,     4,     5,     6,
       7,     8,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
     358,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    10,    11,    12,    13,
      14,    15,    16,    81,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   174,   294,    -1,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    -1,    -1,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   128,   346,
     347,   348,   349,    -1,    -1,    -1,    -1,    -1,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,    -1,   294,    -1,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    -1,    -1,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    -1,   346,   347,
     348,   349,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   358,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   358,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
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
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   357,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   357,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   357,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   357,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   357,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   357,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   357,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,   357,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,   357,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    13,    14,    15,    16,   357,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    13,    14,
      15,    16,   357,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    18,    40,    -1,
      -1,    43,    -1,    45,    -1,    -1,    48,    -1,    -1,   357,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    63,    43,    -1,    45,    -1,    34,    48,    70,    71,
      38,    -1,    92,    93,   357,    -1,    -1,    97,    -1,    99,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    60,    -1,    -1,    -1,    -1,    65,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,
      78,    -1,   132,   133,    -1,   135,   118,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   174,    -1,    -1,    -1,   357,   145,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,   357,
      -1,   182,    53,    54,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,   189,   357,    74,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,   252,   253,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,   216,   217,
      -1,   102,   103,   104,   105,    -1,   237,    -1,    -1,    -1,
     111,    -1,    -1,   231,    -1,    -1,   234,    -1,   357,   120,
      -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   357,    -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,    -1,   163,    -1,    -1,   166,    -1,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   186,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,   225,    -1,   227,    -1,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,   238,   239,    -1,
      -1,    -1,    -1,    -1,   245,    -1,   247,    -1,    -1,    -1,
      -1,   252,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   100,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    43,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    42,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    34,    38,    60,    65,    78,    95,    96,   145,   187,
     189,   197,   216,   217,   231,   234,   242,   361,   397,   398,
     435,   439,   440,   443,   444,   447,   448,   449,   451,   467,
     468,   477,   480,   482,   483,   484,   506,   509,   516,   517,
     520,   523,   524,   527,   200,   228,   345,   228,     3,    10,
      83,    90,   127,   143,   183,   200,   203,   222,   223,   237,
     345,   488,     3,   436,    83,   127,   143,   183,   200,   203,
     228,   345,   459,   228,   228,   459,     8,   203,   507,   508,
     416,   228,   459,   478,     3,    83,     0,   354,   446,     3,
       3,     3,     3,   356,   197,   144,   481,     3,     3,     3,
      77,   144,     3,     3,   481,   222,   143,   481,   228,   469,
       3,   124,   142,   157,   184,   437,     3,   144,     3,   144,
       3,     3,   144,     3,   144,     3,   144,     3,   144,     3,
     144,    91,   134,   142,   147,   157,   460,     3,     3,   460,
       9,    20,     3,   101,   358,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    37,    64,    69,    72,    73,
      81,    94,    98,   134,   174,   202,   209,   210,   214,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   294,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   346,   347,   348,   349,   356,
     362,   417,   418,     3,   142,   157,     3,   356,   420,   421,
     422,   424,   434,     3,   361,    46,    47,    66,   191,    88,
     108,    35,    67,    88,    96,   108,   168,   189,   244,    47,
     189,   525,   355,     3,     4,     5,     6,     7,     8,   174,
     357,   518,   519,   127,   183,   255,     3,    43,   356,   178,
       3,   144,   255,   356,    36,    51,   521,     3,     3,    77,
     144,     3,   481,   356,   470,   355,   438,     3,   437,   124,
     358,   255,   255,   255,   255,   255,   255,   255,     3,   221,
       3,   362,   362,   508,   355,   356,     9,   362,   362,   362,
     249,   362,   396,   355,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   362,     3,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    43,   419,   124,   147,
     358,   358,   355,   419,   398,   420,   216,   358,    68,   141,
     158,   171,   196,   214,   425,   427,    43,   423,    45,    45,
      63,    76,     3,    76,    63,     3,    63,    76,    63,     3,
      76,     3,    63,    76,    63,   251,   221,    18,   165,   350,
     351,   352,   353,   526,     3,   357,   358,     3,     3,    53,
      54,    56,    58,    59,    74,   102,   103,   104,   105,   111,
     120,   140,   148,   156,   163,   166,   169,   170,   186,   215,
     216,   219,   220,   225,   227,   232,   233,   238,   239,   245,
     247,   252,   502,     3,    16,   138,   176,   510,   511,   512,
       3,   178,   255,     3,   510,    95,   145,   234,   522,   178,
       3,   144,   255,   525,     3,     3,   471,   124,   221,   472,
      26,   248,   399,   241,   420,     3,     3,     3,     3,     3,
       3,     3,     3,   216,   356,   461,     3,   216,   461,     3,
     362,   367,   368,   362,   362,   396,   112,   113,   249,     3,
     373,   362,    57,   159,   230,   362,   394,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   357,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   357,   362,   362,   362,   357,   362,   362,   362,
     362,   362,   362,    26,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   357,   357,   357,   357,   357,
     362,   362,   357,   357,   357,   362,   362,     5,   357,   357,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   357,   357,   362,   362,   362,   362,   362,     6,
      18,   174,   293,   356,    13,    14,    16,    19,   362,    37,
      39,   208,   356,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,     3,   420,     3,   418,
       3,   445,     3,   121,   142,   242,   431,   357,   357,     3,
     479,   421,   158,   196,   428,   422,   151,   177,   426,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   502,     3,
     221,     3,     3,     3,     5,     3,   353,     5,     5,   251,
       5,    55,     5,   519,   356,   356,   356,   498,   498,   498,
     498,   498,   498,   356,   498,   498,   498,    56,   499,   499,
     498,   498,   498,   356,   499,   498,   499,   356,   356,    18,
      70,   101,   502,     3,     3,     3,   357,   358,   241,   356,
       3,     3,   178,   357,   178,     3,   178,   255,     3,   142,
     197,   355,   356,   504,   505,   357,   358,     4,   212,   213,
     473,   362,   179,   409,   420,   399,   438,     3,   466,     3,
     462,   246,   398,   466,   246,   398,   358,   357,   229,   112,
     113,   362,   362,   398,   124,   358,   357,   124,   362,   358,
     358,   358,   357,   357,   357,   357,   357,   357,   358,   358,
     358,   358,   357,   358,   358,   358,   357,   357,   357,   357,
     358,   358,   357,   358,   357,   357,   357,    43,   358,   358,
     358,   358,   295,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   358,   358,   358,   357,   358,   324,   324,
     324,   357,   358,   357,   358,   357,   324,   324,   358,   357,
     357,   357,   357,   357,   357,   357,   357,   358,   358,   358,
     358,   358,   358,   358,   358,   357,   358,   357,   357,   357,
     358,     6,   174,   369,   371,   362,   362,   356,   362,    42,
     356,   356,   356,   363,   399,   124,   358,   419,   152,   152,
     152,    20,   355,   358,   399,   426,   426,   151,   178,   422,
     151,    70,   122,   182,   237,   502,   502,     3,   497,   502,
       3,   221,   221,     5,     5,   510,   510,     5,   500,   501,
     500,   500,     4,   503,   500,   500,   500,   501,   501,   500,
     500,   500,   503,   501,   500,   501,     5,     5,   174,   356,
     362,   502,   502,   502,   194,   512,   243,     3,   301,   302,
     303,   304,   441,   442,   241,   356,   178,     3,    43,    52,
       3,   241,   356,     3,     3,   178,     3,    63,    70,   122,
     126,   143,   152,   182,   237,   489,   490,   496,   423,     3,
      79,    87,   123,   131,   174,   218,   251,   356,   474,   475,
     476,    55,   160,   412,   399,    20,   180,   358,   452,   357,
     358,   356,   463,   452,   463,   452,   367,   362,   362,   112,
     229,   357,   362,   362,   362,   124,   149,   395,   395,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     502,   502,   362,   362,   362,     4,   324,   324,   324,   324,
     324,   324,   362,   362,   362,   362,   356,   356,   356,   324,
       5,   324,     5,   324,   356,   356,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   367,   398,   370,
     372,    42,   362,   366,   364,   365,   398,   129,   400,   420,
       3,   431,   128,   432,   432,   432,   362,     3,     3,   409,
     422,   362,   178,   241,   429,   430,   422,   356,   152,   152,
     356,   497,   497,   502,    18,    36,    40,    43,    45,    48,
      63,    70,    71,   101,   118,   152,   174,   182,   237,   450,
     497,     3,     3,   357,   357,   357,   358,   235,   254,    74,
      75,   357,   358,   357,   357,   357,    70,   362,    54,    58,
     102,   105,   120,   140,   148,   225,   227,   245,   513,   356,
     356,   356,   356,   356,   357,   358,   243,   441,     3,   241,
     356,    52,   514,   128,   243,   441,   241,   356,   178,     3,
     356,   504,     3,   356,   152,   143,   152,   356,   356,   152,
     356,   357,   358,     3,   398,     4,    79,   225,     6,     4,
       4,   356,   475,   358,     3,     5,   410,   411,   362,   193,
     528,   101,   362,   152,     3,     3,   101,   362,   465,   358,
     452,   452,   112,   362,   128,   357,   357,   358,   357,   362,
     362,   357,   357,   357,   357,   357,   358,   358,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   358,   357,
     356,   356,   356,   356,   356,   356,   357,   358,   358,   357,
     357,   374,   375,   376,   356,   357,   358,   356,   357,   358,
     356,   392,   393,   357,   358,   358,   358,   357,   357,   358,
     358,   357,   358,   357,   358,   357,   358,   357,   357,   367,
     398,   362,   398,   398,   398,   357,    55,   136,   404,   399,
     151,   356,   356,   356,    20,    20,   355,   412,   362,   356,
     430,   362,   356,   356,     3,   495,   450,   450,   497,   174,
       3,   356,   356,   356,    44,     3,   356,     4,     4,     5,
       6,     7,    64,   307,   308,   309,   356,   152,   152,   450,
     194,    43,    52,     5,   216,     4,   501,     4,   501,   501,
     356,   357,    43,    52,   441,     3,     3,     3,     3,     3,
     356,   357,   356,   243,   441,   514,     3,     4,     5,     6,
       7,     8,    10,    12,    16,    17,    18,    20,    24,    25,
      26,    27,    28,    37,    42,    43,    46,    51,    52,    53,
      54,    55,    58,    60,    61,    62,    65,    66,    68,    69,
      70,    74,    84,    89,    94,    95,    96,   101,   102,   104,
     105,   106,   107,   110,   112,   113,   114,   115,   117,   119,
     120,   122,   124,   125,   127,   128,   129,   130,   136,   138,
     140,   141,   143,   144,   145,   146,   147,   148,   150,   151,
     152,   153,   154,   158,   160,   162,   171,   173,   174,   175,
     176,   177,   178,   179,   182,   183,   188,   190,   191,   192,
     194,   196,   198,   199,   200,   201,   215,   216,   217,   225,
     227,   228,   229,   234,   236,   237,   238,   241,   245,   246,
     248,   249,   250,   251,   255,   296,   297,   298,   299,   300,
     354,   355,   356,   357,   358,   359,   515,   106,   356,   357,
     243,   441,     3,   241,   356,   489,    70,   122,   182,   237,
     362,   356,   356,   356,     3,   415,   415,   356,   495,   485,
     504,   490,   502,   475,   357,   476,    41,   100,   355,   402,
     402,   358,   162,   358,     3,    26,   529,   234,    20,   357,
     358,   464,   178,   454,   362,   362,   357,    92,    93,    97,
      99,   132,   133,   135,   252,   253,   362,   362,   362,   378,
     379,   377,   380,   381,   382,   362,   362,   325,   405,   405,
     405,   383,   324,     4,     5,   387,   324,     4,     5,   391,
     405,   405,   362,   362,   362,   362,   362,   362,   362,   362,
     357,   357,   357,   357,   357,   362,   401,   362,   409,   400,
       3,   433,   433,   433,   362,   362,     3,   528,   415,   357,
       3,   492,     3,   491,   357,   358,   450,     5,   362,     5,
      43,    70,   182,   237,   362,   356,   356,   356,   362,   513,
      52,   514,   357,     4,   362,    52,   514,   357,   357,   357,
     357,   358,   441,   441,   356,   357,   112,   514,   514,   514,
     514,   514,   514,   198,   441,   356,   357,   356,   243,   441,
     357,   356,   152,   152,   356,   357,   492,   415,   415,   357,
     358,   357,   491,   357,    40,   178,   204,   497,   357,     3,
     411,   362,   362,   358,   453,   101,   362,   101,   362,   356,
      80,   528,   357,   357,   357,   357,   357,   405,   405,   405,
     405,   405,   405,   357,   358,   357,    55,   179,   407,   407,
     407,   405,   356,   357,   357,   405,   356,   357,   357,   405,
     407,   407,   357,   357,   357,   357,   357,   358,   357,   357,
     402,   251,   358,   403,   412,   404,   357,   358,   357,   357,
      20,   357,    18,   357,   358,   357,   358,     3,   357,   358,
     357,   357,   358,   356,   356,   152,   357,   357,   357,   357,
     357,    43,    52,   514,   112,   357,   514,   112,     3,   357,
     357,   441,   112,   112,   112,   112,   112,   112,    52,   357,
     441,   441,   356,   357,   485,   504,   362,   356,   356,   495,
     357,   357,   357,     3,   357,     5,    20,     3,    55,   402,
       3,     3,   458,   465,   356,   455,   407,   407,   407,   407,
     407,   407,   362,     3,   406,    55,   357,   357,   357,   407,
     384,   324,   324,   407,   388,   324,   324,   407,   357,   357,
     362,   195,   362,   128,   413,   409,     3,   362,   244,   188,
       3,     3,     5,    49,    50,     5,   362,   362,    52,   514,
     112,   112,   357,   357,    69,   119,   144,   154,   250,   514,
     357,   357,   441,   357,   492,   491,   357,   188,     5,    95,
     224,   185,   243,    20,   358,   357,     3,    89,   456,   357,
     357,   357,   357,   357,   357,   357,   358,     3,   408,   357,
     405,   356,   356,   357,   405,   356,   356,   357,   357,   402,
     206,   234,   147,   414,   412,     3,   357,   357,   357,   357,
     514,   112,   112,   357,   357,   357,     3,     3,     3,   356,
     356,   362,     3,   357,   358,    82,   234,     3,   402,   358,
     407,   385,   386,   407,   389,   390,   207,   207,   415,   356,
      49,    50,   112,   188,   355,   356,     3,     3,    20,     3,
     457,     3,   357,   405,   405,   357,   405,   405,   161,   161,
       3,   493,     3,     3,   493,   357,   357,   362,   216,   402,
     407,   407,   407,   407,   357,   358,   355,   356,   356,   357,
     356,   205,   458,   357,   357,   357,   357,   494,     3,     3,
     493,   493,   494,   204,   486,   487,     5,    18,    85,   164,
     178,   356,   357,   357,    18,     3,   357,   358,    85,   244,
     139,   125,   181,   211,    95,   234,   493,   494,   494,   246,
     487,    86,   137,    66,   173,   191,   216,    66,   173,   191,
     216,   357,   155,   101,   174,   101,   174,   494,   226,     4,
     165,   178,   178,   172,   172,     5,     5
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
#line 431 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 437 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 438 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 439 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 8:
#line 441 "parser/evoparser.y"
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

  case 9:
#line 459 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 10:
#line 467 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 11:
#line 475 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 12:
#line 481 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 13:
#line 488 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 489 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 490 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 491 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 492 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 493 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 494 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 20:
#line 495 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 21:
#line 496 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 497 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 498 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 499 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 500 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 501 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 502 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 503 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 504 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 505 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 31:
#line 506 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 508 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 33:
#line 513 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 34:
#line 514 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("CMPSELECT %d", (yyvsp[(2) - (6)].subtok));
        ExprNode *sub = expr_make_subquery(sql);
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), sub);
        free(sql);
    ;}
    break;

  case 35:
#line 522 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 36:
#line 523 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 37:
#line 524 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 38:
#line 525 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 39:
#line 526 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 40:
#line 527 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 41:
#line 530 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 42:
#line 531 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 43:
#line 532 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 44:
#line 533 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 45:
#line 534 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 46:
#line 537 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 47:
#line 538 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 48:
#line 541 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 49:
#line 542 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 50:
#line 545 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 52:
#line 549 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 53:
#line 549 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 54:
#line 550 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 55:
#line 550 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 56:
#line 551 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 57:
#line 552 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 58:
#line 559 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 59:
#line 560 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 60:
#line 567 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 61:
#line 568 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 62:
#line 578 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 63:
#line 582 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 64:
#line 583 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 584 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 585 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 586 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 587 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 588 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 70:
#line 589 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 71:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 72:
#line 594 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 73:
#line 595 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 74:
#line 596 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 75:
#line 597 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 76:
#line 598 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 77:
#line 600 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 78:
#line 601 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 79:
#line 602 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 80:
#line 603 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 81:
#line 604 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 82:
#line 605 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 83:
#line 606 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 84:
#line 607 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 85:
#line 608 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 86:
#line 609 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 87:
#line 610 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 88:
#line 611 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 89:
#line 613 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 90:
#line 614 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 91:
#line 615 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 92:
#line 616 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 93:
#line 617 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 94:
#line 618 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 95:
#line 619 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 96:
#line 620 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 97:
#line 621 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 98:
#line 622 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 99:
#line 623 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 100:
#line 624 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 101:
#line 625 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 102:
#line 626 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 103:
#line 627 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 104:
#line 628 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 105:
#line 630 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 106:
#line 631 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 107:
#line 632 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 108:
#line 633 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 109:
#line 634 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 110:
#line 635 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 111:
#line 638 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 639 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 113:
#line 640 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 114:
#line 641 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 115:
#line 642 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 643 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 117:
#line 644 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 118:
#line 645 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 119:
#line 646 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 647 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 121:
#line 648 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 122:
#line 649 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 123:
#line 650 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 124:
#line 651 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 125:
#line 652 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 126:
#line 653 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 127:
#line 654 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 128:
#line 655 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 129:
#line 656 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 130:
#line 657 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 131:
#line 658 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 132:
#line 659 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 133:
#line 660 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 134:
#line 661 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 135:
#line 662 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 136:
#line 663 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 137:
#line 664 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 138:
#line 665 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 139:
#line 666 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 140:
#line 667 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 141:
#line 668 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 142:
#line 669 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 143:
#line 670 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 144:
#line 671 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 145:
#line 673 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 146:
#line 674 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 147:
#line 675 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 148:
#line 676 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 149:
#line 677 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 150:
#line 678 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 151:
#line 679 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 152:
#line 680 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 153:
#line 682 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 154:
#line 683 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 155:
#line 684 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 156:
#line 685 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 157:
#line 686 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 158:
#line 687 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 159:
#line 688 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 160:
#line 689 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 161:
#line 690 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 162:
#line 691 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 163:
#line 692 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 164:
#line 693 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 165:
#line 694 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 166:
#line 695 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 167:
#line 696 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 168:
#line 697 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 169:
#line 698 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 170:
#line 699 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 171:
#line 700 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 172:
#line 701 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 702 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 174:
#line 703 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 175:
#line 705 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 176:
#line 706 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 177:
#line 707 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 178:
#line 708 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 179:
#line 709 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 180:
#line 711 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 181:
#line 712 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 182:
#line 714 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 183:
#line 715 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 184:
#line 716 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 185:
#line 718 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 186:
#line 719 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 187:
#line 720 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 188:
#line 721 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 189:
#line 728 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 190:
#line 735 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 191:
#line 742 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 192:
#line 746 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 750 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 754 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 195:
#line 758 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 196:
#line 762 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 197:
#line 768 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 198:
#line 769 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 199:
#line 770 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 200:
#line 774 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 201:
#line 780 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 202:
#line 786 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 203:
#line 787 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 204:
#line 788 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 789 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 790 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 207:
#line 791 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 208:
#line 792 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 209:
#line 793 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 794 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 211:
#line 798 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 212:
#line 800 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 213:
#line 802 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 214:
#line 804 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 215:
#line 808 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 216:
#line 816 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 217:
#line 826 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 218:
#line 827 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 219:
#line 830 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 220:
#line 831 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 221:
#line 835 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 222:
#line 843 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 851 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 224:
#line 862 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 225:
#line 871 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 226:
#line 876 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 227:
#line 889 "parser/evoparser.y"
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

  case 229:
#line 902 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 231:
#line 904 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 232:
#line 907 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 233:
#line 914 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 234:
#line 922 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 235:
#line 923 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 924 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 237:
#line 927 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 238:
#line 928 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 240:
#line 932 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 243:
#line 941 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 244:
#line 943 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 247:
#line 951 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 248:
#line 953 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 253:
#line 965 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 254:
#line 971 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 255:
#line 978 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 256:
#line 986 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 257:
#line 987 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 258:
#line 988 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 259:
#line 989 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 260:
#line 992 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 261:
#line 993 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 262:
#line 994 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 263:
#line 995 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 264:
#line 996 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 266:
#line 1000 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 267:
#line 1003 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1004 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 269:
#line 1007 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 1008 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 271:
#line 1009 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 272:
#line 1010 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 273:
#line 1011 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 274:
#line 1012 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 275:
#line 1013 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 276:
#line 1014 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 277:
#line 1015 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 278:
#line 1018 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 279:
#line 1019 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 280:
#line 1021 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 281:
#line 1029 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 282:
#line 1034 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 283:
#line 1035 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 284:
#line 1036 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 285:
#line 1039 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 286:
#line 1040 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 289:
#line 1049 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 290:
#line 1055 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 291:
#line 1056 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 292:
#line 1057 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 295:
#line 1066 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 296:
#line 1068 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 297:
#line 1070 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 298:
#line 1072 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 299:
#line 1074 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 300:
#line 1077 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1079 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 303:
#line 1082 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 304:
#line 1083 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 305:
#line 1086 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 306:
#line 1087 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 307:
#line 1090 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 308:
#line 1091 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 309:
#line 1092 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 312:
#line 1099 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 313:
#line 1100 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 314:
#line 1105 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 315:
#line 1107 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 316:
#line 1109 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 318:
#line 1113 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1114 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 320:
#line 1117 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 321:
#line 1118 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1121 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 323:
#line 1126 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 324:
#line 1136 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 325:
#line 1143 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 326:
#line 1144 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 327:
#line 1145 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 328:
#line 1146 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 329:
#line 1151 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 330:
#line 1155 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 331:
#line 1157 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 334:
#line 1163 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 335:
#line 1168 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 336:
#line 1175 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 337:
#line 1182 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 338:
#line 1192 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 339:
#line 1199 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 340:
#line 1206 "parser/evoparser.y"
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

  case 341:
#line 1216 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 342:
#line 1224 "parser/evoparser.y"
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

  case 343:
#line 1234 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 344:
#line 1242 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 345:
#line 1251 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 346:
#line 1260 "parser/evoparser.y"
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

  case 347:
#line 1270 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 348:
#line 1278 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 349:
#line 1287 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 350:
#line 1296 "parser/evoparser.y"
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

  case 351:
#line 1306 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 352:
#line 1315 "parser/evoparser.y"
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

  case 353:
#line 1327 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 354:
#line 1332 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 355:
#line 1337 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 356:
#line 1343 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 357:
#line 1350 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 358:
#line 1357 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 359:
#line 1364 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 360:
#line 1374 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 361:
#line 1381 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 362:
#line 1390 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 363:
#line 1397 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 364:
#line 1403 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 365:
#line 1411 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 366:
#line 1417 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 368:
#line 1425 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 369:
#line 1426 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 370:
#line 1427 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 371:
#line 1428 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 372:
#line 1433 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 373:
#line 1440 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 374:
#line 1449 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 375:
#line 1456 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 376:
#line 1462 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 377:
#line 1472 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 378:
#line 1476 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 379:
#line 1482 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 380:
#line 1488 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 381:
#line 1495 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 382:
#line 1501 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 383:
#line 1508 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 384:
#line 1514 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 385:
#line 1520 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 386:
#line 1526 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1532 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 388:
#line 1538 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 389:
#line 1544 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 390:
#line 1550 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 391:
#line 1556 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 392:
#line 1562 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 393:
#line 1568 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 394:
#line 1574 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 395:
#line 1580 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 396:
#line 1586 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 397:
#line 1592 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 398:
#line 1599 "parser/evoparser.y"
    { ;}
    break;

  case 399:
#line 1600 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 400:
#line 1601 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 401:
#line 1605 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 402:
#line 1613 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 403:
#line 1619 "parser/evoparser.y"
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

  case 405:
#line 1632 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 406:
#line 1632 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 409:
#line 1640 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 410:
#line 1641 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 411:
#line 1642 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 412:
#line 1646 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 413:
#line 1647 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 414:
#line 1648 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 415:
#line 1652 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 416:
#line 1660 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 417:
#line 1669 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 418:
#line 1670 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 419:
#line 1671 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 420:
#line 1672 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 421:
#line 1673 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 425:
#line 1680 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 426:
#line 1684 "parser/evoparser.y"
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

  case 427:
#line 1694 "parser/evoparser.y"
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

  case 428:
#line 1706 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 429:
#line 1707 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 430:
#line 1707 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 431:
#line 1710 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 432:
#line 1711 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 433:
#line 1712 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 434:
#line 1713 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 435:
#line 1717 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 436:
#line 1720 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 437:
#line 1721 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 438:
#line 1722 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 439:
#line 1723 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 440:
#line 1729 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 441:
#line 1735 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 442:
#line 1740 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 443:
#line 1745 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 444:
#line 1749 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 445:
#line 1753 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 446:
#line 1755 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 449:
#line 1761 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 450:
#line 1762 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 451:
#line 1766 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 452:
#line 1767 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 453:
#line 1771 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 454:
#line 1772 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 455:
#line 1773 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 462:
#line 1788 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 463:
#line 1789 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 464:
#line 1790 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 465:
#line 1791 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 466:
#line 1792 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 467:
#line 1793 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 468:
#line 1794 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 469:
#line 1795 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 470:
#line 1800 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 471:
#line 1809 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 472:
#line 1816 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 473:
#line 1817 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 474:
#line 1818 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 475:
#line 1823 "parser/evoparser.y"
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

  case 476:
#line 1834 "parser/evoparser.y"
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

  case 477:
#line 1846 "parser/evoparser.y"
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

  case 478:
#line 1857 "parser/evoparser.y"
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

  case 479:
#line 1872 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 480:
#line 1876 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 481:
#line 1880 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 482:
#line 1881 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 483:
#line 1886 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 484:
#line 1888 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 485:
#line 1890 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 486:
#line 1892 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 487:
#line 1895 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 488:
#line 1896 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 489:
#line 1902 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 490:
#line 1907 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 491:
#line 1909 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 492:
#line 1911 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 493:
#line 1913 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 494:
#line 1915 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 495:
#line 1919 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 496:
#line 1923 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 497:
#line 1924 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 498:
#line 1929 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 499:
#line 1939 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 500:
#line 1948 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 502:
#line 1952 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 503:
#line 1953 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 504:
#line 1954 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 505:
#line 1955 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 506:
#line 1957 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 507:
#line 1959 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 510:
#line 1967 "parser/evoparser.y"
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

  case 511:
#line 1982 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 512:
#line 1990 "parser/evoparser.y"
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

  case 513:
#line 2004 "parser/evoparser.y"
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

  case 514:
#line 2018 "parser/evoparser.y"
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

  case 515:
#line 2032 "parser/evoparser.y"
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

  case 516:
#line 2044 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 517:
#line 2045 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 518:
#line 2046 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 519:
#line 2049 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 520:
#line 2050 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 521:
#line 2053 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 522:
#line 2054 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 523:
#line 2055 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 524:
#line 2056 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 525:
#line 2057 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 526:
#line 2058 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 527:
#line 2059 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 528:
#line 2060 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 529:
#line 2062 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 530:
#line 2064 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 531:
#line 2066 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 532:
#line 2068 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 533:
#line 2070 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 534:
#line 2072 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 535:
#line 2075 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 536:
#line 2076 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 537:
#line 2079 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 538:
#line 2080 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 539:
#line 2083 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 540:
#line 2084 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 542:
#line 2088 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 543:
#line 2089 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 544:
#line 2090 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 545:
#line 2091 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 546:
#line 2092 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 547:
#line 2093 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 548:
#line 2094 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 549:
#line 2095 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 550:
#line 2096 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 551:
#line 2097 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 552:
#line 2098 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 553:
#line 2099 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 554:
#line 2100 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 555:
#line 2101 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 556:
#line 2102 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 557:
#line 2103 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 558:
#line 2104 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 559:
#line 2107 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 560:
#line 2108 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 561:
#line 2111 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 562:
#line 2113 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 563:
#line 2121 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 564:
#line 2122 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 566:
#line 2124 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 567:
#line 2125 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 568:
#line 2126 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 569:
#line 2127 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2128 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 571:
#line 2129 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 572:
#line 2130 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 573:
#line 2131 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 574:
#line 2132 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 575:
#line 2139 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 576:
#line 2140 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 577:
#line 2141 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 578:
#line 2142 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 579:
#line 2143 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 580:
#line 2144 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 581:
#line 2145 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 582:
#line 2146 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 583:
#line 2147 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 584:
#line 2148 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 585:
#line 2149 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 586:
#line 2150 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 587:
#line 2151 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 588:
#line 2152 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 589:
#line 2153 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 590:
#line 2154 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 591:
#line 2155 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 592:
#line 2156 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 593:
#line 2157 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 594:
#line 2158 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 595:
#line 2159 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 596:
#line 2162 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 597:
#line 2163 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 598:
#line 2164 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 599:
#line 2167 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 600:
#line 2168 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 601:
#line 2171 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 602:
#line 2172 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 603:
#line 2173 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 605:
#line 2177 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 606:
#line 2178 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 607:
#line 2182 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 608:
#line 2183 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 609:
#line 2184 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 610:
#line 2185 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 611:
#line 2186 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 612:
#line 2187 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 613:
#line 2188 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 614:
#line 2189 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 615:
#line 2190 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 616:
#line 2191 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 617:
#line 2192 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 618:
#line 2193 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 619:
#line 2194 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 620:
#line 2195 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 621:
#line 2196 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 622:
#line 2197 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 623:
#line 2198 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 624:
#line 2199 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 625:
#line 2200 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 626:
#line 2201 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 627:
#line 2202 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 628:
#line 2203 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 629:
#line 2204 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 630:
#line 2205 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 631:
#line 2206 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 632:
#line 2207 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 633:
#line 2208 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 634:
#line 2209 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 635:
#line 2210 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 636:
#line 2211 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 637:
#line 2212 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 638:
#line 2213 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 639:
#line 2214 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 640:
#line 2217 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 641:
#line 2218 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 642:
#line 2222 "parser/evoparser.y"
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

  case 643:
#line 2234 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 644:
#line 2235 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 645:
#line 2236 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 646:
#line 2240 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 647:
#line 2243 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 648:
#line 2244 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 652:
#line 2248 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 653:
#line 2249 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 654:
#line 2257 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 655:
#line 2262 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 656:
#line 2268 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 657:
#line 2274 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 658:
#line 2281 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 659:
#line 2288 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 660:
#line 2294 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 661:
#line 2300 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 662:
#line 2307 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 667:
#line 2323 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 668:
#line 2324 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 669:
#line 2325 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 670:
#line 2326 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 671:
#line 2329 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 672:
#line 2330 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 673:
#line 2331 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 674:
#line 2332 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 675:
#line 2333 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 676:
#line 2334 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 677:
#line 2335 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 678:
#line 2336 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 679:
#line 2337 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 680:
#line 2338 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 689:
#line 2355 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 690:
#line 2356 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 811:
#line 2374 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 812:
#line 2381 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 813:
#line 2386 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 814:
#line 2392 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 815:
#line 2398 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 816:
#line 2404 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 817:
#line 2415 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 818:
#line 2420 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 819:
#line 2426 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 822:
#line 2437 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 823:
#line 2438 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 824:
#line 2439 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 825:
#line 2440 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 826:
#line 2441 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 827:
#line 2442 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 828:
#line 2443 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 829:
#line 2450 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 830:
#line 2455 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 831:
#line 2462 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 832:
#line 2463 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 833:
#line 2466 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 834:
#line 2467 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 835:
#line 2468 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 836:
#line 2471 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 837:
#line 2476 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 838:
#line 2482 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 839:
#line 2491 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 840:
#line 2499 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 841:
#line 2509 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 842:
#line 2514 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 845:
#line 2527 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 846:
#line 2528 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 847:
#line 2529 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 848:
#line 2530 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 849:
#line 2531 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 850:
#line 2532 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 851:
#line 2533 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 852:
#line 2534 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 853:
#line 2537 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 854:
#line 2542 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 855:
#line 2548 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 856:
#line 2558 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 857:
#line 2565 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 858:
#line 2572 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 859:
#line 2580 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 861:
#line 2590 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 863:
#line 2594 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 864:
#line 2595 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9964 "parser/evoparser.tab.c"
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


#line 2598 "parser/evoparser.y"

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
