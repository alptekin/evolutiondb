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
     UMINUS = 277,
     ALTER = 278,
     ADD = 279,
     AFTER = 280,
     ALL = 281,
     ANALYZE = 282,
     ANY = 283,
     AUTO_INCREMENT = 284,
     ASC = 285,
     AND = 286,
     AS = 287,
     ALWAYS = 288,
     IDENTITY = 289,
     CONTINUE = 290,
     RESTART = 291,
     GENERATED = 292,
     STORED = 293,
     VIRTUAL = 294,
     BEFORE = 295,
     BEGINWORK = 296,
     BLOB = 297,
     BOOLEAN = 298,
     BY = 299,
     BINARY = 300,
     BOTH = 301,
     BIGINT = 302,
     BIT = 303,
     CALL = 304,
     CLOSE = 305,
     CURSOR = 306,
     CONSTRAINT = 307,
     CURRENT_TIMESTAMP = 308,
     CREATE = 309,
     CASCADE = 310,
     CHANGE = 311,
     CROSS = 312,
     CASE = 313,
     CHECK = 314,
     COMMENT = 315,
     CURRENT_DATE = 316,
     CURRENT_TIME = 317,
     CHAR = 318,
     COLLATE = 319,
     COLUMN = 320,
     CONCURRENTLY = 321,
     DATABASE = 322,
     DECLARE = 323,
     DEFERRABLE = 324,
     DEFERRED = 325,
     DISABLE = 326,
     DO = 327,
     DOMAIN = 328,
     DELAYED = 329,
     DAY_HOUR = 330,
     DAY_MICROSECOND = 331,
     DISTINCT = 332,
     DELETE = 333,
     DROP = 334,
     DAY_MINUTE = 335,
     DISTINCTROW = 336,
     DAY_SECOND = 337,
     DESC = 338,
     DEFAULT = 339,
     DOUBLE = 340,
     DATETIME = 341,
     DECIMAL = 342,
     DATE = 343,
     EACH = 344,
     ELSEIF = 345,
     ENABLE = 346,
     ESCAPED = 347,
     EXCEPT = 348,
     ENUM = 349,
     END = 350,
     ELSE = 351,
     EXECUTE = 352,
     EXIT = 353,
     EXPLAIN = 354,
     FETCH = 355,
     FIRST = 356,
     FOREACH = 357,
     FLOAT = 358,
     FORCE = 359,
     FOREIGN = 360,
     FROM = 361,
     FULL = 362,
     FULLTEXT = 363,
     FUNCTION = 364,
     FOR = 365,
     GROUP = 366,
     HANDLER = 367,
     HOUR_MINUTE = 368,
     HOUR_MICROSECOND = 369,
     HIGH_PRIORITY = 370,
     HOUR_SECOND = 371,
     HAVING = 372,
     IMMEDIATE = 373,
     INOUT = 374,
     INITIALLY = 375,
     INTEGER = 376,
     INNER = 377,
     IGNORE = 378,
     INDEX = 379,
     IF = 380,
     INSERT = 381,
     INTERSECT = 382,
     INTO = 383,
     INT = 384,
     INTERVAL = 385,
     ITERATE = 386,
     JOIN = 387,
     KEY = 388,
     LEAVE = 389,
     LOOP = 390,
     LESS = 391,
     LONGTEXT = 392,
     LOW_PRIORITY = 393,
     LEFT = 394,
     LEADING = 395,
     LIMIT = 396,
     LOCKED = 397,
     OFFSET = 398,
     LONGBLOB = 399,
     MATCH = 400,
     MAXVALUE = 401,
     MEDIUMTEXT = 402,
     MINUS = 403,
     MODIFY = 404,
     MEDIUMBLOB = 405,
     MEDIUMINT = 406,
     NATURAL = 407,
     NODE = 408,
     NO_ACTION = 409,
     NULLX = 410,
     OPEN = 411,
     OUT = 412,
     OUTER = 413,
     ON = 414,
     ORDER = 415,
     ONDUPLICATE = 416,
     PARTIAL = 417,
     PRIMARY = 418,
     PROCEDURE = 419,
     QUICK = 420,
     RANGE = 421,
     REAL = 422,
     RECLAIM = 423,
     REFERENCES = 424,
     RENAME = 425,
     RESIGNAL = 426,
     RESTRICT = 427,
     RETURN = 428,
     RETURNS = 429,
     ROLLUP = 430,
     RIGHT = 431,
     REPLACE = 432,
     ROW = 433,
     SIGNAL = 434,
     TRIGGER = 435,
     UNTIL = 436,
     SQL_SMALL_RESULT = 437,
     SCHEMA = 438,
     SHARD = 439,
     SHARDS = 440,
     SHARE = 441,
     SKIP = 442,
     SOME = 443,
     SQL_CALC_FOUND_ROWS = 444,
     SQL_BIG_RESULT = 445,
     SIMPLE = 446,
     STRAIGHT_JOIN = 447,
     SMALLINT = 448,
     SET = 449,
     SELECT = 450,
     TINYTEXT = 451,
     TINYINT = 452,
     TO = 453,
     TEMPORARY = 454,
     GLOBAL = 455,
     PRESERVE = 456,
     TEXT = 457,
     THAN = 458,
     TIMESTAMP = 459,
     TABLE = 460,
     THEN = 461,
     TRAILING = 462,
     TRUNCATE = 463,
     TINYBLOB = 464,
     TIME = 465,
     UPDATE = 466,
     UNSIGNED = 467,
     UNION = 468,
     UNIQUE = 469,
     UUID = 470,
     VIEW = 471,
     USING = 472,
     USE = 473,
     HASH = 474,
     VALIDATE = 475,
     VARCHAR = 476,
     VALUES = 477,
     VARBINARY = 478,
     WHERE = 479,
     WHEN = 480,
     WHILE = 481,
     WITH = 482,
     YEAR = 483,
     YEAR_MONTH = 484,
     ZEROFILL = 485,
     EXISTS = 486,
     FSUBSTRING = 487,
     FTRIM = 488,
     FDATE_ADD = 489,
     FDATE_SUB = 490,
     FDATEDIFF = 491,
     FYEAR = 492,
     FMONTH = 493,
     FDAY = 494,
     FHOUR = 495,
     FMINUTE = 496,
     FSECOND = 497,
     FNOW = 498,
     FLEFT = 499,
     FRIGHT = 500,
     FLPAD = 501,
     FRPAD = 502,
     FREVERSE = 503,
     FREPEAT = 504,
     FINSTR = 505,
     FLOCATE = 506,
     FABS = 507,
     FCEIL = 508,
     FFLOOR = 509,
     FROUND = 510,
     FPOWER = 511,
     FSQRT = 512,
     FMOD = 513,
     FRAND = 514,
     FLOG = 515,
     FLOG10 = 516,
     FSIGN = 517,
     FPI = 518,
     FCAST = 519,
     FCONVERT = 520,
     FNULLIF = 521,
     FIFNULL = 522,
     FIF = 523,
     UNKNOWN = 524,
     FGROUP_CONCAT = 525,
     SEPARATOR = 526,
     FCOUNT = 527,
     FSUM = 528,
     FAVG = 529,
     FMIN = 530,
     FMAX = 531,
     FUPPER = 532,
     FLOWER = 533,
     FLENGTH = 534,
     FCONCAT = 535,
     FREPLACE = 536,
     FCOALESCE = 537,
     FGEN_RANDOM_UUID = 538,
     FGEN_RANDOM_UUID_V7 = 539,
     FSNOWFLAKE_ID = 540,
     FLAST_INSERT_ID = 541,
     FEVO_SLEEP = 542,
     FEVO_JITTER = 543,
     FROW_NUMBER = 544,
     FRANK = 545,
     FDENSE_RANK = 546,
     FLEAD = 547,
     FLAG = 548,
     FNTILE = 549,
     FPERCENT_RANK = 550,
     FCUME_DIST = 551,
     OVER = 552,
     PARTITION = 553
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
#define UMINUS 277
#define ALTER 278
#define ADD 279
#define AFTER 280
#define ALL 281
#define ANALYZE 282
#define ANY 283
#define AUTO_INCREMENT 284
#define ASC 285
#define AND 286
#define AS 287
#define ALWAYS 288
#define IDENTITY 289
#define CONTINUE 290
#define RESTART 291
#define GENERATED 292
#define STORED 293
#define VIRTUAL 294
#define BEFORE 295
#define BEGINWORK 296
#define BLOB 297
#define BOOLEAN 298
#define BY 299
#define BINARY 300
#define BOTH 301
#define BIGINT 302
#define BIT 303
#define CALL 304
#define CLOSE 305
#define CURSOR 306
#define CONSTRAINT 307
#define CURRENT_TIMESTAMP 308
#define CREATE 309
#define CASCADE 310
#define CHANGE 311
#define CROSS 312
#define CASE 313
#define CHECK 314
#define COMMENT 315
#define CURRENT_DATE 316
#define CURRENT_TIME 317
#define CHAR 318
#define COLLATE 319
#define COLUMN 320
#define CONCURRENTLY 321
#define DATABASE 322
#define DECLARE 323
#define DEFERRABLE 324
#define DEFERRED 325
#define DISABLE 326
#define DO 327
#define DOMAIN 328
#define DELAYED 329
#define DAY_HOUR 330
#define DAY_MICROSECOND 331
#define DISTINCT 332
#define DELETE 333
#define DROP 334
#define DAY_MINUTE 335
#define DISTINCTROW 336
#define DAY_SECOND 337
#define DESC 338
#define DEFAULT 339
#define DOUBLE 340
#define DATETIME 341
#define DECIMAL 342
#define DATE 343
#define EACH 344
#define ELSEIF 345
#define ENABLE 346
#define ESCAPED 347
#define EXCEPT 348
#define ENUM 349
#define END 350
#define ELSE 351
#define EXECUTE 352
#define EXIT 353
#define EXPLAIN 354
#define FETCH 355
#define FIRST 356
#define FOREACH 357
#define FLOAT 358
#define FORCE 359
#define FOREIGN 360
#define FROM 361
#define FULL 362
#define FULLTEXT 363
#define FUNCTION 364
#define FOR 365
#define GROUP 366
#define HANDLER 367
#define HOUR_MINUTE 368
#define HOUR_MICROSECOND 369
#define HIGH_PRIORITY 370
#define HOUR_SECOND 371
#define HAVING 372
#define IMMEDIATE 373
#define INOUT 374
#define INITIALLY 375
#define INTEGER 376
#define INNER 377
#define IGNORE 378
#define INDEX 379
#define IF 380
#define INSERT 381
#define INTERSECT 382
#define INTO 383
#define INT 384
#define INTERVAL 385
#define ITERATE 386
#define JOIN 387
#define KEY 388
#define LEAVE 389
#define LOOP 390
#define LESS 391
#define LONGTEXT 392
#define LOW_PRIORITY 393
#define LEFT 394
#define LEADING 395
#define LIMIT 396
#define LOCKED 397
#define OFFSET 398
#define LONGBLOB 399
#define MATCH 400
#define MAXVALUE 401
#define MEDIUMTEXT 402
#define MINUS 403
#define MODIFY 404
#define MEDIUMBLOB 405
#define MEDIUMINT 406
#define NATURAL 407
#define NODE 408
#define NO_ACTION 409
#define NULLX 410
#define OPEN 411
#define OUT 412
#define OUTER 413
#define ON 414
#define ORDER 415
#define ONDUPLICATE 416
#define PARTIAL 417
#define PRIMARY 418
#define PROCEDURE 419
#define QUICK 420
#define RANGE 421
#define REAL 422
#define RECLAIM 423
#define REFERENCES 424
#define RENAME 425
#define RESIGNAL 426
#define RESTRICT 427
#define RETURN 428
#define RETURNS 429
#define ROLLUP 430
#define RIGHT 431
#define REPLACE 432
#define ROW 433
#define SIGNAL 434
#define TRIGGER 435
#define UNTIL 436
#define SQL_SMALL_RESULT 437
#define SCHEMA 438
#define SHARD 439
#define SHARDS 440
#define SHARE 441
#define SKIP 442
#define SOME 443
#define SQL_CALC_FOUND_ROWS 444
#define SQL_BIG_RESULT 445
#define SIMPLE 446
#define STRAIGHT_JOIN 447
#define SMALLINT 448
#define SET 449
#define SELECT 450
#define TINYTEXT 451
#define TINYINT 452
#define TO 453
#define TEMPORARY 454
#define GLOBAL 455
#define PRESERVE 456
#define TEXT 457
#define THAN 458
#define TIMESTAMP 459
#define TABLE 460
#define THEN 461
#define TRAILING 462
#define TRUNCATE 463
#define TINYBLOB 464
#define TIME 465
#define UPDATE 466
#define UNSIGNED 467
#define UNION 468
#define UNIQUE 469
#define UUID 470
#define VIEW 471
#define USING 472
#define USE 473
#define HASH 474
#define VALIDATE 475
#define VARCHAR 476
#define VALUES 477
#define VARBINARY 478
#define WHERE 479
#define WHEN 480
#define WHILE 481
#define WITH 482
#define YEAR 483
#define YEAR_MONTH 484
#define ZEROFILL 485
#define EXISTS 486
#define FSUBSTRING 487
#define FTRIM 488
#define FDATE_ADD 489
#define FDATE_SUB 490
#define FDATEDIFF 491
#define FYEAR 492
#define FMONTH 493
#define FDAY 494
#define FHOUR 495
#define FMINUTE 496
#define FSECOND 497
#define FNOW 498
#define FLEFT 499
#define FRIGHT 500
#define FLPAD 501
#define FRPAD 502
#define FREVERSE 503
#define FREPEAT 504
#define FINSTR 505
#define FLOCATE 506
#define FABS 507
#define FCEIL 508
#define FFLOOR 509
#define FROUND 510
#define FPOWER 511
#define FSQRT 512
#define FMOD 513
#define FRAND 514
#define FLOG 515
#define FLOG10 516
#define FSIGN 517
#define FPI 518
#define FCAST 519
#define FCONVERT 520
#define FNULLIF 521
#define FIFNULL 522
#define FIF 523
#define UNKNOWN 524
#define FGROUP_CONCAT 525
#define SEPARATOR 526
#define FCOUNT 527
#define FSUM 528
#define FAVG 529
#define FMIN 530
#define FMAX 531
#define FUPPER 532
#define FLOWER 533
#define FLENGTH 534
#define FCONCAT 535
#define FREPLACE 536
#define FCOALESCE 537
#define FGEN_RANDOM_UUID 538
#define FGEN_RANDOM_UUID_V7 539
#define FSNOWFLAKE_ID 540
#define FLAST_INSERT_ID 541
#define FEVO_SLEEP 542
#define FEVO_JITTER 543
#define FROW_NUMBER 544
#define FRANK 545
#define FDENSE_RANK 546
#define FLEAD 547
#define FLAG 548
#define FNTILE 549
#define FPERCENT_RANK 550
#define FCUME_DIST 551
#define OVER 552
#define PARTITION 553




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
#line 747 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 760 "parser/evoparser.tab.c"

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
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9078

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  314
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  149
/* YYNRULES -- Number of rules.  */
#define YYNRULES  766
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1845

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   553

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     310,   311,    26,    24,   312,    25,   309,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   308,
       2,   313,     2,     2,     2,     2,     2,     2,     2,     2,
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
     304,   305,   306,   307
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    18,    20,    22,
      24,    26,    28,    32,    36,    40,    44,    48,    52,    55,
      59,    63,    67,    71,    75,    79,    83,    87,    90,    93,
      97,    98,   105,   106,   114,   115,   123,   124,   132,   136,
     141,   145,   150,   154,   160,   167,   169,   173,   174,   176,
     177,   184,   185,   193,   194,   201,   202,   210,   211,   217,
     222,   227,   232,   237,   242,   247,   252,   257,   264,   265,
     275,   276,   286,   287,   297,   298,   309,   310,   321,   322,
     333,   334,   345,   346,   357,   358,   369,   370,   381,   382,
     395,   396,   411,   412,   427,   428,   439,   440,   453,   454,
     469,   470,   485,   486,   497,   498,   508,   509,   519,   528,
     535,   542,   551,   556,   564,   571,   576,   581,   586,   593,
     602,   609,   616,   623,   632,   641,   646,   653,   660,   667,
     672,   677,   682,   689,   694,   701,   706,   713,   717,   722,
     727,   732,   736,   740,   747,   752,   757,   762,   767,   772,
     777,   784,   791,   798,   805,   814,   818,   827,   838,   842,
     846,   850,   854,   859,   866,   868,   870,   872,   879,   886,
     890,   894,   898,   902,   906,   910,   914,   918,   922,   927,
     934,   938,   944,   949,   955,   959,   964,   968,   973,   975,
     977,   979,   981,   985,   998,   999,  1002,  1003,  1008,  1011,
    1016,  1017,  1019,  1021,  1022,  1025,  1026,  1029,  1030,  1034,
    1036,  1040,  1041,  1045,  1048,  1053,  1054,  1058,  1060,  1064,
    1067,  1072,  1075,  1076,  1079,  1084,  1089,  1090,  1093,  1096,
    1101,  1106,  1107,  1110,  1112,  1116,  1117,  1120,  1123,  1126,
    1129,  1132,  1135,  1138,  1141,  1143,  1147,  1149,  1152,  1155,
    1157,  1158,  1160,  1164,  1166,  1168,  1172,  1178,  1182,  1186,
    1188,  1189,  1195,  1199,  1205,  1212,  1218,  1219,  1221,  1223,
    1224,  1226,  1228,  1230,  1233,  1236,  1237,  1238,  1240,  1243,
    1248,  1255,  1262,  1269,  1270,  1273,  1274,  1276,  1280,  1284,
    1286,  1294,  1297,  1300,  1303,  1304,  1311,  1314,  1319,  1320,
    1323,  1331,  1333,  1337,  1343,  1345,  1354,  1365,  1375,  1387,
    1398,  1411,  1423,  1437,  1447,  1459,  1470,  1483,  1495,  1508,
    1510,  1514,  1516,  1521,  1526,  1531,  1538,  1540,  1544,  1547,
    1551,  1557,  1559,  1563,  1564,  1567,  1570,  1574,  1578,  1580,
    1584,  1586,  1590,  1596,  1598,  1609,  1620,  1638,  1651,  1671,
    1683,  1690,  1699,  1706,  1713,  1720,  1730,  1737,  1743,  1752,
    1760,  1770,  1779,  1790,  1800,  1801,  1803,  1806,  1808,  1817,
    1824,  1825,  1830,  1831,  1834,  1837,  1840,  1843,  1845,  1846,
    1847,  1851,  1853,  1857,  1861,  1862,  1869,  1871,  1873,  1877,
    1881,  1889,  1893,  1897,  1903,  1909,  1911,  1920,  1928,  1936,
    1938,  1947,  1948,  1951,  1954,  1958,  1964,  1970,  1978,  1984,
    1986,  1991,  1996,  2000,  2006,  2010,  2016,  2017,  2020,  2022,
    2028,  2036,  2044,  2054,  2066,  2068,  2071,  2075,  2077,  2087,
    2099,  2100,  2105,  2109,  2115,  2121,  2131,  2142,  2144,  2148,
    2158,  2168,  2178,  2185,  2197,  2206,  2207,  2209,  2212,  2214,
    2218,  2224,  2232,  2237,  2242,  2248,  2254,  2259,  2266,  2278,
    2292,  2306,  2322,  2327,  2334,  2336,  2340,  2342,  2346,  2348,
    2352,  2353,  2358,  2364,  2369,  2375,  2380,  2386,  2391,  2397,
    2402,  2407,  2411,  2415,  2419,  2422,  2426,  2431,  2436,  2438,
    2442,  2443,  2448,  2449,  2453,  2456,  2460,  2464,  2468,  2472,
    2478,  2484,  2490,  2494,  2500,  2503,  2511,  2517,  2525,  2531,
    2534,  2538,  2541,  2545,  2548,  2552,  2558,  2563,  2569,  2577,
    2586,  2595,  2603,  2610,  2617,  2623,  2624,  2628,  2634,  2635,
    2637,  2638,  2641,  2644,  2645,  2650,  2654,  2657,  2661,  2665,
    2669,  2673,  2677,  2681,  2685,  2689,  2693,  2697,  2699,  2701,
    2703,  2705,  2707,  2711,  2717,  2720,  2725,  2727,  2729,  2731,
    2733,  2737,  2741,  2745,  2749,  2755,  2761,  2763,  2765,  2767,
    2771,  2775,  2776,  2778,  2780,  2782,  2786,  2790,  2793,  2795,
    2799,  2803,  2807,  2809,  2820,  2830,  2843,  2855,  2868,  2880,
    2895,  2909,  2910,  2912,  2914,  2918,  2921,  2925,  2929,  2933,
    2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,
    2954,  2957,  2962,  2968,  2974,  2980,  2986,  2992,  2994,  2996,
    2998,  3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,
    3018,  3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,
    3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,
    3058,  3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,
    3078,  3080,  3082,  3084,  3086,  3088,  3090,  3092,  3094,  3096,
    3098,  3100,  3102,  3104,  3106,  3108,  3110,  3112,  3114,  3116,
    3118,  3120,  3122,  3124,  3126,  3128,  3130,  3132,  3134,  3136,
    3138,  3140,  3142,  3144,  3146,  3148,  3150,  3152,  3154,  3156,
    3158,  3160,  3162,  3164,  3166,  3168,  3170,  3172,  3174,  3176,
    3178,  3180,  3182,  3184,  3186,  3188,  3190,  3192,  3194,  3196,
    3198,  3200,  3202,  3204,  3206,  3208,  3210,  3212,  3214,  3216,
    3218,  3220,  3222,  3224,  3226,  3228,  3230,  3232,  3234,  3236,
    3238,  3240,  3244,  3250,  3254,  3260,  3262,  3267,  3273,  3275,
    3279,  3281,  3283,  3285,  3287,  3289,  3291,  3293,  3295,  3309,
    3311,  3313,  3315,  3317,  3319,  3321,  3325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     315,     0,    -1,   351,   308,    -1,   351,   308,   315,    -1,
       3,    -1,     3,   309,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   164,    -1,   316,    24,
     316,    -1,   316,    25,   316,    -1,   316,    26,   316,    -1,
     316,    27,   316,    -1,   316,    28,   316,    -1,   316,    29,
     316,    -1,    25,   316,    -1,   310,   316,   311,    -1,   316,
      12,   316,    -1,   316,    10,   316,    -1,   316,    11,   316,
      -1,   316,    21,   316,    -1,   316,    22,   316,    -1,   316,
      30,   316,    -1,   316,    23,   316,    -1,    18,   316,    -1,
      17,   316,    -1,   316,    20,   316,    -1,    -1,   316,    20,
     310,   317,   352,   311,    -1,    -1,   316,    20,    37,   310,
     318,   352,   311,    -1,    -1,   316,    20,   197,   310,   319,
     352,   311,    -1,    -1,   316,    20,    35,   310,   320,   352,
     311,    -1,   316,    15,   164,    -1,   316,    15,    18,   164,
      -1,   316,    15,     6,    -1,   316,    15,    18,     6,    -1,
       8,     9,   316,    -1,   316,    19,   316,    40,   316,    -1,
     316,    18,    19,   316,    40,   316,    -1,   316,    -1,   316,
     312,   321,    -1,    -1,   321,    -1,    -1,   316,    16,   310,
     323,   321,   311,    -1,    -1,   316,    18,    16,   310,   324,
     321,   311,    -1,    -1,   316,    16,   310,   325,   352,   311,
      -1,    -1,   316,    18,    16,   310,   326,   352,   311,    -1,
      -1,   240,   310,   327,   352,   311,    -1,     3,   310,   322,
     311,    -1,   281,   310,    26,   311,    -1,   281,   310,   316,
     311,    -1,   282,   310,   316,   311,    -1,   283,   310,   316,
     311,    -1,   284,   310,   316,   311,    -1,   285,   310,   316,
     311,    -1,   279,   310,   316,   311,    -1,   279,   310,   316,
     280,     4,   311,    -1,    -1,   298,   310,   311,   306,   310,
     328,   359,   361,   311,    -1,    -1,   299,   310,   311,   306,
     310,   329,   359,   361,   311,    -1,    -1,   300,   310,   311,
     306,   310,   330,   359,   361,   311,    -1,    -1,   282,   310,
     316,   311,   306,   310,   331,   359,   361,   311,    -1,    -1,
     281,   310,    26,   311,   306,   310,   332,   359,   361,   311,
      -1,    -1,   281,   310,   316,   311,   306,   310,   333,   359,
     361,   311,    -1,    -1,   283,   310,   316,   311,   306,   310,
     334,   359,   361,   311,    -1,    -1,   284,   310,   316,   311,
     306,   310,   335,   359,   361,   311,    -1,    -1,   285,   310,
     316,   311,   306,   310,   336,   359,   361,   311,    -1,    -1,
     301,   310,   316,   311,   306,   310,   337,   359,   361,   311,
      -1,    -1,   301,   310,   316,   312,     5,   311,   306,   310,
     338,   359,   361,   311,    -1,    -1,   301,   310,   316,   312,
       5,   312,     4,   311,   306,   310,   339,   359,   361,   311,
      -1,    -1,   301,   310,   316,   312,     5,   312,     5,   311,
     306,   310,   340,   359,   361,   311,    -1,    -1,   302,   310,
     316,   311,   306,   310,   341,   359,   361,   311,    -1,    -1,
     302,   310,   316,   312,     5,   311,   306,   310,   342,   359,
     361,   311,    -1,    -1,   302,   310,   316,   312,     5,   312,
       4,   311,   306,   310,   343,   359,   361,   311,    -1,    -1,
     302,   310,   316,   312,     5,   312,     5,   311,   306,   310,
     344,   359,   361,   311,    -1,    -1,   303,   310,     5,   311,
     306,   310,   345,   359,   361,   311,    -1,    -1,   304,   310,
     311,   306,   310,   346,   359,   361,   311,    -1,    -1,   305,
     310,   311,   306,   310,   347,   359,   361,   311,    -1,   241,
     310,   316,   312,   316,   312,   316,   311,    -1,   241,   310,
     316,   312,   316,   311,    -1,   241,   310,   316,   115,   316,
     311,    -1,   241,   310,   316,   115,   316,   119,   316,   311,
      -1,   242,   310,   316,   311,    -1,   242,   310,   348,   316,
     115,   316,   311,    -1,   242,   310,   348,   115,   316,   311,
      -1,   286,   310,   316,   311,    -1,   287,   310,   316,   311,
      -1,   288,   310,   316,   311,    -1,   289,   310,   316,   312,
     316,   311,    -1,   290,   310,   316,   312,   316,   312,   316,
     311,    -1,   291,   310,   316,   312,   316,   311,    -1,   253,
     310,   316,   312,   316,   311,    -1,   254,   310,   316,   312,
     316,   311,    -1,   255,   310,   316,   312,   316,   312,   316,
     311,    -1,   256,   310,   316,   312,   316,   312,   316,   311,
      -1,   257,   310,   316,   311,    -1,   258,   310,   316,   312,
     316,   311,    -1,   259,   310,   316,   312,   316,   311,    -1,
     260,   310,   316,   312,   316,   311,    -1,   261,   310,   316,
     311,    -1,   262,   310,   316,   311,    -1,   263,   310,   316,
     311,    -1,   264,   310,   316,   312,   316,   311,    -1,   264,
     310,   316,   311,    -1,   265,   310,   316,   312,   316,   311,
      -1,   266,   310,   316,   311,    -1,   267,   310,   316,   312,
     316,   311,    -1,   268,   310,   311,    -1,   269,   310,   316,
     311,    -1,   270,   310,   316,   311,    -1,   271,   310,   316,
     311,    -1,   272,   310,   311,    -1,   252,   310,   311,    -1,
     245,   310,   316,   312,   316,   311,    -1,   246,   310,   316,
     311,    -1,   247,   310,   316,   311,    -1,   248,   310,   316,
     311,    -1,   249,   310,   316,   311,    -1,   250,   310,   316,
     311,    -1,   251,   310,   316,   311,    -1,   273,   310,   316,
      41,   441,   311,    -1,   274,   310,   316,   312,   441,   311,
      -1,   275,   310,   316,   312,   316,   311,    -1,   276,   310,
     316,   312,   316,   311,    -1,   277,   310,   316,   312,   316,
     312,   316,   311,    -1,   316,    15,   278,    -1,   289,   310,
     316,   312,   316,   312,   316,   311,    -1,   289,   310,   316,
     312,   316,   312,   316,   312,   316,   311,    -1,   292,   310,
     311,    -1,   293,   310,   311,    -1,   294,   310,   311,    -1,
     295,   310,   311,    -1,   296,   310,   316,   311,    -1,   297,
     310,   316,   312,   316,   311,    -1,   149,    -1,   216,    -1,
      55,    -1,   243,   310,   316,   312,   349,   311,    -1,   244,
     310,   316,   312,   349,   311,    -1,   139,   316,   237,    -1,
     139,   316,    84,    -1,   139,   316,    85,    -1,   139,   316,
      89,    -1,   139,   316,    91,    -1,   139,   316,   238,    -1,
     139,   316,   123,    -1,   139,   316,   122,    -1,   139,   316,
     125,    -1,    67,   316,   350,   104,    -1,    67,   316,   350,
     105,   316,   104,    -1,    67,   350,   104,    -1,    67,   350,
     105,   316,   104,    -1,   234,   316,   215,   316,    -1,   350,
     234,   316,   215,   316,    -1,   316,    14,   316,    -1,   316,
      18,    14,   316,    -1,   316,    13,   316,    -1,   316,    18,
      13,   316,    -1,    62,    -1,    70,    -1,    71,    -1,   352,
      -1,   204,   370,   371,    -1,   204,   370,   371,   115,   374,
     353,   354,   358,   363,   366,   367,   368,    -1,    -1,   233,
     316,    -1,    -1,   120,    53,   355,   357,    -1,   316,   356,
      -1,   355,   312,   316,   356,    -1,    -1,    39,    -1,    92,
      -1,    -1,   236,   184,    -1,    -1,   126,   316,    -1,    -1,
     307,    53,   360,    -1,     3,    -1,   360,   312,     3,    -1,
      -1,   169,    53,   362,    -1,     3,   356,    -1,   362,   312,
       3,   356,    -1,    -1,   169,    53,   364,    -1,   365,    -1,
     364,   312,   365,    -1,     3,   356,    -1,     3,   309,     3,
     356,    -1,     5,   356,    -1,    -1,   150,   316,    -1,   150,
     316,   312,   316,    -1,   150,   316,   152,   316,    -1,    -1,
     119,   220,    -1,   119,   195,    -1,   119,   220,   196,   151,
      -1,   119,   195,   196,   151,    -1,    -1,   137,   369,    -1,
       3,    -1,   369,   312,     3,    -1,    -1,   370,    35,    -1,
     370,    86,    -1,   370,    90,    -1,   370,   124,    -1,   370,
     201,    -1,   370,   191,    -1,   370,   199,    -1,   370,   198,
      -1,   372,    -1,   371,   312,   372,    -1,    26,    -1,   316,
     373,    -1,    41,     3,    -1,     3,    -1,    -1,   375,    -1,
     374,   312,   375,    -1,   376,    -1,   378,    -1,     3,   373,
     385,    -1,     3,   309,     3,   373,   385,    -1,   388,   377,
       3,    -1,   310,   374,   311,    -1,    41,    -1,    -1,   375,
     379,   141,   376,   383,    -1,   375,   201,   376,    -1,   375,
     201,   376,   168,   316,    -1,   375,   381,   380,   141,   376,
     384,    -1,   375,   161,   382,   141,   376,    -1,    -1,   131,
      -1,    66,    -1,    -1,   167,    -1,   148,    -1,   185,    -1,
     148,   380,    -1,   185,   380,    -1,    -1,    -1,   384,    -1,
     168,   316,    -1,   226,   310,   369,   311,    -1,   227,   142,
     386,   310,   387,   311,    -1,   132,   142,   386,   310,   387,
     311,    -1,   113,   142,   386,   310,   387,   311,    -1,    -1,
     119,   141,    -1,    -1,     3,    -1,   387,   312,     3,    -1,
     310,   352,   311,    -1,   389,    -1,    87,   390,   115,     3,
     353,   363,   366,    -1,   390,   147,    -1,   390,   174,    -1,
     390,   132,    -1,    -1,    87,   390,   391,   115,   374,   353,
      -1,     3,   392,    -1,   391,   312,     3,   392,    -1,    -1,
     309,    26,    -1,    87,   390,   115,   391,   226,   374,   353,
      -1,   393,    -1,    88,   214,     3,    -1,    88,   214,   134,
     240,     3,    -1,   394,    -1,    63,   133,     3,   168,     3,
     310,   395,   311,    -1,    63,   133,   134,   240,     3,   168,
       3,   310,   395,   311,    -1,    63,   223,   133,     3,   168,
       3,   310,   395,   311,    -1,    63,   223,   133,   134,   240,
       3,   168,     3,   310,   395,   311,    -1,    63,   133,     3,
     168,     3,   226,   228,   310,   395,   311,    -1,    63,   133,
     134,   240,     3,   168,     3,   226,   228,   310,   395,   311,
      -1,    63,   223,   133,     3,   168,     3,   226,   228,   310,
     395,   311,    -1,    63,   223,   133,   134,   240,     3,   168,
       3,   226,   228,   310,   395,   311,    -1,    63,   133,    75,
       3,   168,     3,   310,   395,   311,    -1,    63,   133,    75,
     134,   240,     3,   168,     3,   310,   395,   311,    -1,    63,
     223,   133,    75,     3,   168,     3,   310,   395,   311,    -1,
      63,   223,   133,    75,   134,   240,     3,   168,     3,   310,
     395,   311,    -1,    63,   133,    75,     3,   168,     3,   226,
     228,   310,   395,   311,    -1,    63,   223,   133,    75,     3,
     168,     3,   226,   228,   310,   395,   311,    -1,     3,    -1,
     395,   312,     3,    -1,   396,    -1,   286,   310,     3,   311,
      -1,   287,   310,     3,   311,    -1,   288,   310,     3,   311,
      -1,   289,   310,     3,   312,     3,   311,    -1,   397,    -1,
      88,   133,     3,    -1,   398,   400,    -1,   217,   214,     3,
      -1,   217,   214,     3,   312,   399,    -1,     3,    -1,   399,
     312,     3,    -1,    -1,   400,    64,    -1,   400,   181,    -1,
     400,    45,    43,    -1,   400,    44,    43,    -1,   401,    -1,
     177,   214,     3,    -1,   402,    -1,    36,   214,     3,    -1,
      36,   214,     3,   309,     3,    -1,   403,    -1,    32,   214,
       3,    33,    61,     3,    68,   310,   316,   311,    -1,    32,
     214,     3,    33,    61,     3,   223,   310,   434,   311,    -1,
      32,   214,     3,    33,    61,     3,   114,   142,   310,   431,
     311,   178,     3,   310,   432,   311,   433,    -1,    32,   214,
       3,    33,    61,     3,    68,   310,   316,   311,    18,   229,
      -1,    32,   214,     3,    33,    61,     3,   114,   142,   310,
     431,   311,   178,     3,   310,   432,   311,   433,    18,   229,
      -1,    32,   214,     3,    33,    61,     3,   172,   142,   310,
     430,   311,    -1,    32,   214,     3,    88,    61,     3,    -1,
      32,   214,     3,   179,    61,     3,   207,     3,    -1,    32,
     214,     3,   100,    61,     3,    -1,    32,   214,     3,    80,
      61,     3,    -1,    32,   214,     3,   229,    61,     3,    -1,
      32,   214,     3,    33,    74,     3,   441,   436,   404,    -1,
      32,   214,     3,    88,    74,     3,    -1,    32,   214,     3,
      88,     3,    -1,    32,   214,     3,   179,    74,     3,   207,
       3,    -1,    32,   214,     3,   179,     3,   207,     3,    -1,
      32,   214,     3,   158,    74,     3,   441,   436,   404,    -1,
      32,   214,     3,   158,     3,   441,   436,   404,    -1,    32,
     214,     3,    65,    74,     3,     3,   441,   436,   404,    -1,
      32,   214,     3,    65,     3,     3,   441,   436,   404,    -1,
      -1,   110,    -1,    34,     3,    -1,   405,    -1,   135,   407,
     408,     3,   409,   231,   411,   406,    -1,   135,   407,   408,
       3,   409,   352,    -1,    -1,   170,   142,   220,   414,    -1,
      -1,   407,   147,    -1,   407,    83,    -1,   407,   124,    -1,
     407,   132,    -1,   137,    -1,    -1,    -1,   310,   410,   311,
      -1,     3,    -1,   410,   312,     3,    -1,   310,   413,   311,
      -1,    -1,   411,   312,   412,   310,   413,   311,    -1,   316,
      -1,    93,    -1,   413,   312,   316,    -1,   413,   312,    93,
      -1,   135,   407,   408,     3,   203,   414,   406,    -1,     3,
      20,   316,    -1,     3,    20,    93,    -1,   414,   312,     3,
      20,   316,    -1,   414,   312,     3,    20,    93,    -1,   415,
      -1,   186,   407,   408,     3,   409,   231,   411,   406,    -1,
     186,   407,   408,     3,   203,   414,   406,    -1,   186,   407,
     408,     3,   409,   352,   406,    -1,   416,    -1,   220,   417,
     374,   203,   418,   353,   363,   366,    -1,    -1,   407,   147,
      -1,   407,   132,    -1,     3,    20,   316,    -1,     3,   309,
       3,    20,   316,    -1,   418,   312,     3,    20,   316,    -1,
     418,   312,     3,   309,     3,    20,   316,    -1,   179,   214,
       3,   207,     3,    -1,   419,    -1,    63,    76,   420,     3,
      -1,    63,   192,   420,     3,    -1,    88,    76,     3,    -1,
      88,    76,   134,   240,     3,    -1,    88,   192,     3,    -1,
      88,   192,   134,   240,     3,    -1,    -1,   134,   240,    -1,
     421,    -1,    63,    82,     3,    41,   441,    -1,    63,    82,
       3,    41,   441,    93,   316,    -1,    63,    82,     3,    41,
     441,    18,   164,    -1,    63,    82,     3,    41,   441,    68,
     310,   316,   311,    -1,    63,    82,     3,    41,   441,    18,
     164,    68,   310,   316,   311,    -1,   422,    -1,   227,     3,
      -1,   227,    76,     3,    -1,   423,    -1,    63,   427,   214,
     420,     3,   310,   428,   311,   424,    -1,    63,   427,   214,
     420,     3,   309,     3,   310,   428,   311,   424,    -1,    -1,
     424,    38,    20,     5,    -1,   424,    38,     5,    -1,   424,
     168,     3,    87,     3,    -1,   424,   168,     3,   210,     3,
      -1,   424,   193,    53,   228,   310,     3,   311,   194,     5,
      -1,   424,   193,    53,   175,   310,     3,   311,   310,   425,
     311,    -1,   426,    -1,   425,   312,   426,    -1,   193,     3,
     231,   145,   212,     4,   168,   162,     5,    -1,   193,     3,
     231,   145,   212,   155,   168,   162,     5,    -1,    63,   427,
     214,   420,     3,   310,   428,   311,   443,    -1,    63,   427,
     214,   420,     3,   443,    -1,    63,   427,   214,   420,     3,
     309,     3,   310,   428,   311,   443,    -1,    63,   427,   214,
     420,     3,   309,     3,   443,    -1,    -1,   208,    -1,   209,
     208,    -1,   429,    -1,   428,   312,   429,    -1,   172,   142,
     310,   430,   311,    -1,    61,     3,   172,   142,   310,   430,
     311,    -1,   142,   310,   369,   311,    -1,   133,   310,   369,
     311,    -1,   117,   133,   310,   369,   311,    -1,   117,   142,
     310,   369,   311,    -1,    68,   310,   316,   311,    -1,    61,
       3,    68,   310,   316,   311,    -1,   114,   142,   310,   431,
     311,   178,     3,   310,   432,   311,   433,    -1,   114,   142,
     310,   431,   311,   178,     3,   309,     3,   310,   432,   311,
     433,    -1,    61,     3,   114,   142,   310,   431,   311,   178,
       3,   310,   432,   311,   433,    -1,    61,     3,   114,   142,
     310,   431,   311,   178,     3,   309,     3,   310,   432,   311,
     433,    -1,   223,   310,   434,   311,    -1,    61,     3,   223,
     310,   434,   311,    -1,     3,    -1,   430,   312,     3,    -1,
       3,    -1,   431,   312,     3,    -1,     3,    -1,   432,   312,
       3,    -1,    -1,   433,   168,    87,    64,    -1,   433,   168,
      87,   203,   164,    -1,   433,   168,    87,   181,    -1,   433,
     168,    87,   203,    93,    -1,   433,   168,   220,    64,    -1,
     433,   168,   220,   203,   164,    -1,   433,   168,   220,   181,
      -1,   433,   168,   220,   203,    93,    -1,   433,   168,    87,
     163,    -1,   433,   168,   220,   163,    -1,   433,   154,   116,
      -1,   433,   154,   200,    -1,   433,   154,   171,    -1,   433,
      78,    -1,   433,    18,    78,    -1,   433,    78,   129,    79,
      -1,   433,    78,   129,   127,    -1,     3,    -1,   434,   312,
       3,    -1,    -1,   435,     3,   441,   436,    -1,    -1,   436,
      18,   164,    -1,   436,   164,    -1,   436,    93,     4,    -1,
     436,    93,     5,    -1,   436,    93,     7,    -1,   436,    93,
       6,    -1,   436,    93,   292,   310,   311,    -1,   436,    93,
     293,   310,   311,    -1,   436,    93,   294,   310,   311,    -1,
     436,    93,    62,    -1,   436,    93,   310,   316,   311,    -1,
     436,    38,    -1,   436,    38,   310,     5,   312,     5,   311,
      -1,   436,    38,   310,     5,   311,    -1,   436,    43,   310,
       5,   312,     5,   311,    -1,   436,    43,   310,     5,   311,
      -1,   436,    43,    -1,   436,   223,   142,    -1,   436,   223,
      -1,   436,   172,   142,    -1,   436,   142,    -1,   436,    69,
       4,    -1,   436,    68,   310,   316,   311,    -1,   436,    61,
       3,   223,    -1,   436,    61,     3,   172,   142,    -1,   436,
      61,     3,    68,   310,   316,   311,    -1,   436,    46,    42,
      41,   310,   316,   311,    47,    -1,   436,    46,    42,    41,
     310,   316,   311,    48,    -1,   436,    46,    42,    41,   310,
     316,   311,    -1,   436,    41,   310,   316,   311,    47,    -1,
     436,    41,   310,   316,   311,    48,    -1,   436,    41,   310,
     316,   311,    -1,    -1,   310,     5,   311,    -1,   310,     5,
     312,     5,   311,    -1,    -1,    54,    -1,    -1,   439,   221,
      -1,   439,   239,    -1,    -1,   440,    72,   203,     4,    -1,
     440,    73,     4,    -1,    57,   437,    -1,   206,   437,   439,
      -1,   202,   437,   439,    -1,   160,   437,   439,    -1,   138,
     437,   439,    -1,   130,   437,   439,    -1,    56,   437,   439,
      -1,   176,   437,   439,    -1,    94,   437,   439,    -1,   112,
     437,   439,    -1,    96,   437,   439,    -1,    97,    -1,   219,
      -1,   213,    -1,    95,    -1,   237,    -1,    72,   437,   440,
      -1,   230,   310,     5,   311,   440,    -1,    54,   437,    -1,
     232,   310,     5,   311,    -1,   218,    -1,    51,    -1,   159,
      -1,   153,    -1,   205,   438,   440,    -1,   211,   438,   440,
      -1,   156,   438,   440,    -1,   146,   438,   440,    -1,   103,
     310,   442,   311,   440,    -1,   203,   310,   442,   311,   440,
      -1,    52,    -1,   224,    -1,     4,    -1,   442,   312,     4,
      -1,   444,   377,   352,    -1,    -1,   132,    -1,   186,    -1,
     445,    -1,   203,   192,     3,    -1,   203,   192,    93,    -1,
     203,   446,    -1,   447,    -1,   446,   312,   447,    -1,     8,
      20,   316,    -1,     8,     9,   316,    -1,   448,    -1,    63,
     173,     3,   310,   449,   311,    41,    50,   453,   104,    -1,
      63,   173,     3,   310,   449,   311,    50,   453,   104,    -1,
      63,    10,   186,   173,     3,   310,   449,   311,    41,    50,
     453,   104,    -1,    63,    10,   186,   173,     3,   310,   449,
     311,    50,   453,   104,    -1,    63,   118,     3,   310,   449,
     311,   183,   452,    41,    50,   453,   104,    -1,    63,   118,
       3,   310,   449,   311,   183,   452,    50,   453,   104,    -1,
      63,    10,   186,   118,     3,   310,   449,   311,   183,   452,
      41,    50,   453,   104,    -1,    63,    10,   186,   118,     3,
     310,   449,   311,   183,   452,    50,   453,   104,    -1,    -1,
     450,    -1,   451,    -1,   450,   312,   451,    -1,     3,   441,
      -1,    16,     3,   441,    -1,   166,     3,   441,    -1,   128,
       3,   441,    -1,   130,    -1,   138,    -1,   230,    -1,   211,
      -1,    52,    -1,   112,    -1,    94,    -1,    56,    -1,    97,
      -1,   213,    -1,    -1,   453,   454,    -1,   453,    50,   453,
     104,    -1,   453,   134,   453,   104,   134,    -1,   453,   235,
     453,   104,   235,    -1,   453,   144,   453,   104,   144,    -1,
     453,   111,   453,   104,   111,    -1,   453,    67,   453,   104,
      67,    -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,
       6,    -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,
      16,    -1,    40,    -1,   204,    -1,   135,    -1,   220,    -1,
      87,    -1,   115,    -1,   233,    -1,   203,    -1,   137,    -1,
     231,    -1,    63,    -1,    88,    -1,   214,    -1,   133,    -1,
     215,    -1,   105,    -1,    99,    -1,    77,    -1,    81,    -1,
      58,    -1,   182,    -1,   143,    -1,   140,    -1,    60,    -1,
     165,    -1,   109,    -1,    59,    -1,   121,    -1,   107,    -1,
     166,    -1,   128,    -1,   119,    -1,    44,    -1,   188,    -1,
     180,    -1,   106,    -1,   190,    -1,    49,    -1,    98,    -1,
     187,    -1,   189,    -1,    41,    -1,   168,    -1,   169,    -1,
      53,    -1,   120,    -1,   126,    -1,   150,    -1,   152,    -1,
     141,    -1,   148,    -1,   185,    -1,   131,    -1,   167,    -1,
     116,    -1,    66,    -1,   161,    -1,   226,    -1,   164,    -1,
      93,    -1,   172,    -1,   142,    -1,   223,    -1,    68,    -1,
     114,    -1,   178,    -1,    64,    -1,   181,    -1,   163,    -1,
     130,    -1,   138,    -1,   230,    -1,   211,    -1,    52,    -1,
     112,    -1,    94,    -1,    56,    -1,    97,    -1,   213,    -1,
     202,    -1,    96,    -1,    72,    -1,   224,    -1,    51,    -1,
     222,    -1,   102,    -1,   136,    -1,    35,    -1,    86,    -1,
     240,    -1,   234,    -1,   236,    -1,   173,    -1,   118,    -1,
     183,    -1,   310,    -1,   311,    -1,   312,    -1,   308,    -1,
     309,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    17,    -1,   313,    -1,   281,    -1,   282,    -1,
     283,    -1,   284,    -1,   285,    -1,     8,    -1,   455,    -1,
      88,   173,     3,    -1,    88,   173,   134,   240,     3,    -1,
      88,   118,     3,    -1,    88,   118,   134,   240,     3,    -1,
     456,    -1,    58,     3,   310,   311,    -1,    58,     3,   310,
     457,   311,    -1,   458,    -1,   457,   312,   458,    -1,     5,
      -1,     4,    -1,     7,    -1,   164,    -1,     6,    -1,     3,
      -1,     8,    -1,   459,    -1,    63,   189,     3,   460,   461,
     168,     3,   119,    98,   187,    50,   453,   104,    -1,    49,
      -1,    34,    -1,   135,    -1,   220,    -1,    87,    -1,   462,
      -1,    88,   189,     3,    -1,    88,   189,   134,   240,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   397,   397,   398,   403,   410,   411,   412,   430,   438,
     446,   452,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     483,   483,   492,   492,   494,   494,   496,   496,   500,   501,
     502,   503,   504,   507,   508,   511,   512,   515,   516,   519,
     519,   520,   520,   521,   521,   529,   529,   537,   537,   548,
     552,   553,   554,   555,   556,   557,   558,   559,   563,   563,
     565,   565,   567,   567,   570,   570,   572,   572,   574,   574,
     576,   576,   578,   578,   580,   580,   583,   583,   585,   585,
     587,   587,   589,   589,   591,   591,   593,   593,   595,   595,
     597,   597,   600,   600,   602,   602,   604,   604,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   643,   644,   645,   646,   647,   648,   649,   650,
     652,   653,   655,   656,   657,   659,   660,   661,   662,   669,
     676,   683,   687,   691,   697,   698,   699,   702,   708,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   726,   728,
     730,   732,   736,   744,   755,   756,   759,   760,   763,   771,
     779,   790,   800,   801,   815,   816,   817,   818,   821,   828,
     836,   837,   838,   841,   842,   845,   846,   850,   851,   854,
     856,   860,   861,   864,   866,   870,   871,   874,   875,   878,
     884,   891,   900,   901,   902,   903,   906,   907,   908,   909,
     910,   913,   914,   917,   918,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   932,   933,   934,   942,   948,   949,
     950,   953,   954,   957,   958,   962,   969,   970,   971,   974,
     975,   979,   981,   983,   985,   987,   991,   992,   993,   996,
     997,  1000,  1001,  1004,  1005,  1006,  1009,  1010,  1013,  1014,
    1018,  1020,  1022,  1024,  1027,  1028,  1031,  1032,  1035,  1039,
    1049,  1057,  1058,  1059,  1060,  1064,  1068,  1070,  1074,  1074,
    1076,  1081,  1088,  1095,  1105,  1112,  1119,  1129,  1137,  1147,
    1155,  1164,  1173,  1183,  1191,  1200,  1209,  1219,  1228,  1240,
    1245,  1250,  1256,  1263,  1270,  1277,  1287,  1294,  1303,  1310,
    1316,  1324,  1330,  1338,  1339,  1340,  1341,  1342,  1346,  1353,
    1362,  1369,  1375,  1386,  1389,  1395,  1401,  1408,  1414,  1421,
    1427,  1433,  1439,  1445,  1451,  1457,  1463,  1469,  1475,  1481,
    1487,  1493,  1499,  1505,  1513,  1514,  1515,  1518,  1526,  1532,
    1545,  1546,  1549,  1550,  1551,  1552,  1553,  1556,  1556,  1559,
    1560,  1563,  1573,  1586,  1587,  1587,  1590,  1591,  1592,  1593,
    1596,  1600,  1601,  1602,  1603,  1609,  1612,  1618,  1623,  1629,
    1637,  1646,  1647,  1648,  1652,  1663,  1675,  1686,  1701,  1706,
    1710,  1711,  1715,  1717,  1719,  1721,  1725,  1726,  1732,  1736,
    1738,  1740,  1742,  1744,  1749,  1753,  1754,  1758,  1767,  1777,
    1781,  1782,  1783,  1784,  1785,  1786,  1788,  1792,  1793,  1796,
    1811,  1818,  1833,  1846,  1861,  1874,  1875,  1876,  1879,  1880,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1893,
    1895,  1897,  1899,  1901,  1905,  1906,  1909,  1910,  1913,  1914,
    1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,
    1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,  1937,  1938,
    1941,  1941,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,
    1959,  1960,  1961,  1962,  1969,  1970,  1971,  1972,  1973,  1974,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,
    1985,  1986,  1987,  1988,  1989,  1992,  1993,  1994,  1997,  1998,
    2001,  2002,  2003,  2006,  2007,  2008,  2012,  2013,  2014,  2015,
    2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,  2025,
    2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,
    2036,  2037,  2038,  2039,  2040,  2041,  2042,  2043,  2046,  2047,
    2050,  2063,  2064,  2065,  2069,  2072,  2073,  2074,  2075,  2075,
    2077,  2078,  2086,  2090,  2096,  2102,  2109,  2116,  2122,  2128,
    2135,  2144,  2145,  2148,  2149,  2152,  2153,  2154,  2155,  2158,
    2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,  2174,
    2175,  2176,  2177,  2178,  2179,  2180,  2181,  2184,  2185,  2186,
    2186,  2186,  2187,  2187,  2187,  2187,  2187,  2187,  2188,  2188,
    2188,  2188,  2188,  2188,  2188,  2188,  2188,  2189,  2189,  2189,
    2189,  2189,  2189,  2189,  2190,  2190,  2190,  2190,  2191,  2191,
    2191,  2191,  2191,  2191,  2191,  2191,  2191,  2191,  2191,  2191,
    2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2193,  2193,
    2193,  2193,  2193,  2193,  2193,  2193,  2194,  2194,  2194,  2194,
    2194,  2194,  2194,  2194,  2194,  2195,  2195,  2195,  2195,  2195,
    2195,  2195,  2195,  2196,  2196,  2196,  2197,  2197,  2197,  2197,
    2197,  2197,  2197,  2197,  2198,  2198,  2198,  2198,  2198,  2198,
    2198,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  2200,  2200,
    2200,  2200,  2201,  2201,  2201,  2201,  2201,  2201,  2201,  2201,
    2201,  2201,  2201,  2201,  2202,  2202,  2202,  2202,  2202,  2203,
    2210,  2214,  2220,  2226,  2232,  2244,  2248,  2254,  2262,  2263,
    2266,  2267,  2268,  2269,  2270,  2271,  2272,  2279,  2283,  2291,
    2292,  2295,  2296,  2297,  2300,  2304,  2310
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
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "ALTER",
  "ADD", "AFTER", "ALL", "ANALYZE", "ANY", "AUTO_INCREMENT", "ASC", "AND",
  "AS", "ALWAYS", "IDENTITY", "CONTINUE", "RESTART", "GENERATED", "STORED",
  "VIRTUAL", "BEFORE", "BEGINWORK", "BLOB", "BOOLEAN", "BY", "BINARY",
  "BOTH", "BIGINT", "BIT", "CALL", "CLOSE", "CURSOR", "CONSTRAINT",
  "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CHANGE", "CROSS", "CASE",
  "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE",
  "COLUMN", "CONCURRENTLY", "DATABASE", "DECLARE", "DEFERRABLE",
  "DEFERRED", "DISABLE", "DO", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE", "ESCAPED", "EXCEPT",
  "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN", "FETCH", "FIRST",
  "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL", "FULLTEXT",
  "FUNCTION", "FOR", "GROUP", "HANDLER", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INOUT",
  "INITIALLY", "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT",
  "INTERSECT", "INTO", "INT", "INTERVAL", "ITERATE", "JOIN", "KEY",
  "LEAVE", "LOOP", "LESS", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING",
  "LIMIT", "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE",
  "MEDIUMTEXT", "MINUS", "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL",
  "NODE", "NO_ACTION", "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER",
  "ONDUPLICATE", "PARTIAL", "PRIMARY", "PROCEDURE", "QUICK", "RANGE",
  "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT",
  "RETURN", "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW", "SIGNAL",
  "TRIGGER", "UNTIL", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS",
  "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT",
  "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "TINYTEXT",
  "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT", "THAN",
  "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME",
  "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "VIEW", "USING", "USE",
  "HASH", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN",
  "WHILE", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FDATEDIFF", "FYEAR",
  "FMONTH", "FDAY", "FHOUR", "FMINUTE", "FSECOND", "FNOW", "FLEFT",
  "FRIGHT", "FLPAD", "FRPAD", "FREVERSE", "FREPEAT", "FINSTR", "FLOCATE",
  "FABS", "FCEIL", "FFLOOR", "FROUND", "FPOWER", "FSQRT", "FMOD", "FRAND",
  "FLOG", "FLOG10", "FSIGN", "FPI", "FCAST", "FCONVERT", "FNULLIF",
  "FIFNULL", "FIF", "UNKNOWN", "FGROUP_CONCAT", "SEPARATOR", "FCOUNT",
  "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT",
  "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7",
  "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER",
  "FROW_NUMBER", "FRANK", "FDENSE_RANK", "FLEAD", "FLAG", "FNTILE",
  "FPERCENT_RANK", "FCUME_DIST", "OVER", "PARTITION", "';'", "'.'", "'('",
  "')'", "','", "'='", "$accept", "stmt_list", "expr", "@1", "@2", "@3",
  "@4", "val_list", "opt_val_list", "@5", "@6", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20",
  "@21", "@22", "@23", "@24", "@25", "@26", "@27", "@28", "@29",
  "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
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
  "insert_opts", "opt_into", "opt_col_names", "insert_col_list",
  "insert_vals_list", "@30", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_table_options",
  "shard_range_list", "shard_range_def", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list",
  "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@31", "column_atts", "opt_length", "opt_binary",
  "opt_uz", "opt_csc", "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr",
  "create_procedure_stmt", "opt_proc_params", "proc_param_list",
  "proc_param", "proc_return_type", "proc_body_skip", "proc_body_any",
  "drop_procedure_stmt", "call_stmt", "call_arg_list", "call_arg",
  "create_trigger_stmt", "trigger_timing", "trigger_event",
  "drop_trigger_stmt", 0
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
     546,   547,   548,   549,   550,   551,   552,   553,    59,    46,
      40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   314,   315,   315,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     317,   316,   318,   316,   319,   316,   320,   316,   316,   316,
     316,   316,   316,   316,   316,   321,   321,   322,   322,   323,
     316,   324,   316,   325,   316,   326,   316,   327,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   328,   316,
     329,   316,   330,   316,   331,   316,   332,   316,   333,   316,
     334,   316,   335,   316,   336,   316,   337,   316,   338,   316,
     339,   316,   340,   316,   341,   316,   342,   316,   343,   316,
     344,   316,   345,   316,   346,   316,   347,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   348,   348,   348,   316,   316,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   316,   316,
     316,   316,   350,   350,   316,   316,   316,   316,   316,   316,
     316,   351,   352,   352,   353,   353,   354,   354,   355,   355,
     356,   356,   356,   357,   357,   358,   358,   359,   359,   360,
     360,   361,   361,   362,   362,   363,   363,   364,   364,   365,
     365,   365,   366,   366,   366,   366,   367,   367,   367,   367,
     367,   368,   368,   369,   369,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   371,   371,   371,   372,   373,   373,
     373,   374,   374,   375,   375,   376,   376,   376,   376,   377,
     377,   378,   378,   378,   378,   378,   379,   379,   379,   380,
     380,   381,   381,   382,   382,   382,   383,   383,   384,   384,
     385,   385,   385,   385,   386,   386,   387,   387,   388,   351,
     389,   390,   390,   390,   390,   389,   391,   391,   392,   392,
     389,   351,   393,   393,   351,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   395,
     395,   395,   396,   396,   396,   396,   351,   397,   351,   398,
     398,   399,   399,   400,   400,   400,   400,   400,   351,   401,
     351,   402,   402,   351,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   404,   404,   404,   351,   405,   405,
     406,   406,   407,   407,   407,   407,   407,   408,   408,   409,
     409,   410,   410,   411,   412,   411,   413,   413,   413,   413,
     405,   414,   414,   414,   414,   351,   415,   415,   415,   351,
     416,   417,   417,   417,   418,   418,   418,   418,   351,   351,
     419,   419,   351,   351,   351,   351,   420,   420,   351,   421,
     421,   421,   421,   421,   351,   422,   422,   351,   423,   423,
     424,   424,   424,   424,   424,   424,   424,   425,   425,   426,
     426,   423,   423,   423,   423,   427,   427,   427,   428,   428,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   430,   430,   431,   431,   432,   432,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   434,   434,
     435,   429,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   437,   437,   437,   438,   438,
     439,   439,   439,   440,   440,   440,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   442,   442,
     443,   444,   444,   444,   351,   445,   445,   445,   446,   446,
     447,   447,   351,   448,   448,   448,   448,   448,   448,   448,
     448,   449,   449,   450,   450,   451,   451,   451,   451,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   453,
     453,   453,   453,   453,   453,   453,   453,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     351,   455,   455,   455,   455,   351,   456,   456,   457,   457,
     458,   458,   458,   458,   458,   458,   458,   351,   459,   460,
     460,   461,   461,   461,   351,   462,   462
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       0,     6,     0,     7,     0,     7,     0,     7,     3,     4,
       3,     4,     3,     5,     6,     1,     3,     0,     1,     0,
       6,     0,     7,     0,     6,     0,     7,     0,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     0,     9,
       0,     9,     0,     9,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    10,     0,    12,
       0,    14,     0,    14,     0,    10,     0,    12,     0,    14,
       0,    14,     0,    10,     0,     9,     0,     9,     8,     6,
       6,     8,     4,     7,     6,     4,     4,     4,     6,     8,
       6,     6,     6,     8,     8,     4,     6,     6,     6,     4,
       4,     4,     6,     4,     6,     4,     6,     3,     4,     4,
       4,     3,     3,     6,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     6,     8,     3,     8,    10,     3,     3,
       3,     3,     4,     6,     1,     1,     1,     6,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       3,     5,     4,     5,     3,     4,     3,     4,     1,     1,
       1,     1,     3,    12,     0,     2,     0,     4,     2,     4,
       0,     1,     1,     0,     2,     0,     2,     0,     3,     1,
       3,     0,     3,     2,     4,     0,     3,     1,     3,     2,
       4,     2,     0,     2,     4,     4,     0,     2,     2,     4,
       4,     0,     2,     1,     3,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     2,     2,     1,
       0,     1,     3,     1,     1,     3,     5,     3,     3,     1,
       0,     5,     3,     5,     6,     5,     0,     1,     1,     0,
       1,     1,     1,     2,     2,     0,     0,     1,     2,     4,
       6,     6,     6,     0,     2,     0,     1,     3,     3,     1,
       7,     2,     2,     2,     0,     6,     2,     4,     0,     2,
       7,     1,     3,     5,     1,     8,    10,     9,    11,    10,
      12,    11,    13,     9,    11,    10,    12,    11,    12,     1,
       3,     1,     4,     4,     4,     6,     1,     3,     2,     3,
       5,     1,     3,     0,     2,     2,     3,     3,     1,     3,
       1,     3,     5,     1,    10,    10,    17,    12,    19,    11,
       6,     8,     6,     6,     6,     9,     6,     5,     8,     7,
       9,     8,    10,     9,     0,     1,     2,     1,     8,     6,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       8,     0,     2,     2,     3,     5,     5,     7,     5,     1,
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
       3,     3,     3,     3,     5,     5,     1,     1,     1,     3,
       3,     0,     1,     1,     1,     3,     3,     2,     1,     3,
       3,     3,     1,    10,     9,    12,    11,    12,    11,    14,
      13,     0,     1,     1,     3,     2,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     4,     5,     5,     5,     5,     5,     1,     1,     1,
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
       1,     3,     5,     3,     5,     1,     4,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,    13,     1,
       1,     1,     1,     1,     1,     3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   445,   294,     0,   372,     0,     0,
     372,     0,   235,     0,   372,     0,     0,     0,   191,   289,
     301,   304,   326,   333,   338,   340,   343,   367,   395,   399,
     409,   418,   424,   427,   574,   582,   740,   745,   757,   764,
       0,     0,     0,     0,   416,     0,     0,     0,     0,     0,
     416,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   378,     0,     0,   378,     0,     0,   577,
     578,     0,     0,     0,     0,   425,     0,     1,     2,   328,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,     0,   416,   298,     0,   293,
     291,   292,     0,   412,     0,   743,     0,   327,   741,     0,
     765,     0,   414,     0,   302,     0,   374,   375,   376,   377,
     373,     0,   339,     0,     0,     0,     0,   575,   576,     0,
       4,     7,     8,    10,     9,     6,     0,     0,     0,   246,
     236,   188,     0,   189,   190,   237,   238,   239,    11,   241,
     243,   242,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,   192,
     244,   329,   376,   373,   250,     0,     0,   251,   253,   254,
     260,   426,     3,     0,     0,   334,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   755,   751,   750,   754,
     752,   756,   753,   746,     0,   748,     0,     0,   417,   410,
       0,   591,     0,     0,     0,     0,   591,   760,   759,     0,
     411,     0,     0,     0,     0,     0,   296,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,     0,   379,
     581,   580,   579,     0,    47,     0,    28,    27,    18,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,     0,     0,     0,   283,     0,     0,     0,     0,   268,
     267,   271,   275,   272,     0,     0,   269,   259,     0,   337,
     336,     0,     0,     0,     0,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   342,   747,     0,     0,
       0,   557,   566,   525,   525,   525,   525,   525,   550,   525,
     547,     0,   525,   525,   525,   528,   559,   528,   558,   525,
     525,   525,     0,   528,   525,   528,   549,   556,   548,   567,
       0,     0,   551,   419,     0,     0,     0,     0,     0,   592,
     593,     0,     0,     0,     0,     0,   763,   761,   762,     0,
       0,     0,     0,     0,   571,   299,     0,   215,     0,   194,
     298,   413,   744,   742,   766,   415,   303,     0,     0,     0,
     408,     0,     0,     5,    45,    48,     0,    42,     0,     0,
     180,     0,     0,     0,     0,   166,   164,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     0,     0,     0,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   159,
     160,   161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    21,    22,    20,   186,   184,    40,     0,
      38,   155,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    29,    23,    24,    26,    12,    13,    14,    15,
      16,    17,    25,   248,   194,   245,   331,   330,   250,     0,
       0,     0,   255,   288,   258,     0,   194,   252,   269,   269,
       0,   262,     0,   270,     0,   257,     0,     0,     0,     0,
     353,   350,   356,   352,   492,     0,     0,     0,     0,   354,
     749,   591,   591,     0,   554,   530,   536,   533,   530,   530,
       0,   530,   530,   530,   529,   533,   533,   530,   530,   530,
       0,   533,   530,   533,     0,     0,     0,     0,     0,   595,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   572,   573,     0,   490,
     442,   260,   195,     0,   222,   194,   295,   297,     0,   370,
     381,     0,     0,   369,   370,     0,   370,     0,    59,     0,
     178,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,   144,   145,   146,   147,   148,   149,     0,
       0,     0,     0,   125,     0,     0,     0,   129,   130,   131,
     133,     0,     0,   135,     0,   138,   139,   140,     0,     0,
       0,     0,     0,     0,    66,    60,    61,    62,    63,    64,
      65,   115,   116,   117,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      39,     0,     0,   187,   185,    51,     0,     0,    36,    32,
      34,     0,   196,     0,   283,   285,   285,   285,     0,     0,
       0,   215,   273,   274,     0,     0,   276,     0,     0,     0,
       0,     0,   492,   492,     0,   364,   492,   359,     0,     0,
       0,     0,     0,   542,   552,   544,   546,   568,     0,   545,
     541,   540,   563,   562,   539,   543,   538,     0,   560,   537,
     561,     0,     0,   421,     0,   420,   596,   598,   597,     0,
     594,     0,   319,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,   571,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   448,     0,     0,     0,     0,   290,   300,     0,     0,
       0,   390,   380,     0,     0,   370,   397,   370,   398,    46,
     182,     0,   181,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      70,    72,     0,     0,     0,     0,     0,   104,   106,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
     205,   332,   256,     0,     0,     0,     0,   404,     0,     0,
     222,   265,   263,     0,     0,   261,   277,     0,     0,     0,
       0,     0,   364,   364,   492,     0,     0,   504,     0,   509,
       0,     0,     0,     0,     0,   365,   513,   494,     0,   511,
     361,   364,   351,   358,     0,     0,   526,     0,   531,   532,
       0,     0,   533,     0,   533,   533,   555,     0,     0,   603,
     606,   605,   607,   604,   599,   600,   602,   608,   601,     0,
       0,     0,     0,     0,     0,   305,     0,     0,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,     0,     0,
       0,   490,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   430,   490,     0,   570,   200,   200,   216,   217,
     223,   392,   391,     0,     0,   382,   387,   386,     0,   384,
     368,   396,   179,   183,     0,   110,   109,     0,   114,     0,
       0,   167,   168,   143,   121,   122,     0,     0,   126,   127,
     128,   132,   134,   136,   150,   151,   152,   153,     0,    67,
      76,    78,    74,    80,    82,    84,   118,     0,     0,   120,
     163,   207,   207,   207,    86,     0,     0,    94,     0,     0,
     102,   207,   207,    50,    54,     0,     0,    44,     0,     0,
       0,    31,     0,     0,   215,   284,     0,     0,     0,     0,
       0,     0,   400,   278,     0,   264,     0,     0,     0,   488,
       0,   355,   363,   364,   493,   366,     0,     0,     0,     0,
       0,     0,   514,   495,   496,   498,   497,   502,     0,     0,
       0,     0,   512,   510,   360,     0,     0,   609,     0,     0,
     535,   564,   569,   565,   553,     0,   422,     0,   609,     0,
       0,     0,     0,     0,   320,     0,   313,     0,     0,     0,
       0,   617,   618,   619,   621,   620,   739,   624,   625,   626,
     732,   623,   622,   727,   728,   729,   730,   731,   714,   627,
     668,   659,   664,   609,   710,   700,   671,   703,   646,   653,
     650,   637,   693,   682,   609,   690,   708,   644,   645,   715,
     631,   638,   686,   702,   707,   704,   665,   643,   712,   584,
     642,   662,   655,   652,   609,   701,   691,   632,   681,   720,
     658,   672,   654,   673,   657,   696,   679,   640,   609,   629,
     713,   635,   697,   649,   676,   688,   648,   609,   677,   674,
     675,   683,   695,   685,   651,   656,   680,   669,   670,   687,
     719,   692,   661,   694,   647,   721,   678,   666,   660,   667,
     663,   706,   634,   628,   699,   705,   639,   641,   630,   711,
     689,   709,   684,   698,   636,   633,   717,   609,   718,   716,
     734,   735,   736,   737,   738,   725,   726,   722,   723,   724,
     733,   610,     0,     0,   307,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,     0,   428,   441,   449,   492,   201,   202,
       0,   219,   221,     0,     0,     0,     0,     0,   383,     0,
       0,     0,     0,   113,   170,   171,   172,   173,   176,   175,
     177,   169,   174,     0,     0,     0,   207,   207,   207,   207,
     207,   207,     0,     0,     0,   211,   211,   211,   207,     0,
       0,     0,   207,     0,     0,     0,   207,   211,   211,    52,
      56,    37,    33,    35,   200,   203,   206,   222,   286,     0,
       0,     0,   405,   406,     0,     0,   344,   466,     0,   464,
       0,   345,     0,   362,     0,     0,     0,     0,     0,     0,
     516,     0,     0,     0,     0,     0,     0,   609,     0,   527,
     534,     0,   609,     0,   309,   322,   323,   324,     0,     0,
       0,     0,   306,   583,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,     0,     0,     0,   430,     0,     0,
       0,     0,   456,     0,     0,     0,   453,     0,   452,     0,
     462,     0,     0,     0,   491,   200,   218,   225,   224,   371,
     394,   393,   389,   388,     0,   111,   108,   123,   124,   154,
     211,   211,   211,   211,   211,   211,   156,     0,   119,     0,
       0,     0,     0,     0,   211,    88,     0,     0,   211,    96,
       0,     0,   211,     0,     0,   198,     0,     0,   197,   226,
     282,     0,   281,   280,     0,   279,     0,     0,     0,   349,
       0,   489,   506,     0,   524,   508,     0,     0,     0,   517,
     515,   499,   500,   501,   503,     0,   609,     0,   586,   423,
       0,   588,     0,   317,   314,     0,   611,     0,     0,     0,
       0,     0,   609,   311,     0,     0,     0,   308,   429,   443,
       0,     0,     0,     0,     0,   454,   455,   234,   450,   432,
       0,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,     0,   209,   208,     0,    69,    71,    73,     0,   207,
       0,     0,     0,   207,     0,     0,     0,   105,   107,   204,
     200,     0,   231,   287,   407,   347,     0,   467,   465,     0,
     522,   523,     0,     0,     0,   609,     0,   585,   587,   325,
     310,   616,   615,   612,   614,   613,     0,   318,   316,     0,
     457,     0,     0,   463,     0,   431,     0,     0,     0,     0,
     385,    77,    79,    75,    81,    83,    85,   157,     0,   200,
     212,    87,   211,    90,    92,    95,   211,    98,   100,   103,
     199,   228,   227,     0,   193,     0,   505,   507,   521,   518,
       0,   590,   758,   312,     0,   451,     0,   433,   434,     0,
       0,   210,   213,     0,     0,   207,   207,     0,   207,   207,
       0,     0,   232,     0,   519,   520,   589,     0,     0,     0,
       0,     0,   200,    89,   211,   211,    97,   211,   211,   230,
     229,   468,     0,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,   470,     0,     0,     0,     0,   470,     0,
       0,    91,    93,    99,   101,   346,   469,     0,     0,     0,
     458,     0,     0,   437,   435,     0,   484,     0,     0,     0,
     470,   470,     0,     0,   436,     0,   485,   348,     0,   481,
     483,   482,     0,     0,     0,   460,   459,     0,   438,   486,
     487,   471,   479,   473,     0,   475,   480,   477,     0,   470,
       0,   474,   472,   478,   476,   461,     0,     0,     0,     0,
       0,     0,     0,   439,   440
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   504,   801,   966,   967,   965,   505,   506,   791,
     961,   792,   962,   513,  1131,  1132,  1133,  1408,  1406,  1407,
    1409,  1410,  1411,  1418,  1639,  1735,  1736,  1422,  1643,  1738,
    1739,  1426,  1141,  1142,   519,   920,   301,    17,    18,   487,
     970,  1435,  1381,  1558,  1154,  1415,  1633,  1541,  1700,   704,
    1078,  1079,   896,  1652,  1714,  1370,    71,   219,   220,   389,
     226,   227,   228,   408,   229,   405,   634,   406,   630,   985,
     986,   622,   974,  1439,   230,    19,    55,   102,   276,    20,
      21,   867,   868,    22,    23,   617,    79,    24,    25,    26,
    1010,    27,   901,    63,   121,   499,   711,   905,  1390,  1088,
     709,    28,    29,    74,   626,    30,    85,    31,    32,    33,
    1374,  1792,  1793,    54,   890,   891,  1450,  1448,  1762,  1785,
    1170,   892,   825,   654,   665,   833,   834,   463,   838,   700,
     701,    34,    69,    70,    35,   468,   469,   470,  1039,  1053,
    1351,    36,    37,   254,   255,    38,   269,   479,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1354
static const yytype_int16 yypact[] =
{
    5588,  -173,   -98,   129,   519, -1354,   699, -1354,   -79,   -72,
   -1354,    23, -1354,   -39,    18,   367,   222,    84, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
     413,   441,   137,   301,   394,   561,   593,    55,   606,   613,
     394, -1354,   323,   489,   385,   352,    53,    83,   635,    91,
     285,   290,   328,   480,   643,   657,   480,   619,    54,   353,
   -1354,  5727,   703,   474,    20, -1354,   712, -1354,  5588,   308,
    1674,   393,    22,   -40,   473,   714,   690,   424,   568,   356,
     501,   433,   576,   747, -1354,   379,   394,   450,   777, -1354,
   -1354, -1354,   -28, -1354,   542, -1354,   562, -1354, -1354,   601,
   -1354,   616, -1354,   633, -1354,   647, -1354, -1354, -1354, -1354,
   -1354,   813, -1354,   686,   895,  7415,  7415, -1354, -1354,   917,
    -229, -1354, -1354, -1354, -1354,   938,  7415,  7415,  7415, -1354,
   -1354, -1354,  6199, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354,   629,   662,   680,   682,   691,   717,   720,
     724,   745,   755,   798,   806,   823,   842,   844,   852,   856,
     857,   860,   861,   862,   863,   865,   866,   867,   869,   870,
     871,   872,   876,   877,   878,   879,   882,   887,   888,   890,
     897,   900,   904,   911,   912,   914,   916,   919,   926,   933,
     934,   936,   940,   941,   942,   943,   944,   945,   946,   947,
     949,   958,   961,   962,   963,   964,   966,  7415,  8885,   -25,
   -1354,   740,    31,    32,    36,    17,   -99,  1293, -1354, -1354,
    1046, -1354, -1354,  1125,  1162, -1354, -1354,   453,    95,  1187,
     392,  1220,   104,   397,  1222,  1285, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354,   140, -1354,  1286,  1287, -1354, -1354,
    8570,    46,  1288,  1124,  1053,  1291,    46, -1354, -1354,   299,
   -1354,  1127,   386,  1057,  1295,  1276, -1354,   164,  -133,    20,
    1300,  1301,  1302,  1303,  1304,  1306,  1312,  -140,  1319,   116,
    8993,  8993, -1354,  1321,  7415,  7415,  1342,  1342, -1354,  7415,
    5834,   -16, -1354,  7415,  5889,  7415,  7415,  7415,  7415,  7415,
    7415,  7415,  7415,  7415,  1014,  7415,  7415,  7415,  7415,  7415,
    7415,  7415,  7415,  7415,  7415,  7415,  7415,  7415,  7415,  7415,
    1015,  7415,  7415,  7415,  1018,  7415,  7415,  7415,  7415,  7415,
    7415,  6347,  7415,  7415,  7415,  7415,  7415,  7415,  7415,  7415,
    7415,  7415,  1023,  1024,  1025,  1034,  7415,  7415,  1062,  1063,
    1064,  7415,  7415,  1371,  1066,  1079,  4774, -1354,  7415,  7415,
    7415,  7415,  7415,    66,  1094,   716,  7415,  6037,  7415,  7415,
    7415,  7415,  7415,  7415,  7415,  7415,  7415,  7415,  1419, -1354,
      20,  7415,  1420,  1422,   333,  1115,   291,  1425,    20, -1354,
   -1354, -1354,   287, -1354,    20,  1289,  1262, -1354,  1428, -1354,
   -1354,  1429,  1430,  1440,  1442,  1443, -1354,  1444,  1448,  1452,
    8570,  1458,  1255,  1460,  1461,  1462, -1354, -1354,   193,  1158,
    1159, -1354, -1354,  1160,  1160,  1160,  1160,  1160, -1354,  1160,
   -1354,  1161,  1160,  1160,  1160,  1421, -1354,  1421, -1354,  1160,
    1160,  1160,  1164,  1421,  1160,  1421, -1354, -1354, -1354, -1354,
    1167,  1169, -1354,   550,  8570,  1477,  1484,  1486,  1186,  1189,
   -1354,  -176,  1499,  1500,  1337,  1197, -1354, -1354, -1354,  1343,
    1507,  1344,  1274,  1512,   252, -1354,  7415,  1347,    20,  -132,
     450, -1354, -1354, -1354, -1354, -1354, -1354,  1514,  1518,   208,
   -1354,  1514,   335, -1354,   522, -1354,  1211,  8993,  6979,   283,
   -1354,  7415,  7415,  1320,    99, -1354, -1354, -1354,  4818,  6510,
     930,   955,   984,  5085,  5129,  5396,  5440,  5808,  5856, -1354,
    1048,  1328,  1373,  1668,  6065,  1708,  1974,  2019,  6225,  6367,
    6527,   138,  2285,  6671,  2330, -1354,  6717,  6829,  6850, -1354,
    8923,  2596,  2641,  2907,  2952,  4463,  1212,  7123,  7431,  7477,
    7498,  7519,  7540,  7562,  7583,  3218,  3263,  3529, -1354, -1354,
   -1354, -1354,  7604,  3574,  1221,  1226,  1227,   482,   563,  1224,
    1234,  1236, -1354,  7624,  9012,  9030,  9048,  9048, -1354,    62,
   -1354, -1354,  1341,  7415,  7415,  1239,  7415,  8947,  1244,  1245,
    1246,  7415,   855,  1601,   670,   695,   719,   719,  1527,  1527,
    1527,  1527, -1354, -1354,  -132, -1354, -1354,  1247,   103,  1435,
    1436,  1437, -1354, -1354, -1354,    13,   145,  1293,  1262,  1262,
    1423,  1393,    20, -1354,  1445, -1354,   -31,  8570,  8570,  1568,
   -1354, -1354, -1354, -1354, -1354,  8570,  1578,  1376,  1378, -1354,
   -1354,    46,    46,  1582, -1354, -1354, -1354, -1354, -1354, -1354,
    1584, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
    1584, -1354, -1354, -1354,  1585,  1586,  1438,  1279,  7415, -1354,
    8570,  8570,  8570,  1409,    46,  1366,    79,   154,  1439,  1600,
     436,  1603,   159,  1605,  1606,  1450, -1354, -1354,  1608,   346,
   -1354,  1046,  8993,  1563,  1482,  -132, -1354, -1354,  1613,  -127,
   -1354,   365,  1327, -1354,  -127,  1327,  1468,  7415, -1354,  7415,
   -1354,  7415,  8798,  7054,  1330,  7415,  7415, -1354,  7415,  8729,
    1503,  1503,  7415, -1354, -1354, -1354, -1354, -1354, -1354,  7415,
    7415,  7415,  7415, -1354,  7415,  7415,  7415, -1354, -1354, -1354,
   -1354,  7415,  7415, -1354,  7415, -1354, -1354, -1354,  8570,  8570,
    7415,  7415,  7415,  1635, -1354,  1338,  1345,  1351,  1353,  1354,
    1355, -1354, -1354, -1354,  7415,  7415,  7415, -1354,  7415,  1339,
    1340,  1359,  1358,  1643,  1364,  1648,  1365,  1363,  1367, -1354,
   -1354,  7415,  1320,  9048,  9048,  1470,  8970,  7415, -1354, -1354,
   -1354,  1320,  1555,  1673,   333,  1580,  1580,  1580,  7415,  1697,
    1698,  1347, -1354, -1354,    20,  7415,   233,    20,  1392,  1561,
    1562,  1395, -1354, -1354,  8570,  8438, -1354, -1354,  1703,  1705,
    1398,  1399,   373,   384,   614,   384,   384, -1354,   398,   384,
     384,   384,   614,   614,   384,   384,   384,   428,   614,   384,
     614,  1400,  1401,  1657,  7415,  8993, -1354, -1354, -1354,   503,
   -1354,  1446, -1354,  1447,  1454,  1455,  1456,   462, -1354,  1524,
      79,  1755,   172,  1722, -1354,  1654,  1547,    79,   173,  1609,
    1773,   -90,  1776,  1471,  1638,   382,  1472,  1475,  1644,  1478,
     465, -1354,  1786,  1320,   653,  7415, -1354, -1354,  6655,  1649,
    1787, -1354, -1354,  1794,  6963,  -124, -1354,  -124, -1354, -1354,
    8993,  8827, -1354,  7415, -1354,  4507,   742,  7725,  7415,  7415,
    1487,  1489,  7746,  7771,  7792,  3840,  3885,  7813,  7834,  7856,
    7877,  7898,  7919,  1493,  1494,  7940,  7961,  4151,  1497,  1502,
    1504,  1506,  1508,  1509,  1511,   785,  4196,  7982,  8003, -1354,
   -1354, -1354,  1513,   467,  1515,   476,  1516, -1354, -1354,  1517,
    1522,  7415,  1320,  7415,  1391,  1320,  1320,  1320,  1523,  1760,
    1691, -1354, -1354,  1681,  1525,  1528,  1533,  8993,  1807,    39,
    1482, -1354,  8993,  7415,  1534, -1354, -1354,   233,  7415,  1536,
    1541,  1853,  8438,  8438, -1354,  1696,  1862,  1556,  1557,  1558,
    1828,  1869,  1565,  1878,    69, -1354, -1354, -1354,  1746,  1747,
   -1354,  8438, -1354, -1354,  1707,   594, -1354,  1887, -1354, -1354,
    1693,  1890, -1354,  1893, -1354, -1354, -1354,  1588,  8040, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,   595,
      79,  1896,  1897,  1898,  1899, -1354,  1902,  1604,   478,  1607,
    1685,    79, -1354,  1097,  1820,  1610,   507,  1694,    79,  1916,
     211,   346, -1354,   255,  7415,  1617,  1619,  1624,  1932,  1932,
    1626,  1853,     7,   346,  8570, -1354,    -7,   378,  1625, -1354,
     839, -1354,  8993,  1718,  1919, -1354, -1354,  8993,   509, -1354,
   -1354, -1354, -1354,  8993,  7415, -1354, -1354,  7415, -1354,  8065,
    8549, -1354, -1354, -1354, -1354, -1354,  7415,  7415, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,  7415, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354,  7415,  7415, -1354,
   -1354,  1633,  1633,  1633, -1354,  1636,   787, -1354,  1637,   818,
   -1354,  1633,  1633, -1354, -1354,  1630,  1639,  1391,  1640,  1641,
    1642, -1354,  7415,  7415,  1347, -1354,  1941,  1941,  1941,  7415,
    7415,  1945, -1354,  8993,  1932, -1354,  8086,  1946,  1952, -1354,
     514, -1354, -1354,  8438, -1354, -1354,  1954,  7415,  1955,  1920,
     -32,  7415, -1354, -1354, -1354, -1354, -1354, -1354,  1652,  1658,
    1660,  7415, -1354, -1354, -1354,   503,  1914, -1354,  1661,  1967,
   -1354,   614, -1354,   614,   614,  7415, -1354,  1925, -1354,   517,
    1670,  1671,  1680,  1695, -1354,    79, -1354,    79,  1699,   524,
    1432, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354,  1818,    79, -1354,  1700,   526,  1701,  1778,    79,
     528,  1702,  1866,  1871,  1704,  8107,  1946,  1932,  1932, -1354,
     532,   534,  1952,   559,     9, -1354, -1354, -1354, -1354, -1354,
    2012, -1354, -1354,   653,  7415,  7415,  1514,  7035, -1354,  7107,
    1706,  8128,  8150, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354,  8171,  8192,  8213,  1633,  1633,  1633,  1633,
    1633,  1633,   908,  8234,  1964,  1849,  1849,  1849,  1633,  1709,
    1710,  1711,  1633,  1713,  1725,  1739,  1633,  1849,  1849, -1354,
   -1354, -1354, -1354, -1354,  8848,  -141,  8993,  1482, -1354,   578,
     589,   596,  8993,  8993,  2043,   604,  2047, -1354,   650, -1354,
     652, -1354,  2064, -1354,   675,  8255,   677,  1758,  1759,  1931,
   -1354,  8276,  1764,  1765,  1766,  8297,   612, -1354,  1743, -1354,
   -1354,  8318, -1354,  2054, -1354, -1354, -1354, -1354,  2080,   704,
     706,    79, -1354, -1354,  2365,  2676,  2987,  3298,  3609,  3920,
    2034,   708,    79, -1354,    79,  1775,   710,     7,  7415,  1777,
    1780,  1853, -1354,   713,   729,   732, -1354,  2083, -1354,   734,
   -1354,   627,  2085,  2038,  8447,   378, -1354,  8993,  8993,  1781,
   -1354,  8993, -1354,  8993,  6963, -1354, -1354, -1354, -1354, -1354,
    1849,  1849,  1849,  1849,  1849,  1849, -1354,  7415, -1354,  2089,
    2044,  1785,  1788,  1789,  1849, -1354,  1795,  1796,  1849, -1354,
    1802,  1803,  1849,  1800,  1804, -1354,  1935,  7415, -1354,  1997,
   -1354,  2120, -1354, -1354,  7415, -1354,  1895,  1947,  2124, -1354,
    2125, -1354, -1354,  2127,   783, -1354,  2128,  7415,  7415, -1354,
   -1354, -1354, -1354, -1354, -1354,  2079, -1354,  4231, -1354, -1354,
    4542, -1354,  1819, -1354, -1354,   737, -1354,  2067,  2025,  2003,
    1994,  1904, -1354, -1354,   739,   768,    79, -1354,     9, -1354,
    8342,  1946,  1952,   772,  1965, -1354, -1354, -1354, -1354, -1354,
    2139,   -34,   246, -1354,   774,  1834,  1835,  1838,  1843,  1844,
    1846,  8380, -1354,  1850,  2161, -1354, -1354, -1354,  1856,  1633,
    1861,  1867,  1865,  1633,  1868,  1873,  1870, -1354, -1354, -1354,
    8848,   176,  2042, -1354,  8993, -1354,  2183, -1354, -1354,  1882,
   -1354, -1354,  1888,  8401,  8422, -1354,  4853, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354,  5164, -1354, -1354,   779,
   -1354,   781,   800, -1354,  2197, -1354,  2198,  2200,  1900,  1901,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,  2202,   378,
    1912, -1354,  1849, -1354, -1354, -1354,  1849, -1354, -1354, -1354,
   -1354,  2011,  2013,  1932, -1354,  1903, -1354, -1354,   858, -1354,
    5475, -1354, -1354, -1354,  2030, -1354,   789, -1354, -1354,  2209,
    2211, -1354, -1354,  2213,  1917,  1633,  1633,  1918,  1633,  1633,
    2074,  2082,  1926,  2227, -1354, -1354, -1354,  2228,  2237,  2227,
    1934,  1936,   378, -1354,  1849,  1849, -1354,  1849,  1849, -1354,
   -1354, -1354,   807,   817,  1938,   819,  1939,  2052, -1354,  1940,
    1942,  1943,  1944, -1354,  2247,  2249,  2227,  2227, -1354,  2066,
    2255, -1354, -1354, -1354, -1354,    27, -1354,  1951,   824,   828,
     402,  2259,   831, -1354, -1354,   -26,  2134,   242,   -36,  2227,
   -1354, -1354,  2186,  2035, -1354,  2066, -1354, -1354,   329, -1354,
   -1354, -1354,   228,   391,   833,   402,   402,  2126, -1354, -1354,
   -1354, -1354, -1354, -1354,   311, -1354, -1354, -1354,   317, -1354,
    2058, -1354, -1354, -1354, -1354,   402,   141,  2104,  2105,  2113,
    2117,  2276,  2277, -1354, -1354
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1354,  2205,   -71, -1354, -1354, -1354, -1354,  -618, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
   -1354, -1354, -1354, -1354, -1354,  1560,  1992, -1354,  -181,  -410,
   -1354, -1354, -1070, -1354, -1354, -1072, -1354, -1325, -1354,  -798,
   -1354,   910,  -976, -1354, -1354, -1064, -1354, -1354,  1911,  -212,
     126,  1921,  -389,  1615, -1354, -1354,   466, -1354, -1354, -1354,
    1331,  1519,   322,     1, -1354, -1354, -1354,  2219,  1830, -1354,
   -1354,  -868, -1354, -1354, -1354, -1354, -1354, -1354, -1354, -1354,
    -856, -1354,  -676,   408,  2256,  2032, -1354,  1611, -1354,   801,
    -500, -1354, -1354, -1354, -1354, -1354,    47, -1354, -1354, -1354,
     827, -1354,   523, -1354,  1266,  1256, -1353, -1348, -1098, -1170,
   -1065, -1354,  -812,   460,   187,   370,  -649,  -356,  1662,  -878,
   -1354, -1354, -1354,  2201, -1354,  -258, -1354,  1650,  1138,  -914,
   -1354, -1354, -1354, -1354,  1933, -1354, -1354, -1354, -1354
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -572
static const yytype_int16 yytable[] =
{
     218,   714,  1048,  1062,  1162,  1371,  1373,  1382,   475,  1056,
     992,   993,   394,   980,  1011,   631,   842,   843,  1503,  1509,
     224,  -401,   848,   224,   850,   246,   247,   248,   249,   250,
     251,    67,  1378,   808,  -403,  -402,  1458,   818,   906,   367,
     908,    40,   696,   899,   395,  1795,   899,  1511,  -571,   464,
     685,  1812,  1806,  1686,   290,   291,   103,   127,    88,  1160,
    1416,  1417,   465,   497,   644,   296,   297,   298,   789,  1427,
    1428,   300,   588,  1183,  1184,  1185,  1186,   388,   256,   706,
     293,   294,   862,   819,   589,  1379,   105,   279,   510,   511,
     390,  1542,  1543,   488,   108,  1556,   697,    93,   413,   909,
    1445,   486,  1553,  1554,   397,  1796,   367,   420,   679,   368,
     369,   370,   371,   372,   373,   374,    41,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
      89,  1187,    42,   257,   686,    64,  1171,  1172,  1220,   696,
    1459,   820,    65,   274,   388,  1837,   366,   128,   368,   369,
     370,   371,   372,   373,   374,  1194,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   414,
     498,  1557,  1209,   959,   466,    72,  1687,  1512,   421,   280,
     398,  1797,  1173,  1219,  1813,   900,   252,   104,  1089,    90,
    1356,  1460,   821,   697,  1375,  1798,   246,   247,   248,   249,
     250,   251,  1513,  1807,   802,  1625,  1626,  1627,  1628,  1629,
    1630,  -571,   467,   398,   725,    68,   811,   106,   512,  1638,
    1061,    12,    77,  1642,   507,   109,   790,  1646,   508,  1090,
     590,  1091,   514,   518,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   816,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,  1682,
     546,   547,   548,  1681,   550,   551,   552,   553,   554,   555,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   822,   823,  1468,   280,   572,   573,   391,   110,   826,
     577,   578,  1821,   112,  1473,   897,  1838,   583,   584,   585,
     586,   587,  1380,  1504,  1505,   597,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,  1453,   713,   501,
     218,   716,   809,  1361,   856,   857,   858,   225,  -401,  1484,
     225,   114,   724,   253,  1530,  1531,  1532,  1533,  1534,  1535,
    1485,  -403,  -402,  1145,   591,   393,  1544,  1479,  1161,  1480,
    1548,   396,   233,   234,  1552,    97,  1437,   252,  1809,   263,
    1486,  1188,  1189,  1190,  1555,   863,   864,   865,   866,  1362,
      75,  1711,   235,  1201,  1487,  1203,  1204,  1734,   486,  1191,
     869,  1737,   271,  1488,   696,   876,   476,   720,   721,   481,
    -298,  1822,    78,   830,   831,   416,  1712,   486,  1050,  1057,
     422,   983,   933,   934,  1831,   489,   804,   882,  1819,  1823,
    1833,   726,    12,  1810,   883,   702,    80,  1378,    66,   111,
    1802,  1688,    73,  1489,   113,   981,   498,  1363,   987,  1769,
    1770,  1824,  1771,  1772,   477,   628,  1613,  1358,   697,   712,
     722,   723,  1811,    76,    81,  1623,   619,    82,   729,   750,
     751,   427,   428,   417,   272,  1825,  1820,   810,   423,   984,
     884,  1559,   115,   885,   870,   620,   418,    98,   994,   877,
    1379,   424,   629,   275,  1689,  1832,  -298,   873,  1364,   886,
    1796,  1834,  1051,  1058,    99,  1491,   874,    83,   887,   236,
     264,  1496,   368,   369,   370,   371,   372,   373,   374,   100,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   273,   411,  1066,   614,   512,   888,   478,
     482,  1359,   793,   794,  1067,   796,   101,   412,    84,    43,
     366,    94,   368,   369,   370,   371,   372,   373,   374,    12,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,  1587,  1826,  1029,  1797,   116,  1590,  1030,
     621,   698,   699,   116,    86,  1514,   715,  1702,   676,   889,
    1798,  1706,  1827,   368,   369,   370,   371,   372,   373,   374,
    1710,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,  1828,    44,    87,  1031,   117,    96,
    1032,    45,   624,   398,   117,  1018,   222,   855,  1790,    91,
     267,   960,   118,  1595,   705,  1033,    92,   119,   677,  1609,
     968,   223,    95,  1019,  1604,   268,  1605,   120,   125,  1732,
    1815,  1816,  1619,  1034,   666,  1196,  1207,    46,   107,   126,
     671,  1035,   673,   678,  1197,  1208,   122,  1620,   910,  1742,
     911,  1765,    47,  1585,   915,   916,  1076,   917,  1077,  1835,
     123,   922,  1586,  1754,  1755,   129,  1757,  1758,   923,   924,
     925,   926,  1666,   927,   928,   929,   902,   903,  1788,  1789,
     930,   931,  1768,   932,  1016,  1017,  1020,  1021,  1676,   935,
     936,   937,    48,   380,   381,   382,   383,   384,   385,   386,
     387,  1814,   245,   945,   946,   947,   221,   948,    49,  1022,
    1023,    50,  1075,   258,  1036,   231,  1037,   259,  1377,   381,
     382,   383,   384,   385,   386,   387,   964,    51,    52,   593,
     594,   260,   595,  1038,   261,   596,   262,   977,  1679,  1024,
    1023,   265,    53,   266,   982,   383,   384,   385,   386,   387,
     270,  1720,   368,   369,   370,   371,   372,   373,   374,   275,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,  1045,  1046,    56,  1072,  1073,  1135,  1136,
     277,  1146,   281,  1028,  1148,  1149,  1150,  1138,  1139,  1216,
    1046,  1420,  1421,   782,   783,   368,   369,   370,   371,   372,
     373,   374,   282,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   287,    57,  1354,  1046,
    1388,  1389,  1424,  1425,  1080,  1451,  1452,  1082,  1474,  1046,
    1660,  1661,    58,  1087,   717,  1482,  1046,  1493,  1046,  1497,
    1073,   283,  1093,  1506,  1507,  1508,  1507,  1099,  1100,   368,
     369,   370,   371,   372,   373,   374,   284,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
    1510,  1452,    59,   285,   784,   785,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,  1519,   286,    60,  1560,
    1561,    61,  1147,   288,   655,   656,   657,   658,   289,   659,
    1562,  1561,   661,   662,   663,  1744,  1745,  1563,  1561,   667,
     668,   669,  1163,    62,   672,  1565,  1507,  1166,   368,   369,
     370,   371,   372,   373,   374,    67,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   302,
     368,   369,   370,   371,   372,   373,   374,   295,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,  1567,  1568,  1569,  1570,   368,   369,   370,   371,   372,
     373,   374,   303,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,  1572,  1573,  1575,  1576,
     304,  1384,   305,  1365,   368,   369,   370,   371,   372,   373,
     374,   306,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,  1593,  1046,  1594,  1046,  1603,
    1046,  1607,  1046,  1391,  1614,  1568,  1392,   307,   835,   836,
     308,   839,   840,   841,   309,  1403,  1404,   844,   845,   846,
    1615,  1507,   849,  1616,  1507,  1618,  1570,  1405,  1670,  1046,
    1677,  1046,   392,  1096,  1097,   310,  1412,  1413,   368,   369,
     370,   371,   372,   373,   374,   311,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,  1678,
    1046,  1434,  1436,  1683,  1452,  1690,  1389,   407,  1442,  1443,
    1723,  1046,  1724,  1568,   812,   813,  1126,  1127,  1748,  1749,
    1221,  1222,  1223,  1224,  1225,  1226,  1455,  1227,   312,  1228,
    1461,  1725,  1570,  1229,  1230,  1231,   313,  1232,  1773,  1774,
    1465,  1233,  1234,  1235,  1236,  1237,  1775,  1776,   975,   976,
    1778,  1774,  1238,   314,  1471,  1800,  1774,  1239,  1240,  1801,
    1774,  1241,  1804,  1805,  1829,  1774,  1242,  1243,  1244,  1245,
    1246,  1385,   315,  1247,   316,  1248,  1249,  1250,  1440,  1441,
    1251,  1252,   317,  1253,  1254,  1255,   318,   319,   409,  1256,
     320,   321,   322,   323,  1257,   324,   325,   326,  1258,   327,
     328,   329,   330,  1259,  1260,  1261,   331,   332,   333,   334,
    1262,  1263,   335,  1264,  1265,  1266,  1267,   336,   337,  1268,
     338,  1269,  1270,  1271,  1272,   410,  1273,   339,  1274,  1275,
     340,  1276,  1277,  1278,   341,  1279,  1280,  1281,  1282,  1536,
    1537,   342,   343,  1283,   344,  1284,   345,  1285,  1286,   346,
    1287,  1288,  1289,  1290,  1291,  1292,   347,  1293,  1294,  1295,
    1296,  1297,   730,   348,   349,  1298,   350,  1299,   415,  1300,
     351,   352,   353,   354,   355,   356,   357,   358,  1301,   359,
    1302,  1303,  1304,  1305,  1306,  1307,  1308,   731,   360,  1309,
    1310,   361,   362,   363,   364,  1311,   365,  1312,  1313,  1314,
    1315,   419,  1316,   425,  1317,  1318,  1319,  1320,   426,   429,
     430,   471,   472,   473,   474,   480,   732,   483,   484,  1321,
    1322,  1323,   485,   490,   491,   492,   493,   494,  1324,   495,
    1325,  1326,  1327,  1517,  1518,   496,  1521,  1328,  1523,  1329,
    1330,  1331,   500,  1332,   503,   529,   545,  1333,  1334,   549,
    1335,  1336,  1337,  1338,   568,   569,   570,  1339,   368,   369,
     370,   371,   372,   373,   374,   571,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   399,
     739,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   574,   575,   576,   579,   580,  1340,  1341,
    1342,  1343,  1344,   368,   369,   370,   371,   372,   373,   374,
     581,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   592,  1345,  1346,  1347,  1348,  1349,
    1350,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   613,   616,   400,   618,   623,  1610,   625,   633,
     632,   635,   636,   637,  -266,  1221,  1222,  1223,  1224,  1225,
    1226,   401,  1227,   638,  1228,   639,   640,   641,  1229,  1230,
    1231,   642,  1232,  1087,   402,   643,  1233,  1234,  1235,  1236,
    1237,   645,   646,   647,   648,   649,  1631,  1238,   651,   652,
     653,   660,  1239,  1240,   670,   664,  1241,   674,   403,   675,
     680,  1242,  1243,  1244,  1245,  1246,  1650,   681,  1247,   682,
    1248,  1249,  1250,  1654,   404,  1251,  1252,   683,  1253,  1254,
    1255,   684,   687,   688,  1256,   689,  1663,  1664,   690,  1257,
     692,   691,   693,  1258,   694,   695,   703,   708,  1259,  1260,
    1261,   710,   718,   765,    12,  1262,  1263,   779,  1264,  1265,
    1266,  1267,   780,   781,  1268,   786,  1483,  1270,  1271,  1272,
     787,  1273,   788,  1274,  1275,   -53,  1276,  1277,  1278,   795,
    1279,  1280,  1281,  1282,   798,   799,   800,   387,  1283,   803,
    1284,   815,  1285,  1286,   814,  1287,  1288,  1289,  1290,  1291,
    1292,   824,  1293,  1294,  1295,  1296,  1297,   805,   806,   807,
    1298,   827,  1299,   828,  1300,   829,   817,   832,   837,   854,
     851,   852,   859,  1301,   861,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,   853,   872,  1309,  1310,   875,   871,   878,   879,
    1311,   881,  1312,  1313,  1314,  1315,   894,  1316,   880,  1317,
    1318,  1319,  1320,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   895,   898,  1321,  1322,  1323,   904,   899,   938,
     740,   914,   919,  1324,   939,  1325,  1326,  1327,   953,   949,
     950,   940,  1328,   955,  1329,  1330,  1331,   941,  1332,   942,
     943,   944,  1333,  1334,   952,  1335,  1336,  1337,  1338,   951,
     954,   956,  1339,   957,   -55,   969,   971,   958,   368,   369,
     370,   371,   372,   373,   374,   741,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   973,
     978,   979,   988,   989,   990,   991,  1012,   237,  1013,  1014,
    1015,  1025,  1026,  1340,  1341,  1342,  1343,  1344,   368,   369,
     370,   371,   372,   373,   374,  1027,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   238,
    1345,  1346,  1347,  1348,  1349,  1350,  1221,  1222,  1223,  1224,
    1225,  1226,  1047,  1227,   239,  1228,  1040,  1041,  1049,  1229,
    1230,  1231,   240,  1232,  1042,  1043,  1044,  1233,  1234,  1235,
    1236,  1237,  1052,  1054,   241,  1055,  1060,  1059,  1238,  1063,
    1065,  1064,  1068,  1239,  1240,  1069,  1070,  1241,  1071,  1074,
    1084,  1083,  1242,  1243,  1244,  1245,  1246,  1085,  1101,  1247,
    1102,  1248,  1249,  1250,  1114,  1115,  1251,  1252,  1119,  1253,
    1254,  1255,  1120,  1152,  1121,  1256,  1122,  1153,  1123,  1124,
    1257,  1125,  1155,  1134,  1258,  1137,  1140,  1159,  1143,  1259,
    1260,  1261,   242,  1144,  1151,  1156,  1262,  1263,  1157,  1264,
    1265,  1266,  1267,  1158,  1164,  1268,  1167,  1588,  1270,  1271,
    1272,  1168,  1273,   243,  1274,  1275,  1169,  1276,  1277,  1278,
    1174,  1279,  1280,  1281,  1282,  1175,  1176,  1177,  1178,  1283,
    1179,  1284,  1180,  1285,  1286,  1181,  1287,  1288,  1289,  1290,
    1291,  1292,  1182,  1293,  1294,  1295,  1296,  1297,  1192,  1193,
    1195,  1298,  1198,  1299,  1200,  1300,  1199,  1202,  1205,  1210,
    1211,  1212,  1213,   244,  1301,  1214,  1302,  1303,  1304,  1305,
    1306,  1307,  1308,  1218,  1215,  1309,  1310,  1217,  1352,  1357,
    1353,  1311,  1355,  1312,  1313,  1314,  1315,  1366,  1316,  1367,
    1317,  1318,  1319,  1320,  1368,  1369,  1372,  1383,  1386,  1387,
    1414,  1429,  1419,  1423,  1438,  1321,  1322,  1323,  1444,  1447,
    1430,  1431,  1432,  1433,  1324,  1449,  1325,  1326,  1327,  1454,
    1456,  1457,  1462,  1328,  1467,  1329,  1330,  1331,  1463,  1332,
    1464,  1470,  1469,  1333,  1334,  1472,  1335,  1336,  1337,  1338,
     742,  1475,  1476,  1339,   368,   369,   370,   371,   372,   373,
     374,  1477,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,  1490,  1495,  1478,  1499,  1481,
    1492,  1494,  1498,  1500,  1501,  1515,  1524,  1539,  1540,  1545,
     744,  1546,  1547,  1549,  1340,  1341,  1342,  1343,  1344,   368,
     369,   370,   371,   372,   373,   374,  1550,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
    1551,  1345,  1346,  1347,  1348,  1349,  1350,  1221,  1222,  1223,
    1224,  1225,  1226,  1564,  1227,  1566,  1228,  1571,  1577,  1578,
    1229,  1230,  1231,  1579,  1232,  1581,  1582,  1583,  1233,  1234,
    1235,  1236,  1237,  1592,  1602,  1606,  1617,  1611,  1621,  1238,
    1612,  1622,  1632,   900,  1239,  1240,  1635,  1634,  1241,  1636,
    1637,  1640,  1641,  1242,  1243,  1244,  1245,  1246,  1644,  1645,
    1247,  1647,  1248,  1249,  1250,  1648,  1651,  1251,  1252,  1649,
    1253,  1254,  1255,  1653,  1655,  1656,  1256,  1657,  1658,  1665,
    1669,  1257,  1659,  1662,  1671,  1258,  1672,  1673,  1674,  1675,
    1259,  1260,  1261,  1684,  1685,  1691,  1692,  1262,  1263,  1693,
    1264,  1265,  1266,  1267,  1694,  1695,  1268,  1696,  1591,  1270,
    1271,  1272,  1698,  1273,  1699,  1274,  1275,  1701,  1276,  1277,
    1278,  1703,  1279,  1280,  1281,  1282,  1705,  1704,  1707,  1713,
    1283,  1709,  1284,  1708,  1285,  1286,  1715,  1287,  1288,  1289,
    1290,  1291,  1292,  1716,  1293,  1294,  1295,  1296,  1297,  1717,
    1726,  1727,  1298,  1728,  1299,  1731,  1300,  1740,  1747,  1741,
    1729,  1730,  1750,  1743,  1751,  1301,  1752,  1302,  1303,  1304,
    1305,  1306,  1307,  1308,  1733,  1759,  1309,  1310,  1753,  1756,
    1761,  1763,  1311,  1760,  1312,  1313,  1314,  1315,  1507,  1316,
    1764,  1317,  1318,  1319,  1320,  1766,  1780,  1767,  1777,  1779,
    1786,  1781,  1787,  1782,  1783,  1784,  1321,  1322,  1323,  1791,
    1794,  1799,  1803,  1808,  1806,  1324,  1817,  1325,  1326,  1327,
    1836,  1830,  1839,  1840,  1328,  1841,  1329,  1330,  1331,  1842,
    1332,  1843,  1844,   232,  1333,  1334,   745,  1335,  1336,  1337,
    1338,   921,   509,  1516,  1339,   368,   369,   370,   371,   372,
     373,   374,   615,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   893,   278,  1165,   627,
     707,   502,   124,   972,  1608,  1624,   907,  1360,  1818,  1376,
     292,   746,   847,  1466,   860,  1340,  1341,  1342,  1343,  1344,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   650,  1345,  1346,  1347,  1348,  1349,  1350,  1221,  1222,
    1223,  1224,  1225,  1226,     0,  1227,     0,  1228,     0,     0,
       0,  1229,  1230,  1231,     0,  1232,     0,     0,     0,  1233,
    1234,  1235,  1236,  1237,     0,     0,     0,     0,     0,     0,
    1238,     0,     0,     0,     0,  1239,  1240,     0,     0,  1241,
       0,     0,     0,     0,  1242,  1243,  1244,  1245,  1246,     0,
       0,  1247,     0,  1248,  1249,  1250,     0,     0,  1251,  1252,
       0,  1253,  1254,  1255,     0,     0,     0,  1256,     0,     0,
       0,     0,  1257,     0,     0,     0,  1258,     0,     0,     0,
       0,  1259,  1260,  1261,     0,     0,     0,     0,  1262,  1263,
       0,  1264,  1265,  1266,  1267,     0,     0,  1268,     0,  1596,
    1270,  1271,  1272,     0,  1273,     0,  1274,  1275,     0,  1276,
    1277,  1278,     0,  1279,  1280,  1281,  1282,     0,     0,     0,
       0,  1283,     0,  1284,     0,  1285,  1286,     0,  1287,  1288,
    1289,  1290,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,
       0,     0,     0,  1298,     0,  1299,     0,  1300,     0,     0,
       0,     0,     0,     0,     0,     0,  1301,     0,  1302,  1303,
    1304,  1305,  1306,  1307,  1308,     0,     0,  1309,  1310,     0,
       0,     0,     0,  1311,     0,  1312,  1313,  1314,  1315,     0,
    1316,     0,  1317,  1318,  1319,  1320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1321,  1322,  1323,
       0,     0,     0,     0,     0,     0,  1324,     0,  1325,  1326,
    1327,     0,     0,     0,     0,  1328,     0,  1329,  1330,  1331,
       0,  1332,     0,     0,     0,  1333,  1334,   752,  1335,  1336,
    1337,  1338,     0,     0,     0,  1339,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   754,     0,     0,     0,  1340,  1341,  1342,  1343,
    1344,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,     0,  1345,  1346,  1347,  1348,  1349,  1350,  1221,
    1222,  1223,  1224,  1225,  1226,     0,  1227,     0,  1228,     0,
       0,     0,  1229,  1230,  1231,     0,  1232,     0,     0,     0,
    1233,  1234,  1235,  1236,  1237,     0,     0,     0,     0,     0,
       0,  1238,     0,     0,     0,     0,  1239,  1240,     0,     0,
    1241,     0,     0,     0,     0,  1242,  1243,  1244,  1245,  1246,
       0,     0,  1247,     0,  1248,  1249,  1250,     0,     0,  1251,
    1252,     0,  1253,  1254,  1255,     0,     0,     0,  1256,     0,
       0,     0,     0,  1257,     0,     0,     0,  1258,     0,     0,
       0,     0,  1259,  1260,  1261,     0,     0,     0,     0,  1262,
    1263,     0,  1264,  1265,  1266,  1267,     0,     0,  1268,     0,
    1597,  1270,  1271,  1272,     0,  1273,     0,  1274,  1275,     0,
    1276,  1277,  1278,     0,  1279,  1280,  1281,  1282,     0,     0,
       0,     0,  1283,     0,  1284,     0,  1285,  1286,     0,  1287,
    1288,  1289,  1290,  1291,  1292,     0,  1293,  1294,  1295,  1296,
    1297,     0,     0,     0,  1298,     0,  1299,     0,  1300,     0,
       0,     0,     0,     0,     0,     0,     0,  1301,     0,  1302,
    1303,  1304,  1305,  1306,  1307,  1308,     0,     0,  1309,  1310,
       0,     0,     0,     0,  1311,     0,  1312,  1313,  1314,  1315,
       0,  1316,     0,  1317,  1318,  1319,  1320,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1321,  1322,
    1323,     0,     0,     0,     0,     0,     0,  1324,     0,  1325,
    1326,  1327,     0,     0,     0,     0,  1328,     0,  1329,  1330,
    1331,     0,  1332,     0,     0,     0,  1333,  1334,   759,  1335,
    1336,  1337,  1338,     0,     0,     0,  1339,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   760,     0,     0,     0,  1340,  1341,  1342,
    1343,  1344,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,     0,  1345,  1346,  1347,  1348,  1349,  1350,
    1221,  1222,  1223,  1224,  1225,  1226,     0,  1227,     0,  1228,
       0,     0,     0,  1229,  1230,  1231,     0,  1232,     0,     0,
       0,  1233,  1234,  1235,  1236,  1237,     0,     0,     0,     0,
       0,     0,  1238,     0,     0,     0,     0,  1239,  1240,     0,
       0,  1241,     0,     0,     0,     0,  1242,  1243,  1244,  1245,
    1246,     0,     0,  1247,     0,  1248,  1249,  1250,     0,     0,
    1251,  1252,     0,  1253,  1254,  1255,     0,     0,     0,  1256,
       0,     0,     0,     0,  1257,     0,     0,     0,  1258,     0,
       0,     0,     0,  1259,  1260,  1261,     0,     0,     0,     0,
    1262,  1263,     0,  1264,  1265,  1266,  1267,     0,     0,  1268,
       0,  1598,  1270,  1271,  1272,     0,  1273,     0,  1274,  1275,
       0,  1276,  1277,  1278,     0,  1279,  1280,  1281,  1282,     0,
       0,     0,     0,  1283,     0,  1284,     0,  1285,  1286,     0,
    1287,  1288,  1289,  1290,  1291,  1292,     0,  1293,  1294,  1295,
    1296,  1297,     0,     0,     0,  1298,     0,  1299,     0,  1300,
       0,     0,     0,     0,     0,     0,     0,     0,  1301,     0,
    1302,  1303,  1304,  1305,  1306,  1307,  1308,     0,     0,  1309,
    1310,     0,     0,     0,     0,  1311,     0,  1312,  1313,  1314,
    1315,     0,  1316,     0,  1317,  1318,  1319,  1320,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1321,
    1322,  1323,     0,     0,     0,     0,     0,     0,  1324,     0,
    1325,  1326,  1327,     0,     0,     0,     0,  1328,     0,  1329,
    1330,  1331,     0,  1332,     0,     0,     0,  1333,  1334,   761,
    1335,  1336,  1337,  1338,     0,     0,     0,  1339,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   762,     0,     0,     0,  1340,  1341,
    1342,  1343,  1344,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,     0,  1345,  1346,  1347,  1348,  1349,
    1350,  1221,  1222,  1223,  1224,  1225,  1226,     0,  1227,     0,
    1228,     0,     0,     0,  1229,  1230,  1231,     0,  1232,     0,
       0,     0,  1233,  1234,  1235,  1236,  1237,     0,     0,     0,
       0,     0,     0,  1238,     0,     0,     0,     0,  1239,  1240,
       0,     0,  1241,     0,     0,     0,     0,  1242,  1243,  1244,
    1245,  1246,     0,     0,  1247,     0,  1248,  1249,  1250,     0,
       0,  1251,  1252,     0,  1253,  1254,  1255,     0,     0,     0,
    1256,     0,     0,     0,     0,  1257,     0,     0,     0,  1258,
       0,     0,     0,     0,  1259,  1260,  1261,     0,     0,     0,
       0,  1262,  1263,     0,  1264,  1265,  1266,  1267,     0,     0,
    1268,     0,  1599,  1270,  1271,  1272,     0,  1273,     0,  1274,
    1275,     0,  1276,  1277,  1278,     0,  1279,  1280,  1281,  1282,
       0,     0,     0,     0,  1283,     0,  1284,     0,  1285,  1286,
       0,  1287,  1288,  1289,  1290,  1291,  1292,     0,  1293,  1294,
    1295,  1296,  1297,     0,     0,     0,  1298,     0,  1299,     0,
    1300,     0,     0,     0,     0,     0,     0,     0,     0,  1301,
       0,  1302,  1303,  1304,  1305,  1306,  1307,  1308,     0,     0,
    1309,  1310,     0,     0,     0,     0,  1311,     0,  1312,  1313,
    1314,  1315,     0,  1316,     0,  1317,  1318,  1319,  1320,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1321,  1322,  1323,     0,     0,     0,     0,     0,     0,  1324,
       0,  1325,  1326,  1327,     0,     0,     0,     0,  1328,     0,
    1329,  1330,  1331,     0,  1332,     0,     0,     0,  1333,  1334,
     774,  1335,  1336,  1337,  1338,     0,     0,     0,  1339,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   775,     0,     0,     0,  1340,
    1341,  1342,  1343,  1344,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,     0,  1345,  1346,  1347,  1348,
    1349,  1350,  1221,  1222,  1223,  1224,  1225,  1226,     0,  1227,
       0,  1228,     0,     0,     0,  1229,  1230,  1231,     0,  1232,
       0,     0,     0,  1233,  1234,  1235,  1236,  1237,     0,     0,
       0,     0,     0,     0,  1238,     0,     0,     0,     0,  1239,
    1240,     0,     0,  1241,     0,     0,     0,     0,  1242,  1243,
    1244,  1245,  1246,     0,     0,  1247,     0,  1248,  1249,  1250,
       0,     0,  1251,  1252,     0,  1253,  1254,  1255,     0,     0,
       0,  1256,     0,     0,     0,     0,  1257,     0,     0,     0,
    1258,     0,     0,     0,     0,  1259,  1260,  1261,     0,     0,
       0,     0,  1262,  1263,     0,  1264,  1265,  1266,  1267,     0,
       0,  1268,     0,  1600,  1270,  1271,  1272,     0,  1273,     0,
    1274,  1275,     0,  1276,  1277,  1278,     0,  1279,  1280,  1281,
    1282,     0,     0,     0,     0,  1283,     0,  1284,     0,  1285,
    1286,     0,  1287,  1288,  1289,  1290,  1291,  1292,     0,  1293,
    1294,  1295,  1296,  1297,     0,     0,     0,  1298,     0,  1299,
       0,  1300,     0,     0,     0,     0,     0,     0,     0,     0,
    1301,     0,  1302,  1303,  1304,  1305,  1306,  1307,  1308,     0,
       0,  1309,  1310,     0,     0,     0,     0,  1311,     0,  1312,
    1313,  1314,  1315,     0,  1316,     0,  1317,  1318,  1319,  1320,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1321,  1322,  1323,     0,     0,     0,     0,     0,     0,
    1324,     0,  1325,  1326,  1327,     0,     0,     0,     0,  1328,
       0,  1329,  1330,  1331,     0,  1332,     0,     0,     0,  1333,
    1334,   776,  1335,  1336,  1337,  1338,     0,     0,     0,  1339,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   778,     0,     0,     0,
    1340,  1341,  1342,  1343,  1344,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,     0,  1345,  1346,  1347,
    1348,  1349,  1350,  1221,  1222,  1223,  1224,  1225,  1226,     0,
    1227,     0,  1228,     0,     0,     0,  1229,  1230,  1231,     0,
    1232,     0,     0,     0,  1233,  1234,  1235,  1236,  1237,     0,
       0,     0,     0,     0,     0,  1238,     0,     0,     0,     0,
    1239,  1240,     0,     0,  1241,     0,     0,     0,     0,  1242,
    1243,  1244,  1245,  1246,     0,     0,  1247,     0,  1248,  1249,
    1250,     0,     0,  1251,  1252,     0,  1253,  1254,  1255,     0,
       0,     0,  1256,     0,     0,     0,     0,  1257,     0,     0,
       0,  1258,     0,     0,     0,     0,  1259,  1260,  1261,     0,
       0,     0,     0,  1262,  1263,     0,  1264,  1265,  1266,  1267,
       0,     0,  1268,     0,  1601,  1270,  1271,  1272,     0,  1273,
       0,  1274,  1275,     0,  1276,  1277,  1278,     0,  1279,  1280,
    1281,  1282,     0,     0,     0,     0,  1283,     0,  1284,     0,
    1285,  1286,     0,  1287,  1288,  1289,  1290,  1291,  1292,     0,
    1293,  1294,  1295,  1296,  1297,     0,     0,     0,  1298,     0,
    1299,     0,  1300,     0,     0,     0,     0,     0,     0,     0,
       0,  1301,     0,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
       0,     0,  1309,  1310,     0,     0,     0,     0,  1311,     0,
    1312,  1313,  1314,  1315,     0,  1316,     0,  1317,  1318,  1319,
    1320,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1321,  1322,  1323,     0,     0,     0,     0,     0,
       0,  1324,     0,  1325,  1326,  1327,     0,     0,     0,     0,
    1328,     0,  1329,  1330,  1331,     0,  1332,     0,     0,     0,
    1333,  1334,  1106,  1335,  1336,  1337,  1338,     0,     0,     0,
    1339,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1107,     0,     0,
       0,  1340,  1341,  1342,  1343,  1344,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,     0,  1345,  1346,
    1347,  1348,  1349,  1350,  1221,  1222,  1223,  1224,  1225,  1226,
       0,  1227,     0,  1228,     0,     0,     0,  1229,  1230,  1231,
       0,  1232,     0,     0,     0,  1233,  1234,  1235,  1236,  1237,
       0,     0,     0,     0,     0,     0,  1238,     0,     0,     0,
       0,  1239,  1240,     0,     0,  1241,     0,     0,     0,     0,
    1242,  1243,  1244,  1245,  1246,     0,     0,  1247,     0,  1248,
    1249,  1250,     0,     0,  1251,  1252,     0,  1253,  1254,  1255,
       0,     0,     0,  1256,     0,     0,     0,     0,  1257,     0,
       0,     0,  1258,     0,     0,     0,     0,  1259,  1260,  1261,
       0,     0,     0,     0,  1262,  1263,     0,  1264,  1265,  1266,
    1267,     0,     0,  1268,     0,  1667,  1270,  1271,  1272,     0,
    1273,     0,  1274,  1275,     0,  1276,  1277,  1278,     0,  1279,
    1280,  1281,  1282,     0,     0,     0,     0,  1283,     0,  1284,
       0,  1285,  1286,     0,  1287,  1288,  1289,  1290,  1291,  1292,
       0,  1293,  1294,  1295,  1296,  1297,     0,     0,     0,  1298,
       0,  1299,     0,  1300,     0,     0,     0,     0,     0,     0,
       0,     0,  1301,     0,  1302,  1303,  1304,  1305,  1306,  1307,
    1308,     0,     0,  1309,  1310,     0,     0,     0,     0,  1311,
       0,  1312,  1313,  1314,  1315,     0,  1316,     0,  1317,  1318,
    1319,  1320,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1321,  1322,  1323,     0,     0,     0,     0,
       0,     0,  1324,     0,  1325,  1326,  1327,     0,     0,     0,
       0,  1328,     0,  1329,  1330,  1331,     0,  1332,     0,     0,
       0,  1333,  1334,  1118,  1335,  1336,  1337,  1338,     0,     0,
       0,  1339,     0,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1128,     0,
       0,     0,  1340,  1341,  1342,  1343,  1344,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,     0,  1345,
    1346,  1347,  1348,  1349,  1350,  1221,  1222,  1223,  1224,  1225,
    1226,     0,  1227,     0,  1228,     0,     0,     0,  1229,  1230,
    1231,     0,  1232,     0,     0,     0,  1233,  1234,  1235,  1236,
    1237,     0,     0,     0,     0,     0,     0,  1238,     0,     0,
       0,     0,  1239,  1240,     0,     0,  1241,     0,     0,     0,
       0,  1242,  1243,  1244,  1245,  1246,     0,     0,  1247,     0,
    1248,  1249,  1250,     0,     0,  1251,  1252,     0,  1253,  1254,
    1255,     0,     0,     0,  1256,     0,     0,     0,     0,  1257,
       0,     0,     0,  1258,     0,     0,  1094,     0,  1259,  1260,
    1261,     0,     0,     0,     0,  1262,  1263,     0,  1264,  1265,
    1266,  1267,     0,     0,  1268,     0,  1668,  1270,  1271,  1272,
       0,  1273,     0,  1274,  1275,     0,  1276,  1277,  1278,     0,
    1279,  1280,  1281,  1282,     0,     0,     0,     0,  1283,     0,
    1284,     0,  1285,  1286,     0,  1287,  1288,  1289,  1290,  1291,
    1292,     0,  1293,  1294,  1295,  1296,  1297,     0,     0,     0,
    1298,     0,  1299,     0,  1300,     0,     0,     0,     0,     0,
       0,     0,     0,  1301,     0,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,     0,     0,  1309,  1310,     0,     0,     0,     0,
    1311,     0,  1312,  1313,  1314,  1315,     0,  1316,     0,  1317,
    1318,  1319,  1320,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,  1321,  1322,  1323,     0,     0,     0,
       0,     0,     0,  1324,     0,  1325,  1326,  1327,     0,     0,
       0,     0,  1328,     0,  1329,  1330,  1331,     0,  1332,     0,
       0,     0,  1333,  1334,   764,  1335,  1336,  1337,  1338,     0,
       0,     0,  1339,     0,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1095,     0,
       0,     0,     0,  1340,  1341,  1342,  1343,  1344,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
    1345,  1346,  1347,  1348,  1349,  1350,  1221,  1222,  1223,  1224,
    1225,  1226,     0,  1227,     0,  1228,     0,     0,     0,  1229,
    1230,  1231,     0,  1232,     0,     0,     0,  1233,  1234,  1235,
    1236,  1237,     0,     0,     0,     0,     0,     0,  1238,     0,
       0,     0,     0,  1239,  1240,     0,     0,  1241,     0,     0,
       0,     0,  1242,  1243,  1244,  1245,  1246,     0,     0,  1247,
       0,  1248,  1249,  1250,     0,     0,  1251,  1252,     0,  1253,
    1254,  1255,     0,     0,     0,  1256,     0,     0,     0,     0,
    1257,     0,     0,     0,  1258,     0,     0,     0,     0,  1259,
    1260,  1261,     0,     0,     0,     0,  1262,  1263,     0,  1264,
    1265,  1266,  1267,     0,     0,  1268,     0,  1721,  1270,  1271,
    1272,     0,  1273,     0,  1274,  1275,     0,  1276,  1277,  1278,
       0,  1279,  1280,  1281,  1282,     0,     0,     0,     0,  1283,
       0,  1284,     0,  1285,  1286,     0,  1287,  1288,  1289,  1290,
    1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,     0,     0,
       0,  1298,     0,  1299,     0,  1300,     0,     0,     0,     0,
       0,     0,     0,     0,  1301,     0,  1302,  1303,  1304,  1305,
    1306,  1307,  1308,     0,     0,  1309,  1310,     0,     0,     0,
       0,  1311,     0,  1312,  1313,  1314,  1315,     0,  1316,     0,
    1317,  1318,  1319,  1320,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1321,  1322,  1323,     0,     0,
       0,     0,     0,     0,  1324,     0,  1325,  1326,  1327,     0,
       0,     0,     0,  1328,     0,  1329,  1330,  1331,     0,  1332,
       0,     0,     0,  1333,  1334,   582,  1335,  1336,  1337,  1338,
       0,     0,     0,  1339,     0,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   727,
       0,     0,     0,     0,  1340,  1341,  1342,  1343,  1344,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
       0,  1345,  1346,  1347,  1348,  1349,  1350,  1221,  1222,  1223,
    1224,  1225,  1226,     0,  1227,     0,  1228,     0,     0,     0,
    1229,  1230,  1231,     0,  1232,     0,     0,     0,  1233,  1234,
    1235,  1236,  1237,     0,     0,     0,     0,     0,     0,  1238,
       0,     0,     0,     0,  1239,  1240,     0,     0,  1241,     0,
       0,     0,     0,  1242,  1243,  1244,  1245,  1246,     0,     0,
    1247,     0,  1248,  1249,  1250,     0,     0,  1251,  1252,     0,
    1253,  1254,  1255,     0,     0,     0,  1256,     0,     0,     0,
       0,  1257,     0,     0,     0,  1258,     0,     0,     0,     0,
    1259,  1260,  1261,     0,     0,     0,     0,  1262,  1263,     0,
    1264,  1265,  1266,  1267,     0,     0,  1268,     0,  1722,  1270,
    1271,  1272,     0,  1273,     0,  1274,  1275,     0,  1276,  1277,
    1278,     0,  1279,  1280,  1281,  1282,     0,     0,     0,     0,
    1283,     0,  1284,     0,  1285,  1286,     0,  1287,  1288,  1289,
    1290,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,     0,
       0,     0,  1298,     0,  1299,     0,  1300,     0,     0,     0,
       0,     0,     0,     0,     0,  1301,     0,  1302,  1303,  1304,
    1305,  1306,  1307,  1308,     0,     0,  1309,  1310,     0,     0,
       0,     0,  1311,     0,  1312,  1313,  1314,  1315,     0,  1316,
       0,  1317,  1318,  1319,  1320,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1321,  1322,  1323,     0,
       0,     0,     0,     0,     0,  1324,     0,  1325,  1326,  1327,
       0,     0,     0,     0,  1328,     0,  1329,  1330,  1331,     0,
    1332,     0,     0,     0,  1333,  1334,   733,  1335,  1336,  1337,
    1338,     0,     0,     0,  1339,     0,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     734,     0,     0,     0,     0,  1340,  1341,  1342,  1343,  1344,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,  1345,  1346,  1347,  1348,  1349,  1350,  1221,  1222,
    1223,  1224,  1225,  1226,     0,  1227,     0,  1228,     0,     0,
       0,  1229,  1230,  1231,     0,  1232,     0,     0,     0,  1233,
    1234,  1235,  1236,  1237,     0,     0,     0,     0,     0,     0,
    1238,     0,     0,     0,     0,  1239,  1240,     0,     0,  1241,
       0,     0,     0,     0,  1242,  1243,  1244,  1245,  1246,     0,
       0,  1247,     0,  1248,  1249,  1250,     0,     0,  1251,  1252,
       0,  1253,  1254,  1255,     0,     0,     0,  1256,     0,     0,
       0,     0,  1257,     0,     0,     0,  1258,     0,     0,     0,
       0,  1259,  1260,  1261,     0,     0,     0,     0,  1262,  1263,
       0,  1264,  1265,  1266,  1267,     0,     0,  1268,     0,  1746,
    1270,  1271,  1272,     0,  1273,     0,  1274,  1275,     0,  1276,
    1277,  1278,     0,  1279,  1280,  1281,  1282,     0,     0,     0,
       0,  1283,     0,  1284,     0,  1285,  1286,     0,  1287,  1288,
    1289,  1290,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,
       1,     0,     0,  1298,     2,  1299,     0,  1300,     0,     0,
       0,     0,     0,     0,     0,     0,  1301,     0,  1302,  1303,
    1304,  1305,  1306,  1307,  1308,     0,     3,  1309,  1310,     0,
       0,     4,     0,  1311,     0,  1312,  1313,  1314,  1315,     0,
    1316,     0,  1317,  1318,  1319,  1320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,  1321,  1322,  1323,
       0,     0,     0,     0,     0,     0,  1324,     0,  1325,  1326,
    1327,     0,     0,     0,     0,  1328,     0,  1329,  1330,  1331,
       0,  1332,     0,     0,     0,  1333,  1334,   735,  1335,  1336,
    1337,  1338,     0,     0,     0,  1339,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   736,   138,   139,     0,     0,  1340,  1341,  1342,  1343,
    1344,     0,   140,     0,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,  1345,  1346,  1347,  1348,  1349,  1350,   141,
       0,    11,    12,     0,   142,     0,     0,   143,   144,     0,
       0,     0,     0,     0,     0,    13,     0,     0,    14,     0,
       0,     0,     0,   145,     0,    15,     0,   146,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
       0,     0,     0,     0,   368,   369,   370,   371,   372,   373,
     374,   147,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,     0,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,     0,     0,     0,
       0,   148,   130,   131,   132,   133,   134,   135,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,   150,   151,     0,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,   141,     0,     0,     0,     0,   142,     0,     0,   143,
     144,     0,     0,     0,     0,     0,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,     0,   217,   516,     0,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   148,   136,   137,     0,     0,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,   299,     0,
       0,     0,   598,     0,   599,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,     0,     0,     0,   141,
       0,     0,     0,     0,   142,   517,     0,   143,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   737,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   738,   191,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,   217,
       0,   148,   130,   131,   132,   133,   134,   135,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   600,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,     0,     0,     0,     0,
       0,   141,     0,     0,     0,     0,   142,     0,     0,   143,
     144,     0,     0,     0,     0,     0,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,     0,   601,     0,     0,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   148,   136,   137,     0,     0,     0,     0,
       0,     0,   138,   556,     0,     0,   743,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,   142,     0,     0,   143,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     0,   191,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,   217,
       0,   148,     0,   130,   131,   132,   133,   134,   135,     0,
       0,     0,     0,     0,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,     0,   138,   747,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,     0,   142,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   728,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,     0,   217,   130,   131,
     132,   133,   134,   135,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,   148,     0,     0,     0,   748,     0,
     138,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,     0,   142,     0,     0,   143,   144,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,  1081,     0,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,     0,   191,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   148,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,     0,   217,   130,   131,   132,   133,
     134,   135,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   137,   753,     0,     0,     0,     0,     0,   138,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,     0,     0,   755,     0,
     142,     0,     0,   143,   144,     0,     0,     0,   130,   131,
     132,   133,   134,   135,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,     0,  1086,     0,     0,     0,
     138,     0,     0,     0,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,     0,   142,     0,     0,   143,   144,     0,     0,     0,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   148,  1520,     0,
       0,     0,   138,   368,   369,   370,   371,   372,   373,   374,
     756,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,   142,     0,     0,   143,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   719,     0,     0,     0,     0,   148,
    1522,     0,     0,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     0,   191,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   913,
       0,   148,     0,   217,     0,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,     0,   217,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,     0,   217,   130,   131,
     132,   133,   134,   135,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,   766,     0,     0,     0,     0,     0,
     138,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,     0,   142,     0,     0,   143,   144,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,   368,   369,   370,   371,   372,   373,   374,   148,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   369,   370,   371,   372,   373,
     374,     0,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,     0,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,   369,   370,   371,   372,
     373,   374,   767,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,     0,     0,     0,
       0,   368,   369,   370,   371,   372,   373,   374,   768,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   368,   369,   370,   371,   372,   373,   374,   769,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   368,   369,   370,   371,   372,   373,   374,
     770,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   368,   369,   370,   371,   372,   373,
     374,   771,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,     0,   368,   369,   370,   371,
     372,   373,   374,   772,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   368,   369,   370,
     371,   372,   373,   374,   773,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   368,   369,
     370,   371,   372,   373,   374,   777,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,     0,     0,  1098,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,   369,   370,   371,   372,   373,   374,  1103,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,     0,     0,     0,   368,   369,   370,   371,   372,
     373,   374,  1104,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   368,   369,   370,   371,
     372,   373,   374,  1105,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   368,   369,   370,
     371,   372,   373,   374,  1108,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   368,   369,
     370,   371,   372,   373,   374,  1109,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
     368,   369,   370,   371,   372,   373,   374,  1110,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   368,   369,   370,   371,   372,   373,   374,  1111,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   368,   369,   370,   371,   372,   373,   374,  1112,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   368,   369,   370,   371,   372,   373,   374,
    1113,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   368,   369,   370,   371,   372,   373,
     374,  1116,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   368,   369,   370,   371,   372,
     373,   374,  1117,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   368,   369,   370,   371,
     372,   373,   374,  1129,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   368,   369,   370,
     371,   372,   373,   374,  1130,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
       0,  1206,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,     0,     0,     0,  1393,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,   369,   370,   371,   372,   373,   374,  1446,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   368,   369,   370,   371,   372,   373,   374,  1502,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   368,   369,   370,   371,   372,   373,   374,  1525,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,     0,     0,     0,   995,     0,     0,     0,
       0,  1526,     0,     0,     0,   995,     0,     0,     0,     0,
       0,     0,   996,     0,     0,     0,   997,     0,     0,   998,
       0,   999,  1527,     0,  1000,   997,     0,     0,   998,     0,
     999,     0,     0,  1000,     0,     0,     0,     0,     0,  1001,
       0,     0,     0,  1528,     0,     0,  1002,  1003,  1001,     0,
       0,     0,     0,     0,     0,  1002,  1003,     0,     0,     0,
       0,     0,     0,     0,  1529,     0,     0,     0,     0,     0,
       0,  1004,     0,     0,     0,     0,     0,     0,     0,     0,
    1004,     0,     0,     0,     0,  1538,     0,     0,  1005,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
     369,   370,   371,   372,   373,   374,  1574,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
    1006,     0,     0,     0,     0,     0,     0,  1580,     0,  1006,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1007,     0,     0,     0,     0,     0,  1584,     0,
    1008,  1007,     0,     0,     0,     0,     0,     0,     0,  1008,
       0,   431,   432,     0,   433,     0,   434,   435,     0,  1589,
       0,     0,     0,  1394,  1395,     0,     0,     0,  1396,     0,
    1397,     0,   436,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1680,     0,     0,     0,     0,     0,     0,
       0,  1009,     0,     0,   437,   438,   439,   440,     0,     0,
    1009,  1398,  1399,   441,  1400,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,  1697,     0,     0,     0,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,  1718,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,   446,     0,     0,   447,     0,     0,   448,
     449,     0,     0,  1719,     0,     0,     0,     0,     0,   368,
     369,   370,   371,   372,   373,   374,   450,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   451,   452,     0,   453,   454,     0,     0,     0,
       0,   455,     0,   456,     0,     0,  1401,  1402,   457,   458,
       0,     0,     0,     0,   459,     0,     0,     0,     0,     0,
     460,     0,   461,     0,     0,     0,     0,   462,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   369,   370,
     371,   372,   373,   374,   918,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
       0,     0,     0,     0,     0,     0,     0,  1378,   367,     0,
       0,     0,     0,     0,     0,   368,   369,   370,   371,   372,
     373,   374,   912,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   388,     0,     0,     0,
       0,  1092,     0,   368,   369,   370,   371,   372,   373,   374,
    1379,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,     0,     0,     0,   368,   369,   370,
     371,   372,   373,   374,   758,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,     0,     0,
     368,   369,   370,   371,   372,   373,   374,   797,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,     0,     0,   368,   369,   370,   371,   372,   373,   374,
     963,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   370,   371,   372,   373,   374,     0,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   371,   372,   373,   374,     0,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,  -572,  -572,  -572,  -572,     0,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387
};

static const yytype_int16 yycheck[] =
{
      71,   501,   870,   881,   980,  1069,  1071,  1077,   266,   877,
     822,   823,   224,   811,   826,   404,   665,   666,  1366,  1372,
       3,     3,   671,     3,   673,     3,     4,     5,     6,     7,
       8,     8,    39,    20,     3,     3,    68,    68,   714,     3,
     716,   214,   132,   170,   225,    18,   170,    38,    41,     3,
     226,    87,    78,    87,   125,   126,     3,     3,     3,    20,
    1132,  1133,    16,   203,   420,   136,   137,   138,     6,  1141,
    1142,   142,     6,     4,     5,     6,     7,    41,   118,   489,
     309,   310,     3,   114,    18,    92,     3,   115,   104,   105,
     115,  1416,  1417,   226,     3,   236,   186,    50,     3,   717,
    1164,   233,  1427,  1428,   203,    78,     3,     3,   464,    10,
      11,    12,    13,    14,    15,    16,   214,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      75,    62,     3,   173,   310,   214,   992,   993,  1052,   132,
     172,   172,   214,    96,    41,     4,   217,    93,    10,    11,
      12,    13,    14,    15,    16,  1011,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    74,
     310,   312,  1040,   791,   128,   214,   210,   168,    74,   312,
     312,   154,   994,  1051,   220,   312,   164,   134,   312,   134,
    1058,   223,   223,   186,  1072,   168,     3,     4,     5,     6,
       7,     8,   193,   229,   614,  1530,  1531,  1532,  1533,  1534,
    1535,   204,   166,   312,   115,   192,   626,   134,   234,  1544,
     310,   204,     0,  1548,   295,   134,   164,  1552,   299,   905,
     164,   907,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   632,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,  1612,
     331,   332,   333,  1611,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   637,   638,  1197,   312,   356,   357,   312,     3,   645,
     361,   362,    64,     3,  1208,   705,   155,   368,   369,   370,
     371,   372,   309,  1367,  1368,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,  1173,   499,   203,
     391,   502,   309,    68,   680,   681,   682,   310,   310,  1243,
     310,     3,   513,   311,  1406,  1407,  1408,  1409,  1410,  1411,
    1254,   310,   310,   961,   278,   309,  1418,  1215,   309,  1217,
    1422,   225,    44,    45,  1426,     3,  1154,   164,   116,     3,
    1274,   292,   293,   294,  1434,   286,   287,   288,   289,   114,
       3,   195,    64,  1022,  1288,  1024,  1025,  1702,   233,   310,
     226,  1706,     3,  1297,   132,   226,    87,   104,   105,     3,
     226,   163,   308,   651,   652,     3,   220,   233,   226,   226,
       3,   168,   758,   759,    93,   279,   618,    61,    79,   181,
      93,   312,   204,   171,    68,   486,     3,    39,    10,   134,
      18,   175,    14,  1337,   134,   814,   310,   172,   817,  1754,
    1755,   203,  1757,  1758,   135,   148,  1501,   226,   186,   231,
     511,   512,   200,    76,     3,  1515,   113,   310,   519,   311,
     312,   311,   312,    61,    75,    64,   127,   312,    61,   226,
     114,  1437,   134,   117,   310,   132,    74,   115,   824,   310,
      92,    74,   185,   309,   228,   164,   312,    41,   223,   133,
      78,   164,   310,   310,   132,  1353,    50,   186,   142,   181,
     134,  1359,    10,    11,    12,    13,    14,    15,    16,   147,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   134,    61,   133,   390,   234,   172,   220,
     134,   310,   593,   594,   142,   596,   174,    74,   134,    10,
     601,   208,    10,    11,    12,    13,    14,    15,    16,   204,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,  1467,   163,    52,   154,    83,  1472,    56,
     227,   309,   310,    83,     3,  1377,   231,  1639,    18,   223,
     168,  1643,   181,    10,    11,    12,    13,    14,    15,    16,
    1650,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   203,    76,     3,    94,   124,   214,
      97,    82,   311,   312,   124,   221,   132,   678,  1778,     3,
      34,   792,   132,  1481,   488,   112,     3,   137,    68,  1497,
     801,   147,   133,   239,  1492,    49,  1494,   147,     9,  1699,
    1800,  1801,     5,   130,   447,    41,    41,   118,     3,    20,
     453,   138,   455,    93,    50,    50,     3,    20,   719,  1713,
     721,  1749,   133,    41,   725,   726,     3,   728,     5,  1829,
       3,   732,    50,  1735,  1736,   312,  1738,  1739,   739,   740,
     741,   742,  1586,   744,   745,   746,   311,   312,  1776,  1777,
     751,   752,  1752,   754,   311,   312,    72,    73,  1602,   760,
     761,   762,   173,    23,    24,    25,    26,    27,    28,    29,
      30,  1799,   309,   774,   775,   776,     3,   778,   189,   311,
     312,   192,   893,   240,   211,     3,   213,     3,  1074,    24,
      25,    26,    27,    28,    29,    30,   797,   208,   209,    13,
      14,    41,    16,   230,   310,    19,   168,   808,  1606,   311,
     312,   240,   223,   310,   815,    26,    27,    28,    29,    30,
       3,  1665,    10,    11,    12,    13,    14,    15,    16,   309,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   311,   312,    76,   311,   312,   311,   312,
       3,   962,   240,   854,   965,   966,   967,   311,   312,   311,
     312,     4,     5,   311,   312,    10,    11,    12,    13,    14,
      15,    16,   240,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,   118,   311,   312,
     311,   312,     4,     5,   895,   311,   312,   898,   311,   312,
      47,    48,   133,   904,   312,   311,   312,   311,   312,   311,
     312,   240,   913,   311,   312,   311,   312,   918,   919,    10,
      11,    12,    13,    14,    15,    16,   240,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     311,   312,   173,   240,   311,   312,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,  1386,   240,   189,   311,
     312,   192,   963,   207,   434,   435,   436,   437,     3,   439,
     311,   312,   442,   443,   444,    47,    48,   311,   312,   449,
     450,   451,   983,   214,   454,   311,   312,   988,    10,    11,
      12,    13,    14,    15,    16,     8,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   310,
      10,    11,    12,    13,    14,    15,    16,     9,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   311,   312,   311,   312,    10,    11,    12,    13,    14,
      15,    16,   310,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   311,   312,   311,   312,
     310,   152,   310,  1064,    10,    11,    12,    13,    14,    15,
      16,   310,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   311,   312,   311,   312,   311,
     312,   311,   312,  1094,   311,   312,  1097,   310,   658,   659,
     310,   661,   662,   663,   310,  1106,  1107,   667,   668,   669,
     311,   312,   672,   311,   312,   311,   312,  1118,   311,   312,
     311,   312,   312,   311,   312,   310,  1127,  1128,    10,    11,
      12,    13,    14,    15,    16,   310,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   311,
     312,  1152,  1153,   311,   312,   311,   312,    41,  1159,  1160,
     311,   312,   311,   312,   628,   629,   311,   312,   309,   310,
       3,     4,     5,     6,     7,     8,  1177,    10,   310,    12,
    1181,   311,   312,    16,    17,    18,   310,    20,   311,   312,
    1191,    24,    25,    26,    27,    28,   309,   310,   806,   807,
     311,   312,    35,   310,  1205,   311,   312,    40,    41,   311,
     312,    44,   311,   312,   311,   312,    49,    50,    51,    52,
      53,   312,   310,    56,   310,    58,    59,    60,  1157,  1158,
      63,    64,   310,    66,    67,    68,   310,   310,    43,    72,
     310,   310,   310,   310,    77,   310,   310,   310,    81,   310,
     310,   310,   310,    86,    87,    88,   310,   310,   310,   310,
      93,    94,   310,    96,    97,    98,    99,   310,   310,   102,
     310,   104,   105,   106,   107,    43,   109,   310,   111,   112,
     310,   114,   115,   116,   310,   118,   119,   120,   121,   311,
     312,   310,   310,   126,   310,   128,   310,   130,   131,   310,
     133,   134,   135,   136,   137,   138,   310,   140,   141,   142,
     143,   144,   312,   310,   310,   148,   310,   150,    61,   152,
     310,   310,   310,   310,   310,   310,   310,   310,   161,   310,
     163,   164,   165,   166,   167,   168,   169,   312,   310,   172,
     173,   310,   310,   310,   310,   178,   310,   180,   181,   182,
     183,    61,   185,    61,   187,   188,   189,   190,     3,     3,
       3,     3,   168,   240,     3,   168,   312,   240,     3,   202,
     203,   204,    26,     3,     3,     3,     3,     3,   211,     3,
     213,   214,   215,  1384,  1385,     3,  1387,   220,  1389,   222,
     223,   224,     3,   226,     3,   311,   311,   230,   231,   311,
     233,   234,   235,   236,   311,   311,   311,   240,    10,    11,
      12,    13,    14,    15,    16,   311,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    66,
     312,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   311,   311,   311,     5,   311,   281,   282,
     283,   284,   285,    10,    11,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   310,   308,   309,   310,   311,   312,
     313,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,     3,   131,     3,   311,  1498,     3,   167,
     141,     3,     3,     3,   141,     3,     4,     5,     6,     7,
       8,   148,    10,     3,    12,     3,     3,     3,    16,    17,
      18,     3,    20,  1524,   161,     3,    24,    25,    26,    27,
      28,     3,   207,     3,     3,     3,  1537,    35,   310,   310,
     310,   310,    40,    41,   310,    54,    44,   310,   185,   310,
       3,    49,    50,    51,    52,    53,  1557,     3,    56,     3,
      58,    59,    60,  1564,   201,    63,    64,   311,    66,    67,
      68,   312,     3,     3,    72,   168,  1577,  1578,   311,    77,
       3,   168,   168,    81,   240,     3,   169,     3,    86,    87,
      88,     3,   311,   311,   204,    93,    94,   306,    96,    97,
      98,    99,   306,   306,   102,   311,   104,   105,   106,   107,
     306,   109,   306,   111,   112,   204,   114,   115,   116,   310,
     118,   119,   120,   121,   310,   310,   310,    30,   126,   312,
     128,   168,   130,   131,   141,   133,   134,   135,   136,   137,
     138,     3,   140,   141,   142,   143,   144,   142,   142,   142,
     148,     3,   150,   207,   152,   207,   141,     5,     4,   310,
       5,     5,   183,   161,   228,   163,   164,   165,   166,   167,
     168,   169,   164,     3,   172,   173,     3,   168,     3,     3,
     178,     3,   180,   181,   182,   183,    53,   185,   168,   187,
     188,   189,   190,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   150,    20,   202,   203,   204,   310,   170,     4,
     312,   311,   139,   211,   306,   213,   214,   215,     5,   310,
     310,   306,   220,     5,   222,   223,   224,   306,   226,   306,
     306,   306,   230,   231,   306,   233,   234,   235,   236,   310,
     306,   306,   240,   310,   204,   120,     3,   310,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   119,
       3,     3,   310,   142,   142,   310,     3,    33,     3,   311,
     311,   311,   311,   281,   282,   283,   284,   285,    10,    11,
      12,    13,    14,    15,    16,    68,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    65,
     308,   309,   310,   311,   312,   313,     3,     4,     5,     6,
       7,     8,   228,    10,    80,    12,   310,   310,     3,    16,
      17,    18,    88,    20,   310,   310,   310,    24,    25,    26,
      27,    28,    50,   119,   100,   228,     3,   168,    35,     3,
     142,   310,   310,    40,    41,   310,   142,    44,   310,     3,
       3,   142,    49,    50,    51,    52,    53,     3,   311,    56,
     311,    58,    59,    60,   311,   311,    63,    64,   311,    66,
      67,    68,   310,    53,   310,    72,   310,   126,   310,   310,
      77,   310,   141,   310,    81,   310,   310,    20,   311,    86,
      87,    88,   158,   311,   311,   310,    93,    94,   310,    96,
      97,    98,    99,   310,   310,   102,   310,   104,   105,   106,
     107,   310,   109,   179,   111,   112,     3,   114,   115,   116,
     164,   118,   119,   120,   121,     3,   310,   310,   310,   126,
      42,   128,     3,   130,   131,   310,   133,   134,   135,   136,
     137,   138,     4,   140,   141,   142,   143,   144,   142,   142,
     183,   148,     5,   150,     4,   152,   203,     4,   310,     3,
       3,     3,     3,   229,   161,     3,   163,   164,   165,   166,
     167,   168,   169,   228,   310,   172,   173,   310,    98,     3,
     310,   178,   228,   180,   181,   182,   183,   310,   185,   310,
     187,   188,   189,   190,   310,     3,   310,   312,   220,    20,
     307,   311,   306,   306,     3,   202,   203,   204,     3,     3,
     311,   311,   311,   311,   211,     3,   213,   214,   215,     5,
       5,    41,   310,   220,    50,   222,   223,   224,   310,   226,
     310,     4,   311,   230,   231,    50,   233,   234,   235,   236,
     312,   311,   311,   240,    10,    11,    12,    13,    14,    15,
      16,   311,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   187,   228,   312,   142,   310,
     310,   310,   310,   142,   310,     3,   310,    53,   169,   310,
     312,   311,   311,   310,   281,   282,   283,   284,   285,    10,
      11,    12,    13,    14,    15,    16,   311,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     311,   308,   309,   310,   311,   312,   313,     3,     4,     5,
       6,     7,     8,    20,    10,    18,    12,     3,   310,   310,
      16,    17,    18,   142,    20,   311,   311,   311,    24,    25,
      26,    27,    28,     3,    50,   310,     3,   310,     3,    35,
     310,    53,     3,   312,    40,    41,   311,    53,    44,   311,
     311,   306,   306,    49,    50,    51,    52,    53,   306,   306,
      56,   311,    58,    59,    60,   311,   119,    63,    64,   184,
      66,    67,    68,     3,   229,   178,    72,     3,     3,    50,
     311,    77,     5,     5,    67,    81,   111,   134,   144,   235,
      86,    87,    88,   178,     5,   311,   311,    93,    94,   311,
      96,    97,    98,    99,   311,   311,   102,   311,   104,   105,
     106,   107,   312,   109,     3,   111,   112,   311,   114,   115,
     116,   310,   118,   119,   120,   121,   311,   310,   310,   137,
     126,   311,   128,   310,   130,   131,     3,   133,   134,   135,
     136,   137,   138,   311,   140,   141,   142,   143,   144,   311,
       3,     3,   148,     3,   150,     3,   152,   196,   178,   196,
     310,   310,     3,   310,     3,   161,     3,   163,   164,   165,
     166,   167,   168,   169,   312,   151,   172,   173,   311,   311,
       3,     3,   178,   151,   180,   181,   182,   183,   312,   185,
       3,   187,   188,   189,   190,   311,   194,   311,   310,   310,
       3,   311,     3,   311,   311,   311,   202,   203,   204,   193,
       5,   310,     3,   129,    78,   211,   231,   213,   214,   215,
     212,   145,   168,   168,   220,   162,   222,   223,   224,   162,
     226,     5,     5,    78,   230,   231,   312,   233,   234,   235,
     236,   731,   300,  1383,   240,    10,    11,    12,    13,    14,
      15,    16,   391,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   701,    98,   987,   398,
     490,   289,    66,   804,  1497,  1524,   715,  1061,  1805,  1073,
     129,   312,   670,  1195,   684,   281,   282,   283,   284,   285,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   428,   308,   309,   310,   311,   312,   313,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    -1,    -1,    63,    64,
      -1,    66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    97,    98,    99,    -1,    -1,   102,    -1,   104,
     105,   106,   107,    -1,   109,    -1,   111,   112,    -1,   114,
     115,   116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,   126,    -1,   128,    -1,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,   172,   173,    -1,
      -1,    -1,    -1,   178,    -1,   180,   181,   182,   183,    -1,
     185,    -1,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,   213,   214,
     215,    -1,    -1,    -1,    -1,   220,    -1,   222,   223,   224,
      -1,   226,    -1,    -1,    -1,   230,   231,   312,   233,   234,
     235,   236,    -1,    -1,    -1,   240,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   312,    -1,    -1,    -1,   281,   282,   283,   284,
     285,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   308,   309,   310,   311,   312,   313,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    -1,    56,    -1,    58,    59,    60,    -1,    -1,    63,
      64,    -1,    66,    67,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      94,    -1,    96,    97,    98,    99,    -1,    -1,   102,    -1,
     104,   105,   106,   107,    -1,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,   118,   119,   120,   121,    -1,    -1,
      -1,    -1,   126,    -1,   128,    -1,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,    -1,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,   172,   173,
      -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,   183,
      -1,   185,    -1,   187,   188,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
     204,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,   213,
     214,   215,    -1,    -1,    -1,    -1,   220,    -1,   222,   223,
     224,    -1,   226,    -1,    -1,    -1,   230,   231,   312,   233,
     234,   235,   236,    -1,    -1,    -1,   240,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   312,    -1,    -1,    -1,   281,   282,   283,
     284,   285,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   308,   309,   310,   311,   312,   313,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      93,    94,    -1,    96,    97,    98,    99,    -1,    -1,   102,
      -1,   104,   105,   106,   107,    -1,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,   126,    -1,   128,    -1,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,   172,
     173,    -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,
     183,    -1,   185,    -1,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
     203,   204,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,
     213,   214,   215,    -1,    -1,    -1,    -1,   220,    -1,   222,
     223,   224,    -1,   226,    -1,    -1,    -1,   230,   231,   312,
     233,   234,   235,   236,    -1,    -1,    -1,   240,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,   281,   282,
     283,   284,   285,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   308,   309,   310,   311,   312,
     313,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    58,    59,    60,    -1,
      -1,    63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    94,    -1,    96,    97,    98,    99,    -1,    -1,
     102,    -1,   104,   105,   106,   107,    -1,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    -1,    -1,    -1,   126,    -1,   128,    -1,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,    -1,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
     172,   173,    -1,    -1,    -1,    -1,   178,    -1,   180,   181,
     182,   183,    -1,   185,    -1,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,   211,
      -1,   213,   214,   215,    -1,    -1,    -1,    -1,   220,    -1,
     222,   223,   224,    -1,   226,    -1,    -1,    -1,   230,   231,
     312,   233,   234,   235,   236,    -1,    -1,    -1,   240,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,   281,
     282,   283,   284,   285,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   308,   309,   310,   311,
     312,   313,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    -1,    56,    -1,    58,    59,    60,
      -1,    -1,    63,    64,    -1,    66,    67,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    93,    94,    -1,    96,    97,    98,    99,    -1,
      -1,   102,    -1,   104,   105,   106,   107,    -1,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,   126,    -1,   128,    -1,   130,
     131,    -1,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    -1,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,   172,   173,    -1,    -1,    -1,    -1,   178,    -1,   180,
     181,   182,   183,    -1,   185,    -1,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,   213,   214,   215,    -1,    -1,    -1,    -1,   220,
      -1,   222,   223,   224,    -1,   226,    -1,    -1,    -1,   230,
     231,   312,   233,   234,   235,   236,    -1,    -1,    -1,   240,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
     281,   282,   283,   284,   285,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   308,   309,   310,
     311,   312,   313,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    58,    59,
      60,    -1,    -1,    63,    64,    -1,    66,    67,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    93,    94,    -1,    96,    97,    98,    99,
      -1,    -1,   102,    -1,   104,   105,   106,   107,    -1,   109,
      -1,   111,   112,    -1,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,    -1,   126,    -1,   128,    -1,
     130,   131,    -1,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,   163,   164,   165,   166,   167,   168,   169,
      -1,    -1,   172,   173,    -1,    -1,    -1,    -1,   178,    -1,
     180,   181,   182,   183,    -1,   185,    -1,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,   203,   204,    -1,    -1,    -1,    -1,    -1,
      -1,   211,    -1,   213,   214,   215,    -1,    -1,    -1,    -1,
     220,    -1,   222,   223,   224,    -1,   226,    -1,    -1,    -1,
     230,   231,   312,   233,   234,   235,   236,    -1,    -1,    -1,
     240,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
      -1,   281,   282,   283,   284,   285,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   308,   309,
     310,   311,   312,   313,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    58,
      59,    60,    -1,    -1,    63,    64,    -1,    66,    67,    68,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,    98,
      99,    -1,    -1,   102,    -1,   104,   105,   106,   107,    -1,
     109,    -1,   111,   112,    -1,   114,   115,   116,    -1,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,   126,    -1,   128,
      -1,   130,   131,    -1,   133,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,   163,   164,   165,   166,   167,   168,
     169,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,   178,
      -1,   180,   181,   182,   183,    -1,   185,    -1,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,   203,   204,    -1,    -1,    -1,    -1,
      -1,    -1,   211,    -1,   213,   214,   215,    -1,    -1,    -1,
      -1,   220,    -1,   222,   223,   224,    -1,   226,    -1,    -1,
      -1,   230,   231,   312,   233,   234,   235,   236,    -1,    -1,
      -1,   240,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,   281,   282,   283,   284,   285,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   308,
     309,   310,   311,   312,   313,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    -1,    -1,   119,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,    -1,   104,   105,   106,   107,
      -1,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,    -1,   126,    -1,
     128,    -1,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,
     178,    -1,   180,   181,   182,   183,    -1,   185,    -1,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   280,   202,   203,   204,    -1,    -1,    -1,
      -1,    -1,    -1,   211,    -1,   213,   214,   215,    -1,    -1,
      -1,    -1,   220,    -1,   222,   223,   224,    -1,   226,    -1,
      -1,    -1,   230,   231,   311,   233,   234,   235,   236,    -1,
      -1,    -1,   240,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,
      -1,    -1,    -1,   281,   282,   283,   284,   285,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     308,   309,   310,   311,   312,   313,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,    56,
      -1,    58,    59,    60,    -1,    -1,    63,    64,    -1,    66,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,
      97,    98,    99,    -1,    -1,   102,    -1,   104,   105,   106,
     107,    -1,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,    -1,   126,
      -1,   128,    -1,   130,   131,    -1,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,    -1,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,   172,   173,    -1,    -1,    -1,
      -1,   178,    -1,   180,   181,   182,   183,    -1,   185,    -1,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,
      -1,    -1,    -1,    -1,   211,    -1,   213,   214,   215,    -1,
      -1,    -1,    -1,   220,    -1,   222,   223,   224,    -1,   226,
      -1,    -1,    -1,   230,   231,   311,   233,   234,   235,   236,
      -1,    -1,    -1,   240,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   308,   309,   310,   311,   312,   313,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    94,    -1,
      96,    97,    98,    99,    -1,    -1,   102,    -1,   104,   105,
     106,   107,    -1,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
     126,    -1,   128,    -1,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,   172,   173,    -1,    -1,
      -1,    -1,   178,    -1,   180,   181,   182,   183,    -1,   185,
      -1,   187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,   213,   214,   215,
      -1,    -1,    -1,    -1,   220,    -1,   222,   223,   224,    -1,
     226,    -1,    -1,    -1,   230,   231,   311,   233,   234,   235,
     236,    -1,    -1,    -1,   240,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   308,   309,   310,   311,   312,   313,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    -1,    -1,    63,    64,
      -1,    66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    97,    98,    99,    -1,    -1,   102,    -1,   104,
     105,   106,   107,    -1,   109,    -1,   111,   112,    -1,   114,
     115,   116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,   126,    -1,   128,    -1,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
      32,    -1,    -1,   148,    36,   150,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,   164,
     165,   166,   167,   168,   169,    -1,    58,   172,   173,    -1,
      -1,    63,    -1,   178,    -1,   180,   181,   182,   183,    -1,
     185,    -1,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,   202,   203,   204,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,   213,   214,
     215,    -1,    -1,    -1,    -1,   220,    -1,   222,   223,   224,
      -1,   226,    -1,    -1,    -1,   230,   231,   311,   233,   234,
     235,   236,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,   311,    25,    26,    -1,    -1,   281,   282,   283,   284,
     285,    -1,    35,    -1,    -1,   177,    -1,   179,    -1,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,   309,   310,   311,   312,   313,    62,
      -1,   203,   204,    -1,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    86,    -1,   227,    -1,    90,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   124,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,   164,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,   191,    -1,
      -1,    -1,    -1,    -1,    -1,   198,   199,    -1,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    -1,   279,    -1,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,    -1,    -1,    -1,    -1,   310,   149,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    35,    -1,    37,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,   216,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   311,   279,    -1,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,    -1,    -1,    -1,    -1,   310,
      -1,   164,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    -1,   279,    -1,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,    -1,    -1,    -1,    -1,   310,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,   311,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,    -1,   279,    -1,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,    -1,    -1,    -1,    -1,   310,
      -1,   164,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   311,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   115,   279,    -1,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,    -1,    -1,    -1,    -1,   310,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,   164,    -1,    -1,    -1,   311,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    70,    71,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    93,    -1,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,    -1,   279,
      -1,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,    -1,    -1,    -1,   164,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    -1,   279,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    -1,    -1,    -1,    -1,   310,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   311,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,   311,    -1,
      67,    -1,    -1,    70,    71,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    93,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,   164,    93,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   164,
      93,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,    -1,   279,    -1,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   215,
      -1,   164,    -1,   310,    -1,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    -1,   279,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    -1,    -1,    -1,    -1,   310,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    -1,   279,    -1,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,    -1,    -1,    -1,    -1,   310,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,   311,    -1,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    70,    71,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,   164,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    -1,   279,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   311,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   311,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   311,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   311,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   311,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   311,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   311,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   311,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   311,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   311,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   311,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   311,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   311,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   311,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   311,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   311,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   311,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   311,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   311,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,   311,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   311,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   311,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   311,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,   311,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    43,   311,    -1,    46,    38,    -1,    -1,    41,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,   311,    -1,    -1,    68,    69,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,   311,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   311,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,   311,    -1,
     172,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    51,    52,    -1,    54,    -1,    56,    57,    -1,   311,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    89,    -1,
      91,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    94,    95,    96,    97,    -1,    -1,
     223,   122,   123,   103,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,
      -1,    -1,   311,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
     160,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   176,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,   203,    -1,   205,   206,    -1,    -1,    -1,
      -1,   211,    -1,   213,    -1,    -1,   237,   238,   218,   219,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
     230,    -1,   232,    -1,    -1,    -1,    -1,   237,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   115,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   104,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,   104,    -1,    10,    11,    12,    13,    14,    15,    16,
      92,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    40,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    63,    87,    88,   135,   177,   179,
     186,   203,   204,   217,   220,   227,   315,   351,   352,   389,
     393,   394,   397,   398,   401,   402,   403,   405,   415,   416,
     419,   421,   422,   423,   445,   448,   455,   456,   459,   462,
     214,   214,     3,    10,    76,    82,   118,   133,   173,   189,
     192,   208,   209,   223,   427,   390,    76,   118,   133,   173,
     189,   192,   214,   407,   214,   214,   407,     8,   192,   446,
     447,   370,   214,   407,   417,     3,    76,     0,   308,   400,
       3,     3,   310,   186,   134,   420,     3,     3,     3,    75,
     134,     3,     3,   420,   208,   133,   214,     3,   115,   132,
     147,   174,   391,     3,   134,     3,   134,     3,     3,   134,
       3,   134,     3,   134,     3,   134,    83,   124,   132,   137,
     147,   408,     3,     3,   408,     9,    20,     3,    93,   312,
       3,     4,     5,     6,     7,     8,    17,    18,    25,    26,
      35,    62,    67,    70,    71,    86,    90,   124,   164,   191,
     198,   199,   201,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   279,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   310,   316,   371,
     372,     3,   132,   147,     3,   310,   374,   375,   376,   378,
     388,     3,   315,    44,    45,    64,   181,    33,    65,    80,
      88,   100,   158,   179,   229,   309,     3,     4,     5,     6,
       7,     8,   164,   311,   457,   458,   118,   173,   240,     3,
      41,   310,   168,     3,   134,   240,   310,    34,    49,   460,
       3,     3,    75,   134,   420,   309,   392,     3,   391,   115,
     312,   240,   240,   240,   240,   240,   240,     3,   207,     3,
     316,   316,   447,   309,   310,     9,   316,   316,   316,   234,
     316,   350,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   316,     3,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    41,   373,
     115,   312,   312,   309,   373,   352,   374,   203,   312,    66,
     131,   148,   161,   185,   201,   379,   381,    41,   377,    43,
      43,    61,    74,     3,    74,    61,     3,    61,    74,    61,
       3,    74,     3,    61,    74,    61,     3,   311,   312,     3,
       3,    51,    52,    54,    56,    57,    72,    94,    95,    96,
      97,   103,   112,   130,   138,   146,   153,   156,   159,   160,
     176,   202,   203,   205,   206,   211,   213,   218,   219,   224,
     230,   232,   237,   441,     3,    16,   128,   166,   449,   450,
     451,     3,   168,   240,     3,   449,    87,   135,   220,   461,
     168,     3,   134,   240,     3,    26,   233,   353,   226,   374,
       3,     3,     3,     3,     3,     3,     3,   203,   310,   409,
       3,   203,   409,     3,   316,   321,   322,   316,   316,   350,
     104,   105,   234,   327,   316,    55,   149,   216,   316,   348,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   311,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   311,   316,   316,   316,   311,
     316,   316,   316,   316,   316,   316,    26,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   311,   311,
     311,   311,   316,   316,   311,   311,   311,   316,   316,     5,
     311,   311,   311,   316,   316,   316,   316,   316,     6,    18,
     164,   278,   310,    13,    14,    16,    19,   316,    35,    37,
     197,   310,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,     3,   374,   372,     3,   399,     3,   113,
     132,   227,   385,   311,   311,     3,   418,   375,   148,   185,
     382,   376,   141,   167,   380,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   441,     3,   207,     3,     3,     3,
     458,   310,   310,   310,   437,   437,   437,   437,   437,   437,
     310,   437,   437,   437,    54,   438,   438,   437,   437,   437,
     310,   438,   437,   438,   310,   310,    18,    68,    93,   441,
       3,     3,     3,   311,   312,   226,   310,     3,     3,   168,
     311,   168,     3,   168,   240,     3,   132,   186,   309,   310,
     443,   444,   316,   169,   363,   374,   353,   392,     3,   414,
       3,   410,   231,   352,   414,   231,   352,   312,   311,   215,
     104,   105,   316,   316,   352,   115,   312,   311,   115,   316,
     312,   312,   312,   311,   311,   311,   311,   311,   311,   312,
     312,   312,   312,   311,   312,   312,   312,   311,   311,   311,
     311,   312,   312,   311,   312,   311,   311,   311,    41,   312,
     312,   312,   312,   280,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   312,   312,   312,   311,   312,   306,
     306,   306,   311,   312,   311,   312,   311,   306,   306,     6,
     164,   323,   325,   316,   316,   310,   316,    40,   310,   310,
     310,   317,   353,   312,   373,   142,   142,   142,    20,   309,
     312,   353,   380,   380,   141,   168,   376,   141,    68,   114,
     172,   223,   441,   441,     3,   436,   441,     3,   207,   207,
     449,   449,     5,   439,   440,   439,   439,     4,   442,   439,
     439,   439,   440,   440,   439,   439,   439,   442,   440,   439,
     440,     5,     5,   164,   310,   316,   441,   441,   441,   183,
     451,   228,     3,   286,   287,   288,   289,   395,   396,   226,
     310,   168,     3,    41,    50,     3,   226,   310,     3,     3,
     168,     3,    61,    68,   114,   117,   133,   142,   172,   223,
     428,   429,   435,   377,    53,   150,   366,   353,    20,   170,
     312,   406,   311,   312,   310,   411,   406,   411,   406,   321,
     316,   316,   104,   215,   311,   316,   316,   316,   115,   139,
     349,   349,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   441,   441,   316,   316,   316,     4,   306,
     306,   306,   306,   306,   306,   316,   316,   316,   316,   310,
     310,   310,   306,     5,   306,     5,   306,   310,   310,   321,
     352,   324,   326,    40,   316,   320,   318,   319,   352,   120,
     354,     3,   385,   119,   386,   386,   386,   316,     3,     3,
     363,   376,   316,   168,   226,   383,   384,   376,   310,   142,
     142,   310,   436,   436,   441,    18,    34,    38,    41,    43,
      46,    61,    68,    69,    93,   110,   142,   164,   172,   223,
     404,   436,     3,     3,   311,   311,   311,   312,   221,   239,
      72,    73,   311,   312,   311,   311,   311,    68,   316,    52,
      56,    94,    97,   112,   130,   138,   211,   213,   230,   452,
     310,   310,   310,   310,   310,   311,   312,   228,   395,     3,
     226,   310,    50,   453,   119,   228,   395,   226,   310,   168,
       3,   310,   443,     3,   310,   142,   133,   142,   310,   310,
     142,   310,   311,   312,     3,   352,     3,     5,   364,   365,
     316,    93,   316,   142,     3,     3,    93,   316,   413,   312,
     406,   406,   104,   316,   119,   311,   311,   312,   311,   316,
     316,   311,   311,   311,   311,   311,   312,   312,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   312,   311,
     310,   310,   310,   310,   310,   310,   311,   312,   312,   311,
     311,   328,   329,   330,   310,   311,   312,   310,   311,   312,
     310,   346,   347,   311,   311,   321,   352,   316,   352,   352,
     352,   311,    53,   126,   358,   141,   310,   310,   310,    20,
      20,   309,   366,   316,   310,   384,   316,   310,   310,     3,
     434,   404,   404,   436,   164,     3,   310,   310,   310,    42,
       3,   310,     4,     4,     5,     6,     7,    62,   292,   293,
     294,   310,   142,   142,   404,   183,    41,    50,     5,   203,
       4,   440,     4,   440,   440,   310,   311,    41,    50,   395,
       3,     3,     3,     3,     3,   310,   311,   310,   228,   395,
     453,     3,     4,     5,     6,     7,     8,    10,    12,    16,
      17,    18,    20,    24,    25,    26,    27,    28,    35,    40,
      41,    44,    49,    50,    51,    52,    53,    56,    58,    59,
      60,    63,    64,    66,    67,    68,    72,    77,    81,    86,
      87,    88,    93,    94,    96,    97,    98,    99,   102,   104,
     105,   106,   107,   109,   111,   112,   114,   115,   116,   118,
     119,   120,   121,   126,   128,   130,   131,   133,   134,   135,
     136,   137,   138,   140,   141,   142,   143,   144,   148,   150,
     152,   161,   163,   164,   165,   166,   167,   168,   169,   172,
     173,   178,   180,   181,   182,   183,   185,   187,   188,   189,
     190,   202,   203,   204,   211,   213,   214,   215,   220,   222,
     223,   224,   226,   230,   231,   233,   234,   235,   236,   240,
     281,   282,   283,   284,   285,   308,   309,   310,   311,   312,
     313,   454,    98,   310,   311,   228,   395,     3,   226,   310,
     428,    68,   114,   172,   223,   316,   310,   310,   310,     3,
     369,   369,   310,   434,   424,   443,   429,   441,    39,    92,
     309,   356,   356,   312,   152,   312,   220,    20,   311,   312,
     412,   316,   316,   311,    84,    85,    89,    91,   122,   123,
     125,   237,   238,   316,   316,   316,   332,   333,   331,   334,
     335,   336,   316,   316,   307,   359,   359,   359,   337,   306,
       4,     5,   341,   306,     4,     5,   345,   359,   359,   311,
     311,   311,   311,   311,   316,   355,   316,   363,     3,   387,
     387,   387,   316,   316,     3,   369,   311,     3,   431,     3,
     430,   311,   312,   404,     5,   316,     5,    41,    68,   172,
     223,   316,   310,   310,   310,   316,   452,    50,   453,   311,
       4,   316,    50,   453,   311,   311,   311,   311,   312,   395,
     395,   310,   311,   104,   453,   453,   453,   453,   453,   453,
     187,   395,   310,   311,   310,   228,   395,   311,   310,   142,
     142,   310,   311,   431,   369,   369,   311,   312,   311,   430,
     311,    38,   168,   193,   436,     3,   365,   316,   316,   414,
      93,   316,    93,   316,   310,   311,   311,   311,   311,   311,
     359,   359,   359,   359,   359,   359,   311,   312,   311,    53,
     169,   361,   361,   361,   359,   310,   311,   311,   359,   310,
     311,   311,   359,   361,   361,   356,   236,   312,   357,   366,
     311,   312,   311,   311,    20,   311,    18,   311,   312,   311,
     312,     3,   311,   312,   311,   311,   312,   310,   310,   142,
     311,   311,   311,   311,   311,    41,    50,   453,   104,   311,
     453,   104,     3,   311,   311,   395,   104,   104,   104,   104,
     104,   104,    50,   311,   395,   395,   310,   311,   424,   443,
     316,   310,   310,   434,   311,   311,   311,     3,   311,     5,
      20,     3,    53,   356,   413,   361,   361,   361,   361,   361,
     361,   316,     3,   360,    53,   311,   311,   311,   361,   338,
     306,   306,   361,   342,   306,   306,   361,   311,   311,   184,
     316,   119,   367,     3,   316,   229,   178,     3,     3,     5,
      47,    48,     5,   316,   316,    50,   453,   104,   104,   311,
     311,    67,   111,   134,   144,   235,   453,   311,   311,   395,
     311,   431,   430,   311,   178,     5,    87,   210,   175,   228,
     311,   311,   311,   311,   311,   311,   311,   311,   312,     3,
     362,   311,   359,   310,   310,   311,   359,   310,   310,   311,
     356,   195,   220,   137,   368,     3,   311,   311,   311,   311,
     453,   104,   104,   311,   311,   311,     3,     3,     3,   310,
     310,     3,   356,   312,   361,   339,   340,   361,   343,   344,
     196,   196,   369,   310,    47,    48,   104,   178,   309,   310,
       3,     3,     3,   311,   359,   359,   311,   359,   359,   151,
     151,     3,   432,     3,     3,   432,   311,   311,   356,   361,
     361,   361,   361,   311,   312,   309,   310,   310,   311,   310,
     194,   311,   311,   311,   311,   433,     3,     3,   432,   432,
     433,   193,   425,   426,     5,    18,    78,   154,   168,   310,
     311,   311,    18,     3,   311,   312,    78,   229,   129,   116,
     171,   200,    87,   220,   432,   433,   433,   231,   426,    79,
     127,    64,   163,   181,   203,    64,   163,   181,   203,   311,
     145,    93,   164,    93,   164,   433,   212,     4,   155,   168,
     168,   162,   162,     5,     5
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
#line 404 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 410 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 411 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 413 "parser/evoparser.y"
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
#line 431 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 439 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 447 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 453 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 460 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 461 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 462 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 463 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 464 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 465 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 466 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 467 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 468 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 469 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 470 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 471 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 472 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 473 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 474 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 475 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 476 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 478 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 483 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 484 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("CMPSELECT %d", (yyvsp[(2) - (6)].subtok));
        ExprNode *sub = expr_make_subquery(sql);
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), sub);
        free(sql);
    ;}
    break;

  case 32:
#line 492 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 493 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 494 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 495 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 496 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 497 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 500 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 501 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 502 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 503 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 504 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 507 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 508 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 511 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 512 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 515 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 519 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 519 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 520 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 520 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 521 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 522 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 529 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 530 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 537 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 538 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 548 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 552 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 553 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 554 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 555 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 556 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 557 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 558 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 559 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 563 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 69:
#line 564 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 70:
#line 565 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 71:
#line 566 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 72:
#line 567 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 73:
#line 568 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 74:
#line 570 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 75:
#line 571 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 76:
#line 572 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 77:
#line 573 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 78:
#line 574 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 575 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 80:
#line 576 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 577 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 82:
#line 578 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 579 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 84:
#line 580 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 581 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 86:
#line 583 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 584 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 88:
#line 585 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 89:
#line 586 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 587 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 91:
#line 588 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 589 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 93:
#line 590 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 591 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 95:
#line 592 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 96:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 97:
#line 594 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 98:
#line 595 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 99:
#line 596 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 100:
#line 597 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 101:
#line 598 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 600 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 103:
#line 601 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 104:
#line 602 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 105:
#line 603 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 106:
#line 604 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 107:
#line 605 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 108:
#line 608 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 109:
#line 609 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 110:
#line 610 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 111:
#line 611 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 612 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 113:
#line 613 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 114:
#line 614 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 115:
#line 615 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 616 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 617 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 618 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 619 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 120:
#line 620 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 621 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 122:
#line 622 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 123:
#line 623 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 124:
#line 624 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 125:
#line 625 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 126:
#line 626 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 127:
#line 627 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 128:
#line 628 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 129:
#line 629 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 130:
#line 630 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 131:
#line 631 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 132:
#line 632 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 133:
#line 633 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 134:
#line 634 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 135:
#line 635 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 136:
#line 636 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 137:
#line 637 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 138:
#line 638 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 139:
#line 639 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 140:
#line 640 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 141:
#line 641 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 142:
#line 643 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 143:
#line 644 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 144:
#line 645 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 145:
#line 646 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 146:
#line 647 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 147:
#line 648 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 148:
#line 649 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 149:
#line 650 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 150:
#line 652 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 151:
#line 653 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 152:
#line 655 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 153:
#line 656 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 154:
#line 657 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 155:
#line 659 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 156:
#line 660 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 157:
#line 661 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 158:
#line 662 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 159:
#line 669 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 160:
#line 676 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 161:
#line 683 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 162:
#line 687 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 163:
#line 691 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 164:
#line 697 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 165:
#line 698 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 166:
#line 699 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 167:
#line 703 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 168:
#line 709 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 169:
#line 715 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 170:
#line 716 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 171:
#line 717 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 172:
#line 718 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 173:
#line 719 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 174:
#line 720 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 175:
#line 721 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 176:
#line 722 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 177:
#line 723 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 178:
#line 727 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 179:
#line 729 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 180:
#line 731 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 181:
#line 733 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 182:
#line 737 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 183:
#line 745 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 184:
#line 755 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 185:
#line 756 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 186:
#line 759 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 187:
#line 760 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 188:
#line 764 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 189:
#line 772 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 190:
#line 780 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 191:
#line 791 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 192:
#line 800 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 193:
#line 805 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 195:
#line 816 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 197:
#line 818 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 198:
#line 821 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 199:
#line 828 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 200:
#line 836 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 201:
#line 837 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 838 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 841 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 204:
#line 842 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 206:
#line 846 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 209:
#line 855 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 210:
#line 857 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 213:
#line 865 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 214:
#line 867 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 219:
#line 879 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 220:
#line 885 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 221:
#line 892 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 222:
#line 900 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 223:
#line 901 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 224:
#line 902 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 225:
#line 903 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 226:
#line 906 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 227:
#line 907 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 228:
#line 908 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 229:
#line 909 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 230:
#line 910 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 232:
#line 914 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 233:
#line 917 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 234:
#line 918 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 235:
#line 921 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 922 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 237:
#line 923 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 238:
#line 924 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 239:
#line 925 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 240:
#line 926 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 241:
#line 927 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 242:
#line 928 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 243:
#line 929 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 244:
#line 932 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 245:
#line 933 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 935 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 247:
#line 943 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 248:
#line 948 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 249:
#line 949 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 250:
#line 950 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 251:
#line 953 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 954 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 255:
#line 963 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 256:
#line 969 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 257:
#line 970 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 258:
#line 971 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 261:
#line 980 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 262:
#line 982 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 263:
#line 984 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 264:
#line 986 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 265:
#line 988 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 266:
#line 991 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 992 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 993 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 269:
#line 996 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 997 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 271:
#line 1000 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 272:
#line 1001 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 273:
#line 1004 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 274:
#line 1005 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 275:
#line 1006 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 1013 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 279:
#line 1014 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 280:
#line 1019 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 281:
#line 1021 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 282:
#line 1023 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 284:
#line 1027 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1028 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1031 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1032 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1035 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 289:
#line 1040 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 290:
#line 1050 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 291:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 292:
#line 1058 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 293:
#line 1059 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 294:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1065 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 296:
#line 1069 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1071 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 300:
#line 1077 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 301:
#line 1082 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 302:
#line 1089 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 303:
#line 1096 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 304:
#line 1106 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 305:
#line 1113 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 306:
#line 1120 "parser/evoparser.y"
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

  case 307:
#line 1130 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 308:
#line 1138 "parser/evoparser.y"
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

  case 309:
#line 1148 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 310:
#line 1156 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 311:
#line 1165 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 312:
#line 1174 "parser/evoparser.y"
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

  case 313:
#line 1184 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 314:
#line 1192 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 315:
#line 1201 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 316:
#line 1210 "parser/evoparser.y"
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

  case 317:
#line 1220 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 318:
#line 1229 "parser/evoparser.y"
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

  case 319:
#line 1241 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 320:
#line 1246 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 321:
#line 1251 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 322:
#line 1257 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 323:
#line 1264 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 324:
#line 1271 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 325:
#line 1278 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 326:
#line 1288 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 327:
#line 1295 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1304 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 329:
#line 1311 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 330:
#line 1317 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 331:
#line 1325 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 332:
#line 1331 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 334:
#line 1339 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 335:
#line 1340 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 336:
#line 1341 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 337:
#line 1342 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 338:
#line 1347 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 339:
#line 1354 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 340:
#line 1363 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 341:
#line 1370 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 342:
#line 1376 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 343:
#line 1386 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 344:
#line 1390 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 345:
#line 1396 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 346:
#line 1402 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 347:
#line 1409 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 348:
#line 1415 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 349:
#line 1422 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 350:
#line 1428 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 351:
#line 1434 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 352:
#line 1440 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 353:
#line 1446 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 354:
#line 1452 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 355:
#line 1458 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 356:
#line 1464 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 357:
#line 1470 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 358:
#line 1476 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 359:
#line 1482 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 360:
#line 1488 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 361:
#line 1494 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 362:
#line 1500 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 363:
#line 1506 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 364:
#line 1513 "parser/evoparser.y"
    { ;}
    break;

  case 365:
#line 1514 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 366:
#line 1515 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 367:
#line 1519 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 368:
#line 1527 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 369:
#line 1533 "parser/evoparser.y"
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

  case 371:
#line 1546 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 372:
#line 1549 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 373:
#line 1550 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 374:
#line 1551 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 375:
#line 1552 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 376:
#line 1553 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 380:
#line 1560 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 381:
#line 1564 "parser/evoparser.y"
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

  case 382:
#line 1574 "parser/evoparser.y"
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

  case 383:
#line 1586 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 384:
#line 1587 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 385:
#line 1587 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 386:
#line 1590 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 387:
#line 1591 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1592 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1593 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 390:
#line 1597 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 391:
#line 1600 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1601 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1602 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 394:
#line 1603 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1609 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 396:
#line 1615 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 397:
#line 1620 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 398:
#line 1625 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 399:
#line 1630 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 400:
#line 1639 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 401:
#line 1646 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 402:
#line 1647 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 403:
#line 1648 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 404:
#line 1653 "parser/evoparser.y"
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

  case 405:
#line 1664 "parser/evoparser.y"
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

  case 406:
#line 1676 "parser/evoparser.y"
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

  case 407:
#line 1687 "parser/evoparser.y"
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

  case 408:
#line 1702 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 409:
#line 1706 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 410:
#line 1710 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 411:
#line 1711 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 412:
#line 1716 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 413:
#line 1718 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 414:
#line 1720 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 415:
#line 1722 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 416:
#line 1725 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 417:
#line 1726 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 418:
#line 1732 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 419:
#line 1737 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 420:
#line 1739 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 421:
#line 1741 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 422:
#line 1743 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 423:
#line 1745 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 424:
#line 1749 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1753 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 426:
#line 1754 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 427:
#line 1759 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 428:
#line 1769 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 429:
#line 1778 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 431:
#line 1782 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 432:
#line 1783 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 433:
#line 1784 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 434:
#line 1785 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 435:
#line 1787 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 436:
#line 1789 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 439:
#line 1797 "parser/evoparser.y"
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

  case 440:
#line 1812 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 441:
#line 1820 "parser/evoparser.y"
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

  case 442:
#line 1834 "parser/evoparser.y"
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

  case 443:
#line 1848 "parser/evoparser.y"
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

  case 444:
#line 1862 "parser/evoparser.y"
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

  case 445:
#line 1874 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 446:
#line 1875 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 447:
#line 1876 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 448:
#line 1879 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 449:
#line 1880 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1883 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 451:
#line 1884 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 452:
#line 1885 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 453:
#line 1886 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 454:
#line 1887 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 455:
#line 1888 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 456:
#line 1889 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 457:
#line 1890 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 458:
#line 1892 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 459:
#line 1894 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 460:
#line 1896 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 461:
#line 1898 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 462:
#line 1900 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 463:
#line 1902 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 464:
#line 1905 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 465:
#line 1906 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 1909 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 467:
#line 1910 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 468:
#line 1913 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 469:
#line 1914 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1918 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 472:
#line 1919 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 473:
#line 1920 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 474:
#line 1921 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 475:
#line 1922 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 476:
#line 1923 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 477:
#line 1924 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 478:
#line 1925 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 479:
#line 1926 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 480:
#line 1927 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 481:
#line 1928 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 482:
#line 1929 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 483:
#line 1930 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 484:
#line 1931 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 485:
#line 1932 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 486:
#line 1933 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 487:
#line 1934 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 488:
#line 1937 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 489:
#line 1938 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 490:
#line 1941 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 491:
#line 1943 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 492:
#line 1951 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 493:
#line 1952 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 495:
#line 1954 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 496:
#line 1955 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 497:
#line 1956 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 498:
#line 1957 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1958 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 500:
#line 1959 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 501:
#line 1960 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 502:
#line 1961 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 1962 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 504:
#line 1969 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 505:
#line 1970 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 506:
#line 1971 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 507:
#line 1972 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 508:
#line 1973 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 509:
#line 1974 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 510:
#line 1975 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 511:
#line 1976 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 512:
#line 1977 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 513:
#line 1978 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 514:
#line 1979 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 515:
#line 1980 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 516:
#line 1981 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 517:
#line 1982 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 518:
#line 1983 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 519:
#line 1984 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 520:
#line 1985 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 521:
#line 1986 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 522:
#line 1987 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 523:
#line 1988 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 524:
#line 1989 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 525:
#line 1992 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 526:
#line 1993 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 527:
#line 1994 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 528:
#line 1997 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 529:
#line 1998 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 530:
#line 2001 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 531:
#line 2002 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 532:
#line 2003 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 534:
#line 2007 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 535:
#line 2008 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 536:
#line 2012 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 537:
#line 2013 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 538:
#line 2014 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 539:
#line 2015 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 540:
#line 2016 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 541:
#line 2017 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 542:
#line 2018 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 543:
#line 2019 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 544:
#line 2020 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 545:
#line 2021 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 546:
#line 2022 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 547:
#line 2023 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 548:
#line 2024 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 549:
#line 2025 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 550:
#line 2026 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 551:
#line 2027 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 552:
#line 2028 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 553:
#line 2029 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 554:
#line 2030 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 555:
#line 2031 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 556:
#line 2032 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 557:
#line 2033 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 558:
#line 2034 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 559:
#line 2035 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 560:
#line 2036 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 561:
#line 2037 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 562:
#line 2038 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 563:
#line 2039 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 564:
#line 2040 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 565:
#line 2041 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 566:
#line 2042 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 567:
#line 2043 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 568:
#line 2046 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 569:
#line 2047 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2051 "parser/evoparser.y"
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

  case 571:
#line 2063 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 572:
#line 2064 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 573:
#line 2065 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 574:
#line 2069 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 575:
#line 2072 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 576:
#line 2073 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 580:
#line 2077 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 581:
#line 2078 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 582:
#line 2086 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 583:
#line 2091 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 584:
#line 2097 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 585:
#line 2103 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 586:
#line 2110 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 587:
#line 2117 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 588:
#line 2123 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 589:
#line 2129 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 590:
#line 2136 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 595:
#line 2152 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 596:
#line 2153 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 597:
#line 2154 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 598:
#line 2155 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 599:
#line 2158 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 600:
#line 2159 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 601:
#line 2160 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 602:
#line 2161 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 603:
#line 2162 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 604:
#line 2163 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 605:
#line 2164 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 606:
#line 2165 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 607:
#line 2166 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 608:
#line 2167 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 617:
#line 2184 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 618:
#line 2185 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 739:
#line 2203 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 740:
#line 2210 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 741:
#line 2215 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 742:
#line 2221 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 743:
#line 2227 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 744:
#line 2233 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 745:
#line 2244 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 746:
#line 2249 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 747:
#line 2255 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 750:
#line 2266 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 751:
#line 2267 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 752:
#line 2268 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 753:
#line 2269 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 754:
#line 2270 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 755:
#line 2271 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 756:
#line 2272 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 757:
#line 2279 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 758:
#line 2284 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 759:
#line 2291 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 760:
#line 2292 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 761:
#line 2295 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 762:
#line 2296 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 763:
#line 2297 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 764:
#line 2300 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 765:
#line 2305 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 766:
#line 2311 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8783 "parser/evoparser.tab.c"
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


#line 2318 "parser/evoparser.y"

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
