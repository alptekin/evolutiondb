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
#line 4 "evolution/parser/evoparser.y"

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
#line 54 "evolution/parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 839 "evolution/parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 852 "evolution/parser/evoparser.tab.c"

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
#define YYLAST   11159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  360
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  863
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2115

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
    2055,  2059,  2062,  2063,  2069,  2073,  2079,  2080,  2083,  2086,
    2089,  2092,  2094,  2095,  2096,  2100,  2102,  2106,  2110,  2111,
    2118,  2120,  2122,  2126,  2130,  2138,  2142,  2146,  2152,  2158,
    2160,  2169,  2177,  2185,  2187,  2188,  2196,  2197,  2201,  2203,
    2207,  2209,  2211,  2213,  2215,  2217,  2218,  2220,  2225,  2229,
    2231,  2235,  2238,  2241,  2244,  2246,  2249,  2252,  2255,  2257,
    2259,  2269,  2270,  2273,  2276,  2280,  2286,  2292,  2300,  2306,
    2308,  2313,  2318,  2322,  2328,  2332,  2338,  2339,  2342,  2344,
    2350,  2358,  2366,  2376,  2388,  2390,  2393,  2397,  2399,  2409,
    2421,  2422,  2427,  2431,  2437,  2443,  2453,  2464,  2466,  2470,
    2480,  2490,  2500,  2507,  2519,  2528,  2529,  2531,  2534,  2536,
    2540,  2546,  2554,  2559,  2564,  2570,  2576,  2581,  2588,  2600,
    2614,  2628,  2644,  2649,  2656,  2658,  2662,  2664,  2668,  2670,
    2674,  2675,  2680,  2686,  2691,  2697,  2702,  2708,  2713,  2719,
    2724,  2729,  2733,  2737,  2741,  2744,  2748,  2753,  2758,  2760,
    2764,  2765,  2770,  2771,  2775,  2778,  2782,  2786,  2790,  2794,
    2800,  2806,  2812,  2816,  2822,  2825,  2833,  2839,  2847,  2853,
    2856,  2860,  2863,  2867,  2870,  2874,  2880,  2885,  2891,  2899,
    2908,  2917,  2925,  2932,  2939,  2945,  2946,  2950,  2956,  2957,
    2959,  2960,  2963,  2966,  2967,  2972,  2976,  2979,  2983,  2987,
    2991,  2995,  2999,  3003,  3007,  3011,  3015,  3019,  3021,  3023,
    3025,  3027,  3029,  3033,  3039,  3042,  3047,  3049,  3051,  3053,
    3055,  3059,  3063,  3067,  3071,  3077,  3083,  3085,  3087,  3089,
    3091,  3095,  3099,  3100,  3102,  3104,  3106,  3110,  3114,  3117,
    3119,  3123,  3127,  3131,  3133,  3144,  3154,  3167,  3179,  3192,
    3204,  3219,  3233,  3234,  3236,  3238,  3242,  3245,  3249,  3253,
    3257,  3259,  3261,  3263,  3265,  3267,  3269,  3271,  3273,  3275,
    3277,  3278,  3281,  3286,  3292,  3298,  3304,  3310,  3316,  3318,
    3320,  3322,  3324,  3326,  3328,  3330,  3332,  3334,  3336,  3338,
    3340,  3342,  3344,  3346,  3348,  3350,  3352,  3354,  3356,  3358,
    3360,  3362,  3364,  3366,  3368,  3370,  3372,  3374,  3376,  3378,
    3380,  3382,  3384,  3386,  3388,  3390,  3392,  3394,  3396,  3398,
    3400,  3402,  3404,  3406,  3408,  3410,  3412,  3414,  3416,  3418,
    3420,  3422,  3424,  3426,  3428,  3430,  3432,  3434,  3436,  3438,
    3440,  3442,  3444,  3446,  3448,  3450,  3452,  3454,  3456,  3458,
    3460,  3462,  3464,  3466,  3468,  3470,  3472,  3474,  3476,  3478,
    3480,  3482,  3484,  3486,  3488,  3490,  3492,  3494,  3496,  3498,
    3500,  3502,  3504,  3506,  3508,  3510,  3512,  3514,  3516,  3518,
    3520,  3522,  3524,  3526,  3528,  3530,  3532,  3534,  3536,  3538,
    3540,  3542,  3544,  3546,  3548,  3550,  3552,  3554,  3556,  3558,
    3560,  3562,  3564,  3568,  3574,  3578,  3584,  3586,  3591,  3597,
    3599,  3603,  3605,  3607,  3609,  3611,  3613,  3615,  3617,  3619,
    3633,  3635,  3637,  3639,  3641,  3643,  3645,  3649,  3655,  3660,
    3665,  3667,  3673,  3674,  3677,  3681,  3684,  3688,  3691,  3694,
    3697,  3699,  3702,  3704,  3708,  3714,  3719,  3724,  3731,  3738,
    3739,  3742,  3745,  3747
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
      80,   455,   456,    -1,    -1,   356,     3,   357,    -1,    89,
      82,    -1,    -1,    89,   234,   457,   216,   458,    -1,     3,
      20,   362,    -1,   458,   358,     3,    20,   362,    -1,    -1,
     459,   157,    -1,   459,    91,    -1,   459,   134,    -1,   459,
     142,    -1,   147,    -1,    -1,    -1,   356,   462,   357,    -1,
       3,    -1,   462,   358,     3,    -1,   356,   465,   357,    -1,
      -1,   463,   358,   464,   356,   465,   357,    -1,   362,    -1,
     101,    -1,   465,   358,   362,    -1,   465,   358,   101,    -1,
     145,   459,   460,     3,   216,   466,   452,    -1,     3,    20,
     362,    -1,     3,    20,   101,    -1,   466,   358,     3,    20,
     362,    -1,   466,   358,     3,    20,   101,    -1,   467,    -1,
     197,   459,   460,     3,   461,   246,   463,   452,    -1,   197,
     459,   460,     3,   216,   466,   452,    -1,   197,   459,   460,
       3,   461,   398,   452,    -1,   468,    -1,    -1,    78,     3,
     469,   470,   472,   473,   474,    -1,    -1,   356,   471,   357,
      -1,     3,    -1,   471,   358,     3,    -1,   124,    -1,   221,
      -1,     4,    -1,   212,    -1,   213,    -1,    -1,   475,    -1,
     251,   356,   475,   357,    -1,   356,   475,   357,    -1,   476,
      -1,   475,   358,   476,    -1,   123,    79,    -1,   123,   225,
      -1,    87,     4,    -1,   131,    -1,   131,     6,    -1,   174,
       4,    -1,   218,     4,    -1,    79,    -1,   477,    -1,   234,
     478,   420,   216,   479,   399,   409,   412,   528,    -1,    -1,
     459,   157,    -1,   459,   142,    -1,     3,    20,   362,    -1,
       3,   355,     3,    20,   362,    -1,   479,   358,     3,    20,
     362,    -1,   479,   358,     3,   355,     3,    20,   362,    -1,
     189,   228,     3,   221,     3,    -1,   480,    -1,    65,    83,
     481,     3,    -1,    65,   203,   481,     3,    -1,    96,    83,
       3,    -1,    96,    83,   144,   255,     3,    -1,    96,   203,
       3,    -1,    96,   203,   144,   255,     3,    -1,    -1,   144,
     255,    -1,   482,    -1,    65,    90,     3,    43,   502,    -1,
      65,    90,     3,    43,   502,   101,   362,    -1,    65,    90,
       3,    43,   502,    18,   174,    -1,    65,    90,     3,    43,
     502,    70,   356,   362,   357,    -1,    65,    90,     3,    43,
     502,    18,   174,    70,   356,   362,   357,    -1,   483,    -1,
     242,     3,    -1,   242,    83,     3,    -1,   484,    -1,    65,
     488,   228,   481,     3,   356,   489,   357,   485,    -1,    65,
     488,   228,   481,     3,   355,     3,   356,   489,   357,   485,
      -1,    -1,   485,    40,    20,     5,    -1,   485,    40,     5,
      -1,   485,   178,     3,    95,     3,    -1,   485,   178,     3,
     224,     3,    -1,   485,   204,    55,   243,   356,     3,   357,
     205,     5,    -1,   485,   204,    55,   185,   356,     3,   357,
     356,   486,   357,    -1,   487,    -1,   486,   358,   487,    -1,
     204,     3,   246,   155,   226,     4,   178,   172,     5,    -1,
     204,     3,   246,   155,   226,   165,   178,   172,     5,    -1,
      65,   488,   228,   481,     3,   356,   489,   357,   504,    -1,
      65,   488,   228,   481,     3,   504,    -1,    65,   488,   228,
     481,     3,   355,     3,   356,   489,   357,   504,    -1,    65,
     488,   228,   481,     3,   355,     3,   504,    -1,    -1,   222,
      -1,   223,   222,    -1,   490,    -1,   489,   358,   490,    -1,
     182,   152,   356,   491,   357,    -1,    63,     3,   182,   152,
     356,   491,   357,    -1,   152,   356,   415,   357,    -1,   143,
     356,   415,   357,    -1,   126,   143,   356,   415,   357,    -1,
     126,   152,   356,   415,   357,    -1,    70,   356,   362,   357,
      -1,    63,     3,    70,   356,   362,   357,    -1,   122,   152,
     356,   492,   357,   188,     3,   356,   493,   357,   494,    -1,
     122,   152,   356,   492,   357,   188,     3,   355,     3,   356,
     493,   357,   494,    -1,    63,     3,   122,   152,   356,   492,
     357,   188,     3,   356,   493,   357,   494,    -1,    63,     3,
     122,   152,   356,   492,   357,   188,     3,   355,     3,   356,
     493,   357,   494,    -1,   237,   356,   495,   357,    -1,    63,
       3,   237,   356,   495,   357,    -1,     3,    -1,   491,   358,
       3,    -1,     3,    -1,   492,   358,     3,    -1,     3,    -1,
     493,   358,     3,    -1,    -1,   494,   178,    95,    66,    -1,
     494,   178,    95,   216,   174,    -1,   494,   178,    95,   191,
      -1,   494,   178,    95,   216,   101,    -1,   494,   178,   234,
      66,    -1,   494,   178,   234,   216,   174,    -1,   494,   178,
     234,   191,    -1,   494,   178,   234,   216,   101,    -1,   494,
     178,    95,   173,    -1,   494,   178,   234,   173,    -1,   494,
     164,   125,    -1,   494,   164,   211,    -1,   494,   164,   181,
      -1,   494,    85,    -1,   494,    18,    85,    -1,   494,    85,
     139,    86,    -1,   494,    85,   139,   137,    -1,     3,    -1,
     495,   358,     3,    -1,    -1,   496,     3,   502,   497,    -1,
      -1,   497,    18,   174,    -1,   497,   174,    -1,   497,   101,
       4,    -1,   497,   101,     5,    -1,   497,   101,     7,    -1,
     497,   101,     6,    -1,   497,   101,   307,   356,   357,    -1,
     497,   101,   308,   356,   357,    -1,   497,   101,   309,   356,
     357,    -1,   497,   101,    64,    -1,   497,   101,   356,   362,
     357,    -1,   497,    40,    -1,   497,    40,   356,     5,   358,
       5,   357,    -1,   497,    40,   356,     5,   357,    -1,   497,
      45,   356,     5,   358,     5,   357,    -1,   497,    45,   356,
       5,   357,    -1,   497,    45,    -1,   497,   237,   152,    -1,
     497,   237,    -1,   497,   182,   152,    -1,   497,   152,    -1,
     497,    71,     4,    -1,   497,    70,   356,   362,   357,    -1,
     497,    63,     3,   237,    -1,   497,    63,     3,   182,   152,
      -1,   497,    63,     3,    70,   356,   362,   357,    -1,   497,
      48,    44,    43,   356,   362,   357,    49,    -1,   497,    48,
      44,    43,   356,   362,   357,    50,    -1,   497,    48,    44,
      43,   356,   362,   357,    -1,   497,    43,   356,   362,   357,
      49,    -1,   497,    43,   356,   362,   357,    50,    -1,   497,
      43,   356,   362,   357,    -1,    -1,   356,     5,   357,    -1,
     356,     5,   358,     5,   357,    -1,    -1,    56,    -1,    -1,
     500,   235,    -1,   500,   254,    -1,    -1,   501,    74,   216,
       4,    -1,   501,    75,     4,    -1,    59,   498,    -1,   220,
     498,   500,    -1,   215,   498,   500,    -1,   170,   498,   500,
      -1,   148,   498,   500,    -1,   140,   498,   500,    -1,    58,
     498,   500,    -1,   186,   498,   500,    -1,   102,   498,   500,
      -1,   120,   498,   500,    -1,   104,   498,   500,    -1,   105,
      -1,   233,    -1,   227,    -1,   103,    -1,   252,    -1,    74,
     498,   501,    -1,   245,   356,     5,   357,   501,    -1,    56,
     498,    -1,   247,   356,     5,   357,    -1,   232,    -1,    53,
      -1,   169,    -1,   163,    -1,   219,   499,   501,    -1,   225,
     499,   501,    -1,   166,   499,   501,    -1,   156,   499,   501,
      -1,   111,   356,   503,   357,   501,    -1,   216,   356,   503,
     357,   501,    -1,    54,    -1,   238,    -1,   239,    -1,     4,
      -1,   503,   358,     4,    -1,   505,   423,   398,    -1,    -1,
     142,    -1,   197,    -1,   506,    -1,   216,   203,     3,    -1,
     216,   203,   101,    -1,   216,   507,    -1,   508,    -1,   507,
     358,   508,    -1,     8,    20,   362,    -1,     8,     9,   362,
      -1,   509,    -1,    65,   183,     3,   356,   510,   357,    43,
      52,   514,   112,    -1,    65,   183,     3,   356,   510,   357,
      52,   514,   112,    -1,    65,    10,   197,   183,     3,   356,
     510,   357,    43,    52,   514,   112,    -1,    65,    10,   197,
     183,     3,   356,   510,   357,    52,   514,   112,    -1,    65,
     127,     3,   356,   510,   357,   194,   513,    43,    52,   514,
     112,    -1,    65,   127,     3,   356,   510,   357,   194,   513,
      52,   514,   112,    -1,    65,    10,   197,   127,     3,   356,
     510,   357,   194,   513,    43,    52,   514,   112,    -1,    65,
      10,   197,   127,     3,   356,   510,   357,   194,   513,    52,
     514,   112,    -1,    -1,   511,    -1,   512,    -1,   511,   358,
     512,    -1,     3,   502,    -1,    16,     3,   502,    -1,   176,
       3,   502,    -1,   138,     3,   502,    -1,   140,    -1,   148,
      -1,   245,    -1,   225,    -1,    54,    -1,   120,    -1,   102,
      -1,    58,    -1,   105,    -1,   227,    -1,    -1,   514,   515,
      -1,   514,    52,   514,   112,    -1,   514,   144,   514,   112,
     144,    -1,   514,   250,   514,   112,   250,    -1,   514,   154,
     514,   112,   154,    -1,   514,   119,   514,   112,   119,    -1,
     514,    69,   514,   112,    69,    -1,     3,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,    -1,
      10,    -1,    12,    -1,    16,    -1,    42,    -1,   217,    -1,
     145,    -1,   234,    -1,    95,    -1,   124,    -1,   248,    -1,
     216,    -1,   147,    -1,   246,    -1,    65,    -1,    96,    -1,
     228,    -1,   143,    -1,   229,    -1,   113,    -1,   107,    -1,
      84,    -1,    89,    -1,    60,    -1,   192,    -1,   153,    -1,
     150,    -1,    62,    -1,   175,    -1,   117,    -1,    61,    -1,
     130,    -1,   115,    -1,   176,    -1,   138,    -1,   128,    -1,
      46,    -1,   199,    -1,   190,    -1,   114,    -1,   201,    -1,
      51,    -1,   106,    -1,   198,    -1,   200,    -1,    43,    -1,
     178,    -1,   179,    -1,    55,    -1,   129,    -1,   136,    -1,
     160,    -1,   162,    -1,   151,    -1,   158,    -1,   196,    -1,
     141,    -1,   177,    -1,   125,    -1,    68,    -1,   171,    -1,
     241,    -1,   174,    -1,   101,    -1,   182,    -1,   152,    -1,
     237,    -1,    70,    -1,   122,    -1,   188,    -1,    66,    -1,
     191,    -1,   173,    -1,   140,    -1,   148,    -1,   245,    -1,
     225,    -1,    54,    -1,   120,    -1,   102,    -1,    58,    -1,
     105,    -1,   227,    -1,   215,    -1,   104,    -1,    74,    -1,
     238,    -1,    53,    -1,   236,    -1,   110,    -1,   146,    -1,
      37,    -1,    94,    -1,   255,    -1,   249,    -1,   251,    -1,
     183,    -1,   127,    -1,   194,    -1,   356,    -1,   357,    -1,
     358,    -1,   354,    -1,   355,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    17,    -1,   359,    -1,
     296,    -1,   297,    -1,   298,    -1,   299,    -1,   300,    -1,
       8,    -1,   516,    -1,    96,   183,     3,    -1,    96,   183,
     144,   255,     3,    -1,    96,   127,     3,    -1,    96,   127,
     144,   255,     3,    -1,   517,    -1,    60,     3,   356,   357,
      -1,    60,     3,   356,   518,   357,    -1,   519,    -1,   518,
     358,   519,    -1,     5,    -1,     4,    -1,     7,    -1,   174,
      -1,     6,    -1,     3,    -1,     8,    -1,   520,    -1,    65,
     200,     3,   521,   522,   178,     3,   128,   106,   198,    52,
     514,   112,    -1,    51,    -1,    36,    -1,   145,    -1,   234,
      -1,    95,    -1,   523,    -1,    96,   200,     3,    -1,    96,
     200,   144,   255,     3,    -1,    34,   200,     3,   108,    -1,
      34,   200,     3,    88,    -1,   524,    -1,    65,   345,   481,
       3,   525,    -1,    -1,   525,   526,    -1,   350,   251,     5,
      -1,   350,     5,    -1,   351,    55,     5,    -1,   351,     5,
      -1,   352,     5,    -1,   165,     5,    -1,   353,    -1,    18,
     353,    -1,   527,    -1,    96,   345,     3,    -1,    96,   345,
     144,   255,     3,    -1,    34,   345,     3,   525,    -1,    34,
     345,     3,    47,    -1,    34,   345,     3,    47,   251,     5,
      -1,    34,   345,     3,   189,   221,     3,    -1,    -1,   193,
      26,    -1,   193,   529,    -1,     3,    -1,   529,   358,     3,
      -1
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
    1641,  1645,  1646,  1646,  1650,  1658,  1668,  1669,  1670,  1671,
    1672,  1675,  1675,  1678,  1679,  1682,  1692,  1705,  1706,  1706,
    1709,  1710,  1711,  1712,  1715,  1719,  1720,  1721,  1722,  1728,
    1731,  1737,  1742,  1748,  1752,  1752,  1757,  1758,  1760,  1761,
    1765,  1766,  1770,  1771,  1772,  1775,  1776,  1777,  1778,  1782,
    1783,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1798,
    1806,  1815,  1816,  1817,  1821,  1832,  1844,  1855,  1870,  1875,
    1879,  1880,  1884,  1886,  1888,  1890,  1894,  1895,  1901,  1905,
    1907,  1909,  1911,  1913,  1918,  1922,  1923,  1927,  1936,  1946,
    1950,  1951,  1952,  1953,  1954,  1955,  1957,  1961,  1962,  1965,
    1980,  1987,  2002,  2015,  2030,  2043,  2044,  2045,  2048,  2049,
    2052,  2053,  2054,  2055,  2056,  2057,  2058,  2059,  2060,  2062,
    2064,  2066,  2068,  2070,  2074,  2075,  2078,  2079,  2082,  2083,
    2086,  2087,  2088,  2089,  2090,  2091,  2092,  2093,  2094,  2095,
    2096,  2097,  2098,  2099,  2100,  2101,  2102,  2103,  2106,  2107,
    2110,  2110,  2120,  2121,  2122,  2123,  2124,  2125,  2126,  2127,
    2128,  2129,  2130,  2131,  2138,  2139,  2140,  2141,  2142,  2143,
    2144,  2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,  2153,
    2154,  2155,  2156,  2157,  2158,  2161,  2162,  2163,  2166,  2167,
    2170,  2171,  2172,  2175,  2176,  2177,  2181,  2182,  2183,  2184,
    2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,  2193,  2194,
    2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,  2203,  2204,
    2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,  2213,  2216,
    2217,  2220,  2233,  2234,  2235,  2239,  2242,  2243,  2244,  2245,
    2245,  2247,  2248,  2256,  2260,  2266,  2272,  2279,  2286,  2292,
    2298,  2305,  2314,  2315,  2318,  2319,  2322,  2323,  2324,  2325,
    2328,  2329,  2330,  2331,  2332,  2333,  2334,  2335,  2336,  2337,
    2344,  2345,  2346,  2347,  2348,  2349,  2350,  2351,  2354,  2355,
    2356,  2356,  2356,  2357,  2357,  2357,  2357,  2357,  2357,  2358,
    2358,  2358,  2358,  2358,  2358,  2358,  2358,  2358,  2359,  2359,
    2359,  2359,  2359,  2359,  2359,  2360,  2360,  2360,  2360,  2361,
    2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,
    2361,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2363,
    2363,  2363,  2363,  2363,  2363,  2363,  2363,  2364,  2364,  2364,
    2364,  2364,  2364,  2364,  2364,  2364,  2365,  2365,  2365,  2365,
    2365,  2365,  2365,  2365,  2366,  2366,  2366,  2367,  2367,  2367,
    2367,  2367,  2367,  2367,  2367,  2368,  2368,  2368,  2368,  2368,
    2368,  2368,  2369,  2369,  2369,  2369,  2369,  2369,  2369,  2370,
    2370,  2370,  2370,  2371,  2371,  2371,  2371,  2371,  2371,  2371,
    2371,  2371,  2371,  2371,  2371,  2372,  2372,  2372,  2372,  2372,
    2373,  2380,  2384,  2390,  2396,  2402,  2414,  2418,  2424,  2432,
    2433,  2436,  2437,  2438,  2439,  2440,  2441,  2442,  2449,  2453,
    2461,  2462,  2465,  2466,  2467,  2470,  2474,  2480,  2489,  2497,
    2508,  2512,  2521,  2522,  2526,  2527,  2528,  2529,  2530,  2531,
    2532,  2533,  2536,  2540,  2546,  2556,  2563,  2570,  2578,  2588,
    2589,  2590,  2593,  2594
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
     455,   456,   457,   456,   458,   458,   459,   459,   459,   459,
     459,   460,   460,   461,   461,   462,   462,   463,   464,   463,
     465,   465,   465,   465,   451,   466,   466,   466,   466,   397,
     467,   467,   467,   397,   469,   468,   470,   470,   471,   471,
     472,   472,   473,   473,   473,   474,   474,   474,   474,   475,
     475,   476,   476,   476,   476,   476,   476,   476,   476,   397,
     477,   478,   478,   478,   479,   479,   479,   479,   397,   397,
     480,   480,   397,   397,   397,   397,   481,   481,   397,   482,
     482,   482,   482,   482,   397,   483,   483,   397,   484,   484,
     485,   485,   485,   485,   485,   485,   485,   486,   486,   487,
     487,   484,   484,   484,   484,   488,   488,   488,   489,   489,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   491,   491,   492,   492,   493,   493,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   495,   495,
     496,   490,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   498,   498,   498,   499,   499,
     500,   500,   500,   501,   501,   501,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   503,
     503,   504,   505,   505,   505,   397,   506,   506,   506,   507,
     507,   508,   508,   397,   509,   509,   509,   509,   509,   509,
     509,   509,   510,   510,   511,   511,   512,   512,   512,   512,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     514,   514,   514,   514,   514,   514,   514,   514,   515,   515,
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
     515,   397,   516,   516,   516,   516,   397,   517,   517,   518,
     518,   519,   519,   519,   519,   519,   519,   519,   397,   520,
     521,   521,   522,   522,   522,   397,   523,   523,   397,   397,
     397,   524,   525,   525,   526,   526,   526,   526,   526,   526,
     526,   526,   397,   527,   527,   397,   397,   397,   397,   528,
     528,   528,   529,   529
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
       3,     2,     0,     5,     3,     5,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     0,     7,     0,     3,     1,     3,
       1,     1,     1,     1,     1,     0,     1,     4,     3,     1,
       3,     2,     2,     2,     1,     2,     2,     2,     1,     1,
       9,     0,     2,     2,     3,     5,     5,     7,     5,     1,
       4,     4,     3,     5,     3,     5,     0,     2,     1,     5,
       7,     7,     9,    11,     1,     2,     3,     1,     9,    11,
       0,     4,     3,     5,     5,     9,    10,     1,     3,     9,
       9,     9,     6,    11,     8,     0,     1,     2,     1,     3,
       5,     7,     4,     4,     5,     5,     4,     6,    11,    13,
      13,    15,     4,     6,     1,     3,     1,     3,     1,     3,
       0,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       4,     3,     3,     3,     2,     3,     4,     4,     1,     3,
       0,     4,     0,     3,     2,     3,     3,     3,     3,     5,
       5,     5,     3,     5,     2,     7,     5,     7,     5,     2,
       3,     2,     3,     2,     3,     5,     4,     5,     7,     8,
       8,     7,     6,     6,     5,     0,     3,     5,     0,     1,
       0,     2,     2,     0,     4,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     3,     5,     2,     4,     1,     1,     1,     1,
       3,     3,     3,     3,     5,     5,     1,     1,     1,     1,
       3,     3,     0,     1,     1,     1,     3,     3,     2,     1,
       3,     3,     3,     1,    10,     9,    12,    11,    12,    11,
      14,    13,     0,     1,     1,     3,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     4,     5,     5,     5,     5,     5,     1,     1,
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
       1,     1,     3,     5,     3,     5,     1,     4,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,    13,
       1,     1,     1,     1,     1,     1,     3,     5,     4,     4,
       1,     5,     0,     2,     3,     2,     3,     2,     2,     2,
       1,     2,     1,     3,     5,     4,     4,     6,     6,     0,
       2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   515,     0,   328,     0,   416,     0,
       0,   416,     0,   269,     0,   416,     0,     0,     0,   224,
     323,   335,   338,   360,   367,   372,   374,   377,   401,   439,
     443,   469,   479,   488,   494,   497,   645,   653,   811,   816,
     828,   835,   840,   852,     0,     0,     0,     0,     0,     0,
     486,     0,     0,     0,     0,     0,   486,   516,     0,     0,
     486,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   422,     0,     0,   422,     0,     0,   648,   649,
       0,     0,     0,     0,   495,     0,     1,     2,   362,     0,
       0,   842,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   517,     0,     0,   486,   446,
     332,     0,   327,   325,   326,     0,   482,     0,   814,     0,
     361,   812,     0,   836,     0,   484,     0,   336,     0,   853,
       0,   418,   419,   420,   421,   417,     0,   373,     0,     0,
       0,     0,   646,   647,     0,     4,     8,     9,    11,    10,
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
     284,   225,   278,   363,   420,   417,   284,     0,     0,   285,
     287,   288,   294,   496,     3,     0,     0,   368,   369,   839,
     838,     0,     0,     0,     0,     0,     0,     0,     0,   856,
       0,   855,     0,   826,   822,   821,   825,   823,   827,   824,
     817,     0,   819,     0,     0,   487,   480,     0,   662,     0,
       0,     0,     0,   662,   831,   830,     0,   481,     0,     0,
       0,   842,     0,     0,     0,     0,   330,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   423,     0,
     423,   652,   651,   650,     0,    50,     0,    31,    30,    19,
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
       0,     0,   850,   843,   376,   818,     0,     0,     0,   627,
     636,   595,   595,   595,   595,   595,   620,   595,   617,     0,
     595,   595,   595,   598,   629,   598,   628,   595,   595,   595,
       0,   598,   595,   598,   619,   626,   618,   637,   638,     0,
       0,   621,   489,     0,     0,     0,     0,     0,   663,   664,
       0,     0,     0,     0,     0,   834,   832,   833,     0,     0,
       0,     0,     0,   841,   642,   448,     0,   450,   451,     0,
     333,     0,   249,     0,   228,   332,   483,   815,   813,   837,
     485,   337,   854,     0,     0,     0,   478,     0,     0,     5,
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
       0,     0,     0,     0,   387,   384,   390,   386,   562,     0,
       0,     0,     0,   388,   857,   858,   851,   849,   845,     0,
     847,     0,   848,   820,   662,   662,     0,   624,   600,   606,
     603,   600,   600,     0,   600,   600,   600,   599,   603,   603,
     600,   600,   600,     0,   603,   600,   603,     0,     0,     0,
       0,     0,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   643,
     644,     0,   560,   512,   294,   447,     0,   452,   453,   454,
     455,   229,     0,   256,   228,   329,   331,     0,   404,   425,
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
       0,     0,     0,     0,     0,   562,   562,     0,   398,   562,
     393,     0,     0,   844,   846,     0,     0,     0,   612,   622,
     614,   616,   639,     0,   615,   611,   610,   633,   632,   609,
     613,   608,     0,   630,   607,   631,     0,     0,   491,     0,
     490,   667,   669,   668,     0,   665,     0,   353,     0,     0,
       0,     0,     0,   355,     0,     0,     0,     0,     0,   680,
       0,     0,     0,     0,     0,     0,   642,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   518,     0,     0,   449,
     468,     0,     0,   464,     0,     0,     0,     0,   445,   456,
     459,     0,     0,   859,   334,     0,     0,     0,   434,   424,
       0,     0,   404,   441,   404,   442,    49,   215,     0,   214,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    73,    75,     0,
       0,     0,     0,     0,   107,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,   239,   228,
     366,   290,     0,     0,     0,     0,   474,     0,     0,   256,
     299,   297,     0,     0,   295,   311,     0,     0,     0,     0,
       0,   398,   398,   562,     0,     0,   574,     0,   579,     0,
       0,     0,     0,     0,   399,   583,   564,     0,   581,   395,
     398,   385,   392,     0,     0,   596,     0,   601,   602,     0,
       0,   603,     0,   603,   603,   625,     0,     0,   674,   677,
     676,   678,   675,   670,   671,   673,   679,   672,     0,     0,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,   680,     0,     0,     0,     0,     0,     0,     0,     0,
     560,   514,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   500,   560,     0,   641,   463,   461,   462,   465,   466,
     467,     0,     0,     0,   234,   234,   250,   251,   257,     0,
     324,   436,   435,     0,     0,   426,   431,   430,     0,   428,
     407,   440,   212,   216,     0,   113,   112,     0,   117,     0,
       0,   200,   201,   146,   124,   125,     0,     0,   129,   130,
     131,   135,   137,   139,   180,   181,   182,   183,     0,    70,
      79,    81,    77,    83,    85,    87,   121,     0,     0,   123,
     196,   241,   241,   241,    89,     0,     0,    97,     0,     0,
     105,   241,   241,   153,     0,     0,     0,   165,   166,     0,
       0,   169,     0,   172,     0,   177,     0,    53,    57,     0,
       0,    47,     0,     0,     0,    34,     0,     0,   249,   230,
     318,     0,     0,     0,     0,     0,     0,   859,   312,     0,
     298,     0,     0,     0,   558,     0,   389,   397,   398,   563,
     400,     0,     0,     0,     0,     0,     0,   584,   565,   566,
     568,   567,   572,     0,     0,     0,     0,   582,   580,   394,
       0,     0,   680,     0,     0,   605,   634,   640,   635,   623,
       0,   492,     0,   680,     0,     0,     0,     0,     0,   354,
       0,   347,     0,     0,     0,     0,   688,   689,   690,   692,
     691,   810,   695,   696,   697,   803,   694,   693,   798,   799,
     800,   801,   802,   785,   698,   739,   730,   735,   680,   781,
     771,   742,   774,   717,   724,   721,   708,   764,   753,   680,
     761,   779,   715,   716,   786,   702,   709,   757,   773,   778,
     775,   736,   714,   783,   655,   713,   733,   726,   723,   680,
     772,   762,   703,   752,   791,   729,   743,   725,   744,   728,
     767,   750,   711,   680,   700,   784,   706,   768,   720,   747,
     759,   719,   680,   748,   745,   746,   754,   766,   756,   722,
     727,   751,   740,   741,   758,   790,   763,   732,   765,   718,
     792,   749,   737,   731,   738,   734,   777,   705,   699,   770,
     776,   710,   712,   701,   782,   760,   780,   755,   769,   707,
     704,   788,   680,   789,   787,   805,   806,   807,   808,   809,
     796,   797,   793,   794,   795,   804,   681,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,   498,
     511,   519,   562,     0,   458,   460,   235,   236,     0,   253,
     255,     0,     0,     0,   862,   860,   861,   405,     0,   427,
       0,     0,     0,   859,     0,     0,   116,   203,   204,   205,
     206,   209,   208,   210,   202,   207,     0,     0,     0,   241,
     241,   241,   241,   241,   241,     0,     0,     0,   245,   245,
     245,   241,     0,     0,     0,   241,     0,     0,     0,   241,
     245,   245,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    59,    40,    36,    38,   234,   237,   240,   256,   239,
     320,     0,     0,     0,   475,   476,     0,   470,     0,   378,
     536,     0,   534,     0,   379,     0,   396,     0,     0,     0,
       0,     0,     0,   586,     0,     0,     0,     0,     0,     0,
     680,     0,   597,   604,     0,   680,     0,   343,   356,   357,
     358,     0,     0,     0,     0,   340,   654,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
     500,     0,     0,     0,     0,   526,     0,     0,     0,   523,
       0,   522,     0,   532,     0,     0,     0,   561,   457,   234,
     252,   259,   258,     0,     0,   438,   437,   433,   432,     0,
     409,   402,   114,   111,   126,   127,   184,   245,   245,   245,
     245,   245,   245,   186,     0,   122,     0,     0,     0,     0,
       0,   245,    91,     0,     0,   245,    99,     0,     0,   245,
       0,     0,   162,   163,   164,   167,   168,     0,   173,   178,
     232,     0,     0,   231,   260,   249,   316,     0,   315,   314,
       0,   313,     0,     0,     0,   383,     0,   559,   576,     0,
     594,   578,     0,     0,     0,   587,   585,   569,   570,   571,
     573,     0,   680,     0,   657,   493,     0,   659,     0,   351,
     348,     0,   682,     0,     0,     0,     0,     0,   680,   345,
       0,     0,     0,   342,   499,   513,     0,     0,     0,     0,
       0,   524,   525,   268,   520,   502,     0,     0,     0,   254,
     863,     0,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   242,     0,    72,    74,    76,     0,
     241,     0,     0,     0,   241,     0,     0,     0,   108,   110,
       0,   238,   234,     0,   265,   256,   321,   477,   381,     0,
     537,   535,     0,   592,   593,     0,     0,     0,   680,     0,
     656,   658,   359,   344,   687,   686,   683,   685,   684,     0,
     352,   350,     0,   527,     0,     0,   533,     0,   501,     0,
       0,     0,     0,     0,     0,   429,     0,     0,   408,    80,
      82,    78,    84,    86,    88,   187,     0,   234,   246,    90,
     245,    93,    95,    98,   245,   101,   103,   106,   170,   233,
     262,   261,     0,   226,   227,     0,   575,   577,   591,   588,
       0,   661,   829,   346,     0,   521,     0,   503,   504,     0,
       0,   414,     0,   410,   411,   412,   244,   247,     0,     0,
     241,   241,     0,   241,   241,     0,     0,   266,     0,   589,
     590,   660,     0,     0,     0,     0,     0,     0,     0,   234,
      92,   245,   245,   100,   245,   245,   264,   263,   538,     0,
       0,     0,     0,     0,     0,   415,     0,   248,     0,     0,
       0,     0,   540,     0,     0,     0,     0,   540,     0,     0,
     413,    94,    96,   102,   104,   380,   539,     0,     0,     0,
     528,     0,     0,   507,   505,     0,   554,     0,     0,     0,
     540,   540,     0,     0,   506,     0,   555,   382,     0,   551,
     553,   552,     0,     0,     0,   530,   529,     0,   508,   556,
     557,   541,   549,   543,     0,   545,   550,   547,     0,   540,
       0,   544,   542,   548,   546,   531,     0,     0,     0,     0,
       0,     0,     0,   509,   510
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,   600,   963,  1154,  1155,  1153,   601,   602,   953,
    1149,   954,  1150,   610,  1331,  1332,  1333,  1631,  1629,  1630,
    1632,  1633,  1634,  1641,  1890,  2000,  2001,  1645,  1894,  2003,
    2004,  1649,  1341,  1342,   616,  1097,   352,    18,    19,   582,
    1158,  1666,  1599,  1803,  1368,  1638,  1884,  1778,  1958,   843,
    1276,  1277,  1073,  1904,  1973,  1585,    80,   261,   262,   467,
     268,   269,   270,   487,   271,   484,   758,   485,   754,  1174,
    1175,   746,  1163,  1671,   272,    20,    63,   115,   326,    21,
      22,  1032,  1033,    23,    24,   741,    88,    25,    26,    27,
    1199,    28,  1078,  1754,  1613,  1875,  1948,  2018,  1872,    72,
     136,   595,   850,  1082,  1611,  1288,   848,    29,    30,   109,
     324,   576,   579,   840,  1068,  1069,  1070,    31,    83,   750,
      32,    96,    33,    34,    35,  1589,  2062,  2063,    61,  1055,
    1056,  1683,  1681,  2029,  2055,  1385,  1057,   988,   787,   798,
     998,   999,   552,  1003,   833,   834,    36,    78,    79,    37,
     557,   558,   559,  1228,  1242,  1566,    38,    39,   301,   302,
      40,   316,   568,    41,    42,   291,   513,    43,  1280,  1606
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1573
static const yytype_int16 yypact[] =
{
   10714,   228,  -135,   100, 10616,   116, -1573,   703, -1573,   -46,
     208, -1573,    46, -1573,   226,    38,    78,   239,  -229, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573,   477,   526,   568,   602,   -92,   343,
     398,   623,   625,    93,   630,   663,   398, -1573,   396,   488,
     398,   408, -1573,    84,    96,   107,   674,   121,   130,   244,
     366,   367,   534,   679,   686,   534,   428,    86,   334, -1573,
    6181,   695,   536,    40, -1573,   700, -1573, 10714,   137,    92,
     634,     9,   350,    30,   -12,   452,   722,   710,   373,   601,
     388,   491,   387,   484,   780, -1573,   129,   785,   398,   438,
     454,   809, -1573, -1573, -1573,   -96, -1573,   570, -1573,   574,
   -1573, -1573,   581, -1573,   583, -1573,   592, -1573,   616, -1573,
     622, -1573, -1573, -1573, -1573, -1573,   840, -1573,   624,   862,
    8573,  8573, -1573, -1573,   882,   284, -1573, -1573, -1573, -1573,
     893,  8573,  8573,  8573, -1573, -1573, -1573,  7025, -1573, -1573,
     556, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,   582,
     584,   600,   620,   644,   668,   684,   735,   755,   784,   868,
     883,   890,   907,   911,   912,   915,   917,   919,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   932,   933,   934,
     935,   936,   937,   942,   943,   944,   945,   946,   948,   949,
     950,   951,   952,   953,   954,   958,   959,   961,   963,   972,
     974,   975,   976,   980, -1573, -1573,   982,   983,   990,   991,
     992,   993,   994,   995,   996,   997,   999,  1000,  1001,  1002,
    1005,  1006,  1010,  1011,  1017,  1018,  1020,  1024,  1025,  1028,
    1034,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  8573,
   11066,  -103, -1573,   572,    43,    47,    16,    36,   -89,   673,
   -1573, -1573,  1153, -1573, -1573,  1200,  1266, -1573, -1573, -1573,
   -1573,   449,   110,  1250,   442,  1337,   187,   467,  1339,  1152,
    1183,    62,  1402, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573,   159, -1573,  1404,  1405, -1573, -1573, 10814,    82,  1406,
    1232,  1159,  1412,    82, -1573, -1573,   376, -1573,  1238,   457,
    1162, -1573,  1417,  1422,   -45,  1400, -1573,   259,  -167,    40,
    1425,  1430,  1432,  1435,  1437,  1440,  1445,  1446,   246,  1447,
     248,  7575,  7575, -1573,  1451,  8573,  8573,  1230,  1230, -1573,
    8573,  1054,    -1,  1453, -1573,  8573,  6528,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  1102,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  8573,  1109,  8573,  8573,  8573,  1115,  8573,  8573,  8573,
    8573,  8573,  8573,  7144,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  1116,  1117,  1119,  1121,  1125,  8573,
    8573,  1126,  1127,  1128,  8573,  8573,  1481,  1130,  1132,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  1140,  2666, -1573,  8573,  8573,  8573,  8573,  8573,    45,
    1142,   696,  8573,  6678,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  1498, -1573,    40,  1499,
    8573,  1500,  1501,   -54,  1149,   242,  1507,    40, -1573, -1573,
   -1573,   318, -1573,    40,  1361,  1342, -1573,  1517, -1573, -1573,
    1518,  1521,  1522,  1523,  1524, -1573,  1526,  1528,  1532, 10814,
    1535,  1318,  1537,  1538,  1540,  1542,  1545,  1196,  1547,    20,
     441,  1551, -1573, -1573, -1573, -1573,   189,  1194,  1201, -1573,
   -1573,  1203,  1203,  1203,  1203,  1203, -1573,  1203, -1573,  1204,
    1203,  1203,  1203,  1505, -1573,  1505, -1573,  1203,  1203,  1203,
    1208,  1505,  1203,  1505, -1573, -1573, -1573, -1573, -1573,  1213,
    1214, -1573,    73, 10814,  1568,  1570,  1578,  1253,  1254, -1573,
     175,  1608,  1615,  1441,  1270, -1573, -1573, -1573,  1465,  1664,
    1490,  1414,  1667,    62,  -111, -1573,   316, -1573, -1573,    48,
   -1573,  8573,  1502,    40,  -186,   454, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573,  1674,  1675,   -83, -1573,  1674,   227, -1573,
    1564, -1573,  1323,  7575,  6592,   362, -1573,  8573,  8573, -1573,
    1466,   126, -1573, -1573, -1573,  2989,  7491,  1610,  1634,  1677,
    3312,  3635,  3958,  4281,  4604,  4927, -1573,  1975,  2298,  2621,
    2944,  5250,  3267,  3590,  3913,  5573,  8953,  8978,   537,  4236,
    9001,  4559, -1573,  9024,  9049,  9072, -1573,  6647,  4882,  5205,
    5528,  5851,  2343,  1325,  9095,  9118,  9141,  9164,  9187,  9210,
    9233,  9270,  5897,  6278,  6306, -1573, -1573, -1573, -1573, -1573,
    9293,  6346,  1360,  1362,  1386,   565,   633,  1328,  1387,  1388,
    6386,  9318,  9341,  9364,  9389,  9412,  9435,  9458,  9481,  6544,
    6708,  6750,  6885,  7110,  7161,  7208,  7234,   745,  9504,  9527,
    9550,  7510, -1573, -1573,  7364,  2018,  8052,  8072,  8072, -1573,
      49, -1573, -1573,  1496,  8573,  8573,  1358,  8573, 11092,  1359,
    1363,  1364,  8573,   957,  1986,  1133,   889,   824,   824,   656,
     656,   656,   656,   682, -1573, -1573, -1573,  -186,  1592, -1573,
   -1573,  1365,   125,  1566,  1569,  1572, -1573, -1573, -1573,     6,
     -86,   673,  1342,  1342,  1574,  1548,    40, -1573,  1576, -1573,
      -5, 10814, 10814,  1725, -1573, -1573, -1573, -1573, -1573, 10814,
    1726,  1510,  1519, -1573, -1573, -1573, -1573, -1573, -1573,  1733,
   -1573,  1737, -1573, -1573,    82,    82,  1743, -1573, -1573, -1573,
   -1573, -1573, -1573,  1746, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573,  1746, -1573, -1573, -1573,  1747,  1753,  1585,
    1395,  8573, -1573, 10814, 10814, 10814,  1573,    82,  1520,   123,
     214,  1582,  1759,   429,  1761,   250,  1765,  1766,  1595, -1573,
   -1573,  1767,   372, -1573,  1153, -1573,  1771, -1573, -1573, -1573,
     621,  7575,  1721,  1617,  -186, -1573, -1573,  1758,  -140, -1573,
     360,  1423, -1573,  -140,  1423,  1605,  8573, -1573,  8573, -1573,
    8573,  8006,  7049,  1429,  8573,  8573, -1573,  8573,  6619,  1639,
    1639,  8573, -1573, -1573, -1573, -1573, -1573, -1573,  8573,  8573,
    8573,  8573, -1573,  8573,  8573,  8573, -1573, -1573, -1573, -1573,
    8573,  8573, -1573,  8573, -1573, -1573, -1573, 10814, 10814,  8573,
    8573,  8573,  1788, -1573,  1469,  1472,  1476,  1477,  1478,  1480,
   -1573, -1573, -1573,  8573,  8573,  8573, -1573,  8573,  1449,  1450,
    1452,  1483,  1805,  1487,  1809,  1491,  1460,  1461,  8573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  8573, -1573,  8573, -1573, -1573, -1573,
    8573, -1573, -1573,  8573,  1466,  8072,  8072,  1602, 11117,  8573,
   -1573, -1573, -1573,  1466,  1691,    40,  1818,   -54,  1694,  1694,
    1694,  8573,  1823,  1825,  1502, -1573, -1573,    40,  8573,   -60,
      40,  1473,  1680,  1685,  1482, -1573, -1573, 10814, 10649, -1573,
   -1573,  1837,  1842, -1573, -1573,  1493,  1495,   363,  -134,   661,
    -134,  -134, -1573,   381,  -134,  -134,  -134,   661,   661,  -134,
    -134,  -134,   391,   661,  -134,   661,  1503,  1504,  1792,  8573,
    7575, -1573, -1573, -1573,  1707, -1573,  1508, -1573,  1512,  1515,
    1529,  1530,   393, -1573,  1623,   123,  1875,   251,  1832, -1573,
    1760,  1647,   123,   252,  1714,  1890,   -97,  1891,  1539,  1744,
     460,  1541,  1543,  1749,  1553,   424, -1573,  1895,  1466, -1573,
   -1573,  1906,    11,  1907,  1910,  1911,  1560,   588, -1573,  1575,
   -1573,   610,  8573,  1731, -1573,  7641,  1774,  1915, -1573, -1573,
    1928,  7988,  -127, -1573,  -127, -1573, -1573,  7575,  8472, -1573,
    8573, -1573,  8930,   939,  9573,  8573,  8573,  1579,  1581,  9610,
    9633,  9658,  7607,  7657,  9681,  9704,  9729,  9752,  9775,  9798,
    1583,  1584,  9821,  9844,  7705,  1586,  1591,  1593,  1594,  1597,
    1599,  1603,  1007,  7851,  9867,  9890, -1573, -1573, -1573,  1604,
     439,  1606,   450,  1613, -1573, -1573,  9913,  8123,  8171,  8200,
    9950,  9973,  8589,  8637,  1031,  1094,  1123,  1607,  1614,  8573,
    1466,  8573,  1577,  1466,  1466,  1466,  1616,  1880,  1803,  -186,
   -1573, -1573,  1791,  1620,  1625,  1626,  7575,  1931,     7,  1617,
   -1573,  7575,  8573,  1627, -1573, -1573,   -60,  8573,  1663,  1665,
    1945, 10649, 10649, -1573,  1787,  1969,  1666,  1668,  1695,  1976,
    2020,  1696,  2049,   102, -1573, -1573, -1573,  1902,  1909, -1573,
   10649, -1573, -1573,  1869,   586, -1573,  2060, -1573, -1573,  1850,
    2063, -1573,  2067, -1573, -1573, -1573,  1717,  9998, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,   589,   123,
    2071,  2072,  2078,  2079, -1573,  2087,  1735,   458,  1736,  1853,
     123, -1573,  1317,  1987,  1741,   470,  1856,   123,  2097,   263,
     372, -1573,   337,  8573,  1745,  1752,  1755,  2099,  2099,  1763,
    1945,    25,   372, 10814, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573,   588,   483,   588,   -18,    75,  1751, -1573,  1156,   482,
   -1573, -1573,  7575,  1881,  2096, -1573, -1573,  7575,   510, -1573,
    1946, -1573, -1573,  7575,  8573, -1573, -1573,  8573, -1573, 10021,
   10630, -1573, -1573, -1573, -1573, -1573,  8573,  8573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,  8573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573,  8573,  8573, -1573,
   -1573,  1798,  1798,  1798, -1573,  1801,   813, -1573,  1804,   869,
   -1573,  1798,  1798, -1573,  8573,  8573,  8573, -1573, -1573,  8573,
    8573, -1573,  8573, -1573,  8573, -1573,  8573, -1573, -1573,  1770,
    1772,  1577,  1773,  1775,  1776, -1573,  8573,  8573,  1502,  1691,
   -1573,  2128,  2128,  2128,  8573,  8573,  2131,  1731,  7575,  2099,
   -1573, 10044,  2132,  2134, -1573,   518, -1573, -1573, 10649, -1573,
   -1573,  2133,  8573,  2135,  2100,   -13,  8573, -1573, -1573, -1573,
   -1573, -1573, -1573,  1783,  1786,  1789,  8573, -1573, -1573, -1573,
    1707,  2092, -1573,  1793,  2145, -1573,   661, -1573,   661,   661,
    8573, -1573,  2103, -1573,   523,  1794,  1795,  1806,  1802, -1573,
     123, -1573,   123,  1812,   525,  1729, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573,  1963,   123, -1573,
    1814,   527,  1817,  1932,   123,   531,  1822,  2031,  2032,  1829,
   10069,  2132,  2099,  2099, -1573,   535,   539,  2134,   543,    24,
   -1573, -1573, -1573,   547, -1573, -1573, -1573, -1573,  2183, -1573,
   -1573,   610,  8573,  8573, -1573, -1573,  1831, -1573,  8107, -1573,
    8454,  1835,  2107,  1731, 10092, 10115, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, 10138, 10161, 10184,  1798,
    1798,  1798,  1798,  1798,  1798,  1179, 10207,  2139,  2022,  2022,
    2022,  1798,  1851,  1852,  1854,  1798,  1857,  1858,  1859,  1798,
    2022,  2022, 10230, 10253, 10290, 10313, 10338,  8660, 10361, 10384,
   -1573, -1573, -1573, -1573, -1573, 10983,  -173,  7575,  1617,  1803,
   -1573,   550,   552,   567,  7575,  7575,  2188, -1573,   569,  2199,
   -1573,   571, -1573,   575, -1573,  2215, -1573,   577, 10409,   579,
    1863,  1864,  2069, -1573, 10432,  1865,  1867,  1876, 10455,   628,
   -1573,  2052, -1573, -1573, 10478, -1573,  2375, -1573, -1573, -1573,
   -1573,  2229,   585,   590,   123, -1573, -1573,  2698,  3021,  3344,
    3667,  3990,  4313,  2184,   615,   123, -1573,   123,  1882,   617,
      25,  8573,  1883,  1885,  1945, -1573,   636,   639,   641, -1573,
    2234, -1573,   645, -1573,   517,  2242,  2192, 10668, -1573,    75,
   -1573,  7575,  7575,  2246,  2251, -1573,  7575, -1573,  7575,  7988,
    1899, -1573, -1573, -1573, -1573, -1573, -1573,  2022,  2022,  2022,
    2022,  2022,  2022, -1573,  8573, -1573,  2253,  2202,  1901,  1903,
    1904,  2022, -1573,  1935,  1938,  2022, -1573,  1939,  1940,  2022,
    1908,  1913, -1573, -1573, -1573, -1573, -1573,  8573, -1573, -1573,
   -1573,  2076,  8573, -1573,  2138,  1502, -1573,  2269, -1573, -1573,
    8573, -1573,  2029,  2086,  2272, -1573,  2273, -1573, -1573,  2277,
     955, -1573,  2278,  8573,  8573, -1573, -1573, -1573, -1573, -1573,
   -1573,  2226, -1573,  4636, -1573, -1573,  4959, -1573,  1927, -1573,
   -1573,   649, -1573,  2216,  2168,  2147,  2140,  2042, -1573, -1573,
     651,   654,   123, -1573,    24, -1573, 10501,  2132,  2134,   730,
    2108, -1573, -1573, -1573, -1573, -1573,  2290,   -19,   256, -1573,
   -1573,  2279,  1947,   732,  2301,  2217,  1958,  1974,  1977,  1978,
    1979,  1980, 10524, -1573,  1981,  2329, -1573, -1573, -1573,  1983,
    1798,  1982,  1985,  1988,  1798,  1990,  1991,  2003, -1573, -1573,
   10547, -1573, 10983,   261,  2195,  1617, -1573,  7575, -1573,  2340,
   -1573, -1573,  2019, -1573, -1573,  2027, 10570, 10593, -1573,  5282,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,  5605,
   -1573, -1573,   736, -1573,   738,   741, -1573,  2341, -1573,  2374,
    2383,  2033,  2034,  8573,  2385, -1573,  2037,   -33, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573,  2393,    75,  2039, -1573,
    2022, -1573, -1573, -1573,  2022, -1573, -1573, -1573, -1573, -1573,
    2191,  2197,  2099, -1573, -1573,  2057, -1573, -1573,   964, -1573,
    5928, -1573, -1573, -1573,  2227, -1573,   772, -1573, -1573,  2402,
    2411,  7575,  2396, -1573, -1573, -1573, -1573, -1573,  2416,  2065,
    1798,  1798,  2066,  1798,  1798,  2259,  2263,  2073,  2422, -1573,
   -1573, -1573,  2429,  2431,  2422,  2081,  2082,  8573,  2230,    75,
   -1573,  2022,  2022, -1573,  2022,  2022, -1573, -1573, -1573,   743,
     774,  2091,   855,  2094,  2237,  7575,  2251, -1573,  2095,  2098,
    2101,  2104, -1573,  2445,  2448,  2422,  2422, -1573,  2249,  2449,
    1947, -1573, -1573, -1573, -1573,    74, -1573,  2106,   858,   861,
      79,  2453,   874, -1573, -1573,   -10,  2318,   328,   338,  2422,
   -1573, -1573,  2378,  2214, -1573,  2249, -1573, -1573,    28, -1573,
   -1573, -1573,   266,   270,   876,    79,    79,  2310, -1573, -1573,
   -1573, -1573, -1573, -1573,     4, -1573, -1573, -1573,   339, -1573,
    2240, -1573, -1573, -1573, -1573,    79,    65,  2289,  2294,  2296,
    2302,  2468,  2470, -1573, -1573
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1573,  2391,   -80, -1573, -1573, -1573, -1573,  -824, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573,  1621,  2142, -1573,  -209,  -577,
    1114, -1573, -1272, -1573,   815, -1211, -1573, -1556, -1573,  -973,
   -1573,   885, -1165, -1573, -1573, -1256, -1573, -1573,  2026,  -255,
    -259,  2021,  -454,  1672, -1573, -1573,   379, -1573, -1573, -1573,
    1331,  1534,   272,  -129, -1573, -1573, -1573,  2397,  1924, -1573,
   -1573, -1030, -1573, -1573, -1573, -1573, -1573, -1573, -1573, -1573,
   -1134, -1573,  -751, -1573, -1573, -1573, -1573, -1573,   474,   530,
    2437,  2174, -1573,  1670, -1573,   758,  1933, -1573, -1573, -1573,
   -1573, -1573, -1573, -1573, -1573, -1025,  1258, -1573, -1573, -1573,
   -1573,   564, -1573, -1573, -1573,   802, -1573,   459, -1573,  1286,
    1276, -1572, -1551, -1567, -1449, -1246, -1573,  -976,   698,   161,
     -68,  -782,  -364,  1738, -1040, -1573, -1573, -1573,  2395, -1573,
    -295, -1573,  1723,  1134, -1006, -1573, -1573, -1573, -1573,  2040,
   -1573, -1573, -1573, -1573, -1573,  2221, -1573, -1573, -1357, -1573
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -643
static const yytype_int16 yytable[] =
{
     260,  1169,  1586,  1600,  1377,  1237,  1251,   845,   475,  1181,
    1182,   473,  1245,  1200,  1588,  1742,  1007,  1008,   564,   443,
    1677,   468,  1013,  1596,  1015,   778,   971,  1375,   329,   755,
    1736,   829,  1086,   293,   294,   295,   296,   297,   298,   266,
    1076,  -471,  1272,   266,   469,   829,  -473,  1386,  1387,  1994,
    -472,   709,   837,  1076,    76,   951,   289,  1691,   474,   466,
     341,   342,   581,   710,  1744,   981,  1409,   743,  -642,  2107,
     584,   347,   348,   349,   583,  2076,  1939,   351,  1801,   577,
     507,    84,  1597,  1779,  1780,   553,   830,   110,   744,   142,
    1266,   809,  2065,    47,  1790,  1791,    99,  2072,   554,   116,
     830,  1207,  1083,    48,  1085,  2101,  1398,  1399,  1400,  1401,
     118,   606,   607,   492,  2089,   303,  1596,   982,  1172,    62,
    1208,  1639,  1640,  1678,   121,    87,  1027,   476,   443,  1147,
    1650,  1651,   318,   123,    13,   768,   444,   445,   446,   447,
     448,   449,   450,   810,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,  2066,
     964,    85,   581,   851,  2066,  2090,  1402,   829,   466,  1692,
     100,   304,   477,   974,   811,  1597,   578,   983,  2102,   442,
     279,  1173,    73,   275,   276,  1802,   493,   143,   745,   812,
     499,   330,   293,   294,   295,   296,   297,   298,   290,  1424,
     280,  1995,  1745,   277,   299,  1940,   319,  1388,   111,   737,
    1434,  1876,  1877,  1878,  1879,  1880,  1881,  1571,  1077,   711,
     555,  1590,   830,   952,  1693,  1889,   112,   508,  1746,  1893,
    2108,  1289,   984,  1897,  2077,  1435,  1267,   101,  2067,    86,
     117,   113,  -642,  2067,   831,   832,  1593,   125,   608,    77,
     864,   119,  2068,    13,  1686,   470,  1761,  2068,   556,  1250,
     838,   839,   330,   500,    93,   122,   603,  1074,   114,   477,
     604,   779,   973,   320,   124,   611,   615,   617,   618,   619,
     620,   621,   622,   623,   624,   625,  1935,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   979,   643,   644,   645,  1934,   647,   648,   649,
     650,   651,   652,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   844,  1359,  1737,  1738,   278,   670,
     671,  1290,  2091,  1291,   675,   676,  2095,  1598,   712,   680,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   972,  1376,   299,   704,   705,   706,   707,   708,   127,
     129,   472,   718,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   852,   300,   126,   855,
     260,   310,   267,  1800,  -471,  1668,   267,   985,   986,  -473,
    1712,   863,  1713,  -472,  1999,   989,  1701,  1576,  2002,  1403,
    1404,  1405,   509,   510,   511,   512,   818,  1706,  1767,  1768,
    1769,  1770,  1771,  1772,  1028,  1029,  1030,  1031,    44,  1416,
    1781,  1418,  1419,  2082,  1785,  1047,    74,   140,  1789,  2092,
    2103,  1941,  1048,  2096,    13,   495,   780,  2032,   141,  1021,
    1022,  1023,  1717,  2079,    81,  1034,    45,  2093,  1406,  1577,
     570,  2097,   593,  1718,   597,  2038,  2039,  1970,  2040,  2041,
     501,   565,  1038,   854,   859,   860,   752,  1869,  2058,  2059,
      89,  1039,  2094,  1719,   865,  1604,  2098,   967,  1859,   995,
     996,  1041,  1239,  1246,  1049,  1971,   781,  1720,  1050,  1942,
    -332,   841,  2084,  1804,  1573,   496,  1721,   581,  1605,  2080,
     128,   130,   490,  2104,   753,  1051,   515,   516,   497,  1578,
     314,   566,  1865,  1170,  1052,   491,  1176,   861,   862,    90,
     502,   819,   311,  1110,  1111,   315,   868,  1866,  1724,  2081,
      94,    75,    95,   503,  1729,    82,  1722,   444,   445,   446,
     447,   448,   449,   450,  1053,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
    1035,    91,  2083,    46,  1579,   444,   445,   446,   447,   448,
     449,   450,  1369,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,  2060,   748,
     477,   571,   594,  1255,   594,    92,  1042,  1240,  1247,  1054,
     567,   608,  1256,  1274,   325,  1275,  1747,  -332,   105,  1574,
     104,  2085,  2086,  1183,   107,   131,    97,   131,    98,  1411,
    1969,   106,  1422,   102,   955,   956,   108,   958,  1412,   344,
     345,  1423,   442,   444,   445,   446,   447,   448,   449,   450,
    2105,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   103,  1060,   132,   281,
     132,  1831,   322,   835,   836,  1061,   133,   120,   264,  1960,
    1832,   134,   137,  1964,  1841,  1997,   463,   464,   465,   138,
    1855,   135,   144,   265,  1833,  1850,   799,  1851,   263,  1836,
    1060,   282,   804,   273,   806,   292,  1159,   305,  1061,   714,
     715,  1062,   716,   464,   465,   717,  2007,  1079,  1080,  1063,
    1205,  1206,   283,  1000,  1001,   306,  1004,  1005,  1006,   308,
     284,  1020,  1009,  1010,  1011,  1209,  1210,  1014,  1211,  1212,
    1974,   478,   285,   313,  1062,  1148,   312,  2037,  1213,  1212,
    1234,  1235,  1063,   307,  1156,   444,   445,   446,   447,   448,
     449,   450,  1064,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,  1087,   309,
    1088,  1261,  1262,   317,  1092,  1093,    64,  1094,   321,  2021,
    2022,  1099,  2024,  2025,   323,  1064,  1335,  1336,  1100,  1101,
    1102,  1103,   286,  1104,  1105,  1106,  1065,  1338,  1339,   325,
    1107,  1108,   327,  1109,   479,  1431,  1235,  1643,  1644,  1112,
    1113,  1114,  1932,   287,  -300,   331,  1919,  1569,  1235,   332,
      65,   480,  1905,  1122,  1123,  1124,   333,  1125,   334,  1065,
    1594,  1273,  1929,   338,   481,   339,    66,   335,  1136,  1264,
     459,   460,   461,   462,   463,   464,   465,  1137,  1138,  1139,
    1140,  1141,  1142,  1143,  1144,   340,  1145,  1609,  1610,   482,
    1146,   336,  1066,  1647,  1648,  1684,  1685,   337,   288,  1152,
    1707,  1235,  1715,  1235,  1726,  1235,    67,   483,  1730,  1262,
      76,  1166,  1739,  1740,   889,   890,  1741,  1740,  1171,  1592,
    1743,  1685,   346,    68,  1748,  1273,    69,  1806,  1807,  1808,
    1807,   353,  1980,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   921,   922,  1809,  1807,  1811,  1740,  1813,  1814,
     471,    70,  1815,  1816,  1818,  1819,  1821,  1822,   354,  1217,
     355,  1360,  1839,  1235,  1362,  1363,  1364,  1840,  1235,   444,
     445,   446,   447,   448,   449,   450,   356,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,  1849,  1235,  1853,  1235,   357,  1067,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     923,   924,  1278,  1860,  1814,  1282,  1861,  1740,  1862,  1740,
     358,  1287,  1864,  1816,  1913,  1914,  1923,  1235,  1930,  1235,
    1293,  1931,  1235,  2009,  2010,  1299,  1300,   444,   445,   446,
     447,   448,   449,   450,   359,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     360,   444,   445,   446,   447,   448,   449,   450,    71,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1361,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,  1936,  1685,  1945,
    1610,   361,  1378,  1983,  1235,  1984,  1814,  1381,  1985,  1816,
    2042,  2043,   945,   946,   444,   445,   446,   447,   448,   449,
     450,   362,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,  2013,  2014,  2044,
    2045,   975,   976,   444,   445,   446,   447,   448,   449,   450,
     363,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   444,   445,   446,   447,
     448,   449,   450,  1580,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   444,
     445,   446,   447,   448,   449,   450,   486,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,  2047,  2043,  1614,  2070,  2043,  1615,  2071,  2043,
     788,   789,   790,   791,   364,   792,  1626,  1627,   794,   795,
     796,  2074,  2075,  2099,  2043,   800,   801,   802,  1628,   365,
     805,  1164,  1165,  1672,  1673,   488,   366,  1635,  1636,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   367,  1652,  1653,  1654,   368,   369,  1655,
    1656,   370,  1657,   371,  1658,   372,  1659,   373,   374,   375,
     376,   377,   378,   379,   380,   381,  1665,  1667,   382,   383,
     384,   385,   386,   387,  1674,  1675,  1296,  1297,   388,   389,
     390,   391,   392,   350,   393,   394,   395,   396,   397,   398,
     399,   489,  1688,   494,   400,   401,  1694,   402,  1602,   403,
    1436,  1437,  1438,  1439,  1440,  1441,  1698,  1442,   404,  1443,
     405,   406,   407,  1444,  1445,  1446,   408,  1447,   409,   410,
    1704,  1448,  1449,  1450,  1451,  1452,   411,   412,   413,   414,
     415,   416,   417,   418,  1453,   419,   420,   421,   422,  1454,
    1455,   423,   424,  1456,  1326,  1327,   425,   426,  1457,  1458,
    1459,  1460,  1461,   427,   428,  1462,   429,  1463,  1464,  1465,
     430,   431,  1466,  1467,   432,  1468,  1469,  1470,  1351,  1352,
     433,  1471,   434,   435,   436,   437,   438,   439,   440,   441,
     498,  1472,   504,   505,   506,   514,  1473,   517,   518,   560,
     561,  1474,  1475,  1476,   562,   563,   569,   572,  1477,  1478,
     574,  1479,  1480,  1481,  1482,   575,   580,  1483,   585,  1484,
    1485,  1486,  1487,   586,  1488,   587,  1489,  1490,   588,  1491,
     589,  1492,  1493,   590,  1494,  1495,  1496,  1497,   591,   592,
     596,  1353,  1354,  1498,   599,  1499,   609,  1500,  1501,   626,
    1502,  1503,  1504,  1505,  1506,  1507,   642,  1508,  1509,  1510,
    1511,  1512,   646,   665,   666,  1513,   667,  1514,   668,  1515,
    1355,  1356,   669,   672,   673,   674,   677,   678,  1516,   679,
    1517,  1518,  1519,  1520,  1521,  1522,  1523,   702,   713,  1524,
    1525,   736,   738,   740,   742,  1526,   747,  1527,  1528,  1529,
     749,  1530,   756,  1531,  1603,  1532,  1533,  1534,  1535,   757,
     759,   760,  1751,  1752,   761,   762,   763,   764,  1756,   765,
    1758,   766,  1536,  1537,  1538,   767,  1773,  1774,   769,   770,
     771,   772,  1539,   773,  1540,  1541,  1542,   774,   775,   776,
     784,  1543,   777,  1544,  1545,  1546,   782,   785,  1547,   786,
     793,   797,  1548,  1549,   803,  1550,  1551,  1552,  1553,   807,
     808,   813,  1554,   814,   444,   445,   446,   447,   448,   449,
     450,   815,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     816,   820,   817,  1555,  1556,  1557,  1558,  1559,   821,   822,
     444,   445,   446,   447,   448,   449,   450,   823,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   824,   444,   445,   446,   447,   448,   449,
     450,  1856,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   825,   826,   827,
     828,  1560,  1561,  1562,  1563,  1564,  1565,   847,   849,  1287,
     857,   842,   904,    13,   918,   925,   919,   444,   445,   446,
     447,   448,   449,   450,  1882,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     920,   926,   927,   -56,   957,   960,   965,  1900,   968,   961,
     962,   969,  1902,   966,   970,   977,   978,   980,   987,   990,
    1907,   991,  1436,  1437,  1438,  1439,  1440,  1441,   993,  1442,
     992,  1443,   994,  1916,  1917,  1444,  1445,  1446,   997,  1447,
    1002,  1019,  1016,  1448,  1449,  1450,  1451,  1452,  1017,  1018,
    1036,  1218,  1037,  1026,  1040,  1219,  1453,  1024,  1043,  1044,
    1046,  1454,  1455,  1045,  1059,  1456,  1071,  1072,  1075,  1081,
    1457,  1458,  1459,  1460,  1461,  1076,  1091,  1462,  1096,  1463,
    1464,  1465,  1115,  1116,  1466,  1467,  1117,  1468,  1469,  1470,
    1118,  1119,  1120,  1471,  1121,  1126,  1127,  1129,  1128,  1220,
    1130,  1131,  1221,  1472,  1132,  1133,  1134,  1135,  1473,   -58,
    1157,  1160,  1162,  1474,  1475,  1476,  1167,  1222,  1168,  1177,
    1477,  1478,  1178,  1479,  1480,  1481,  1482,  1179,  1180,  1483,
    1201,  1716,  1485,  1486,  1487,  1202,  1488,  1223,  1489,  1490,
    1203,  1491,  1204,  1492,  1493,  1224,  1494,  1495,  1496,  1497,
    1214,  1215,  1216,  1991,  1229,  1498,  1236,  1499,  1230,  1500,
    1501,  1231,  1502,  1503,  1504,  1505,  1506,  1507,  1238,  1508,
    1509,  1510,  1511,  1512,  1241,  1232,  1233,  1513,  1243,  1514,
    1244,  1515,  1248,  1249,  1252,  1253,  1254,  1257,  1263,  1258,
    1516,  1259,  1517,  1518,  1519,  1520,  1521,  1522,  1523,  1260,
    1265,  1524,  1525,  1268,  1269,  1270,  1271,  1526,  1284,  1527,
    1528,  1529,   856,  1530,  1279,  1531,  1283,  1532,  1533,  1534,
    1535,  1285,  1225,  1273,  1226,  1366,  1301,  2035,  1302,  1367,
    1314,  1315,  1370,  1319,  1536,  1537,  1538,  1320,  1384,  1321,
    1322,  1374,  1227,  1323,  1539,  1324,  1540,  1541,  1542,  1325,
    1334,  1389,  1337,  1543,  1357,  1544,  1545,  1546,   869,  1340,
    1547,  1358,  1390,  1365,  1548,  1549,  1371,  1550,  1551,  1552,
    1553,  1372,  1373,  1379,  1554,   444,   445,   446,   447,   448,
     449,   450,   870,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,  1382,
    1394,  1383,  1391,  1395,  1392,  1555,  1556,  1557,  1558,  1559,
     446,   447,   448,   449,   450,   871,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,  1393,  1396,  1397,  1407,  1436,  1437,  1438,  1439,  1440,
    1441,  1408,  1442,  1410,  1443,  1413,  1414,  1415,  1444,  1445,
    1446,  1417,  1447,  1420,  1425,  1426,  1448,  1449,  1450,  1451,
    1452,  1427,  1428,  1560,  1561,  1562,  1563,  1564,  1565,  1453,
    1429,  1430,  1432,  1567,  1454,  1455,  1433,  1568,  1456,  1570,
    1572,  1581,  1584,  1457,  1458,  1459,  1460,  1461,  1582,  1601,
    1462,  1583,  1463,  1464,  1465,  1607,  1608,  1466,  1467,  1587,
    1468,  1469,  1470,  1637,  1612,  1642,  1471,  1660,  1646,  1661,
    1662,  1670,  1663,  1664,  1676,  1680,  1472,  1682,  1687,  1695,
    1689,  1473,  1696,  1690,  1700,  1697,  1474,  1475,  1476,  1703,
    1702,  1708,  1709,  1477,  1478,  1705,  1479,  1480,  1481,  1482,
    1711,  1723,  1483,  1710,  1834,  1485,  1486,  1487,  1714,  1488,
    1725,  1489,  1490,  1727,  1491,  1728,  1492,  1493,  1731,  1494,
    1495,  1496,  1497,  1732,  1733,  1734,  1749,  1760,  1498,  1753,
    1499,  1759,  1500,  1501,  1776,  1502,  1503,  1504,  1505,  1506,
    1507,  1777,  1508,  1509,  1510,  1511,  1512,  1782,  1810,  1783,
    1513,  1784,  1514,  1786,  1515,  1787,  1788,  1812,  1817,  1823,
    1824,  1825,  1827,  1516,  1828,  1517,  1518,  1519,  1520,  1521,
    1522,  1523,  1838,  1829,  1524,  1525,  1848,  1863,  1852,  1857,
    1526,  1858,  1527,  1528,  1529,  1867,  1530,  1868,  1531,  1870,
    1532,  1533,  1534,  1535,  1871,  1874,  1883,  1885,  1886,  1891,
    1887,  1888,  1892,  1895,  1896,  1898,  1903,  1536,  1537,  1538,
    1899,  1901,  1906,  1908,  1909,  1910,  1911,  1539,  1918,  1540,
    1541,  1542,  1912,  1915,  1922,  1924,  1543,  1925,  1544,  1545,
    1546,  1926,  1928,  1547,  1927,  1938,  1937,  1548,  1549,  1943,
    1550,  1551,  1552,  1553,  1946,  1944,  1947,  1554,   444,   445,
     446,   447,   448,   449,   450,  1949,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,  1950,  1957,   878,  1951,  1952,  1953,  1954,  1961,  1956,
    1959,  1962,  1972,  1975,  1986,  1963,  1965,  1966,  1555,  1556,
    1557,  1558,  1559,   444,   445,   446,   447,   448,   449,   450,
    1967,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,  1976,  1987,  1436,  1437,
    1438,  1439,  1440,  1441,  1977,  1442,  1988,  1443,  1992,  1989,
    1990,  1444,  1445,  1446,  1993,  1447,  1996,  1998,  2005,  1448,
    1449,  1450,  1451,  1452,  2006,  2015,  1560,  1561,  1562,  1563,
    1564,  1565,  1453,  2008,  2016,  2012,  2017,  1454,  1455,  2019,
    2026,  1456,  2020,  2023,  2027,  2028,  1457,  1458,  1459,  1460,
    1461,  1740,  2030,  1462,  2031,  1463,  1464,  1465,  2033,  2034,
    1466,  1467,  2049,  1468,  1469,  1470,  2036,  2046,  2056,  1471,
    2048,  2057,  2051,  2061,  2064,  2052,  2073,  2078,  2053,  1472,
    2087,  2054,  2069,  2076,  1473,  2100,  2106,  2109,  2111,  1474,
    1475,  1476,  2110,  2113,  2112,  2114,  1477,  1478,   274,  1479,
    1480,  1481,  1482,  1669,  1805,  1483,  1750,  1837,  1485,  1486,
    1487,  1098,  1488,   605,  1489,  1490,   739,  1491,   751,  1492,
    1493,  1161,  1494,  1495,  1496,  1497,  1058,  1380,   328,   846,
    2050,  1498,   139,  1499,   598,  1500,  1501,  1873,  1502,  1503,
    1504,  1505,  1506,  1507,  1084,  1508,  1509,  1510,  1511,  1512,
     853,  1595,  1854,  1513,  2088,  1514,  1575,  1515,  1591,   343,
    1025,  1012,   573,     0,  1699,     0,  1516,     0,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,     0,   783,  1524,  1525,     0,
       0,     0,     0,  1526,     0,  1527,  1528,  1529,     0,  1530,
       0,  1531,     0,  1532,  1533,  1534,  1535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1536,  1537,  1538,     0,     0,     0,     0,     0,     0,     0,
    1539,     0,  1540,  1541,  1542,     0,     0,     0,     0,  1543,
       0,  1544,  1545,  1546,     0,     0,  1547,     0,     0,     0,
    1548,  1549,     0,  1550,  1551,  1552,  1553,     0,     0,     0,
    1554,   444,   445,   446,   447,   448,   449,   450,   902,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   879,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1555,  1556,  1557,  1558,  1559,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
     903,  1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,     0,
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
    1842,  1485,  1486,  1487,     0,  1488,     0,  1489,  1490,     0,
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
     459,   460,   461,   462,   463,   464,   465,     0,     0,   880,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1555,  1556,  1557,  1558,  1559,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,   703,  1436,  1437,  1438,  1439,  1440,  1441,
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
       0,  1483,     0,  1843,  1485,  1486,  1487,     0,  1488,     0,
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
       0,     0,   881,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1555,  1556,  1557,
    1558,  1559,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,   866,  1436,  1437,  1438,
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
    1481,  1482,     0,     0,  1483,     0,  1844,  1485,  1486,  1487,
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
     463,   464,   465,     0,     0,   883,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1555,  1556,  1557,  1558,  1559,   444,   445,   446,   447,   448,
     449,   450,     0,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,   872,
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
       0,  1479,  1480,  1481,  1482,     0,     0,  1483,     0,  1845,
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
     460,   461,   462,   463,   464,   465,     0,     0,   884,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1555,  1556,  1557,  1558,  1559,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,   873,  1436,  1437,  1438,  1439,  1440,  1441,     0,
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
    1483,     0,  1846,  1485,  1486,  1487,     0,  1488,     0,  1489,
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
       0,   885,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1555,  1556,  1557,  1558,
    1559,   444,   445,   446,   447,   448,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,   874,  1436,  1437,  1438,  1439,
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
    1482,     0,     0,  1483,     0,  1847,  1485,  1486,  1487,     0,
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
     464,   465,     0,     0,   891,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1555,
    1556,  1557,  1558,  1559,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,   875,  1436,
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
    1479,  1480,  1481,  1482,     0,     0,  1483,     0,  1920,  1485,
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
     461,   462,   463,   464,   465,     0,     0,   893,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1555,  1556,  1557,  1558,  1559,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,   876,  1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,
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
       0,  1921,  1485,  1486,  1487,     0,  1488,     0,  1489,  1490,
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
     898,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1555,  1556,  1557,  1558,  1559,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,   877,  1436,  1437,  1438,  1439,  1440,
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
       0,     0,  1483,     0,  1981,  1485,  1486,  1487,     0,  1488,
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
     465,     0,     0,   899,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1555,  1556,
    1557,  1558,  1559,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,   882,  1436,  1437,
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
    1480,  1481,  1482,     0,     0,  1483,     0,  1982,  1485,  1486,
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
     462,   463,   464,   465,     0,     0,   900,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1555,  1556,  1557,  1558,  1559,     0,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     886,  1436,  1437,  1438,  1439,  1440,  1441,     0,  1442,     0,
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
    2011,  1485,  1486,  1487,     0,  1488,     0,  1489,  1490,     0,
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
       0,     0,     0,  1554,   145,   146,   147,   148,   149,   150,
       0,     0,     0,     0,     0,     0,     0,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   153,   154,     0,   901,
       0,     0,     0,     0,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,  1555,  1556,  1557,  1558,  1559,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,     0,
     157,     0,     0,   158,   159,   913,     0,     0,     0,     0,
       0,     0,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,     0,     0,     0,   162,
       0,     0,  1560,  1561,  1562,  1563,  1564,  1565,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,     0,     0,   163,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,   165,     0,     0,     0,     0,     0,     0,
     166,   167,     0,     0,     0,   168,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,     0,   207,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,     0,     0,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,     0,   255,   256,   257,
     258,   145,   146,   147,   148,   149,   150,   259,     0,     0,
       0,     0,     0,     0,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   153,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,     0,
       0,     0,     0,     0,     0,   612,     0,     0,     0,     0,
       0,     0,   156,     0,     0,     0,     0,   157,     0,     0,
     158,   159,   444,   445,   446,   447,   448,   449,   450,   160,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,   914,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,     0,     0,     0,   444,   445,   446,
     447,   448,   449,   450,   915,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,   145,   146,   147,   148,   149,   150,   613,     0,     0,
     897,     0,     0,     0,     0,   151,   152,     0,     0,     0,
       0,     0,   164,   153,   917,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   719,     0,   720,   444,   445,
     446,   447,   448,   449,   450,     0,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,   156,  1095,   928,     0,     0,   157,     0,     0,
     158,   159,     0,     0,     0,     0,     0,     0,   614,   160,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   858,   207,     0,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   164,     0,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,     0,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,   259,     0,   721,     0,     0,     0,
       0,     0,     0,     0,     0,   444,   445,   446,   447,   448,
     449,   450,   937,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     0,   207,     0,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,     0,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,     0,   255,   256,   257,   258,   145,   146,
     147,   148,   149,   150,   722,     0,     0,     0,     0,     0,
       0,     0,   151,   152,     0,     0,     0,     0,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   444,
     445,   446,   447,   448,   449,   450,   938,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,   157,     0,     0,   158,   159,     0,
       0,     0,     0,     0,     0,     0,   160,     0,   939,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,   145,   146,   147,
     148,   149,   150,     0,     0,     0,     0,     0,     0,     0,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   153,
     653,   444,   445,   446,   447,   448,   449,   450,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,     0,     0,   164,
       0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
       0,     0,     0,   157,     0,     0,   158,   159,   444,   445,
     446,   447,   448,   449,   450,   160,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,   940,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,  1090,     0,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   164,   207,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
       0,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
       0,   255,   256,   257,   258,   445,   446,   447,   448,   449,
     450,   259,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   941,     0,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,     0,
     255,   256,   257,   258,   145,   146,   147,   148,   149,   150,
     259,     0,     0,     0,     0,     0,     0,     0,   151,   152,
       0,     0,     0,     0,     0,     0,   153,     0,     0,   942,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,     0,
     157,     0,     0,   158,   159,     0,   943,     0,     0,     0,
       0,     0,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   444,   445,   446,   447,   448,
     449,   450,   944,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,     0,     0,     0,   867,     0,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,   145,   146,   147,   148,   149,   150,
       0,     0,     0,     0,     0,     0,     0,     0,   151,   152,
       0,     0,     0,     0,     0,   164,   153,   444,   445,   446,
     447,   448,   449,   450,     0,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,     0,
     157,     0,     0,   158,   159,   444,   445,   446,   447,   448,
     449,   450,   160,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
       0,     0,  1281,     0,     0,     0,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,     0,   207,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   164,     0,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,     0,   255,   256,   257,
     258,     0,     0,     0,     0,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,   445,   446,   447,   448,   449,   450,   950,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,     0,   207,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,  1306,     0,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,     0,   255,   256,   257,
     258,   145,   146,   147,   148,   149,   150,   259,     0,     0,
       0,     0,     0,     0,     0,   151,   152,     0,     0,     0,
       0,     0,     0,   153,     0,  1307,   444,   445,   446,   447,
     448,   449,   450,     0,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,     0,     0,     0,     0,   157,     0,     0,
     158,   159,     0,  1318,     0,   447,   448,   449,   450,   160,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,  -643,  -643,  -643,  -643,  1286,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,     0,     0,     0,
     145,   146,   147,   148,   149,   150,     0,     0,  1089,     0,
       0,     0,     0,     0,   151,   152,     0,     0,     0,     0,
       0,     0,   153,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,   157,     0,     0,   158,
     159,   444,   445,   446,   447,   448,   449,   450,   160,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,     0,     0,  1755,  1328,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   164,   207,     0,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,     0,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,     0,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,   259,     0,     0,     0,     0,     0,
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
     148,   149,   150,   259,     0,     0,     0,     0,     0,     0,
       0,   151,   152,     0,     0,     0,     0,     0,     0,   153,
       0,  1344,   444,   445,   446,   447,   448,   449,   450,     0,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
       0,     0,     0,   157,     0,     0,   158,   159,     0,  1345,
       0,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1757,     0,     0,  1346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   146,   147,   148,
     149,   150,     0,     0,  1292,     0,     0,     0,     0,     0,
     151,   152,     0,     0,     0,     0,     0,     0,   153,   444,
     445,   446,   447,   448,   449,   450,     0,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
       0,     0,   157,     0,     0,   158,   159,   444,   445,   446,
     447,   448,   449,   450,   160,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,     0,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   164,   207,     0,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,     0,
     255,   256,   257,   258,     0,     0,     0,     0,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,   207,     0,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,     0,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1349,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   444,   445,
     446,   447,   448,   449,   450,  1350,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1797,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,     0,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,  1294,   444,
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
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
       0,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1295,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
     887,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   444,   445,
     446,   447,   448,   449,   450,   888,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,   892,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,   894,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   444,
     445,   446,   447,   448,   449,   450,   895,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,   896,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,   905,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,   906,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,   907,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,   908,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,   909,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,   910,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
     911,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,   912,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
     916,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   444,   445,
     446,   447,   448,   449,   450,   929,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,   930,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,   931,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   444,
     445,   446,   447,   448,   449,   450,   932,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,   933,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,   934,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,   935,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,   936,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,   947,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,   948,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,   949,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1298,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1303,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1304,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   444,   445,
     446,   447,   448,   449,   450,  1305,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1308,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1309,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   444,
     445,   446,   447,   448,   449,   450,  1310,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,  1311,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,  1312,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,  1313,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1316,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1317,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,  1329,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,  1330,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1343,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1347,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1348,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   444,   445,
     446,   447,   448,   449,   450,  1421,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1616,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1679,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   444,
     445,   446,   447,   448,   449,   450,  1735,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   444,   445,   446,   447,   448,   449,   450,  1762,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   444,   445,   446,   447,   448,
     449,   450,  1763,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   444,   445,
     446,   447,   448,   449,   450,  1764,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   444,   445,   446,   447,   448,   449,   450,  1765,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   444,   445,   446,   447,   448,   449,
     450,  1766,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   444,   445,   446,
     447,   448,   449,   450,  1775,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     444,   445,   446,   447,   448,   449,   450,  1792,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   444,   445,   446,   447,   448,   449,   450,
    1793,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   445,   446,   447,   448,   449,   450,  1794,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,     0,     0,  1184,     0,     0,
    1795,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1185,  1184,     0,     0,  1186,
       0,     0,  1187,     0,  1188,  1796,     0,  1189,     0,    50,
       0,     0,     0,     0,     0,     0,    51,     0,  1186,     0,
       0,  1187,  1190,  1188,     0,     0,  1189,     0,  1798,  1191,
    1192,     0,  1617,  1618,     0,     0,     0,  1619,     0,  1620,
       0,  1190,     0,     0,     0,     0,     0,     0,  1191,  1192,
       0,  1799,     0,    52,     0,     0,     0,     0,     1,     0,
    1193,     0,     2,     0,     0,     0,     0,     0,     0,    53,
       0,     0,  1621,  1622,     0,  1623,  1820,  1194,     0,  1193,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1826,
       0,     0,     5,     0,     0,     0,     0,     0,     0,    54,
       0,  1195,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     0,  1830,     0,     0,     0,    55,     0,     0,    56,
    1195,     0,     0,  1196,     0,     0,     0,     0,     0,     0,
       0,  1197,     0,     0,     0,  1835,     0,     0,    57,    58,
       0,     0,  1196,     0,     0,     0,     0,     0,     0,     0,
    1197,     0,     0,    59,     0,     0,     0,     0,  1933,     8,
       0,     0,     0,     0,     0,     0,     0,   519,   520,     0,
     521,     0,   522,   523,     0,     0,     0,     0,     0,     0,
       0,  1955,  1624,  1625,     0,     0,  1198,     0,   524,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,    10,  1968,  1198,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,   525,   526,   527,   528,
       0,     0,     0,     0,     0,   529,     0,  1978,     0,     0,
      12,    13,     0,     0,   530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,    15,     0,
    1979,     0,     0,     0,   531,     0,    16,     0,     0,     0,
       0,    60,   532,     0,     0,     0,     0,     0,     0,     0,
     533,     0,     0,     0,     0,     0,     0,   534,     0,     0,
     535,     0,     0,   536,   537,     0,     0,     0,     0,     0,
       0,     0,     0,   444,   445,   446,   447,   448,   449,   450,
     538,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,  1596,     0,     0,     0,     0,   539,
     540,     0,     0,   541,   542,     0,     0,     0,     0,   543,
       0,   544,     0,     0,     0,     0,   545,   546,     0,     0,
       0,     0,   547,   548,     0,     0,     0,     0,     0,   549,
       0,   550,     0,     0,     0,     0,   551,     0,     0,   443,
       0,     0,     0,     0,     0,     0,   444,   445,   446,   447,
     448,   449,   450,  1597,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,     0,   444,   445,   446,   447,   448,   449,   450,   466,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   444,   445,   446,
     447,   448,   449,   450,   959,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1151
};

static const yytype_int16 yycheck[] =
{
      80,   974,  1258,  1275,  1169,  1035,  1046,   584,   267,   985,
     986,   266,  1042,   989,  1260,  1587,   798,   799,   313,     3,
    1377,   124,   804,    41,   806,     5,    20,    20,   124,   483,
    1581,   142,   856,     3,     4,     5,     6,     7,     8,     3,
     180,     3,  1067,     3,   147,   142,     3,  1181,  1182,    82,
       3,     6,     4,   180,     8,     6,    47,    70,   267,    43,
     140,   141,   248,    18,    40,    70,  1200,   121,    43,     4,
     329,   151,   152,   153,   241,    85,    95,   157,   251,   124,
      18,     3,   100,  1639,  1640,     3,   197,     3,   142,     3,
      79,    18,    18,   228,  1650,  1651,     3,    18,    16,     3,
     197,   235,   853,     3,   855,   101,     4,     5,     6,     7,
       3,   112,   113,     3,    86,   127,    41,   122,   178,     3,
     254,  1332,  1333,  1379,     3,   354,     3,   216,     3,   953,
    1341,  1342,     3,     3,   217,   499,    10,    11,    12,    13,
      14,    15,    16,    70,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    85,
     737,    83,   248,   246,    85,   137,    64,   142,    43,   182,
      77,   183,   358,   750,   101,   100,   221,   182,   174,   259,
      88,   241,   228,    46,    47,   358,    76,   101,   242,   553,
       3,   358,     3,     4,     5,     6,     7,     8,   189,  1229,
     108,   234,   178,    66,   174,   224,    77,  1183,   124,   468,
    1240,  1767,  1768,  1769,  1770,  1771,  1772,  1247,   358,   174,
     138,  1261,   197,   174,   237,  1781,   142,   165,   204,  1785,
     165,   358,   237,  1789,   244,  1241,   225,   144,   164,     0,
     144,   157,   217,   164,   355,   356,  1271,     3,   249,   203,
     124,   144,   178,   217,  1388,   358,  1613,   178,   176,   356,
     212,   213,   358,    76,   356,   144,   346,   844,   184,   358,
     350,   251,   358,   144,   144,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,  1858,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   756,   383,   384,   385,  1857,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   583,  1149,  1582,  1583,   191,   409,
     410,  1082,    66,  1084,   414,   415,    66,   355,   293,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   355,   355,   174,   444,   445,   446,   447,   448,     3,
       3,   355,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   595,   357,   144,   598,
     470,     3,   356,  1665,   356,  1368,   356,   761,   762,   356,
    1430,   610,  1432,   356,  1960,   769,  1412,    70,  1964,   307,
     308,   309,   350,   351,   352,   353,   241,  1423,  1629,  1630,
    1631,  1632,  1633,  1634,   301,   302,   303,   304,   200,  1211,
    1641,  1213,  1214,    95,  1645,    63,   228,     9,  1649,   173,
     101,   185,    70,   173,   217,     3,     5,  2014,    20,   813,
     814,   815,  1458,   125,   228,   241,   228,   191,   356,   122,
       3,   191,   216,  1469,   216,  2021,  2022,   206,  2024,  2025,
       3,    95,    43,   246,   112,   113,   158,  1749,  2045,  2046,
       3,    52,   216,  1489,   358,     3,   216,   742,  1734,   784,
     785,   241,   241,   241,   122,   234,    55,  1503,   126,   243,
     241,   581,  2069,  1668,   241,    63,  1512,   248,    26,   181,
     144,   144,    63,   174,   196,   143,   357,   358,    76,   182,
      36,   145,     5,   977,   152,    76,   980,   607,   608,     3,
      63,   356,   144,   897,   898,    51,   616,    20,  1568,   211,
     197,    11,   144,    76,  1574,    15,  1552,    10,    11,    12,
      13,    14,    15,    16,   182,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     356,     3,   234,   345,   237,    10,    11,    12,    13,    14,
      15,    16,  1159,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  2047,   357,
     358,   144,   356,   143,   356,     3,   356,   356,   356,   237,
     234,   249,   152,     3,   355,     5,  1592,   358,   222,   356,
      56,  2070,  2071,   987,    60,    91,     3,    91,     3,    43,
    1902,   143,    43,     3,   714,   715,   228,   717,    52,   355,
     356,    52,   722,    10,    11,    12,    13,    14,    15,    16,
    2099,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,    79,   134,    35,
     134,    43,   108,   357,   358,    87,   142,     3,   142,  1890,
      52,   147,     3,  1894,  1714,  1957,    30,    31,    32,     3,
    1730,   157,   358,   157,  1700,  1725,   535,  1727,     3,  1705,
      79,    67,   541,     3,   543,   355,   965,   255,    87,    13,
      14,   123,    16,    31,    32,    19,  1972,   357,   358,   131,
     357,   358,    88,   791,   792,     3,   794,   795,   796,   356,
      96,   811,   800,   801,   802,    74,    75,   805,   357,   358,
    1905,    68,   108,   356,   123,   954,   255,  2019,   357,   358,
     357,   358,   131,    43,   963,    10,    11,    12,    13,    14,
      15,    16,   174,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   858,   178,
     860,   357,   358,     3,   864,   865,    83,   867,     3,  2000,
    2001,   871,  2003,  2004,   356,   174,   357,   358,   878,   879,
     880,   881,   168,   883,   884,   885,   218,   357,   358,   355,
     890,   891,     3,   893,   141,   357,   358,     4,     5,   899,
     900,   901,  1852,   189,   151,   255,  1832,   357,   358,   255,
     127,   158,  1805,   913,   914,   915,   255,   917,   255,   218,
     357,   358,  1848,     3,   171,   221,   143,   255,   928,  1058,
      26,    27,    28,    29,    30,    31,    32,   937,   938,   939,
     940,   941,   942,   943,   944,     3,   946,   357,   358,   196,
     950,   255,   251,     4,     5,   357,   358,   255,   244,   959,
     357,   358,   357,   358,   357,   358,   183,   214,   357,   358,
       8,   971,   357,   358,   357,   358,   357,   358,   978,  1263,
     357,   358,     9,   200,   357,   358,   203,   357,   358,   357,
     358,   355,  1918,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   357,   358,   357,   358,   357,   358,   357,   358,
     358,   228,   357,   358,   357,   358,   357,   358,   356,  1019,
     356,  1150,   357,   358,  1153,  1154,  1155,   357,   358,    10,
      11,    12,    13,    14,    15,    16,   356,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   357,   358,   357,   358,   356,   356,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     357,   358,  1072,   357,   358,  1075,   357,   358,   357,   358,
     356,  1081,   357,   358,    49,    50,   357,   358,   357,   358,
    1090,   357,   358,    49,    50,  1095,  1096,    10,    11,    12,
      13,    14,    15,    16,   356,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     356,    10,    11,    12,    13,    14,    15,    16,   345,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,  1151,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   357,   358,   357,
     358,   356,  1172,   357,   358,   357,   358,  1177,   357,   358,
     357,   358,   357,   358,    10,    11,    12,    13,    14,    15,
      16,   356,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   355,   356,   355,
     356,   752,   753,    10,    11,    12,    13,    14,    15,    16,
     356,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    13,
      14,    15,    16,  1253,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    13,    14,    15,    16,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   357,   358,  1294,   357,   358,  1297,   357,   358,
     522,   523,   524,   525,   356,   527,  1306,  1307,   530,   531,
     532,   357,   358,   357,   358,   537,   538,   539,  1318,   356,
     542,   969,   970,  1372,  1373,    45,   356,  1327,  1328,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   356,  1344,  1345,  1346,   356,   356,  1349,
    1350,   356,  1352,   356,  1354,   356,  1356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,  1366,  1367,   356,   356,
     356,   356,   356,   356,  1374,  1375,   357,   358,   356,   356,
     356,   356,   356,   249,   356,   356,   356,   356,   356,   356,
     356,    45,  1392,    63,   356,   356,  1396,   356,   162,   356,
       3,     4,     5,     6,     7,     8,  1406,    10,   356,    12,
     356,   356,   356,    16,    17,    18,   356,    20,   356,   356,
    1420,    24,    25,    26,    27,    28,   356,   356,   356,   356,
     356,   356,   356,   356,    37,   356,   356,   356,   356,    42,
      43,   356,   356,    46,   357,   358,   356,   356,    51,    52,
      53,    54,    55,   356,   356,    58,   356,    60,    61,    62,
     356,   356,    65,    66,   356,    68,    69,    70,   357,   358,
     356,    74,   356,   356,   356,   356,   356,   356,   356,   356,
      63,    84,    63,   251,   221,     3,    89,     3,     3,     3,
     178,    94,    95,    96,   255,     3,   178,   255,   101,   102,
       3,   104,   105,   106,   107,     3,    26,   110,     3,   112,
     113,   114,   115,     3,   117,     3,   119,   120,     3,   122,
       3,   124,   125,     3,   127,   128,   129,   130,     3,     3,
       3,   357,   358,   136,     3,   138,     3,   140,   141,   357,
     143,   144,   145,   146,   147,   148,   357,   150,   151,   152,
     153,   154,   357,   357,   357,   158,   357,   160,   357,   162,
     357,   358,   357,   357,   357,   357,     5,   357,   171,   357,
     173,   174,   175,   176,   177,   178,   179,   357,   356,   182,
     183,     3,     3,     3,     3,   188,   357,   190,   191,   192,
       3,   194,   151,   196,   358,   198,   199,   200,   201,   177,
       3,     3,  1602,  1603,     3,     3,     3,     3,  1608,     3,
    1610,     3,   215,   216,   217,     3,   357,   358,     3,   221,
       3,     3,   225,     3,   227,   228,   229,     5,     3,   353,
     356,   234,     5,   236,   237,   238,     5,   356,   241,   356,
     356,    56,   245,   246,   356,   248,   249,   250,   251,   356,
     356,     3,   255,     3,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     357,     3,   358,   296,   297,   298,   299,   300,     3,   178,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   178,    10,    11,    12,    13,    14,    15,
      16,  1731,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     3,   178,   255,
       3,   354,   355,   356,   357,   358,   359,     3,     3,  1759,
     357,   179,   357,   217,   324,   357,   324,    10,    11,    12,
      13,    14,    15,    16,  1774,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     324,   324,   324,   217,   356,   356,   124,  1797,   152,   356,
     356,   152,  1802,   358,   152,   151,   178,   151,     3,     3,
    1810,   221,     3,     4,     5,     6,     7,     8,     5,    10,
     221,    12,     5,  1823,  1824,    16,    17,    18,     5,    20,
       4,   356,     5,    24,    25,    26,    27,    28,     5,   174,
     178,    54,     3,   243,     3,    58,    37,   194,     3,     3,
       3,    42,    43,   178,     3,    46,    55,   160,    20,   356,
      51,    52,    53,    54,    55,   180,   357,    58,   149,    60,
      61,    62,     4,   324,    65,    66,   324,    68,    69,    70,
     324,   324,   324,    74,   324,   356,   356,   324,   356,   102,
       5,   324,   105,    84,     5,   324,   356,   356,    89,   217,
     129,     3,   128,    94,    95,    96,     3,   120,     3,   356,
     101,   102,   152,   104,   105,   106,   107,   152,   356,   110,
       3,   112,   113,   114,   115,     3,   117,   140,   119,   120,
     357,   122,   357,   124,   125,   148,   127,   128,   129,   130,
     357,   357,    70,  1943,   356,   136,   243,   138,   356,   140,
     141,   356,   143,   144,   145,   146,   147,   148,     3,   150,
     151,   152,   153,   154,    52,   356,   356,   158,   128,   160,
     243,   162,   178,     3,     3,   356,   152,   356,     3,   356,
     171,   152,   173,   174,   175,   176,   177,   178,   179,   356,
       4,   182,   183,     6,     4,     4,   356,   188,     3,   190,
     191,   192,   358,   194,   193,   196,   152,   198,   199,   200,
     201,     3,   225,   358,   227,    55,   357,  2017,   357,   136,
     357,   357,   151,   357,   215,   216,   217,   356,     3,   356,
     356,    20,   245,   356,   225,   356,   227,   228,   229,   356,
     356,   174,   356,   234,   357,   236,   237,   238,   358,   356,
     241,   357,     3,   357,   245,   246,   356,   248,   249,   250,
     251,   356,   356,   356,   255,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   356,
      44,   356,   356,     3,   356,   296,   297,   298,   299,   300,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   356,   356,     4,   152,     3,     4,     5,     6,     7,
       8,   152,    10,   194,    12,     5,   216,     4,    16,    17,
      18,     4,    20,   356,     3,     3,    24,    25,    26,    27,
      28,     3,     3,   354,   355,   356,   357,   358,   359,    37,
       3,   356,   356,   106,    42,    43,   243,   356,    46,   243,
       3,   356,     3,    51,    52,    53,    54,    55,   356,   358,
      58,   356,    60,    61,    62,   234,    20,    65,    66,   356,
      68,    69,    70,   325,   178,   324,    74,   357,   324,   357,
     357,     3,   357,   357,     3,     3,    84,     3,     5,   356,
       5,    89,   356,    43,    52,   356,    94,    95,    96,     4,
     357,   357,   357,   101,   102,    52,   104,   105,   106,   107,
     358,   198,   110,   357,   112,   113,   114,   115,   356,   117,
     356,   119,   120,   356,   122,   243,   124,   125,   356,   127,
     128,   129,   130,   152,   152,   356,     3,    80,   136,   358,
     138,   356,   140,   141,    55,   143,   144,   145,   146,   147,
     148,   179,   150,   151,   152,   153,   154,   356,    20,   357,
     158,   357,   160,   356,   162,   357,   357,    18,     3,   356,
     356,   152,   357,   171,   357,   173,   174,   175,   176,   177,
     178,   179,     3,   357,   182,   183,    52,     3,   356,   356,
     188,   356,   190,   191,   192,     3,   194,    55,   196,     3,
     198,   199,   200,   201,     3,   356,     3,    55,   357,   324,
     357,   357,   324,   324,   324,   357,   128,   215,   216,   217,
     357,   195,     3,   244,   188,     3,     3,   225,    52,   227,
     228,   229,     5,     5,   357,    69,   234,   119,   236,   237,
     238,   144,   250,   241,   154,     5,   188,   245,   246,    20,
     248,   249,   250,   251,     3,   358,    89,   255,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   357,     3,   358,   357,   357,   357,   357,   356,   358,
     357,   356,   147,     3,     3,   357,   356,   356,   296,   297,
     298,   299,   300,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   357,     3,     3,     4,
       5,     6,     7,     8,   357,    10,     3,    12,     3,   356,
     356,    16,    17,    18,   357,    20,     3,   358,   207,    24,
      25,    26,    27,    28,   207,     3,   354,   355,   356,   357,
     358,   359,    37,   356,     3,   188,    20,    42,    43,     3,
     161,    46,   357,   357,   161,     3,    51,    52,    53,    54,
      55,   358,     3,    58,     3,    60,    61,    62,   357,   357,
      65,    66,   205,    68,    69,    70,   216,   356,     3,    74,
     356,     3,   357,   204,     5,   357,     3,   139,   357,    84,
     246,   357,   356,    85,    89,   155,   226,   178,   172,    94,
      95,    96,   178,     5,   172,     5,   101,   102,    87,   104,
     105,   106,   107,  1369,  1669,   110,  1601,   112,   113,   114,
     115,   870,   117,   351,   119,   120,   470,   122,   477,   124,
     125,   967,   127,   128,   129,   130,   834,  1176,   111,   585,
    2036,   136,    75,   138,   340,   140,   141,  1759,   143,   144,
     145,   146,   147,   148,   854,   150,   151,   152,   153,   154,
     597,  1273,  1730,   158,  2075,   160,  1250,   162,  1262,   144,
     817,   803,   321,    -1,  1410,    -1,   171,    -1,   173,   174,
     175,   176,   177,   178,   179,    -1,   516,   182,   183,    -1,
      -1,    -1,    -1,   188,    -1,   190,   191,   192,    -1,   194,
      -1,   196,    -1,   198,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,   234,
      -1,   236,   237,   238,    -1,    -1,   241,    -1,    -1,    -1,
     245,   246,    -1,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    10,    11,    12,    13,    14,    15,    16,   295,    18,
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
     296,   297,   298,   299,   300,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
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
      -1,   296,   297,   298,   299,   300,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
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
      -1,    -1,    -1,   255,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,   358,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,   296,   297,   298,   299,   300,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    98,
      -1,    -1,   354,   355,   356,   357,   358,   359,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,   134,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
     209,   210,    -1,    -1,    -1,   214,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,    -1,   294,    -1,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,    -1,    -1,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,   346,   347,   348,
     349,     3,     4,     5,     6,     7,     8,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    10,    11,    12,    13,    14,    15,    16,    81,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   358,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   358,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,     3,     4,     5,     6,     7,     8,   159,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,   174,    25,   358,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    64,   124,   358,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,   230,    81,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   229,   294,    -1,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   174,    -1,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    -1,   346,   347,   348,   349,    -1,    -1,
      -1,    -1,    -1,    -1,   356,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,    -1,   294,    -1,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,    -1,    -1,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    -1,   346,   347,   348,   349,     3,     4,
       5,     6,     7,     8,   356,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   358,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,
      12,    13,    14,    15,    16,    81,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,   358,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,   229,    -1,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   174,   294,
      -1,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    -1,
      -1,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,   346,   347,   348,   349,    11,    12,    13,    14,    15,
      16,   356,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,    -1,   294,    -1,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   358,    -1,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    -1,
     346,   347,   348,   349,     3,     4,     5,     6,     7,     8,
     356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,   358,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   358,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,   174,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    10,    11,    12,    13,    14,
      15,    16,    81,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,    -1,   294,    -1,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   174,    -1,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,   346,   347,   348,
     349,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,    -1,   294,    -1,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   358,    -1,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,   346,   347,   348,
     349,     3,     4,     5,     6,     7,     8,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,   358,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,   358,    -1,    13,    14,    15,    16,    81,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    13,    14,    15,    16,   101,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    10,    11,    12,    13,    14,    15,    16,    81,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,   101,   358,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   174,   294,    -1,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,    -1,    -1,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    -1,   346,   347,   348,   349,    -1,    -1,
      -1,    -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,
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
      -1,   358,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,   358,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    10,    11,    12,
      13,    14,    15,    16,    81,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   174,   294,    -1,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    -1,    -1,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    -1,
     346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,    -1,
     356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,    -1,   294,    -1,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    -1,    -1,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    -1,   346,
     347,   348,   349,    -1,    -1,    -1,    -1,    -1,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   358,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   358,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   358,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   128,    10,
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
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
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
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
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
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
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
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   357,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    13,    14,    15,    16,   357,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    13,    14,    15,
      16,   357,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    10,
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
      30,    31,    32,    10,    11,    12,    13,    14,    15,    16,
     357,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   357,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    18,    -1,    -1,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    18,    -1,    -1,    40,
      -1,    -1,    43,    -1,    45,   357,    -1,    48,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    40,    -1,
      -1,    43,    63,    45,    -1,    -1,    48,    -1,   357,    70,
      71,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,    99,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,   357,    -1,   127,    -1,    -1,    -1,    -1,    34,    -1,
     101,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,   143,
      -1,    -1,   132,   133,    -1,   135,   357,   118,    -1,   101,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    -1,   357,    -1,    -1,    -1,   200,    -1,    -1,   203,
     152,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,   357,    -1,    -1,   222,   223,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     182,    -1,    -1,   237,    -1,    -1,    -1,    -1,   357,   145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   357,   252,   253,    -1,    -1,   237,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    -1,   189,   357,   237,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,    -1,   111,    -1,   357,    -1,    -1,
     216,   217,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,   234,    -1,
     357,    -1,    -1,    -1,   140,    -1,   242,    -1,    -1,    -1,
      -1,   345,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,
     166,    -1,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     186,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,   215,
     216,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,   225,
      -1,   227,    -1,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,
      -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   100,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    43,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    42,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42
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
     356,   362,     3,   357,    82,   234,     3,   402,   358,   407,
     385,   386,   407,   389,   390,   207,   207,   415,   356,    49,
      50,   112,   188,   355,   356,     3,     3,    20,   457,     3,
     357,   405,   405,   357,   405,   405,   161,   161,     3,   493,
       3,     3,   493,   357,   357,   362,   216,   402,   407,   407,
     407,   407,   357,   358,   355,   356,   356,   357,   356,   205,
     458,   357,   357,   357,   357,   494,     3,     3,   493,   493,
     494,   204,   486,   487,     5,    18,    85,   164,   178,   356,
     357,   357,    18,     3,   357,   358,    85,   244,   139,   125,
     181,   211,    95,   234,   493,   494,   494,   246,   487,    86,
     137,    66,   173,   191,   216,    66,   173,   191,   216,   357,
     155,   101,   174,   101,   174,   494,   226,     4,   165,   178,
     178,   172,   172,     5,     5
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
#line 431 "evolution/parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 437 "evolution/parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 438 "evolution/parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 439 "evolution/parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 8:
#line 441 "evolution/parser/evoparser.y"
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
#line 459 "evolution/parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 10:
#line 467 "evolution/parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 11:
#line 475 "evolution/parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 12:
#line 481 "evolution/parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 13:
#line 488 "evolution/parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 489 "evolution/parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 490 "evolution/parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 491 "evolution/parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 492 "evolution/parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 493 "evolution/parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 494 "evolution/parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 20:
#line 495 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 21:
#line 496 "evolution/parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 497 "evolution/parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 498 "evolution/parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 499 "evolution/parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 500 "evolution/parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 501 "evolution/parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 502 "evolution/parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 503 "evolution/parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 504 "evolution/parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 505 "evolution/parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 31:
#line 506 "evolution/parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 508 "evolution/parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 33:
#line 513 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 34:
#line 514 "evolution/parser/evoparser.y"
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
#line 522 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 36:
#line 523 "evolution/parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 37:
#line 524 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 38:
#line 525 "evolution/parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 39:
#line 526 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 40:
#line 527 "evolution/parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 41:
#line 530 "evolution/parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 42:
#line 531 "evolution/parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 43:
#line 532 "evolution/parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 44:
#line 533 "evolution/parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 45:
#line 534 "evolution/parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 46:
#line 537 "evolution/parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 47:
#line 538 "evolution/parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 48:
#line 541 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 49:
#line 542 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 50:
#line 545 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 52:
#line 549 "evolution/parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 53:
#line 549 "evolution/parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 54:
#line 550 "evolution/parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 55:
#line 550 "evolution/parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 56:
#line 551 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 57:
#line 552 "evolution/parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 58:
#line 559 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 59:
#line 560 "evolution/parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 60:
#line 567 "evolution/parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 61:
#line 568 "evolution/parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 62:
#line 578 "evolution/parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 63:
#line 582 "evolution/parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 64:
#line 583 "evolution/parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 584 "evolution/parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 585 "evolution/parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 586 "evolution/parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 587 "evolution/parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 588 "evolution/parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 70:
#line 589 "evolution/parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 71:
#line 593 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 72:
#line 594 "evolution/parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 73:
#line 595 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 74:
#line 596 "evolution/parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 75:
#line 597 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 76:
#line 598 "evolution/parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 77:
#line 600 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 78:
#line 601 "evolution/parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 79:
#line 602 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 80:
#line 603 "evolution/parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 81:
#line 604 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 82:
#line 605 "evolution/parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 83:
#line 606 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 84:
#line 607 "evolution/parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 85:
#line 608 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 86:
#line 609 "evolution/parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 87:
#line 610 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 88:
#line 611 "evolution/parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 89:
#line 613 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 90:
#line 614 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 91:
#line 615 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 92:
#line 616 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 93:
#line 617 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 94:
#line 618 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 95:
#line 619 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 96:
#line 620 "evolution/parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 97:
#line 621 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 98:
#line 622 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 99:
#line 623 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 100:
#line 624 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 101:
#line 625 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 102:
#line 626 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 103:
#line 627 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 104:
#line 628 "evolution/parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 105:
#line 630 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 106:
#line 631 "evolution/parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 107:
#line 632 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 108:
#line 633 "evolution/parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 109:
#line 634 "evolution/parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 110:
#line 635 "evolution/parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 111:
#line 638 "evolution/parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 639 "evolution/parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 113:
#line 640 "evolution/parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 114:
#line 641 "evolution/parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 115:
#line 642 "evolution/parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 643 "evolution/parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 117:
#line 644 "evolution/parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 118:
#line 645 "evolution/parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 119:
#line 646 "evolution/parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 120:
#line 647 "evolution/parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 121:
#line 648 "evolution/parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 122:
#line 649 "evolution/parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 123:
#line 650 "evolution/parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 124:
#line 651 "evolution/parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 125:
#line 652 "evolution/parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 126:
#line 653 "evolution/parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 127:
#line 654 "evolution/parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 128:
#line 655 "evolution/parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 129:
#line 656 "evolution/parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 130:
#line 657 "evolution/parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 131:
#line 658 "evolution/parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 132:
#line 659 "evolution/parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 133:
#line 660 "evolution/parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 134:
#line 661 "evolution/parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 135:
#line 662 "evolution/parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 136:
#line 663 "evolution/parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 137:
#line 664 "evolution/parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 138:
#line 665 "evolution/parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 139:
#line 666 "evolution/parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 140:
#line 667 "evolution/parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 141:
#line 668 "evolution/parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 142:
#line 669 "evolution/parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 143:
#line 670 "evolution/parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 144:
#line 671 "evolution/parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 145:
#line 673 "evolution/parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 146:
#line 674 "evolution/parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 147:
#line 675 "evolution/parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 148:
#line 676 "evolution/parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 149:
#line 677 "evolution/parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 150:
#line 678 "evolution/parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 151:
#line 679 "evolution/parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 152:
#line 680 "evolution/parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 153:
#line 682 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 154:
#line 683 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 155:
#line 684 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 156:
#line 685 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 157:
#line 686 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 158:
#line 687 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 159:
#line 688 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 160:
#line 689 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 161:
#line 690 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 162:
#line 691 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 163:
#line 692 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 164:
#line 693 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 165:
#line 694 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 166:
#line 695 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 167:
#line 696 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 168:
#line 697 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 169:
#line 698 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 170:
#line 699 "evolution/parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 171:
#line 700 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 172:
#line 701 "evolution/parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 173:
#line 702 "evolution/parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 174:
#line 703 "evolution/parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 175:
#line 705 "evolution/parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 176:
#line 706 "evolution/parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 177:
#line 707 "evolution/parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 178:
#line 708 "evolution/parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 179:
#line 709 "evolution/parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 180:
#line 711 "evolution/parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 181:
#line 712 "evolution/parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 182:
#line 714 "evolution/parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 183:
#line 715 "evolution/parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 184:
#line 716 "evolution/parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 185:
#line 718 "evolution/parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 186:
#line 719 "evolution/parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 187:
#line 720 "evolution/parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 188:
#line 721 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 189:
#line 728 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 190:
#line 735 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 191:
#line 742 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 192:
#line 746 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 193:
#line 750 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 194:
#line 754 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 195:
#line 758 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 196:
#line 762 "evolution/parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 197:
#line 768 "evolution/parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 198:
#line 769 "evolution/parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 199:
#line 770 "evolution/parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 200:
#line 774 "evolution/parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 201:
#line 780 "evolution/parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 202:
#line 786 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 203:
#line 787 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 204:
#line 788 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 205:
#line 789 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 206:
#line 790 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 207:
#line 791 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 208:
#line 792 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 209:
#line 793 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 210:
#line 794 "evolution/parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 211:
#line 798 "evolution/parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 212:
#line 800 "evolution/parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 213:
#line 802 "evolution/parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 214:
#line 804 "evolution/parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 215:
#line 808 "evolution/parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 216:
#line 816 "evolution/parser/evoparser.y"
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
#line 826 "evolution/parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 218:
#line 827 "evolution/parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 219:
#line 830 "evolution/parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 220:
#line 831 "evolution/parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 221:
#line 835 "evolution/parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 222:
#line 843 "evolution/parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 223:
#line 851 "evolution/parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 224:
#line 862 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 225:
#line 871 "evolution/parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 226:
#line 876 "evolution/parser/evoparser.y"
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
#line 889 "evolution/parser/evoparser.y"
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
#line 902 "evolution/parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 231:
#line 904 "evolution/parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 232:
#line 907 "evolution/parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 233:
#line 914 "evolution/parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 234:
#line 922 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 235:
#line 923 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 924 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 237:
#line 927 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 238:
#line 928 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 240:
#line 932 "evolution/parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 243:
#line 941 "evolution/parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 244:
#line 943 "evolution/parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 247:
#line 951 "evolution/parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 248:
#line 953 "evolution/parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 253:
#line 965 "evolution/parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 254:
#line 971 "evolution/parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 255:
#line 978 "evolution/parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 256:
#line 986 "evolution/parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 257:
#line 987 "evolution/parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 258:
#line 988 "evolution/parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 259:
#line 989 "evolution/parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 260:
#line 992 "evolution/parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 261:
#line 993 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 262:
#line 994 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 263:
#line 995 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 264:
#line 996 "evolution/parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 266:
#line 1000 "evolution/parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 267:
#line 1003 "evolution/parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1004 "evolution/parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 269:
#line 1007 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 1008 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 271:
#line 1009 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 272:
#line 1010 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 273:
#line 1011 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 274:
#line 1012 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 275:
#line 1013 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 276:
#line 1014 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 277:
#line 1015 "evolution/parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 278:
#line 1018 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 279:
#line 1019 "evolution/parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 280:
#line 1021 "evolution/parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 281:
#line 1029 "evolution/parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 282:
#line 1034 "evolution/parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 283:
#line 1035 "evolution/parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 284:
#line 1036 "evolution/parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 285:
#line 1039 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 286:
#line 1040 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 289:
#line 1049 "evolution/parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 290:
#line 1055 "evolution/parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 291:
#line 1056 "evolution/parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 292:
#line 1057 "evolution/parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 295:
#line 1066 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 296:
#line 1068 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 297:
#line 1070 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 298:
#line 1072 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 299:
#line 1074 "evolution/parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 300:
#line 1077 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1078 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1079 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 303:
#line 1082 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 304:
#line 1083 "evolution/parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 305:
#line 1086 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 306:
#line 1087 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 307:
#line 1090 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 308:
#line 1091 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 309:
#line 1092 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 312:
#line 1099 "evolution/parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 313:
#line 1100 "evolution/parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 314:
#line 1105 "evolution/parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 315:
#line 1107 "evolution/parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 316:
#line 1109 "evolution/parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 318:
#line 1113 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1114 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 320:
#line 1117 "evolution/parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 321:
#line 1118 "evolution/parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1121 "evolution/parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 323:
#line 1126 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 324:
#line 1136 "evolution/parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 325:
#line 1143 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 326:
#line 1144 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 327:
#line 1145 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 328:
#line 1146 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 329:
#line 1151 "evolution/parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 330:
#line 1155 "evolution/parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 331:
#line 1157 "evolution/parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 334:
#line 1163 "evolution/parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 335:
#line 1168 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 336:
#line 1175 "evolution/parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 337:
#line 1182 "evolution/parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 338:
#line 1192 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 339:
#line 1199 "evolution/parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 340:
#line 1206 "evolution/parser/evoparser.y"
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
#line 1216 "evolution/parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 342:
#line 1224 "evolution/parser/evoparser.y"
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
#line 1234 "evolution/parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 344:
#line 1242 "evolution/parser/evoparser.y"
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
#line 1251 "evolution/parser/evoparser.y"
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
#line 1260 "evolution/parser/evoparser.y"
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
#line 1270 "evolution/parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 348:
#line 1278 "evolution/parser/evoparser.y"
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
#line 1287 "evolution/parser/evoparser.y"
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
#line 1296 "evolution/parser/evoparser.y"
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
#line 1306 "evolution/parser/evoparser.y"
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
#line 1315 "evolution/parser/evoparser.y"
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
#line 1327 "evolution/parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 354:
#line 1332 "evolution/parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 355:
#line 1337 "evolution/parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 356:
#line 1343 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 357:
#line 1350 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 358:
#line 1357 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 359:
#line 1364 "evolution/parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 360:
#line 1374 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 361:
#line 1381 "evolution/parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 362:
#line 1390 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 363:
#line 1397 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 364:
#line 1403 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 365:
#line 1411 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 366:
#line 1417 "evolution/parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 368:
#line 1425 "evolution/parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 369:
#line 1426 "evolution/parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 370:
#line 1427 "evolution/parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 371:
#line 1428 "evolution/parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 372:
#line 1433 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 373:
#line 1440 "evolution/parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 374:
#line 1449 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 375:
#line 1456 "evolution/parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 376:
#line 1462 "evolution/parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 377:
#line 1472 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 378:
#line 1476 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 379:
#line 1482 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 380:
#line 1488 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 381:
#line 1495 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 382:
#line 1501 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 383:
#line 1508 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 384:
#line 1514 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 385:
#line 1520 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 386:
#line 1526 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 387:
#line 1532 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 388:
#line 1538 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 389:
#line 1544 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 390:
#line 1550 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 391:
#line 1556 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 392:
#line 1562 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 393:
#line 1568 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 394:
#line 1574 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 395:
#line 1580 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 396:
#line 1586 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 397:
#line 1592 "evolution/parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 398:
#line 1599 "evolution/parser/evoparser.y"
    { ;}
    break;

  case 399:
#line 1600 "evolution/parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 400:
#line 1601 "evolution/parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 401:
#line 1605 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 402:
#line 1613 "evolution/parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 403:
#line 1619 "evolution/parser/evoparser.y"
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
#line 1632 "evolution/parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 406:
#line 1632 "evolution/parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 409:
#line 1640 "evolution/parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 410:
#line 1641 "evolution/parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 411:
#line 1645 "evolution/parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 412:
#line 1646 "evolution/parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 413:
#line 1647 "evolution/parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 414:
#line 1651 "evolution/parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 415:
#line 1659 "evolution/parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 416:
#line 1668 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 417:
#line 1669 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 418:
#line 1670 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 419:
#line 1671 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 420:
#line 1672 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 424:
#line 1679 "evolution/parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 425:
#line 1683 "evolution/parser/evoparser.y"
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

  case 426:
#line 1693 "evolution/parser/evoparser.y"
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

  case 427:
#line 1705 "evolution/parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 428:
#line 1706 "evolution/parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 429:
#line 1706 "evolution/parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 430:
#line 1709 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 431:
#line 1710 "evolution/parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 432:
#line 1711 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 433:
#line 1712 "evolution/parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 434:
#line 1716 "evolution/parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 435:
#line 1719 "evolution/parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 436:
#line 1720 "evolution/parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 437:
#line 1721 "evolution/parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 438:
#line 1722 "evolution/parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 439:
#line 1728 "evolution/parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 440:
#line 1734 "evolution/parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 441:
#line 1739 "evolution/parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 442:
#line 1744 "evolution/parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 443:
#line 1748 "evolution/parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 444:
#line 1752 "evolution/parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 445:
#line 1754 "evolution/parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 448:
#line 1760 "evolution/parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 449:
#line 1761 "evolution/parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 450:
#line 1765 "evolution/parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 451:
#line 1766 "evolution/parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 452:
#line 1770 "evolution/parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 453:
#line 1771 "evolution/parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 454:
#line 1772 "evolution/parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 461:
#line 1787 "evolution/parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 462:
#line 1788 "evolution/parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 463:
#line 1789 "evolution/parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 464:
#line 1790 "evolution/parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 465:
#line 1791 "evolution/parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 466:
#line 1792 "evolution/parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 467:
#line 1793 "evolution/parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 468:
#line 1794 "evolution/parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 469:
#line 1799 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 470:
#line 1808 "evolution/parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 471:
#line 1815 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 472:
#line 1816 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 473:
#line 1817 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 474:
#line 1822 "evolution/parser/evoparser.y"
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

  case 475:
#line 1833 "evolution/parser/evoparser.y"
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

  case 476:
#line 1845 "evolution/parser/evoparser.y"
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

  case 477:
#line 1856 "evolution/parser/evoparser.y"
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

  case 478:
#line 1871 "evolution/parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 479:
#line 1875 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 480:
#line 1879 "evolution/parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 481:
#line 1880 "evolution/parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 482:
#line 1885 "evolution/parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 483:
#line 1887 "evolution/parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 484:
#line 1889 "evolution/parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 485:
#line 1891 "evolution/parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 486:
#line 1894 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 487:
#line 1895 "evolution/parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 488:
#line 1901 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 489:
#line 1906 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 490:
#line 1908 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 491:
#line 1910 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 492:
#line 1912 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 493:
#line 1914 "evolution/parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 494:
#line 1918 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 495:
#line 1922 "evolution/parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 496:
#line 1923 "evolution/parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 497:
#line 1928 "evolution/parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 498:
#line 1938 "evolution/parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 499:
#line 1947 "evolution/parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 501:
#line 1951 "evolution/parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 502:
#line 1952 "evolution/parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 503:
#line 1953 "evolution/parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 504:
#line 1954 "evolution/parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 505:
#line 1956 "evolution/parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 506:
#line 1958 "evolution/parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 509:
#line 1966 "evolution/parser/evoparser.y"
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

  case 510:
#line 1981 "evolution/parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 511:
#line 1989 "evolution/parser/evoparser.y"
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

  case 512:
#line 2003 "evolution/parser/evoparser.y"
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

  case 513:
#line 2017 "evolution/parser/evoparser.y"
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

  case 514:
#line 2031 "evolution/parser/evoparser.y"
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

  case 515:
#line 2043 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 516:
#line 2044 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 517:
#line 2045 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 518:
#line 2048 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 519:
#line 2049 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 520:
#line 2052 "evolution/parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 521:
#line 2053 "evolution/parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 522:
#line 2054 "evolution/parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 523:
#line 2055 "evolution/parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 524:
#line 2056 "evolution/parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 525:
#line 2057 "evolution/parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 526:
#line 2058 "evolution/parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 527:
#line 2059 "evolution/parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 528:
#line 2061 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 529:
#line 2063 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 530:
#line 2065 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 531:
#line 2067 "evolution/parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 532:
#line 2069 "evolution/parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 533:
#line 2071 "evolution/parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 534:
#line 2074 "evolution/parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 535:
#line 2075 "evolution/parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 536:
#line 2078 "evolution/parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 537:
#line 2079 "evolution/parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 538:
#line 2082 "evolution/parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 539:
#line 2083 "evolution/parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 541:
#line 2087 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 542:
#line 2088 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 543:
#line 2089 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 544:
#line 2090 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 545:
#line 2091 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 546:
#line 2092 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 547:
#line 2093 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 548:
#line 2094 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 549:
#line 2095 "evolution/parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 550:
#line 2096 "evolution/parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 551:
#line 2097 "evolution/parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 552:
#line 2098 "evolution/parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 553:
#line 2099 "evolution/parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 554:
#line 2100 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 555:
#line 2101 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 556:
#line 2102 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 557:
#line 2103 "evolution/parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 558:
#line 2106 "evolution/parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 559:
#line 2107 "evolution/parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 560:
#line 2110 "evolution/parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 561:
#line 2112 "evolution/parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 562:
#line 2120 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 563:
#line 2121 "evolution/parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 565:
#line 2123 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 566:
#line 2124 "evolution/parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 567:
#line 2125 "evolution/parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 568:
#line 2126 "evolution/parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 569:
#line 2127 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 570:
#line 2128 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 571:
#line 2129 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 572:
#line 2130 "evolution/parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 573:
#line 2131 "evolution/parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 574:
#line 2138 "evolution/parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 575:
#line 2139 "evolution/parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 576:
#line 2140 "evolution/parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 577:
#line 2141 "evolution/parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 578:
#line 2142 "evolution/parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 579:
#line 2143 "evolution/parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 580:
#line 2144 "evolution/parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 581:
#line 2145 "evolution/parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 582:
#line 2146 "evolution/parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 583:
#line 2147 "evolution/parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 584:
#line 2148 "evolution/parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 585:
#line 2149 "evolution/parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 586:
#line 2150 "evolution/parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 587:
#line 2151 "evolution/parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 588:
#line 2152 "evolution/parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 589:
#line 2153 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 590:
#line 2154 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 591:
#line 2155 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 592:
#line 2156 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 593:
#line 2157 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 594:
#line 2158 "evolution/parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 595:
#line 2161 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 596:
#line 2162 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 597:
#line 2163 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 598:
#line 2166 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 599:
#line 2167 "evolution/parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 600:
#line 2170 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 601:
#line 2171 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 602:
#line 2172 "evolution/parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 604:
#line 2176 "evolution/parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 605:
#line 2177 "evolution/parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 606:
#line 2181 "evolution/parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 607:
#line 2182 "evolution/parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 608:
#line 2183 "evolution/parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 609:
#line 2184 "evolution/parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 610:
#line 2185 "evolution/parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 611:
#line 2186 "evolution/parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 612:
#line 2187 "evolution/parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 613:
#line 2188 "evolution/parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 614:
#line 2189 "evolution/parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 615:
#line 2190 "evolution/parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 616:
#line 2191 "evolution/parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 617:
#line 2192 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 618:
#line 2193 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 619:
#line 2194 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 620:
#line 2195 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 621:
#line 2196 "evolution/parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 622:
#line 2197 "evolution/parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 623:
#line 2198 "evolution/parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 624:
#line 2199 "evolution/parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 625:
#line 2200 "evolution/parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 626:
#line 2201 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 627:
#line 2202 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 628:
#line 2203 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 629:
#line 2204 "evolution/parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 630:
#line 2205 "evolution/parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 631:
#line 2206 "evolution/parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 632:
#line 2207 "evolution/parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 633:
#line 2208 "evolution/parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 634:
#line 2209 "evolution/parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 635:
#line 2210 "evolution/parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 636:
#line 2211 "evolution/parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 637:
#line 2212 "evolution/parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 638:
#line 2213 "evolution/parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 639:
#line 2216 "evolution/parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 640:
#line 2217 "evolution/parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 641:
#line 2221 "evolution/parser/evoparser.y"
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

  case 642:
#line 2233 "evolution/parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 643:
#line 2234 "evolution/parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 644:
#line 2235 "evolution/parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 645:
#line 2239 "evolution/parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 646:
#line 2242 "evolution/parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 647:
#line 2243 "evolution/parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 651:
#line 2247 "evolution/parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 652:
#line 2248 "evolution/parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 653:
#line 2256 "evolution/parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 654:
#line 2261 "evolution/parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 655:
#line 2267 "evolution/parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 656:
#line 2273 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 657:
#line 2280 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 658:
#line 2287 "evolution/parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 659:
#line 2293 "evolution/parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 660:
#line 2299 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 661:
#line 2306 "evolution/parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 666:
#line 2322 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 667:
#line 2323 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 668:
#line 2324 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 669:
#line 2325 "evolution/parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 670:
#line 2328 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 671:
#line 2329 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 672:
#line 2330 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 673:
#line 2331 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 674:
#line 2332 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 675:
#line 2333 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 676:
#line 2334 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 677:
#line 2335 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 678:
#line 2336 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 679:
#line 2337 "evolution/parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 688:
#line 2354 "evolution/parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 689:
#line 2355 "evolution/parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 810:
#line 2373 "evolution/parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 811:
#line 2380 "evolution/parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 812:
#line 2385 "evolution/parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 813:
#line 2391 "evolution/parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 814:
#line 2397 "evolution/parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 815:
#line 2403 "evolution/parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 816:
#line 2414 "evolution/parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 817:
#line 2419 "evolution/parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 818:
#line 2425 "evolution/parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 821:
#line 2436 "evolution/parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 822:
#line 2437 "evolution/parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 823:
#line 2438 "evolution/parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 824:
#line 2439 "evolution/parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 825:
#line 2440 "evolution/parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 826:
#line 2441 "evolution/parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 827:
#line 2442 "evolution/parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 828:
#line 2449 "evolution/parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 829:
#line 2454 "evolution/parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 830:
#line 2461 "evolution/parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 831:
#line 2462 "evolution/parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 832:
#line 2465 "evolution/parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 833:
#line 2466 "evolution/parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 834:
#line 2467 "evolution/parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 835:
#line 2470 "evolution/parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 836:
#line 2475 "evolution/parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 837:
#line 2481 "evolution/parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 838:
#line 2490 "evolution/parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 839:
#line 2498 "evolution/parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 840:
#line 2508 "evolution/parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 841:
#line 2513 "evolution/parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 844:
#line 2526 "evolution/parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 845:
#line 2527 "evolution/parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 846:
#line 2528 "evolution/parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 847:
#line 2529 "evolution/parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 848:
#line 2530 "evolution/parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 849:
#line 2531 "evolution/parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 850:
#line 2532 "evolution/parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 851:
#line 2533 "evolution/parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 852:
#line 2536 "evolution/parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 853:
#line 2541 "evolution/parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 854:
#line 2547 "evolution/parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 855:
#line 2557 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 856:
#line 2564 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 857:
#line 2571 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 858:
#line 2579 "evolution/parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 860:
#line 2589 "evolution/parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 862:
#line 2593 "evolution/parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 863:
#line 2594 "evolution/parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9971 "evolution/parser/evoparser.tab.c"
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


#line 2597 "evolution/parser/evoparser.y"

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
