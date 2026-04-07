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
     RETURNING = 429,
     RETURNS = 430,
     ROLLUP = 431,
     RIGHT = 432,
     REPLACE = 433,
     ROW = 434,
     SIGNAL = 435,
     TRIGGER = 436,
     UNTIL = 437,
     SQL_SMALL_RESULT = 438,
     SCHEMA = 439,
     SHARD = 440,
     SHARDS = 441,
     SHARE = 442,
     SKIP = 443,
     SOME = 444,
     SQL_CALC_FOUND_ROWS = 445,
     SQL_BIG_RESULT = 446,
     SIMPLE = 447,
     STRAIGHT_JOIN = 448,
     SMALLINT = 449,
     SET = 450,
     SELECT = 451,
     TINYTEXT = 452,
     TINYINT = 453,
     TO = 454,
     TEMPORARY = 455,
     GLOBAL = 456,
     PRESERVE = 457,
     TEXT = 458,
     THAN = 459,
     TIMESTAMP = 460,
     TABLE = 461,
     THEN = 462,
     TRAILING = 463,
     TRUNCATE = 464,
     TINYBLOB = 465,
     TIME = 466,
     UPDATE = 467,
     UNSIGNED = 468,
     UNION = 469,
     UNIQUE = 470,
     UUID = 471,
     VIEW = 472,
     USING = 473,
     USE = 474,
     HASH = 475,
     VALIDATE = 476,
     VARCHAR = 477,
     VALUES = 478,
     VARBINARY = 479,
     WHERE = 480,
     WHEN = 481,
     WHILE = 482,
     WITH = 483,
     YEAR = 484,
     YEAR_MONTH = 485,
     ZEROFILL = 486,
     EXISTS = 487,
     FSUBSTRING = 488,
     FTRIM = 489,
     FDATE_ADD = 490,
     FDATE_SUB = 491,
     FDATEDIFF = 492,
     FYEAR = 493,
     FMONTH = 494,
     FDAY = 495,
     FHOUR = 496,
     FMINUTE = 497,
     FSECOND = 498,
     FNOW = 499,
     FLEFT = 500,
     FRIGHT = 501,
     FLPAD = 502,
     FRPAD = 503,
     FREVERSE = 504,
     FREPEAT = 505,
     FINSTR = 506,
     FLOCATE = 507,
     FABS = 508,
     FCEIL = 509,
     FFLOOR = 510,
     FROUND = 511,
     FPOWER = 512,
     FSQRT = 513,
     FMOD = 514,
     FRAND = 515,
     FLOG = 516,
     FLOG10 = 517,
     FSIGN = 518,
     FPI = 519,
     FCAST = 520,
     FCONVERT = 521,
     FNULLIF = 522,
     FIFNULL = 523,
     FIF = 524,
     UNKNOWN = 525,
     FGROUP_CONCAT = 526,
     SEPARATOR = 527,
     FCOUNT = 528,
     FSUM = 529,
     FAVG = 530,
     FMIN = 531,
     FMAX = 532,
     FUPPER = 533,
     FLOWER = 534,
     FLENGTH = 535,
     FCONCAT = 536,
     FREPLACE = 537,
     FCOALESCE = 538,
     FGEN_RANDOM_UUID = 539,
     FGEN_RANDOM_UUID_V7 = 540,
     FSNOWFLAKE_ID = 541,
     FLAST_INSERT_ID = 542,
     FEVO_SLEEP = 543,
     FEVO_JITTER = 544,
     FROW_NUMBER = 545,
     FRANK = 546,
     FDENSE_RANK = 547,
     FLEAD = 548,
     FLAG = 549,
     FNTILE = 550,
     FPERCENT_RANK = 551,
     FCUME_DIST = 552,
     OVER = 553,
     PARTITION = 554
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
#define RETURNING 429
#define RETURNS 430
#define ROLLUP 431
#define RIGHT 432
#define REPLACE 433
#define ROW 434
#define SIGNAL 435
#define TRIGGER 436
#define UNTIL 437
#define SQL_SMALL_RESULT 438
#define SCHEMA 439
#define SHARD 440
#define SHARDS 441
#define SHARE 442
#define SKIP 443
#define SOME 444
#define SQL_CALC_FOUND_ROWS 445
#define SQL_BIG_RESULT 446
#define SIMPLE 447
#define STRAIGHT_JOIN 448
#define SMALLINT 449
#define SET 450
#define SELECT 451
#define TINYTEXT 452
#define TINYINT 453
#define TO 454
#define TEMPORARY 455
#define GLOBAL 456
#define PRESERVE 457
#define TEXT 458
#define THAN 459
#define TIMESTAMP 460
#define TABLE 461
#define THEN 462
#define TRAILING 463
#define TRUNCATE 464
#define TINYBLOB 465
#define TIME 466
#define UPDATE 467
#define UNSIGNED 468
#define UNION 469
#define UNIQUE 470
#define UUID 471
#define VIEW 472
#define USING 473
#define USE 474
#define HASH 475
#define VALIDATE 476
#define VARCHAR 477
#define VALUES 478
#define VARBINARY 479
#define WHERE 480
#define WHEN 481
#define WHILE 482
#define WITH 483
#define YEAR 484
#define YEAR_MONTH 485
#define ZEROFILL 486
#define EXISTS 487
#define FSUBSTRING 488
#define FTRIM 489
#define FDATE_ADD 490
#define FDATE_SUB 491
#define FDATEDIFF 492
#define FYEAR 493
#define FMONTH 494
#define FDAY 495
#define FHOUR 496
#define FMINUTE 497
#define FSECOND 498
#define FNOW 499
#define FLEFT 500
#define FRIGHT 501
#define FLPAD 502
#define FRPAD 503
#define FREVERSE 504
#define FREPEAT 505
#define FINSTR 506
#define FLOCATE 507
#define FABS 508
#define FCEIL 509
#define FFLOOR 510
#define FROUND 511
#define FPOWER 512
#define FSQRT 513
#define FMOD 514
#define FRAND 515
#define FLOG 516
#define FLOG10 517
#define FSIGN 518
#define FPI 519
#define FCAST 520
#define FCONVERT 521
#define FNULLIF 522
#define FIFNULL 523
#define FIF 524
#define UNKNOWN 525
#define FGROUP_CONCAT 526
#define SEPARATOR 527
#define FCOUNT 528
#define FSUM 529
#define FAVG 530
#define FMIN 531
#define FMAX 532
#define FUPPER 533
#define FLOWER 534
#define FLENGTH 535
#define FCONCAT 536
#define FREPLACE 537
#define FCOALESCE 538
#define FGEN_RANDOM_UUID 539
#define FGEN_RANDOM_UUID_V7 540
#define FSNOWFLAKE_ID 541
#define FLAST_INSERT_ID 542
#define FEVO_SLEEP 543
#define FEVO_JITTER 544
#define FROW_NUMBER 545
#define FRANK 546
#define FDENSE_RANK 547
#define FLEAD 548
#define FLAG 549
#define FNTILE 550
#define FPERCENT_RANK 551
#define FCUME_DIST 552
#define OVER 553
#define PARTITION 554




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
#line 749 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 762 "parser/evoparser.tab.c"

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
#define YYLAST   9103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  315
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  776
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1866

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   554

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     311,   312,    26,    24,   313,    25,   310,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   309,
       2,   314,     2,     2,     2,     2,     2,     2,     2,     2,
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
     304,   305,   306,   307,   308
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
    1286,  1295,  1298,  1301,  1304,  1305,  1312,  1315,  1320,  1321,
    1324,  1332,  1334,  1338,  1344,  1346,  1355,  1366,  1376,  1388,
    1399,  1412,  1424,  1438,  1448,  1460,  1471,  1484,  1496,  1509,
    1511,  1515,  1517,  1522,  1527,  1532,  1539,  1541,  1545,  1548,
    1552,  1558,  1560,  1564,  1565,  1568,  1571,  1575,  1579,  1581,
    1585,  1587,  1591,  1597,  1599,  1610,  1621,  1639,  1652,  1672,
    1684,  1691,  1700,  1707,  1714,  1721,  1731,  1738,  1744,  1753,
    1761,  1771,  1780,  1791,  1801,  1802,  1804,  1807,  1809,  1819,
    1826,  1827,  1828,  1834,  1838,  1844,  1845,  1848,  1851,  1854,
    1857,  1859,  1860,  1861,  1865,  1867,  1871,  1875,  1876,  1883,
    1885,  1887,  1891,  1895,  1903,  1907,  1911,  1917,  1923,  1925,
    1934,  1942,  1950,  1952,  1962,  1963,  1966,  1969,  1973,  1979,
    1985,  1993,  1999,  2001,  2006,  2011,  2015,  2021,  2025,  2031,
    2032,  2035,  2037,  2043,  2051,  2059,  2069,  2081,  2083,  2086,
    2090,  2092,  2102,  2114,  2115,  2120,  2124,  2130,  2136,  2146,
    2157,  2159,  2163,  2173,  2183,  2193,  2200,  2212,  2221,  2222,
    2224,  2227,  2229,  2233,  2239,  2247,  2252,  2257,  2263,  2269,
    2274,  2281,  2293,  2307,  2321,  2337,  2342,  2349,  2351,  2355,
    2357,  2361,  2363,  2367,  2368,  2373,  2379,  2384,  2390,  2395,
    2401,  2406,  2412,  2417,  2422,  2426,  2430,  2434,  2437,  2441,
    2446,  2451,  2453,  2457,  2458,  2463,  2464,  2468,  2471,  2475,
    2479,  2483,  2487,  2493,  2499,  2505,  2509,  2515,  2518,  2526,
    2532,  2540,  2546,  2549,  2553,  2556,  2560,  2563,  2567,  2573,
    2578,  2584,  2592,  2601,  2610,  2618,  2625,  2632,  2638,  2639,
    2643,  2649,  2650,  2652,  2653,  2656,  2659,  2660,  2665,  2669,
    2672,  2676,  2680,  2684,  2688,  2692,  2696,  2700,  2704,  2708,
    2712,  2714,  2716,  2718,  2720,  2722,  2726,  2732,  2735,  2740,
    2742,  2744,  2746,  2748,  2752,  2756,  2760,  2764,  2770,  2776,
    2778,  2780,  2782,  2786,  2790,  2791,  2793,  2795,  2797,  2801,
    2805,  2808,  2810,  2814,  2818,  2822,  2824,  2835,  2845,  2858,
    2870,  2883,  2895,  2910,  2924,  2925,  2927,  2929,  2933,  2936,
    2940,  2944,  2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,
    2964,  2966,  2968,  2969,  2972,  2977,  2983,  2989,  2995,  3001,
    3007,  3009,  3011,  3013,  3015,  3017,  3019,  3021,  3023,  3025,
    3027,  3029,  3031,  3033,  3035,  3037,  3039,  3041,  3043,  3045,
    3047,  3049,  3051,  3053,  3055,  3057,  3059,  3061,  3063,  3065,
    3067,  3069,  3071,  3073,  3075,  3077,  3079,  3081,  3083,  3085,
    3087,  3089,  3091,  3093,  3095,  3097,  3099,  3101,  3103,  3105,
    3107,  3109,  3111,  3113,  3115,  3117,  3119,  3121,  3123,  3125,
    3127,  3129,  3131,  3133,  3135,  3137,  3139,  3141,  3143,  3145,
    3147,  3149,  3151,  3153,  3155,  3157,  3159,  3161,  3163,  3165,
    3167,  3169,  3171,  3173,  3175,  3177,  3179,  3181,  3183,  3185,
    3187,  3189,  3191,  3193,  3195,  3197,  3199,  3201,  3203,  3205,
    3207,  3209,  3211,  3213,  3215,  3217,  3219,  3221,  3223,  3225,
    3227,  3229,  3231,  3233,  3235,  3237,  3239,  3241,  3243,  3245,
    3247,  3249,  3251,  3253,  3255,  3259,  3265,  3269,  3275,  3277,
    3282,  3288,  3290,  3294,  3296,  3298,  3300,  3302,  3304,  3306,
    3308,  3310,  3324,  3326,  3328,  3330,  3332,  3334,  3336,  3340,
    3346,  3351,  3356,  3357,  3360,  3363,  3365
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     316,     0,    -1,   352,   309,    -1,   352,   309,   316,    -1,
       3,    -1,     3,   310,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   164,    -1,   317,    24,
     317,    -1,   317,    25,   317,    -1,   317,    26,   317,    -1,
     317,    27,   317,    -1,   317,    28,   317,    -1,   317,    29,
     317,    -1,    25,   317,    -1,   311,   317,   312,    -1,   317,
      12,   317,    -1,   317,    10,   317,    -1,   317,    11,   317,
      -1,   317,    21,   317,    -1,   317,    22,   317,    -1,   317,
      30,   317,    -1,   317,    23,   317,    -1,    18,   317,    -1,
      17,   317,    -1,   317,    20,   317,    -1,    -1,   317,    20,
     311,   318,   353,   312,    -1,    -1,   317,    20,    37,   311,
     319,   353,   312,    -1,    -1,   317,    20,   198,   311,   320,
     353,   312,    -1,    -1,   317,    20,    35,   311,   321,   353,
     312,    -1,   317,    15,   164,    -1,   317,    15,    18,   164,
      -1,   317,    15,     6,    -1,   317,    15,    18,     6,    -1,
       8,     9,   317,    -1,   317,    19,   317,    40,   317,    -1,
     317,    18,    19,   317,    40,   317,    -1,   317,    -1,   317,
     313,   322,    -1,    -1,   322,    -1,    -1,   317,    16,   311,
     324,   322,   312,    -1,    -1,   317,    18,    16,   311,   325,
     322,   312,    -1,    -1,   317,    16,   311,   326,   353,   312,
      -1,    -1,   317,    18,    16,   311,   327,   353,   312,    -1,
      -1,   241,   311,   328,   353,   312,    -1,     3,   311,   323,
     312,    -1,   282,   311,    26,   312,    -1,   282,   311,   317,
     312,    -1,   283,   311,   317,   312,    -1,   284,   311,   317,
     312,    -1,   285,   311,   317,   312,    -1,   286,   311,   317,
     312,    -1,   280,   311,   317,   312,    -1,   280,   311,   317,
     281,     4,   312,    -1,    -1,   299,   311,   312,   307,   311,
     329,   360,   362,   312,    -1,    -1,   300,   311,   312,   307,
     311,   330,   360,   362,   312,    -1,    -1,   301,   311,   312,
     307,   311,   331,   360,   362,   312,    -1,    -1,   283,   311,
     317,   312,   307,   311,   332,   360,   362,   312,    -1,    -1,
     282,   311,    26,   312,   307,   311,   333,   360,   362,   312,
      -1,    -1,   282,   311,   317,   312,   307,   311,   334,   360,
     362,   312,    -1,    -1,   284,   311,   317,   312,   307,   311,
     335,   360,   362,   312,    -1,    -1,   285,   311,   317,   312,
     307,   311,   336,   360,   362,   312,    -1,    -1,   286,   311,
     317,   312,   307,   311,   337,   360,   362,   312,    -1,    -1,
     302,   311,   317,   312,   307,   311,   338,   360,   362,   312,
      -1,    -1,   302,   311,   317,   313,     5,   312,   307,   311,
     339,   360,   362,   312,    -1,    -1,   302,   311,   317,   313,
       5,   313,     4,   312,   307,   311,   340,   360,   362,   312,
      -1,    -1,   302,   311,   317,   313,     5,   313,     5,   312,
     307,   311,   341,   360,   362,   312,    -1,    -1,   303,   311,
     317,   312,   307,   311,   342,   360,   362,   312,    -1,    -1,
     303,   311,   317,   313,     5,   312,   307,   311,   343,   360,
     362,   312,    -1,    -1,   303,   311,   317,   313,     5,   313,
       4,   312,   307,   311,   344,   360,   362,   312,    -1,    -1,
     303,   311,   317,   313,     5,   313,     5,   312,   307,   311,
     345,   360,   362,   312,    -1,    -1,   304,   311,     5,   312,
     307,   311,   346,   360,   362,   312,    -1,    -1,   305,   311,
     312,   307,   311,   347,   360,   362,   312,    -1,    -1,   306,
     311,   312,   307,   311,   348,   360,   362,   312,    -1,   242,
     311,   317,   313,   317,   313,   317,   312,    -1,   242,   311,
     317,   313,   317,   312,    -1,   242,   311,   317,   115,   317,
     312,    -1,   242,   311,   317,   115,   317,   119,   317,   312,
      -1,   243,   311,   317,   312,    -1,   243,   311,   349,   317,
     115,   317,   312,    -1,   243,   311,   349,   115,   317,   312,
      -1,   287,   311,   317,   312,    -1,   288,   311,   317,   312,
      -1,   289,   311,   317,   312,    -1,   290,   311,   317,   313,
     317,   312,    -1,   291,   311,   317,   313,   317,   313,   317,
     312,    -1,   292,   311,   317,   313,   317,   312,    -1,   254,
     311,   317,   313,   317,   312,    -1,   255,   311,   317,   313,
     317,   312,    -1,   256,   311,   317,   313,   317,   313,   317,
     312,    -1,   257,   311,   317,   313,   317,   313,   317,   312,
      -1,   258,   311,   317,   312,    -1,   259,   311,   317,   313,
     317,   312,    -1,   260,   311,   317,   313,   317,   312,    -1,
     261,   311,   317,   313,   317,   312,    -1,   262,   311,   317,
     312,    -1,   263,   311,   317,   312,    -1,   264,   311,   317,
     312,    -1,   265,   311,   317,   313,   317,   312,    -1,   265,
     311,   317,   312,    -1,   266,   311,   317,   313,   317,   312,
      -1,   267,   311,   317,   312,    -1,   268,   311,   317,   313,
     317,   312,    -1,   269,   311,   312,    -1,   270,   311,   317,
     312,    -1,   271,   311,   317,   312,    -1,   272,   311,   317,
     312,    -1,   273,   311,   312,    -1,   253,   311,   312,    -1,
     246,   311,   317,   313,   317,   312,    -1,   247,   311,   317,
     312,    -1,   248,   311,   317,   312,    -1,   249,   311,   317,
     312,    -1,   250,   311,   317,   312,    -1,   251,   311,   317,
     312,    -1,   252,   311,   317,   312,    -1,   274,   311,   317,
      41,   444,   312,    -1,   275,   311,   317,   313,   444,   312,
      -1,   276,   311,   317,   313,   317,   312,    -1,   277,   311,
     317,   313,   317,   312,    -1,   278,   311,   317,   313,   317,
     313,   317,   312,    -1,   317,    15,   279,    -1,   290,   311,
     317,   313,   317,   313,   317,   312,    -1,   290,   311,   317,
     313,   317,   313,   317,   313,   317,   312,    -1,   293,   311,
     312,    -1,   294,   311,   312,    -1,   295,   311,   312,    -1,
     296,   311,   312,    -1,   297,   311,   317,   312,    -1,   298,
     311,   317,   313,   317,   312,    -1,   149,    -1,   217,    -1,
      55,    -1,   244,   311,   317,   313,   350,   312,    -1,   245,
     311,   317,   313,   350,   312,    -1,   139,   317,   238,    -1,
     139,   317,    84,    -1,   139,   317,    85,    -1,   139,   317,
      89,    -1,   139,   317,    91,    -1,   139,   317,   239,    -1,
     139,   317,   123,    -1,   139,   317,   122,    -1,   139,   317,
     125,    -1,    67,   317,   351,   104,    -1,    67,   317,   351,
     105,   317,   104,    -1,    67,   351,   104,    -1,    67,   351,
     105,   317,   104,    -1,   235,   317,   216,   317,    -1,   351,
     235,   317,   216,   317,    -1,   317,    14,   317,    -1,   317,
      18,    14,   317,    -1,   317,    13,   317,    -1,   317,    18,
      13,   317,    -1,    62,    -1,    70,    -1,    71,    -1,   353,
      -1,   205,   371,   372,    -1,   205,   371,   372,   115,   375,
     354,   355,   359,   364,   367,   368,   369,    -1,    -1,   234,
     317,    -1,    -1,   120,    53,   356,   358,    -1,   317,   357,
      -1,   356,   313,   317,   357,    -1,    -1,    39,    -1,    92,
      -1,    -1,   237,   185,    -1,    -1,   126,   317,    -1,    -1,
     308,    53,   361,    -1,     3,    -1,   361,   313,     3,    -1,
      -1,   169,    53,   363,    -1,     3,   357,    -1,   363,   313,
       3,   357,    -1,    -1,   169,    53,   365,    -1,   366,    -1,
     365,   313,   366,    -1,     3,   357,    -1,     3,   310,     3,
     357,    -1,     5,   357,    -1,    -1,   150,   317,    -1,   150,
     317,   313,   317,    -1,   150,   317,   152,   317,    -1,    -1,
     119,   221,    -1,   119,   196,    -1,   119,   221,   197,   151,
      -1,   119,   196,   197,   151,    -1,    -1,   137,   370,    -1,
       3,    -1,   370,   313,     3,    -1,    -1,   371,    35,    -1,
     371,    86,    -1,   371,    90,    -1,   371,   124,    -1,   371,
     202,    -1,   371,   192,    -1,   371,   200,    -1,   371,   199,
      -1,   373,    -1,   372,   313,   373,    -1,    26,    -1,   317,
     374,    -1,    41,     3,    -1,     3,    -1,    -1,   376,    -1,
     375,   313,   376,    -1,   377,    -1,   379,    -1,     3,   374,
     386,    -1,     3,   310,     3,   374,   386,    -1,   389,   378,
       3,    -1,   311,   375,   312,    -1,    41,    -1,    -1,   376,
     380,   141,   377,   384,    -1,   376,   202,   377,    -1,   376,
     202,   377,   168,   317,    -1,   376,   382,   381,   141,   377,
     385,    -1,   376,   161,   383,   141,   377,    -1,    -1,   131,
      -1,    66,    -1,    -1,   167,    -1,   148,    -1,   186,    -1,
     148,   381,    -1,   186,   381,    -1,    -1,    -1,   385,    -1,
     168,   317,    -1,   227,   311,   370,   312,    -1,   228,   142,
     387,   311,   388,   312,    -1,   132,   142,   387,   311,   388,
     312,    -1,   113,   142,   387,   311,   388,   312,    -1,    -1,
     119,   141,    -1,    -1,     3,    -1,   388,   313,     3,    -1,
     311,   353,   312,    -1,   390,    -1,    87,   391,   115,     3,
     354,   364,   367,   466,    -1,   391,   147,    -1,   391,   174,
      -1,   391,   132,    -1,    -1,    87,   391,   392,   115,   375,
     354,    -1,     3,   393,    -1,   392,   313,     3,   393,    -1,
      -1,   310,    26,    -1,    87,   391,   115,   392,   227,   375,
     354,    -1,   394,    -1,    88,   215,     3,    -1,    88,   215,
     134,   241,     3,    -1,   395,    -1,    63,   133,     3,   168,
       3,   311,   396,   312,    -1,    63,   133,   134,   241,     3,
     168,     3,   311,   396,   312,    -1,    63,   224,   133,     3,
     168,     3,   311,   396,   312,    -1,    63,   224,   133,   134,
     241,     3,   168,     3,   311,   396,   312,    -1,    63,   133,
       3,   168,     3,   227,   229,   311,   396,   312,    -1,    63,
     133,   134,   241,     3,   168,     3,   227,   229,   311,   396,
     312,    -1,    63,   224,   133,     3,   168,     3,   227,   229,
     311,   396,   312,    -1,    63,   224,   133,   134,   241,     3,
     168,     3,   227,   229,   311,   396,   312,    -1,    63,   133,
      75,     3,   168,     3,   311,   396,   312,    -1,    63,   133,
      75,   134,   241,     3,   168,     3,   311,   396,   312,    -1,
      63,   224,   133,    75,     3,   168,     3,   311,   396,   312,
      -1,    63,   224,   133,    75,   134,   241,     3,   168,     3,
     311,   396,   312,    -1,    63,   133,    75,     3,   168,     3,
     227,   229,   311,   396,   312,    -1,    63,   224,   133,    75,
       3,   168,     3,   227,   229,   311,   396,   312,    -1,     3,
      -1,   396,   313,     3,    -1,   397,    -1,   287,   311,     3,
     312,    -1,   288,   311,     3,   312,    -1,   289,   311,     3,
     312,    -1,   290,   311,     3,   313,     3,   312,    -1,   398,
      -1,    88,   133,     3,    -1,   399,   401,    -1,   218,   215,
       3,    -1,   218,   215,     3,   313,   400,    -1,     3,    -1,
     400,   313,     3,    -1,    -1,   401,    64,    -1,   401,   181,
      -1,   401,    45,    43,    -1,   401,    44,    43,    -1,   402,
      -1,   177,   215,     3,    -1,   403,    -1,    36,   215,     3,
      -1,    36,   215,     3,   310,     3,    -1,   404,    -1,    32,
     215,     3,    33,    61,     3,    68,   311,   317,   312,    -1,
      32,   215,     3,    33,    61,     3,   224,   311,   437,   312,
      -1,    32,   215,     3,    33,    61,     3,   114,   142,   311,
     434,   312,   178,     3,   311,   435,   312,   436,    -1,    32,
     215,     3,    33,    61,     3,    68,   311,   317,   312,    18,
     230,    -1,    32,   215,     3,    33,    61,     3,   114,   142,
     311,   434,   312,   178,     3,   311,   435,   312,   436,    18,
     230,    -1,    32,   215,     3,    33,    61,     3,   172,   142,
     311,   433,   312,    -1,    32,   215,     3,    88,    61,     3,
      -1,    32,   215,     3,   179,    61,     3,   208,     3,    -1,
      32,   215,     3,   100,    61,     3,    -1,    32,   215,     3,
      80,    61,     3,    -1,    32,   215,     3,   230,    61,     3,
      -1,    32,   215,     3,    33,    74,     3,   444,   439,   405,
      -1,    32,   215,     3,    88,    74,     3,    -1,    32,   215,
       3,    88,     3,    -1,    32,   215,     3,   179,    74,     3,
     208,     3,    -1,    32,   215,     3,   179,     3,   208,     3,
      -1,    32,   215,     3,   158,    74,     3,   444,   439,   405,
      -1,    32,   215,     3,   158,     3,   444,   439,   405,    -1,
      32,   215,     3,    65,    74,     3,     3,   444,   439,   405,
      -1,    32,   215,     3,    65,     3,     3,   444,   439,   405,
      -1,    -1,   110,    -1,    34,     3,    -1,   406,    -1,   135,
     410,   411,     3,   412,   232,   414,   407,   466,    -1,   135,
     410,   411,     3,   412,   353,    -1,    -1,    -1,   170,   142,
     221,   408,   409,    -1,     3,    20,   317,    -1,   409,   313,
       3,    20,   317,    -1,    -1,   410,   147,    -1,   410,    83,
      -1,   410,   124,    -1,   410,   132,    -1,   137,    -1,    -1,
      -1,   311,   413,   312,    -1,     3,    -1,   413,   313,     3,
      -1,   311,   416,   312,    -1,    -1,   414,   313,   415,   311,
     416,   312,    -1,   317,    -1,    93,    -1,   416,   313,   317,
      -1,   416,   313,    93,    -1,   135,   410,   411,     3,   204,
     417,   407,    -1,     3,    20,   317,    -1,     3,    20,    93,
      -1,   417,   313,     3,    20,   317,    -1,   417,   313,     3,
      20,    93,    -1,   418,    -1,   187,   410,   411,     3,   412,
     232,   414,   407,    -1,   187,   410,   411,     3,   204,   417,
     407,    -1,   187,   410,   411,     3,   412,   353,   407,    -1,
     419,    -1,   221,   420,   375,   204,   421,   354,   364,   367,
     466,    -1,    -1,   410,   147,    -1,   410,   132,    -1,     3,
      20,   317,    -1,     3,   310,     3,    20,   317,    -1,   421,
     313,     3,    20,   317,    -1,   421,   313,     3,   310,     3,
      20,   317,    -1,   179,   215,     3,   208,     3,    -1,   422,
      -1,    63,    76,   423,     3,    -1,    63,   193,   423,     3,
      -1,    88,    76,     3,    -1,    88,    76,   134,   241,     3,
      -1,    88,   193,     3,    -1,    88,   193,   134,   241,     3,
      -1,    -1,   134,   241,    -1,   424,    -1,    63,    82,     3,
      41,   444,    -1,    63,    82,     3,    41,   444,    93,   317,
      -1,    63,    82,     3,    41,   444,    18,   164,    -1,    63,
      82,     3,    41,   444,    68,   311,   317,   312,    -1,    63,
      82,     3,    41,   444,    18,   164,    68,   311,   317,   312,
      -1,   425,    -1,   228,     3,    -1,   228,    76,     3,    -1,
     426,    -1,    63,   430,   215,   423,     3,   311,   431,   312,
     427,    -1,    63,   430,   215,   423,     3,   310,     3,   311,
     431,   312,   427,    -1,    -1,   427,    38,    20,     5,    -1,
     427,    38,     5,    -1,   427,   168,     3,    87,     3,    -1,
     427,   168,     3,   211,     3,    -1,   427,   194,    53,   229,
     311,     3,   312,   195,     5,    -1,   427,   194,    53,   175,
     311,     3,   312,   311,   428,   312,    -1,   429,    -1,   428,
     313,   429,    -1,   194,     3,   232,   145,   213,     4,   168,
     162,     5,    -1,   194,     3,   232,   145,   213,   155,   168,
     162,     5,    -1,    63,   430,   215,   423,     3,   311,   431,
     312,   446,    -1,    63,   430,   215,   423,     3,   446,    -1,
      63,   430,   215,   423,     3,   310,     3,   311,   431,   312,
     446,    -1,    63,   430,   215,   423,     3,   310,     3,   446,
      -1,    -1,   209,    -1,   210,   209,    -1,   432,    -1,   431,
     313,   432,    -1,   172,   142,   311,   433,   312,    -1,    61,
       3,   172,   142,   311,   433,   312,    -1,   142,   311,   370,
     312,    -1,   133,   311,   370,   312,    -1,   117,   133,   311,
     370,   312,    -1,   117,   142,   311,   370,   312,    -1,    68,
     311,   317,   312,    -1,    61,     3,    68,   311,   317,   312,
      -1,   114,   142,   311,   434,   312,   178,     3,   311,   435,
     312,   436,    -1,   114,   142,   311,   434,   312,   178,     3,
     310,     3,   311,   435,   312,   436,    -1,    61,     3,   114,
     142,   311,   434,   312,   178,     3,   311,   435,   312,   436,
      -1,    61,     3,   114,   142,   311,   434,   312,   178,     3,
     310,     3,   311,   435,   312,   436,    -1,   224,   311,   437,
     312,    -1,    61,     3,   224,   311,   437,   312,    -1,     3,
      -1,   433,   313,     3,    -1,     3,    -1,   434,   313,     3,
      -1,     3,    -1,   435,   313,     3,    -1,    -1,   436,   168,
      87,    64,    -1,   436,   168,    87,   204,   164,    -1,   436,
     168,    87,   181,    -1,   436,   168,    87,   204,    93,    -1,
     436,   168,   221,    64,    -1,   436,   168,   221,   204,   164,
      -1,   436,   168,   221,   181,    -1,   436,   168,   221,   204,
      93,    -1,   436,   168,    87,   163,    -1,   436,   168,   221,
     163,    -1,   436,   154,   116,    -1,   436,   154,   201,    -1,
     436,   154,   171,    -1,   436,    78,    -1,   436,    18,    78,
      -1,   436,    78,   129,    79,    -1,   436,    78,   129,   127,
      -1,     3,    -1,   437,   313,     3,    -1,    -1,   438,     3,
     444,   439,    -1,    -1,   439,    18,   164,    -1,   439,   164,
      -1,   439,    93,     4,    -1,   439,    93,     5,    -1,   439,
      93,     7,    -1,   439,    93,     6,    -1,   439,    93,   293,
     311,   312,    -1,   439,    93,   294,   311,   312,    -1,   439,
      93,   295,   311,   312,    -1,   439,    93,    62,    -1,   439,
      93,   311,   317,   312,    -1,   439,    38,    -1,   439,    38,
     311,     5,   313,     5,   312,    -1,   439,    38,   311,     5,
     312,    -1,   439,    43,   311,     5,   313,     5,   312,    -1,
     439,    43,   311,     5,   312,    -1,   439,    43,    -1,   439,
     224,   142,    -1,   439,   224,    -1,   439,   172,   142,    -1,
     439,   142,    -1,   439,    69,     4,    -1,   439,    68,   311,
     317,   312,    -1,   439,    61,     3,   224,    -1,   439,    61,
       3,   172,   142,    -1,   439,    61,     3,    68,   311,   317,
     312,    -1,   439,    46,    42,    41,   311,   317,   312,    47,
      -1,   439,    46,    42,    41,   311,   317,   312,    48,    -1,
     439,    46,    42,    41,   311,   317,   312,    -1,   439,    41,
     311,   317,   312,    47,    -1,   439,    41,   311,   317,   312,
      48,    -1,   439,    41,   311,   317,   312,    -1,    -1,   311,
       5,   312,    -1,   311,     5,   313,     5,   312,    -1,    -1,
      54,    -1,    -1,   442,   222,    -1,   442,   240,    -1,    -1,
     443,    72,   204,     4,    -1,   443,    73,     4,    -1,    57,
     440,    -1,   207,   440,   442,    -1,   203,   440,   442,    -1,
     160,   440,   442,    -1,   138,   440,   442,    -1,   130,   440,
     442,    -1,    56,   440,   442,    -1,   176,   440,   442,    -1,
      94,   440,   442,    -1,   112,   440,   442,    -1,    96,   440,
     442,    -1,    97,    -1,   220,    -1,   214,    -1,    95,    -1,
     238,    -1,    72,   440,   443,    -1,   231,   311,     5,   312,
     443,    -1,    54,   440,    -1,   233,   311,     5,   312,    -1,
     219,    -1,    51,    -1,   159,    -1,   153,    -1,   206,   441,
     443,    -1,   212,   441,   443,    -1,   156,   441,   443,    -1,
     146,   441,   443,    -1,   103,   311,   445,   312,   443,    -1,
     204,   311,   445,   312,   443,    -1,    52,    -1,   225,    -1,
       4,    -1,   445,   313,     4,    -1,   447,   378,   353,    -1,
      -1,   132,    -1,   187,    -1,   448,    -1,   204,   193,     3,
      -1,   204,   193,    93,    -1,   204,   449,    -1,   450,    -1,
     449,   313,   450,    -1,     8,    20,   317,    -1,     8,     9,
     317,    -1,   451,    -1,    63,   173,     3,   311,   452,   312,
      41,    50,   456,   104,    -1,    63,   173,     3,   311,   452,
     312,    50,   456,   104,    -1,    63,    10,   187,   173,     3,
     311,   452,   312,    41,    50,   456,   104,    -1,    63,    10,
     187,   173,     3,   311,   452,   312,    50,   456,   104,    -1,
      63,   118,     3,   311,   452,   312,   184,   455,    41,    50,
     456,   104,    -1,    63,   118,     3,   311,   452,   312,   184,
     455,    50,   456,   104,    -1,    63,    10,   187,   118,     3,
     311,   452,   312,   184,   455,    41,    50,   456,   104,    -1,
      63,    10,   187,   118,     3,   311,   452,   312,   184,   455,
      50,   456,   104,    -1,    -1,   453,    -1,   454,    -1,   453,
     313,   454,    -1,     3,   444,    -1,    16,     3,   444,    -1,
     166,     3,   444,    -1,   128,     3,   444,    -1,   130,    -1,
     138,    -1,   231,    -1,   212,    -1,    52,    -1,   112,    -1,
      94,    -1,    56,    -1,    97,    -1,   214,    -1,    -1,   456,
     457,    -1,   456,    50,   456,   104,    -1,   456,   134,   456,
     104,   134,    -1,   456,   236,   456,   104,   236,    -1,   456,
     144,   456,   104,   144,    -1,   456,   111,   456,   104,   111,
      -1,   456,    67,   456,   104,    67,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,
      -1,    10,    -1,    12,    -1,    16,    -1,    40,    -1,   205,
      -1,   135,    -1,   221,    -1,    87,    -1,   115,    -1,   234,
      -1,   204,    -1,   137,    -1,   232,    -1,    63,    -1,    88,
      -1,   215,    -1,   133,    -1,   216,    -1,   105,    -1,    99,
      -1,    77,    -1,    81,    -1,    58,    -1,   182,    -1,   143,
      -1,   140,    -1,    60,    -1,   165,    -1,   109,    -1,    59,
      -1,   121,    -1,   107,    -1,   166,    -1,   128,    -1,   119,
      -1,    44,    -1,   189,    -1,   180,    -1,   106,    -1,   191,
      -1,    49,    -1,    98,    -1,   188,    -1,   190,    -1,    41,
      -1,   168,    -1,   169,    -1,    53,    -1,   120,    -1,   126,
      -1,   150,    -1,   152,    -1,   141,    -1,   148,    -1,   186,
      -1,   131,    -1,   167,    -1,   116,    -1,    66,    -1,   161,
      -1,   227,    -1,   164,    -1,    93,    -1,   172,    -1,   142,
      -1,   224,    -1,    68,    -1,   114,    -1,   178,    -1,    64,
      -1,   181,    -1,   163,    -1,   130,    -1,   138,    -1,   231,
      -1,   212,    -1,    52,    -1,   112,    -1,    94,    -1,    56,
      -1,    97,    -1,   214,    -1,   203,    -1,    96,    -1,    72,
      -1,   225,    -1,    51,    -1,   223,    -1,   102,    -1,   136,
      -1,    35,    -1,    86,    -1,   241,    -1,   235,    -1,   237,
      -1,   173,    -1,   118,    -1,   184,    -1,   311,    -1,   312,
      -1,   313,    -1,   309,    -1,   310,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    17,    -1,   314,
      -1,   282,    -1,   283,    -1,   284,    -1,   285,    -1,   286,
      -1,     8,    -1,   458,    -1,    88,   173,     3,    -1,    88,
     173,   134,   241,     3,    -1,    88,   118,     3,    -1,    88,
     118,   134,   241,     3,    -1,   459,    -1,    58,     3,   311,
     312,    -1,    58,     3,   311,   460,   312,    -1,   461,    -1,
     460,   313,   461,    -1,     5,    -1,     4,    -1,     7,    -1,
     164,    -1,     6,    -1,     3,    -1,     8,    -1,   462,    -1,
      63,   190,     3,   463,   464,   168,     3,   119,    98,   188,
      50,   456,   104,    -1,    49,    -1,    34,    -1,   135,    -1,
     221,    -1,    87,    -1,   465,    -1,    88,   190,     3,    -1,
      88,   190,   134,   241,     3,    -1,    32,   190,     3,   100,
      -1,    32,   190,     3,    80,    -1,    -1,   183,    26,    -1,
     183,   467,    -1,     3,    -1,   467,   313,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   399,   399,   400,   405,   412,   413,   414,   432,   440,
     448,   454,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     485,   485,   494,   494,   496,   496,   498,   498,   502,   503,
     504,   505,   506,   509,   510,   513,   514,   517,   518,   521,
     521,   522,   522,   523,   523,   531,   531,   539,   539,   550,
     554,   555,   556,   557,   558,   559,   560,   561,   565,   565,
     567,   567,   569,   569,   572,   572,   574,   574,   576,   576,
     578,   578,   580,   580,   582,   582,   585,   585,   587,   587,
     589,   589,   591,   591,   593,   593,   595,   595,   597,   597,
     599,   599,   602,   602,   604,   604,   606,   606,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   645,   646,   647,   648,   649,   650,   651,   652,
     654,   655,   657,   658,   659,   661,   662,   663,   664,   671,
     678,   685,   689,   693,   699,   700,   701,   704,   710,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   728,   730,
     732,   734,   738,   746,   757,   758,   761,   762,   765,   773,
     781,   792,   802,   803,   817,   818,   819,   820,   823,   830,
     838,   839,   840,   843,   844,   847,   848,   852,   853,   856,
     858,   862,   863,   866,   868,   872,   873,   876,   877,   880,
     886,   893,   902,   903,   904,   905,   908,   909,   910,   911,
     912,   915,   916,   919,   920,   923,   924,   925,   926,   927,
     928,   929,   930,   931,   934,   935,   936,   944,   950,   951,
     952,   955,   956,   959,   960,   964,   971,   972,   973,   976,
     977,   981,   983,   985,   987,   989,   993,   994,   995,   998,
     999,  1002,  1003,  1006,  1007,  1008,  1011,  1012,  1015,  1016,
    1020,  1022,  1024,  1026,  1029,  1030,  1033,  1034,  1037,  1041,
    1051,  1059,  1060,  1061,  1062,  1066,  1070,  1072,  1076,  1076,
    1078,  1083,  1090,  1097,  1107,  1114,  1121,  1131,  1139,  1149,
    1157,  1166,  1175,  1185,  1193,  1202,  1211,  1221,  1230,  1242,
    1247,  1252,  1258,  1265,  1272,  1279,  1289,  1296,  1305,  1312,
    1318,  1326,  1332,  1340,  1341,  1342,  1343,  1344,  1348,  1355,
    1364,  1371,  1377,  1388,  1391,  1397,  1403,  1410,  1416,  1423,
    1429,  1435,  1441,  1447,  1453,  1459,  1465,  1471,  1477,  1483,
    1489,  1495,  1501,  1507,  1515,  1516,  1517,  1520,  1528,  1534,
    1547,  1548,  1548,  1551,  1559,  1569,  1570,  1571,  1572,  1573,
    1576,  1576,  1579,  1580,  1583,  1593,  1606,  1607,  1607,  1610,
    1611,  1612,  1613,  1616,  1620,  1621,  1622,  1623,  1629,  1632,
    1638,  1643,  1649,  1657,  1666,  1667,  1668,  1672,  1683,  1695,
    1706,  1721,  1726,  1730,  1731,  1735,  1737,  1739,  1741,  1745,
    1746,  1752,  1756,  1758,  1760,  1762,  1764,  1769,  1773,  1774,
    1778,  1787,  1797,  1801,  1802,  1803,  1804,  1805,  1806,  1808,
    1812,  1813,  1816,  1831,  1838,  1853,  1866,  1881,  1894,  1895,
    1896,  1899,  1900,  1903,  1904,  1905,  1906,  1907,  1908,  1909,
    1910,  1911,  1913,  1915,  1917,  1919,  1921,  1925,  1926,  1929,
    1930,  1933,  1934,  1937,  1938,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1953,
    1954,  1957,  1958,  1961,  1961,  1971,  1972,  1973,  1974,  1975,
    1976,  1977,  1978,  1979,  1980,  1981,  1982,  1989,  1990,  1991,
    1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,  2000,  2001,
    2002,  2003,  2004,  2005,  2006,  2007,  2008,  2009,  2012,  2013,
    2014,  2017,  2018,  2021,  2022,  2023,  2026,  2027,  2028,  2032,
    2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,  2041,  2042,
    2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,  2051,  2052,
    2053,  2054,  2055,  2056,  2057,  2058,  2059,  2060,  2061,  2062,
    2063,  2066,  2067,  2070,  2083,  2084,  2085,  2089,  2092,  2093,
    2094,  2095,  2095,  2097,  2098,  2106,  2110,  2116,  2122,  2129,
    2136,  2142,  2148,  2155,  2164,  2165,  2168,  2169,  2172,  2173,
    2174,  2175,  2178,  2179,  2180,  2181,  2182,  2183,  2184,  2185,
    2186,  2187,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,
    2204,  2205,  2206,  2206,  2206,  2207,  2207,  2207,  2207,  2207,
    2207,  2208,  2208,  2208,  2208,  2208,  2208,  2208,  2208,  2208,
    2209,  2209,  2209,  2209,  2209,  2209,  2209,  2210,  2210,  2210,
    2210,  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,
    2211,  2211,  2211,  2212,  2212,  2212,  2212,  2212,  2212,  2212,
    2212,  2213,  2213,  2213,  2213,  2213,  2213,  2213,  2213,  2214,
    2214,  2214,  2214,  2214,  2214,  2214,  2214,  2214,  2215,  2215,
    2215,  2215,  2215,  2215,  2215,  2215,  2216,  2216,  2216,  2217,
    2217,  2217,  2217,  2217,  2217,  2217,  2217,  2218,  2218,  2218,
    2218,  2218,  2218,  2218,  2219,  2219,  2219,  2219,  2219,  2219,
    2219,  2220,  2220,  2220,  2220,  2221,  2221,  2221,  2221,  2221,
    2221,  2221,  2221,  2221,  2221,  2221,  2221,  2222,  2222,  2222,
    2222,  2222,  2223,  2230,  2234,  2240,  2246,  2252,  2264,  2268,
    2274,  2282,  2283,  2286,  2287,  2288,  2289,  2290,  2291,  2292,
    2299,  2303,  2311,  2312,  2315,  2316,  2317,  2320,  2324,  2330,
    2339,  2347,  2358,  2359,  2360,  2363,  2364
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
  "RETURN", "RETURNING", "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW",
  "SIGNAL", "TRIGGER", "UNTIL", "SQL_SMALL_RESULT", "SCHEMA", "SHARD",
  "SHARDS", "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT",
  "THAN", "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB",
  "TIME", "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "VIEW", "USING",
  "USE", "HASH", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE",
  "WHEN", "WHILE", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS",
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
     546,   547,   548,   549,   550,   551,   552,   553,   554,    59,
      46,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   315,   316,   316,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     318,   317,   319,   317,   320,   317,   321,   317,   317,   317,
     317,   317,   317,   317,   317,   322,   322,   323,   323,   324,
     317,   325,   317,   326,   317,   327,   317,   328,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   329,   317,
     330,   317,   331,   317,   332,   317,   333,   317,   334,   317,
     335,   317,   336,   317,   337,   317,   338,   317,   339,   317,
     340,   317,   341,   317,   342,   317,   343,   317,   344,   317,
     345,   317,   346,   317,   347,   317,   348,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   349,   349,   349,   317,   317,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   317,   317,
     317,   317,   351,   351,   317,   317,   317,   317,   317,   317,
     317,   352,   353,   353,   354,   354,   355,   355,   356,   356,
     357,   357,   357,   358,   358,   359,   359,   360,   360,   361,
     361,   362,   362,   363,   363,   364,   364,   365,   365,   366,
     366,   366,   367,   367,   367,   367,   368,   368,   368,   368,
     368,   369,   369,   370,   370,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   372,   372,   372,   373,   374,   374,
     374,   375,   375,   376,   376,   377,   377,   377,   377,   378,
     378,   379,   379,   379,   379,   379,   380,   380,   380,   381,
     381,   382,   382,   383,   383,   383,   384,   384,   385,   385,
     386,   386,   386,   386,   387,   387,   388,   388,   389,   352,
     390,   391,   391,   391,   391,   390,   392,   392,   393,   393,
     390,   352,   394,   394,   352,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   396,
     396,   396,   397,   397,   397,   397,   352,   398,   352,   399,
     399,   400,   400,   401,   401,   401,   401,   401,   352,   402,
     352,   403,   403,   352,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   405,   405,   352,   406,   406,
     407,   408,   407,   409,   409,   410,   410,   410,   410,   410,
     411,   411,   412,   412,   413,   413,   414,   415,   414,   416,
     416,   416,   416,   406,   417,   417,   417,   417,   352,   418,
     418,   418,   352,   419,   420,   420,   420,   421,   421,   421,
     421,   352,   352,   422,   422,   352,   352,   352,   352,   423,
     423,   352,   424,   424,   424,   424,   424,   352,   425,   425,
     352,   426,   426,   427,   427,   427,   427,   427,   427,   427,
     428,   428,   429,   429,   426,   426,   426,   426,   430,   430,
     430,   431,   431,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   433,   433,   434,
     434,   435,   435,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   437,   437,   438,   432,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   440,   440,
     440,   441,   441,   442,   442,   442,   443,   443,   443,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   445,   445,   446,   447,   447,   447,   352,   448,   448,
     448,   449,   449,   450,   450,   352,   451,   451,   451,   451,
     451,   451,   451,   451,   452,   452,   453,   453,   454,   454,
     454,   454,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   456,   456,   456,   456,   456,   456,   456,   456,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   352,   458,   458,   458,   458,   352,   459,
     459,   460,   460,   461,   461,   461,   461,   461,   461,   461,
     352,   462,   463,   463,   464,   464,   464,   352,   465,   465,
     352,   352,   466,   466,   466,   467,   467
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
       4,     4,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   448,   294,     0,   375,     0,     0,
     375,     0,   235,     0,   375,     0,     0,     0,   191,   289,
     301,   304,   326,   333,   338,   340,   343,   367,   398,   402,
     412,   421,   427,   430,   577,   585,   743,   748,   760,   767,
       0,     0,     0,     0,     0,   419,     0,     0,     0,     0,
       0,   419,   449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   381,     0,     0,   381,     0,     0,
     580,   581,     0,     0,     0,     0,   428,     0,     1,     2,
     328,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,     0,   419,   298,
       0,   293,   291,   292,     0,   415,     0,   746,     0,   327,
     744,     0,   768,     0,   417,     0,   302,     0,   377,   378,
     379,   380,   376,     0,   339,     0,     0,     0,     0,   578,
     579,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   246,   236,   188,     0,   189,   190,   237,   238,   239,
      11,   241,   243,   242,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   192,   244,   329,   379,   376,   250,     0,     0,   251,
     253,   254,   260,   429,     3,     0,     0,   334,   335,   771,
     770,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     758,   754,   753,   757,   755,   759,   756,   749,     0,   751,
       0,     0,   420,   413,     0,   594,     0,     0,     0,     0,
     594,   763,   762,     0,   414,     0,     0,     0,     0,     0,
     296,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   382,     0,   382,   584,   583,   582,     0,    47,     0,
      28,    27,    18,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,   283,     0,
       0,     0,     0,   268,   267,   271,   275,   272,     0,     0,
     269,   259,     0,   337,   336,     0,     0,     0,     0,     0,
     357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,   750,     0,     0,     0,   560,   569,   528,   528,   528,
     528,   528,   553,   528,   550,     0,   528,   528,   528,   531,
     562,   531,   561,   528,   528,   528,     0,   531,   528,   531,
     552,   559,   551,   570,     0,     0,   554,   422,     0,     0,
       0,     0,     0,   595,   596,     0,     0,     0,     0,     0,
     766,   764,   765,     0,     0,     0,     0,     0,   574,   299,
       0,   215,     0,   194,   298,   416,   747,   745,   769,   418,
     303,     0,     0,     0,   411,     0,     0,     5,    45,    48,
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
       0,     0,     0,     0,   353,   350,   356,   352,   495,     0,
       0,     0,     0,   354,   752,   594,   594,     0,   557,   533,
     539,   536,   533,   533,     0,   533,   533,   533,   532,   536,
     536,   533,   533,   533,     0,   536,   533,   536,     0,     0,
       0,     0,     0,   598,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     575,   576,     0,   493,   445,   260,   195,     0,   222,   194,
     295,   297,     0,   370,   384,     0,     0,   369,   370,     0,
     370,     0,    59,     0,   178,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,   125,     0,     0,
       0,   129,   130,   131,   133,     0,     0,   135,     0,   138,
     139,   140,     0,     0,     0,     0,     0,     0,    66,    60,
      61,    62,    63,    64,    65,   115,   116,   117,     0,     0,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    39,     0,     0,   187,   185,    51,
       0,     0,    36,    32,    34,     0,   196,     0,   283,   285,
     285,   285,     0,     0,     0,   215,   273,   274,     0,     0,
     276,     0,     0,     0,     0,     0,   495,   495,     0,   364,
     495,   359,     0,     0,     0,     0,     0,   545,   555,   547,
     549,   571,     0,   548,   544,   543,   566,   565,   542,   546,
     541,     0,   563,   540,   564,     0,     0,   424,     0,   423,
     599,   601,   600,     0,   597,     0,   319,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,   612,     0,
       0,     0,     0,     0,     0,   574,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   451,     0,     0,     0,     0,
     772,   300,     0,     0,     0,   393,   383,     0,     0,   370,
     400,   370,   401,    46,   182,     0,   181,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    70,    72,     0,     0,     0,     0,
       0,   104,   106,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,   205,   332,   256,     0,     0,     0,
       0,   407,     0,     0,   222,   265,   263,     0,     0,   261,
     277,     0,     0,     0,     0,     0,   364,   364,   495,     0,
       0,   507,     0,   512,     0,     0,     0,     0,     0,   365,
     516,   497,     0,   514,   361,   364,   351,   358,     0,     0,
     529,     0,   534,   535,     0,     0,   536,     0,   536,   536,
     558,     0,     0,   606,   609,   608,   610,   607,   602,   603,
     605,   611,   604,     0,     0,     0,     0,     0,     0,   305,
       0,     0,     0,     0,     0,     0,   612,     0,     0,     0,
       0,     0,     0,     0,     0,   493,   447,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   433,   493,     0,   573,
     200,   200,   216,   217,   223,     0,   290,   395,   394,     0,
       0,   385,   390,   389,     0,   387,   772,   399,   179,   183,
       0,   110,   109,     0,   114,     0,     0,   167,   168,   143,
     121,   122,     0,     0,   126,   127,   128,   132,   134,   136,
     150,   151,   152,   153,     0,    67,    76,    78,    74,    80,
      82,    84,   118,     0,     0,   120,   163,   207,   207,   207,
      86,     0,     0,    94,     0,     0,   102,   207,   207,    50,
      54,     0,     0,    44,     0,     0,     0,    31,     0,     0,
     215,   284,     0,     0,     0,     0,     0,     0,   772,   278,
       0,   264,     0,     0,     0,   491,     0,   355,   363,   364,
     496,   366,     0,     0,     0,     0,     0,     0,   517,   498,
     499,   501,   500,   505,     0,     0,     0,     0,   515,   513,
     360,     0,     0,   612,     0,     0,   538,   567,   572,   568,
     556,     0,   425,     0,   612,     0,     0,     0,     0,     0,
     320,     0,   313,     0,     0,     0,     0,   620,   621,   622,
     624,   623,   742,   627,   628,   629,   735,   626,   625,   730,
     731,   732,   733,   734,   717,   630,   671,   662,   667,   612,
     713,   703,   674,   706,   649,   656,   653,   640,   696,   685,
     612,   693,   711,   647,   648,   718,   634,   641,   689,   705,
     710,   707,   668,   646,   715,   587,   645,   665,   658,   655,
     612,   704,   694,   635,   684,   723,   661,   675,   657,   676,
     660,   699,   682,   643,   612,   632,   716,   638,   700,   652,
     679,   691,   651,   612,   680,   677,   678,   686,   698,   688,
     654,   659,   683,   672,   673,   690,   722,   695,   664,   697,
     650,   724,   681,   669,   663,   670,   666,   709,   637,   631,
     702,   708,   642,   644,   633,   714,   692,   712,   687,   701,
     639,   636,   720,   612,   721,   719,   737,   738,   739,   740,
     741,   728,   729,   725,   726,   727,   736,   613,     0,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
     431,   444,   452,   495,   201,   202,     0,   219,   221,     0,
       0,     0,   775,   773,   774,   371,     0,   386,     0,     0,
     368,     0,     0,   113,   170,   171,   172,   173,   176,   175,
     177,   169,   174,     0,     0,     0,   207,   207,   207,   207,
     207,   207,     0,     0,     0,   211,   211,   211,   207,     0,
       0,     0,   207,     0,     0,     0,   207,   211,   211,    52,
      56,    37,    33,    35,   200,   203,   206,   222,   286,     0,
       0,     0,   408,   409,     0,   403,     0,   344,   469,     0,
     467,     0,   345,     0,   362,     0,     0,     0,     0,     0,
       0,   519,     0,     0,     0,     0,     0,     0,   612,     0,
     530,   537,     0,   612,     0,   309,   322,   323,   324,     0,
       0,     0,     0,   306,   586,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,     0,     0,     0,   433,     0,
       0,     0,     0,   459,     0,     0,     0,   456,     0,   455,
       0,   465,     0,     0,     0,   494,   200,   218,   225,   224,
       0,     0,   397,   396,   392,   391,     0,   111,   108,   123,
     124,   154,   211,   211,   211,   211,   211,   211,   156,     0,
     119,     0,     0,     0,     0,     0,   211,    88,     0,     0,
     211,    96,     0,     0,   211,     0,     0,   198,     0,     0,
     197,   226,   282,     0,   281,   280,     0,   279,     0,     0,
       0,   349,     0,   492,   509,     0,   527,   511,     0,     0,
       0,   520,   518,   502,   503,   504,   506,     0,   612,     0,
     589,   426,     0,   591,     0,   317,   314,     0,   614,     0,
       0,     0,     0,     0,   612,   311,     0,     0,     0,   308,
     432,   446,     0,     0,     0,     0,     0,   457,   458,   234,
     453,   435,     0,     0,     0,   220,   776,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,   209,   208,     0,
      69,    71,    73,     0,   207,     0,     0,     0,   207,     0,
       0,     0,   105,   107,   204,   200,     0,   231,   287,   410,
     347,     0,   470,   468,     0,   525,   526,     0,     0,     0,
     612,     0,   588,   590,   325,   310,   619,   618,   615,   617,
     616,     0,   318,   316,     0,   460,     0,     0,   466,     0,
     434,     0,     0,     0,     0,     0,     0,   388,    77,    79,
      75,    81,    83,    85,   157,     0,   200,   212,    87,   211,
      90,    92,    95,   211,    98,   100,   103,   199,   228,   227,
       0,   193,     0,   508,   510,   524,   521,     0,   593,   761,
     312,     0,   454,     0,   436,   437,     0,     0,   373,     0,
     210,   213,     0,     0,   207,   207,     0,   207,   207,     0,
       0,   232,     0,   522,   523,   592,     0,     0,     0,     0,
       0,     0,   200,    89,   211,   211,    97,   211,   211,   230,
     229,   471,     0,     0,     0,     0,     0,     0,   374,   214,
       0,     0,     0,     0,   473,     0,     0,     0,     0,   473,
       0,     0,    91,    93,    99,   101,   346,   472,     0,     0,
       0,   461,     0,     0,   440,   438,     0,   487,     0,     0,
       0,   473,   473,     0,     0,   439,     0,   488,   348,     0,
     484,   486,   485,     0,     0,     0,   463,   462,     0,   441,
     489,   490,   474,   482,   476,     0,   478,   483,   480,     0,
     473,     0,   477,   475,   481,   479,   464,     0,     0,     0,
       0,     0,     0,     0,   442,   443
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   508,   805,   970,   971,   969,   509,   510,   795,
     965,   796,   966,   517,  1137,  1138,  1139,  1418,  1416,  1417,
    1419,  1420,  1421,  1428,  1654,  1754,  1755,  1432,  1658,  1757,
    1758,  1436,  1147,  1148,   523,   924,   305,    17,    18,   491,
     974,  1445,  1387,  1570,  1160,  1425,  1648,  1553,  1717,   708,
    1082,  1083,   900,  1667,  1731,  1376,    72,   221,   222,   393,
     228,   229,   230,   412,   231,   409,   638,   410,   634,   989,
     990,   626,   978,  1449,   232,    19,    56,   104,   280,    20,
      21,   871,   872,    22,    23,   621,    80,    24,    25,    26,
    1014,    27,   905,  1531,  1638,    64,   123,   503,   715,   909,
    1399,  1094,   713,    28,    29,    75,   630,    30,    87,    31,
      32,    33,  1380,  1813,  1814,    55,   894,   895,  1461,  1459,
    1782,  1806,  1176,   896,   829,   658,   669,   837,   838,   467,
     842,   704,   705,    34,    70,    71,    35,   472,   473,   474,
    1043,  1057,  1357,    36,    37,   258,   259,    38,   273,   483,
      39,  1086,  1394
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1340
static const yytype_int16 yypact[] =
{
    5673,   428,  -152,    68,  5816, -1340,   585, -1340,   -75,   -42,
   -1340,    26, -1340,   275,    16,   418,   336,   113, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
     496,   517,   557,   223,   384,   440,   625,   632,   355,   646,
     652,   440, -1340,   398,   542,   397,   282,    47,    51,   682,
     353,   359,   370,   388,   564,   684,   687,   564,   148,    66,
     385, -1340,  5813,   731,   497,    17, -1340,   741, -1340,  5673,
     340,    58,   546,   413,    22,   269,   495,   763,   705,   466,
     617,   390,   551,   524,   508,   813, -1340,   357,   440,   510,
     856, -1340, -1340, -1340,   -84, -1340,   668, -1340,   673, -1340,
   -1340,   691, -1340,   712, -1340,   728, -1340,   736, -1340, -1340,
   -1340, -1340, -1340,   879, -1340,   787,   884,  7505,  7505, -1340,
   -1340,   996,   143, -1340, -1340, -1340, -1340,  1029,  7505,  7505,
    7505, -1340, -1340, -1340,  6286, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340,   742,   759,   781,   786,   789,
     795,   799,   803,   852,   857,   864,   871,   873,   875,   877,
     881,   885,   900,   901,   904,   905,   907,   909,   910,   919,
     923,   924,   927,   931,   932,   933,   935,   940,   941,   942,
     944,   945,   946,   947,   951,   952,   953,   954,   963,   965,
     970,   972,   975,   984,   985,   986,   991,   994,  1001,  1009,
    1011,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1024,  7505,
    8909,   -51, -1340,   840,    33,    34,    10,    19,  -151,  1340,
   -1340, -1340,  1119, -1340, -1340,  1204,  1300, -1340, -1340, -1340,
   -1340,   437,   431,  1283,   455,  1286,   485,   504,  1287,  1346,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,   401, -1340,
    1349,  1353, -1340, -1340,  8572,   163,  1355,  1192,  1124,  1364,
     163, -1340, -1340,     9, -1340,  1200,   393,  1128,  1367,  1345,
   -1340,   190,  -168,    17,  1369,  1370,  1371,  1372,  1376,  1377,
    1378,  -158,  1379,  -144,  9017,  9017, -1340,  1380,  7505,  7505,
    2060,  2060, -1340,  7505,   878,    60, -1340,  7505,  5976,  7505,
    7505,  7505,  7505,  7505,  7505,  7505,  7505,  7505,  1072,  7505,
    7505,  7505,  7505,  7505,  7505,  7505,  7505,  7505,  7505,  7505,
    7505,  7505,  7505,  7505,  1074,  7505,  7505,  7505,  1078,  7505,
    7505,  7505,  7505,  7505,  7505,  6434,  7505,  7505,  7505,  7505,
    7505,  7505,  7505,  7505,  7505,  7505,  1079,  1080,  1081,  1083,
    7505,  7505,  1087,  1089,  1090,  7505,  7505,  1398,  1099,  1100,
    4857, -1340,  7505,  7505,  7505,  7505,  7505,    52,  1104,   686,
    7505,  6124,  7505,  7505,  7505,  7505,  7505,  7505,  7505,  7505,
    7505,  7505,  1410, -1340,    17,  7505,  1413,  1414,   303,  1106,
     409,  1416,    17, -1340, -1340, -1340,    15, -1340,    17,  1279,
    1255, -1340,  1421, -1340, -1340,  1422,  1423,  1424,  1425,  1426,
   -1340,  1448,  1449,  1450,  8572,  1451,  1215,  1457,  1458,  1459,
   -1340, -1340,   477,  1152,  1154, -1340, -1340,  1155,  1155,  1155,
    1155,  1155, -1340,  1155, -1340,  1156,  1155,  1155,  1155,  1415,
   -1340,  1415, -1340,  1155,  1155,  1155,  1157,  1415,  1155,  1415,
   -1340, -1340, -1340, -1340,  1159,  1161, -1340,   540,  8572,  1470,
    1471,  1472,  1164,  1165, -1340,  -170,  1476,  1477,  1321,  1178,
   -1340, -1340, -1340,  1323,  1489,  1325,  1253,  1492,   -93, -1340,
    7505,  1327,    17,  -137,   510, -1340, -1340, -1340, -1340, -1340,
   -1340,  1495,  1496,   207, -1340,  1495,   408, -1340,   107, -1340,
    1188,  9017,  7068,   284, -1340,  7505,  7505,  1297,   184, -1340,
   -1340, -1340,  4901,  6598,   960,   987,  1053,  5169,  5213,  5481,
    5525,  5894,  5943, -1340,  1108,  1420,  1736,  1781,  6152,  2048,
    2093,  2360,  6305,  6455,  6614,   525,  2405,  6759,  2672, -1340,
    6805,  6917,  6938, -1340,  8947,  2717,  2984,  3029,  3296,   449,
    1191,  7212,  7521,  7567,  7588,  7609,  7630,  7652,  7673,  3341,
    3608,  3653, -1340, -1340, -1340, -1340,  7694,  3920,  1198,  1199,
    1206,   571,   783,  1203,  1212,  1216, -1340,  9037,  1755,  9055,
    9073,  9073, -1340,    59, -1340, -1340,  1320,  7505,  7505,  1222,
    7505,  8971,  1223,  1224,  1225,  7505,   727,   851,   995,   744,
     753,   753,  1497,  1497,  1497,  1497, -1340, -1340,  -137, -1340,
   -1340,  1227,   392,  1395,  1396,  1399, -1340, -1340, -1340,    -3,
     204,  1340,  1255,  1255,  1402,  1381,    17, -1340,  1405, -1340,
     278,  8572,  8572,  1544, -1340, -1340, -1340, -1340, -1340,  8572,
    1547,  1343,  1344, -1340, -1340,   163,   163,  1553, -1340, -1340,
   -1340, -1340, -1340, -1340,  1555, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340,  1555, -1340, -1340, -1340,  1556,  1560,
    1409,  1258,  7505, -1340,  8572,  8572,  8572,  1382,   163,  1348,
     121,  -165,  1406,  1572,   581,  1575,   -85,  1576,  1577,  1418,
   -1340, -1340,  1579,   595, -1340,  1119,  9017,  1530,  1434,  -137,
   -1340, -1340,  1567,  -123, -1340,   419,  1277, -1340,  -123,  1277,
    1419,  7505, -1340,  7505, -1340,  7505,  8822,  7143,  1281,  7505,
    7505, -1340,  7505,  8801,  1455,  1455,  7505, -1340, -1340, -1340,
   -1340, -1340, -1340,  7505,  7505,  7505,  7505, -1340,  7505,  7505,
    7505, -1340, -1340, -1340, -1340,  7505,  7505, -1340,  7505, -1340,
   -1340, -1340,  8572,  8572,  7505,  7505,  7505,  1591, -1340,  1289,
    1292,  1298,  1305,  1307,  1310, -1340, -1340, -1340,  7505,  7505,
    7505, -1340,  7505,  1293,  1296,  1315,  1314,  1622,  1322,  1623,
    1324,  1332,  1338, -1340, -1340,  7505,  1297,  9073,  9073,  1431,
    8994,  7505, -1340, -1340, -1340,  1297,  1531,  1647,   303,  1534,
    1534,  1534,  7505,  1652,  1654,  1327, -1340, -1340,    17,  7505,
     -52,    17,  1347,  1517,  1518,  1350, -1340, -1340,  8572,  8522,
   -1340, -1340,  1659,  1660,  1352,  1354,   426,   201,   669,   201,
     201, -1340,   447,   201,   201,   201,   669,   669,   201,   201,
     201,   452,   669,   201,   669,  1362,  1363,  1610,  7505,  9017,
   -1340, -1340, -1340,   512, -1340,  1368, -1340,  1385,  1386,  1387,
    1389,   478, -1340,  1452,   121,  1677,   -77,  1633, -1340,  1568,
    1460,   121,   134,  1523,  1698,   -83,  1699,  1392,  1562,   503,
    1394,  1400,  1564,  1401,   502, -1340,  1707,  1297,   662,  7505,
    1532, -1340,  6743,  1571,  1711, -1340, -1340,  1714,  7052,   -21,
   -1340,   -21, -1340, -1340,  9017,  8843, -1340,  7505, -1340,  4589,
     842,  7715,  7505,  7505,  1411,  1412,  7816,  7837,  7862,  3965,
    4232,  7883,  7904,  7925,  7947,  7968,  7989,  1430,  1432,  8010,
    8031,  4277,  1441,  1461,  1487,  1501,  1514,  1516,  1519,   915,
    4544,  8052,  8073, -1340, -1340, -1340,  1520,   505,  1524,   509,
    1526, -1340, -1340,  1527,  1533,  7505,  1297,  7505,  1988,  1297,
    1297,  1297,  1535,  1668,  1596, -1340, -1340,  1585,  1537,  1538,
    1539,  9017,  1710,    12,  1434, -1340,  9017,  7505,  1541, -1340,
   -1340,   -52,  7505,  1542,  1543,  1729,  8522,  8522, -1340,  1570,
    1734,  1548,  1550,  1551,  1701,  1826,  1552,  1834,   108, -1340,
   -1340, -1340,  1704,  1713, -1340,  8522, -1340, -1340,  1674,   618,
   -1340,  1859, -1340, -1340,  1666,  1867, -1340,  1869, -1340, -1340,
   -1340,  1566,  8094, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340,   639,   121,  1875,  1878,  1882,  1883, -1340,
    1884,  1578,   511,  1580,  1661,   121, -1340,  1173,  1794,  1583,
     513,  1667,   121,  1892,   144,   595, -1340,   338,  7505,  1587,
    1588,  1589,  1898,  1898,  1594,  1729,   308,   595,  8572, -1340,
      56,   484,  1593, -1340,    63,   410, -1340, -1340,  9017,  1686,
    1888, -1340, -1340,  9017,   516, -1340,  1532, -1340, -1340,  9017,
    7505, -1340, -1340,  7505, -1340,  8132,  8523, -1340, -1340, -1340,
   -1340, -1340,  7505,  7505, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340,  7505, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340,  7505,  7505, -1340, -1340,  1603,  1603,  1603,
   -1340,  1609,   665, -1340,  1612,   827, -1340,  1603,  1603, -1340,
   -1340,  1605,  1614,  1988,  1617,  1621,  1626, -1340,  7505,  7505,
    1327, -1340,  1921,  1921,  1921,  7505,  7505,  1936,  1532,  9017,
    1898, -1340,  8157,  1937,  1938, -1340,   521, -1340, -1340,  8522,
   -1340, -1340,  1940,  7505,  1943,  1902,   285,  7505, -1340, -1340,
   -1340, -1340, -1340, -1340,  1644,  1650,  1651,  7505, -1340, -1340,
   -1340,   512,  1913, -1340,  1653,  1963, -1340,   669, -1340,   669,
     669,  7505, -1340,  1919, -1340,   527,  1658,  1662,  1663,  1665,
   -1340,   121, -1340,   121,  1675,   529,  1504, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,  1783,   121,
   -1340,  1676,   531,  1679,  1743,   121,   534,  1680,  1831,  1850,
    1682,  8178,  1937,  1898,  1898, -1340,   536,   573,  1938,   598,
     -14, -1340, -1340, -1340, -1340, -1340,  1973, -1340, -1340,   662,
    7505,  7505, -1340, -1340,  1688, -1340,  7124, -1340,  7196,  1684,
   -1340,  8199,  8220, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340,  8242,  8263,  8284,  1603,  1603,  1603,  1603,
    1603,  1603,   936,  8305,  1946,  1853,  1853,  1853,  1603,  1692,
    1712,  1715,  1603,  1718,  1721,  1722,  1603,  1853,  1853, -1340,
   -1340, -1340, -1340, -1340,  8864,  -157,  9017,  1434, -1340,   600,
     604,   606,  9017,  9017,  2003, -1340,   609,  2007, -1340,   611,
   -1340,   655, -1340,  2023, -1340,   679,  8326,   681,  1724,  1725,
    1896, -1340,  8347,  1730,  1732,  1733,  8368,   641, -1340,  1816,
   -1340, -1340,  8389, -1340,  2128, -1340, -1340, -1340, -1340,  2043,
     714,   717,   121, -1340, -1340,  2440,  2752,  3064,  3376,  3688,
    4000,  2004,   720,   121, -1340,   121,  1744,   733,   308,  7505,
    1745,  1754,  1729, -1340,   735,   743,   745, -1340,  2088, -1340,
     747, -1340,   597,  2089,  2040,  1126,   484, -1340,  9017,  9017,
    2092,  2094, -1340,  9017, -1340,  9017,  7052, -1340, -1340, -1340,
   -1340, -1340,  1853,  1853,  1853,  1853,  1853,  1853, -1340,  7505,
   -1340,  2107,  2071,  1784,  1825,  1827,  1853, -1340,  1835,  1836,
    1853, -1340,  1840,  1842,  1853,  1829,  1838, -1340,  1966,  7505,
   -1340,  2038, -1340,  2155, -1340, -1340,  7505, -1340,  1929,  1982,
    2158, -1340,  2159, -1340, -1340,  2160,  1037, -1340,  2161,  7505,
    7505, -1340, -1340, -1340, -1340, -1340, -1340,  2114, -1340,  4312,
   -1340, -1340,  4624, -1340,  1855, -1340, -1340,   776, -1340,  2103,
    2062,  2037,  2030,  1939, -1340, -1340,   778,   792,   121, -1340,
     -14, -1340,  8410,  1937,  1938,   804,  1998, -1340, -1340, -1340,
   -1340, -1340,  2177,   -39,   -69, -1340, -1340,  2163,  1872,   828,
    1877,  1881,  1885,  1886,  1887,  1889,  8435, -1340,  1890,  2187,
   -1340, -1340, -1340,  1894,  1603,  1891,  1893,  1895,  1603,  1897,
    1899,  1900, -1340, -1340, -1340,  8864,   458,  2074, -1340,  9017,
   -1340,  2210, -1340, -1340,  1905, -1340, -1340,  1906,  8473,  8494,
   -1340,  4936, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340,  5248, -1340, -1340,   830, -1340,   833,   835, -1340,  2216,
   -1340,  2217,  2220,  1917,  1918,  7505,  2228, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340,  2233,   484,  1925, -1340,  1853,
   -1340, -1340, -1340,  1853, -1340, -1340, -1340, -1340,  2044,  2053,
    1898, -1340,  1934, -1340, -1340,  1102, -1340,  5560, -1340, -1340,
   -1340,  2073, -1340,   841, -1340, -1340,  2249,  2250,  9017,  2235,
   -1340, -1340,  2254,  1948,  1603,  1603,  1955,  1603,  1603,  2122,
    2123,  1962,  2274, -1340, -1340, -1340,  2276,  2278,  2274,  1970,
    1971,  7505,   484, -1340,  1853,  1853, -1340,  1853,  1853, -1340,
   -1340, -1340,   844,   848,  1974,   849,  1975,  2095,  9017, -1340,
    1972,  1976,  1986,  1987, -1340,  2284,  2299,  2274,  2274, -1340,
    2109,  2300, -1340, -1340, -1340, -1340,    20, -1340,  1993,   853,
     858,   347,  2304,   861, -1340, -1340,   -43,  2182,   236,   133,
    2274, -1340, -1340,  2237,  2081, -1340,  2109, -1340, -1340,   429,
   -1340, -1340, -1340,   -20,   -12,   890,   347,   347,  2175, -1340,
   -1340, -1340, -1340, -1340, -1340,   403, -1340, -1340, -1340,   439,
   -1340,  2108, -1340, -1340, -1340, -1340,   347,    36,  2154,  2156,
    2164,  2165,  2318,  2320, -1340, -1340
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1340,  2251,   -72, -1340, -1340, -1340, -1340,  -618, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
   -1340, -1340, -1340, -1340, -1340,  1599,  2024, -1340,  -182,  -203,
   -1340, -1340, -1077, -1340, -1340, -1038, -1340, -1205, -1340,  -803,
   -1340,   948,  -981, -1340, -1340, -1068, -1340, -1340,  1941,  -217,
    -128,  1927,  -390,  1630, -1340, -1340,   572, -1340, -1340, -1340,
    1356,  1540,   396,    46, -1340, -1340, -1340,  2238,  1845, -1340,
   -1340,  -873, -1340, -1340, -1340, -1340, -1340, -1340, -1340, -1340,
    -954, -1340,  -613, -1340, -1340,   638,  2279,  2052, -1340,  1631,
   -1340,   805,  1849, -1340, -1340, -1340, -1340, -1340,   479, -1340,
   -1340, -1340,   850, -1340,   530, -1340,  1301,  1280, -1337, -1339,
   -1193, -1184, -1064, -1340,  -820,   596,   276,   436,  -654,  -316,
    1693,  -883, -1340, -1340, -1340,  2246, -1340,  -256, -1340,  1703,
    1167,  -917, -1340, -1340, -1340, -1340,  1960, -1340, -1340, -1340,
   -1340,  -985, -1340
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -575
static const yytype_int16 yytable[] =
{
     220,  1052,  1066,  1168,  1388,  1377,   996,   997,  1060,   398,
    1015,  1379,   984,   371,   479,   846,   847,   812,   635,  -404,
     226,   852,   226,   854,  1522,   250,   251,   252,   253,   254,
     255,   283,  1166,  1514,    68,  1827,  -406,  -405,  1816,   700,
    1858,  1520,  1177,  1178,  1842,   399,   501,   903,  1701,   700,
     105,   392,  1846,   401,   107,   294,   295,   689,   592,   492,
     505,  1200,   873,    42,   394,   793,   300,   301,   302,   129,
     593,    43,   304,   372,   373,   374,   375,   376,   377,   378,
    1568,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   701,  1384,   480,   490,  1817,   400,
    1426,  1427,  1456,   913,   701,   910,  1703,   912,   648,  1437,
    1438,  1400,  1189,  1190,  1191,  1192,   987,   372,   373,   374,
     375,   376,   377,   378,   866,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   239,  1226,
      65,   690,   880,  1843,   481,   284,   874,   370,  1385,   903,
    1054,  1847,   683,   502,  1523,   493,  1569,   127,   240,   130,
    1704,  1844,   402,   632,   514,   515,   468,   502,   128,  1848,
    1193,  1215,  1702,    66,  1818,   988,   402,   963,  1179,   469,
    1524,   106,  1225,  1455,  1845,   108,   256,  1828,  1819,  1362,
     904,  1859,  1849,  1381,   372,   373,   374,   375,   376,   377,
     378,   633,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,  1390,   594,   702,   703,    69,
    1833,  1554,  1555,   794,    12,  1464,   881,   511,  1065,   284,
     482,   512,  1565,  1566,  1055,   518,   522,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   820,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   395,   550,   551,   552,   618,   554,   555,   556,
     557,   558,   559,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,  1696,    99,  1479,  1697,   576,   577,
     710,   470,  1095,   581,   582,   516,  1096,  1484,  1097,   729,
     587,   588,   589,   590,   591,  1515,  1516,   813,   601,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     397,   717,  1167,   220,   720,   826,   827,  -404,   227,   471,
     227,   595,  1495,   830,   257,   728,    78,  1640,  1641,  1642,
    1643,  1644,  1645,  1496,  -406,  -405,   822,  1151,  1490,  -574,
    1491,  1653,  1830,  1469,  1834,  1657,   110,  1447,    90,  1661,
     275,  1061,   112,  1497,   709,  1823,  1386,  1567,   860,   861,
     862,  1364,  1207,   114,  1209,  1210,  1391,  1498,  1542,  1543,
    1544,  1545,  1546,  1547,   235,   236,  1499,   260,   724,   725,
    1556,   116,   823,   267,  1560,   371,   485,   100,  1564,   834,
     835,  1194,  1195,  1196,   237,   808,  1367,  1831,   867,   868,
     869,   870,    12,  1392,   101,   806,   623,  -298,   706,  1197,
     721,    76,    79,  1022,   490,  1817,  1500,   815,   985,   102,
      91,   991,   276,   392,   417,   624,  1393,  1832,   490,   716,
     700,  1023,   261,   726,   727,  1062,   937,   938,  1625,  1635,
     824,   733,  1368,   297,   298,  1365,   103,  1470,   420,   372,
     373,   374,   375,   376,   377,   378,  1571,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     250,   251,   252,   253,   254,   255,  1502,   111,   424,    92,
      73,   277,  1507,   113,    77,   701,  1852,   730,   415,    81,
     279,  1818,   825,  -298,   115,   418,   901,   426,  1840,  1471,
    1369,   416,   998,  -574,  1753,  1819,   421,   814,  1756,   516,
      82,   238,   117,  1384,   268,   797,   798,   486,   800,   422,
      95,   625,  1854,   370,    84,   372,   373,   374,   375,   376,
     377,   378,   271,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1841,   272,   680,   425,
      83,  1599,  1370,  1525,  1033,   427,  1602,  1853,  1034,  1790,
    1791,    85,  1792,  1793,    86,  1785,  1385,   278,   428,   241,
     118,   372,   373,   374,   375,   376,   377,   378,  1727,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1631,  1855,  1809,  1810,  1035,    96,   681,  1036,
     859,   242,    98,    12,   964,  1811,  1719,  1632,    40,  1607,
    1723,   119,   877,   972,  1037,  1621,   243,  1835,    88,   224,
    1616,   878,  1617,   682,   244,    89,  1070,  1836,  1837,  1751,
     719,   256,  1038,    41,   225,  1071,   245,   118,    67,    93,
    1039,   914,    74,   915,  1728,    94,   886,   919,   920,  1202,
     921,    57,  1761,   887,   926,  1080,  1856,  1081,  1203,  1430,
    1431,   927,   928,   929,   930,    97,   931,   932,   933,  1729,
    1213,  1681,  1597,   934,   935,   109,   936,   124,   119,  1214,
     125,  1598,   939,   940,   941,  1789,   120,  1691,   131,   597,
     598,   121,   599,    58,   246,   600,   949,   950,   951,   888,
     952,   122,   889,   431,   432,  1079,  1774,  1775,    59,  1777,
    1778,   628,   402,   249,  1040,   247,  1041,   670,   890,   968,
     767,   906,   907,   675,   223,   677,   262,   891,  1020,  1021,
     981,  1024,  1025,  1042,   233,  1694,   264,   986,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,    60,  1026,
    1027,   768,  1383,  1737,  1028,  1027,   263,   892,   385,   386,
     387,   388,   389,   390,   391,    61,   248,   265,    62,   387,
     388,   389,   390,   391,  1152,   266,  1032,  1154,  1155,  1156,
    1049,  1050,   269,   372,   373,   374,   375,   376,   377,   378,
      63,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1076,  1077,   274,  1141,  1142,   893,
     279,  1144,  1145,  1222,  1050,  1360,  1050,  1084,  1397,  1398,
    1088,  1434,  1435,  1462,  1463,   270,  1093,   754,   755,  1485,
    1050,  1493,  1050,  1504,  1050,  1099,  1508,  1077,  1517,  1518,
    1105,  1106,   372,   373,   374,   375,   376,   377,   378,   281,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   291,   786,   787,  1519,  1518,   293,   372,   373,
     374,   375,   376,   377,   378,  1153,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   285,
    1521,  1463,  1572,  1573,   286,  1169,  1574,  1573,  1575,  1573,
    1172,  1577,  1518,  1579,  1580,   372,   373,   374,   375,   376,
     377,   378,   287,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,   288,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,  1581,  1582,   289,
     372,   373,   374,   375,   376,   377,   378,   290,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,  1584,  1585,  1587,  1588,   292,  1371,   372,   373,   374,
     375,   376,   377,   378,    68,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   384,   385,
     386,   387,   388,   389,   390,   391,  1605,  1050,  1401,  1606,
    1050,  1402,  1615,  1050,   659,   660,   661,   662,   299,   663,
    1413,  1414,   665,   666,   667,  1619,  1050,  1626,  1580,   671,
     672,   673,  1415,   306,   676,  1627,  1518,  1628,  1518,  1630,
    1582,  1422,  1423,   372,   373,   374,   375,   376,   377,   378,
     307,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1675,  1676,  1444,  1446,  1685,  1050,
    1692,  1050,   308,  1452,  1453,   788,   789,   309,   839,   840,
     310,   843,   844,   845,  1693,  1050,   311,   848,   849,   850,
     312,  1466,   853,   303,   313,  1472,  1698,  1463,   372,   373,
     374,   375,   376,   377,   378,  1476,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,  1482,
    1707,  1398,  1740,  1050,   999,  1741,  1580,  1742,  1582,  1763,
    1764,  1767,  1768,   396,  1102,  1103,  1794,  1795,  1796,  1797,
     411,  1799,  1795,   314,  1001,  1821,  1795,  1002,   315,  1003,
    1822,  1795,  1004,  1825,  1826,   316,  1227,  1228,  1229,  1230,
    1231,  1232,   317,  1233,   318,  1234,   319,  1005,   320,  1235,
    1236,  1237,   321,  1238,  1006,  1007,   322,  1239,  1240,  1241,
    1242,  1243,  1850,  1795,   816,   817,   979,   980,  1244,  1450,
    1451,   323,   324,  1245,  1246,   325,   326,  1247,   327,  1008,
     328,   329,  1248,  1249,  1250,  1251,  1252,  1132,  1133,  1253,
     330,  1254,  1255,  1256,   331,   332,  1257,  1258,   333,  1259,
    1260,  1261,   334,   335,   336,  1262,   337,   413,  1548,  1549,
    1263,   338,   339,   340,  1264,   341,   342,   343,   344,  1265,
    1266,  1267,   345,   346,   347,   348,  1268,  1269,  1010,  1270,
    1271,  1272,  1273,   734,   349,  1274,   350,  1275,  1276,  1277,
    1278,   351,  1279,   352,  1280,  1281,   353,  1282,  1283,  1284,
    1011,  1285,  1286,  1287,  1288,   354,   355,   356,  1012,  1289,
     735,  1290,   357,  1291,  1292,   358,  1293,  1294,  1295,  1296,
    1297,  1298,   359,  1299,  1300,  1301,  1302,  1303,  1528,  1529,
     360,  1304,   361,  1305,  1533,  1306,  1535,   362,   363,   364,
     365,   366,   367,   368,  1307,   369,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,   414,   419,  1315,  1316,   423,   429,   430,
    1013,  1317,   433,  1318,  1319,  1320,   434,  1321,   475,  1322,
     476,  1323,  1324,  1325,  1326,   477,   736,   478,   484,   487,
     488,   489,   494,   495,   496,   497,  1327,  1328,  1329,   498,
     499,   500,   504,   507,   533,  1330,   549,  1331,  1332,  1333,
     553,   572,   573,   574,  1334,   575,  1335,  1336,  1337,   578,
    1338,   579,   580,   583,  1339,  1340,   403,  1341,  1342,  1343,
    1344,   584,   585,   617,  1345,   596,   620,   622,   627,   629,
     636,   743,   637,   650,   639,   640,   641,   642,   643,   644,
     372,   373,   374,   375,   376,   377,   378,  1622,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   645,   646,   647,   649,  1346,  1347,  1348,  1349,  1350,
     651,   652,   653,   655,  1093,   656,   657,   664,   674,   668,
     678,   404,   679,   684,   685,   686,   687,  1646,   688,   691,
     692,  -266,  1351,  1352,  1353,  1354,  1355,  1356,   405,   693,
     694,   695,   696,   697,   698,   699,   707,  1665,   712,   714,
     722,   406,    12,   769,  1669,   783,   784,  1227,  1228,  1229,
    1230,  1231,  1232,   785,  1233,   790,  1234,  1678,  1679,   791,
    1235,  1236,  1237,   792,  1238,   -53,   407,   391,  1239,  1240,
    1241,  1242,  1243,   799,   802,   803,   804,   809,   810,  1244,
     807,   811,   408,   818,  1245,  1246,   821,   828,  1247,   819,
     831,   832,   833,  1248,  1249,  1250,  1251,  1252,   836,   841,
    1253,   855,  1254,  1255,  1256,   856,   863,  1257,  1258,   858,
    1259,  1260,  1261,   857,   875,   876,  1262,   865,   879,   882,
     883,  1263,   885,   898,   899,  1264,   884,   902,   908,   903,
    1265,  1266,  1267,   918,   923,   942,   943,  1268,  1269,   944,
    1270,  1271,  1272,  1273,   953,   945,  1274,   954,  1494,  1276,
    1277,  1278,   946,  1279,   947,  1280,  1281,   948,  1282,  1283,
    1284,   956,  1285,  1286,  1287,  1288,   955,   957,   959,   958,
    1289,   960,  1290,  1748,  1291,  1292,   -55,  1293,  1294,  1295,
    1296,  1297,  1298,   961,  1299,  1300,  1301,  1302,  1303,   962,
     975,   973,  1304,   977,  1305,   982,  1306,   983,   992,   993,
     994,   995,  1016,  1017,  1018,  1307,  1019,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,  1029,  1030,  1315,  1316,  1031,  1044,
    1053,  1051,  1317,  1056,  1318,  1319,  1320,  1058,  1321,  1059,
    1322,  1063,  1323,  1324,  1325,  1326,  1045,  1046,  1047,  1788,
    1048,  1064,  1067,  1068,  1069,  1072,  1074,  1327,  1328,  1329,
    1078,  1073,  1075,  1089,  1090,  1085,  1330,  1091,  1331,  1332,
    1333,  1158,  1159,  1107,  1108,  1334,  1161,  1335,  1336,  1337,
    1165,  1338,  1175,   744,  1180,  1339,  1340,  1181,  1341,  1342,
    1343,  1344,  1120,  1185,  1121,  1345,   372,   373,   374,   375,
     376,   377,   378,  1125,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   374,   375,   376,
     377,   378,  1126,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1346,  1347,  1348,  1349,
    1350,   372,   373,   374,   375,   376,   377,   378,  1127,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1128,  1351,  1352,  1353,  1354,  1355,  1356,  1227,
    1228,  1229,  1230,  1231,  1232,  1129,  1233,  1130,  1234,  1186,
    1131,  1140,  1235,  1236,  1237,  1143,  1238,  1146,  1188,  1149,
    1239,  1240,  1241,  1242,  1243,  1150,  1198,  1157,  1162,  1163,
    1164,  1244,  1170,  1173,  1174,  1199,  1245,  1246,  1201,  1182,
    1247,  1183,  1184,  1187,  1204,  1248,  1249,  1250,  1251,  1252,
    1205,  1206,  1253,  1208,  1254,  1255,  1256,  1211,  1216,  1257,
    1258,  1217,  1259,  1260,  1261,  1218,  1219,  1220,  1262,  1221,
    1224,  1223,  1358,  1263,  1359,  1363,  1361,  1264,  1372,  1373,
    1374,  1375,  1265,  1266,  1267,  1378,  1389,  1395,  1396,  1268,
    1269,  1424,  1270,  1271,  1272,  1273,  1429,  1439,  1274,  1433,
    1600,  1276,  1277,  1278,  1448,  1279,  1440,  1280,  1281,  1441,
    1282,  1283,  1284,  1442,  1285,  1286,  1287,  1288,  1443,  1454,
    1458,  1460,  1289,  1468,  1290,  1465,  1291,  1292,  1467,  1293,
    1294,  1295,  1296,  1297,  1298,  1473,  1299,  1300,  1301,  1302,
    1303,  1474,  1475,  1478,  1304,  1480,  1305,  1481,  1306,  1483,
    1486,  1501,  1506,  1510,  1487,  1488,  1526,  1307,  1489,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1492,  1503,  1315,  1316,
    1505,  1509,  1511,  1512,  1317,  1536,  1318,  1319,  1320,  1551,
    1321,  1530,  1322,  1557,  1323,  1324,  1325,  1326,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,  1327,
    1328,  1329,  1552,  1576,  1558,  1578,  1583,  1559,  1330,  1561,
    1331,  1332,  1333,  1562,  1563,  1589,  1590,  1334,  1591,  1335,
    1336,  1337,  1593,  1338,  1594,  1595,  1604,  1339,  1340,   745,
    1341,  1342,  1343,  1344,  1614,  1618,  1623,  1345,   372,   373,
     374,   375,   376,   377,   378,  1624,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,  1629,  1633,  1634,   746,  1636,  1650,  1637,  1346,  1347,
    1348,  1349,  1350,   372,   373,   374,   375,   376,   377,   378,
    1647,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1649,  1351,  1352,  1353,  1354,  1355,
    1356,  1227,  1228,  1229,  1230,  1231,  1232,  1651,  1233,  1652,
    1234,  1662,  1655,  1656,  1235,  1236,  1237,  1659,  1238,  1660,
    1663,  1664,  1239,  1240,  1241,  1242,  1243,  1666,  1668,  1670,
    1671,  1672,  1673,  1244,  1680,  1674,  1677,  1684,  1245,  1246,
    1686,  1688,  1247,  1687,  1689,  1690,  1699,  1248,  1249,  1250,
    1251,  1252,  1700,  1705,  1253,  1706,  1254,  1255,  1256,  1708,
    1716,  1257,  1258,  1709,  1259,  1260,  1261,  1710,  1711,  1712,
    1262,  1713,  1720,  1715,  1721,  1263,  1718,  1722,  1724,  1264,
    1725,  1730,  1726,  1732,  1265,  1266,  1267,  1733,  1734,  1743,
    1744,  1268,  1269,  1745,  1270,  1271,  1272,  1273,  1746,  1747,
    1274,  1749,  1603,  1276,  1277,  1278,  1750,  1279,  1752,  1280,
    1281,  1759,  1282,  1283,  1284,  1762,  1285,  1286,  1287,  1288,
    1760,  1766,  1769,  1770,  1289,  1771,  1290,  1772,  1291,  1292,
    1773,  1293,  1294,  1295,  1296,  1297,  1298,  1776,  1299,  1300,
    1301,  1302,  1303,  1779,  1780,  1518,  1304,  1781,  1305,  1783,
    1306,  1784,  1786,  1787,  1802,  1798,  1800,  1807,  1803,  1307,
    1801,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1804,  1805,
    1315,  1316,  1808,  1812,  1820,  1815,  1317,  1824,  1318,  1319,
    1320,  1829,  1321,  1838,  1322,  1827,  1323,  1324,  1325,  1326,
    1851,  1857,  1860,  1864,  1861,  1865,  1862,  1863,   513,   631,
     234,  1327,  1328,  1329,   925,   897,   619,  1527,   282,   711,
    1330,  1639,  1331,  1332,  1333,   506,   126,  1171,   976,  1334,
     911,  1335,  1336,  1337,   718,  1338,  1839,  1382,  1620,  1339,
    1340,   748,  1341,  1342,  1343,  1344,  1366,   851,  1477,  1345,
     372,   373,   374,   375,   376,   377,   378,   296,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   864,   654,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,     0,     0,     0,
    1346,  1347,  1348,  1349,  1350,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,  1351,  1352,  1353,
    1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,
    1233,     0,  1234,     0,     0,     0,  1235,  1236,  1237,     0,
    1238,     0,     0,     0,  1239,  1240,  1241,  1242,  1243,     0,
       0,     0,     0,     0,     0,  1244,     0,     0,     0,     0,
    1245,  1246,     0,     0,  1247,     0,     0,     0,     0,  1248,
    1249,  1250,  1251,  1252,     0,     0,  1253,     0,  1254,  1255,
    1256,     0,     0,  1257,  1258,     0,  1259,  1260,  1261,     0,
       0,     0,  1262,     0,     0,     0,     0,  1263,     0,     0,
       0,  1264,     0,     0,     0,     0,  1265,  1266,  1267,     0,
       0,     0,     0,  1268,  1269,     0,  1270,  1271,  1272,  1273,
       0,     0,  1274,     0,  1608,  1276,  1277,  1278,     0,  1279,
       0,  1280,  1281,     0,  1282,  1283,  1284,     0,  1285,  1286,
    1287,  1288,     0,     0,     0,     0,  1289,     0,  1290,     0,
    1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,     0,
    1299,  1300,  1301,  1302,  1303,     0,     0,     0,  1304,     0,
    1305,     0,  1306,     0,     0,     0,     0,     0,     0,     0,
       0,  1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
       0,     0,  1315,  1316,     0,     0,     0,     0,  1317,     0,
    1318,  1319,  1320,     0,  1321,     0,  1322,     0,  1323,  1324,
    1325,  1326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1327,  1328,  1329,     0,     0,     0,     0,
       0,     0,  1330,     0,  1331,  1332,  1333,     0,     0,     0,
       0,  1334,     0,  1335,  1336,  1337,     0,  1338,     0,     0,
       0,  1339,  1340,   750,  1341,  1342,  1343,  1344,     0,     0,
       0,  1345,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   756,     0,
       0,     0,  1346,  1347,  1348,  1349,  1350,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,  1351,
    1352,  1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,
    1232,     0,  1233,     0,  1234,     0,     0,     0,  1235,  1236,
    1237,     0,  1238,     0,     0,     0,  1239,  1240,  1241,  1242,
    1243,     0,     0,     0,     0,     0,     0,  1244,     0,     0,
       0,     0,  1245,  1246,     0,     0,  1247,     0,     0,     0,
       0,  1248,  1249,  1250,  1251,  1252,     0,     0,  1253,     0,
    1254,  1255,  1256,     0,     0,  1257,  1258,     0,  1259,  1260,
    1261,     0,     0,     0,  1262,     0,     0,     0,     0,  1263,
       0,     0,     0,  1264,     0,     0,     0,     0,  1265,  1266,
    1267,     0,     0,     0,     0,  1268,  1269,     0,  1270,  1271,
    1272,  1273,     0,     0,  1274,     0,  1609,  1276,  1277,  1278,
       0,  1279,     0,  1280,  1281,     0,  1282,  1283,  1284,     0,
    1285,  1286,  1287,  1288,     0,     0,     0,     0,  1289,     0,
    1290,     0,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,
    1298,     0,  1299,  1300,  1301,  1302,  1303,     0,     0,     0,
    1304,     0,  1305,     0,  1306,     0,     0,     0,     0,     0,
       0,     0,     0,  1307,     0,  1308,  1309,  1310,  1311,  1312,
    1313,  1314,     0,     0,  1315,  1316,     0,     0,     0,     0,
    1317,     0,  1318,  1319,  1320,     0,  1321,     0,  1322,     0,
    1323,  1324,  1325,  1326,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1327,  1328,  1329,     0,     0,
       0,     0,     0,     0,  1330,     0,  1331,  1332,  1333,     0,
       0,     0,     0,  1334,     0,  1335,  1336,  1337,     0,  1338,
       0,     0,     0,  1339,  1340,   758,  1341,  1342,  1343,  1344,
       0,     0,     0,  1345,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,  1346,  1347,  1348,  1349,  1350,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,  1351,  1352,  1353,  1354,  1355,  1356,  1227,  1228,  1229,
    1230,  1231,  1232,     0,  1233,     0,  1234,     0,     0,     0,
    1235,  1236,  1237,     0,  1238,     0,     0,     0,  1239,  1240,
    1241,  1242,  1243,     0,     0,     0,     0,     0,     0,  1244,
       0,     0,     0,     0,  1245,  1246,     0,     0,  1247,     0,
       0,     0,     0,  1248,  1249,  1250,  1251,  1252,     0,     0,
    1253,     0,  1254,  1255,  1256,     0,     0,  1257,  1258,     0,
    1259,  1260,  1261,     0,     0,     0,  1262,     0,     0,     0,
       0,  1263,     0,     0,     0,  1264,     0,     0,     0,     0,
    1265,  1266,  1267,     0,     0,     0,     0,  1268,  1269,     0,
    1270,  1271,  1272,  1273,     0,     0,  1274,     0,  1610,  1276,
    1277,  1278,     0,  1279,     0,  1280,  1281,     0,  1282,  1283,
    1284,     0,  1285,  1286,  1287,  1288,     0,     0,     0,     0,
    1289,     0,  1290,     0,  1291,  1292,     0,  1293,  1294,  1295,
    1296,  1297,  1298,     0,  1299,  1300,  1301,  1302,  1303,     0,
       0,     0,  1304,     0,  1305,     0,  1306,     0,     0,     0,
       0,     0,     0,     0,     0,  1307,     0,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,     0,     0,  1315,  1316,     0,     0,
       0,     0,  1317,     0,  1318,  1319,  1320,     0,  1321,     0,
    1322,     0,  1323,  1324,  1325,  1326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1327,  1328,  1329,
       0,     0,     0,     0,     0,     0,  1330,     0,  1331,  1332,
    1333,     0,     0,     0,     0,  1334,     0,  1335,  1336,  1337,
       0,  1338,     0,     0,     0,  1339,  1340,   764,  1341,  1342,
    1343,  1344,     0,     0,     0,  1345,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   765,     0,     0,     0,  1346,  1347,  1348,  1349,
    1350,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,  1351,  1352,  1353,  1354,  1355,  1356,  1227,
    1228,  1229,  1230,  1231,  1232,     0,  1233,     0,  1234,     0,
       0,     0,  1235,  1236,  1237,     0,  1238,     0,     0,     0,
    1239,  1240,  1241,  1242,  1243,     0,     0,     0,     0,     0,
       0,  1244,     0,     0,     0,     0,  1245,  1246,     0,     0,
    1247,     0,     0,     0,     0,  1248,  1249,  1250,  1251,  1252,
       0,     0,  1253,     0,  1254,  1255,  1256,     0,     0,  1257,
    1258,     0,  1259,  1260,  1261,     0,     0,     0,  1262,     0,
       0,     0,     0,  1263,     0,     0,     0,  1264,     0,     0,
       0,     0,  1265,  1266,  1267,     0,     0,     0,     0,  1268,
    1269,     0,  1270,  1271,  1272,  1273,     0,     0,  1274,     0,
    1611,  1276,  1277,  1278,     0,  1279,     0,  1280,  1281,     0,
    1282,  1283,  1284,     0,  1285,  1286,  1287,  1288,     0,     0,
       0,     0,  1289,     0,  1290,     0,  1291,  1292,     0,  1293,
    1294,  1295,  1296,  1297,  1298,     0,  1299,  1300,  1301,  1302,
    1303,     0,     0,     0,  1304,     0,  1305,     0,  1306,     0,
       0,     0,     0,     0,     0,     0,     0,  1307,     0,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,     0,     0,  1315,  1316,
       0,     0,     0,     0,  1317,     0,  1318,  1319,  1320,     0,
    1321,     0,  1322,     0,  1323,  1324,  1325,  1326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1327,
    1328,  1329,     0,     0,     0,     0,     0,     0,  1330,     0,
    1331,  1332,  1333,     0,     0,     0,     0,  1334,     0,  1335,
    1336,  1337,     0,  1338,     0,     0,     0,  1339,  1340,   766,
    1341,  1342,  1343,  1344,     0,     0,     0,  1345,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   778,     0,     0,     0,  1346,  1347,
    1348,  1349,  1350,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,  1351,  1352,  1353,  1354,  1355,
    1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,  1233,     0,
    1234,     0,     0,     0,  1235,  1236,  1237,     0,  1238,     0,
       0,     0,  1239,  1240,  1241,  1242,  1243,     0,     0,     0,
       0,     0,     0,  1244,     0,     0,     0,     0,  1245,  1246,
       0,     0,  1247,     0,     0,     0,     0,  1248,  1249,  1250,
    1251,  1252,     0,     0,  1253,     0,  1254,  1255,  1256,     0,
       0,  1257,  1258,     0,  1259,  1260,  1261,     0,     0,     0,
    1262,     0,     0,     0,     0,  1263,     0,     0,     0,  1264,
       0,     0,     0,     0,  1265,  1266,  1267,     0,     0,     0,
       0,  1268,  1269,     0,  1270,  1271,  1272,  1273,     0,     0,
    1274,     0,  1612,  1276,  1277,  1278,     0,  1279,     0,  1280,
    1281,     0,  1282,  1283,  1284,     0,  1285,  1286,  1287,  1288,
       0,     0,     0,     0,  1289,     0,  1290,     0,  1291,  1292,
       0,  1293,  1294,  1295,  1296,  1297,  1298,     0,  1299,  1300,
    1301,  1302,  1303,     0,     0,     0,  1304,     0,  1305,     0,
    1306,     0,     0,     0,     0,     0,     0,     0,     0,  1307,
       0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,     0,     0,
    1315,  1316,     0,     0,     0,     0,  1317,     0,  1318,  1319,
    1320,     0,  1321,     0,  1322,     0,  1323,  1324,  1325,  1326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1327,  1328,  1329,     0,     0,     0,     0,     0,     0,
    1330,     0,  1331,  1332,  1333,     0,     0,     0,     0,  1334,
       0,  1335,  1336,  1337,     0,  1338,     0,     0,     0,  1339,
    1340,   779,  1341,  1342,  1343,  1344,     0,     0,     0,  1345,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   780,     0,     0,     0,
    1346,  1347,  1348,  1349,  1350,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,  1351,  1352,  1353,
    1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,
    1233,     0,  1234,     0,     0,     0,  1235,  1236,  1237,     0,
    1238,     0,     0,     0,  1239,  1240,  1241,  1242,  1243,     0,
       0,     0,     0,     0,     0,  1244,     0,     0,     0,     0,
    1245,  1246,     0,     0,  1247,     0,     0,     0,     0,  1248,
    1249,  1250,  1251,  1252,     0,     0,  1253,     0,  1254,  1255,
    1256,     0,     0,  1257,  1258,     0,  1259,  1260,  1261,     0,
       0,     0,  1262,     0,     0,     0,     0,  1263,     0,     0,
       0,  1264,     0,     0,     0,     0,  1265,  1266,  1267,     0,
       0,     0,     0,  1268,  1269,     0,  1270,  1271,  1272,  1273,
       0,     0,  1274,     0,  1613,  1276,  1277,  1278,     0,  1279,
       0,  1280,  1281,     0,  1282,  1283,  1284,     0,  1285,  1286,
    1287,  1288,     0,     0,     0,     0,  1289,     0,  1290,     0,
    1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,     0,
    1299,  1300,  1301,  1302,  1303,     0,     0,     0,  1304,     0,
    1305,     0,  1306,     0,     0,     0,     0,     0,     0,     0,
       0,  1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
       0,     0,  1315,  1316,     0,     0,     0,     0,  1317,     0,
    1318,  1319,  1320,     0,  1321,     0,  1322,     0,  1323,  1324,
    1325,  1326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1327,  1328,  1329,     0,     0,     0,     0,
       0,     0,  1330,     0,  1331,  1332,  1333,     0,     0,     0,
       0,  1334,     0,  1335,  1336,  1337,     0,  1338,     0,     0,
       0,  1339,  1340,   782,  1341,  1342,  1343,  1344,     0,     0,
       0,  1345,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1112,     0,
       0,     0,  1346,  1347,  1348,  1349,  1350,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,  1351,
    1352,  1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,
    1232,     0,  1233,     0,  1234,     0,     0,     0,  1235,  1236,
    1237,     0,  1238,     0,     0,     0,  1239,  1240,  1241,  1242,
    1243,     0,     0,     0,     0,     0,     0,  1244,     0,     0,
       0,     0,  1245,  1246,     0,     0,  1247,     0,     0,     0,
       0,  1248,  1249,  1250,  1251,  1252,     0,     0,  1253,     0,
    1254,  1255,  1256,     0,     0,  1257,  1258,     0,  1259,  1260,
    1261,     0,     0,     0,  1262,     0,     0,     0,     0,  1263,
       0,     0,     0,  1264,     0,     0,     0,     0,  1265,  1266,
    1267,     0,     0,     0,     0,  1268,  1269,     0,  1270,  1271,
    1272,  1273,     0,     0,  1274,     0,  1682,  1276,  1277,  1278,
       0,  1279,     0,  1280,  1281,     0,  1282,  1283,  1284,     0,
    1285,  1286,  1287,  1288,     0,     0,     0,     0,  1289,     0,
    1290,     0,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,
    1298,     0,  1299,  1300,  1301,  1302,  1303,     0,     0,     0,
    1304,     0,  1305,     0,  1306,     0,     0,     0,     0,     0,
       0,     0,     0,  1307,     0,  1308,  1309,  1310,  1311,  1312,
    1313,  1314,     0,     0,  1315,  1316,     0,     0,     0,     0,
    1317,     0,  1318,  1319,  1320,     0,  1321,     0,  1322,     0,
    1323,  1324,  1325,  1326,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1327,  1328,  1329,     0,     0,
       0,     0,     0,     0,  1330,     0,  1331,  1332,  1333,     0,
       0,     0,     0,  1334,     0,  1335,  1336,  1337,     0,  1338,
       0,     0,     0,  1339,  1340,  1113,  1341,  1342,  1343,  1344,
       0,     0,     0,  1345,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1124,     0,     0,     0,  1346,  1347,  1348,  1349,  1350,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,  1351,  1352,  1353,  1354,  1355,  1356,  1227,  1228,  1229,
    1230,  1231,  1232,     0,  1233,     0,  1234,     0,     0,     0,
    1235,  1236,  1237,     0,  1238,     0,     0,     0,  1239,  1240,
    1241,  1242,  1243,     0,     0,     0,     0,     0,     0,  1244,
       0,     0,     0,     0,  1245,  1246,     0,     0,  1247,     0,
       0,     0,     0,  1248,  1249,  1250,  1251,  1252,     0,     0,
    1253,     0,  1254,  1255,  1256,     0,     0,  1257,  1258,     0,
    1259,  1260,  1261,     0,     0,     0,  1262,     0,     0,     0,
       0,  1263,     0,     0,     0,  1264,     0,     0,  1100,     0,
    1265,  1266,  1267,     0,     0,     0,     0,  1268,  1269,     0,
    1270,  1271,  1272,  1273,     0,     0,  1274,     0,  1683,  1276,
    1277,  1278,     0,  1279,     0,  1280,  1281,     0,  1282,  1283,
    1284,     0,  1285,  1286,  1287,  1288,     0,     0,     0,     0,
    1289,     0,  1290,     0,  1291,  1292,     0,  1293,  1294,  1295,
    1296,  1297,  1298,     0,  1299,  1300,  1301,  1302,  1303,     0,
       0,     0,  1304,     0,  1305,     0,  1306,     0,     0,     0,
       0,     0,     0,     0,     0,  1307,     0,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,     0,     0,  1315,  1316,     0,     0,
       0,     0,  1317,     0,  1318,  1319,  1320,     0,  1321,     0,
    1322,     0,  1323,  1324,  1325,  1326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1327,  1328,  1329,
       0,     0,     0,     0,     0,     0,  1330,     0,  1331,  1332,
    1333,     0,     0,     0,     0,  1334,     0,  1335,  1336,  1337,
       0,  1338,     0,     0,     0,  1339,  1340,  1134,  1341,  1342,
    1343,  1344,     0,     0,     0,  1345,     0,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1101,     0,     0,     0,     0,  1346,  1347,  1348,  1349,
    1350,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,  1351,  1352,  1353,  1354,  1355,  1356,  1227,
    1228,  1229,  1230,  1231,  1232,     0,  1233,     0,  1234,     0,
       0,     0,  1235,  1236,  1237,     0,  1238,     0,     0,     0,
    1239,  1240,  1241,  1242,  1243,     0,     0,     0,     0,     0,
       0,  1244,     0,     0,     0,     0,  1245,  1246,     0,     0,
    1247,     0,     0,     0,     0,  1248,  1249,  1250,  1251,  1252,
       0,     0,  1253,     0,  1254,  1255,  1256,     0,     0,  1257,
    1258,     0,  1259,  1260,  1261,     0,     0,     0,  1262,     0,
       0,     0,     0,  1263,     0,     0,     0,  1264,     0,     0,
       0,     0,  1265,  1266,  1267,     0,     0,     0,     0,  1268,
    1269,     0,  1270,  1271,  1272,  1273,     0,     0,  1274,     0,
    1738,  1276,  1277,  1278,     0,  1279,     0,  1280,  1281,     0,
    1282,  1283,  1284,     0,  1285,  1286,  1287,  1288,     0,     0,
       0,     0,  1289,     0,  1290,     0,  1291,  1292,     0,  1293,
    1294,  1295,  1296,  1297,  1298,     0,  1299,  1300,  1301,  1302,
    1303,     0,     0,     0,  1304,     0,  1305,     0,  1306,     0,
       0,     0,     0,     0,     0,     0,     0,  1307,     0,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,     0,     0,  1315,  1316,
       0,     0,     0,     0,  1317,     0,  1318,  1319,  1320,     0,
    1321,     0,  1322,     0,  1323,  1324,  1325,  1326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1327,
    1328,  1329,     0,     0,     0,     0,     0,     0,  1330,     0,
    1331,  1332,  1333,     0,     0,     0,     0,  1334,     0,  1335,
    1336,  1337,     0,  1338,     0,     0,     0,  1339,  1340,   586,
    1341,  1342,  1343,  1344,     0,     0,     0,  1345,     0,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   731,     0,     0,     0,     0,  1346,  1347,
    1348,  1349,  1350,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,  1351,  1352,  1353,  1354,  1355,
    1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,  1233,     0,
    1234,     0,     0,     0,  1235,  1236,  1237,     0,  1238,     0,
       0,     0,  1239,  1240,  1241,  1242,  1243,     0,     0,     0,
       0,     0,     0,  1244,     0,     0,     0,     0,  1245,  1246,
       0,     0,  1247,     0,     0,     0,     0,  1248,  1249,  1250,
    1251,  1252,     0,     0,  1253,     0,  1254,  1255,  1256,     0,
       0,  1257,  1258,     0,  1259,  1260,  1261,     0,     0,     0,
    1262,     0,     0,     0,     0,  1263,     0,     0,     0,  1264,
       0,     0,     0,     0,  1265,  1266,  1267,     0,     0,     0,
       0,  1268,  1269,     0,  1270,  1271,  1272,  1273,     0,     0,
    1274,     0,  1739,  1276,  1277,  1278,     0,  1279,     0,  1280,
    1281,     0,  1282,  1283,  1284,     0,  1285,  1286,  1287,  1288,
       0,     0,     0,     0,  1289,     0,  1290,     0,  1291,  1292,
       0,  1293,  1294,  1295,  1296,  1297,  1298,     0,  1299,  1300,
    1301,  1302,  1303,     0,     0,     0,  1304,     0,  1305,     0,
    1306,     0,     0,     0,     0,     0,     0,     0,     0,  1307,
       0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,     0,     0,
    1315,  1316,     0,     0,     0,     0,  1317,     0,  1318,  1319,
    1320,     0,  1321,     0,  1322,     0,  1323,  1324,  1325,  1326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1327,  1328,  1329,     0,     0,     0,     0,     0,     0,
    1330,     0,  1331,  1332,  1333,     0,     0,     0,     0,  1334,
       0,  1335,  1336,  1337,     0,  1338,     0,     0,     0,  1339,
    1340,   737,  1341,  1342,  1343,  1344,     0,     0,     0,  1345,
       0,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   738,     0,     0,     0,     0,
    1346,  1347,  1348,  1349,  1350,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,  1351,  1352,  1353,
    1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,
    1233,     0,  1234,     0,     0,     0,  1235,  1236,  1237,     0,
    1238,     0,     0,     0,  1239,  1240,  1241,  1242,  1243,     0,
       0,     0,     0,     0,     0,  1244,     0,     0,     0,     0,
    1245,  1246,     0,     0,  1247,     0,     0,     0,     0,  1248,
    1249,  1250,  1251,  1252,     0,     0,  1253,     0,  1254,  1255,
    1256,     0,     0,  1257,  1258,     0,  1259,  1260,  1261,     0,
       0,     0,  1262,     0,     0,     0,     0,  1263,     0,     0,
       0,  1264,     0,     0,     0,     0,  1265,  1266,  1267,     0,
       0,     0,     0,  1268,  1269,     0,  1270,  1271,  1272,  1273,
       0,     0,  1274,     0,  1765,  1276,  1277,  1278,     0,  1279,
       0,  1280,  1281,     0,  1282,  1283,  1284,     0,  1285,  1286,
    1287,  1288,     0,     0,     0,     0,  1289,     0,  1290,     0,
    1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,     0,
    1299,  1300,  1301,  1302,  1303,     1,     0,     0,  1304,     2,
    1305,     0,  1306,     0,     0,     0,     0,     0,     0,     0,
       0,  1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
       0,     3,  1315,  1316,     0,     0,     4,     0,  1317,     0,
    1318,  1319,  1320,     0,  1321,     0,  1322,     0,  1323,  1324,
    1325,  1326,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     0,  1327,  1328,  1329,     0,     0,     0,     0,
       0,     0,  1330,     0,  1331,  1332,  1333,     0,     0,     0,
       0,  1334,     0,  1335,  1336,  1337,     0,  1338,     0,     0,
       0,  1339,  1340,   739,  1341,  1342,  1343,  1344,     0,     0,
       0,  1345,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,    44,     0,     0,     0,
     138,   139,     0,     0,     0,     0,     0,   740,   140,   141,
       0,     0,  1346,  1347,  1348,  1349,  1350,     0,   142,     0,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,  1351,
    1352,  1353,  1354,  1355,  1356,   143,     0,    11,    12,     0,
     144,     0,     0,   145,   146,     0,     0,     0,     0,     0,
       0,    13,    45,     0,    14,     0,     0,     0,    46,   147,
       0,    15,     0,   148,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,   150,     0,   132,
     133,   134,   135,   136,   137,     0,     0,     0,     0,    49,
       0,     0,     0,   138,   139,     0,     0,     0,     0,     0,
       0,   140,     0,     0,     0,   151,    50,     0,     0,    51,
       0,     0,   152,   153,     0,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,     0,     0,     0,
       0,   519,     0,     0,     0,     0,     0,     0,   143,     0,
      54,     0,     0,   144,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
       0,     0,     0,     0,   219,   520,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
     150,   138,   139,     0,     0,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   602,
       0,   603,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,   521,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   741,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   742,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     0,     0,     0,     0,   219,   150,   132,
     133,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,     0,     0,     0,     0,     0,
       0,   140,     0,     0,     0,   372,   373,   374,   375,   376,
     377,   378,   604,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   605,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
     150,   138,   139,     0,     0,     0,     0,     0,     0,   140,
     560,     0,     0,     0,   747,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,     0,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     0,     0,     0,     0,   219,   150,     0,
       0,   132,   133,   134,   135,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   139,   751,     0,     0,
       0,     0,     0,   140,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,     0,     0,   145,   146,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   732,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,   150,     0,     0,     0,     0,   752,   140,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     144,     0,     0,   145,   146,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1087,     0,     0,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   193,     0,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   150,     0,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   753,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
       0,     0,     0,     0,   219,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   757,     0,     0,     0,     0,     0,   140,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,   759,     0,   144,
       0,     0,   145,   146,     0,     0,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,     0,     0,  1092,     0,     0,     0,   140,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,     0,   132,
     133,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,     0,   150,  1532,     0,     0,
       0,   140,   372,   373,   374,   375,   376,   377,   378,   760,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
     761,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   723,     0,     0,     0,   150,  1534,
       0,     0,     0,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   917,
     150,     0,     0,   219,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     0,     0,     0,     0,   219,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,   770,     0,     0,     0,     0,     0,
     140,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   144,     0,     0,   145,   146,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,   372,   373,   374,   375,   376,   377,   378,   150,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,   373,   374,   375,
     376,   377,   378,   771,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,     0,
       0,     0,   372,   373,   374,   375,   376,   377,   378,   772,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
     773,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,   774,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,   775,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,   372,   373,   374,
     375,   376,   377,   378,   776,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,   777,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,   781,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,  1104,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,  1109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,   373,   374,   375,   376,   377,   378,  1110,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,   372,   373,   374,
     375,   376,   377,   378,  1111,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,  1114,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,  1115,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,  1116,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,   372,   373,   374,   375,   376,   377,   378,  1117,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
    1118,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,  1119,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,  1122,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,  1123,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,  1135,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,  1136,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,  1212,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,  1403,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,  1457,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
    1513,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,  1537,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,  1538,   372,   373,   374,   375,   376,   377,   378,
     999,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1539,     0,  1000,     0,     0,     0,
    1001,     0,     0,  1002,     0,  1003,     0,     0,  1004,     0,
       0,     0,     0,     0,     0,  1540,     0,     0,     0,     0,
       0,     0,     0,  1005,     0,     0,     0,     0,     0,     0,
    1006,  1007,     0,     0,     0,     0,  1541,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1404,  1405,     0,
       0,     0,  1406,     0,  1407,  1008,     0,  1550,     0,     0,
       0,     0,     0,   435,   436,     0,   437,     0,   438,   439,
       0,     0,  1009,     0,     0,     0,     0,     0,  1586,     0,
       0,     0,     0,     0,   440,  1408,  1409,     0,  1410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1592,
       0,     0,     0,     0,  1010,     0,   441,   442,   443,   444,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
    1596,     0,     0,     0,   446,     0,  1011,     0,     0,     0,
       0,     0,     0,     0,  1012,     0,     0,     0,     0,     0,
       0,  1601,   447,     0,     0,     0,     0,     0,     0,     0,
     448,     0,     0,     0,     0,     0,     0,     0,   449,     0,
       0,     0,  1695,     0,     0,   450,     0,     0,   451,     0,
       0,   452,   453,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1013,  1714,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1411,  1412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   455,   456,     0,   457,   458,
       0,     0,     0,     0,   459,  1735,   460,     0,     0,     0,
       0,   461,   462,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,   464,     0,   465,  1736,     0,     0,     0,
     466,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,  1384,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,     0,     0,   922,     0,     0,   372,
     373,   374,   375,   376,   377,   378,   916,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,  1098,     0,     0,
     392,     0,     0,     0,     0,     0,  1385,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,     0,
       0,   372,   373,   374,   375,   376,   377,   378,   762,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,   372,   373,   374,   375,   376,   377,
     378,   801,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,   372,   373,   374,
     375,   376,   377,   378,   967,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  -575,  -575,  -575,  -575,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391
};

static const yytype_int16 yycheck[] =
{
      72,   874,   885,   984,  1081,  1073,   826,   827,   881,   226,
     830,  1075,   815,     3,   270,   669,   670,    20,   408,     3,
       3,   675,     3,   677,    38,     3,     4,     5,     6,     7,
       8,   115,    20,  1372,     8,    78,     3,     3,    18,   132,
       4,  1378,   996,   997,    64,   227,   204,   170,    87,   132,
       3,    41,    64,   204,     3,   127,   128,   227,     6,   227,
     204,  1015,   227,   215,   115,     6,   138,   139,   140,     3,
      18,     3,   144,    10,    11,    12,    13,    14,    15,    16,
     237,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   187,    39,    87,   234,    78,   227,
    1138,  1139,  1170,   721,   187,   718,   175,   720,   424,  1147,
    1148,  1096,     4,     5,     6,     7,   168,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    80,  1056,
     215,   311,   227,   163,   135,   313,   311,   219,    92,   170,
     227,   163,   468,   311,   168,   283,   313,     9,   100,    93,
     229,   181,   313,   148,   104,   105,     3,   311,    20,   181,
      62,  1044,   211,   215,   154,   227,   313,   795,   998,    16,
     194,   134,  1055,  1168,   204,   134,   164,   230,   168,  1062,
     313,   155,   204,  1076,    10,    11,    12,    13,    14,    15,
      16,   186,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   152,   164,   310,   311,   193,
      87,  1426,  1427,   164,   205,  1179,   311,   299,   311,   313,
     221,   303,  1437,  1438,   311,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   636,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   313,   335,   336,   337,   394,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,  1623,     3,  1203,  1624,   360,   361,
     493,   128,   313,   365,   366,   235,   909,  1214,   911,   115,
     372,   373,   374,   375,   376,  1373,  1374,   310,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     310,   503,   310,   395,   506,   641,   642,   311,   311,   166,
     311,   279,  1249,   649,   312,   517,     0,  1542,  1543,  1544,
    1545,  1546,  1547,  1260,   311,   311,    68,   965,  1221,    41,
    1223,  1556,   116,    68,   221,  1560,     3,  1160,     3,  1564,
       3,   227,     3,  1280,   492,    18,   310,  1444,   684,   685,
     686,   227,  1026,     3,  1028,  1029,   313,  1294,  1416,  1417,
    1418,  1419,  1420,  1421,    44,    45,  1303,   118,   104,   105,
    1428,     3,   114,     3,  1432,     3,     3,   115,  1436,   655,
     656,   293,   294,   295,    64,   622,    68,   171,   287,   288,
     289,   290,   205,     3,   132,   618,   113,   227,   490,   311,
     313,     3,   309,   222,   234,    78,  1343,   630,   818,   147,
      75,   821,    75,    41,     3,   132,    26,   201,   234,   232,
     132,   240,   173,   515,   516,   311,   762,   763,  1512,  1526,
     172,   523,   114,   310,   311,   311,   174,   172,     3,    10,
      11,    12,    13,    14,    15,    16,  1447,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       3,     4,     5,     6,     7,     8,  1359,   134,     3,   134,
     215,   134,  1365,   134,    76,   187,    93,   313,    61,     3,
     310,   154,   224,   313,   134,    74,   709,     3,    79,   224,
     172,    74,   828,   205,  1719,   168,    61,   313,  1723,   235,
       3,   181,   134,    39,   134,   597,   598,   134,   600,    74,
      51,   228,    93,   605,   311,    10,    11,    12,    13,    14,
      15,    16,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   127,    49,    18,    74,
       3,  1478,   224,  1383,    52,    61,  1483,   164,    56,  1774,
    1775,   187,  1777,  1778,   134,  1768,    92,    98,    74,    33,
      83,    10,    11,    12,    13,    14,    15,    16,  1665,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     5,   164,  1797,  1798,    94,   209,    68,    97,
     682,    65,   215,   205,   796,  1799,  1654,    20,   190,  1492,
    1658,   124,    41,   805,   112,  1508,    80,  1820,     3,   132,
    1503,    50,  1505,    93,    88,     3,   133,  1821,  1822,  1716,
     232,   164,   130,   215,   147,   142,   100,    83,    10,     3,
     138,   723,    14,   725,   196,     3,    61,   729,   730,    41,
     732,    76,  1730,    68,   736,     3,  1850,     5,    50,     4,
       5,   743,   744,   745,   746,   133,   748,   749,   750,   221,
      41,  1598,    41,   755,   756,     3,   758,     3,   124,    50,
       3,    50,   764,   765,   766,  1772,   132,  1614,   313,    13,
      14,   137,    16,   118,   158,    19,   778,   779,   780,   114,
     782,   147,   117,   312,   313,   897,  1754,  1755,   133,  1757,
    1758,   312,   313,   310,   212,   179,   214,   451,   133,   801,
     281,   312,   313,   457,     3,   459,   241,   142,   312,   313,
     812,    72,    73,   231,     3,  1618,    41,   819,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   173,   312,
     313,   312,  1078,  1680,   312,   313,     3,   172,    24,    25,
      26,    27,    28,    29,    30,   190,   230,   311,   193,    26,
      27,    28,    29,    30,   966,   168,   858,   969,   970,   971,
     312,   313,   241,    10,    11,    12,    13,    14,    15,    16,
     215,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   312,   313,     3,   312,   313,   224,
     310,   312,   313,   312,   313,   312,   313,   899,   312,   313,
     902,     4,     5,   312,   313,   311,   908,   312,   313,   312,
     313,   312,   313,   312,   313,   917,   312,   313,   312,   313,
     922,   923,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,   312,   313,   312,   313,     3,    10,    11,
      12,    13,    14,    15,    16,   967,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   241,
     312,   313,   312,   313,   241,   987,   312,   313,   312,   313,
     992,   312,   313,   312,   313,    10,    11,    12,    13,    14,
      15,    16,   241,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   241,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   312,   313,   241,
      10,    11,    12,    13,    14,    15,    16,   241,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   312,   313,   312,   313,   208,  1068,    10,    11,    12,
      13,    14,    15,    16,     8,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    23,    24,
      25,    26,    27,    28,    29,    30,   312,   313,  1100,   312,
     313,  1103,   312,   313,   438,   439,   440,   441,     9,   443,
    1112,  1113,   446,   447,   448,   312,   313,   312,   313,   453,
     454,   455,  1124,   311,   458,   312,   313,   312,   313,   312,
     313,  1133,  1134,    10,    11,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    47,    48,  1158,  1159,   312,   313,
     312,   313,   311,  1165,  1166,   312,   313,   311,   662,   663,
     311,   665,   666,   667,   312,   313,   311,   671,   672,   673,
     311,  1183,   676,   235,   311,  1187,   312,   313,    10,    11,
      12,    13,    14,    15,    16,  1197,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,  1211,
     312,   313,   312,   313,    18,   312,   313,   312,   313,    47,
      48,   310,   311,   313,   312,   313,   312,   313,   310,   311,
      41,   312,   313,   311,    38,   312,   313,    41,   311,    43,
     312,   313,    46,   312,   313,   311,     3,     4,     5,     6,
       7,     8,   311,    10,   311,    12,   311,    61,   311,    16,
      17,    18,   311,    20,    68,    69,   311,    24,    25,    26,
      27,    28,   312,   313,   632,   633,   810,   811,    35,  1163,
    1164,   311,   311,    40,    41,   311,   311,    44,   311,    93,
     311,   311,    49,    50,    51,    52,    53,   312,   313,    56,
     311,    58,    59,    60,   311,   311,    63,    64,   311,    66,
      67,    68,   311,   311,   311,    72,   311,    43,   312,   313,
      77,   311,   311,   311,    81,   311,   311,   311,   311,    86,
      87,    88,   311,   311,   311,   311,    93,    94,   142,    96,
      97,    98,    99,   313,   311,   102,   311,   104,   105,   106,
     107,   311,   109,   311,   111,   112,   311,   114,   115,   116,
     164,   118,   119,   120,   121,   311,   311,   311,   172,   126,
     313,   128,   311,   130,   131,   311,   133,   134,   135,   136,
     137,   138,   311,   140,   141,   142,   143,   144,  1390,  1391,
     311,   148,   311,   150,  1396,   152,  1398,   311,   311,   311,
     311,   311,   311,   311,   161,   311,   163,   164,   165,   166,
     167,   168,   169,    43,    61,   172,   173,    61,    61,     3,
     224,   178,     3,   180,   181,   182,     3,   184,     3,   186,
     168,   188,   189,   190,   191,   241,   313,     3,   168,   241,
       3,    26,     3,     3,     3,     3,   203,   204,   205,     3,
       3,     3,     3,     3,   312,   212,   312,   214,   215,   216,
     312,   312,   312,   312,   221,   312,   223,   224,   225,   312,
     227,   312,   312,     5,   231,   232,    66,   234,   235,   236,
     237,   312,   312,     3,   241,   311,     3,     3,   312,     3,
     141,   313,   167,   208,     3,     3,     3,     3,     3,     3,
      10,    11,    12,    13,    14,    15,    16,  1509,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,     3,     3,     3,   282,   283,   284,   285,   286,
       3,     3,     3,   311,  1536,   311,   311,   311,   311,    54,
     311,   131,   311,     3,     3,     3,   312,  1549,   313,     3,
       3,   141,   309,   310,   311,   312,   313,   314,   148,   168,
     312,   168,     3,   168,   241,     3,   169,  1569,     3,     3,
     312,   161,   205,   312,  1576,   307,   307,     3,     4,     5,
       6,     7,     8,   307,    10,   312,    12,  1589,  1590,   307,
      16,    17,    18,   307,    20,   205,   186,    30,    24,    25,
      26,    27,    28,   311,   311,   311,   311,   142,   142,    35,
     313,   142,   202,   141,    40,    41,   141,     3,    44,   168,
       3,   208,   208,    49,    50,    51,    52,    53,     5,     4,
      56,     5,    58,    59,    60,     5,   184,    63,    64,   311,
      66,    67,    68,   164,   168,     3,    72,   229,     3,     3,
       3,    77,     3,    53,   150,    81,   168,    20,   311,   170,
      86,    87,    88,   312,   139,     4,   307,    93,    94,   307,
      96,    97,    98,    99,   311,   307,   102,   311,   104,   105,
     106,   107,   307,   109,   307,   111,   112,   307,   114,   115,
     116,   307,   118,   119,   120,   121,   311,     5,     5,   307,
     126,   307,   128,  1705,   130,   131,   205,   133,   134,   135,
     136,   137,   138,   311,   140,   141,   142,   143,   144,   311,
       3,   120,   148,   119,   150,     3,   152,     3,   311,   142,
     142,   311,     3,     3,   312,   161,   312,   163,   164,   165,
     166,   167,   168,   169,   312,   312,   172,   173,    68,   311,
       3,   229,   178,    50,   180,   181,   182,   119,   184,   229,
     186,   168,   188,   189,   190,   191,   311,   311,   311,  1771,
     311,     3,     3,   311,   142,   311,   142,   203,   204,   205,
       3,   311,   311,   142,     3,   183,   212,     3,   214,   215,
     216,    53,   126,   312,   312,   221,   141,   223,   224,   225,
      20,   227,     3,   313,   164,   231,   232,     3,   234,   235,
     236,   237,   312,    42,   312,   241,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    12,    13,    14,
      15,    16,   311,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   282,   283,   284,   285,
     286,    10,    11,    12,    13,    14,    15,    16,   311,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   311,   309,   310,   311,   312,   313,   314,     3,
       4,     5,     6,     7,     8,   311,    10,   311,    12,     3,
     311,   311,    16,    17,    18,   311,    20,   311,     4,   312,
      24,    25,    26,    27,    28,   312,   142,   312,   311,   311,
     311,    35,   311,   311,   311,   142,    40,    41,   184,   311,
      44,   311,   311,   311,     5,    49,    50,    51,    52,    53,
     204,     4,    56,     4,    58,    59,    60,   311,     3,    63,
      64,     3,    66,    67,    68,     3,     3,     3,    72,   311,
     229,   311,    98,    77,   311,     3,   229,    81,   311,   311,
     311,     3,    86,    87,    88,   311,   313,   221,    20,    93,
      94,   308,    96,    97,    98,    99,   307,   312,   102,   307,
     104,   105,   106,   107,     3,   109,   312,   111,   112,   312,
     114,   115,   116,   312,   118,   119,   120,   121,   312,     3,
       3,     3,   126,    41,   128,     5,   130,   131,     5,   133,
     134,   135,   136,   137,   138,   311,   140,   141,   142,   143,
     144,   311,   311,    50,   148,   312,   150,     4,   152,    50,
     312,   188,   229,   142,   312,   312,     3,   161,   313,   163,
     164,   165,   166,   167,   168,   169,   311,   311,   172,   173,
     311,   311,   142,   311,   178,   311,   180,   181,   182,    53,
     184,   313,   186,   311,   188,   189,   190,   191,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   203,
     204,   205,   169,    20,   312,    18,     3,   312,   212,   311,
     214,   215,   216,   312,   312,   311,   311,   221,   142,   223,
     224,   225,   312,   227,   312,   312,     3,   231,   232,   313,
     234,   235,   236,   237,    50,   311,   311,   241,    10,    11,
      12,    13,    14,    15,    16,   311,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,     3,    53,   313,     3,   312,     3,   282,   283,
     284,   285,   286,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    53,   309,   310,   311,   312,   313,
     314,     3,     4,     5,     6,     7,     8,   312,    10,   312,
      12,   312,   307,   307,    16,    17,    18,   307,    20,   307,
     312,   185,    24,    25,    26,    27,    28,   119,     3,   230,
     178,     3,     3,    35,    50,     5,     5,   312,    40,    41,
      67,   134,    44,   111,   144,   236,   178,    49,    50,    51,
      52,    53,     5,    20,    56,   313,    58,    59,    60,   312,
       3,    63,    64,   312,    66,    67,    68,   312,   312,   312,
      72,   312,   311,   313,   311,    77,   312,   312,   311,    81,
     311,   137,   312,     3,    86,    87,    88,   312,   312,     3,
       3,    93,    94,     3,    96,    97,    98,    99,   311,   311,
     102,     3,   104,   105,   106,   107,     3,   109,   313,   111,
     112,   197,   114,   115,   116,   311,   118,   119,   120,   121,
     197,   178,     3,     3,   126,    20,   128,     3,   130,   131,
     312,   133,   134,   135,   136,   137,   138,   312,   140,   141,
     142,   143,   144,   151,   151,   313,   148,     3,   150,     3,
     152,     3,   312,   312,   312,   311,   311,     3,   312,   161,
     195,   163,   164,   165,   166,   167,   168,   169,   312,   312,
     172,   173,     3,   194,   311,     5,   178,     3,   180,   181,
     182,   129,   184,   232,   186,    78,   188,   189,   190,   191,
     145,   213,   168,     5,   168,     5,   162,   162,   304,   402,
      79,   203,   204,   205,   735,   705,   395,  1389,   100,   494,
     212,  1536,   214,   215,   216,   293,    67,   991,   808,   221,
     719,   223,   224,   225,   505,   227,  1826,  1077,  1508,   231,
     232,   313,   234,   235,   236,   237,  1065,   674,  1201,   241,
      10,    11,    12,    13,    14,    15,    16,   131,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   688,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
     282,   283,   284,   285,   286,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   309,   310,   311,
     312,   313,   314,     3,     4,     5,     6,     7,     8,    -1,
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
     180,   181,   182,    -1,   184,    -1,   186,    -1,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,   214,   215,   216,    -1,    -1,    -1,
      -1,   221,    -1,   223,   224,   225,    -1,   227,    -1,    -1,
      -1,   231,   232,   313,   234,   235,   236,   237,    -1,    -1,
      -1,   241,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,   282,   283,   284,   285,   286,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   309,
     310,   311,   312,   313,   314,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,    -1,   104,   105,   106,   107,
      -1,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,    -1,   126,    -1,
     128,    -1,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,
     178,    -1,   180,   181,   182,    -1,   184,    -1,   186,    -1,
     188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,   214,   215,   216,    -1,
      -1,    -1,    -1,   221,    -1,   223,   224,   225,    -1,   227,
      -1,    -1,    -1,   231,   232,   313,   234,   235,   236,   237,
      -1,    -1,    -1,   241,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,   282,   283,   284,   285,   286,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   309,   310,   311,   312,   313,   314,     3,     4,     5,
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
      -1,    -1,   178,    -1,   180,   181,   182,    -1,   184,    -1,
     186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,   215,
     216,    -1,    -1,    -1,    -1,   221,    -1,   223,   224,   225,
      -1,   227,    -1,    -1,    -1,   231,   232,   313,   234,   235,
     236,   237,    -1,    -1,    -1,   241,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,   282,   283,   284,   285,
     286,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   309,   310,   311,   312,   313,   314,     3,
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
      -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,    -1,
     184,    -1,   186,    -1,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
     214,   215,   216,    -1,    -1,    -1,    -1,   221,    -1,   223,
     224,   225,    -1,   227,    -1,    -1,    -1,   231,   232,   313,
     234,   235,   236,   237,    -1,    -1,    -1,   241,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,   282,   283,
     284,   285,   286,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   309,   310,   311,   312,   313,
     314,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
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
     182,    -1,   184,    -1,   186,    -1,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,   215,   216,    -1,    -1,    -1,    -1,   221,
      -1,   223,   224,   225,    -1,   227,    -1,    -1,    -1,   231,
     232,   313,   234,   235,   236,   237,    -1,    -1,    -1,   241,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
     282,   283,   284,   285,   286,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   309,   310,   311,
     312,   313,   314,     3,     4,     5,     6,     7,     8,    -1,
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
     180,   181,   182,    -1,   184,    -1,   186,    -1,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,   214,   215,   216,    -1,    -1,    -1,
      -1,   221,    -1,   223,   224,   225,    -1,   227,    -1,    -1,
      -1,   231,   232,   313,   234,   235,   236,   237,    -1,    -1,
      -1,   241,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,   282,   283,   284,   285,   286,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   309,
     310,   311,   312,   313,   314,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,   102,    -1,   104,   105,   106,   107,
      -1,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,    -1,   126,    -1,
     128,    -1,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,    -1,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,
     178,    -1,   180,   181,   182,    -1,   184,    -1,   186,    -1,
     188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,   214,   215,   216,    -1,
      -1,    -1,    -1,   221,    -1,   223,   224,   225,    -1,   227,
      -1,    -1,    -1,   231,   232,   313,   234,   235,   236,   237,
      -1,    -1,    -1,   241,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,   282,   283,   284,   285,   286,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   309,   310,   311,   312,   313,   314,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    58,    59,    60,    -1,    -1,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    -1,    -1,   119,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    94,    -1,
      96,    97,    98,    99,    -1,    -1,   102,    -1,   104,   105,
     106,   107,    -1,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
     126,    -1,   128,    -1,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,   172,   173,    -1,    -1,
      -1,    -1,   178,    -1,   180,   181,   182,    -1,   184,    -1,
     186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,   215,
     216,    -1,    -1,    -1,    -1,   221,    -1,   223,   224,   225,
      -1,   227,    -1,    -1,    -1,   231,   232,   313,   234,   235,
     236,   237,    -1,    -1,    -1,   241,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
     286,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   309,   310,   311,   312,   313,   314,     3,
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
      -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,    -1,
     184,    -1,   186,    -1,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
     214,   215,   216,    -1,    -1,    -1,    -1,   221,    -1,   223,
     224,   225,    -1,   227,    -1,    -1,    -1,   231,   232,   312,
     234,   235,   236,   237,    -1,    -1,    -1,   241,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,   286,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   309,   310,   311,   312,   313,
     314,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
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
     182,    -1,   184,    -1,   186,    -1,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,   215,   216,    -1,    -1,    -1,    -1,   221,
      -1,   223,   224,   225,    -1,   227,    -1,    -1,    -1,   231,
     232,   312,   234,   235,   236,   237,    -1,    -1,    -1,   241,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,
     282,   283,   284,   285,   286,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   309,   310,   311,
     312,   313,   314,     3,     4,     5,     6,     7,     8,    -1,
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
     140,   141,   142,   143,   144,    32,    -1,    -1,   148,    36,
     150,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,   163,   164,   165,   166,   167,   168,   169,
      -1,    58,   172,   173,    -1,    -1,    63,    -1,   178,    -1,
     180,   181,   182,    -1,   184,    -1,   186,    -1,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,   214,   215,   216,    -1,    -1,    -1,
      -1,   221,    -1,   223,   224,   225,    -1,   227,    -1,    -1,
      -1,   231,   232,   312,   234,   235,   236,   237,    -1,    -1,
      -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,   312,    25,    26,
      -1,    -1,   282,   283,   284,   285,   286,    -1,    35,    -1,
     177,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     310,   311,   312,   313,   314,    62,    -1,   204,   205,    -1,
      67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,   218,    76,    -1,   221,    -1,    -1,    -1,    82,    86,
      -1,   228,    -1,    90,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,   164,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,   192,   190,    -1,    -1,   193,
      -1,    -1,   199,   200,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   210,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
     224,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,   280,    -1,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
      -1,    -1,    -1,    -1,   311,   149,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,   217,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   312,   280,    -1,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    -1,    -1,    -1,    -1,   311,   164,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   198,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,   312,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    -1,   280,    -1,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    -1,    -1,    -1,    -1,   311,   164,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,   312,    -1,    -1,
      -1,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   115,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   164,    -1,    -1,    -1,    -1,   312,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    70,    71,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    93,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,    -1,   280,    -1,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,    -1,    -1,   164,    -1,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,   280,    -1,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
      -1,    -1,    -1,    -1,   311,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,   312,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,   312,    -1,    67,
      -1,    -1,    70,    71,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    93,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,   164,    93,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,   164,    93,
      -1,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    -1,   280,    -1,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   216,
     164,    -1,    -1,   311,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    -1,   280,    -1,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    -1,    -1,    -1,    -1,   311,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,   312,    -1,    -1,    -1,    -1,    -1,
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
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    -1,   280,    -1,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   312,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    10,    11,    12,
      13,    14,    15,    16,   312,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   312,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   312,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   312,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   312,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   312,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   312,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,   312,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   312,    10,    11,    12,    13,    14,    15,    16,
      18,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   312,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,
      -1,    -1,    89,    -1,    91,    93,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    56,    57,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    72,   122,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,
      -1,    -1,    -1,    -1,   142,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,   112,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,   312,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,   312,    -1,    -1,   153,    -1,    -1,   156,    -1,
      -1,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,   312,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   204,    -1,   206,   207,
      -1,    -1,    -1,    -1,   212,   312,   214,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,   231,    -1,   233,   312,    -1,    -1,    -1,
     238,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,   115,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   104,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    92,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    41,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    63,    87,    88,   135,   177,   179,
     187,   204,   205,   218,   221,   228,   316,   352,   353,   390,
     394,   395,   398,   399,   402,   403,   404,   406,   418,   419,
     422,   424,   425,   426,   448,   451,   458,   459,   462,   465,
     190,   215,   215,     3,    10,    76,    82,   118,   133,   173,
     190,   193,   209,   210,   224,   430,   391,    76,   118,   133,
     173,   190,   193,   215,   410,   215,   215,   410,     8,   193,
     449,   450,   371,   215,   410,   420,     3,    76,     0,   309,
     401,     3,     3,     3,   311,   187,   134,   423,     3,     3,
       3,    75,   134,     3,     3,   423,   209,   133,   215,     3,
     115,   132,   147,   174,   392,     3,   134,     3,   134,     3,
       3,   134,     3,   134,     3,   134,     3,   134,    83,   124,
     132,   137,   147,   411,     3,     3,   411,     9,    20,     3,
      93,   313,     3,     4,     5,     6,     7,     8,    17,    18,
      25,    26,    35,    62,    67,    70,    71,    86,    90,   124,
     164,   192,   199,   200,   202,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   280,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   311,
     317,   372,   373,     3,   132,   147,     3,   311,   375,   376,
     377,   379,   389,     3,   316,    44,    45,    64,   181,    80,
     100,    33,    65,    80,    88,   100,   158,   179,   230,   310,
       3,     4,     5,     6,     7,     8,   164,   312,   460,   461,
     118,   173,   241,     3,    41,   311,   168,     3,   134,   241,
     311,    34,    49,   463,     3,     3,    75,   134,   423,   310,
     393,     3,   392,   115,   313,   241,   241,   241,   241,   241,
     241,     3,   208,     3,   317,   317,   450,   310,   311,     9,
     317,   317,   317,   235,   317,   351,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     317,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    41,   374,   115,   313,   313,   310,   374,   353,
     375,   204,   313,    66,   131,   148,   161,   186,   202,   380,
     382,    41,   378,    43,    43,    61,    74,     3,    74,    61,
       3,    61,    74,    61,     3,    74,     3,    61,    74,    61,
       3,   312,   313,     3,     3,    51,    52,    54,    56,    57,
      72,    94,    95,    96,    97,   103,   112,   130,   138,   146,
     153,   156,   159,   160,   176,   203,   204,   206,   207,   212,
     214,   219,   220,   225,   231,   233,   238,   444,     3,    16,
     128,   166,   452,   453,   454,     3,   168,   241,     3,   452,
      87,   135,   221,   464,   168,     3,   134,   241,     3,    26,
     234,   354,   227,   375,     3,     3,     3,     3,     3,     3,
       3,   204,   311,   412,     3,   204,   412,     3,   317,   322,
     323,   317,   317,   351,   104,   105,   235,   328,   317,    55,
     149,   217,   317,   349,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   312,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   312,
     317,   317,   317,   312,   317,   317,   317,   317,   317,   317,
      26,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   312,   312,   312,   312,   317,   317,   312,   312,
     312,   317,   317,     5,   312,   312,   312,   317,   317,   317,
     317,   317,     6,    18,   164,   279,   311,    13,    14,    16,
      19,   317,    35,    37,   198,   311,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,     3,   375,   373,
       3,   400,     3,   113,   132,   228,   386,   312,   312,     3,
     421,   376,   148,   186,   383,   377,   141,   167,   381,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   444,     3,
     208,     3,     3,     3,   461,   311,   311,   311,   440,   440,
     440,   440,   440,   440,   311,   440,   440,   440,    54,   441,
     441,   440,   440,   440,   311,   441,   440,   441,   311,   311,
      18,    68,    93,   444,     3,     3,     3,   312,   313,   227,
     311,     3,     3,   168,   312,   168,     3,   168,   241,     3,
     132,   187,   310,   311,   446,   447,   317,   169,   364,   375,
     354,   393,     3,   417,     3,   413,   232,   353,   417,   232,
     353,   313,   312,   216,   104,   105,   317,   317,   353,   115,
     313,   312,   115,   317,   313,   313,   313,   312,   312,   312,
     312,   312,   312,   313,   313,   313,   313,   312,   313,   313,
     313,   312,   312,   312,   312,   313,   313,   312,   313,   312,
     312,   312,    41,   313,   313,   313,   313,   281,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   313,
     313,   312,   313,   307,   307,   307,   312,   313,   312,   313,
     312,   307,   307,     6,   164,   324,   326,   317,   317,   311,
     317,    40,   311,   311,   311,   318,   354,   313,   374,   142,
     142,   142,    20,   310,   313,   354,   381,   381,   141,   168,
     377,   141,    68,   114,   172,   224,   444,   444,     3,   439,
     444,     3,   208,   208,   452,   452,     5,   442,   443,   442,
     442,     4,   445,   442,   442,   442,   443,   443,   442,   442,
     442,   445,   443,   442,   443,     5,     5,   164,   311,   317,
     444,   444,   444,   184,   454,   229,     3,   287,   288,   289,
     290,   396,   397,   227,   311,   168,     3,    41,    50,     3,
     227,   311,     3,     3,   168,     3,    61,    68,   114,   117,
     133,   142,   172,   224,   431,   432,   438,   378,    53,   150,
     367,   354,    20,   170,   313,   407,   312,   313,   311,   414,
     407,   414,   407,   322,   317,   317,   104,   216,   312,   317,
     317,   317,   115,   139,   350,   350,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   444,   444,   317,
     317,   317,     4,   307,   307,   307,   307,   307,   307,   317,
     317,   317,   317,   311,   311,   311,   307,     5,   307,     5,
     307,   311,   311,   322,   353,   325,   327,    40,   317,   321,
     319,   320,   353,   120,   355,     3,   386,   119,   387,   387,
     387,   317,     3,     3,   364,   377,   317,   168,   227,   384,
     385,   377,   311,   142,   142,   311,   439,   439,   444,    18,
      34,    38,    41,    43,    46,    61,    68,    69,    93,   110,
     142,   164,   172,   224,   405,   439,     3,     3,   312,   312,
     312,   313,   222,   240,    72,    73,   312,   313,   312,   312,
     312,    68,   317,    52,    56,    94,    97,   112,   130,   138,
     212,   214,   231,   455,   311,   311,   311,   311,   311,   312,
     313,   229,   396,     3,   227,   311,    50,   456,   119,   229,
     396,   227,   311,   168,     3,   311,   446,     3,   311,   142,
     133,   142,   311,   311,   142,   311,   312,   313,     3,   353,
       3,     5,   365,   366,   317,   183,   466,    93,   317,   142,
       3,     3,    93,   317,   416,   313,   407,   407,   104,   317,
     119,   312,   312,   313,   312,   317,   317,   312,   312,   312,
     312,   312,   313,   313,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   313,   312,   311,   311,   311,   311,
     311,   311,   312,   313,   313,   312,   312,   329,   330,   331,
     311,   312,   313,   311,   312,   313,   311,   347,   348,   312,
     312,   322,   353,   317,   353,   353,   353,   312,    53,   126,
     359,   141,   311,   311,   311,    20,    20,   310,   367,   317,
     311,   385,   317,   311,   311,     3,   437,   405,   405,   439,
     164,     3,   311,   311,   311,    42,     3,   311,     4,     4,
       5,     6,     7,    62,   293,   294,   295,   311,   142,   142,
     405,   184,    41,    50,     5,   204,     4,   443,     4,   443,
     443,   311,   312,    41,    50,   396,     3,     3,     3,     3,
       3,   311,   312,   311,   229,   396,   456,     3,     4,     5,
       6,     7,     8,    10,    12,    16,    17,    18,    20,    24,
      25,    26,    27,    28,    35,    40,    41,    44,    49,    50,
      51,    52,    53,    56,    58,    59,    60,    63,    64,    66,
      67,    68,    72,    77,    81,    86,    87,    88,    93,    94,
      96,    97,    98,    99,   102,   104,   105,   106,   107,   109,
     111,   112,   114,   115,   116,   118,   119,   120,   121,   126,
     128,   130,   131,   133,   134,   135,   136,   137,   138,   140,
     141,   142,   143,   144,   148,   150,   152,   161,   163,   164,
     165,   166,   167,   168,   169,   172,   173,   178,   180,   181,
     182,   184,   186,   188,   189,   190,   191,   203,   204,   205,
     212,   214,   215,   216,   221,   223,   224,   225,   227,   231,
     232,   234,   235,   236,   237,   241,   282,   283,   284,   285,
     286,   309,   310,   311,   312,   313,   314,   457,    98,   311,
     312,   229,   396,     3,   227,   311,   431,    68,   114,   172,
     224,   317,   311,   311,   311,     3,   370,   370,   311,   437,
     427,   446,   432,   444,    39,    92,   310,   357,   357,   313,
     152,   313,     3,    26,   467,   221,    20,   312,   313,   415,
     466,   317,   317,   312,    84,    85,    89,    91,   122,   123,
     125,   238,   239,   317,   317,   317,   333,   334,   332,   335,
     336,   337,   317,   317,   308,   360,   360,   360,   338,   307,
       4,     5,   342,   307,     4,     5,   346,   360,   360,   312,
     312,   312,   312,   312,   317,   356,   317,   364,     3,   388,
     388,   388,   317,   317,     3,   466,   370,   312,     3,   434,
       3,   433,   312,   313,   405,     5,   317,     5,    41,    68,
     172,   224,   317,   311,   311,   311,   317,   455,    50,   456,
     312,     4,   317,    50,   456,   312,   312,   312,   312,   313,
     396,   396,   311,   312,   104,   456,   456,   456,   456,   456,
     456,   188,   396,   311,   312,   311,   229,   396,   312,   311,
     142,   142,   311,   312,   434,   370,   370,   312,   313,   312,
     433,   312,    38,   168,   194,   439,     3,   366,   317,   317,
     313,   408,    93,   317,    93,   317,   311,   312,   312,   312,
     312,   312,   360,   360,   360,   360,   360,   360,   312,   313,
     312,    53,   169,   362,   362,   362,   360,   311,   312,   312,
     360,   311,   312,   312,   360,   362,   362,   357,   237,   313,
     358,   367,   312,   313,   312,   312,    20,   312,    18,   312,
     313,   312,   313,     3,   312,   313,   312,   312,   313,   311,
     311,   142,   312,   312,   312,   312,   312,    41,    50,   456,
     104,   312,   456,   104,     3,   312,   312,   396,   104,   104,
     104,   104,   104,   104,    50,   312,   396,   396,   311,   312,
     427,   446,   317,   311,   311,   437,   312,   312,   312,     3,
     312,     5,    20,     3,    53,   357,     3,     3,   409,   416,
     362,   362,   362,   362,   362,   362,   317,     3,   361,    53,
     312,   312,   312,   362,   339,   307,   307,   362,   343,   307,
     307,   362,   312,   312,   185,   317,   119,   368,     3,   317,
     230,   178,     3,     3,     5,    47,    48,     5,   317,   317,
      50,   456,   104,   104,   312,   312,    67,   111,   134,   144,
     236,   456,   312,   312,   396,   312,   434,   433,   312,   178,
       5,    87,   211,   175,   229,    20,   313,   312,   312,   312,
     312,   312,   312,   312,   312,   313,     3,   363,   312,   360,
     311,   311,   312,   360,   311,   311,   312,   357,   196,   221,
     137,   369,     3,   312,   312,   312,   312,   456,   104,   104,
     312,   312,   312,     3,     3,     3,   311,   311,   317,     3,
       3,   357,   313,   362,   340,   341,   362,   344,   345,   197,
     197,   370,   311,    47,    48,   104,   178,   310,   311,     3,
       3,    20,     3,   312,   360,   360,   312,   360,   360,   151,
     151,     3,   435,     3,     3,   435,   312,   312,   317,   357,
     362,   362,   362,   362,   312,   313,   310,   311,   311,   312,
     311,   195,   312,   312,   312,   312,   436,     3,     3,   435,
     435,   436,   194,   428,   429,     5,    18,    78,   154,   168,
     311,   312,   312,    18,     3,   312,   313,    78,   230,   129,
     116,   171,   201,    87,   221,   435,   436,   436,   232,   429,
      79,   127,    64,   163,   181,   204,    64,   163,   181,   204,
     312,   145,    93,   164,    93,   164,   436,   213,     4,   155,
     168,   168,   162,   162,     5,     5
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
#line 406 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 412 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 413 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 415 "parser/evoparser.y"
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
#line 433 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 441 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 449 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 455 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 462 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 463 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 464 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 465 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 466 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 467 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 468 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 469 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 470 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 471 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 472 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 473 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 474 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 475 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 476 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 477 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 478 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 480 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 485 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 486 "parser/evoparser.y"
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
#line 494 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 495 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 496 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 497 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 498 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 499 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 502 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 503 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 504 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 505 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 506 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 509 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 510 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 513 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 514 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 517 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 521 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 521 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 522 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 522 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 523 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 524 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 531 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 532 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 539 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 540 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 550 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 554 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 555 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 556 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 557 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 558 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 559 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 560 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 561 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 565 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 69:
#line 566 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 70:
#line 567 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 71:
#line 568 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 72:
#line 569 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 73:
#line 570 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 74:
#line 572 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 75:
#line 573 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 76:
#line 574 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 77:
#line 575 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 78:
#line 576 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 577 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 80:
#line 578 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 579 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 82:
#line 580 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 581 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 84:
#line 582 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 583 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 86:
#line 585 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 586 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 88:
#line 587 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 89:
#line 588 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 589 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 91:
#line 590 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 591 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 93:
#line 592 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 593 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 95:
#line 594 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 96:
#line 595 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 97:
#line 596 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 98:
#line 597 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 99:
#line 598 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 100:
#line 599 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 101:
#line 600 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 602 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 103:
#line 603 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 104:
#line 604 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 105:
#line 605 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 106:
#line 606 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 107:
#line 607 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 108:
#line 610 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 109:
#line 611 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 110:
#line 612 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 111:
#line 613 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 614 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 113:
#line 615 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 114:
#line 616 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 115:
#line 617 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 618 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 619 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 620 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 621 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 120:
#line 622 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 623 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 122:
#line 624 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 123:
#line 625 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 124:
#line 626 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 125:
#line 627 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 126:
#line 628 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 127:
#line 629 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 128:
#line 630 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 129:
#line 631 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 130:
#line 632 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 131:
#line 633 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 132:
#line 634 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 133:
#line 635 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 134:
#line 636 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 135:
#line 637 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 136:
#line 638 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 137:
#line 639 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 138:
#line 640 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 139:
#line 641 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 140:
#line 642 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 141:
#line 643 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 142:
#line 645 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 143:
#line 646 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 144:
#line 647 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 145:
#line 648 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 146:
#line 649 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 147:
#line 650 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 148:
#line 651 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 149:
#line 652 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 150:
#line 654 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 151:
#line 655 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 152:
#line 657 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 153:
#line 658 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 154:
#line 659 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 155:
#line 661 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 156:
#line 662 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 157:
#line 663 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 158:
#line 664 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 159:
#line 671 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 160:
#line 678 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 161:
#line 685 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 162:
#line 689 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 163:
#line 693 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 164:
#line 699 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 165:
#line 700 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 166:
#line 701 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 167:
#line 705 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 168:
#line 711 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 169:
#line 717 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 170:
#line 718 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 171:
#line 719 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 172:
#line 720 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 173:
#line 721 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 174:
#line 722 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 175:
#line 723 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 176:
#line 724 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 177:
#line 725 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 178:
#line 729 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 179:
#line 731 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 180:
#line 733 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 181:
#line 735 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 182:
#line 739 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 183:
#line 747 "parser/evoparser.y"
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
#line 757 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 185:
#line 758 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 186:
#line 761 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 187:
#line 762 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 188:
#line 766 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 189:
#line 774 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 190:
#line 782 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 191:
#line 793 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 192:
#line 802 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 193:
#line 807 "parser/evoparser.y"
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
#line 818 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 197:
#line 820 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 198:
#line 823 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 199:
#line 830 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 200:
#line 838 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 201:
#line 839 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 840 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 843 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 204:
#line 844 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 206:
#line 848 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 209:
#line 857 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 210:
#line 859 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 213:
#line 867 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 214:
#line 869 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 219:
#line 881 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 220:
#line 887 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 221:
#line 894 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 222:
#line 902 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 223:
#line 903 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 224:
#line 904 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 225:
#line 905 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 226:
#line 908 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 227:
#line 909 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 228:
#line 910 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 229:
#line 911 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 230:
#line 912 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 232:
#line 916 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 233:
#line 919 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 234:
#line 920 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 235:
#line 923 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 924 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 237:
#line 925 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 238:
#line 926 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 239:
#line 927 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 240:
#line 928 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 241:
#line 929 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 242:
#line 930 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 243:
#line 931 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 244:
#line 934 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 245:
#line 935 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 937 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 247:
#line 945 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 248:
#line 950 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 249:
#line 951 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 250:
#line 952 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 251:
#line 955 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 956 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 255:
#line 965 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 256:
#line 971 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 257:
#line 972 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 258:
#line 973 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 261:
#line 982 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 262:
#line 984 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 263:
#line 986 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 264:
#line 988 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 265:
#line 990 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 266:
#line 993 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 994 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 995 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 269:
#line 998 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 999 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 271:
#line 1002 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 272:
#line 1003 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 273:
#line 1006 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 274:
#line 1007 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 275:
#line 1008 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 1015 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 279:
#line 1016 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 280:
#line 1021 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 281:
#line 1023 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 282:
#line 1025 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 284:
#line 1029 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1030 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1033 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1034 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1037 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 289:
#line 1042 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 290:
#line 1052 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 291:
#line 1059 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 292:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 293:
#line 1061 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 294:
#line 1062 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1067 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 296:
#line 1071 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1073 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 300:
#line 1079 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 301:
#line 1084 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 302:
#line 1091 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 303:
#line 1098 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 304:
#line 1108 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 305:
#line 1115 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 306:
#line 1122 "parser/evoparser.y"
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
#line 1132 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 308:
#line 1140 "parser/evoparser.y"
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
#line 1150 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 310:
#line 1158 "parser/evoparser.y"
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
#line 1167 "parser/evoparser.y"
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
#line 1176 "parser/evoparser.y"
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
#line 1186 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 314:
#line 1194 "parser/evoparser.y"
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
#line 1203 "parser/evoparser.y"
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
#line 1212 "parser/evoparser.y"
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
#line 1222 "parser/evoparser.y"
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
#line 1231 "parser/evoparser.y"
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
#line 1243 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 320:
#line 1248 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 321:
#line 1253 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 322:
#line 1259 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 323:
#line 1266 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 324:
#line 1273 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 325:
#line 1280 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 326:
#line 1290 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 327:
#line 1297 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1306 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 329:
#line 1313 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 330:
#line 1319 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 331:
#line 1327 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 332:
#line 1333 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 334:
#line 1341 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 335:
#line 1342 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 336:
#line 1343 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 337:
#line 1344 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 338:
#line 1349 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 339:
#line 1356 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 340:
#line 1365 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 341:
#line 1372 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 342:
#line 1378 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 343:
#line 1388 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 344:
#line 1392 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 345:
#line 1398 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 346:
#line 1404 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 347:
#line 1411 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 348:
#line 1417 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 349:
#line 1424 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 350:
#line 1430 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 351:
#line 1436 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 352:
#line 1442 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 353:
#line 1448 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 354:
#line 1454 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 355:
#line 1460 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 356:
#line 1466 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 357:
#line 1472 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 358:
#line 1478 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 359:
#line 1484 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 360:
#line 1490 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 361:
#line 1496 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 362:
#line 1502 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 363:
#line 1508 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 364:
#line 1515 "parser/evoparser.y"
    { ;}
    break;

  case 365:
#line 1516 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 366:
#line 1517 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 367:
#line 1521 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 368:
#line 1529 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 369:
#line 1535 "parser/evoparser.y"
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
#line 1548 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 372:
#line 1548 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 373:
#line 1552 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 374:
#line 1560 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 375:
#line 1569 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 376:
#line 1570 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 377:
#line 1571 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 378:
#line 1572 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 379:
#line 1573 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 383:
#line 1580 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 384:
#line 1584 "parser/evoparser.y"
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

  case 385:
#line 1594 "parser/evoparser.y"
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

  case 386:
#line 1606 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 387:
#line 1607 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 388:
#line 1607 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 389:
#line 1610 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 390:
#line 1611 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 391:
#line 1612 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 392:
#line 1613 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 393:
#line 1617 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 394:
#line 1620 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 395:
#line 1621 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 396:
#line 1622 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 397:
#line 1623 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 398:
#line 1629 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 399:
#line 1635 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 400:
#line 1640 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 401:
#line 1645 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 402:
#line 1650 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 403:
#line 1659 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 404:
#line 1666 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 405:
#line 1667 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 406:
#line 1668 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 407:
#line 1673 "parser/evoparser.y"
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

  case 408:
#line 1684 "parser/evoparser.y"
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

  case 409:
#line 1696 "parser/evoparser.y"
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

  case 410:
#line 1707 "parser/evoparser.y"
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

  case 411:
#line 1722 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 412:
#line 1726 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 413:
#line 1730 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 414:
#line 1731 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 415:
#line 1736 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 416:
#line 1738 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 417:
#line 1740 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 418:
#line 1742 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 419:
#line 1745 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 420:
#line 1746 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 421:
#line 1752 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 422:
#line 1757 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 423:
#line 1759 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 424:
#line 1761 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 425:
#line 1763 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 426:
#line 1765 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 427:
#line 1769 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 428:
#line 1773 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 429:
#line 1774 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 430:
#line 1779 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 431:
#line 1789 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 432:
#line 1798 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 434:
#line 1802 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 435:
#line 1803 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 436:
#line 1804 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 437:
#line 1805 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 438:
#line 1807 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 439:
#line 1809 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 442:
#line 1817 "parser/evoparser.y"
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

  case 443:
#line 1832 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 444:
#line 1840 "parser/evoparser.y"
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

  case 445:
#line 1854 "parser/evoparser.y"
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

  case 446:
#line 1868 "parser/evoparser.y"
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

  case 447:
#line 1882 "parser/evoparser.y"
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

  case 448:
#line 1894 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 449:
#line 1895 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 450:
#line 1896 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 451:
#line 1899 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 452:
#line 1900 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 453:
#line 1903 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 454:
#line 1904 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 455:
#line 1905 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 456:
#line 1906 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 457:
#line 1907 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 458:
#line 1908 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 459:
#line 1909 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 460:
#line 1910 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 461:
#line 1912 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 462:
#line 1914 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 463:
#line 1916 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 464:
#line 1918 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 465:
#line 1920 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 466:
#line 1922 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 467:
#line 1925 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 468:
#line 1926 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 469:
#line 1929 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 470:
#line 1930 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1933 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 472:
#line 1934 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 474:
#line 1938 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 475:
#line 1939 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 476:
#line 1940 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 477:
#line 1941 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 478:
#line 1942 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 479:
#line 1943 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 480:
#line 1944 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 481:
#line 1945 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 482:
#line 1946 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 483:
#line 1947 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 484:
#line 1948 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 485:
#line 1949 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 486:
#line 1950 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 487:
#line 1951 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 488:
#line 1952 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 489:
#line 1953 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 490:
#line 1954 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 491:
#line 1957 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 492:
#line 1958 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 493:
#line 1961 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 494:
#line 1963 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 495:
#line 1971 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 496:
#line 1972 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 498:
#line 1974 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1975 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 500:
#line 1976 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 501:
#line 1977 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 502:
#line 1978 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 503:
#line 1979 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 504:
#line 1980 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 505:
#line 1981 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 506:
#line 1982 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 507:
#line 1989 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 508:
#line 1990 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 509:
#line 1991 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 510:
#line 1992 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 511:
#line 1993 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 512:
#line 1994 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 513:
#line 1995 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 514:
#line 1996 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 515:
#line 1997 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 516:
#line 1998 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 517:
#line 1999 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 518:
#line 2000 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 519:
#line 2001 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 520:
#line 2002 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 521:
#line 2003 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 522:
#line 2004 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 523:
#line 2005 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 524:
#line 2006 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 525:
#line 2007 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 526:
#line 2008 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 527:
#line 2009 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 528:
#line 2012 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 529:
#line 2013 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 530:
#line 2014 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 531:
#line 2017 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 532:
#line 2018 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 533:
#line 2021 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 534:
#line 2022 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 535:
#line 2023 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 537:
#line 2027 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 538:
#line 2028 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 539:
#line 2032 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 540:
#line 2033 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 541:
#line 2034 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 542:
#line 2035 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 543:
#line 2036 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 544:
#line 2037 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 545:
#line 2038 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 546:
#line 2039 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 547:
#line 2040 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 548:
#line 2041 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 549:
#line 2042 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 550:
#line 2043 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 551:
#line 2044 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 552:
#line 2045 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 553:
#line 2046 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 554:
#line 2047 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 555:
#line 2048 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 556:
#line 2049 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 557:
#line 2050 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 558:
#line 2051 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 559:
#line 2052 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 560:
#line 2053 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 561:
#line 2054 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 562:
#line 2055 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 563:
#line 2056 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 564:
#line 2057 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 565:
#line 2058 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 566:
#line 2059 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 567:
#line 2060 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 568:
#line 2061 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 569:
#line 2062 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 570:
#line 2063 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 571:
#line 2066 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 572:
#line 2067 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 573:
#line 2071 "parser/evoparser.y"
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

  case 574:
#line 2083 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 575:
#line 2084 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 576:
#line 2085 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 577:
#line 2089 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 578:
#line 2092 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 579:
#line 2093 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 583:
#line 2097 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 584:
#line 2098 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 585:
#line 2106 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 586:
#line 2111 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 587:
#line 2117 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 588:
#line 2123 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 589:
#line 2130 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 590:
#line 2137 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 591:
#line 2143 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 592:
#line 2149 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 593:
#line 2156 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 598:
#line 2172 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 599:
#line 2173 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 600:
#line 2174 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 601:
#line 2175 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 602:
#line 2178 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 603:
#line 2179 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 604:
#line 2180 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 605:
#line 2181 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 606:
#line 2182 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 607:
#line 2183 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 608:
#line 2184 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 609:
#line 2185 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 610:
#line 2186 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 611:
#line 2187 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 620:
#line 2204 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 621:
#line 2205 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 742:
#line 2223 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 743:
#line 2230 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 744:
#line 2235 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 745:
#line 2241 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 746:
#line 2247 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 747:
#line 2253 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 748:
#line 2264 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 749:
#line 2269 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 750:
#line 2275 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 753:
#line 2286 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 754:
#line 2287 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 755:
#line 2288 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 756:
#line 2289 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 757:
#line 2290 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 758:
#line 2291 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 759:
#line 2292 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 760:
#line 2299 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 761:
#line 2304 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 762:
#line 2311 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 763:
#line 2312 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 764:
#line 2315 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 765:
#line 2316 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 766:
#line 2317 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 767:
#line 2320 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 768:
#line 2325 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 769:
#line 2331 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 770:
#line 2340 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 771:
#line 2348 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 773:
#line 2359 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 775:
#line 2363 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 776:
#line 2364 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8870 "parser/evoparser.tab.c"
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


#line 2367 "parser/evoparser.y"

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
