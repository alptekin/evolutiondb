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
     BEGINWORK = 295,
     BLOB = 296,
     BOOLEAN = 297,
     BY = 298,
     BINARY = 299,
     BOTH = 300,
     BIGINT = 301,
     BIT = 302,
     CALL = 303,
     CLOSE = 304,
     CURSOR = 305,
     CONSTRAINT = 306,
     CURRENT_TIMESTAMP = 307,
     CREATE = 308,
     CASCADE = 309,
     CHANGE = 310,
     CROSS = 311,
     CASE = 312,
     CHECK = 313,
     COMMENT = 314,
     CURRENT_DATE = 315,
     CURRENT_TIME = 316,
     CHAR = 317,
     COLLATE = 318,
     COLUMN = 319,
     CONCURRENTLY = 320,
     DATABASE = 321,
     DECLARE = 322,
     DEFERRABLE = 323,
     DEFERRED = 324,
     DISABLE = 325,
     DO = 326,
     DOMAIN = 327,
     DELAYED = 328,
     DAY_HOUR = 329,
     DAY_MICROSECOND = 330,
     DISTINCT = 331,
     DELETE = 332,
     DROP = 333,
     DAY_MINUTE = 334,
     DISTINCTROW = 335,
     DAY_SECOND = 336,
     DESC = 337,
     DEFAULT = 338,
     DOUBLE = 339,
     DATETIME = 340,
     DECIMAL = 341,
     DATE = 342,
     ELSEIF = 343,
     ENABLE = 344,
     ESCAPED = 345,
     EXCEPT = 346,
     ENUM = 347,
     END = 348,
     ELSE = 349,
     EXECUTE = 350,
     EXIT = 351,
     EXPLAIN = 352,
     FETCH = 353,
     FIRST = 354,
     FOREACH = 355,
     FLOAT = 356,
     FORCE = 357,
     FOREIGN = 358,
     FROM = 359,
     FULL = 360,
     FULLTEXT = 361,
     FUNCTION = 362,
     FOR = 363,
     GROUP = 364,
     HANDLER = 365,
     HOUR_MINUTE = 366,
     HOUR_MICROSECOND = 367,
     HIGH_PRIORITY = 368,
     HOUR_SECOND = 369,
     HAVING = 370,
     IMMEDIATE = 371,
     INOUT = 372,
     INITIALLY = 373,
     INTEGER = 374,
     INNER = 375,
     IGNORE = 376,
     INDEX = 377,
     IF = 378,
     INSERT = 379,
     INTERSECT = 380,
     INTO = 381,
     INT = 382,
     INTERVAL = 383,
     ITERATE = 384,
     JOIN = 385,
     KEY = 386,
     LEAVE = 387,
     LOOP = 388,
     LESS = 389,
     LONGTEXT = 390,
     LOW_PRIORITY = 391,
     LEFT = 392,
     LEADING = 393,
     LIMIT = 394,
     LOCKED = 395,
     OFFSET = 396,
     LONGBLOB = 397,
     MATCH = 398,
     MAXVALUE = 399,
     MEDIUMTEXT = 400,
     MINUS = 401,
     MODIFY = 402,
     MEDIUMBLOB = 403,
     MEDIUMINT = 404,
     NATURAL = 405,
     NODE = 406,
     NO_ACTION = 407,
     NULLX = 408,
     OPEN = 409,
     OUT = 410,
     OUTER = 411,
     ON = 412,
     ORDER = 413,
     ONDUPLICATE = 414,
     PARTIAL = 415,
     PRIMARY = 416,
     PROCEDURE = 417,
     QUICK = 418,
     RANGE = 419,
     REAL = 420,
     RECLAIM = 421,
     REFERENCES = 422,
     RENAME = 423,
     RESIGNAL = 424,
     RESTRICT = 425,
     RETURN = 426,
     RETURNS = 427,
     ROLLUP = 428,
     RIGHT = 429,
     REPLACE = 430,
     SIGNAL = 431,
     UNTIL = 432,
     SQL_SMALL_RESULT = 433,
     SCHEMA = 434,
     SHARD = 435,
     SHARDS = 436,
     SHARE = 437,
     SKIP = 438,
     SOME = 439,
     SQL_CALC_FOUND_ROWS = 440,
     SQL_BIG_RESULT = 441,
     SIMPLE = 442,
     STRAIGHT_JOIN = 443,
     SMALLINT = 444,
     SET = 445,
     SELECT = 446,
     TINYTEXT = 447,
     TINYINT = 448,
     TO = 449,
     TEMPORARY = 450,
     GLOBAL = 451,
     PRESERVE = 452,
     TEXT = 453,
     THAN = 454,
     TIMESTAMP = 455,
     TABLE = 456,
     THEN = 457,
     TRAILING = 458,
     TRUNCATE = 459,
     TINYBLOB = 460,
     TIME = 461,
     UPDATE = 462,
     UNSIGNED = 463,
     UNION = 464,
     UNIQUE = 465,
     UUID = 466,
     VIEW = 467,
     USING = 468,
     USE = 469,
     HASH = 470,
     VALIDATE = 471,
     VARCHAR = 472,
     VALUES = 473,
     VARBINARY = 474,
     WHERE = 475,
     WHEN = 476,
     WHILE = 477,
     WITH = 478,
     YEAR = 479,
     YEAR_MONTH = 480,
     ZEROFILL = 481,
     EXISTS = 482,
     FSUBSTRING = 483,
     FTRIM = 484,
     FDATE_ADD = 485,
     FDATE_SUB = 486,
     FDATEDIFF = 487,
     FYEAR = 488,
     FMONTH = 489,
     FDAY = 490,
     FHOUR = 491,
     FMINUTE = 492,
     FSECOND = 493,
     FNOW = 494,
     FLEFT = 495,
     FRIGHT = 496,
     FLPAD = 497,
     FRPAD = 498,
     FREVERSE = 499,
     FREPEAT = 500,
     FINSTR = 501,
     FLOCATE = 502,
     FABS = 503,
     FCEIL = 504,
     FFLOOR = 505,
     FROUND = 506,
     FPOWER = 507,
     FSQRT = 508,
     FMOD = 509,
     FRAND = 510,
     FLOG = 511,
     FLOG10 = 512,
     FSIGN = 513,
     FPI = 514,
     FCAST = 515,
     FCONVERT = 516,
     FNULLIF = 517,
     FIFNULL = 518,
     FIF = 519,
     UNKNOWN = 520,
     FGROUP_CONCAT = 521,
     SEPARATOR = 522,
     FCOUNT = 523,
     FSUM = 524,
     FAVG = 525,
     FMIN = 526,
     FMAX = 527,
     FUPPER = 528,
     FLOWER = 529,
     FLENGTH = 530,
     FCONCAT = 531,
     FREPLACE = 532,
     FCOALESCE = 533,
     FGEN_RANDOM_UUID = 534,
     FGEN_RANDOM_UUID_V7 = 535,
     FSNOWFLAKE_ID = 536,
     FLAST_INSERT_ID = 537,
     FEVO_SLEEP = 538,
     FEVO_JITTER = 539,
     FROW_NUMBER = 540,
     FRANK = 541,
     FDENSE_RANK = 542,
     FLEAD = 543,
     FLAG = 544,
     FNTILE = 545,
     FPERCENT_RANK = 546,
     FCUME_DIST = 547,
     OVER = 548,
     PARTITION = 549
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
#define BEGINWORK 295
#define BLOB 296
#define BOOLEAN 297
#define BY 298
#define BINARY 299
#define BOTH 300
#define BIGINT 301
#define BIT 302
#define CALL 303
#define CLOSE 304
#define CURSOR 305
#define CONSTRAINT 306
#define CURRENT_TIMESTAMP 307
#define CREATE 308
#define CASCADE 309
#define CHANGE 310
#define CROSS 311
#define CASE 312
#define CHECK 313
#define COMMENT 314
#define CURRENT_DATE 315
#define CURRENT_TIME 316
#define CHAR 317
#define COLLATE 318
#define COLUMN 319
#define CONCURRENTLY 320
#define DATABASE 321
#define DECLARE 322
#define DEFERRABLE 323
#define DEFERRED 324
#define DISABLE 325
#define DO 326
#define DOMAIN 327
#define DELAYED 328
#define DAY_HOUR 329
#define DAY_MICROSECOND 330
#define DISTINCT 331
#define DELETE 332
#define DROP 333
#define DAY_MINUTE 334
#define DISTINCTROW 335
#define DAY_SECOND 336
#define DESC 337
#define DEFAULT 338
#define DOUBLE 339
#define DATETIME 340
#define DECIMAL 341
#define DATE 342
#define ELSEIF 343
#define ENABLE 344
#define ESCAPED 345
#define EXCEPT 346
#define ENUM 347
#define END 348
#define ELSE 349
#define EXECUTE 350
#define EXIT 351
#define EXPLAIN 352
#define FETCH 353
#define FIRST 354
#define FOREACH 355
#define FLOAT 356
#define FORCE 357
#define FOREIGN 358
#define FROM 359
#define FULL 360
#define FULLTEXT 361
#define FUNCTION 362
#define FOR 363
#define GROUP 364
#define HANDLER 365
#define HOUR_MINUTE 366
#define HOUR_MICROSECOND 367
#define HIGH_PRIORITY 368
#define HOUR_SECOND 369
#define HAVING 370
#define IMMEDIATE 371
#define INOUT 372
#define INITIALLY 373
#define INTEGER 374
#define INNER 375
#define IGNORE 376
#define INDEX 377
#define IF 378
#define INSERT 379
#define INTERSECT 380
#define INTO 381
#define INT 382
#define INTERVAL 383
#define ITERATE 384
#define JOIN 385
#define KEY 386
#define LEAVE 387
#define LOOP 388
#define LESS 389
#define LONGTEXT 390
#define LOW_PRIORITY 391
#define LEFT 392
#define LEADING 393
#define LIMIT 394
#define LOCKED 395
#define OFFSET 396
#define LONGBLOB 397
#define MATCH 398
#define MAXVALUE 399
#define MEDIUMTEXT 400
#define MINUS 401
#define MODIFY 402
#define MEDIUMBLOB 403
#define MEDIUMINT 404
#define NATURAL 405
#define NODE 406
#define NO_ACTION 407
#define NULLX 408
#define OPEN 409
#define OUT 410
#define OUTER 411
#define ON 412
#define ORDER 413
#define ONDUPLICATE 414
#define PARTIAL 415
#define PRIMARY 416
#define PROCEDURE 417
#define QUICK 418
#define RANGE 419
#define REAL 420
#define RECLAIM 421
#define REFERENCES 422
#define RENAME 423
#define RESIGNAL 424
#define RESTRICT 425
#define RETURN 426
#define RETURNS 427
#define ROLLUP 428
#define RIGHT 429
#define REPLACE 430
#define SIGNAL 431
#define UNTIL 432
#define SQL_SMALL_RESULT 433
#define SCHEMA 434
#define SHARD 435
#define SHARDS 436
#define SHARE 437
#define SKIP 438
#define SOME 439
#define SQL_CALC_FOUND_ROWS 440
#define SQL_BIG_RESULT 441
#define SIMPLE 442
#define STRAIGHT_JOIN 443
#define SMALLINT 444
#define SET 445
#define SELECT 446
#define TINYTEXT 447
#define TINYINT 448
#define TO 449
#define TEMPORARY 450
#define GLOBAL 451
#define PRESERVE 452
#define TEXT 453
#define THAN 454
#define TIMESTAMP 455
#define TABLE 456
#define THEN 457
#define TRAILING 458
#define TRUNCATE 459
#define TINYBLOB 460
#define TIME 461
#define UPDATE 462
#define UNSIGNED 463
#define UNION 464
#define UNIQUE 465
#define UUID 466
#define VIEW 467
#define USING 468
#define USE 469
#define HASH 470
#define VALIDATE 471
#define VARCHAR 472
#define VALUES 473
#define VARBINARY 474
#define WHERE 475
#define WHEN 476
#define WHILE 477
#define WITH 478
#define YEAR 479
#define YEAR_MONTH 480
#define ZEROFILL 481
#define EXISTS 482
#define FSUBSTRING 483
#define FTRIM 484
#define FDATE_ADD 485
#define FDATE_SUB 486
#define FDATEDIFF 487
#define FYEAR 488
#define FMONTH 489
#define FDAY 490
#define FHOUR 491
#define FMINUTE 492
#define FSECOND 493
#define FNOW 494
#define FLEFT 495
#define FRIGHT 496
#define FLPAD 497
#define FRPAD 498
#define FREVERSE 499
#define FREPEAT 500
#define FINSTR 501
#define FLOCATE 502
#define FABS 503
#define FCEIL 504
#define FFLOOR 505
#define FROUND 506
#define FPOWER 507
#define FSQRT 508
#define FMOD 509
#define FRAND 510
#define FLOG 511
#define FLOG10 512
#define FSIGN 513
#define FPI 514
#define FCAST 515
#define FCONVERT 516
#define FNULLIF 517
#define FIFNULL 518
#define FIF 519
#define UNKNOWN 520
#define FGROUP_CONCAT 521
#define SEPARATOR 522
#define FCOUNT 523
#define FSUM 524
#define FAVG 525
#define FMIN 526
#define FMAX 527
#define FUPPER 528
#define FLOWER 529
#define FLENGTH 530
#define FCONCAT 531
#define FREPLACE 532
#define FCOALESCE 533
#define FGEN_RANDOM_UUID 534
#define FGEN_RANDOM_UUID_V7 535
#define FSNOWFLAKE_ID 536
#define FLAST_INSERT_ID 537
#define FEVO_SLEEP 538
#define FEVO_JITTER 539
#define FROW_NUMBER 540
#define FRANK 541
#define FDENSE_RANK 542
#define FLEAD 543
#define FLAG 544
#define FNTILE 545
#define FPERCENT_RANK 546
#define FCUME_DIST 547
#define OVER 548
#define PARTITION 549




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
#line 739 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 752 "parser/evoparser.tab.c"

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
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8643

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  310
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  752
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1817

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   549

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     306,   307,    26,    24,   308,    25,   305,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   304,
       2,   309,     2,     2,     2,     2,     2,     2,     2,     2,
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
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303
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
    3218,  3220,  3222,  3224,  3226,  3228,  3230,  3232,  3236,  3242,
    3246,  3252,  3254,  3259,  3265,  3267,  3271,  3273,  3275,  3277,
    3279,  3281,  3283
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     311,     0,    -1,   347,   304,    -1,   347,   304,   311,    -1,
       3,    -1,     3,   305,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   162,    -1,   312,    24,
     312,    -1,   312,    25,   312,    -1,   312,    26,   312,    -1,
     312,    27,   312,    -1,   312,    28,   312,    -1,   312,    29,
     312,    -1,    25,   312,    -1,   306,   312,   307,    -1,   312,
      12,   312,    -1,   312,    10,   312,    -1,   312,    11,   312,
      -1,   312,    21,   312,    -1,   312,    22,   312,    -1,   312,
      30,   312,    -1,   312,    23,   312,    -1,    18,   312,    -1,
      17,   312,    -1,   312,    20,   312,    -1,    -1,   312,    20,
     306,   313,   348,   307,    -1,    -1,   312,    20,    37,   306,
     314,   348,   307,    -1,    -1,   312,    20,   193,   306,   315,
     348,   307,    -1,    -1,   312,    20,    35,   306,   316,   348,
     307,    -1,   312,    15,   162,    -1,   312,    15,    18,   162,
      -1,   312,    15,     6,    -1,   312,    15,    18,     6,    -1,
       8,     9,   312,    -1,   312,    19,   312,    40,   312,    -1,
     312,    18,    19,   312,    40,   312,    -1,   312,    -1,   312,
     308,   317,    -1,    -1,   317,    -1,    -1,   312,    16,   306,
     319,   317,   307,    -1,    -1,   312,    18,    16,   306,   320,
     317,   307,    -1,    -1,   312,    16,   306,   321,   348,   307,
      -1,    -1,   312,    18,    16,   306,   322,   348,   307,    -1,
      -1,   236,   306,   323,   348,   307,    -1,     3,   306,   318,
     307,    -1,   277,   306,    26,   307,    -1,   277,   306,   312,
     307,    -1,   278,   306,   312,   307,    -1,   279,   306,   312,
     307,    -1,   280,   306,   312,   307,    -1,   281,   306,   312,
     307,    -1,   275,   306,   312,   307,    -1,   275,   306,   312,
     276,     4,   307,    -1,    -1,   294,   306,   307,   302,   306,
     324,   355,   357,   307,    -1,    -1,   295,   306,   307,   302,
     306,   325,   355,   357,   307,    -1,    -1,   296,   306,   307,
     302,   306,   326,   355,   357,   307,    -1,    -1,   278,   306,
     312,   307,   302,   306,   327,   355,   357,   307,    -1,    -1,
     277,   306,    26,   307,   302,   306,   328,   355,   357,   307,
      -1,    -1,   277,   306,   312,   307,   302,   306,   329,   355,
     357,   307,    -1,    -1,   279,   306,   312,   307,   302,   306,
     330,   355,   357,   307,    -1,    -1,   280,   306,   312,   307,
     302,   306,   331,   355,   357,   307,    -1,    -1,   281,   306,
     312,   307,   302,   306,   332,   355,   357,   307,    -1,    -1,
     297,   306,   312,   307,   302,   306,   333,   355,   357,   307,
      -1,    -1,   297,   306,   312,   308,     5,   307,   302,   306,
     334,   355,   357,   307,    -1,    -1,   297,   306,   312,   308,
       5,   308,     4,   307,   302,   306,   335,   355,   357,   307,
      -1,    -1,   297,   306,   312,   308,     5,   308,     5,   307,
     302,   306,   336,   355,   357,   307,    -1,    -1,   298,   306,
     312,   307,   302,   306,   337,   355,   357,   307,    -1,    -1,
     298,   306,   312,   308,     5,   307,   302,   306,   338,   355,
     357,   307,    -1,    -1,   298,   306,   312,   308,     5,   308,
       4,   307,   302,   306,   339,   355,   357,   307,    -1,    -1,
     298,   306,   312,   308,     5,   308,     5,   307,   302,   306,
     340,   355,   357,   307,    -1,    -1,   299,   306,     5,   307,
     302,   306,   341,   355,   357,   307,    -1,    -1,   300,   306,
     307,   302,   306,   342,   355,   357,   307,    -1,    -1,   301,
     306,   307,   302,   306,   343,   355,   357,   307,    -1,   237,
     306,   312,   308,   312,   308,   312,   307,    -1,   237,   306,
     312,   308,   312,   307,    -1,   237,   306,   312,   113,   312,
     307,    -1,   237,   306,   312,   113,   312,   117,   312,   307,
      -1,   238,   306,   312,   307,    -1,   238,   306,   344,   312,
     113,   312,   307,    -1,   238,   306,   344,   113,   312,   307,
      -1,   282,   306,   312,   307,    -1,   283,   306,   312,   307,
      -1,   284,   306,   312,   307,    -1,   285,   306,   312,   308,
     312,   307,    -1,   286,   306,   312,   308,   312,   308,   312,
     307,    -1,   287,   306,   312,   308,   312,   307,    -1,   249,
     306,   312,   308,   312,   307,    -1,   250,   306,   312,   308,
     312,   307,    -1,   251,   306,   312,   308,   312,   308,   312,
     307,    -1,   252,   306,   312,   308,   312,   308,   312,   307,
      -1,   253,   306,   312,   307,    -1,   254,   306,   312,   308,
     312,   307,    -1,   255,   306,   312,   308,   312,   307,    -1,
     256,   306,   312,   308,   312,   307,    -1,   257,   306,   312,
     307,    -1,   258,   306,   312,   307,    -1,   259,   306,   312,
     307,    -1,   260,   306,   312,   308,   312,   307,    -1,   260,
     306,   312,   307,    -1,   261,   306,   312,   308,   312,   307,
      -1,   262,   306,   312,   307,    -1,   263,   306,   312,   308,
     312,   307,    -1,   264,   306,   307,    -1,   265,   306,   312,
     307,    -1,   266,   306,   312,   307,    -1,   267,   306,   312,
     307,    -1,   268,   306,   307,    -1,   248,   306,   307,    -1,
     241,   306,   312,   308,   312,   307,    -1,   242,   306,   312,
     307,    -1,   243,   306,   312,   307,    -1,   244,   306,   312,
     307,    -1,   245,   306,   312,   307,    -1,   246,   306,   312,
     307,    -1,   247,   306,   312,   307,    -1,   269,   306,   312,
      41,   437,   307,    -1,   270,   306,   312,   308,   437,   307,
      -1,   271,   306,   312,   308,   312,   307,    -1,   272,   306,
     312,   308,   312,   307,    -1,   273,   306,   312,   308,   312,
     308,   312,   307,    -1,   312,    15,   274,    -1,   285,   306,
     312,   308,   312,   308,   312,   307,    -1,   285,   306,   312,
     308,   312,   308,   312,   308,   312,   307,    -1,   288,   306,
     307,    -1,   289,   306,   307,    -1,   290,   306,   307,    -1,
     291,   306,   307,    -1,   292,   306,   312,   307,    -1,   293,
     306,   312,   308,   312,   307,    -1,   147,    -1,   212,    -1,
      54,    -1,   239,   306,   312,   308,   345,   307,    -1,   240,
     306,   312,   308,   345,   307,    -1,   137,   312,   233,    -1,
     137,   312,    83,    -1,   137,   312,    84,    -1,   137,   312,
      88,    -1,   137,   312,    90,    -1,   137,   312,   234,    -1,
     137,   312,   121,    -1,   137,   312,   120,    -1,   137,   312,
     123,    -1,    66,   312,   346,   102,    -1,    66,   312,   346,
     103,   312,   102,    -1,    66,   346,   102,    -1,    66,   346,
     103,   312,   102,    -1,   230,   312,   211,   312,    -1,   346,
     230,   312,   211,   312,    -1,   312,    14,   312,    -1,   312,
      18,    14,   312,    -1,   312,    13,   312,    -1,   312,    18,
      13,   312,    -1,    61,    -1,    69,    -1,    70,    -1,   348,
      -1,   200,   366,   367,    -1,   200,   366,   367,   113,   370,
     349,   350,   354,   359,   362,   363,   364,    -1,    -1,   229,
     312,    -1,    -1,   118,    52,   351,   353,    -1,   312,   352,
      -1,   351,   308,   312,   352,    -1,    -1,    39,    -1,    91,
      -1,    -1,   232,   182,    -1,    -1,   124,   312,    -1,    -1,
     303,    52,   356,    -1,     3,    -1,   356,   308,     3,    -1,
      -1,   167,    52,   358,    -1,     3,   352,    -1,   358,   308,
       3,   352,    -1,    -1,   167,    52,   360,    -1,   361,    -1,
     360,   308,   361,    -1,     3,   352,    -1,     3,   305,     3,
     352,    -1,     5,   352,    -1,    -1,   148,   312,    -1,   148,
     312,   308,   312,    -1,   148,   312,   150,   312,    -1,    -1,
     117,   216,    -1,   117,   191,    -1,   117,   216,   192,   149,
      -1,   117,   191,   192,   149,    -1,    -1,   135,   365,    -1,
       3,    -1,   365,   308,     3,    -1,    -1,   366,    35,    -1,
     366,    85,    -1,   366,    89,    -1,   366,   122,    -1,   366,
     197,    -1,   366,   187,    -1,   366,   195,    -1,   366,   194,
      -1,   368,    -1,   367,   308,   368,    -1,    26,    -1,   312,
     369,    -1,    41,     3,    -1,     3,    -1,    -1,   371,    -1,
     370,   308,   371,    -1,   372,    -1,   374,    -1,     3,   369,
     381,    -1,     3,   305,     3,   369,   381,    -1,   384,   373,
       3,    -1,   306,   370,   307,    -1,    41,    -1,    -1,   371,
     375,   139,   372,   379,    -1,   371,   197,   372,    -1,   371,
     197,   372,   166,   312,    -1,   371,   377,   376,   139,   372,
     380,    -1,   371,   159,   378,   139,   372,    -1,    -1,   129,
      -1,    65,    -1,    -1,   165,    -1,   146,    -1,   183,    -1,
     146,   376,    -1,   183,   376,    -1,    -1,    -1,   380,    -1,
     166,   312,    -1,   222,   306,   365,   307,    -1,   223,   140,
     382,   306,   383,   307,    -1,   130,   140,   382,   306,   383,
     307,    -1,   111,   140,   382,   306,   383,   307,    -1,    -1,
     117,   139,    -1,    -1,     3,    -1,   383,   308,     3,    -1,
     306,   348,   307,    -1,   385,    -1,    86,   386,   113,     3,
     349,   359,   362,    -1,   386,   145,    -1,   386,   172,    -1,
     386,   130,    -1,    -1,    86,   386,   387,   113,   370,   349,
      -1,     3,   388,    -1,   387,   308,     3,   388,    -1,    -1,
     305,    26,    -1,    86,   386,   113,   387,   222,   370,   349,
      -1,   389,    -1,    87,   210,     3,    -1,    87,   210,   132,
     236,     3,    -1,   390,    -1,    62,   131,     3,   166,     3,
     306,   391,   307,    -1,    62,   131,   132,   236,     3,   166,
       3,   306,   391,   307,    -1,    62,   219,   131,     3,   166,
       3,   306,   391,   307,    -1,    62,   219,   131,   132,   236,
       3,   166,     3,   306,   391,   307,    -1,    62,   131,     3,
     166,     3,   222,   224,   306,   391,   307,    -1,    62,   131,
     132,   236,     3,   166,     3,   222,   224,   306,   391,   307,
      -1,    62,   219,   131,     3,   166,     3,   222,   224,   306,
     391,   307,    -1,    62,   219,   131,   132,   236,     3,   166,
       3,   222,   224,   306,   391,   307,    -1,    62,   131,    74,
       3,   166,     3,   306,   391,   307,    -1,    62,   131,    74,
     132,   236,     3,   166,     3,   306,   391,   307,    -1,    62,
     219,   131,    74,     3,   166,     3,   306,   391,   307,    -1,
      62,   219,   131,    74,   132,   236,     3,   166,     3,   306,
     391,   307,    -1,    62,   131,    74,     3,   166,     3,   222,
     224,   306,   391,   307,    -1,    62,   219,   131,    74,     3,
     166,     3,   222,   224,   306,   391,   307,    -1,     3,    -1,
     391,   308,     3,    -1,   392,    -1,   282,   306,     3,   307,
      -1,   283,   306,     3,   307,    -1,   284,   306,     3,   307,
      -1,   285,   306,     3,   308,     3,   307,    -1,   393,    -1,
      87,   131,     3,    -1,   394,   396,    -1,   213,   210,     3,
      -1,   213,   210,     3,   308,   395,    -1,     3,    -1,   395,
     308,     3,    -1,    -1,   396,    63,    -1,   396,   179,    -1,
     396,    45,    43,    -1,   396,    44,    43,    -1,   397,    -1,
     175,   210,     3,    -1,   398,    -1,    36,   210,     3,    -1,
      36,   210,     3,   305,     3,    -1,   399,    -1,    32,   210,
       3,    33,    60,     3,    67,   306,   312,   307,    -1,    32,
     210,     3,    33,    60,     3,   219,   306,   430,   307,    -1,
      32,   210,     3,    33,    60,     3,   112,   140,   306,   427,
     307,   176,     3,   306,   428,   307,   429,    -1,    32,   210,
       3,    33,    60,     3,    67,   306,   312,   307,    18,   225,
      -1,    32,   210,     3,    33,    60,     3,   112,   140,   306,
     427,   307,   176,     3,   306,   428,   307,   429,    18,   225,
      -1,    32,   210,     3,    33,    60,     3,   170,   140,   306,
     426,   307,    -1,    32,   210,     3,    87,    60,     3,    -1,
      32,   210,     3,   177,    60,     3,   203,     3,    -1,    32,
     210,     3,    98,    60,     3,    -1,    32,   210,     3,    79,
      60,     3,    -1,    32,   210,     3,   225,    60,     3,    -1,
      32,   210,     3,    33,    73,     3,   437,   432,   400,    -1,
      32,   210,     3,    87,    73,     3,    -1,    32,   210,     3,
      87,     3,    -1,    32,   210,     3,   177,    73,     3,   203,
       3,    -1,    32,   210,     3,   177,     3,   203,     3,    -1,
      32,   210,     3,   156,    73,     3,   437,   432,   400,    -1,
      32,   210,     3,   156,     3,   437,   432,   400,    -1,    32,
     210,     3,    64,    73,     3,     3,   437,   432,   400,    -1,
      32,   210,     3,    64,     3,     3,   437,   432,   400,    -1,
      -1,   108,    -1,    34,     3,    -1,   401,    -1,   133,   403,
     404,     3,   405,   227,   407,   402,    -1,   133,   403,   404,
       3,   405,   348,    -1,    -1,   168,   140,   216,   410,    -1,
      -1,   403,   145,    -1,   403,    82,    -1,   403,   122,    -1,
     403,   130,    -1,   135,    -1,    -1,    -1,   306,   406,   307,
      -1,     3,    -1,   406,   308,     3,    -1,   306,   409,   307,
      -1,    -1,   407,   308,   408,   306,   409,   307,    -1,   312,
      -1,    92,    -1,   409,   308,   312,    -1,   409,   308,    92,
      -1,   133,   403,   404,     3,   199,   410,   402,    -1,     3,
      20,   312,    -1,     3,    20,    92,    -1,   410,   308,     3,
      20,   312,    -1,   410,   308,     3,    20,    92,    -1,   411,
      -1,   184,   403,   404,     3,   405,   227,   407,   402,    -1,
     184,   403,   404,     3,   199,   410,   402,    -1,   184,   403,
     404,     3,   405,   348,   402,    -1,   412,    -1,   216,   413,
     370,   199,   414,   349,   359,   362,    -1,    -1,   403,   145,
      -1,   403,   130,    -1,     3,    20,   312,    -1,     3,   305,
       3,    20,   312,    -1,   414,   308,     3,    20,   312,    -1,
     414,   308,     3,   305,     3,    20,   312,    -1,   177,   210,
       3,   203,     3,    -1,   415,    -1,    62,    75,   416,     3,
      -1,    62,   188,   416,     3,    -1,    87,    75,     3,    -1,
      87,    75,   132,   236,     3,    -1,    87,   188,     3,    -1,
      87,   188,   132,   236,     3,    -1,    -1,   132,   236,    -1,
     417,    -1,    62,    81,     3,    41,   437,    -1,    62,    81,
       3,    41,   437,    92,   312,    -1,    62,    81,     3,    41,
     437,    18,   162,    -1,    62,    81,     3,    41,   437,    67,
     306,   312,   307,    -1,    62,    81,     3,    41,   437,    18,
     162,    67,   306,   312,   307,    -1,   418,    -1,   223,     3,
      -1,   223,    75,     3,    -1,   419,    -1,    62,   423,   210,
     416,     3,   306,   424,   307,   420,    -1,    62,   423,   210,
     416,     3,   305,     3,   306,   424,   307,   420,    -1,    -1,
     420,    38,    20,     5,    -1,   420,    38,     5,    -1,   420,
     166,     3,    86,     3,    -1,   420,   166,     3,   206,     3,
      -1,   420,   189,    52,   224,   306,     3,   307,   190,     5,
      -1,   420,   189,    52,   173,   306,     3,   307,   306,   421,
     307,    -1,   422,    -1,   421,   308,   422,    -1,   189,     3,
     227,   143,   208,     4,   166,   160,     5,    -1,   189,     3,
     227,   143,   208,   153,   166,   160,     5,    -1,    62,   423,
     210,   416,     3,   306,   424,   307,   439,    -1,    62,   423,
     210,   416,     3,   439,    -1,    62,   423,   210,   416,     3,
     305,     3,   306,   424,   307,   439,    -1,    62,   423,   210,
     416,     3,   305,     3,   439,    -1,    -1,   204,    -1,   205,
     204,    -1,   425,    -1,   424,   308,   425,    -1,   170,   140,
     306,   426,   307,    -1,    60,     3,   170,   140,   306,   426,
     307,    -1,   140,   306,   365,   307,    -1,   131,   306,   365,
     307,    -1,   115,   131,   306,   365,   307,    -1,   115,   140,
     306,   365,   307,    -1,    67,   306,   312,   307,    -1,    60,
       3,    67,   306,   312,   307,    -1,   112,   140,   306,   427,
     307,   176,     3,   306,   428,   307,   429,    -1,   112,   140,
     306,   427,   307,   176,     3,   305,     3,   306,   428,   307,
     429,    -1,    60,     3,   112,   140,   306,   427,   307,   176,
       3,   306,   428,   307,   429,    -1,    60,     3,   112,   140,
     306,   427,   307,   176,     3,   305,     3,   306,   428,   307,
     429,    -1,   219,   306,   430,   307,    -1,    60,     3,   219,
     306,   430,   307,    -1,     3,    -1,   426,   308,     3,    -1,
       3,    -1,   427,   308,     3,    -1,     3,    -1,   428,   308,
       3,    -1,    -1,   429,   166,    86,    63,    -1,   429,   166,
      86,   199,   162,    -1,   429,   166,    86,   179,    -1,   429,
     166,    86,   199,    92,    -1,   429,   166,   216,    63,    -1,
     429,   166,   216,   199,   162,    -1,   429,   166,   216,   179,
      -1,   429,   166,   216,   199,    92,    -1,   429,   166,    86,
     161,    -1,   429,   166,   216,   161,    -1,   429,   152,   114,
      -1,   429,   152,   196,    -1,   429,   152,   169,    -1,   429,
      77,    -1,   429,    18,    77,    -1,   429,    77,   127,    78,
      -1,   429,    77,   127,   125,    -1,     3,    -1,   430,   308,
       3,    -1,    -1,   431,     3,   437,   432,    -1,    -1,   432,
      18,   162,    -1,   432,   162,    -1,   432,    92,     4,    -1,
     432,    92,     5,    -1,   432,    92,     7,    -1,   432,    92,
       6,    -1,   432,    92,   288,   306,   307,    -1,   432,    92,
     289,   306,   307,    -1,   432,    92,   290,   306,   307,    -1,
     432,    92,    61,    -1,   432,    92,   306,   312,   307,    -1,
     432,    38,    -1,   432,    38,   306,     5,   308,     5,   307,
      -1,   432,    38,   306,     5,   307,    -1,   432,    43,   306,
       5,   308,     5,   307,    -1,   432,    43,   306,     5,   307,
      -1,   432,    43,    -1,   432,   219,   140,    -1,   432,   219,
      -1,   432,   170,   140,    -1,   432,   140,    -1,   432,    68,
       4,    -1,   432,    67,   306,   312,   307,    -1,   432,    60,
       3,   219,    -1,   432,    60,     3,   170,   140,    -1,   432,
      60,     3,    67,   306,   312,   307,    -1,   432,    46,    42,
      41,   306,   312,   307,    47,    -1,   432,    46,    42,    41,
     306,   312,   307,    48,    -1,   432,    46,    42,    41,   306,
     312,   307,    -1,   432,    41,   306,   312,   307,    47,    -1,
     432,    41,   306,   312,   307,    48,    -1,   432,    41,   306,
     312,   307,    -1,    -1,   306,     5,   307,    -1,   306,     5,
     308,     5,   307,    -1,    -1,    53,    -1,    -1,   435,   217,
      -1,   435,   235,    -1,    -1,   436,    71,   199,     4,    -1,
     436,    72,     4,    -1,    56,   433,    -1,   202,   433,   435,
      -1,   198,   433,   435,    -1,   158,   433,   435,    -1,   136,
     433,   435,    -1,   128,   433,   435,    -1,    55,   433,   435,
      -1,   174,   433,   435,    -1,    93,   433,   435,    -1,   110,
     433,   435,    -1,    95,   433,   435,    -1,    96,    -1,   215,
      -1,   209,    -1,    94,    -1,   233,    -1,    71,   433,   436,
      -1,   226,   306,     5,   307,   436,    -1,    53,   433,    -1,
     228,   306,     5,   307,    -1,   214,    -1,    50,    -1,   157,
      -1,   151,    -1,   201,   434,   436,    -1,   207,   434,   436,
      -1,   154,   434,   436,    -1,   144,   434,   436,    -1,   101,
     306,   438,   307,   436,    -1,   199,   306,   438,   307,   436,
      -1,    51,    -1,   220,    -1,     4,    -1,   438,   308,     4,
      -1,   440,   373,   348,    -1,    -1,   130,    -1,   184,    -1,
     441,    -1,   199,   188,     3,    -1,   199,   188,    92,    -1,
     199,   442,    -1,   443,    -1,   442,   308,   443,    -1,     8,
      20,   312,    -1,     8,     9,   312,    -1,   444,    -1,    62,
     171,     3,   306,   445,   307,    41,    49,   449,   102,    -1,
      62,   171,     3,   306,   445,   307,    49,   449,   102,    -1,
      62,    10,   184,   171,     3,   306,   445,   307,    41,    49,
     449,   102,    -1,    62,    10,   184,   171,     3,   306,   445,
     307,    49,   449,   102,    -1,    62,   116,     3,   306,   445,
     307,   181,   448,    41,    49,   449,   102,    -1,    62,   116,
       3,   306,   445,   307,   181,   448,    49,   449,   102,    -1,
      62,    10,   184,   116,     3,   306,   445,   307,   181,   448,
      41,    49,   449,   102,    -1,    62,    10,   184,   116,     3,
     306,   445,   307,   181,   448,    49,   449,   102,    -1,    -1,
     446,    -1,   447,    -1,   446,   308,   447,    -1,     3,   437,
      -1,    16,     3,   437,    -1,   164,     3,   437,    -1,   126,
       3,   437,    -1,   128,    -1,   136,    -1,   226,    -1,   207,
      -1,    51,    -1,   110,    -1,    93,    -1,    55,    -1,    96,
      -1,   209,    -1,    -1,   449,   450,    -1,   449,    49,   449,
     102,    -1,   449,   132,   449,   102,   132,    -1,   449,   231,
     449,   102,   231,    -1,   449,   142,   449,   102,   142,    -1,
     449,   109,   449,   102,   109,    -1,   449,    66,   449,   102,
      66,    -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,
       6,    -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,
      16,    -1,    40,    -1,   200,    -1,   133,    -1,   216,    -1,
      86,    -1,   113,    -1,   229,    -1,   199,    -1,   135,    -1,
     227,    -1,    62,    -1,    87,    -1,   210,    -1,   131,    -1,
     211,    -1,   103,    -1,    97,    -1,    76,    -1,    80,    -1,
      57,    -1,   180,    -1,   141,    -1,   138,    -1,    59,    -1,
     163,    -1,   107,    -1,    58,    -1,   119,    -1,   105,    -1,
     164,    -1,   126,    -1,   117,    -1,    44,    -1,   185,    -1,
     178,    -1,   104,    -1,   186,    -1,    41,    -1,   166,    -1,
     167,    -1,    52,    -1,   118,    -1,   124,    -1,   148,    -1,
     150,    -1,   139,    -1,   146,    -1,   183,    -1,   129,    -1,
     165,    -1,   114,    -1,    65,    -1,   159,    -1,   222,    -1,
     162,    -1,    92,    -1,   170,    -1,   140,    -1,   219,    -1,
      67,    -1,   112,    -1,   176,    -1,    63,    -1,   179,    -1,
     161,    -1,   128,    -1,   136,    -1,   226,    -1,   207,    -1,
      51,    -1,   110,    -1,    93,    -1,    55,    -1,    96,    -1,
     209,    -1,   198,    -1,    95,    -1,    71,    -1,   220,    -1,
      50,    -1,   218,    -1,   100,    -1,   134,    -1,    35,    -1,
      85,    -1,   236,    -1,   230,    -1,   232,    -1,   171,    -1,
     116,    -1,   181,    -1,   306,    -1,   307,    -1,   308,    -1,
     304,    -1,   305,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    17,    -1,   309,    -1,   277,    -1,
     278,    -1,   279,    -1,   280,    -1,   281,    -1,     8,    -1,
     451,    -1,    87,   171,     3,    -1,    87,   171,   132,   236,
       3,    -1,    87,   116,     3,    -1,    87,   116,   132,   236,
       3,    -1,   452,    -1,    57,     3,   306,   307,    -1,    57,
       3,   306,   453,   307,    -1,   454,    -1,   453,   308,   454,
      -1,     5,    -1,     4,    -1,     7,    -1,   162,    -1,     6,
      -1,     3,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   393,   393,   394,   399,   406,   407,   408,   426,   434,
     442,   448,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     479,   479,   488,   488,   490,   490,   492,   492,   496,   497,
     498,   499,   500,   503,   504,   507,   508,   511,   512,   515,
     515,   516,   516,   517,   517,   525,   525,   533,   533,   544,
     548,   549,   550,   551,   552,   553,   554,   555,   559,   559,
     561,   561,   563,   563,   566,   566,   568,   568,   570,   570,
     572,   572,   574,   574,   576,   576,   579,   579,   581,   581,
     583,   583,   585,   585,   587,   587,   589,   589,   591,   591,
     593,   593,   596,   596,   598,   598,   600,   600,   604,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   639,   640,   641,   642,   643,   644,   645,   646,
     648,   649,   651,   652,   653,   655,   656,   657,   658,   665,
     672,   679,   683,   687,   693,   694,   695,   698,   704,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   722,   724,
     726,   728,   732,   740,   751,   752,   755,   756,   759,   767,
     775,   786,   796,   797,   811,   812,   813,   814,   817,   824,
     832,   833,   834,   837,   838,   841,   842,   846,   847,   850,
     852,   856,   857,   860,   862,   866,   867,   870,   871,   874,
     880,   887,   896,   897,   898,   899,   902,   903,   904,   905,
     906,   909,   910,   913,   914,   917,   918,   919,   920,   921,
     922,   923,   924,   925,   928,   929,   930,   938,   944,   945,
     946,   949,   950,   953,   954,   958,   965,   966,   967,   970,
     971,   975,   977,   979,   981,   983,   987,   988,   989,   992,
     993,   996,   997,  1000,  1001,  1002,  1005,  1006,  1009,  1010,
    1014,  1016,  1018,  1020,  1023,  1024,  1027,  1028,  1031,  1035,
    1045,  1053,  1054,  1055,  1056,  1060,  1064,  1066,  1070,  1070,
    1072,  1077,  1084,  1091,  1101,  1108,  1115,  1125,  1133,  1143,
    1151,  1160,  1169,  1179,  1187,  1196,  1205,  1215,  1224,  1236,
    1241,  1246,  1252,  1259,  1266,  1273,  1283,  1290,  1299,  1306,
    1312,  1320,  1326,  1334,  1335,  1336,  1337,  1338,  1342,  1349,
    1358,  1365,  1371,  1382,  1385,  1391,  1397,  1404,  1410,  1417,
    1423,  1429,  1435,  1441,  1447,  1453,  1459,  1465,  1471,  1477,
    1483,  1489,  1495,  1501,  1509,  1510,  1511,  1514,  1522,  1528,
    1541,  1542,  1545,  1546,  1547,  1548,  1549,  1552,  1552,  1555,
    1556,  1559,  1569,  1582,  1583,  1583,  1586,  1587,  1588,  1589,
    1592,  1596,  1597,  1598,  1599,  1605,  1608,  1614,  1619,  1625,
    1633,  1642,  1643,  1644,  1648,  1659,  1671,  1682,  1697,  1702,
    1706,  1707,  1711,  1713,  1715,  1717,  1721,  1722,  1728,  1732,
    1734,  1736,  1738,  1740,  1745,  1749,  1750,  1754,  1763,  1773,
    1777,  1778,  1779,  1780,  1781,  1782,  1784,  1788,  1789,  1792,
    1807,  1814,  1829,  1842,  1857,  1870,  1871,  1872,  1875,  1876,
    1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,  1889,
    1891,  1893,  1895,  1897,  1901,  1902,  1905,  1906,  1909,  1910,
    1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,  1928,  1929,  1930,  1933,  1934,
    1937,  1937,  1947,  1948,  1949,  1950,  1951,  1952,  1953,  1954,
    1955,  1956,  1957,  1958,  1965,  1966,  1967,  1968,  1969,  1970,
    1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,  1980,
    1981,  1982,  1983,  1984,  1985,  1988,  1989,  1990,  1993,  1994,
    1997,  1998,  1999,  2002,  2003,  2004,  2008,  2009,  2010,  2011,
    2012,  2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,
    2022,  2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,
    2032,  2033,  2034,  2035,  2036,  2037,  2038,  2039,  2042,  2043,
    2046,  2059,  2060,  2061,  2065,  2068,  2069,  2070,  2071,  2071,
    2073,  2074,  2082,  2086,  2092,  2098,  2105,  2112,  2118,  2124,
    2131,  2140,  2141,  2144,  2145,  2148,  2149,  2150,  2151,  2154,
    2155,  2156,  2157,  2158,  2159,  2160,  2161,  2162,  2163,  2170,
    2171,  2172,  2173,  2174,  2175,  2176,  2177,  2180,  2181,  2182,
    2182,  2182,  2183,  2183,  2183,  2183,  2183,  2183,  2184,  2184,
    2184,  2184,  2184,  2184,  2184,  2184,  2184,  2185,  2185,  2185,
    2185,  2185,  2185,  2185,  2186,  2186,  2186,  2186,  2187,  2187,
    2187,  2187,  2187,  2187,  2187,  2187,  2187,  2187,  2187,  2187,
    2188,  2188,  2188,  2188,  2189,  2189,  2189,  2189,  2189,  2189,
    2189,  2189,  2190,  2190,  2190,  2190,  2190,  2190,  2190,  2190,
    2190,  2191,  2191,  2191,  2191,  2191,  2191,  2191,  2191,  2192,
    2192,  2192,  2193,  2193,  2193,  2193,  2193,  2193,  2193,  2193,
    2194,  2194,  2194,  2194,  2194,  2194,  2194,  2195,  2195,  2195,
    2195,  2195,  2195,  2195,  2196,  2196,  2196,  2196,  2197,  2197,
    2197,  2197,  2197,  2197,  2197,  2197,  2197,  2197,  2197,  2197,
    2198,  2198,  2198,  2198,  2198,  2199,  2206,  2210,  2216,  2222,
    2228,  2240,  2244,  2250,  2258,  2259,  2262,  2263,  2264,  2265,
    2266,  2267,  2268
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
  "VIRTUAL", "BEGINWORK", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH",
  "BIGINT", "BIT", "CALL", "CLOSE", "CURSOR", "CONSTRAINT",
  "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CHANGE", "CROSS", "CASE",
  "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE",
  "COLUMN", "CONCURRENTLY", "DATABASE", "DECLARE", "DEFERRABLE",
  "DEFERRED", "DISABLE", "DO", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ELSEIF", "ENABLE", "ESCAPED", "EXCEPT", "ENUM",
  "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN", "FETCH", "FIRST", "FOREACH",
  "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL", "FULLTEXT", "FUNCTION",
  "FOR", "GROUP", "HANDLER", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INOUT",
  "INITIALLY", "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT",
  "INTERSECT", "INTO", "INT", "INTERVAL", "ITERATE", "JOIN", "KEY",
  "LEAVE", "LOOP", "LESS", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING",
  "LIMIT", "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE",
  "MEDIUMTEXT", "MINUS", "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL",
  "NODE", "NO_ACTION", "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER",
  "ONDUPLICATE", "PARTIAL", "PRIMARY", "PROCEDURE", "QUICK", "RANGE",
  "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT",
  "RETURN", "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "SIGNAL", "UNTIL",
  "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE", "SKIP", "SOME",
  "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN",
  "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT", "TO", "TEMPORARY",
  "GLOBAL", "PRESERVE", "TEXT", "THAN", "TIMESTAMP", "TABLE", "THEN",
  "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNION", "UNIQUE", "UUID", "VIEW", "USING", "USE", "HASH", "VALIDATE",
  "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WHILE", "WITH",
  "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FDATEDIFF", "FYEAR", "FMONTH", "FDAY",
  "FHOUR", "FMINUTE", "FSECOND", "FNOW", "FLEFT", "FRIGHT", "FLPAD",
  "FRPAD", "FREVERSE", "FREPEAT", "FINSTR", "FLOCATE", "FABS", "FCEIL",
  "FFLOOR", "FROUND", "FPOWER", "FSQRT", "FMOD", "FRAND", "FLOG", "FLOG10",
  "FSIGN", "FPI", "FCAST", "FCONVERT", "FNULLIF", "FIFNULL", "FIF",
  "UNKNOWN", "FGROUP_CONCAT", "SEPARATOR", "FCOUNT", "FSUM", "FAVG",
  "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE",
  "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "FROW_NUMBER", "FRANK",
  "FDENSE_RANK", "FLEAD", "FLAG", "FNTILE", "FPERCENT_RANK", "FCUME_DIST",
  "OVER", "PARTITION", "';'", "'.'", "'('", "')'", "','", "'='", "$accept",
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
  "drop_procedure_stmt", "call_stmt", "call_arg_list", "call_arg", 0
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
     546,   547,   548,   549,    59,    46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   310,   311,   311,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     313,   312,   314,   312,   315,   312,   316,   312,   312,   312,
     312,   312,   312,   312,   312,   317,   317,   318,   318,   319,
     312,   320,   312,   321,   312,   322,   312,   323,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   324,   312,
     325,   312,   326,   312,   327,   312,   328,   312,   329,   312,
     330,   312,   331,   312,   332,   312,   333,   312,   334,   312,
     335,   312,   336,   312,   337,   312,   338,   312,   339,   312,
     340,   312,   341,   312,   342,   312,   343,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   344,   344,   344,   312,   312,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   312,   312,
     312,   312,   346,   346,   312,   312,   312,   312,   312,   312,
     312,   347,   348,   348,   349,   349,   350,   350,   351,   351,
     352,   352,   352,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   360,   360,   361,
     361,   361,   362,   362,   362,   362,   363,   363,   363,   363,
     363,   364,   364,   365,   365,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   367,   367,   367,   368,   369,   369,
     369,   370,   370,   371,   371,   372,   372,   372,   372,   373,
     373,   374,   374,   374,   374,   374,   375,   375,   375,   376,
     376,   377,   377,   378,   378,   378,   379,   379,   380,   380,
     381,   381,   381,   381,   382,   382,   383,   383,   384,   347,
     385,   386,   386,   386,   386,   385,   387,   387,   388,   388,
     385,   347,   389,   389,   347,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   391,
     391,   391,   392,   392,   392,   392,   347,   393,   347,   394,
     394,   395,   395,   396,   396,   396,   396,   396,   347,   397,
     347,   398,   398,   347,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   400,   400,   400,   347,   401,   401,
     402,   402,   403,   403,   403,   403,   403,   404,   404,   405,
     405,   406,   406,   407,   408,   407,   409,   409,   409,   409,
     401,   410,   410,   410,   410,   347,   411,   411,   411,   347,
     412,   413,   413,   413,   414,   414,   414,   414,   347,   347,
     415,   415,   347,   347,   347,   347,   416,   416,   347,   417,
     417,   417,   417,   417,   347,   418,   418,   347,   419,   419,
     420,   420,   420,   420,   420,   420,   420,   421,   421,   422,
     422,   419,   419,   419,   419,   423,   423,   423,   424,   424,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   426,   426,   427,   427,   428,   428,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   430,   430,
     431,   425,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   433,   433,   433,   434,   434,
     435,   435,   435,   436,   436,   436,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   438,   438,
     439,   440,   440,   440,   347,   441,   441,   441,   442,   442,
     443,   443,   347,   444,   444,   444,   444,   444,   444,   444,
     444,   445,   445,   446,   446,   447,   447,   447,   447,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   449,
     449,   449,   449,   449,   449,   449,   449,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   347,   451,   451,   451,
     451,   347,   452,   452,   453,   453,   454,   454,   454,   454,
     454,   454,   454
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
       1,     1,     1,     1,     1,     1,     1,     3,     5,     3,
       5,     1,     4,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   445,   294,     0,   372,     0,     0,
     372,     0,   235,     0,   372,     0,     0,     0,   191,   289,
     301,   304,   326,   333,   338,   340,   343,   367,   395,   399,
     409,   418,   424,   427,   574,   582,   736,   741,     0,     0,
       0,     0,   416,     0,     0,     0,     0,   416,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   378,
       0,     0,   378,     0,     0,   577,   578,     0,     0,     0,
       0,   425,     0,     1,     2,   328,     0,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
       0,   416,   298,     0,   293,   291,   292,     0,   412,     0,
     739,     0,   327,   737,     0,   414,     0,   302,     0,   374,
     375,   376,   377,   373,     0,   339,     0,     0,     0,     0,
     575,   576,     0,     4,     7,     8,    10,     9,     6,     0,
       0,     0,   246,   236,   188,     0,   189,   190,   237,   238,
     239,    11,   241,   243,   242,   240,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   192,   244,   329,   376,   373,   250,     0,     0,
     251,   253,   254,   260,   426,     3,     0,     0,   334,   335,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   751,
     747,   746,   750,   748,   752,   749,   742,     0,   744,     0,
       0,   417,   410,     0,   591,     0,     0,     0,     0,   591,
     411,     0,     0,     0,     0,     0,   296,   194,     0,     0,
       0,     0,     0,     0,     0,     0,   379,     0,   379,   581,
     580,   579,     0,    47,     0,    28,    27,    18,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
       0,     0,     0,   283,     0,     0,     0,     0,   268,   267,
     271,   275,   272,     0,     0,   269,   259,     0,   337,   336,
       0,     0,     0,     0,     0,   357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,   743,     0,     0,     0,
     557,   566,   525,   525,   525,   525,   525,   550,   525,   547,
       0,   525,   525,   525,   528,   559,   528,   558,   525,   525,
     525,     0,   528,   525,   528,   549,   556,   548,   567,     0,
       0,   551,   419,     0,     0,     0,     0,     0,   592,   593,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   571,
     299,     0,   215,     0,   194,   298,   413,   740,   738,   415,
     303,     0,     0,     0,   408,     0,     0,     5,    45,    48,
       0,    42,     0,     0,   180,     0,     0,     0,     0,   166,
     164,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
       0,     0,     0,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   158,   159,   160,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    21,    22,    20,
     186,   184,    40,     0,    38,   155,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    29,    23,    24,    26,
      12,    13,    14,    15,    16,    17,    25,   248,   194,   245,
     331,   330,   250,     0,     0,     0,   255,   288,   258,     0,
     194,   252,   269,   269,     0,   262,     0,   270,     0,   257,
       0,     0,     0,     0,   353,   350,   356,   352,   492,     0,
       0,     0,     0,   354,   745,   591,   591,     0,   554,   530,
     536,   533,   530,   530,     0,   530,   530,   530,   529,   533,
     533,   530,   530,   530,     0,   533,   530,   533,     0,     0,
       0,     0,     0,   595,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   572,
     573,     0,   490,   442,   260,   195,     0,   222,   194,   295,
     297,     0,   370,   381,     0,     0,   369,   370,     0,   370,
       0,    59,     0,   178,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,   144,   145,   146,   147,
     148,   149,     0,     0,     0,     0,   125,     0,     0,     0,
     129,   130,   131,   133,     0,     0,   135,     0,   138,   139,
     140,     0,     0,     0,     0,     0,     0,    66,    60,    61,
      62,    63,    64,    65,   115,   116,   117,     0,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    39,     0,     0,   187,   185,    51,     0,
       0,    36,    32,    34,     0,   196,     0,   283,   285,   285,
     285,     0,     0,     0,   215,   273,   274,     0,     0,   276,
       0,     0,     0,     0,     0,   492,   492,     0,   364,   492,
     359,     0,     0,     0,     0,     0,   542,   552,   544,   546,
     568,     0,   545,   541,   540,   563,   562,   539,   543,   538,
       0,   560,   537,   561,     0,     0,   421,     0,   420,   596,
     598,   597,     0,   594,     0,   319,     0,     0,     0,     0,
       0,   321,     0,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,   571,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,     0,     0,     0,     0,   290,   300,
       0,     0,     0,   390,   380,     0,     0,   370,   397,   370,
     398,    46,   182,     0,   181,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    70,    72,     0,     0,     0,     0,     0,   104,
     106,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,   205,   332,   256,     0,     0,     0,     0,   404,
       0,     0,   222,   265,   263,     0,     0,   261,   277,     0,
       0,     0,     0,     0,   364,   364,   492,     0,     0,   504,
       0,   509,     0,     0,     0,     0,     0,   365,   513,   494,
       0,   511,   361,   364,   351,   358,     0,     0,   526,     0,
     531,   532,     0,     0,   533,     0,   533,   533,   555,     0,
       0,   603,   606,   605,   607,   604,   599,   600,   602,   608,
     601,     0,     0,     0,     0,     0,     0,   305,     0,     0,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,   490,   444,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   430,   490,     0,   570,   200,   200,   216,
     217,   223,   392,   391,     0,     0,   382,   387,   386,     0,
     384,   368,   396,   179,   183,     0,   110,   109,     0,   114,
       0,     0,   167,   168,   143,   121,   122,     0,     0,   126,
     127,   128,   132,   134,   136,   150,   151,   152,   153,     0,
      67,    76,    78,    74,    80,    82,    84,   118,     0,     0,
     120,   163,   207,   207,   207,    86,     0,     0,    94,     0,
       0,   102,   207,   207,    50,    54,     0,     0,    44,     0,
       0,     0,    31,     0,     0,   215,   284,     0,     0,     0,
       0,     0,     0,   400,   278,     0,   264,     0,     0,     0,
     488,     0,   355,   363,   364,   493,   366,     0,     0,     0,
       0,     0,     0,   514,   495,   496,   498,   497,   502,     0,
       0,     0,     0,   512,   510,   360,     0,     0,   609,     0,
       0,   535,   564,   569,   565,   553,     0,   422,     0,   609,
       0,     0,     0,     0,     0,   320,     0,   313,     0,     0,
       0,     0,   617,   618,   619,   621,   620,   735,   624,   625,
     626,   728,   623,   622,   723,   724,   725,   726,   727,   710,
     627,   664,   659,   609,   706,   696,   667,   699,   646,   653,
     650,   637,   689,   678,   609,   686,   704,   644,   645,   711,
     631,   638,   682,   698,   703,   700,   643,   708,   584,   642,
     662,   655,   652,   609,   697,   687,   632,   677,   716,   658,
     668,   654,   669,   657,   692,   675,   640,   609,   629,   709,
     635,   693,   649,   672,   684,   648,   609,   673,   670,   671,
     679,   691,   681,   651,   656,   676,   665,   666,   683,   715,
     688,   661,   690,   647,   717,   674,   660,   663,   702,   634,
     628,   695,   701,   639,   641,   630,   707,   685,   705,   680,
     694,   636,   633,   713,   609,   714,   712,   730,   731,   732,
     733,   734,   721,   722,   718,   719,   720,   729,   610,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
     428,   441,   449,   492,   201,   202,     0,   219,   221,     0,
       0,     0,     0,     0,   383,     0,     0,     0,     0,   113,
     170,   171,   172,   173,   176,   175,   177,   169,   174,     0,
       0,     0,   207,   207,   207,   207,   207,   207,     0,     0,
       0,   211,   211,   211,   207,     0,     0,     0,   207,     0,
       0,     0,   207,   211,   211,    52,    56,    37,    33,    35,
     200,   203,   206,   222,   286,     0,     0,     0,   405,   406,
       0,     0,   344,   466,     0,   464,     0,   345,     0,   362,
       0,     0,     0,     0,     0,     0,   516,     0,     0,     0,
       0,     0,     0,   609,     0,   527,   534,     0,   609,     0,
     309,   322,   323,   324,     0,     0,     0,     0,   306,   583,
       0,     0,     0,     0,     0,     0,     0,     0,   315,     0,
       0,     0,   430,     0,     0,     0,     0,   456,     0,     0,
       0,   453,     0,   452,     0,   462,     0,     0,     0,   491,
     200,   218,   225,   224,   371,   394,   393,   389,   388,     0,
     111,   108,   123,   124,   154,   211,   211,   211,   211,   211,
     211,   156,     0,   119,     0,     0,     0,     0,     0,   211,
      88,     0,     0,   211,    96,     0,     0,   211,     0,     0,
     198,     0,     0,   197,   226,   282,     0,   281,   280,     0,
     279,     0,     0,     0,   349,     0,   489,   506,     0,   524,
     508,     0,     0,     0,   517,   515,   499,   500,   501,   503,
       0,   609,     0,   586,   423,     0,   588,     0,   317,   314,
       0,   611,     0,     0,     0,     0,     0,   311,     0,     0,
       0,   308,   429,   443,     0,     0,     0,     0,     0,   454,
     455,   234,   450,   432,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,   209,   208,     0,    69,
      71,    73,     0,   207,     0,     0,     0,   207,     0,     0,
       0,   105,   107,   204,   200,     0,   231,   287,   407,   347,
       0,   467,   465,     0,   522,   523,     0,     0,     0,   609,
       0,   585,   587,   325,   310,   616,   615,   612,   614,   613,
     318,   316,     0,   457,     0,     0,   463,     0,   431,     0,
       0,     0,     0,   385,    77,    79,    75,    81,    83,    85,
     157,     0,   200,   212,    87,   211,    90,    92,    95,   211,
      98,   100,   103,   199,   228,   227,     0,   193,     0,   505,
     507,   521,   518,     0,   590,   312,     0,   451,     0,   433,
     434,     0,     0,   210,   213,     0,     0,   207,   207,     0,
     207,   207,     0,     0,   232,     0,   519,   520,   589,     0,
       0,     0,     0,     0,   200,    89,   211,   211,    97,   211,
     211,   230,   229,   468,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,   470,     0,     0,     0,     0,
     470,     0,     0,    91,    93,    99,   101,   346,   469,     0,
       0,     0,   458,     0,     0,   437,   435,     0,   484,     0,
       0,     0,   470,   470,     0,     0,   436,     0,   485,   348,
       0,   481,   483,   482,     0,     0,     0,   460,   459,     0,
     438,   486,   487,   471,   479,   473,     0,   475,   480,   477,
       0,   470,     0,   474,   472,   478,   476,   461,     0,     0,
       0,     0,     0,     0,     0,   439,   440
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   488,   784,   948,   949,   947,   489,   490,   774,
     943,   775,   944,   497,  1112,  1113,  1114,  1384,  1382,  1383,
    1385,  1386,  1387,  1394,  1613,  1707,  1708,  1398,  1617,  1710,
    1711,  1402,  1122,  1123,   503,   902,   290,    17,    18,   472,
     952,  1411,  1357,  1533,  1135,  1391,  1607,  1516,  1673,   687,
    1059,  1060,   878,  1626,  1687,  1346,    67,   212,   213,   378,
     219,   220,   221,   397,   222,   394,   618,   395,   614,   967,
     968,   606,   956,  1415,   223,    19,    52,    97,   266,    20,
      21,   850,   851,    22,    23,   601,    75,    24,    25,    26,
     992,    27,   883,    59,   114,   483,   694,   887,  1366,  1069,
     692,    28,    29,    70,   610,    30,    81,    31,    32,    33,
    1350,  1764,  1765,    51,   872,   873,  1426,  1424,  1734,  1757,
    1151,   874,   808,   638,   649,   816,   817,   452,   821,   683,
     684,    34,    65,    66,    35,   457,   458,   459,  1021,  1035,
    1328,    36,    37,   247,   248
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1361
static const yytype_int16 yypact[] =
{
    8130,   -75,   -58,   180,   338, -1361,   465, -1361,    65,   201,
   -1361,    68, -1361,   206,    17,   389,   442,   126, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,   445,   450,
     166,   291,   347,   479,   514,    92,   544,   347, -1361,   301,
     422,   355,   437,    77,    82,   559,    90,   188,   217,   488,
     571,   576,   488,   430,    79,   280, -1361,  5344,   590,   502,
      22, -1361,   596, -1361,  8130,    33,   335,   292,    31,   284,
     366,   601,   580,   310,   463,   339,   395,   328,   635, -1361,
     313,   347,   345,   651, -1361, -1361, -1361,   -85, -1361,   429,
   -1361,   433, -1361, -1361,   438, -1361,   443, -1361,   446, -1361,
   -1361, -1361, -1361, -1361,   686, -1361,   490,   709,  7011,  7011,
   -1361, -1361,   706,   202, -1361, -1361, -1361, -1361,   696,  7011,
    7011,  7011, -1361, -1361, -1361,  5811, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361,   417,   421,   423,   428,
     458,   484,   529,   537,   578,   598,   606,   629,   643,   680,
     710,   712,   725,   734,   744,   776,   786,   788,   790,   800,
     809,   817,   832,   846,   854,   862,   868,   873,   877,   888,
     889,   892,   899,   904,   906,   909,   913,   919,   921,   923,
     925,   928,   935,   943,   945,   949,   950,   951,   952,   953,
     955,   956,   958,   966,   967,   970,   972,   973,   975,   980,
    7011,  6660,   -56, -1361,   440,    23,    24,    13,    16,  -113,
     954, -1361, -1361,   823, -1361, -1361,   775,   914, -1361, -1361,
     485,   133,   676,   512,   977,   350,   513,  1164,  1250, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361,   269, -1361,  1257,
    1285, -1361, -1361,  8227,   380,  1288,  1126,  1059,  1294,   380,
   -1361,  1133,   344,  1064,  1298,  1279, -1361,   155,  -139,    22,
    1303,  1304,  1305,  1306,  1307,  1309,  -138,  1313,  -118,  8613,
    8613, -1361,  1314,  7011,  7011,  1348,  1348, -1361,  7011,   847,
     322, -1361,  7011,  5504,  7011,  7011,  7011,  7011,  7011,  7011,
    7011,  7011,  7011,  1011,  7011,  7011,  7011,  7011,  7011,  7011,
    7011,  7011,  7011,  7011,  7011,  7011,  7011,  7011,  7011,  1012,
    7011,  7011,  7011,  1014,  7011,  7011,  7011,  7011,  7011,  7011,
    5957,  7011,  7011,  7011,  7011,  7011,  7011,  7011,  7011,  7011,
    7011,  1018,  1020,  1021,  1022,  7011,  7011,  1025,  1030,  1031,
    7011,  7011,  1334,  1035,  1036,  5060, -1361,  7011,  7011,  7011,
    7011,  7011,    12,  1038,   667,  7011,  5651,  7011,  7011,  7011,
    7011,  7011,  7011,  7011,  7011,  7011,  7011,  1342, -1361,    22,
    7011,  1350,  1376,   -46,  1073,   318,  1389,    22, -1361, -1361,
   -1361,    14, -1361,    22,  1268,  1255, -1361,  1419, -1361, -1361,
    1421,  1422,  1423,  1427,  1430, -1361,  1431,  1437,  1438,  8227,
    1439,  1240,  1441,  1444,  1445, -1361, -1361,   402,  1143,  1144,
   -1361, -1361,  1147,  1147,  1147,  1147,  1147, -1361,  1147, -1361,
    1148,  1147,  1147,  1147,  1403, -1361,  1403, -1361,  1147,  1147,
    1147,  1151,  1403,  1147,  1403, -1361, -1361, -1361, -1361,  1152,
    1153, -1361,   367,  8227,  1461,  1464,  1468,  1168,  1171, -1361,
    -134,  1477,  1478,  1317,  1177,  1485,  1323,  1254,  1489,    34,
   -1361,  7011,  1326,    22,  -100,   345, -1361, -1361, -1361, -1361,
   -1361,  1491,  1492,   246, -1361,  1491,   247, -1361,   969, -1361,
    1192,  8613,  5449,   324, -1361,  7011,  7011,  1300,   474, -1361,
   -1361, -1361,  5424,  6118,  1033,  1336,  1638,  5471,  5679,  5827,
    5977,  6134,  6277, -1361,  1683,  1945,  1990,  2252,  6322,  2297,
    2559,  2604,  6424,  6445,  6735,   509,  2866,  7033,  2911, -1361,
    7072,  7093,  7114, -1361,  8515,  3173,  3218,  3480,  3525,  5016,
    1194,  7135,  7156,  7177,  7198,  7308,  7331,  7362,  7383,  3787,
    3832,  4094, -1361, -1361, -1361, -1361,  7404,  4139,  1200,  1203,
    1207,   731,   773,  1205,  1208,  1215, -1361,  1375,  1657,   867,
    5367,  5367, -1361,    41, -1361, -1361,  1319,  7011,  7011,  1216,
    7011,  8567,  1220,  1225,  1226,  7011,  1884,  1954,   797,   947,
     669,   669,  1503,  1503,  1503,  1503, -1361, -1361,  -100, -1361,
   -1361,  1228,   415,  1394,  1398,  1401, -1361, -1361, -1361,    26,
     123,   954,  1255,  1255,  1409,  1388,    22, -1361,  1416, -1361,
      -9,  8227,  8227,  1553, -1361, -1361, -1361, -1361, -1361,  8227,
    1555,  1357,  1359, -1361, -1361,   380,   380,  1558, -1361, -1361,
   -1361, -1361, -1361, -1361,  1560, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361,  1560, -1361, -1361, -1361,  1561,  1562,
    1406,  1259,  7011, -1361,  8227,  8227,  8227,  1390,   380,  1345,
      52,  -133,  1413,  1577,   507,  -128,  1580,  1581,  1420, -1361,
   -1361,  1582,   957, -1361,   823,  8613,  1536,  1447,  -100, -1361,
   -1361,  1573,   -93, -1361,   356,  1308, -1361,   -93,  1308,  1448,
    7011, -1361,  7011, -1361,  7011,  8451,  6466,  1310,  7011,  7011,
   -1361,  7011,  8212,  1475,  1475,  7011, -1361, -1361, -1361, -1361,
   -1361, -1361,  7011,  7011,  7011,  7011, -1361,  7011,  7011,  7011,
   -1361, -1361, -1361, -1361,  7011,  7011, -1361,  7011, -1361, -1361,
   -1361,  8227,  8227,  7011,  7011,  7011,  1609, -1361,  1321,  1322,
    1324,  1330,  1332,  1333, -1361, -1361, -1361,  7011,  7011,  7011,
   -1361,  7011,  1339,  1340,  1349,  1337,  1610,  1372,  1614,  1412,
    1425,  1426, -1361, -1361,  7011,  1300,  5367,  5367,  1428,  8590,
    7011, -1361, -1361, -1361,  1300,  1507,  1633,   -46,  1583,  1583,
    1583,  7011,  1724,  1726,  1326, -1361, -1361,    22,  7011,   -65,
      22,  1433,  1593,  1597,  1434, -1361, -1361,  8227,  6560, -1361,
   -1361,  1738,  1744,  1442,  1443,   365,   -80,   574,   -80,   -80,
   -1361,   400,   -80,   -80,   -80,   574,   574,   -80,   -80,   -80,
     412,   574,   -80,   574,  1449,  1450,  1681,  7011,  8613, -1361,
   -1361, -1361,   342, -1361,  1446, -1361,  1454,  1455,  1457,  1458,
     418, -1361,  1527,    52,  1751,  -120,  1706, -1361,  1541,    52,
    -117,  1600,  1768,     8,  1769,  1472,  1634,     2,  1473,  1476,
    1646,  1481,   425, -1361,  1785,  1300,   558,  7011, -1361, -1361,
    6261,  1650,  1788, -1361, -1361,  1789,  6565,   -89, -1361,   -89,
   -1361, -1361,  8613,  8472, -1361,  7011, -1361,    96,   826,  7425,
    7011,  7011,  1486,  1488,  7446,  7467,  7488,  4401,  4446,  7509,
    7530,  7551,  7572,  7598,  7621,  1490,  1493,  7652,  7673,  4708,
    1494,  1496,  1500,  1501,  1502,  1506,  1510,   895,  4753,  7694,
    7715, -1361, -1361, -1361,  1511,   461,  1513,   467,  1518, -1361,
   -1361,  1519,  1522,  7011,  1300,  7011,  1578,  1300,  1300,  1300,
    1526,  1747,  1672, -1361, -1361,  1670,  1532,  1533,  1534,  8613,
    1821,    28,  1447, -1361,  8613,  7011,  1537, -1361, -1361,   -65,
    7011,  1539,  1542,  1852,  6560,  6560, -1361,  1699,  1859,  1557,
    1559,  1563,  1825,  1867,  1565,  1868,    66, -1361, -1361, -1361,
    1733,  1734, -1361,  6560, -1361, -1361,  1694,   542, -1361,  1871,
   -1361, -1361,  1679,  1882, -1361,  1883, -1361, -1361, -1361,  1584,
    7736, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361,   551,    52,  1888,  1889,  1890,  1892, -1361,  1897,  1596,
     470,  1613,  1691,    52, -1361,  1104,  1615,   473,  1696,    52,
    1919,   160,   957, -1361,    -8,  7011,  1617,  1618,  1620,  1927,
    1927,  1625,  1852,     0,   957,  8227, -1361,     6,    53,  1624,
   -1361,   918, -1361,  8613,  1717,  1915, -1361, -1361,  8613,   497,
   -1361, -1361, -1361, -1361,  8613,  7011, -1361, -1361,  7011, -1361,
    7757,  8131, -1361, -1361, -1361, -1361, -1361,  7011,  7011, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,  7011,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,  7011,  7011,
   -1361, -1361,  1636,  1636,  1636, -1361,  1639,   802, -1361,  1640,
     804, -1361,  1636,  1636, -1361, -1361,  1644,  1645,  1578,  1655,
    1678,  1680, -1361,  7011,  7011,  1326, -1361,  1940,  1940,  1940,
    7011,  7011,  1950, -1361,  8613,  1927, -1361,  7778,  1983,  1985,
   -1361,   504, -1361, -1361,  6560, -1361, -1361,  1984,  7011,  1987,
    1949,   -14,  7011, -1361, -1361, -1361, -1361, -1361, -1361,  1687,
    1688,  1701,  7011, -1361, -1361, -1361,   342,  1972, -1361,  1727,
    2032, -1361,   574, -1361,   574,   574,  7011, -1361,  1989, -1361,
     522,  1732,  1737,  1739,  1740, -1361,    52, -1361,    52,  1741,
     524,  1411, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,    52,
   -1361,  1748,   592,  1749,  1816,    52,   594,  1750,  1917,  1918,
    1753,  7799,  1983,  1927,  1927, -1361,   619,   693,  1985,   695,
     161, -1361, -1361, -1361, -1361, -1361,  2058, -1361, -1361,   558,
    7011,  7011,  1491,  6636, -1361,  6707,  1756,  7820,  7841, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,  7862,
    7888,  7911,  1636,  1636,  1636,  1636,  1636,  1636,   940,  7942,
    2011,  1900,  1900,  1900,  1636,  1758,  1761,  1763,  1636,  1765,
    1766,  1771,  1636,  1900,  1900, -1361, -1361, -1361, -1361, -1361,
    8493,   141,  8613,  1447, -1361,   697,   699,   702,  8613,  8613,
    2052,   705,  2061, -1361,   707, -1361,   715, -1361,  2078, -1361,
     718,  7963,   720,  1779,  1780,  1953, -1361,  7984,  1782,  1787,
    1790,  8005,   573, -1361,  1718, -1361, -1361,  8026, -1361,  2025,
   -1361, -1361, -1361, -1361,  2092,   722,   726,    52, -1361, -1361,
    2332,  2639,  2946,  3253,  3560,  3867,   728,    52, -1361,    52,
    1792,   757,     0,  7011,  1793,  1794,  1852, -1361,   763,   768,
     771, -1361,  2099, -1361,   777, -1361,   134,  2100,  2054,   560,
      53, -1361,  8613,  8613,  1796, -1361,  8613, -1361,  8613,  6565,
   -1361, -1361, -1361, -1361, -1361,  1900,  1900,  1900,  1900,  1900,
    1900, -1361,  7011, -1361,  2104,  2056,  1802,  1806,  1807,  1900,
   -1361,  1813,  1814,  1900, -1361,  1817,  1822,  1900,  1819,  1824,
   -1361,  1941,  7011, -1361,  2016, -1361,  2133, -1361, -1361,  7011,
   -1361,  1920,  1964,  2143, -1361,  2144, -1361, -1361,  2145,   767,
   -1361,  2147,  7011,  7011, -1361, -1361, -1361, -1361, -1361, -1361,
    2106, -1361,  4174, -1361, -1361,  4481, -1361,  1841, -1361, -1361,
     779, -1361,  2096,  2059,  2037,  2028,  1943, -1361,   782,   791,
      52, -1361,   161, -1361,  8047,  1983,  1985,   794,  1996, -1361,
   -1361, -1361, -1361, -1361,  2171,     1,   -45, -1361,   796,  1870,
    1872,  1873,  1874,  1875,  1876,  8068, -1361,  1877,  2175, -1361,
   -1361, -1361,  1886,  1636,  1891,  1893,  1887,  1636,  1894,  1896,
    1902, -1361, -1361, -1361,  8493,   -51,  2063, -1361,  8613, -1361,
    2204, -1361, -1361,  1905, -1361, -1361,  1906,  8089,  8110, -1361,
    4788, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361,   810, -1361,   818,   828, -1361,  2211, -1361,  2212,
    2213,  1911,  1912, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361,  2216,    53,  1913, -1361,  1900, -1361, -1361, -1361,  1900,
   -1361, -1361, -1361, -1361,  2030,  2034,  1927, -1361,  1914, -1361,
   -1361,  1093, -1361,  5095, -1361, -1361,  2051, -1361,   837, -1361,
   -1361,  2225,  2226, -1361, -1361,  2227,  1924,  1636,  1636,  1926,
    1636,  1636,  2088,  2089,  1931,  2237, -1361, -1361, -1361,  2239,
    2243,  2237,  1942,  1951,    53, -1361,  1900,  1900, -1361,  1900,
    1900, -1361, -1361, -1361,   839,   844,  1944,   850,  1963,  2069,
   -1361,  1976,  1977,  1978,  1979, -1361,  2245,  2257,  2237,  2237,
   -1361,  2098,  2283, -1361, -1361, -1361, -1361,   299, -1361,  1986,
     857,   865,   403,  2286,   870, -1361, -1361,   -21,  2163,   272,
     -36,  2237, -1361, -1361,  2214,  2066, -1361,  2098, -1361, -1361,
     337, -1361, -1361, -1361,    -3,   282,   874,   403,   403,  2151,
   -1361, -1361, -1361, -1361, -1361, -1361,   296, -1361, -1361, -1361,
     352, -1361,  2087, -1361, -1361, -1361, -1361,   403,    45,  2130,
    2131,  2139,  2140,  2296,  2309, -1361, -1361
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1361,  2254,   -67, -1361, -1361, -1361, -1361,  -633, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
   -1361, -1361, -1361, -1361, -1361,  1627,  2057, -1361,  -209,  -408,
   -1361, -1361, -1053, -1361, -1361, -1023, -1361, -1360, -1361,  -777,
   -1361,   984,  -956, -1361, -1361, -1047, -1361, -1361,  1965,  -207,
     -84,  1960,  -380,  1667, -1361, -1361,   575, -1361, -1361, -1361,
    1384,  1567,   396,    54, -1361, -1361, -1361,  2262,  1895, -1361,
   -1361,  -852, -1361, -1361, -1361, -1361, -1361, -1361, -1361, -1361,
    -953, -1361,  -546,   384,  2299,  2084, -1361,  1665, -1361,   866,
    -483, -1361, -1361, -1361, -1361, -1361,    84, -1361, -1361, -1361,
     894, -1361,   587, -1361,  1327,  1320, -1274, -1300, -1141, -1161,
   -1044, -1361,  -794,   278,   207,   120,  -626,  -340,  1714,  -859,
   -1361, -1361, -1361,  2249, -1361,  -245, -1361,  1707,  1201,  -902,
   -1361, -1361, -1361, -1361,  1961
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -572
static const yytype_int16 yytable[] =
{
     211,  1030,   697,  1347,  1043,  1358,  1143,  1037,  1349,   384,
     383,   974,   975,   615,   464,   993,   356,   962,   572,   217,
    -401,  1152,  1153,   825,   826,   217,  -403,  -402,   269,   831,
     573,   833,  1517,  1518,   239,   240,   241,   242,   243,   244,
    1175,  -571,  1478,  1528,  1529,  1354,   791,   772,  1141,  1809,
    1784,   279,   280,  1434,   377,   845,  1778,   379,   801,  1337,
    1793,   481,   285,   286,   287,   603,   689,   891,   289,   628,
    1164,  1165,  1166,  1167,  1484,   881,    63,   226,   227,   881,
      98,   485,   120,   473,   604,   100,   386,  1659,   669,   852,
    1392,  1393,  1354,   103,   858,    84,   228,  1355,  1421,  1403,
    1404,   965,  1032,   802,  1338,  1038,   357,   358,   359,   360,
     361,   362,   363,   663,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,  1168,  1661,   471,
     679,    88,  1201,  1047,   385,    38,   402,  1000,   679,  1593,
    1684,   941,  1048,   355,  1355,  1599,  1600,  1601,  1602,  1603,
    1604,   888,    39,   890,  1594,  1001,  1435,   966,  1794,  1612,
     612,   803,  1339,  1616,   679,  1685,    85,  1620,   482,   270,
    1190,   121,   670,   853,   574,   264,  1795,   605,   859,  1662,
    1785,  1200,  1154,    40,   680,   474,  1033,  1332,   482,  1039,
     785,   105,   680,   245,  1351,   387,  1796,   613,  1810,  1486,
    -571,  1429,   794,   773,  1779,  1436,   403,  1660,   387,    99,
     804,  1340,   229,  1075,   101,   882,    12,   491,   680,  1070,
     107,   492,   104,   270,    86,   498,   502,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   799,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   380,   530,   531,   532,    64,   534,   535,   536,
     537,   538,   539,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   696,    60,  1444,   699,   556,   557,
     879,   805,   806,   561,   562,  1654,   575,  1449,   707,   809,
     567,   568,   569,   570,   571,   598,  1479,  1480,   581,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
    1126,  1356,  1655,   211,  1042,  1706,   261,  1767,   382,  1709,
     106,  1460,   218,  -401,   839,   840,   841,  1487,   218,  -403,
    -402,   792,  1461,  1142,   846,   847,   848,   849,   246,   681,
     682,  1071,   256,  1072,  1455,  1797,  1456,   466,    41,   108,
    1488,  1462,   471,   409,  1169,  1170,  1171,  1530,  1413,  1505,
    1506,  1507,  1508,  1509,  1510,  1463,  1741,  1742,   230,  1743,
    1744,  1519,  1172,  1531,  1464,  1523,  1768,  -298,  1182,  1527,
    1184,  1185,  1334,   453,   471,   660,  1781,   262,  1803,   688,
     813,   814,    71,  1011,    62,   787,   454,  1012,    69,   231,
     249,   915,   916,  1076,   685,   239,   240,   241,   242,   243,
     244,    61,  1465,    42,   232,  1791,    68,   963,   356,    43,
     969,  1774,   233,   410,   494,   495,   703,   704,   705,   706,
      74,   793,  1587,   234,   661,  1013,   712,  1597,  1014,   118,
      92,  1782,    73,  1798,  1805,   263,    12,    12,    76,  1532,
     119,  1769,  1015,    77,    44,   250,   377,  1534,  1804,   662,
     265,  1799,  1792,  -298,    72,  1770,  1335,   976,  1783,    45,
    1016,   257,    78,   695,   698,    79,   467,  1466,  1017,    80,
    1768,  1800,    82,  1471,   357,   358,   359,   360,   361,   362,
     363,   235,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,    89,   455,   282,   283,    46,
     776,   777,   236,   779,  1806,   405,   411,    83,   355,   357,
     358,   359,   360,   361,   362,   363,    47,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
      53,  1562,    48,    49,   456,   400,  1565,    87,   856,  1018,
      93,  1019,   496,    90,   496,  1769,   857,    50,   401,  1489,
     237,  1057,   102,  1058,   245,    91,   942,    94,  1020,  1770,
     109,  1683,   406,   412,   115,   950,   416,   417,   977,   116,
    1737,    54,    95,  1177,   109,   407,   413,   708,   122,  1762,
    1675,  1178,  1188,   214,  1679,   838,    55,   238,   979,   224,
    1189,   980,   251,   981,   252,  1570,   982,  1760,  1761,    96,
     110,  1787,  1788,  1583,  1560,  1578,   254,  1579,   111,  1704,
     983,   253,  1561,   112,   110,   608,   387,   984,   985,   255,
    1786,   258,   215,   113,   259,   892,    56,   893,   260,  1714,
    1807,   897,   898,   650,   899,  1002,  1003,   216,   904,   655,
     265,   657,   986,    57,   267,   905,   906,   907,   908,  1640,
     909,   910,   911,   884,   885,   271,  1056,   912,   913,   272,
     914,  1740,   998,   999,   273,    58,   917,   918,   919,   274,
     577,   578,   275,   579,  1726,  1727,   580,  1729,  1730,   276,
     927,   928,   929,   277,   930,   372,   373,   374,   375,   376,
     988,   639,   640,   641,   642,   284,   643,  1004,  1005,   645,
     646,   647,   278,   946,    63,  1353,   651,   652,   653,  1006,
    1005,   656,   989,   291,   959,  1027,  1028,   292,  1652,   293,
     990,   964,  1053,  1054,   294,  1127,   404,  1693,  1129,  1130,
    1131,   357,   358,   359,   360,   361,   362,   363,   381,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   818,   819,   295,   822,   823,   824,  1116,  1117,
    1010,   827,   828,   829,  1119,  1120,   832,  1197,  1028,   991,
    1330,  1028,   709,   357,   358,   359,   360,   361,   362,   363,
     296,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,  1364,  1365,  1396,  1397,  1400,  1401,
    1061,  1427,  1428,  1063,  1634,  1635,   733,   734,   398,  1068,
     369,   370,   371,   372,   373,   374,   375,   376,  1074,  1450,
    1028,  1458,  1028,  1080,  1081,   297,   357,   358,   359,   360,
     361,   362,   363,   298,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   357,   358,   359,
     360,   361,   362,   363,   396,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,  1128,  1494,
     360,   361,   362,   363,   299,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,  1144,  1468,
    1028,  1472,  1054,  1147,   300,   357,   358,   359,   360,   361,
     362,   363,   301,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,  1481,  1482,   357,   358,
     359,   360,   361,   362,   363,   302,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   303,
     357,   358,   359,   360,   361,   362,   363,   399,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   370,   371,   372,   373,   374,   375,   376,  1341,   357,
     358,   359,   360,   361,   362,   363,   304,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
    1483,  1482,  1485,  1428,  1535,  1536,  1537,  1536,  1367,  1538,
    1536,  1368,  1540,  1482,  1542,  1543,   305,   864,   306,   388,
    1379,  1380,  1544,  1545,   865,  1547,  1548,  1550,  1551,  1568,
    1028,   307,  1381,  1569,  1028,  1577,  1028,   408,   765,   766,
     308,  1388,  1389,   357,   358,   359,   360,   361,   362,   363,
     309,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,  1581,  1028,  1410,  1412,  1360,   866,
    1588,  1543,   867,  1418,  1419,  1589,  1482,   288,  1590,  1482,
     767,   768,   310,   389,  1592,  1545,  1644,  1028,   868,  1650,
    1028,  1431,   311,  -266,   312,  1437,   313,   869,  1651,  1028,
     390,  1656,  1428,  1663,  1365,  1441,   314,  1202,  1203,  1204,
    1205,  1206,  1207,   391,  1208,   315,  1209,  1695,  1028,  1447,
    1210,  1211,  1212,   316,  1213,  1696,  1543,   870,  1214,  1215,
    1216,  1217,  1218,  1077,  1078,  1697,  1545,   392,   317,  1219,
    1716,  1717,  1720,  1721,  1220,  1221,  1745,  1746,  1222,  1747,
    1748,   393,   318,  1223,  1224,  1225,  1226,  1750,  1746,  1227,
     319,  1228,  1229,  1230,  1772,  1746,  1231,  1232,   320,  1233,
    1234,  1235,  1773,  1746,   321,  1236,   871,  1776,  1777,   322,
    1237,  1801,  1746,   323,  1238,   957,   958,   795,   796,  1239,
    1240,  1241,  1416,  1417,   324,   325,  1242,  1243,   326,  1244,
    1245,  1246,  1107,  1108,  1247,   327,  1248,  1249,  1250,  1251,
     328,  1252,   329,  1253,  1254,   330,  1255,  1256,  1257,   331,
    1258,  1259,  1260,  1261,   414,   332,  1361,   333,  1262,   334,
    1263,   335,  1264,  1265,   336,  1266,  1267,  1268,  1269,  1270,
    1271,   337,  1272,  1273,  1274,  1275,  1276,  1511,  1512,   338,
    1277,   339,  1278,   415,  1279,   340,   341,   342,   343,   344,
     418,   345,   346,  1280,   347,  1281,  1282,  1283,  1284,  1285,
    1286,  1287,   348,   349,  1288,  1289,   350,   700,   351,   352,
    1290,   353,  1291,  1292,  1293,  1294,   354,  1295,   419,  1296,
    1297,   460,   461,  1492,  1493,   462,  1496,   463,  1498,   465,
     468,   469,  1298,  1299,  1300,   470,   475,   476,   477,   478,
     479,  1301,   480,  1302,  1303,  1304,   484,   487,   513,   529,
    1305,   533,  1306,  1307,  1308,   552,  1309,   553,   554,   555,
    1310,  1311,   558,  1312,  1313,  1314,  1315,   559,   560,   563,
    1316,   713,   564,   565,   576,   597,   357,   358,   359,   360,
     361,   362,   363,   600,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   602,
     607,  1317,  1318,  1319,  1320,  1321,   358,   359,   360,   361,
     362,   363,   609,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,  1584,   616,  1322,  1323,
    1324,  1325,  1326,  1327,  1202,  1203,  1204,  1205,  1206,  1207,
     617,  1208,   619,  1209,   620,   621,   622,  1210,  1211,  1212,
     623,  1213,  1068,   624,   625,  1214,  1215,  1216,  1217,  1218,
     626,   627,   629,   630,   631,  1605,  1219,   632,   633,   635,
     636,  1220,  1221,   637,   644,  1222,   648,   654,   658,   659,
    1223,  1224,  1225,  1226,   664,  1624,  1227,   665,  1228,  1229,
    1230,   666,  1628,  1231,  1232,   667,  1233,  1234,  1235,   668,
     671,   672,  1236,   673,   674,  1637,  1638,  1237,   675,   676,
     677,  1238,   678,   686,   691,   693,  1239,  1240,  1241,   701,
      12,   748,   762,  1242,  1243,   763,  1244,  1245,  1246,   764,
     770,  1247,   769,  1459,  1249,  1250,  1251,   771,  1252,   -53,
    1253,  1254,   778,  1255,  1256,  1257,   781,  1258,  1259,  1260,
    1261,   782,   783,   376,   788,  1262,   786,  1263,   789,  1264,
    1265,   790,  1266,  1267,  1268,  1269,  1270,  1271,   797,  1272,
    1273,  1274,  1275,  1276,   798,   800,   807,  1277,   810,  1278,
     811,  1279,   812,   815,   820,   837,   834,   835,   836,   844,
    1280,   842,  1281,  1282,  1283,  1284,  1285,  1286,  1287,   854,
     855,  1288,  1289,   860,   861,   863,   862,  1290,   876,  1291,
    1292,  1293,  1294,   880,  1295,   877,  1296,  1297,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,  1298,
    1299,  1300,   901,   920,   886,   935,   881,   896,  1301,   937,
    1302,  1303,  1304,   921,   922,   951,   923,  1305,   -55,  1306,
    1307,  1308,   924,  1309,   925,   926,   953,  1310,  1311,   934,
    1312,  1313,  1314,  1315,   714,   931,   932,  1316,   357,   358,
     359,   360,   361,   362,   363,   933,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   359,
     360,   361,   362,   363,   936,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,  1317,  1318,
    1319,  1320,  1321,   357,   358,   359,   360,   361,   362,   363,
     955,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   938,  1322,  1323,  1324,  1325,  1326,
    1327,  1202,  1203,  1204,  1205,  1206,  1207,   960,  1208,   961,
    1209,   939,   940,   971,  1210,  1211,  1212,   972,  1213,   970,
     973,   994,  1214,  1215,  1216,  1217,  1218,   995,  1009,   996,
     997,  1029,  1022,  1219,  1031,  1034,  1007,  1008,  1220,  1221,
    1023,  1024,  1222,  1025,  1026,  1036,  1040,  1223,  1224,  1225,
    1226,  1041,  1044,  1227,  1046,  1228,  1229,  1230,  1045,  1049,
    1231,  1232,  1050,  1233,  1234,  1235,  1051,  1052,  1055,  1236,
    1064,  1065,  1066,  1082,  1237,  1083,  1134,  1095,  1238,  1133,
    1096,  1100,  1101,  1239,  1240,  1241,  1102,  1103,  1104,  1136,
    1242,  1243,  1105,  1244,  1245,  1246,  1106,  1115,  1247,  1118,
    1563,  1249,  1250,  1251,  1121,  1252,  1124,  1253,  1254,  1125,
    1255,  1256,  1257,  1132,  1258,  1259,  1260,  1261,  1137,  1138,
    1139,  1140,  1262,  1145,  1263,  1148,  1264,  1265,  1149,  1266,
    1267,  1268,  1269,  1270,  1271,  1150,  1272,  1273,  1274,  1275,
    1276,  1155,  1156,  1157,  1277,  1158,  1278,  1160,  1279,  1159,
    1161,  1162,  1163,  1173,  1174,  1176,  1179,  1280,  1180,  1281,
    1282,  1283,  1284,  1285,  1286,  1287,  1181,  1183,  1288,  1289,
    1186,  1191,  1192,  1193,  1290,  1194,  1291,  1292,  1293,  1294,
    1195,  1295,  1196,  1296,  1297,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,  1199,  1298,  1299,  1300,  1198,
    1331,  1329,  1333,  1342,  1343,  1301,  1344,  1302,  1303,  1304,
    1345,  1348,  1359,  1362,  1305,  1363,  1306,  1307,  1308,  1390,
    1309,  1395,  1399,  1414,  1310,  1311,   715,  1312,  1313,  1314,
    1315,  1405,  1406,  1420,  1316,   357,   358,   359,   360,   361,
     362,   363,  1407,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   368,   369,   370,   371,
     372,   373,   374,   375,   376,  1408,  1423,  1409,  1425,  1430,
    1433,   722,  1432,  1438,  1439,  1317,  1318,  1319,  1320,  1321,
     357,   358,   359,   360,   361,   362,   363,  1440,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,  1443,  1322,  1323,  1324,  1325,  1326,  1327,  1202,  1203,
    1204,  1205,  1206,  1207,  1445,  1208,  1446,  1209,  1448,  1451,
    1470,  1210,  1211,  1212,  1452,  1213,  1453,  1457,  1454,  1214,
    1215,  1216,  1217,  1218,  1467,  1469,  1473,  1474,  1475,  1476,
    1219,  1490,  1499,  1514,  1520,  1220,  1221,  1515,  1521,  1222,
    1522,  1524,  1539,  1525,  1223,  1224,  1225,  1226,  1526,  1541,
    1227,  1546,  1228,  1229,  1230,  1552,  1553,  1231,  1232,  1556,
    1233,  1234,  1235,  1554,  1557,  1567,  1236,  1558,  1580,  1585,
    1586,  1237,  1591,  1595,   882,  1238,  1596,  1606,  1608,  1609,
    1239,  1240,  1241,  1610,  1611,  1614,  1615,  1242,  1243,  1618,
    1244,  1245,  1246,  1623,  1619,  1247,  1621,  1566,  1249,  1250,
    1251,  1622,  1252,  1625,  1253,  1254,  1627,  1255,  1256,  1257,
    1630,  1258,  1259,  1260,  1261,  1629,  1631,  1632,  1643,  1262,
    1633,  1263,  1636,  1264,  1265,  1639,  1266,  1267,  1268,  1269,
    1270,  1271,  1645,  1272,  1273,  1274,  1275,  1276,  1646,  1647,
    1648,  1277,  1657,  1278,  1649,  1279,  1658,  1664,  1672,  1665,
    1666,  1667,  1668,  1669,  1280,  1671,  1281,  1282,  1283,  1284,
    1285,  1286,  1287,  1674,  1678,  1288,  1289,  1676,  1686,  1677,
    1680,  1290,  1681,  1291,  1292,  1293,  1294,  1688,  1295,  1682,
    1296,  1297,  1689,  1690,  1698,  1699,  1700,  1701,  1702,  1703,
    1715,  1705,  1712,  1298,  1299,  1300,  1713,  1719,  1722,  1723,
    1724,  1725,  1301,  1728,  1302,  1303,  1304,  1731,  1732,  1482,
    1733,  1305,  1735,  1306,  1307,  1308,  1736,  1309,  1758,  1738,
    1749,  1310,  1311,   723,  1312,  1313,  1314,  1315,  1739,  1752,
    1759,  1316,   357,   358,   359,   360,   361,   362,   363,  1751,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,  1753,  1754,  1755,  1756,  1763,  1766,  1775,
    1780,  1778,  1771,  1789,  1802,  1808,  1811,  1812,   724,  1813,
    1814,  1815,  1317,  1318,  1319,  1320,  1321,   357,   358,   359,
     360,   361,   362,   363,  1816,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   225,  1322,
    1323,  1324,  1325,  1326,  1327,  1202,  1203,  1204,  1205,  1206,
    1207,   903,  1208,  1491,  1209,   599,   493,   611,  1210,  1211,
    1212,   875,  1213,  1146,   954,   268,  1214,  1215,  1216,  1217,
    1218,   117,   486,   889,  1790,  1598,  1582,  1219,   830,  1336,
     690,   281,  1220,  1221,  1352,   843,  1222,  1442,   634,     0,
       0,  1223,  1224,  1225,  1226,     0,     0,  1227,     0,  1228,
    1229,  1230,     0,     0,  1231,  1232,     0,  1233,  1234,  1235,
       0,     0,     0,  1236,     0,     0,     0,     0,  1237,     0,
       0,     0,  1238,     0,     0,     0,     0,  1239,  1240,  1241,
       0,     0,     0,     0,  1242,  1243,     0,  1244,  1245,  1246,
       0,     0,  1247,     0,  1571,  1249,  1250,  1251,     0,  1252,
       0,  1253,  1254,     0,  1255,  1256,  1257,     0,  1258,  1259,
    1260,  1261,     0,     0,     0,     0,  1262,     0,  1263,     0,
    1264,  1265,     0,  1266,  1267,  1268,  1269,  1270,  1271,     0,
    1272,  1273,  1274,  1275,  1276,     0,     0,     0,  1277,     0,
    1278,     0,  1279,     0,     0,     0,     0,     0,     0,     0,
       0,  1280,     0,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
       0,     0,  1288,  1289,     0,     0,     0,     0,  1290,     0,
    1291,  1292,  1293,  1294,     0,  1295,     0,  1296,  1297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1298,  1299,  1300,     0,     0,     0,     0,     0,     0,  1301,
       0,  1302,  1303,  1304,     0,     0,     0,     0,  1305,     0,
    1306,  1307,  1308,     0,  1309,     0,     0,     0,  1310,  1311,
     725,  1312,  1313,  1314,  1315,     0,     0,     0,  1316,   357,
     358,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   727,     0,     0,     0,  1317,
    1318,  1319,  1320,  1321,   357,   358,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,     0,  1322,  1323,  1324,  1325,
    1326,  1327,  1202,  1203,  1204,  1205,  1206,  1207,     0,  1208,
       0,  1209,     0,     0,     0,  1210,  1211,  1212,     0,  1213,
       0,     0,     0,  1214,  1215,  1216,  1217,  1218,     0,     0,
       0,     0,     0,     0,  1219,     0,     0,     0,     0,  1220,
    1221,     0,     0,  1222,     0,     0,     0,     0,  1223,  1224,
    1225,  1226,     0,     0,  1227,     0,  1228,  1229,  1230,     0,
       0,  1231,  1232,     0,  1233,  1234,  1235,     0,     0,     0,
    1236,     0,     0,     0,     0,  1237,     0,     0,     0,  1238,
       0,     0,     0,     0,  1239,  1240,  1241,     0,     0,     0,
       0,  1242,  1243,     0,  1244,  1245,  1246,     0,     0,  1247,
       0,  1572,  1249,  1250,  1251,     0,  1252,     0,  1253,  1254,
       0,  1255,  1256,  1257,     0,  1258,  1259,  1260,  1261,     0,
       0,     0,     0,  1262,     0,  1263,     0,  1264,  1265,     0,
    1266,  1267,  1268,  1269,  1270,  1271,     0,  1272,  1273,  1274,
    1275,  1276,     0,     0,     0,  1277,     0,  1278,     0,  1279,
       0,     0,     0,     0,     0,     0,     0,     0,  1280,     0,
    1281,  1282,  1283,  1284,  1285,  1286,  1287,     0,     0,  1288,
    1289,     0,     0,     0,     0,  1290,     0,  1291,  1292,  1293,
    1294,     0,  1295,     0,  1296,  1297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1298,  1299,  1300,
       0,     0,     0,     0,     0,     0,  1301,     0,  1302,  1303,
    1304,     0,     0,     0,     0,  1305,     0,  1306,  1307,  1308,
       0,  1309,     0,     0,     0,  1310,  1311,   728,  1312,  1313,
    1314,  1315,     0,     0,     0,  1316,   357,   358,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   729,     0,     0,     0,  1317,  1318,  1319,  1320,
    1321,   357,   358,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,  1322,  1323,  1324,  1325,  1326,  1327,  1202,
    1203,  1204,  1205,  1206,  1207,     0,  1208,     0,  1209,     0,
       0,     0,  1210,  1211,  1212,     0,  1213,     0,     0,     0,
    1214,  1215,  1216,  1217,  1218,     0,     0,     0,     0,     0,
       0,  1219,     0,     0,     0,     0,  1220,  1221,     0,     0,
    1222,     0,     0,     0,     0,  1223,  1224,  1225,  1226,     0,
       0,  1227,     0,  1228,  1229,  1230,     0,     0,  1231,  1232,
       0,  1233,  1234,  1235,     0,     0,     0,  1236,     0,     0,
       0,     0,  1237,     0,     0,     0,  1238,     0,     0,     0,
       0,  1239,  1240,  1241,     0,     0,     0,     0,  1242,  1243,
       0,  1244,  1245,  1246,     0,     0,  1247,     0,  1573,  1249,
    1250,  1251,     0,  1252,     0,  1253,  1254,     0,  1255,  1256,
    1257,     0,  1258,  1259,  1260,  1261,     0,     0,     0,     0,
    1262,     0,  1263,     0,  1264,  1265,     0,  1266,  1267,  1268,
    1269,  1270,  1271,     0,  1272,  1273,  1274,  1275,  1276,     0,
       0,     0,  1277,     0,  1278,     0,  1279,     0,     0,     0,
       0,     0,     0,     0,     0,  1280,     0,  1281,  1282,  1283,
    1284,  1285,  1286,  1287,     0,     0,  1288,  1289,     0,     0,
       0,     0,  1290,     0,  1291,  1292,  1293,  1294,     0,  1295,
       0,  1296,  1297,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1298,  1299,  1300,     0,     0,     0,
       0,     0,     0,  1301,     0,  1302,  1303,  1304,     0,     0,
       0,     0,  1305,     0,  1306,  1307,  1308,     0,  1309,     0,
       0,     0,  1310,  1311,   735,  1312,  1313,  1314,  1315,     0,
       0,     0,  1316,   357,   358,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   737,
       0,     0,     0,  1317,  1318,  1319,  1320,  1321,   357,   358,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,     0,
    1322,  1323,  1324,  1325,  1326,  1327,  1202,  1203,  1204,  1205,
    1206,  1207,     0,  1208,     0,  1209,     0,     0,     0,  1210,
    1211,  1212,     0,  1213,     0,     0,     0,  1214,  1215,  1216,
    1217,  1218,     0,     0,     0,     0,     0,     0,  1219,     0,
       0,     0,     0,  1220,  1221,     0,     0,  1222,     0,     0,
       0,     0,  1223,  1224,  1225,  1226,     0,     0,  1227,     0,
    1228,  1229,  1230,     0,     0,  1231,  1232,     0,  1233,  1234,
    1235,     0,     0,     0,  1236,     0,     0,     0,     0,  1237,
       0,     0,     0,  1238,     0,     0,     0,     0,  1239,  1240,
    1241,     0,     0,     0,     0,  1242,  1243,     0,  1244,  1245,
    1246,     0,     0,  1247,     0,  1574,  1249,  1250,  1251,     0,
    1252,     0,  1253,  1254,     0,  1255,  1256,  1257,     0,  1258,
    1259,  1260,  1261,     0,     0,     0,     0,  1262,     0,  1263,
       0,  1264,  1265,     0,  1266,  1267,  1268,  1269,  1270,  1271,
       0,  1272,  1273,  1274,  1275,  1276,     0,     0,     0,  1277,
       0,  1278,     0,  1279,     0,     0,     0,     0,     0,     0,
       0,     0,  1280,     0,  1281,  1282,  1283,  1284,  1285,  1286,
    1287,     0,     0,  1288,  1289,     0,     0,     0,     0,  1290,
       0,  1291,  1292,  1293,  1294,     0,  1295,     0,  1296,  1297,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1298,  1299,  1300,     0,     0,     0,     0,     0,     0,
    1301,     0,  1302,  1303,  1304,     0,     0,     0,     0,  1305,
       0,  1306,  1307,  1308,     0,  1309,     0,     0,     0,  1310,
    1311,   742,  1312,  1313,  1314,  1315,     0,     0,     0,  1316,
     357,   358,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   743,     0,     0,     0,
    1317,  1318,  1319,  1320,  1321,   357,   358,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,     0,  1322,  1323,  1324,
    1325,  1326,  1327,  1202,  1203,  1204,  1205,  1206,  1207,     0,
    1208,     0,  1209,     0,     0,     0,  1210,  1211,  1212,     0,
    1213,     0,     0,     0,  1214,  1215,  1216,  1217,  1218,     0,
       0,     0,     0,     0,     0,  1219,     0,     0,     0,     0,
    1220,  1221,     0,     0,  1222,     0,     0,     0,     0,  1223,
    1224,  1225,  1226,     0,     0,  1227,     0,  1228,  1229,  1230,
       0,     0,  1231,  1232,     0,  1233,  1234,  1235,     0,     0,
       0,  1236,     0,     0,     0,     0,  1237,     0,     0,     0,
    1238,     0,     0,     0,     0,  1239,  1240,  1241,     0,     0,
       0,     0,  1242,  1243,     0,  1244,  1245,  1246,     0,     0,
    1247,     0,  1575,  1249,  1250,  1251,     0,  1252,     0,  1253,
    1254,     0,  1255,  1256,  1257,     0,  1258,  1259,  1260,  1261,
       0,     0,     0,     0,  1262,     0,  1263,     0,  1264,  1265,
       0,  1266,  1267,  1268,  1269,  1270,  1271,     0,  1272,  1273,
    1274,  1275,  1276,     0,     0,     0,  1277,     0,  1278,     0,
    1279,     0,     0,     0,     0,     0,     0,     0,     0,  1280,
       0,  1281,  1282,  1283,  1284,  1285,  1286,  1287,     0,     0,
    1288,  1289,     0,     0,     0,     0,  1290,     0,  1291,  1292,
    1293,  1294,     0,  1295,     0,  1296,  1297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1298,  1299,
    1300,     0,     0,     0,     0,     0,     0,  1301,     0,  1302,
    1303,  1304,     0,     0,     0,     0,  1305,     0,  1306,  1307,
    1308,     0,  1309,     0,     0,     0,  1310,  1311,   744,  1312,
    1313,  1314,  1315,     0,     0,     0,  1316,   357,   358,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   745,     0,     0,     0,  1317,  1318,  1319,
    1320,  1321,   357,   358,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,     0,  1322,  1323,  1324,  1325,  1326,  1327,
    1202,  1203,  1204,  1205,  1206,  1207,     0,  1208,     0,  1209,
       0,     0,     0,  1210,  1211,  1212,     0,  1213,     0,     0,
       0,  1214,  1215,  1216,  1217,  1218,     0,     0,     0,     0,
       0,     0,  1219,     0,     0,     0,     0,  1220,  1221,     0,
       0,  1222,     0,     0,     0,     0,  1223,  1224,  1225,  1226,
       0,     0,  1227,     0,  1228,  1229,  1230,     0,     0,  1231,
    1232,     0,  1233,  1234,  1235,     0,     0,     0,  1236,     0,
       0,     0,     0,  1237,     0,     0,     0,  1238,     0,     0,
       0,     0,  1239,  1240,  1241,     0,     0,     0,     0,  1242,
    1243,     0,  1244,  1245,  1246,     0,     0,  1247,     0,  1576,
    1249,  1250,  1251,     0,  1252,     0,  1253,  1254,     0,  1255,
    1256,  1257,     0,  1258,  1259,  1260,  1261,     0,     0,     0,
       0,  1262,     0,  1263,     0,  1264,  1265,     0,  1266,  1267,
    1268,  1269,  1270,  1271,     0,  1272,  1273,  1274,  1275,  1276,
       0,     0,     0,  1277,     0,  1278,     0,  1279,     0,     0,
       0,     0,     0,     0,     0,     0,  1280,     0,  1281,  1282,
    1283,  1284,  1285,  1286,  1287,     0,     0,  1288,  1289,     0,
       0,     0,     0,  1290,     0,  1291,  1292,  1293,  1294,     0,
    1295,     0,  1296,  1297,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1298,  1299,  1300,     0,     0,
       0,     0,     0,     0,  1301,     0,  1302,  1303,  1304,     0,
       0,     0,     0,  1305,     0,  1306,  1307,  1308,     0,  1309,
       0,     0,     0,  1310,  1311,   757,  1312,  1313,  1314,  1315,
       0,     0,     0,  1316,   357,   358,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     758,     0,     0,     0,  1317,  1318,  1319,  1320,  1321,   357,
     358,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
       0,  1322,  1323,  1324,  1325,  1326,  1327,  1202,  1203,  1204,
    1205,  1206,  1207,     0,  1208,     0,  1209,     0,     0,     0,
    1210,  1211,  1212,     0,  1213,     0,     0,     0,  1214,  1215,
    1216,  1217,  1218,     0,     0,     0,     0,     0,     0,  1219,
       0,     0,     0,     0,  1220,  1221,     0,     0,  1222,     0,
       0,     0,     0,  1223,  1224,  1225,  1226,     0,     0,  1227,
       0,  1228,  1229,  1230,     0,     0,  1231,  1232,     0,  1233,
    1234,  1235,     0,     0,     0,  1236,     0,     0,     0,     0,
    1237,     0,     0,     0,  1238,     0,     0,     0,     0,  1239,
    1240,  1241,     0,     0,     0,     0,  1242,  1243,     0,  1244,
    1245,  1246,     0,     0,  1247,     0,  1641,  1249,  1250,  1251,
       0,  1252,     0,  1253,  1254,     0,  1255,  1256,  1257,     0,
    1258,  1259,  1260,  1261,     0,     0,     0,     0,  1262,     0,
    1263,     0,  1264,  1265,     0,  1266,  1267,  1268,  1269,  1270,
    1271,     0,  1272,  1273,  1274,  1275,  1276,     0,     0,     0,
    1277,     0,  1278,     0,  1279,     0,     0,     0,     0,     0,
       0,     0,     0,  1280,     0,  1281,  1282,  1283,  1284,  1285,
    1286,  1287,     0,     0,  1288,  1289,     0,     0,     0,     0,
    1290,     0,  1291,  1292,  1293,  1294,     0,  1295,     0,  1296,
    1297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1298,  1299,  1300,     0,     0,     0,     0,     0,
       0,  1301,     0,  1302,  1303,  1304,     0,     0,     0,     0,
    1305,     0,  1306,  1307,  1308,     0,  1309,     0,     0,     0,
    1310,  1311,   759,  1312,  1313,  1314,  1315,     0,     0,     0,
    1316,   357,   358,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   761,     0,     0,
       0,  1317,  1318,  1319,  1320,  1321,   357,   358,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,     0,  1322,  1323,
    1324,  1325,  1326,  1327,  1202,  1203,  1204,  1205,  1206,  1207,
       0,  1208,     0,  1209,     0,     0,     0,  1210,  1211,  1212,
       0,  1213,     0,     0,     0,  1214,  1215,  1216,  1217,  1218,
       0,     0,     0,     0,     0,     0,  1219,     0,     0,     0,
       0,  1220,  1221,     0,     0,  1222,     0,     0,     0,     0,
    1223,  1224,  1225,  1226,     0,     0,  1227,     0,  1228,  1229,
    1230,     0,     0,  1231,  1232,     0,  1233,  1234,  1235,     0,
       0,     0,  1236,     0,     0,     0,     0,  1237,     0,     0,
       0,  1238,     0,     0,     0,     0,  1239,  1240,  1241,     0,
       0,     0,     0,  1242,  1243,     0,  1244,  1245,  1246,     0,
       0,  1247,     0,  1642,  1249,  1250,  1251,     0,  1252,     0,
    1253,  1254,     0,  1255,  1256,  1257,     0,  1258,  1259,  1260,
    1261,     0,     0,     0,     0,  1262,     0,  1263,     0,  1264,
    1265,     0,  1266,  1267,  1268,  1269,  1270,  1271,     0,  1272,
    1273,  1274,  1275,  1276,     0,     0,     0,  1277,     0,  1278,
       0,  1279,     0,     0,     0,     0,     0,     0,     0,     0,
    1280,     0,  1281,  1282,  1283,  1284,  1285,  1286,  1287,     0,
       0,  1288,  1289,     0,     0,     0,     0,  1290,     0,  1291,
    1292,  1293,  1294,     0,  1295,     0,  1296,  1297,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1298,
    1299,  1300,     0,     0,     0,     0,     0,     0,  1301,     0,
    1302,  1303,  1304,     0,     0,     0,     0,  1305,     0,  1306,
    1307,  1308,     0,  1309,     0,     0,     0,  1310,  1311,  1087,
    1312,  1313,  1314,  1315,     0,     0,     0,  1316,   357,   358,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1088,     0,     0,     0,  1317,  1318,
    1319,  1320,  1321,   357,   358,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,     0,  1322,  1323,  1324,  1325,  1326,
    1327,  1202,  1203,  1204,  1205,  1206,  1207,     0,  1208,     0,
    1209,     0,     0,     0,  1210,  1211,  1212,     0,  1213,     0,
       0,     0,  1214,  1215,  1216,  1217,  1218,     0,     0,     0,
       0,     0,     0,  1219,     0,     0,     0,     0,  1220,  1221,
       0,     0,  1222,     0,     0,     0,     0,  1223,  1224,  1225,
    1226,     0,     0,  1227,     0,  1228,  1229,  1230,     0,     0,
    1231,  1232,     0,  1233,  1234,  1235,     0,     0,     0,  1236,
       0,     0,     0,     0,  1237,     0,     0,     0,  1238,     0,
       0,     0,     0,  1239,  1240,  1241,     0,     0,     0,     0,
    1242,  1243,     0,  1244,  1245,  1246,     0,     0,  1247,     0,
    1694,  1249,  1250,  1251,     0,  1252,     0,  1253,  1254,     0,
    1255,  1256,  1257,     0,  1258,  1259,  1260,  1261,     0,     0,
       0,     0,  1262,     0,  1263,     0,  1264,  1265,     0,  1266,
    1267,  1268,  1269,  1270,  1271,     0,  1272,  1273,  1274,  1275,
    1276,     0,     0,     0,  1277,     0,  1278,     0,  1279,     0,
       0,     0,     0,     0,     0,     0,     0,  1280,     0,  1281,
    1282,  1283,  1284,  1285,  1286,  1287,     0,     0,  1288,  1289,
       0,     0,     0,     0,  1290,     0,  1291,  1292,  1293,  1294,
       0,  1295,     0,  1296,  1297,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1298,  1299,  1300,     0,
       0,     0,     0,     0,     0,  1301,     0,  1302,  1303,  1304,
       0,     0,     0,     0,  1305,     0,  1306,  1307,  1308,     0,
    1309,     0,     0,     0,  1310,  1311,  1099,  1312,  1313,  1314,
    1315,     0,     0,     0,  1316,     0,   357,   358,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1109,     0,     0,     0,  1317,  1318,  1319,  1320,  1321,
     357,   358,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,     0,  1322,  1323,  1324,  1325,  1326,  1327,  1202,  1203,
    1204,  1205,  1206,  1207,     0,  1208,     0,  1209,     0,     0,
       0,  1210,  1211,  1212,     0,  1213,     0,     0,     0,  1214,
    1215,  1216,  1217,  1218,     0,     0,     0,     0,     0,     0,
    1219,     0,     0,     0,     0,  1220,  1221,     0,     0,  1222,
       0,     0,     0,     0,  1223,  1224,  1225,  1226,     0,     0,
    1227,     0,  1228,  1229,  1230,     0,     0,  1231,  1232,     0,
    1233,  1234,  1235,     0,     0,     0,  1236,     0,     0,     0,
       0,  1237,     0,     0,     0,  1238,     0,     0,     0,     0,
    1239,  1240,  1241,     0,     0,     0,     0,  1242,  1243,     0,
    1244,  1245,  1246,     0,     0,  1247,     0,  1718,  1249,  1250,
    1251,     0,  1252,     0,  1253,  1254,     0,  1255,  1256,  1257,
       0,  1258,  1259,  1260,  1261,     0,     0,     0,     0,  1262,
       0,  1263,     0,  1264,  1265,     0,  1266,  1267,  1268,  1269,
    1270,  1271,     0,  1272,  1273,  1274,  1275,  1276,     0,     0,
       0,  1277,     0,  1278,     0,  1279,     0,     0,     0,     0,
       0,     0,     0,     0,  1280,     0,  1281,  1282,  1283,  1284,
    1285,  1286,  1287,     0,     0,  1288,  1289,     0,     0,     0,
       0,  1290,     0,  1291,  1292,  1293,  1294,     0,  1295,     0,
    1296,  1297,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   746,  1298,  1299,  1300,     0,     0,     0,     0,
       0,     0,  1301,     0,  1302,  1303,  1304,     0,     0,     0,
       0,  1305,     0,  1306,  1307,  1308,     0,  1309,     0,     0,
       0,  1310,  1311,   747,  1312,  1313,  1314,  1315,     0,     0,
       0,  1316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,     0,     0,     0,     0,   566,     0,   131,
     132,     0,  1317,  1318,  1319,  1320,  1321,     0,     0,   133,
    -572,  -572,  -572,  -572,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,  1322,
    1323,  1324,  1325,  1326,  1327,   134,     0,     0,     0,     0,
     135,     0,     0,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
       0,     0,     0,   139,   357,   358,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,     0,     0,     0,     0,   357,
     358,   359,   360,   361,   362,   363,   140,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
       0,   357,   358,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,     0,     0,     0,   141,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,     0,     0,     0,     0,     0,     0,   131,
       0,   142,     0,     0,     0,     0,     0,     0,   143,   144,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   499,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
     135,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,     0,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,     0,     0,     0,     0,
     210,   500,     0,     0,   123,   124,   125,   126,   127,   128,
     702,     0,     0,     0,     0,     0,   141,     0,   129,   130,
       0,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,   583,   357,
     358,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
       0,     0,   134,     0,     0,     0,   501,   135,     0,     0,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   710,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   716,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,     0,     0,     0,     0,
     210,     0,     0,   141,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
       0,     0,     0,     0,     0,     0,   131,   357,   358,   359,
     360,   361,   362,   363,   584,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,     0,     0,   135,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,     0,     0,   585,     0,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,   141,   129,   130,     0,     0,     0,     0,
       0,     0,   131,   540,     0,     0,   717,   357,   358,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,     0,     0,   135,     0,     0,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,     0,     0,   210,     0,   141,
       0,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,     0,   718,   129,   130,     0,     0,     0,
       0,     0,     0,   131,   357,   358,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,   135,     0,     0,   136,   137,     0,
       0,     0,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   711,   184,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,     0,     0,   210,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     141,     0,     0,     0,   719,     0,   131,   357,   358,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,     0,     0,   135,     0,     0,
     136,   137,   357,   358,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,  1062,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,   184,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,     0,   141,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,   358,   359,   360,   361,   362,
     363,   720,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   357,   358,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   357,   358,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,     0,     0,   210,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,   977,     0,
       0,     0,   129,   130,   721,     0,     0,     0,     0,     0,
     131,     0,     0,     0,   978,     0,     0,     0,   979,     0,
       0,   980,     0,   981,     0,     0,   982,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     983,     0,     0,     0,     0,     0,   134,   984,   985,   726,
       0,   135,     0,     0,   136,   137,     0,     0,     0,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,   986,   129,   130,     0,     0,  1067,     0,     0,
       0,   131,     0,   356,     0,     0,     0,     0,   987,     0,
     357,   358,   359,   360,   361,   362,   363,   895,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,     0,     0,     0,     0,     0,     0,   134,     0,     0,
     988,   377,   135,     0,     0,   136,   137,     0,     0,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,   989,     0,   129,   130,     0,   141,  1495,     0,
     990,   730,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   357,   358,   359,   360,   361,
     362,   363,   731,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,     0,     0,   134,     0,
       0,     0,     0,   135,     0,     0,   136,   137,     0,   991,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,  1497,
       0,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,     0,
     184,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,     0,   141,
       0,   210,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,   184,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
       0,     0,   210,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,   184,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,     0,     0,   210,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
       0,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,     0,   732,   357,   358,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,     0,     0,   135,     0,     0,
     136,   137,   357,   358,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   357,   358,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   357,   358,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   357,   358,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   357,   358,   359,   360,
     361,   362,   363,   141,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   357,   358,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   357,   358,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,     0,     0,   210,   357,   358,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,     0,
     736,   357,   358,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,   358,   359,   360,   361,   362,   363,   738,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   357,   358,   359,   360,   361,   362,   363,
     739,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   357,   358,   359,   360,   361,   362,
     363,   740,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   357,   358,   359,   360,   361,
     362,   363,   749,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   357,   358,   359,   360,
     361,   362,   363,   750,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   357,   358,   359,
     360,   361,   362,   363,   751,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   357,   358,
     359,   360,   361,   362,   363,   752,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   357,
     358,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     357,   358,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   357,   358,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   357,   358,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,     0,     0,     0,     0,     0,   357,   358,
     359,   360,   361,   362,   363,   753,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,     0,
       0,   357,   358,   359,   360,   361,   362,   363,   754,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,   358,   359,   360,   361,   362,   363,   755,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   357,   358,   359,   360,   361,   362,   363,
     756,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   357,   358,   359,   360,   361,   362,
     363,   760,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   357,   358,   359,   360,   361,
     362,   363,  1079,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   357,   358,   359,   360,
     361,   362,   363,  1084,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   357,   358,   359,
     360,   361,   362,   363,  1085,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   357,   358,
     359,   360,   361,   362,   363,  1086,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   357,
     358,   359,   360,   361,   362,   363,  1089,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     357,   358,   359,   360,   361,   362,   363,  1090,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   357,   358,   359,   360,   361,   362,   363,  1091,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   357,   358,   359,   360,   361,   362,   363,  1092,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,     0,     0,     0,     0,     0,   357,   358,
     359,   360,   361,   362,   363,  1093,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,     0,
       0,   357,   358,   359,   360,   361,   362,   363,  1094,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,   358,   359,   360,   361,   362,   363,  1097,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   357,   358,   359,   360,   361,   362,   363,
    1098,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   357,   358,   359,   360,   361,   362,
     363,  1110,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   357,   358,   359,   360,   361,
     362,   363,  1111,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   357,   358,   359,   360,
     361,   362,   363,  1187,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   357,   358,   359,
     360,   361,   362,   363,  1369,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   357,   358,
     359,   360,   361,   362,   363,  1422,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   357,
     358,   359,   360,   361,   362,   363,  1477,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     357,   358,   359,   360,   361,   362,   363,  1500,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   357,   358,   359,   360,   361,   362,   363,  1501,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     1,     0,     0,     0,     2,     0,     0,  1502,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     4,     0,     0,  1503,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1370,  1371,     5,     6,  1504,  1372,
       0,  1373,   357,   358,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,     0,     0,     0,     0,     0,     0,  1513,
       0,  1374,  1375,     0,  1376,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
    1549,     0,     0,     0,     0,     0,     0,   420,   421,     0,
     422,     0,   423,   424,     0,     0,     0,     0,     0,     0,
       0,  1555,     0,     0,     0,     0,     0,     0,   425,     0,
       0,     0,     0,     0,     0,     8,     0,     9,     0,     0,
       0,     0,  1559,     0,    10,     0,     0,     0,     0,     0,
     426,   427,   428,   429,     0,   900,     0,     0,   430,    11,
      12,     0,     0,  1564,     0,     0,     0,   431,     0,     0,
       0,     0,     0,    13,     0,     0,    14,     0,     0,     0,
       0,     0,     0,    15,  1653,   432,     0,     0,     0,     0,
       0,     0,     0,   433,  1377,  1378,     0,     0,     0,     0,
       0,   434,     0,     0,     0,  1670,     0,     0,   435,     0,
       0,   436,     0,     0,   437,   438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1691,     0,     0,     0,
       0,   439,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1692,     0,     0,
       0,     0,     0,     0,     0,   440,   441,     0,   442,   443,
       0,     0,     0,     0,   444,     0,   445,     0,     0,     0,
       0,   446,   447,     0,     0,     0,     0,   448,     0,     0,
       0,     0,     0,   449,     0,   450,     0,     0,     0,     0,
     451,   357,   358,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   357,   358,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   357,   358,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,     0,   357,   358,   359,   360,   361,
     362,   363,  1354,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,     0,     0,     0,     0,
       0,     0,     0,   894,     0,     0,   741,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1073,     0,     0,   357,   358,   359,
     360,   361,   362,   363,  1355,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,     0,
     357,   358,   359,   360,   361,   362,   363,   780,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,     0,     0,   357,   358,   359,   360,   361,   362,   363,
     945,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376
};

static const yytype_int16 yycheck[] =
{
      67,   853,   485,  1050,   863,  1058,   962,   859,  1052,   218,
     217,   805,   806,   393,   259,   809,     3,   794,     6,     3,
       3,   974,   975,   649,   650,     3,     3,     3,   113,   655,
      18,   657,  1392,  1393,     3,     4,     5,     6,     7,     8,
     993,    41,  1342,  1403,  1404,    39,    20,     6,    20,     4,
      86,   118,   119,    67,    41,     3,    77,   113,    67,    67,
      63,   199,   129,   130,   131,   111,   474,   700,   135,   409,
       4,     5,     6,     7,  1348,   168,     8,    44,    45,   168,
       3,   199,     3,   222,   130,     3,   199,    86,   222,   222,
    1113,  1114,    39,     3,   222,     3,    63,    91,  1145,  1122,
    1123,   166,   222,   112,   112,   222,    10,    11,    12,    13,
      14,    15,    16,   453,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    61,   173,   229,
     130,    47,  1034,   131,   218,   210,     3,   217,   130,     5,
     191,   774,   140,   210,    91,  1505,  1506,  1507,  1508,  1509,
    1510,   697,   210,   699,    20,   235,   170,   222,   161,  1519,
     146,   170,   170,  1523,   130,   216,    74,  1527,   306,   308,
    1022,    92,   306,   306,   162,    91,   179,   223,   306,   224,
     216,  1033,   976,     3,   184,   269,   306,  1039,   306,   306,
     598,     3,   184,   162,  1053,   308,   199,   183,   153,    38,
     200,  1154,   610,   162,   225,   219,    73,   206,   308,   132,
     219,   219,   179,   117,   132,   308,   200,   284,   184,   308,
       3,   288,   132,   308,   132,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   616,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   308,   320,   321,   322,   188,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   483,   210,  1178,   486,   345,   346,
     688,   621,   622,   350,   351,  1585,   274,  1189,   497,   629,
     357,   358,   359,   360,   361,   379,  1343,  1344,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     943,   305,  1586,   380,   306,  1675,     3,    18,   305,  1679,
     132,  1223,   306,   306,   664,   665,   666,   166,   306,   306,
     306,   305,  1234,   305,   282,   283,   284,   285,   307,   305,
     306,   887,     3,   889,  1196,    63,  1198,     3,    10,   132,
     189,  1253,   229,     3,   288,   289,   290,  1410,  1135,  1382,
    1383,  1384,  1385,  1386,  1387,  1267,  1726,  1727,    33,  1729,
    1730,  1394,   306,   232,  1276,  1398,    77,   222,  1004,  1402,
    1006,  1007,   222,     3,   229,    18,   114,    74,    92,   473,
     635,   636,     3,    51,    10,   602,    16,    55,    14,    64,
     116,   741,   742,   307,   471,     3,     4,     5,     6,     7,
       8,   210,  1314,    75,    79,    78,   210,   797,     3,    81,
     800,    18,    87,    73,   102,   103,   102,   103,   495,   496,
     304,   308,  1476,    98,    67,    93,   503,  1490,    96,     9,
       3,   169,     0,   161,    92,   132,   200,   200,     3,   308,
      20,   152,   110,     3,   116,   171,    41,  1413,   162,    92,
     305,   179,   125,   308,    75,   166,   306,   807,   196,   131,
     128,   132,   306,   227,   227,   184,   132,  1329,   136,   132,
      77,   199,     3,  1335,    10,    11,    12,    13,    14,    15,
      16,   156,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   204,   126,   305,   306,   171,
     577,   578,   177,   580,   162,     3,     3,     3,   585,    10,
      11,    12,    13,    14,    15,    16,   188,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      75,  1443,   204,   205,   164,    60,  1448,     3,    41,   207,
     113,   209,   230,   131,   230,   152,    49,   219,    73,  1353,
     225,     3,     3,     5,   162,   210,   775,   130,   226,   166,
      82,  1624,    60,    60,     3,   784,   307,   308,    18,     3,
    1721,   116,   145,    41,    82,    73,    73,   113,   308,  1750,
    1613,    49,    41,     3,  1617,   662,   131,   305,    38,     3,
      49,    41,   236,    43,     3,  1457,    46,  1748,  1749,   172,
     122,  1772,  1773,  1472,    41,  1467,   306,  1469,   130,  1672,
      60,    41,    49,   135,   122,   307,   308,    67,    68,   166,
    1771,   236,   130,   145,   306,   702,   171,   704,     3,  1686,
    1801,   708,   709,   436,   711,    71,    72,   145,   715,   442,
     305,   444,    92,   188,     3,   722,   723,   724,   725,  1561,
     727,   728,   729,   307,   308,   236,   875,   734,   735,   236,
     737,  1724,   307,   308,   236,   210,   743,   744,   745,   236,
      13,    14,   236,    16,  1707,  1708,    19,  1710,  1711,     3,
     757,   758,   759,   203,   761,    26,    27,    28,    29,    30,
     140,   423,   424,   425,   426,     9,   428,   307,   308,   431,
     432,   433,     3,   780,     8,  1055,   438,   439,   440,   307,
     308,   443,   162,   306,   791,   307,   308,   306,  1580,   306,
     170,   798,   307,   308,   306,   944,    60,  1639,   947,   948,
     949,    10,    11,    12,    13,    14,    15,    16,   308,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   642,   643,   306,   645,   646,   647,   307,   308,
     837,   651,   652,   653,   307,   308,   656,   307,   308,   219,
     307,   308,   308,    10,    11,    12,    13,    14,    15,    16,
     306,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   307,   308,     4,     5,     4,     5,
     877,   307,   308,   880,    47,    48,   307,   308,    43,   886,
      23,    24,    25,    26,    27,    28,    29,    30,   895,   307,
     308,   307,   308,   900,   901,   306,    10,    11,    12,    13,
      14,    15,    16,   306,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   945,  1362,
      13,    14,    15,    16,   306,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   965,   307,
     308,   307,   308,   970,   306,    10,    11,    12,    13,    14,
      15,    16,   306,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   307,   308,    10,    11,
      12,    13,    14,    15,    16,   306,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   306,
      10,    11,    12,    13,    14,    15,    16,    43,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    24,    25,    26,    27,    28,    29,    30,  1045,    10,
      11,    12,    13,    14,    15,    16,   306,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     307,   308,   307,   308,   307,   308,   307,   308,  1075,   307,
     308,  1078,   307,   308,   307,   308,   306,    60,   306,    65,
    1087,  1088,   307,   308,    67,   307,   308,   307,   308,   307,
     308,   306,  1099,   307,   308,   307,   308,    60,   307,   308,
     306,  1108,  1109,    10,    11,    12,    13,    14,    15,    16,
     306,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   307,   308,  1133,  1134,   150,   112,
     307,   308,   115,  1140,  1141,   307,   308,   230,   307,   308,
     307,   308,   306,   129,   307,   308,   307,   308,   131,   307,
     308,  1158,   306,   139,   306,  1162,   306,   140,   307,   308,
     146,   307,   308,   307,   308,  1172,   306,     3,     4,     5,
       6,     7,     8,   159,    10,   306,    12,   307,   308,  1186,
      16,    17,    18,   306,    20,   307,   308,   170,    24,    25,
      26,    27,    28,   307,   308,   307,   308,   183,   306,    35,
      47,    48,   305,   306,    40,    41,   307,   308,    44,   305,
     306,   197,   306,    49,    50,    51,    52,   307,   308,    55,
     306,    57,    58,    59,   307,   308,    62,    63,   306,    65,
      66,    67,   307,   308,   306,    71,   219,   307,   308,   306,
      76,   307,   308,   306,    80,   789,   790,   612,   613,    85,
      86,    87,  1138,  1139,   306,   306,    92,    93,   306,    95,
      96,    97,   307,   308,   100,   306,   102,   103,   104,   105,
     306,   107,   306,   109,   110,   306,   112,   113,   114,   306,
     116,   117,   118,   119,    60,   306,   308,   306,   124,   306,
     126,   306,   128,   129,   306,   131,   132,   133,   134,   135,
     136,   306,   138,   139,   140,   141,   142,   307,   308,   306,
     146,   306,   148,     3,   150,   306,   306,   306,   306,   306,
       3,   306,   306,   159,   306,   161,   162,   163,   164,   165,
     166,   167,   306,   306,   170,   171,   306,   308,   306,   306,
     176,   306,   178,   179,   180,   181,   306,   183,     3,   185,
     186,     3,   166,  1360,  1361,   236,  1363,     3,  1365,   166,
     236,     3,   198,   199,   200,    26,     3,     3,     3,     3,
       3,   207,     3,   209,   210,   211,     3,     3,   307,   307,
     216,   307,   218,   219,   220,   307,   222,   307,   307,   307,
     226,   227,   307,   229,   230,   231,   232,   307,   307,     5,
     236,   308,   307,   307,   306,     3,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
     307,   277,   278,   279,   280,   281,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,  1473,   139,   304,   305,
     306,   307,   308,   309,     3,     4,     5,     6,     7,     8,
     165,    10,     3,    12,     3,     3,     3,    16,    17,    18,
       3,    20,  1499,     3,     3,    24,    25,    26,    27,    28,
       3,     3,     3,   203,     3,  1512,    35,     3,     3,   306,
     306,    40,    41,   306,   306,    44,    53,   306,   306,   306,
      49,    50,    51,    52,     3,  1532,    55,     3,    57,    58,
      59,     3,  1539,    62,    63,   307,    65,    66,    67,   308,
       3,     3,    71,   166,   307,  1552,  1553,    76,     3,   166,
     236,    80,     3,   167,     3,     3,    85,    86,    87,   307,
     200,   307,   302,    92,    93,   302,    95,    96,    97,   302,
     302,   100,   307,   102,   103,   104,   105,   302,   107,   200,
     109,   110,   306,   112,   113,   114,   306,   116,   117,   118,
     119,   306,   306,    30,   140,   124,   308,   126,   140,   128,
     129,   140,   131,   132,   133,   134,   135,   136,   139,   138,
     139,   140,   141,   142,   166,   139,     3,   146,     3,   148,
     203,   150,   203,     5,     4,   306,     5,     5,   162,   224,
     159,   181,   161,   162,   163,   164,   165,   166,   167,   166,
       3,   170,   171,     3,     3,     3,   166,   176,    52,   178,
     179,   180,   181,    20,   183,   148,   185,   186,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   198,
     199,   200,   137,     4,   306,     5,   168,   307,   207,     5,
     209,   210,   211,   302,   302,   118,   302,   216,   200,   218,
     219,   220,   302,   222,   302,   302,     3,   226,   227,   302,
     229,   230,   231,   232,   308,   306,   306,   236,    10,    11,
      12,    13,    14,    15,    16,   306,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    12,
      13,    14,    15,    16,   302,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   277,   278,
     279,   280,   281,    10,    11,    12,    13,    14,    15,    16,
     117,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   302,   304,   305,   306,   307,   308,
     309,     3,     4,     5,     6,     7,     8,     3,    10,     3,
      12,   306,   306,   140,    16,    17,    18,   140,    20,   306,
     306,     3,    24,    25,    26,    27,    28,     3,    67,   307,
     307,   224,   306,    35,     3,    49,   307,   307,    40,    41,
     306,   306,    44,   306,   306,   224,   166,    49,    50,    51,
      52,     3,     3,    55,   140,    57,    58,    59,   306,   306,
      62,    63,   306,    65,    66,    67,   140,   306,     3,    71,
     140,     3,     3,   307,    76,   307,   124,   307,    80,    52,
     307,   307,   306,    85,    86,    87,   306,   306,   306,   139,
      92,    93,   306,    95,    96,    97,   306,   306,   100,   306,
     102,   103,   104,   105,   306,   107,   307,   109,   110,   307,
     112,   113,   114,   307,   116,   117,   118,   119,   306,   306,
     306,    20,   124,   306,   126,   306,   128,   129,   306,   131,
     132,   133,   134,   135,   136,     3,   138,   139,   140,   141,
     142,   162,     3,   306,   146,   306,   148,    42,   150,   306,
       3,   306,     4,   140,   140,   181,     5,   159,   199,   161,
     162,   163,   164,   165,   166,   167,     4,     4,   170,   171,
     306,     3,     3,     3,   176,     3,   178,   179,   180,   181,
       3,   183,   306,   185,   186,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   224,   198,   199,   200,   306,
     224,   306,     3,   306,   306,   207,   306,   209,   210,   211,
       3,   306,   308,   216,   216,    20,   218,   219,   220,   303,
     222,   302,   302,     3,   226,   227,   308,   229,   230,   231,
     232,   307,   307,     3,   236,    10,    11,    12,    13,    14,
      15,    16,   307,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   307,     3,   307,     3,     5,
      41,   308,     5,   306,   306,   277,   278,   279,   280,   281,
      10,    11,    12,    13,    14,    15,    16,   306,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    49,   304,   305,   306,   307,   308,   309,     3,     4,
       5,     6,     7,     8,   307,    10,     4,    12,    49,   307,
     224,    16,    17,    18,   307,    20,   307,   306,   308,    24,
      25,    26,    27,    28,   306,   306,   306,   140,   140,   306,
      35,     3,   306,    52,   306,    40,    41,   167,   307,    44,
     307,   306,    20,   307,    49,    50,    51,    52,   307,    18,
      55,     3,    57,    58,    59,   306,   306,    62,    63,   307,
      65,    66,    67,   140,   307,     3,    71,   307,   306,   306,
     306,    76,     3,     3,   308,    80,    52,     3,    52,   307,
      85,    86,    87,   307,   307,   302,   302,    92,    93,   302,
      95,    96,    97,   182,   302,   100,   307,   102,   103,   104,
     105,   307,   107,   117,   109,   110,     3,   112,   113,   114,
     176,   116,   117,   118,   119,   225,     3,     3,   307,   124,
       5,   126,     5,   128,   129,    49,   131,   132,   133,   134,
     135,   136,    66,   138,   139,   140,   141,   142,   109,   132,
     142,   146,   176,   148,   231,   150,     5,   307,     3,   307,
     307,   307,   307,   307,   159,   308,   161,   162,   163,   164,
     165,   166,   167,   307,   307,   170,   171,   306,   135,   306,
     306,   176,   306,   178,   179,   180,   181,     3,   183,   307,
     185,   186,   307,   307,     3,     3,     3,   306,   306,     3,
     306,   308,   192,   198,   199,   200,   192,   176,     3,     3,
       3,   307,   207,   307,   209,   210,   211,   149,   149,   308,
       3,   216,     3,   218,   219,   220,     3,   222,     3,   307,
     306,   226,   227,   308,   229,   230,   231,   232,   307,   190,
       3,   236,    10,    11,    12,    13,    14,    15,    16,   306,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   307,   307,   307,   307,   189,     5,     3,
     127,    77,   306,   227,   143,   208,   166,   166,   308,   160,
     160,     5,   277,   278,   279,   280,   281,    10,    11,    12,
      13,    14,    15,    16,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    74,   304,
     305,   306,   307,   308,   309,     3,     4,     5,     6,     7,
       8,   714,    10,  1359,    12,   380,   289,   387,    16,    17,
      18,   684,    20,   969,   787,    93,    24,    25,    26,    27,
      28,    62,   278,   698,  1777,  1499,  1472,    35,   654,  1042,
     475,   122,    40,    41,  1054,   668,    44,  1176,   417,    -1,
      -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    66,    67,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    87,
      -1,    -1,    -1,    -1,    92,    93,    -1,    95,    96,    97,
      -1,    -1,   100,    -1,   102,   103,   104,   105,    -1,   107,
      -1,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,    -1,   126,    -1,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
     148,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,   163,   164,   165,   166,   167,
      -1,    -1,   170,   171,    -1,    -1,    -1,    -1,   176,    -1,
     178,   179,   180,   181,    -1,   183,    -1,   185,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,   209,   210,   211,    -1,    -1,    -1,    -1,   216,    -1,
     218,   219,   220,    -1,   222,    -1,    -1,    -1,   226,   227,
     308,   229,   230,   231,   232,    -1,    -1,    -1,   236,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   277,
     278,   279,   280,   281,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   304,   305,   306,   307,
     308,   309,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    -1,    -1,    55,    -1,    57,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    -1,    95,    96,    97,    -1,    -1,   100,
      -1,   102,   103,   104,   105,    -1,   107,    -1,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
      -1,    -1,    -1,   124,    -1,   126,    -1,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,   148,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,    -1,    -1,   170,
     171,    -1,    -1,    -1,    -1,   176,    -1,   178,   179,   180,
     181,    -1,   183,    -1,   185,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,   210,
     211,    -1,    -1,    -1,    -1,   216,    -1,   218,   219,   220,
      -1,   222,    -1,    -1,    -1,   226,   227,   308,   229,   230,
     231,   232,    -1,    -1,    -1,   236,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,   277,   278,   279,   280,
     281,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   304,   305,   306,   307,   308,   309,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      -1,    95,    96,    97,    -1,    -1,   100,    -1,   102,   103,
     104,   105,    -1,   107,    -1,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,    -1,   126,    -1,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,   163,
     164,   165,   166,   167,    -1,    -1,   170,   171,    -1,    -1,
      -1,    -1,   176,    -1,   178,   179,   180,   181,    -1,   183,
      -1,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,
      -1,    -1,    -1,   207,    -1,   209,   210,   211,    -1,    -1,
      -1,    -1,   216,    -1,   218,   219,   220,    -1,   222,    -1,
      -1,    -1,   226,   227,   308,   229,   230,   231,   232,    -1,
      -1,    -1,   236,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,   277,   278,   279,   280,   281,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     304,   305,   306,   307,   308,   309,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,
      57,    58,    59,    -1,    -1,    62,    63,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    92,    93,    -1,    95,    96,
      97,    -1,    -1,   100,    -1,   102,   103,   104,   105,    -1,
     107,    -1,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,    -1,    -1,   124,    -1,   126,
      -1,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,   148,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,    -1,    -1,   170,   171,    -1,    -1,    -1,    -1,   176,
      -1,   178,   179,   180,   181,    -1,   183,    -1,   185,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
     207,    -1,   209,   210,   211,    -1,    -1,    -1,    -1,   216,
      -1,   218,   219,   220,    -1,   222,    -1,    -1,    -1,   226,
     227,   308,   229,   230,   231,   232,    -1,    -1,    -1,   236,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
     277,   278,   279,   280,   281,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   304,   305,   306,
     307,   308,   309,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    57,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,    -1,
      -1,    -1,    92,    93,    -1,    95,    96,    97,    -1,    -1,
     100,    -1,   102,   103,   104,   105,    -1,   107,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,    -1,    -1,   124,    -1,   126,    -1,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,   148,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,    -1,    -1,
     170,   171,    -1,    -1,    -1,    -1,   176,    -1,   178,   179,
     180,   181,    -1,   183,    -1,   185,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,
     210,   211,    -1,    -1,    -1,    -1,   216,    -1,   218,   219,
     220,    -1,   222,    -1,    -1,    -1,   226,   227,   308,   229,
     230,   231,   232,    -1,    -1,    -1,   236,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,   277,   278,   279,
     280,   281,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   304,   305,   306,   307,   308,   309,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    57,    58,    59,    -1,    -1,    62,
      63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    -1,    95,    96,    97,    -1,    -1,   100,    -1,   102,
     103,   104,   105,    -1,   107,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,    -1,    -1,
      -1,   124,    -1,   126,    -1,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,   148,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,    -1,    -1,   170,   171,    -1,
      -1,    -1,    -1,   176,    -1,   178,   179,   180,   181,    -1,
     183,    -1,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,   199,   200,    -1,    -1,
      -1,    -1,    -1,    -1,   207,    -1,   209,   210,   211,    -1,
      -1,    -1,    -1,   216,    -1,   218,   219,   220,    -1,   222,
      -1,    -1,    -1,   226,   227,   308,   229,   230,   231,   232,
      -1,    -1,    -1,   236,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,   277,   278,   279,   280,   281,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   304,   305,   306,   307,   308,   309,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    57,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    95,
      96,    97,    -1,    -1,   100,    -1,   102,   103,   104,   105,
      -1,   107,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,    -1,    -1,    -1,   124,    -1,
     126,    -1,   128,   129,    -1,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,   148,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,   163,   164,   165,
     166,   167,    -1,    -1,   170,   171,    -1,    -1,    -1,    -1,
     176,    -1,   178,   179,   180,   181,    -1,   183,    -1,   185,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,   209,   210,   211,    -1,    -1,    -1,    -1,
     216,    -1,   218,   219,   220,    -1,   222,    -1,    -1,    -1,
     226,   227,   308,   229,   230,   231,   232,    -1,    -1,    -1,
     236,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   277,   278,   279,   280,   281,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   304,   305,
     306,   307,   308,   309,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    57,    58,
      59,    -1,    -1,    62,    63,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,
      -1,    -1,    -1,    92,    93,    -1,    95,    96,    97,    -1,
      -1,   100,    -1,   102,   103,   104,   105,    -1,   107,    -1,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,    -1,   126,    -1,   128,
     129,    -1,   131,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,   146,    -1,   148,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,    -1,
      -1,   170,   171,    -1,    -1,    -1,    -1,   176,    -1,   178,
     179,   180,   181,    -1,   183,    -1,   185,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
     209,   210,   211,    -1,    -1,    -1,    -1,   216,    -1,   218,
     219,   220,    -1,   222,    -1,    -1,    -1,   226,   227,   308,
     229,   230,   231,   232,    -1,    -1,    -1,   236,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,   277,   278,
     279,   280,   281,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   304,   305,   306,   307,   308,
     309,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    57,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,
      92,    93,    -1,    95,    96,    97,    -1,    -1,   100,    -1,
     102,   103,   104,   105,    -1,   107,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,    -1,
      -1,    -1,   124,    -1,   126,    -1,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,   148,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,   163,   164,   165,   166,   167,    -1,    -1,   170,   171,
      -1,    -1,    -1,    -1,   176,    -1,   178,   179,   180,   181,
      -1,   183,    -1,   185,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,    -1,
      -1,    -1,    -1,    -1,    -1,   207,    -1,   209,   210,   211,
      -1,    -1,    -1,    -1,   216,    -1,   218,   219,   220,    -1,
     222,    -1,    -1,    -1,   226,   227,   308,   229,   230,   231,
     232,    -1,    -1,    -1,   236,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,   277,   278,   279,   280,   281,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   304,   305,   306,   307,   308,   309,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    57,    58,    59,    -1,    -1,    62,    63,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,
      95,    96,    97,    -1,    -1,   100,    -1,   102,   103,   104,
     105,    -1,   107,    -1,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,   124,
      -1,   126,    -1,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,   148,    -1,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,    -1,    -1,   170,   171,    -1,    -1,    -1,
      -1,   176,    -1,   178,   179,   180,   181,    -1,   183,    -1,
     185,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   276,   198,   199,   200,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,    -1,    -1,
      -1,   216,    -1,   218,   219,   220,    -1,   222,    -1,    -1,
      -1,   226,   227,   307,   229,   230,   231,   232,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,   307,    -1,    25,
      26,    -1,   277,   278,   279,   280,   281,    -1,    -1,    35,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   304,
     305,   306,   307,   308,   309,    61,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    89,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   122,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,   162,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,    -1,   275,
      -1,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,    -1,    -1,    -1,    -1,
     306,   147,    -1,    -1,     3,     4,     5,     6,     7,     8,
     211,    -1,    -1,    -1,    -1,    -1,   162,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    61,    -1,    -1,    -1,   212,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   307,   275,
      -1,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,    -1,    -1,    -1,    -1,
     306,    -1,    -1,   162,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,   275,    -1,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,    -1,    -1,    -1,    -1,   306,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,   307,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   230,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,   275,    -1,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,    -1,    -1,    -1,    -1,   306,    -1,   162,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    -1,
      -1,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   113,   275,    -1,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,    -1,
      -1,    -1,    -1,   306,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
     162,    -1,    -1,    -1,   307,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    92,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    -1,   275,    -1,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
      -1,    -1,    -1,   162,   306,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   307,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,   275,    -1,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,    -1,    -1,    -1,    -1,   306,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    17,    18,   307,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    61,    67,    68,   307,
      -1,    66,    -1,    -1,    69,    70,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    17,    18,    -1,    -1,    92,    -1,    -1,
      -1,    25,    -1,     3,    -1,    -1,    -1,    -1,   108,    -1,
      10,    11,    12,    13,    14,    15,    16,   211,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
     140,    41,    66,    -1,    -1,    69,    70,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    17,    18,    -1,   162,    92,    -1,
     170,   307,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   307,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    92,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
     275,    -1,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    -1,    -1,   162,
      -1,   306,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
      -1,   275,    -1,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,    -1,    -1,
      -1,    -1,   306,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,   275,    -1,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,    -1,
      -1,    -1,    -1,   306,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,   307,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   162,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,   275,    -1,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,    -1,    -1,    -1,    -1,   306,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     307,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   307,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     307,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   307,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   307,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   307,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   307,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   307,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   307,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   307,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   307,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     307,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   307,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   307,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   307,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   307,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   307,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   307,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   307,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   307,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   307,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   307,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   307,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   307,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     307,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   307,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   307,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   307,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   307,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   307,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   307,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   307,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   307,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    32,    -1,    -1,    -1,    36,    -1,    -1,   307,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    86,    87,   307,    88,
      -1,    90,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   307,
      -1,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,   307,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    -1,   113,    -1,    -1,   101,   199,
     200,    -1,    -1,   307,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,   223,   307,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   233,   234,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,   307,    -1,    -1,   151,    -1,
      -1,   154,    -1,    -1,   157,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,   199,    -1,   201,   202,
      -1,    -1,    -1,    -1,   207,    -1,   209,    -1,    -1,    -1,
      -1,   214,   215,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   226,    -1,   228,    -1,    -1,    -1,    -1,
     233,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    39,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    91,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    40,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    57,    62,    86,    87,   133,   175,   177,
     184,   199,   200,   213,   216,   223,   311,   347,   348,   385,
     389,   390,   393,   394,   397,   398,   399,   401,   411,   412,
     415,   417,   418,   419,   441,   444,   451,   452,   210,   210,
       3,    10,    75,    81,   116,   131,   171,   188,   204,   205,
     219,   423,   386,    75,   116,   131,   171,   188,   210,   403,
     210,   210,   403,     8,   188,   442,   443,   366,   210,   403,
     413,     3,    75,     0,   304,   396,     3,     3,   306,   184,
     132,   416,     3,     3,     3,    74,   132,     3,   416,   204,
     131,   210,     3,   113,   130,   145,   172,   387,     3,   132,
       3,   132,     3,     3,   132,     3,   132,     3,   132,    82,
     122,   130,   135,   145,   404,     3,     3,   404,     9,    20,
       3,    92,   308,     3,     4,     5,     6,     7,     8,    17,
      18,    25,    26,    35,    61,    66,    69,    70,    85,    89,
     122,   162,   187,   194,   195,   197,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   275,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     306,   312,   367,   368,     3,   130,   145,     3,   306,   370,
     371,   372,   374,   384,     3,   311,    44,    45,    63,   179,
      33,    64,    79,    87,    98,   156,   177,   225,   305,     3,
       4,     5,     6,     7,     8,   162,   307,   453,   454,   116,
     171,   236,     3,    41,   306,   166,     3,   132,   236,   306,
       3,     3,    74,   132,   416,   305,   388,     3,   387,   113,
     308,   236,   236,   236,   236,   236,     3,   203,     3,   312,
     312,   443,   305,   306,     9,   312,   312,   312,   230,   312,
     346,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   312,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    41,   369,   113,
     308,   308,   305,   369,   348,   370,   199,   308,    65,   129,
     146,   159,   183,   197,   375,   377,    41,   373,    43,    43,
      60,    73,     3,    73,    60,     3,    60,    73,    60,     3,
      73,     3,    60,    73,    60,     3,   307,   308,     3,     3,
      50,    51,    53,    55,    56,    71,    93,    94,    95,    96,
     101,   110,   128,   136,   144,   151,   154,   157,   158,   174,
     198,   199,   201,   202,   207,   209,   214,   215,   220,   226,
     228,   233,   437,     3,    16,   126,   164,   445,   446,   447,
       3,   166,   236,     3,   445,   166,     3,   132,   236,     3,
      26,   229,   349,   222,   370,     3,     3,     3,     3,     3,
       3,   199,   306,   405,     3,   199,   405,     3,   312,   317,
     318,   312,   312,   346,   102,   103,   230,   323,   312,    54,
     147,   212,   312,   344,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   307,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   307,
     312,   312,   312,   307,   312,   312,   312,   312,   312,   312,
      26,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   307,   307,   307,   307,   312,   312,   307,   307,
     307,   312,   312,     5,   307,   307,   307,   312,   312,   312,
     312,   312,     6,    18,   162,   274,   306,    13,    14,    16,
      19,   312,    35,    37,   193,   306,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,     3,   370,   368,
       3,   395,     3,   111,   130,   223,   381,   307,   307,     3,
     414,   371,   146,   183,   378,   372,   139,   165,   376,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   437,     3,
     203,     3,     3,     3,   454,   306,   306,   306,   433,   433,
     433,   433,   433,   433,   306,   433,   433,   433,    53,   434,
     434,   433,   433,   433,   306,   434,   433,   434,   306,   306,
      18,    67,    92,   437,     3,     3,     3,   307,   308,   222,
     306,     3,     3,   166,   307,     3,   166,   236,     3,   130,
     184,   305,   306,   439,   440,   312,   167,   359,   370,   349,
     388,     3,   410,     3,   406,   227,   348,   410,   227,   348,
     308,   307,   211,   102,   103,   312,   312,   348,   113,   308,
     307,   113,   312,   308,   308,   308,   307,   307,   307,   307,
     307,   307,   308,   308,   308,   308,   307,   308,   308,   308,
     307,   307,   307,   307,   308,   308,   307,   308,   307,   307,
     307,    41,   308,   308,   308,   308,   276,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   308,   308,   308,
     307,   308,   302,   302,   302,   307,   308,   307,   308,   307,
     302,   302,     6,   162,   319,   321,   312,   312,   306,   312,
      40,   306,   306,   306,   313,   349,   308,   369,   140,   140,
     140,    20,   305,   308,   349,   376,   376,   139,   166,   372,
     139,    67,   112,   170,   219,   437,   437,     3,   432,   437,
       3,   203,   203,   445,   445,     5,   435,   436,   435,   435,
       4,   438,   435,   435,   435,   436,   436,   435,   435,   435,
     438,   436,   435,   436,     5,     5,   162,   306,   312,   437,
     437,   437,   181,   447,   224,     3,   282,   283,   284,   285,
     391,   392,   222,   306,   166,     3,    41,    49,   222,   306,
       3,     3,   166,     3,    60,    67,   112,   115,   131,   140,
     170,   219,   424,   425,   431,   373,    52,   148,   362,   349,
      20,   168,   308,   402,   307,   308,   306,   407,   402,   407,
     402,   317,   312,   312,   102,   211,   307,   312,   312,   312,
     113,   137,   345,   345,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   437,   437,   312,   312,   312,
       4,   302,   302,   302,   302,   302,   302,   312,   312,   312,
     312,   306,   306,   306,   302,     5,   302,     5,   302,   306,
     306,   317,   348,   320,   322,    40,   312,   316,   314,   315,
     348,   118,   350,     3,   381,   117,   382,   382,   382,   312,
       3,     3,   359,   372,   312,   166,   222,   379,   380,   372,
     306,   140,   140,   306,   432,   432,   437,    18,    34,    38,
      41,    43,    46,    60,    67,    68,    92,   108,   140,   162,
     170,   219,   400,   432,     3,     3,   307,   307,   307,   308,
     217,   235,    71,    72,   307,   308,   307,   307,   307,    67,
     312,    51,    55,    93,    96,   110,   128,   136,   207,   209,
     226,   448,   306,   306,   306,   306,   306,   307,   308,   224,
     391,     3,   222,   306,    49,   449,   224,   391,   222,   306,
     166,     3,   306,   439,     3,   306,   140,   131,   140,   306,
     306,   140,   306,   307,   308,     3,   348,     3,     5,   360,
     361,   312,    92,   312,   140,     3,     3,    92,   312,   409,
     308,   402,   402,   102,   312,   117,   307,   307,   308,   307,
     312,   312,   307,   307,   307,   307,   307,   308,   308,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   308,
     307,   306,   306,   306,   306,   306,   306,   307,   308,   308,
     307,   307,   324,   325,   326,   306,   307,   308,   306,   307,
     308,   306,   342,   343,   307,   307,   317,   348,   312,   348,
     348,   348,   307,    52,   124,   354,   139,   306,   306,   306,
      20,    20,   305,   362,   312,   306,   380,   312,   306,   306,
       3,   430,   400,   400,   432,   162,     3,   306,   306,   306,
      42,     3,   306,     4,     4,     5,     6,     7,    61,   288,
     289,   290,   306,   140,   140,   400,   181,    41,    49,     5,
     199,     4,   436,     4,   436,   436,   306,   307,    41,    49,
     391,     3,     3,     3,     3,     3,   306,   307,   306,   224,
     391,   449,     3,     4,     5,     6,     7,     8,    10,    12,
      16,    17,    18,    20,    24,    25,    26,    27,    28,    35,
      40,    41,    44,    49,    50,    51,    52,    55,    57,    58,
      59,    62,    63,    65,    66,    67,    71,    76,    80,    85,
      86,    87,    92,    93,    95,    96,    97,   100,   102,   103,
     104,   105,   107,   109,   110,   112,   113,   114,   116,   117,
     118,   119,   124,   126,   128,   129,   131,   132,   133,   134,
     135,   136,   138,   139,   140,   141,   142,   146,   148,   150,
     159,   161,   162,   163,   164,   165,   166,   167,   170,   171,
     176,   178,   179,   180,   181,   183,   185,   186,   198,   199,
     200,   207,   209,   210,   211,   216,   218,   219,   220,   222,
     226,   227,   229,   230,   231,   232,   236,   277,   278,   279,
     280,   281,   304,   305,   306,   307,   308,   309,   450,   306,
     307,   224,   391,     3,   222,   306,   424,    67,   112,   170,
     219,   312,   306,   306,   306,     3,   365,   365,   306,   430,
     420,   439,   425,   437,    39,    91,   305,   352,   352,   308,
     150,   308,   216,    20,   307,   308,   408,   312,   312,   307,
      83,    84,    88,    90,   120,   121,   123,   233,   234,   312,
     312,   312,   328,   329,   327,   330,   331,   332,   312,   312,
     303,   355,   355,   355,   333,   302,     4,     5,   337,   302,
       4,     5,   341,   355,   355,   307,   307,   307,   307,   307,
     312,   351,   312,   359,     3,   383,   383,   383,   312,   312,
       3,   365,   307,     3,   427,     3,   426,   307,   308,   400,
       5,   312,     5,    41,    67,   170,   219,   312,   306,   306,
     306,   312,   448,    49,   449,   307,     4,   312,    49,   449,
     307,   307,   307,   307,   308,   391,   391,   306,   307,   102,
     449,   449,   449,   449,   449,   449,   391,   306,   307,   306,
     224,   391,   307,   306,   140,   140,   306,   307,   427,   365,
     365,   307,   308,   307,   426,   307,    38,   166,   189,   432,
       3,   361,   312,   312,   410,    92,   312,    92,   312,   306,
     307,   307,   307,   307,   307,   355,   355,   355,   355,   355,
     355,   307,   308,   307,    52,   167,   357,   357,   357,   355,
     306,   307,   307,   355,   306,   307,   307,   355,   357,   357,
     352,   232,   308,   353,   362,   307,   308,   307,   307,    20,
     307,    18,   307,   308,   307,   308,     3,   307,   308,   307,
     307,   308,   306,   306,   140,   307,   307,   307,   307,   307,
      41,    49,   449,   102,   307,   449,   102,     3,   307,   307,
     391,   102,   102,   102,   102,   102,   102,   307,   391,   391,
     306,   307,   420,   439,   312,   306,   306,   430,   307,   307,
     307,     3,   307,     5,    20,     3,    52,   352,   409,   357,
     357,   357,   357,   357,   357,   312,     3,   356,    52,   307,
     307,   307,   357,   334,   302,   302,   357,   338,   302,   302,
     357,   307,   307,   182,   312,   117,   363,     3,   312,   225,
     176,     3,     3,     5,    47,    48,     5,   312,   312,    49,
     449,   102,   102,   307,   307,    66,   109,   132,   142,   231,
     307,   307,   391,   307,   427,   426,   307,   176,     5,    86,
     206,   173,   224,   307,   307,   307,   307,   307,   307,   307,
     307,   308,     3,   358,   307,   355,   306,   306,   307,   355,
     306,   306,   307,   352,   191,   216,   135,   364,     3,   307,
     307,   307,   307,   449,   102,   307,   307,   307,     3,     3,
       3,   306,   306,     3,   352,   308,   357,   335,   336,   357,
     339,   340,   192,   192,   365,   306,    47,    48,   102,   176,
     305,   306,     3,     3,     3,   307,   355,   355,   307,   355,
     355,   149,   149,     3,   428,     3,     3,   428,   307,   307,
     352,   357,   357,   357,   357,   307,   308,   305,   306,   306,
     307,   306,   190,   307,   307,   307,   307,   429,     3,     3,
     428,   428,   429,   189,   421,   422,     5,    18,    77,   152,
     166,   306,   307,   307,    18,     3,   307,   308,    77,   225,
     127,   114,   169,   196,    86,   216,   428,   429,   429,   227,
     422,    78,   125,    63,   161,   179,   199,    63,   161,   179,
     199,   307,   143,    92,   162,    92,   162,   429,   208,     4,
     153,   166,   166,   160,   160,     5,     5
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
#line 400 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 406 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 407 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 409 "parser/evoparser.y"
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
#line 427 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 435 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 443 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 449 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 456 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 457 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 458 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 459 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 460 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 461 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 462 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 463 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 464 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 465 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 466 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 467 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 468 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 469 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 470 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 471 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 472 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 474 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 479 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 480 "parser/evoparser.y"
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
#line 488 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 489 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 490 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 491 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 492 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 493 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 496 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 497 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 498 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 499 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 500 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 503 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 504 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 507 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 508 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 511 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 515 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 515 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 516 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 516 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 517 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 518 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 525 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 526 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 533 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 534 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 544 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 548 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 549 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 550 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 551 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 552 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 553 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 554 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 555 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 559 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 69:
#line 560 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 70:
#line 561 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 71:
#line 562 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 72:
#line 563 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 73:
#line 564 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 74:
#line 566 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 75:
#line 567 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 76:
#line 568 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 77:
#line 569 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 78:
#line 570 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 571 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 80:
#line 572 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 573 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 82:
#line 574 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 575 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 84:
#line 576 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 577 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 86:
#line 579 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 580 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 88:
#line 581 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 89:
#line 582 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 583 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 91:
#line 584 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 585 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 93:
#line 586 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 587 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 95:
#line 588 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 96:
#line 589 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 97:
#line 590 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 98:
#line 591 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 99:
#line 592 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 100:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 101:
#line 594 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 596 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 103:
#line 597 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 104:
#line 598 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 105:
#line 599 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 106:
#line 600 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 107:
#line 601 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 108:
#line 604 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 109:
#line 605 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 110:
#line 606 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 111:
#line 607 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 608 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 113:
#line 609 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 114:
#line 610 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 115:
#line 611 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 612 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 613 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 614 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 615 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 120:
#line 616 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 617 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 122:
#line 618 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 123:
#line 619 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 124:
#line 620 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 125:
#line 621 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 126:
#line 622 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 127:
#line 623 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 128:
#line 624 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 129:
#line 625 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 130:
#line 626 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 131:
#line 627 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 132:
#line 628 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 133:
#line 629 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 134:
#line 630 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 135:
#line 631 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 136:
#line 632 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 137:
#line 633 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 138:
#line 634 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 139:
#line 635 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 140:
#line 636 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 141:
#line 637 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 142:
#line 639 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 143:
#line 640 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 144:
#line 641 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 145:
#line 642 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 146:
#line 643 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 147:
#line 644 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 148:
#line 645 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 149:
#line 646 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 150:
#line 648 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 151:
#line 649 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 152:
#line 651 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 153:
#line 652 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 154:
#line 653 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 155:
#line 655 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 156:
#line 656 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 157:
#line 657 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 158:
#line 658 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 159:
#line 665 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 160:
#line 672 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 161:
#line 679 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 162:
#line 683 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 163:
#line 687 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 164:
#line 693 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 165:
#line 694 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 166:
#line 695 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 167:
#line 699 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 168:
#line 705 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 169:
#line 711 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 170:
#line 712 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 171:
#line 713 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 172:
#line 714 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 173:
#line 715 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 174:
#line 716 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 175:
#line 717 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 176:
#line 718 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 177:
#line 719 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 178:
#line 723 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 179:
#line 725 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 180:
#line 727 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 181:
#line 729 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 182:
#line 733 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 183:
#line 741 "parser/evoparser.y"
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
#line 751 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 185:
#line 752 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 186:
#line 755 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 187:
#line 756 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 188:
#line 760 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 189:
#line 768 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 190:
#line 776 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 191:
#line 787 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 192:
#line 796 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 193:
#line 801 "parser/evoparser.y"
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
#line 812 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 197:
#line 814 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 198:
#line 817 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 199:
#line 824 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 200:
#line 832 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 201:
#line 833 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 834 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 837 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 204:
#line 838 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 206:
#line 842 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 209:
#line 851 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 210:
#line 853 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 213:
#line 861 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 214:
#line 863 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 219:
#line 875 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 220:
#line 881 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 221:
#line 888 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 222:
#line 896 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 223:
#line 897 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 224:
#line 898 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 225:
#line 899 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 226:
#line 902 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 227:
#line 903 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 228:
#line 904 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 229:
#line 905 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 230:
#line 906 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 232:
#line 910 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 233:
#line 913 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 234:
#line 914 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 235:
#line 917 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 918 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 237:
#line 919 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 238:
#line 920 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 239:
#line 921 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 240:
#line 922 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 241:
#line 923 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 242:
#line 924 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 243:
#line 925 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 244:
#line 928 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 245:
#line 929 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 931 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 247:
#line 939 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 248:
#line 944 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 249:
#line 945 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 250:
#line 946 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 251:
#line 949 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 950 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 255:
#line 959 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 256:
#line 965 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 257:
#line 966 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 258:
#line 967 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 261:
#line 976 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 262:
#line 978 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 263:
#line 980 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 264:
#line 982 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 265:
#line 984 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 266:
#line 987 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 988 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 989 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 269:
#line 992 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 993 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 271:
#line 996 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 272:
#line 997 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 273:
#line 1000 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 274:
#line 1001 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 275:
#line 1002 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 1009 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 279:
#line 1010 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 280:
#line 1015 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 281:
#line 1017 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 282:
#line 1019 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 284:
#line 1023 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1024 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1027 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1028 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1031 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 289:
#line 1036 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 290:
#line 1046 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 291:
#line 1053 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 292:
#line 1054 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 293:
#line 1055 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 294:
#line 1056 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1061 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 296:
#line 1065 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1067 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 300:
#line 1073 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 301:
#line 1078 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 302:
#line 1085 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 303:
#line 1092 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 304:
#line 1102 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 305:
#line 1109 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 306:
#line 1116 "parser/evoparser.y"
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
#line 1126 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 308:
#line 1134 "parser/evoparser.y"
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
#line 1144 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 310:
#line 1152 "parser/evoparser.y"
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
#line 1161 "parser/evoparser.y"
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
#line 1170 "parser/evoparser.y"
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
#line 1180 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 314:
#line 1188 "parser/evoparser.y"
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
#line 1197 "parser/evoparser.y"
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
#line 1206 "parser/evoparser.y"
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
#line 1216 "parser/evoparser.y"
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
#line 1225 "parser/evoparser.y"
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
#line 1237 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 320:
#line 1242 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 321:
#line 1247 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 322:
#line 1253 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 323:
#line 1260 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 324:
#line 1267 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 325:
#line 1274 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 326:
#line 1284 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 327:
#line 1291 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1300 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 329:
#line 1307 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 330:
#line 1313 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 331:
#line 1321 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 332:
#line 1327 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 334:
#line 1335 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 335:
#line 1336 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 336:
#line 1337 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 337:
#line 1338 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 338:
#line 1343 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 339:
#line 1350 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 340:
#line 1359 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 341:
#line 1366 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 342:
#line 1372 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 343:
#line 1382 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 344:
#line 1386 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 345:
#line 1392 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 346:
#line 1398 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 347:
#line 1405 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 348:
#line 1411 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 349:
#line 1418 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 350:
#line 1424 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 351:
#line 1430 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 352:
#line 1436 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 353:
#line 1442 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 354:
#line 1448 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 355:
#line 1454 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 356:
#line 1460 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 357:
#line 1466 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 358:
#line 1472 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 359:
#line 1478 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 360:
#line 1484 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 361:
#line 1490 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 362:
#line 1496 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 363:
#line 1502 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 364:
#line 1509 "parser/evoparser.y"
    { ;}
    break;

  case 365:
#line 1510 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 366:
#line 1511 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 367:
#line 1515 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 368:
#line 1523 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 369:
#line 1529 "parser/evoparser.y"
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
#line 1542 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 372:
#line 1545 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 373:
#line 1546 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 374:
#line 1547 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 375:
#line 1548 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 376:
#line 1549 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 380:
#line 1556 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 381:
#line 1560 "parser/evoparser.y"
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
#line 1570 "parser/evoparser.y"
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
#line 1582 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 384:
#line 1583 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 385:
#line 1583 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 386:
#line 1586 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 387:
#line 1587 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1588 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1589 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 390:
#line 1593 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 391:
#line 1596 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1597 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1598 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 394:
#line 1599 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1605 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 396:
#line 1611 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 397:
#line 1616 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 398:
#line 1621 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 399:
#line 1626 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 400:
#line 1635 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 401:
#line 1642 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 402:
#line 1643 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 403:
#line 1644 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 404:
#line 1649 "parser/evoparser.y"
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
#line 1660 "parser/evoparser.y"
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
#line 1672 "parser/evoparser.y"
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
#line 1683 "parser/evoparser.y"
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
#line 1698 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 409:
#line 1702 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 410:
#line 1706 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 411:
#line 1707 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 412:
#line 1712 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 413:
#line 1714 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 414:
#line 1716 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 415:
#line 1718 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 416:
#line 1721 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 417:
#line 1722 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 418:
#line 1728 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 419:
#line 1733 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 420:
#line 1735 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 421:
#line 1737 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 422:
#line 1739 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 423:
#line 1741 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 424:
#line 1745 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1749 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 426:
#line 1750 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 427:
#line 1755 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 428:
#line 1765 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 429:
#line 1774 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 431:
#line 1778 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 432:
#line 1779 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 433:
#line 1780 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 434:
#line 1781 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 435:
#line 1783 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 436:
#line 1785 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 439:
#line 1793 "parser/evoparser.y"
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
#line 1808 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 441:
#line 1816 "parser/evoparser.y"
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
#line 1830 "parser/evoparser.y"
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
#line 1844 "parser/evoparser.y"
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
#line 1858 "parser/evoparser.y"
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
#line 1870 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 446:
#line 1871 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 447:
#line 1872 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 448:
#line 1875 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 449:
#line 1876 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1879 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 451:
#line 1880 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 452:
#line 1881 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 453:
#line 1882 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 454:
#line 1883 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 455:
#line 1884 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 456:
#line 1885 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 457:
#line 1886 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 458:
#line 1888 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 459:
#line 1890 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 460:
#line 1892 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 461:
#line 1894 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 462:
#line 1896 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 463:
#line 1898 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 464:
#line 1901 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 465:
#line 1902 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 1905 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 467:
#line 1906 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 468:
#line 1909 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 469:
#line 1910 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1914 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 472:
#line 1915 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 473:
#line 1916 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 474:
#line 1917 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 475:
#line 1918 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 476:
#line 1919 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 477:
#line 1920 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 478:
#line 1921 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 479:
#line 1922 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 480:
#line 1923 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 481:
#line 1924 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 482:
#line 1925 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 483:
#line 1926 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 484:
#line 1927 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 485:
#line 1928 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 486:
#line 1929 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 487:
#line 1930 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 488:
#line 1933 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 489:
#line 1934 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 490:
#line 1937 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 491:
#line 1939 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 492:
#line 1947 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 493:
#line 1948 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 495:
#line 1950 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 496:
#line 1951 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 497:
#line 1952 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 498:
#line 1953 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1954 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 500:
#line 1955 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 501:
#line 1956 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 502:
#line 1957 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 1958 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 504:
#line 1965 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 505:
#line 1966 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 506:
#line 1967 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 507:
#line 1968 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 508:
#line 1969 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 509:
#line 1970 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 510:
#line 1971 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 511:
#line 1972 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 512:
#line 1973 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 513:
#line 1974 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 514:
#line 1975 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 515:
#line 1976 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 516:
#line 1977 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 517:
#line 1978 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 518:
#line 1979 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 519:
#line 1980 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 520:
#line 1981 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 521:
#line 1982 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 522:
#line 1983 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 523:
#line 1984 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 524:
#line 1985 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 525:
#line 1988 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 526:
#line 1989 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 527:
#line 1990 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 528:
#line 1993 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 529:
#line 1994 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 530:
#line 1997 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 531:
#line 1998 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 532:
#line 1999 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 534:
#line 2003 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 535:
#line 2004 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 536:
#line 2008 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 537:
#line 2009 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 538:
#line 2010 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 539:
#line 2011 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 540:
#line 2012 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 541:
#line 2013 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 542:
#line 2014 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 543:
#line 2015 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 544:
#line 2016 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 545:
#line 2017 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 546:
#line 2018 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 547:
#line 2019 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 548:
#line 2020 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 549:
#line 2021 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 550:
#line 2022 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 551:
#line 2023 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 552:
#line 2024 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 553:
#line 2025 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 554:
#line 2026 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 555:
#line 2027 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 556:
#line 2028 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 557:
#line 2029 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 558:
#line 2030 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 559:
#line 2031 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 560:
#line 2032 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 561:
#line 2033 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 562:
#line 2034 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 563:
#line 2035 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 564:
#line 2036 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 565:
#line 2037 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 566:
#line 2038 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 567:
#line 2039 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 568:
#line 2042 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 569:
#line 2043 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2047 "parser/evoparser.y"
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
#line 2059 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 572:
#line 2060 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 573:
#line 2061 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 574:
#line 2065 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 575:
#line 2068 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 576:
#line 2069 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 580:
#line 2073 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 581:
#line 2074 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 582:
#line 2082 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 583:
#line 2087 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 584:
#line 2093 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 585:
#line 2099 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 586:
#line 2106 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 587:
#line 2113 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 588:
#line 2119 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 589:
#line 2125 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 590:
#line 2132 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 595:
#line 2148 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 596:
#line 2149 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 597:
#line 2150 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 598:
#line 2151 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 599:
#line 2154 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 600:
#line 2155 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 601:
#line 2156 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 602:
#line 2157 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 603:
#line 2158 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 604:
#line 2159 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 605:
#line 2160 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 606:
#line 2161 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 607:
#line 2162 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 608:
#line 2163 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 617:
#line 2180 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 618:
#line 2181 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 735:
#line 2199 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 736:
#line 2206 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 737:
#line 2211 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 738:
#line 2217 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 739:
#line 2223 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 740:
#line 2229 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 741:
#line 2240 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 742:
#line 2245 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 743:
#line 2251 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 746:
#line 2262 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 747:
#line 2263 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 748:
#line 2264 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 749:
#line 2265 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 750:
#line 2266 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 751:
#line 2267 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 752:
#line 2268 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8604 "parser/evoparser.tab.c"
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


#line 2271 "parser/evoparser.y"

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
