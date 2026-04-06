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
#define YYLAST   9171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  315
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  151
/* YYNRULES -- Number of rules.  */
#define YYNRULES  773
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1858

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
    1826,  1827,  1832,  1833,  1836,  1839,  1842,  1845,  1847,  1848,
    1849,  1853,  1855,  1859,  1863,  1864,  1871,  1873,  1875,  1879,
    1883,  1891,  1895,  1899,  1905,  1911,  1913,  1922,  1930,  1938,
    1940,  1950,  1951,  1954,  1957,  1961,  1967,  1973,  1981,  1987,
    1989,  1994,  1999,  2003,  2009,  2013,  2019,  2020,  2023,  2025,
    2031,  2039,  2047,  2057,  2069,  2071,  2074,  2078,  2080,  2090,
    2102,  2103,  2108,  2112,  2118,  2124,  2134,  2145,  2147,  2151,
    2161,  2171,  2181,  2188,  2200,  2209,  2210,  2212,  2215,  2217,
    2221,  2227,  2235,  2240,  2245,  2251,  2257,  2262,  2269,  2281,
    2295,  2309,  2325,  2330,  2337,  2339,  2343,  2345,  2349,  2351,
    2355,  2356,  2361,  2367,  2372,  2378,  2383,  2389,  2394,  2400,
    2405,  2410,  2414,  2418,  2422,  2425,  2429,  2434,  2439,  2441,
    2445,  2446,  2451,  2452,  2456,  2459,  2463,  2467,  2471,  2475,
    2481,  2487,  2493,  2497,  2503,  2506,  2514,  2520,  2528,  2534,
    2537,  2541,  2544,  2548,  2551,  2555,  2561,  2566,  2572,  2580,
    2589,  2598,  2606,  2613,  2620,  2626,  2627,  2631,  2637,  2638,
    2640,  2641,  2644,  2647,  2648,  2653,  2657,  2660,  2664,  2668,
    2672,  2676,  2680,  2684,  2688,  2692,  2696,  2700,  2702,  2704,
    2706,  2708,  2710,  2714,  2720,  2723,  2728,  2730,  2732,  2734,
    2736,  2740,  2744,  2748,  2752,  2758,  2764,  2766,  2768,  2770,
    2774,  2778,  2779,  2781,  2783,  2785,  2789,  2793,  2796,  2798,
    2802,  2806,  2810,  2812,  2823,  2833,  2846,  2858,  2871,  2883,
    2898,  2912,  2913,  2915,  2917,  2921,  2924,  2928,  2932,  2936,
    2938,  2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,  2956,
    2957,  2960,  2965,  2971,  2977,  2983,  2989,  2995,  2997,  2999,
    3001,  3003,  3005,  3007,  3009,  3011,  3013,  3015,  3017,  3019,
    3021,  3023,  3025,  3027,  3029,  3031,  3033,  3035,  3037,  3039,
    3041,  3043,  3045,  3047,  3049,  3051,  3053,  3055,  3057,  3059,
    3061,  3063,  3065,  3067,  3069,  3071,  3073,  3075,  3077,  3079,
    3081,  3083,  3085,  3087,  3089,  3091,  3093,  3095,  3097,  3099,
    3101,  3103,  3105,  3107,  3109,  3111,  3113,  3115,  3117,  3119,
    3121,  3123,  3125,  3127,  3129,  3131,  3133,  3135,  3137,  3139,
    3141,  3143,  3145,  3147,  3149,  3151,  3153,  3155,  3157,  3159,
    3161,  3163,  3165,  3167,  3169,  3171,  3173,  3175,  3177,  3179,
    3181,  3183,  3185,  3187,  3189,  3191,  3193,  3195,  3197,  3199,
    3201,  3203,  3205,  3207,  3209,  3211,  3213,  3215,  3217,  3219,
    3221,  3223,  3225,  3227,  3229,  3231,  3233,  3235,  3237,  3239,
    3241,  3243,  3247,  3253,  3257,  3263,  3265,  3270,  3276,  3278,
    3282,  3284,  3286,  3288,  3290,  3292,  3294,  3296,  3298,  3312,
    3314,  3316,  3318,  3320,  3322,  3324,  3328,  3334,  3339,  3344,
    3345,  3348,  3351,  3353
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
      41,   442,   312,    -1,   275,   311,   317,   313,   442,   312,
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
     354,   364,   367,   464,    -1,   391,   147,    -1,   391,   174,
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
      32,   215,     3,    33,    61,     3,   224,   311,   435,   312,
      -1,    32,   215,     3,    33,    61,     3,   114,   142,   311,
     432,   312,   178,     3,   311,   433,   312,   434,    -1,    32,
     215,     3,    33,    61,     3,    68,   311,   317,   312,    18,
     230,    -1,    32,   215,     3,    33,    61,     3,   114,   142,
     311,   432,   312,   178,     3,   311,   433,   312,   434,    18,
     230,    -1,    32,   215,     3,    33,    61,     3,   172,   142,
     311,   431,   312,    -1,    32,   215,     3,    88,    61,     3,
      -1,    32,   215,     3,   179,    61,     3,   208,     3,    -1,
      32,   215,     3,   100,    61,     3,    -1,    32,   215,     3,
      80,    61,     3,    -1,    32,   215,     3,   230,    61,     3,
      -1,    32,   215,     3,    33,    74,     3,   442,   437,   405,
      -1,    32,   215,     3,    88,    74,     3,    -1,    32,   215,
       3,    88,     3,    -1,    32,   215,     3,   179,    74,     3,
     208,     3,    -1,    32,   215,     3,   179,     3,   208,     3,
      -1,    32,   215,     3,   158,    74,     3,   442,   437,   405,
      -1,    32,   215,     3,   158,     3,   442,   437,   405,    -1,
      32,   215,     3,    65,    74,     3,     3,   442,   437,   405,
      -1,    32,   215,     3,    65,     3,     3,   442,   437,   405,
      -1,    -1,   110,    -1,    34,     3,    -1,   406,    -1,   135,
     408,   409,     3,   410,   232,   412,   407,   464,    -1,   135,
     408,   409,     3,   410,   353,    -1,    -1,   170,   142,   221,
     415,    -1,    -1,   408,   147,    -1,   408,    83,    -1,   408,
     124,    -1,   408,   132,    -1,   137,    -1,    -1,    -1,   311,
     411,   312,    -1,     3,    -1,   411,   313,     3,    -1,   311,
     414,   312,    -1,    -1,   412,   313,   413,   311,   414,   312,
      -1,   317,    -1,    93,    -1,   414,   313,   317,    -1,   414,
     313,    93,    -1,   135,   408,   409,     3,   204,   415,   407,
      -1,     3,    20,   317,    -1,     3,    20,    93,    -1,   415,
     313,     3,    20,   317,    -1,   415,   313,     3,    20,    93,
      -1,   416,    -1,   187,   408,   409,     3,   410,   232,   412,
     407,    -1,   187,   408,   409,     3,   204,   415,   407,    -1,
     187,   408,   409,     3,   410,   353,   407,    -1,   417,    -1,
     221,   418,   375,   204,   419,   354,   364,   367,   464,    -1,
      -1,   408,   147,    -1,   408,   132,    -1,     3,    20,   317,
      -1,     3,   310,     3,    20,   317,    -1,   419,   313,     3,
      20,   317,    -1,   419,   313,     3,   310,     3,    20,   317,
      -1,   179,   215,     3,   208,     3,    -1,   420,    -1,    63,
      76,   421,     3,    -1,    63,   193,   421,     3,    -1,    88,
      76,     3,    -1,    88,    76,   134,   241,     3,    -1,    88,
     193,     3,    -1,    88,   193,   134,   241,     3,    -1,    -1,
     134,   241,    -1,   422,    -1,    63,    82,     3,    41,   442,
      -1,    63,    82,     3,    41,   442,    93,   317,    -1,    63,
      82,     3,    41,   442,    18,   164,    -1,    63,    82,     3,
      41,   442,    68,   311,   317,   312,    -1,    63,    82,     3,
      41,   442,    18,   164,    68,   311,   317,   312,    -1,   423,
      -1,   228,     3,    -1,   228,    76,     3,    -1,   424,    -1,
      63,   428,   215,   421,     3,   311,   429,   312,   425,    -1,
      63,   428,   215,   421,     3,   310,     3,   311,   429,   312,
     425,    -1,    -1,   425,    38,    20,     5,    -1,   425,    38,
       5,    -1,   425,   168,     3,    87,     3,    -1,   425,   168,
       3,   211,     3,    -1,   425,   194,    53,   229,   311,     3,
     312,   195,     5,    -1,   425,   194,    53,   175,   311,     3,
     312,   311,   426,   312,    -1,   427,    -1,   426,   313,   427,
      -1,   194,     3,   232,   145,   213,     4,   168,   162,     5,
      -1,   194,     3,   232,   145,   213,   155,   168,   162,     5,
      -1,    63,   428,   215,   421,     3,   311,   429,   312,   444,
      -1,    63,   428,   215,   421,     3,   444,    -1,    63,   428,
     215,   421,     3,   310,     3,   311,   429,   312,   444,    -1,
      63,   428,   215,   421,     3,   310,     3,   444,    -1,    -1,
     209,    -1,   210,   209,    -1,   430,    -1,   429,   313,   430,
      -1,   172,   142,   311,   431,   312,    -1,    61,     3,   172,
     142,   311,   431,   312,    -1,   142,   311,   370,   312,    -1,
     133,   311,   370,   312,    -1,   117,   133,   311,   370,   312,
      -1,   117,   142,   311,   370,   312,    -1,    68,   311,   317,
     312,    -1,    61,     3,    68,   311,   317,   312,    -1,   114,
     142,   311,   432,   312,   178,     3,   311,   433,   312,   434,
      -1,   114,   142,   311,   432,   312,   178,     3,   310,     3,
     311,   433,   312,   434,    -1,    61,     3,   114,   142,   311,
     432,   312,   178,     3,   311,   433,   312,   434,    -1,    61,
       3,   114,   142,   311,   432,   312,   178,     3,   310,     3,
     311,   433,   312,   434,    -1,   224,   311,   435,   312,    -1,
      61,     3,   224,   311,   435,   312,    -1,     3,    -1,   431,
     313,     3,    -1,     3,    -1,   432,   313,     3,    -1,     3,
      -1,   433,   313,     3,    -1,    -1,   434,   168,    87,    64,
      -1,   434,   168,    87,   204,   164,    -1,   434,   168,    87,
     181,    -1,   434,   168,    87,   204,    93,    -1,   434,   168,
     221,    64,    -1,   434,   168,   221,   204,   164,    -1,   434,
     168,   221,   181,    -1,   434,   168,   221,   204,    93,    -1,
     434,   168,    87,   163,    -1,   434,   168,   221,   163,    -1,
     434,   154,   116,    -1,   434,   154,   201,    -1,   434,   154,
     171,    -1,   434,    78,    -1,   434,    18,    78,    -1,   434,
      78,   129,    79,    -1,   434,    78,   129,   127,    -1,     3,
      -1,   435,   313,     3,    -1,    -1,   436,     3,   442,   437,
      -1,    -1,   437,    18,   164,    -1,   437,   164,    -1,   437,
      93,     4,    -1,   437,    93,     5,    -1,   437,    93,     7,
      -1,   437,    93,     6,    -1,   437,    93,   293,   311,   312,
      -1,   437,    93,   294,   311,   312,    -1,   437,    93,   295,
     311,   312,    -1,   437,    93,    62,    -1,   437,    93,   311,
     317,   312,    -1,   437,    38,    -1,   437,    38,   311,     5,
     313,     5,   312,    -1,   437,    38,   311,     5,   312,    -1,
     437,    43,   311,     5,   313,     5,   312,    -1,   437,    43,
     311,     5,   312,    -1,   437,    43,    -1,   437,   224,   142,
      -1,   437,   224,    -1,   437,   172,   142,    -1,   437,   142,
      -1,   437,    69,     4,    -1,   437,    68,   311,   317,   312,
      -1,   437,    61,     3,   224,    -1,   437,    61,     3,   172,
     142,    -1,   437,    61,     3,    68,   311,   317,   312,    -1,
     437,    46,    42,    41,   311,   317,   312,    47,    -1,   437,
      46,    42,    41,   311,   317,   312,    48,    -1,   437,    46,
      42,    41,   311,   317,   312,    -1,   437,    41,   311,   317,
     312,    47,    -1,   437,    41,   311,   317,   312,    48,    -1,
     437,    41,   311,   317,   312,    -1,    -1,   311,     5,   312,
      -1,   311,     5,   313,     5,   312,    -1,    -1,    54,    -1,
      -1,   440,   222,    -1,   440,   240,    -1,    -1,   441,    72,
     204,     4,    -1,   441,    73,     4,    -1,    57,   438,    -1,
     207,   438,   440,    -1,   203,   438,   440,    -1,   160,   438,
     440,    -1,   138,   438,   440,    -1,   130,   438,   440,    -1,
      56,   438,   440,    -1,   176,   438,   440,    -1,    94,   438,
     440,    -1,   112,   438,   440,    -1,    96,   438,   440,    -1,
      97,    -1,   220,    -1,   214,    -1,    95,    -1,   238,    -1,
      72,   438,   441,    -1,   231,   311,     5,   312,   441,    -1,
      54,   438,    -1,   233,   311,     5,   312,    -1,   219,    -1,
      51,    -1,   159,    -1,   153,    -1,   206,   439,   441,    -1,
     212,   439,   441,    -1,   156,   439,   441,    -1,   146,   439,
     441,    -1,   103,   311,   443,   312,   441,    -1,   204,   311,
     443,   312,   441,    -1,    52,    -1,   225,    -1,     4,    -1,
     443,   313,     4,    -1,   445,   378,   353,    -1,    -1,   132,
      -1,   187,    -1,   446,    -1,   204,   193,     3,    -1,   204,
     193,    93,    -1,   204,   447,    -1,   448,    -1,   447,   313,
     448,    -1,     8,    20,   317,    -1,     8,     9,   317,    -1,
     449,    -1,    63,   173,     3,   311,   450,   312,    41,    50,
     454,   104,    -1,    63,   173,     3,   311,   450,   312,    50,
     454,   104,    -1,    63,    10,   187,   173,     3,   311,   450,
     312,    41,    50,   454,   104,    -1,    63,    10,   187,   173,
       3,   311,   450,   312,    50,   454,   104,    -1,    63,   118,
       3,   311,   450,   312,   184,   453,    41,    50,   454,   104,
      -1,    63,   118,     3,   311,   450,   312,   184,   453,    50,
     454,   104,    -1,    63,    10,   187,   118,     3,   311,   450,
     312,   184,   453,    41,    50,   454,   104,    -1,    63,    10,
     187,   118,     3,   311,   450,   312,   184,   453,    50,   454,
     104,    -1,    -1,   451,    -1,   452,    -1,   451,   313,   452,
      -1,     3,   442,    -1,    16,     3,   442,    -1,   166,     3,
     442,    -1,   128,     3,   442,    -1,   130,    -1,   138,    -1,
     231,    -1,   212,    -1,    52,    -1,   112,    -1,    94,    -1,
      56,    -1,    97,    -1,   214,    -1,    -1,   454,   455,    -1,
     454,    50,   454,   104,    -1,   454,   134,   454,   104,   134,
      -1,   454,   236,   454,   104,   236,    -1,   454,   144,   454,
     104,   144,    -1,   454,   111,   454,   104,   111,    -1,   454,
      67,   454,   104,    67,    -1,     3,    -1,     4,    -1,     5,
      -1,     7,    -1,     6,    -1,    20,    -1,    18,    -1,    10,
      -1,    12,    -1,    16,    -1,    40,    -1,   205,    -1,   135,
      -1,   221,    -1,    87,    -1,   115,    -1,   234,    -1,   204,
      -1,   137,    -1,   232,    -1,    63,    -1,    88,    -1,   215,
      -1,   133,    -1,   216,    -1,   105,    -1,    99,    -1,    77,
      -1,    81,    -1,    58,    -1,   182,    -1,   143,    -1,   140,
      -1,    60,    -1,   165,    -1,   109,    -1,    59,    -1,   121,
      -1,   107,    -1,   166,    -1,   128,    -1,   119,    -1,    44,
      -1,   189,    -1,   180,    -1,   106,    -1,   191,    -1,    49,
      -1,    98,    -1,   188,    -1,   190,    -1,    41,    -1,   168,
      -1,   169,    -1,    53,    -1,   120,    -1,   126,    -1,   150,
      -1,   152,    -1,   141,    -1,   148,    -1,   186,    -1,   131,
      -1,   167,    -1,   116,    -1,    66,    -1,   161,    -1,   227,
      -1,   164,    -1,    93,    -1,   172,    -1,   142,    -1,   224,
      -1,    68,    -1,   114,    -1,   178,    -1,    64,    -1,   181,
      -1,   163,    -1,   130,    -1,   138,    -1,   231,    -1,   212,
      -1,    52,    -1,   112,    -1,    94,    -1,    56,    -1,    97,
      -1,   214,    -1,   203,    -1,    96,    -1,    72,    -1,   225,
      -1,    51,    -1,   223,    -1,   102,    -1,   136,    -1,    35,
      -1,    86,    -1,   241,    -1,   235,    -1,   237,    -1,   173,
      -1,   118,    -1,   184,    -1,   311,    -1,   312,    -1,   313,
      -1,   309,    -1,   310,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    17,    -1,   314,    -1,   282,
      -1,   283,    -1,   284,    -1,   285,    -1,   286,    -1,     8,
      -1,   456,    -1,    88,   173,     3,    -1,    88,   173,   134,
     241,     3,    -1,    88,   118,     3,    -1,    88,   118,   134,
     241,     3,    -1,   457,    -1,    58,     3,   311,   312,    -1,
      58,     3,   311,   458,   312,    -1,   459,    -1,   458,   313,
     459,    -1,     5,    -1,     4,    -1,     7,    -1,   164,    -1,
       6,    -1,     3,    -1,     8,    -1,   460,    -1,    63,   190,
       3,   461,   462,   168,     3,   119,    98,   188,    50,   454,
     104,    -1,    49,    -1,    34,    -1,   135,    -1,   221,    -1,
      87,    -1,   463,    -1,    88,   190,     3,    -1,    88,   190,
     134,   241,     3,    -1,    32,   190,     3,   100,    -1,    32,
     190,     3,    80,    -1,    -1,   183,    26,    -1,   183,   465,
      -1,     3,    -1,   465,   313,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   398,   398,   399,   404,   411,   412,   413,   431,   439,
     447,   453,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     484,   484,   493,   493,   495,   495,   497,   497,   501,   502,
     503,   504,   505,   508,   509,   512,   513,   516,   517,   520,
     520,   521,   521,   522,   522,   530,   530,   538,   538,   549,
     553,   554,   555,   556,   557,   558,   559,   560,   564,   564,
     566,   566,   568,   568,   571,   571,   573,   573,   575,   575,
     577,   577,   579,   579,   581,   581,   584,   584,   586,   586,
     588,   588,   590,   590,   592,   592,   594,   594,   596,   596,
     598,   598,   601,   601,   603,   603,   605,   605,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   644,   645,   646,   647,   648,   649,   650,   651,
     653,   654,   656,   657,   658,   660,   661,   662,   663,   670,
     677,   684,   688,   692,   698,   699,   700,   703,   709,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   727,   729,
     731,   733,   737,   745,   756,   757,   760,   761,   764,   772,
     780,   791,   801,   802,   816,   817,   818,   819,   822,   829,
     837,   838,   839,   842,   843,   846,   847,   851,   852,   855,
     857,   861,   862,   865,   867,   871,   872,   875,   876,   879,
     885,   892,   901,   902,   903,   904,   907,   908,   909,   910,
     911,   914,   915,   918,   919,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   933,   934,   935,   943,   949,   950,
     951,   954,   955,   958,   959,   963,   970,   971,   972,   975,
     976,   980,   982,   984,   986,   988,   992,   993,   994,   997,
     998,  1001,  1002,  1005,  1006,  1007,  1010,  1011,  1014,  1015,
    1019,  1021,  1023,  1025,  1028,  1029,  1032,  1033,  1036,  1040,
    1050,  1058,  1059,  1060,  1061,  1065,  1069,  1071,  1075,  1075,
    1077,  1082,  1089,  1096,  1106,  1113,  1120,  1130,  1138,  1148,
    1156,  1165,  1174,  1184,  1192,  1201,  1210,  1220,  1229,  1241,
    1246,  1251,  1257,  1264,  1271,  1278,  1288,  1295,  1304,  1311,
    1317,  1325,  1331,  1339,  1340,  1341,  1342,  1343,  1347,  1354,
    1363,  1370,  1376,  1387,  1390,  1396,  1402,  1409,  1415,  1422,
    1428,  1434,  1440,  1446,  1452,  1458,  1464,  1470,  1476,  1482,
    1488,  1494,  1500,  1506,  1514,  1515,  1516,  1519,  1527,  1533,
    1546,  1547,  1550,  1551,  1552,  1553,  1554,  1557,  1557,  1560,
    1561,  1564,  1574,  1587,  1588,  1588,  1591,  1592,  1593,  1594,
    1597,  1601,  1602,  1603,  1604,  1610,  1613,  1619,  1624,  1630,
    1638,  1647,  1648,  1649,  1653,  1664,  1676,  1687,  1702,  1707,
    1711,  1712,  1716,  1718,  1720,  1722,  1726,  1727,  1733,  1737,
    1739,  1741,  1743,  1745,  1750,  1754,  1755,  1759,  1768,  1778,
    1782,  1783,  1784,  1785,  1786,  1787,  1789,  1793,  1794,  1797,
    1812,  1819,  1834,  1847,  1862,  1875,  1876,  1877,  1880,  1881,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1894,
    1896,  1898,  1900,  1902,  1906,  1907,  1910,  1911,  1914,  1915,
    1918,  1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,  1927,
    1928,  1929,  1930,  1931,  1932,  1933,  1934,  1935,  1938,  1939,
    1942,  1942,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,
    1960,  1961,  1962,  1963,  1970,  1971,  1972,  1973,  1974,  1975,
    1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,
    1986,  1987,  1988,  1989,  1990,  1993,  1994,  1995,  1998,  1999,
    2002,  2003,  2004,  2007,  2008,  2009,  2013,  2014,  2015,  2016,
    2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,  2025,  2026,
    2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,  2036,
    2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2047,  2048,
    2051,  2064,  2065,  2066,  2070,  2073,  2074,  2075,  2076,  2076,
    2078,  2079,  2087,  2091,  2097,  2103,  2110,  2117,  2123,  2129,
    2136,  2145,  2146,  2149,  2150,  2153,  2154,  2155,  2156,  2159,
    2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,  2168,  2175,
    2176,  2177,  2178,  2179,  2180,  2181,  2182,  2185,  2186,  2187,
    2187,  2187,  2188,  2188,  2188,  2188,  2188,  2188,  2189,  2189,
    2189,  2189,  2189,  2189,  2189,  2189,  2189,  2190,  2190,  2190,
    2190,  2190,  2190,  2190,  2191,  2191,  2191,  2191,  2192,  2192,
    2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,  2192,
    2193,  2193,  2193,  2193,  2193,  2193,  2193,  2193,  2194,  2194,
    2194,  2194,  2194,  2194,  2194,  2194,  2195,  2195,  2195,  2195,
    2195,  2195,  2195,  2195,  2195,  2196,  2196,  2196,  2196,  2196,
    2196,  2196,  2196,  2197,  2197,  2197,  2198,  2198,  2198,  2198,
    2198,  2198,  2198,  2198,  2199,  2199,  2199,  2199,  2199,  2199,
    2199,  2200,  2200,  2200,  2200,  2200,  2200,  2200,  2201,  2201,
    2201,  2201,  2202,  2202,  2202,  2202,  2202,  2202,  2202,  2202,
    2202,  2202,  2202,  2202,  2203,  2203,  2203,  2203,  2203,  2204,
    2211,  2215,  2221,  2227,  2233,  2245,  2249,  2255,  2263,  2264,
    2267,  2268,  2269,  2270,  2271,  2272,  2273,  2280,  2284,  2292,
    2293,  2296,  2297,  2298,  2301,  2305,  2311,  2320,  2328,  2339,
    2340,  2341,  2344,  2345
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
     407,   407,   408,   408,   408,   408,   408,   409,   409,   410,
     410,   411,   411,   412,   413,   412,   414,   414,   414,   414,
     406,   415,   415,   415,   415,   352,   416,   416,   416,   352,
     417,   418,   418,   418,   419,   419,   419,   419,   352,   352,
     420,   420,   352,   352,   352,   352,   421,   421,   352,   422,
     422,   422,   422,   422,   352,   423,   423,   352,   424,   424,
     425,   425,   425,   425,   425,   425,   425,   426,   426,   427,
     427,   424,   424,   424,   424,   428,   428,   428,   429,   429,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   431,   431,   432,   432,   433,   433,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   435,   435,
     436,   430,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   438,   438,   438,   439,   439,
     440,   440,   440,   441,   441,   441,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   443,   443,
     444,   445,   445,   445,   352,   446,   446,   446,   447,   447,
     448,   448,   352,   449,   449,   449,   449,   449,   449,   449,
     449,   450,   450,   451,   451,   452,   452,   452,   452,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   454,
     454,   454,   454,   454,   454,   454,   454,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     352,   456,   456,   456,   456,   352,   457,   457,   458,   458,
     459,   459,   459,   459,   459,   459,   459,   352,   460,   461,
     461,   462,   462,   462,   352,   463,   463,   352,   352,   464,
     464,   464,   465,   465
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
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
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
       1,     1,     1,     1,     1,     3,     5,     4,     4,     0,
       2,     2,     1,     3
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
       0,     0,     0,     0,     0,   416,     0,     0,     0,     0,
       0,   416,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   378,     0,     0,   378,     0,     0,
     577,   578,     0,     0,     0,     0,   425,     0,     1,     2,
     328,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,     0,   416,   298,
       0,   293,   291,   292,     0,   412,     0,   743,     0,   327,
     741,     0,   765,     0,   414,     0,   302,     0,   374,   375,
     376,   377,   373,     0,   339,     0,     0,     0,     0,   575,
     576,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   246,   236,   188,     0,   189,   190,   237,   238,   239,
      11,   241,   243,   242,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   192,   244,   329,   376,   373,   250,     0,     0,   251,
     253,   254,   260,   426,     3,     0,     0,   334,   335,   768,
     767,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     755,   751,   750,   754,   752,   756,   753,   746,     0,   748,
       0,     0,   417,   410,     0,   591,     0,     0,     0,     0,
     591,   760,   759,     0,   411,     0,     0,     0,     0,     0,
     296,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,     0,   379,   581,   580,   579,     0,    47,     0,
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
     342,   747,     0,     0,     0,   557,   566,   525,   525,   525,
     525,   525,   550,   525,   547,     0,   525,   525,   525,   528,
     559,   528,   558,   525,   525,   525,     0,   528,   525,   528,
     549,   556,   548,   567,     0,     0,   551,   419,     0,     0,
       0,     0,     0,   592,   593,     0,     0,     0,     0,     0,
     763,   761,   762,     0,     0,     0,     0,     0,   571,   299,
       0,   215,     0,   194,   298,   413,   744,   742,   766,   415,
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
       0,     0,     0,   354,   749,   591,   591,     0,   554,   530,
     536,   533,   530,   530,     0,   530,   530,   530,   529,   533,
     533,   530,   530,   530,     0,   533,   530,   533,     0,     0,
       0,     0,     0,   595,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     572,   573,     0,   490,   442,   260,   195,     0,   222,   194,
     295,   297,     0,   370,   381,     0,     0,   369,   370,     0,
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
     276,     0,     0,     0,     0,     0,   492,   492,     0,   364,
     492,   359,     0,     0,     0,     0,     0,   542,   552,   544,
     546,   568,     0,   545,   541,   540,   563,   562,   539,   543,
     538,     0,   560,   537,   561,     0,     0,   421,     0,   420,
     596,   598,   597,     0,   594,     0,   319,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,     0,   571,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   448,     0,     0,     0,     0,
     769,   300,     0,     0,     0,   390,   380,     0,     0,   370,
     397,   370,   398,    46,   182,     0,   181,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    70,    72,     0,     0,     0,     0,
       0,   104,   106,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,   205,   332,   256,     0,     0,     0,
       0,   404,     0,     0,   222,   265,   263,     0,     0,   261,
     277,     0,     0,     0,     0,     0,   364,   364,   492,     0,
       0,   504,     0,   509,     0,     0,     0,     0,     0,   365,
     513,   494,     0,   511,   361,   364,   351,   358,     0,     0,
     526,     0,   531,   532,     0,     0,   533,     0,   533,   533,
     555,     0,     0,   603,   606,   605,   607,   604,   599,   600,
     602,   608,   601,     0,     0,     0,     0,     0,     0,   305,
       0,     0,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,     0,     0,     0,   490,   444,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   430,   490,     0,   570,
     200,   200,   216,   217,   223,     0,   290,   392,   391,     0,
       0,   382,   387,   386,     0,   384,   769,   396,   179,   183,
       0,   110,   109,     0,   114,     0,     0,   167,   168,   143,
     121,   122,     0,     0,   126,   127,   128,   132,   134,   136,
     150,   151,   152,   153,     0,    67,    76,    78,    74,    80,
      82,    84,   118,     0,     0,   120,   163,   207,   207,   207,
      86,     0,     0,    94,     0,     0,   102,   207,   207,    50,
      54,     0,     0,    44,     0,     0,     0,    31,     0,     0,
     215,   284,     0,     0,     0,     0,     0,     0,   769,   278,
       0,   264,     0,     0,     0,   488,     0,   355,   363,   364,
     493,   366,     0,     0,     0,     0,     0,     0,   514,   495,
     496,   498,   497,   502,     0,     0,     0,     0,   512,   510,
     360,     0,     0,   609,     0,     0,   535,   564,   569,   565,
     553,     0,   422,     0,   609,     0,     0,     0,     0,     0,
     320,     0,   313,     0,     0,     0,     0,   617,   618,   619,
     621,   620,   739,   624,   625,   626,   732,   623,   622,   727,
     728,   729,   730,   731,   714,   627,   668,   659,   664,   609,
     710,   700,   671,   703,   646,   653,   650,   637,   693,   682,
     609,   690,   708,   644,   645,   715,   631,   638,   686,   702,
     707,   704,   665,   643,   712,   584,   642,   662,   655,   652,
     609,   701,   691,   632,   681,   720,   658,   672,   654,   673,
     657,   696,   679,   640,   609,   629,   713,   635,   697,   649,
     676,   688,   648,   609,   677,   674,   675,   683,   695,   685,
     651,   656,   680,   669,   670,   687,   719,   692,   661,   694,
     647,   721,   678,   666,   660,   667,   663,   706,   634,   628,
     699,   705,   639,   641,   630,   711,   689,   709,   684,   698,
     636,   633,   717,   609,   718,   716,   734,   735,   736,   737,
     738,   725,   726,   722,   723,   724,   733,   610,     0,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
     428,   441,   449,   492,   201,   202,     0,   219,   221,     0,
       0,     0,   772,   770,   771,     0,     0,   383,     0,     0,
     368,     0,     0,   113,   170,   171,   172,   173,   176,   175,
     177,   169,   174,     0,     0,     0,   207,   207,   207,   207,
     207,   207,     0,     0,     0,   211,   211,   211,   207,     0,
       0,     0,   207,     0,     0,     0,   207,   211,   211,    52,
      56,    37,    33,    35,   200,   203,   206,   222,   286,     0,
       0,     0,   405,   406,     0,   400,     0,   344,   466,     0,
     464,     0,   345,     0,   362,     0,     0,     0,     0,     0,
       0,   516,     0,     0,     0,     0,     0,     0,   609,     0,
     527,   534,     0,   609,     0,   309,   322,   323,   324,     0,
       0,     0,     0,   306,   583,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,     0,     0,     0,   430,     0,
       0,     0,     0,   456,     0,     0,     0,   453,     0,   452,
       0,   462,     0,     0,     0,   491,   200,   218,   225,   224,
       0,   371,   394,   393,   389,   388,     0,   111,   108,   123,
     124,   154,   211,   211,   211,   211,   211,   211,   156,     0,
     119,     0,     0,     0,     0,     0,   211,    88,     0,     0,
     211,    96,     0,     0,   211,     0,     0,   198,     0,     0,
     197,   226,   282,     0,   281,   280,     0,   279,     0,     0,
       0,   349,     0,   489,   506,     0,   524,   508,     0,     0,
       0,   517,   515,   499,   500,   501,   503,     0,   609,     0,
     586,   423,     0,   588,     0,   317,   314,     0,   611,     0,
       0,     0,     0,     0,   609,   311,     0,     0,     0,   308,
     429,   443,     0,     0,     0,     0,     0,   454,   455,   234,
     450,   432,     0,     0,     0,   220,   773,     0,     0,     0,
       0,     0,     0,     0,     0,   209,   208,     0,    69,    71,
      73,     0,   207,     0,     0,     0,   207,     0,     0,     0,
     105,   107,   204,   200,     0,   231,   287,   407,   347,     0,
     467,   465,     0,   522,   523,     0,     0,     0,   609,     0,
     585,   587,   325,   310,   616,   615,   612,   614,   613,     0,
     318,   316,     0,   457,     0,     0,   463,     0,   431,     0,
       0,     0,     0,   385,    77,    79,    75,    81,    83,    85,
     157,     0,   200,   212,    87,   211,    90,    92,    95,   211,
      98,   100,   103,   199,   228,   227,     0,   193,     0,   505,
     507,   521,   518,     0,   590,   758,   312,     0,   451,     0,
     433,   434,     0,     0,   210,   213,     0,     0,   207,   207,
       0,   207,   207,     0,     0,   232,     0,   519,   520,   589,
       0,     0,     0,     0,     0,   200,    89,   211,   211,    97,
     211,   211,   230,   229,   468,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,     0,   470,     0,     0,     0,
       0,   470,     0,     0,    91,    93,    99,   101,   346,   469,
       0,     0,     0,   458,     0,     0,   437,   435,     0,   484,
       0,     0,     0,   470,   470,     0,     0,   436,     0,   485,
     348,     0,   481,   483,   482,     0,     0,     0,   460,   459,
       0,   438,   486,   487,   471,   479,   473,     0,   475,   480,
     477,     0,   470,     0,   474,   472,   478,   476,   461,     0,
       0,     0,     0,     0,     0,     0,   439,   440
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   508,   805,   970,   971,   969,   509,   510,   795,
     965,   796,   966,   517,  1137,  1138,  1139,  1418,  1416,  1417,
    1419,  1420,  1421,  1428,  1652,  1748,  1749,  1432,  1656,  1751,
    1752,  1436,  1147,  1148,   523,   924,   305,    17,    18,   491,
     974,  1445,  1387,  1570,  1160,  1425,  1646,  1553,  1713,   708,
    1082,  1083,   900,  1665,  1727,  1376,    72,   221,   222,   393,
     228,   229,   230,   412,   231,   409,   638,   410,   634,   989,
     990,   626,   978,  1449,   232,    19,    56,   104,   280,    20,
      21,   871,   872,    22,    23,   621,    80,    24,    25,    26,
    1014,    27,   905,    64,   123,   503,   715,   909,  1399,  1094,
     713,    28,    29,    75,   630,    30,    87,    31,    32,    33,
    1380,  1805,  1806,    55,   894,   895,  1461,  1459,  1775,  1798,
    1176,   896,   829,   658,   669,   837,   838,   467,   842,   704,
     705,    34,    70,    71,    35,   472,   473,   474,  1043,  1057,
    1357,    36,    37,   258,   259,    38,   273,   483,    39,  1086,
    1394
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1388
static const yytype_int16 yypact[] =
{
    5664,   -96,   -97,   125,  5807, -1388,   706, -1388,   -81,   -71,
   -1388,    36, -1388,   158,    22,    89,   385,   137, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
     407,   464,   467,   111,   275,   352,   514,   527,   349,   603,
     619,   352, -1388,   310,   389,   409,   317,    94,   326,   629,
     361,   397,   400,   474,   565,   632,   635,   565,   441,    56,
     337, -1388,  5804,   642,   520,    33, -1388,   653, -1388,  5664,
     343,   333,   616,   351,    25,   -25,   422,   663,   627,   359,
     512,   477,   444,   371,    80,   685, -1388,   360,   352,   381,
     692, -1388, -1388, -1388,   -88, -1388,   462, -1388,   468, -1388,
   -1388,   470, -1388,   482, -1388,   485, -1388,   493, -1388, -1388,
   -1388, -1388, -1388,   702, -1388,   511,   752,  7496,  7496, -1388,
   -1388,   731,   332, -1388, -1388, -1388, -1388,   764,  7496,  7496,
    7496, -1388, -1388, -1388,  6277, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388,   472,   483,   497,   524,   533,
     538,   541,   546,   567,   571,   574,   587,   618,   640,   661,
     693,   716,   759,   781,   803,   862,   864,   871,   873,   877,
     883,   895,   896,   898,   899,   900,   905,   907,   908,   909,
     910,   916,   917,   923,   924,   927,   931,   932,   933,   938,
     940,   941,   942,   944,   946,   947,   951,   952,   953,   954,
     962,   963,   970,   972,   975,   979,   984,   985,   986,  7496,
    8997,   -80, -1388,   790,    34,    35,    21,    19,  -147,   273,
   -1388, -1388,   744, -1388, -1388,  1120,  1149, -1388, -1388, -1388,
   -1388,   384,   101,   853,   366,  1215,   123,   601,  1237,  1299,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,    55, -1388,
    1302,  1309, -1388, -1388,  8660,   473,  1317,  1154,  1086,  1325,
     473, -1388, -1388,   -29, -1388,  1161,   478,  1090,  1330,  1318,
   -1388,   113,  -162,    33,  1332,  1340,  1344,  1345,  1347,  1349,
    1353,  -144,  1355,  -140,  9105,  9105, -1388,  1357,  7496,  7496,
     881,   881, -1388,  7496,   912,   292, -1388,  7496,  5967,  7496,
    7496,  7496,  7496,  7496,  7496,  7496,  7496,  7496,  1055,  7496,
    7496,  7496,  7496,  7496,  7496,  7496,  7496,  7496,  7496,  7496,
    7496,  7496,  7496,  7496,  1056,  7496,  7496,  7496,  1057,  7496,
    7496,  7496,  7496,  7496,  7496,  6425,  7496,  7496,  7496,  7496,
    7496,  7496,  7496,  7496,  7496,  7496,  1058,  1059,  1060,  1061,
    7496,  7496,  1063,  1067,  1068,  7496,  7496,  1360,  1069,  1070,
    5160, -1388,  7496,  7496,  7496,  7496,  7496,    43,  1072,   714,
    7496,  6115,  7496,  7496,  7496,  7496,  7496,  7496,  7496,  7496,
    7496,  7496,  1371, -1388,    33,  7496,  1381,  1383,   304,  1078,
     334,  1388,    33, -1388, -1388, -1388,   -41, -1388,    33,  1251,
    1226, -1388,  1392, -1388, -1388,  1396,  1398,  1399,  1400,  1403,
   -1388,  1408,  1409,  1410,  8660,  1432,  1228,  1435,  1436,  1437,
   -1388, -1388,   133,  1131,  1150, -1388, -1388,  1151,  1151,  1151,
    1151,  1151, -1388,  1151, -1388,  1152,  1151,  1151,  1151,  1387,
   -1388,  1387, -1388,  1151,  1151,  1151,  1155,  1387,  1151,  1387,
   -1388, -1388, -1388, -1388,  1156,  1157, -1388,   597,  8660,  1457,
    1462,  1466,  1158,  1159, -1388,  -157,  1468,  1470,  1306,  1163,
   -1388, -1388, -1388,  1308,  1475,  1311,  1239,  1478,   163, -1388,
    7496,  1319,    33,  -160,   381, -1388, -1388, -1388, -1388, -1388,
   -1388,  1486,  1487,   247, -1388,  1486,   252, -1388,   955, -1388,
    1179,  9105,  7059,   367, -1388,  7496,  7496,  1287,   190, -1388,
   -1388, -1388,  5204,  6589,   987,  1053,  1108,  5472,  5516,  5885,
    5934,  6143,  6296, -1388,  1130,  1727,  1772,  2039,  6446,  2084,
    2351,  2396,  6605,  6750,  6796,   486,  2663,  6908,  2708, -1388,
    6929,  7203,  7512, -1388,  9035,  2975,  3020,  3287,  3332,  4848,
    1181,  7558,  7579,  7600,  7621,  7643,  7664,  7685,  7706,  3599,
    3644,  3911, -1388, -1388, -1388, -1388,  7807,  3956,  1187,  1188,
    1189,   525,   547,  1194,  1201,  1202, -1388,  1404,  1746,  9123,
    9141,  9141, -1388,    57, -1388, -1388,  1305,  7496,  7496,  1203,
    7496,  9059,  1205,  1213,  1214,  7496,   965,   996,  1009,   751,
     715,   715,  1496,  1496,  1496,  1496, -1388, -1388,  -160, -1388,
   -1388,  1216,   412,  1385,  1386,  1389, -1388, -1388, -1388,   -14,
    -149,   273,  1226,  1226,  1391,  1365,    33, -1388,  1393, -1388,
       8,  8660,  8660,  1534, -1388, -1388, -1388, -1388, -1388,  8660,
    1535,  1333,  1334, -1388, -1388,   473,   473,  1538, -1388, -1388,
   -1388, -1388, -1388, -1388,  1536, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388,  1536, -1388, -1388, -1388,  1544,  1545,
    1401,  1241,  7496, -1388,  8660,  8660,  8660,  1372,   473,  1328,
      66,  -143,  1402,  1557,   479,  1561,  -141,  1563,  1565,  1405,
   -1388, -1388,  1566,    10, -1388,   744,  9105,  1518,  1425,  -160,
   -1388, -1388,  1554,  -122, -1388,   342,  1266, -1388,  -122,  1266,
    1414,  7496, -1388,  7496, -1388,  7496,  8910,  7134,  1267,  7496,
    7496, -1388,  7496,  8889,  1439,  1439,  7496, -1388, -1388, -1388,
   -1388, -1388, -1388,  7496,  7496,  7496,  7496, -1388,  7496,  7496,
    7496, -1388, -1388, -1388, -1388,  7496,  7496, -1388,  7496, -1388,
   -1388, -1388,  8660,  8660,  7496,  7496,  7496,  1576, -1388,  1278,
    1279,  1280,  1283,  1288,  1289, -1388, -1388, -1388,  7496,  7496,
    7496, -1388,  7496,  1292,  1294,  1297,  1291,  1607,  1310,  1613,
    1312,  1313,  1316, -1388, -1388,  7496,  1287,  9141,  9141,  1415,
    9082,  7496, -1388, -1388, -1388,  1287,  1502,  1631,   304,  1521,
    1521,  1521,  7496,  1638,  1639,  1319, -1388, -1388,    33,  7496,
     -53,    33,  1335,  1506,  1507,  1339, -1388, -1388,  8660,  8551,
   -1388, -1388,  1641,  1648,  1341,  1342,   386,  -105,   628,  -105,
    -105, -1388,   401,  -105,  -105,  -105,   628,   628,  -105,  -105,
    -105,   405,   628,  -105,   628,  1343,  1354,  1584,  7496,  9105,
   -1388, -1388, -1388,  1118, -1388,  1346, -1388,  1358,  1359,  1361,
    1363,   419, -1388,  1442,    66,  1662,  -127,  1628, -1388,  1568,
    1451,    66,  -124,  1514,  1685,   -85,  1686,  1379,  1549,   484,
    1382,  1384,  1550,  1390,   425, -1388,  1691,  1287,   451,  7496,
    1513, -1388,  6734,  1555,  1699, -1388, -1388,  1700,  7043,  -117,
   -1388,  -117, -1388, -1388,  9105,  8931, -1388,  7496, -1388,  4892,
     568,  7828,  7496,  7496,  1394,  1411,  7853,  7874,  7895,  4223,
    4268,  7916,  7938,  7959,  7980,  8001,  8022,  1412,  1413,  8043,
    8064,  4535,  1416,  1397,  1406,  1422,  1423,  1433,  1452,   738,
    4580,  8085,  8123, -1388, -1388, -1388,  1492,   457,  1505,   459,
    1509, -1388, -1388,  1477,  1510,  7496,  1287,  7496,  1424,  1287,
    1287,  1287,  1516,  1651,  1579, -1388, -1388,  1571,  1515,  1519,
    1525,  9105,  1693,    -3,  1425, -1388,  9105,  7496,  1526, -1388,
   -1388,   -53,  7496,  1527,  1528,  1711,  8551,  8551, -1388,  1551,
    1718,  1529,  1530,  1532,  1776,  1732,  1533,  1817,    84, -1388,
   -1388, -1388,  1687,  1703, -1388,  8551, -1388, -1388,  1665,   566,
   -1388,  1841, -1388, -1388,  1646,  1848, -1388,  1849, -1388, -1388,
   -1388,  1543,  8148, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388,   578,    66,  1852,  1858,  1859,  1861, -1388,
    1865,  1558,   480,  1567,  1643,    66, -1388,  1173,  1778,  1569,
     510,  1652,    66,  1874,  -118,    10, -1388,   297,  7496,  1572,
    1574,  1575,  1879,  1879,  1578,  1711,   225,    10,  8660, -1388,
     -19,    69,  1577, -1388,   791,   107, -1388, -1388,  9105,  1666,
    1871, -1388, -1388,  9105,   513, -1388,  1513, -1388, -1388,  9105,
    7496, -1388, -1388,  7496, -1388,  8169,  8612, -1388, -1388, -1388,
   -1388, -1388,  7496,  7496, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388,  7496, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388,  7496,  7496, -1388, -1388,  1588,  1588,  1588,
   -1388,  1585,   786, -1388,  1590,   792, -1388,  1588,  1588, -1388,
   -1388,  1586,  1587,  1424,  1595,  1596,  1598, -1388,  7496,  7496,
    1319, -1388,  1899,  1899,  1899,  7496,  7496,  1912,  1513,  9105,
    1879, -1388,  8190,  1914,  1917, -1388,   516, -1388, -1388,  8551,
   -1388, -1388,  1919,  7496,  1924,  1889,   162,  7496, -1388, -1388,
   -1388, -1388, -1388, -1388,  1620,  1621,  1623,  7496, -1388, -1388,
   -1388,  1118,  1886, -1388,  1627,  1942, -1388,   628, -1388,   628,
     628,  7496, -1388,  1902, -1388,   519,  1642,  1644,  1649,  1640,
   -1388,    66, -1388,    66,  1647,   521,  1495, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,  1774,    66,
   -1388,  1653,   528,  1654,  1731,    66,   530,  1655,  1821,  1825,
    1658,  8211,  1914,  1879,  1879, -1388,   535,   552,  1917,   554,
     324, -1388, -1388, -1388, -1388, -1388,  1974, -1388, -1388,   451,
    7496,  7496, -1388, -1388,  1668,  1486,  7115, -1388,  7187,  1667,
   -1388,  8233,  8254, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388,  8275,  8296,  8317,  1588,  1588,  1588,  1588,
    1588,  1588,   934,  8338,  1929,  1814,  1814,  1814,  1588,  1673,
    1674,  1678,  1588,  1681,  1682,  1688,  1588,  1814,  1814, -1388,
   -1388, -1388, -1388, -1388,  8952,  -150,  9105,  1425, -1388,   559,
     562,   564,  9105,  9105,  1979, -1388,   577,  1983, -1388,   600,
   -1388,   604, -1388,  1999, -1388,   606,  8359,   717,  1692,  1694,
    1862, -1388,  8380,  1695,  1696,  1697,  8401,   580, -1388,  1807,
   -1388, -1388,  8426, -1388,  2119, -1388, -1388, -1388, -1388,  2003,
     730,   732,    66, -1388, -1388,  2431,  2743,  3055,  3367,  3679,
    3991,  1963,   734,    66, -1388,    66,  1704,   736,   225,  7496,
    1705,  1706,  1711, -1388,   741,   743,   745, -1388,  2011, -1388,
     747, -1388,   356,  2015,  1967,  8637,    69, -1388,  9105,  9105,
    2021,  1712, -1388,  9105, -1388,  9105,  7043, -1388, -1388, -1388,
   -1388, -1388,  1814,  1814,  1814,  1814,  1814,  1814, -1388,  7496,
   -1388,  2023,  1976,  1715,  1721,  1723,  1814, -1388,  1729,  1730,
    1814, -1388,  1738,  1739,  1814,  1735,  1744, -1388,  1885,  7496,
   -1388,  1952, -1388,  2069, -1388, -1388,  7496, -1388,  1843,  1896,
    2072, -1388,  2073, -1388, -1388,  2074,  1037, -1388,  2075,  7496,
    7496, -1388, -1388, -1388, -1388, -1388, -1388,  2027, -1388,  4303,
   -1388, -1388,  4615, -1388,  1766, -1388, -1388,   776, -1388,  2014,
    1971,  1949,  1940,  1850, -1388, -1388,   778,   783,    66, -1388,
     324, -1388,  8464,  1914,  1917,   785,  1909, -1388, -1388, -1388,
   -1388, -1388,  2083,   -35,   -79, -1388, -1388,   787,  1789,  1803,
    1816,  1818,  1820,  1822,  8485, -1388,  1827,  2130, -1388, -1388,
   -1388,  1826,  1588,  1830,  1831,  1836,  1588,  1838,  1839,  1840,
   -1388, -1388, -1388,  8952,   -91,  2016, -1388,  9105, -1388,  2148,
   -1388, -1388,  1844, -1388, -1388,  1845,  8506,  8528, -1388,  4927,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,  5239,
   -1388, -1388,   789, -1388,   793,   795, -1388,  2152, -1388,  2155,
    2158,  1851,  1853, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388,  2162,    69,  1854, -1388,  1814, -1388, -1388, -1388,  1814,
   -1388, -1388, -1388, -1388,  1969,  1977,  1879, -1388,  1869, -1388,
   -1388,  1062, -1388,  5551, -1388, -1388, -1388,  1995, -1388,   802,
   -1388, -1388,  2173,  2178, -1388, -1388,  2181,  1876,  1588,  1588,
    1877,  1588,  1588,  2041,  2042,  1881,  2187, -1388, -1388, -1388,
    2192,  2194,  2187,  1887,  1890,    69, -1388,  1814,  1814, -1388,
    1814,  1814, -1388, -1388, -1388,   804,   851,  1892,   852,  1893,
    2006, -1388,  1897,  1898,  1907,  1908, -1388,  2195,  2205,  2187,
    2187, -1388,  2017,  2209, -1388, -1388, -1388, -1388,   388, -1388,
    1911,   854,   856,   445,  2224,   859, -1388, -1388,   -32,  2100,
     -39,   -33,  2187, -1388, -1388,  2154,  2004, -1388,  2017, -1388,
   -1388,     4, -1388, -1388, -1388,    18,   274,   874,   445,   445,
    2096, -1388, -1388, -1388, -1388, -1388, -1388,   265, -1388, -1388,
   -1388,   277, -1388,  2029, -1388, -1388, -1388, -1388,   445,    39,
    2076,  2078,  2081,  2086,  2246,  2253, -1388, -1388
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1388,  2185,   -72, -1388, -1388, -1388, -1388,  -679, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
   -1388, -1388, -1388, -1388, -1388,  1531,  1961, -1388,  -182,  -270,
   -1388, -1388, -1078, -1388, -1388, -1027, -1388, -1387, -1388,  -801,
   -1388,   879,  -979, -1388, -1388, -1047, -1388, -1388,  1875,  -214,
    -208,  1870,  -390,  1570, -1388, -1388,   563, -1388, -1388, -1388,
    1282,  1469,   392,    41, -1388, -1388, -1388,  2174,  1782, -1388,
   -1388,  -872, -1388, -1388, -1388, -1388, -1388, -1388, -1388, -1388,
    -917, -1388,  -619,   428,  2211,  1986, -1388,  1562, -1388,   753,
    -504, -1388, -1388, -1388, -1388, -1388,    44, -1388, -1388, -1388,
     782, -1388,   475, -1388,  1229,  1218, -1337, -1338, -1153, -1173,
   -1065, -1388,  -819,   415,    31,   221,  -654,  -343,  1622,  -881,
   -1388, -1388, -1388,  2167, -1388,  -257, -1388,  1614,  1103,  -878,
   -1388, -1388, -1388, -1388,  1880, -1388, -1388, -1388, -1388,  -983,
   -1388
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -572
static const yytype_int16 yytable[] =
{
     220,   718,  1052,  1388,  1066,  1168,   812,   996,   997,  1060,
    1379,  1015,   398,   479,   984,   846,   847,  1166,   635,   400,
    1384,   852,   226,   854,   371,  -401,  1377,   283,   250,   251,
     252,   253,   254,   255,  1514,   394,   226,  -403,  -402,  1554,
    1555,  1520,   913,  1850,    68,   399,  1819,   700,   903,   592,
    1565,  1566,  1699,   903,  1825,   294,   295,   401,   480,   129,
     501,   593,   392,   793,   505,   492,   300,   301,   302,   866,
     689,   886,   304,  1385,   490,   493,   822,  1822,   887,  1177,
    1178,   648,  1834,  1832,   873,   490,   880,  1568,  1189,  1190,
    1191,  1192,    76,   260,    40,    95,  1701,   105,  1200,   910,
    1054,   912,   701,  1061,   417,  1724,   481,   632,  1384,  1364,
    1392,  1426,  1427,  1400,   271,   987,   963,  1022,    42,    41,
    1437,  1438,   823,  1456,   888,   683,   424,   889,    43,   272,
    1725,  1833,  1823,  1393,    65,  1023,   250,   251,   252,   253,
     254,   255,   278,   890,    66,   633,  1193,   370,   261,   130,
    1702,   284,   891,   402,   690,  1638,  1639,  1640,  1641,  1642,
    1643,  1385,  1824,  1569,   814,    77,   402,   502,   874,  1651,
     881,   502,  1215,  1655,   988,   418,  1700,  1659,  1226,  1179,
     824,  1835,   892,  1225,  1055,  1455,   618,  1062,  1826,   256,
    1362,   904,   482,  1365,  1851,  1381,  1095,   425,  1820,  1836,
     372,   373,   374,   375,   376,   377,   378,   594,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   794,  1837,   710,    12,   284,  1065,   511,   106,    69,
    1469,   512,   825,   395,   893,   518,   522,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   820,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,  1464,   550,   551,   552,  -571,   554,   555,   556,
     557,   558,   559,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   709,  1694,  1151,  1695,   576,   577,
    1096,  1386,  1097,   581,   582,   700,   813,   256,   826,   827,
     587,   588,   589,   590,   591,   729,   830,  1167,   601,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
      99,   717,   595,   220,   720,  1479,  1515,  1516,  1747,   107,
     227,   397,  1750,  -401,  1470,   728,  1484,   257,  1838,   403,
    -298,   860,   861,   862,   227,  -403,  -402,   490,   806,  1490,
     701,  1491,    90,   867,   868,   869,   870,   700,  1844,  1447,
     815,  1631,  1522,   275,   110,  1367,  1567,   431,   432,   420,
    1846,  1495,  1207,    73,  1209,  1210,  1632,  1194,  1195,  1196,
    1782,  1783,  1496,  1784,  1785,    78,  1471,   235,   236,  1542,
    1543,  1544,  1545,  1546,  1547,  1197,   514,   515,   834,   835,
     112,  1556,  1497,   114,   404,  1560,  1808,   237,   808,  1564,
      81,  1368,   701,   239,  -266,   371,  1498,   623,   706,   937,
     938,   405,    84,   279,    91,  1499,  -298,   421,   985,  1845,
    -571,   991,   100,   240,   406,   276,   624,  1839,    67,   901,
     422,  1847,    74,   726,   727,   415,    79,  1625,  1635,   101,
     127,   733,    12,   392,  1080,  1840,  1081,    12,   416,   407,
     108,   128,    85,  1815,   102,  1500,  1809,    82,  1571,  1369,
      83,   724,   725,   702,   703,   408,   468,   116,  1841,   716,
     267,   485,   670,    92,   719,   998,    86,  1502,   675,   469,
     677,   103,  1523,  1507,   277,   111,   372,   373,   374,   375,
     376,   377,   378,   730,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,    88,  1524,    96,
     877,  1370,    97,  1809,   238,   797,   798,   516,   800,   878,
      89,   113,   625,   370,   115,   372,   373,   374,   375,   376,
     377,   378,  1810,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1811,   372,   373,   374,
     375,   376,   377,   378,  1525,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,  1723,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,  1810,
    1599,   470,   516,   118,   426,  1602,    93,  1202,   117,  1778,
     859,   268,   486,  1811,   964,   680,  1203,  1070,  1803,  1213,
    1607,  1597,    94,   972,    98,  1715,  1071,  1621,  1214,  1719,
    1598,  1616,   109,  1617,  1745,   124,  1801,  1802,   125,   471,
    1828,  1829,   297,   298,   119,   223,   628,   402,   118,   241,
     131,   914,   224,   915,   906,   907,   233,   919,   920,  1827,
     921,   249,   427,   262,   926,   681,   263,   225,   264,  1848,
     265,   927,   928,   929,   930,   428,   931,   932,   933,  1755,
     266,   242,   270,   934,   935,   269,   936,  1781,   274,   119,
     682,   279,   939,   940,   941,   281,   243,   120,  1020,  1021,
    1024,  1025,   121,   285,   244,   291,   949,   950,   951,   286,
     952,   287,   122,  1026,  1027,  1079,   245,  1028,  1027,   292,
    1679,  1767,  1768,   288,  1770,  1771,   289,   597,   598,   968,
     599,  1049,  1050,   600,   290,  1383,  1689,  1076,  1077,    68,
     981,   387,   388,   389,   390,   391,  1692,   986,   372,   373,
     374,   375,   376,   377,   378,   293,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,  1141,
    1142,  1144,  1145,   299,   246,   385,   386,   387,   388,   389,
     390,   391,    57,   306,  1152,   411,  1032,  1154,  1155,  1156,
    1430,  1431,  1222,  1050,   307,   247,  1434,  1435,   754,   755,
    1733,   372,   373,   374,   375,   376,   377,   378,   308,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1360,  1050,    58,  1397,  1398,  1084,  1462,  1463,
    1088,  1485,  1050,  1493,  1050,   309,  1093,   786,   787,    59,
    1504,  1050,  1508,  1077,   310,  1099,   248,  1517,  1518,   311,
    1105,  1106,   312,   659,   660,   661,   662,   313,   663,   788,
     789,   665,   666,   667,  1519,  1518,  1521,  1463,   671,   672,
     673,  1572,  1573,   676,  1574,  1573,  1575,  1573,   314,    60,
    1102,  1103,   315,   839,   840,   316,   843,   844,   845,  1577,
    1518,  1531,   848,   849,   850,  1153,    61,   853,   317,    62,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1579,  1580,   419,  1169,  1581,  1582,  1584,  1585,
    1172,    63,   372,   373,   374,   375,   376,   377,   378,   318,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,  1390,   372,   373,   374,   375,   376,   377,
     378,   319,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,   320,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1371,   372,   373,   374,
     375,   376,   377,   378,   321,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   322,  1401,  1587,
    1588,  1402,   384,   385,   386,   387,   388,   389,   390,   391,
    1413,  1414,  1605,  1050,  1606,  1050,  1615,  1050,  1619,  1050,
    1132,  1133,  1415,  1626,  1580,  1627,  1518,  1628,  1518,  1630,
    1582,  1422,  1423,   372,   373,   374,   375,   376,   377,   378,
     323,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1673,  1674,  1444,  1446,  1683,  1050,
    1690,  1050,   324,  1452,  1453,  1691,  1050,  1696,  1463,  1703,
    1398,  1736,  1050,   396,  1391,  1737,  1580,  1738,  1582,  1757,
    1758,  1466,  1761,  1762,   325,  1472,  1786,  1787,   372,   373,
     374,   375,   376,   377,   378,  1476,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,  1482,
     372,   373,   374,   375,   376,   377,   378,   303,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,  1788,  1789,   413,  1791,  1787,  1813,  1787,  1814,  1787,
    1033,  1817,  1818,   326,  1034,   327,  1227,  1228,  1229,  1230,
    1231,  1232,   328,  1233,   329,  1234,  1842,  1787,   330,  1235,
    1236,  1237,   414,  1238,   331,   816,   817,  1239,  1240,  1241,
    1242,  1243,   979,   980,  1450,  1451,   332,   333,  1244,   334,
     335,   336,  1035,  1245,  1246,  1036,   337,  1247,   338,   339,
     340,   341,  1248,  1249,  1250,  1251,  1252,   342,   343,  1253,
    1037,  1254,  1255,  1256,   344,   345,  1257,  1258,   346,  1259,
    1260,  1261,   347,   348,   349,  1262,  1548,  1549,  1038,   350,
    1263,   351,   352,   353,  1264,   354,  1039,   355,   356,  1265,
    1266,  1267,   357,   358,   359,   360,  1268,  1269,   721,  1270,
    1271,  1272,  1273,   361,   362,  1274,   423,  1275,  1276,  1277,
    1278,   363,  1279,   364,  1280,  1281,   365,  1282,  1283,  1284,
     366,  1285,  1286,  1287,  1288,   367,   368,   369,   429,  1289,
     734,  1290,   430,  1291,  1292,   433,  1293,  1294,  1295,  1296,
    1297,  1298,   434,  1299,  1300,  1301,  1302,  1303,  1528,  1529,
     475,  1304,   476,  1305,  1533,  1306,  1535,   477,   478,   484,
    1040,   487,  1041,   488,  1307,   494,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,   495,   489,  1315,  1316,   496,   497,  1042,
     498,  1317,   499,  1318,  1319,  1320,   500,  1321,   504,  1322,
     507,  1323,  1324,  1325,  1326,   583,   735,   533,   549,   553,
     572,   573,   574,   575,   617,   578,  1327,  1328,  1329,   579,
     580,   584,   585,   596,   620,  1330,   622,  1331,  1332,  1333,
     627,   629,   636,   637,  1334,   639,  1335,  1336,  1337,   640,
    1338,   641,   642,   643,  1339,  1340,   644,  1341,  1342,  1343,
    1344,   645,   646,   647,  1345,   373,   374,   375,   376,   377,
     378,   736,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   649,   650,  1622,   651,   652,
     653,   668,   655,   743,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,  1346,  1347,  1348,  1349,  1350,
     684,   656,   657,   664,  1093,   685,   674,   678,   679,   686,
     687,   691,   688,   692,   693,   694,   695,  1644,   696,   697,
     698,   699,  1351,  1352,  1353,  1354,  1355,  1356,   707,   712,
     714,   722,    12,   769,   783,   784,   785,  1663,  1227,  1228,
    1229,  1230,  1231,  1232,  1667,  1233,   790,  1234,   791,   792,
     -53,  1235,  1236,  1237,   799,  1238,   802,  1676,  1677,  1239,
    1240,  1241,  1242,  1243,   803,   804,   391,   809,   810,   807,
    1244,   811,   818,   819,   821,  1245,  1246,   828,   831,  1247,
     841,   832,   833,   836,  1248,  1249,  1250,  1251,  1252,   855,
     856,  1253,   858,  1254,  1255,  1256,   863,   865,  1257,  1258,
     876,  1259,  1260,  1261,   879,   857,   882,  1262,   883,   885,
     875,   898,  1263,   884,   902,   899,  1264,   908,   923,   918,
     942,  1265,  1266,  1267,   903,   943,   944,   945,  1268,  1269,
     946,  1270,  1271,  1272,  1273,   947,   948,  1274,   956,  1494,
    1276,  1277,  1278,   953,  1279,   954,  1280,  1281,   955,  1282,
    1283,  1284,   957,  1285,  1286,  1287,  1288,   958,   959,   960,
     -55,  1289,   973,  1290,   961,  1291,  1292,   962,  1293,  1294,
    1295,  1296,  1297,  1298,   975,  1299,  1300,  1301,  1302,  1303,
     977,   982,   983,  1304,  1016,  1305,   992,  1306,   993,   994,
     995,  1017,  1031,  1018,  1019,  1029,  1307,  1044,  1308,  1309,
    1310,  1311,  1312,  1313,  1314,  1053,  1030,  1315,  1316,  1045,
    1046,  1051,  1047,  1317,  1048,  1318,  1319,  1320,  1056,  1321,
    1059,  1322,  1063,  1323,  1324,  1325,  1326,  1058,  1064,  1067,
    1068,  1069,  1074,  1072,  1078,  1073,  1085,  1089,  1327,  1328,
    1329,  1075,  1090,  1091,  1158,  1159,  1107,  1330,  1126,  1331,
    1332,  1333,  1161,  1165,  1175,  1180,  1334,  1127,  1335,  1336,
    1337,  1181,  1338,  1108,  1120,  1121,  1339,  1340,  1125,  1341,
    1342,  1343,  1344,  1128,  1129,  1186,  1345,   372,   373,   374,
     375,   376,   377,   378,  1130,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   374,   375,
     376,   377,   378,  1131,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,  1346,  1347,  1348,
    1349,  1350,   372,   373,   374,   375,   376,   377,   378,  1149,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,  1140,  1351,  1352,  1353,  1354,  1355,  1356,
    1227,  1228,  1229,  1230,  1231,  1232,  1143,  1233,  1185,  1234,
    1146,  1188,  1150,  1235,  1236,  1237,  1162,  1238,  1157,  1198,
    1163,  1239,  1240,  1241,  1242,  1243,  1164,  1170,  1173,  1174,
    1182,  1183,  1244,  1184,  1187,  1199,  1204,  1245,  1246,  1201,
    1205,  1247,  1206,  1208,  1211,  1216,  1248,  1249,  1250,  1251,
    1252,  1217,  1218,  1253,  1219,  1254,  1255,  1256,  1220,  1221,
    1257,  1258,  1224,  1259,  1260,  1261,  1358,  1363,  1223,  1262,
    1359,  1361,  1375,  1372,  1263,  1373,  1374,  1395,  1264,  1378,
    1389,  1396,  1429,  1265,  1266,  1267,  1424,  1433,  1439,  1440,
    1268,  1269,  1448,  1270,  1271,  1272,  1273,  1441,  1442,  1274,
    1443,  1600,  1276,  1277,  1278,  1454,  1279,  1458,  1280,  1281,
    1460,  1282,  1283,  1284,  1465,  1285,  1286,  1287,  1288,  1467,
    1468,  1473,  1474,  1289,  1475,  1290,  1478,  1291,  1292,  1480,
    1293,  1294,  1295,  1296,  1297,  1298,  1481,  1299,  1300,  1301,
    1302,  1303,  1483,  1489,  1486,  1304,  1487,  1305,  1492,  1306,
    1506,  1488,  1501,  1510,  1503,  1505,  1509,  1511,  1307,  1512,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,  1526,  1536,  1315,
    1316,  1530,  1551,  1552,  1557,  1317,  1558,  1318,  1319,  1320,
    1559,  1321,  1561,  1322,  1562,  1323,  1324,  1325,  1326,  1576,
    1563,  1578,  1583,  1589,  1591,  1590,  1604,  1593,  1594,  1595,
    1327,  1328,  1329,  1614,  1629,  1618,  1623,  1624,  1633,  1330,
    1634,  1331,  1332,  1333,  1636,   904,  1645,  1648,  1334,  1647,
    1335,  1336,  1337,  1649,  1338,  1650,  1653,  1654,  1339,  1340,
     744,  1341,  1342,  1343,  1344,  1657,  1658,  1660,  1345,   372,
     373,   374,   375,   376,   377,   378,  1661,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
    1662,  1664,  1666,  1668,  1669,  1670,  1671,  1678,  1682,  1672,
    1675,  1684,  1685,  1686,  1687,   745,  1688,  1697,  1698,  1346,
    1347,  1348,  1349,  1350,   372,   373,   374,   375,   376,   377,
     378,  1704,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,  1705,  1351,  1352,  1353,  1354,
    1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,  1706,  1233,
    1707,  1234,  1708,  1712,  1709,  1235,  1236,  1237,  1714,  1238,
    1711,  1716,  1717,  1239,  1240,  1241,  1242,  1243,  1718,  1720,
    1721,  1728,  1722,  1726,  1244,  1739,  1729,  1730,  1740,  1245,
    1246,  1741,  1742,  1247,  1743,  1744,  1753,  1746,  1248,  1249,
    1250,  1251,  1252,  1760,  1754,  1253,  1763,  1254,  1255,  1256,
    1756,  1764,  1257,  1258,  1765,  1259,  1260,  1261,  1766,  1769,
    1774,  1262,  1772,  1773,  1518,  1776,  1263,  1777,  1799,  1779,
    1264,  1793,  1780,  1790,  1792,  1265,  1266,  1267,  1800,  1794,
    1795,  1804,  1268,  1269,  1807,  1270,  1271,  1272,  1273,  1796,
    1797,  1274,  1812,  1603,  1276,  1277,  1278,  1816,  1279,  1821,
    1280,  1281,  1819,  1282,  1283,  1284,  1830,  1285,  1286,  1287,
    1288,  1843,  1849,  1854,  1852,  1289,  1853,  1290,  1855,  1291,
    1292,  1856,  1293,  1294,  1295,  1296,  1297,  1298,  1857,  1299,
    1300,  1301,  1302,  1303,   234,   513,   925,  1304,  1527,  1305,
     619,  1306,   631,  1171,   282,   897,   711,   976,   126,   506,
    1307,   911,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1637,
    1620,  1315,  1316,  1831,  1366,  1382,   851,  1317,   296,  1318,
    1319,  1320,   864,  1321,  1477,  1322,     0,  1323,  1324,  1325,
    1326,     0,   654,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1327,  1328,  1329,     0,     0,     0,     0,     0,
       0,  1330,     0,  1331,  1332,  1333,     0,     0,     0,     0,
    1334,     0,  1335,  1336,  1337,     0,  1338,     0,     0,     0,
    1339,  1340,   746,  1341,  1342,  1343,  1344,     0,     0,     0,
    1345,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   748,     0,     0,
       0,  1346,  1347,  1348,  1349,  1350,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,  1351,  1352,
    1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,
       0,  1233,     0,  1234,     0,     0,     0,  1235,  1236,  1237,
       0,  1238,     0,     0,     0,  1239,  1240,  1241,  1242,  1243,
       0,     0,     0,     0,     0,     0,  1244,     0,     0,     0,
       0,  1245,  1246,     0,     0,  1247,     0,     0,     0,     0,
    1248,  1249,  1250,  1251,  1252,     0,     0,  1253,     0,  1254,
    1255,  1256,     0,     0,  1257,  1258,     0,  1259,  1260,  1261,
       0,     0,     0,  1262,     0,     0,     0,     0,  1263,     0,
       0,     0,  1264,     0,     0,     0,     0,  1265,  1266,  1267,
       0,     0,     0,     0,  1268,  1269,     0,  1270,  1271,  1272,
    1273,     0,     0,  1274,     0,  1608,  1276,  1277,  1278,     0,
    1279,     0,  1280,  1281,     0,  1282,  1283,  1284,     0,  1285,
    1286,  1287,  1288,     0,     0,     0,     0,  1289,     0,  1290,
       0,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,
       0,  1299,  1300,  1301,  1302,  1303,     0,     0,     0,  1304,
       0,  1305,     0,  1306,     0,     0,     0,     0,     0,     0,
       0,     0,  1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,     0,     0,  1315,  1316,     0,     0,     0,     0,  1317,
       0,  1318,  1319,  1320,     0,  1321,     0,  1322,     0,  1323,
    1324,  1325,  1326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1327,  1328,  1329,     0,     0,     0,
       0,     0,     0,  1330,     0,  1331,  1332,  1333,     0,     0,
       0,     0,  1334,     0,  1335,  1336,  1337,     0,  1338,     0,
       0,     0,  1339,  1340,   749,  1341,  1342,  1343,  1344,     0,
       0,     0,  1345,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
       0,     0,     0,  1346,  1347,  1348,  1349,  1350,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
    1351,  1352,  1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,
    1231,  1232,     0,  1233,     0,  1234,     0,     0,     0,  1235,
    1236,  1237,     0,  1238,     0,     0,     0,  1239,  1240,  1241,
    1242,  1243,     0,     0,     0,     0,     0,     0,  1244,     0,
       0,     0,     0,  1245,  1246,     0,     0,  1247,     0,     0,
       0,     0,  1248,  1249,  1250,  1251,  1252,     0,     0,  1253,
       0,  1254,  1255,  1256,     0,     0,  1257,  1258,     0,  1259,
    1260,  1261,     0,     0,     0,  1262,     0,     0,     0,     0,
    1263,     0,     0,     0,  1264,     0,     0,     0,     0,  1265,
    1266,  1267,     0,     0,     0,     0,  1268,  1269,     0,  1270,
    1271,  1272,  1273,     0,     0,  1274,     0,  1609,  1276,  1277,
    1278,     0,  1279,     0,  1280,  1281,     0,  1282,  1283,  1284,
       0,  1285,  1286,  1287,  1288,     0,     0,     0,     0,  1289,
       0,  1290,     0,  1291,  1292,     0,  1293,  1294,  1295,  1296,
    1297,  1298,     0,  1299,  1300,  1301,  1302,  1303,     0,     0,
       0,  1304,     0,  1305,     0,  1306,     0,     0,     0,     0,
       0,     0,     0,     0,  1307,     0,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,     0,     0,  1315,  1316,     0,     0,     0,
       0,  1317,     0,  1318,  1319,  1320,     0,  1321,     0,  1322,
       0,  1323,  1324,  1325,  1326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1327,  1328,  1329,     0,
       0,     0,     0,     0,     0,  1330,     0,  1331,  1332,  1333,
       0,     0,     0,     0,  1334,     0,  1335,  1336,  1337,     0,
    1338,     0,     0,     0,  1339,  1340,   756,  1341,  1342,  1343,
    1344,     0,     0,     0,  1345,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   758,     0,     0,     0,  1346,  1347,  1348,  1349,  1350,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,  1351,  1352,  1353,  1354,  1355,  1356,  1227,  1228,
    1229,  1230,  1231,  1232,     0,  1233,     0,  1234,     0,     0,
       0,  1235,  1236,  1237,     0,  1238,     0,     0,     0,  1239,
    1240,  1241,  1242,  1243,     0,     0,     0,     0,     0,     0,
    1244,     0,     0,     0,     0,  1245,  1246,     0,     0,  1247,
       0,     0,     0,     0,  1248,  1249,  1250,  1251,  1252,     0,
       0,  1253,     0,  1254,  1255,  1256,     0,     0,  1257,  1258,
       0,  1259,  1260,  1261,     0,     0,     0,  1262,     0,     0,
       0,     0,  1263,     0,     0,     0,  1264,     0,     0,     0,
       0,  1265,  1266,  1267,     0,     0,     0,     0,  1268,  1269,
       0,  1270,  1271,  1272,  1273,     0,     0,  1274,     0,  1610,
    1276,  1277,  1278,     0,  1279,     0,  1280,  1281,     0,  1282,
    1283,  1284,     0,  1285,  1286,  1287,  1288,     0,     0,     0,
       0,  1289,     0,  1290,     0,  1291,  1292,     0,  1293,  1294,
    1295,  1296,  1297,  1298,     0,  1299,  1300,  1301,  1302,  1303,
       0,     0,     0,  1304,     0,  1305,     0,  1306,     0,     0,
       0,     0,     0,     0,     0,     0,  1307,     0,  1308,  1309,
    1310,  1311,  1312,  1313,  1314,     0,     0,  1315,  1316,     0,
       0,     0,     0,  1317,     0,  1318,  1319,  1320,     0,  1321,
       0,  1322,     0,  1323,  1324,  1325,  1326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1327,  1328,
    1329,     0,     0,     0,     0,     0,     0,  1330,     0,  1331,
    1332,  1333,     0,     0,     0,     0,  1334,     0,  1335,  1336,
    1337,     0,  1338,     0,     0,     0,  1339,  1340,   763,  1341,
    1342,  1343,  1344,     0,     0,     0,  1345,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,  1346,  1347,  1348,
    1349,  1350,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,  1351,  1352,  1353,  1354,  1355,  1356,
    1227,  1228,  1229,  1230,  1231,  1232,     0,  1233,     0,  1234,
       0,     0,     0,  1235,  1236,  1237,     0,  1238,     0,     0,
       0,  1239,  1240,  1241,  1242,  1243,     0,     0,     0,     0,
       0,     0,  1244,     0,     0,     0,     0,  1245,  1246,     0,
       0,  1247,     0,     0,     0,     0,  1248,  1249,  1250,  1251,
    1252,     0,     0,  1253,     0,  1254,  1255,  1256,     0,     0,
    1257,  1258,     0,  1259,  1260,  1261,     0,     0,     0,  1262,
       0,     0,     0,     0,  1263,     0,     0,     0,  1264,     0,
       0,     0,     0,  1265,  1266,  1267,     0,     0,     0,     0,
    1268,  1269,     0,  1270,  1271,  1272,  1273,     0,     0,  1274,
       0,  1611,  1276,  1277,  1278,     0,  1279,     0,  1280,  1281,
       0,  1282,  1283,  1284,     0,  1285,  1286,  1287,  1288,     0,
       0,     0,     0,  1289,     0,  1290,     0,  1291,  1292,     0,
    1293,  1294,  1295,  1296,  1297,  1298,     0,  1299,  1300,  1301,
    1302,  1303,     0,     0,     0,  1304,     0,  1305,     0,  1306,
       0,     0,     0,     0,     0,     0,     0,     0,  1307,     0,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,     0,     0,  1315,
    1316,     0,     0,     0,     0,  1317,     0,  1318,  1319,  1320,
       0,  1321,     0,  1322,     0,  1323,  1324,  1325,  1326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1327,  1328,  1329,     0,     0,     0,     0,     0,     0,  1330,
       0,  1331,  1332,  1333,     0,     0,     0,     0,  1334,     0,
    1335,  1336,  1337,     0,  1338,     0,     0,     0,  1339,  1340,
     765,  1341,  1342,  1343,  1344,     0,     0,     0,  1345,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   766,     0,     0,     0,  1346,
    1347,  1348,  1349,  1350,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,  1351,  1352,  1353,  1354,
    1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,  1233,
       0,  1234,     0,     0,     0,  1235,  1236,  1237,     0,  1238,
       0,     0,     0,  1239,  1240,  1241,  1242,  1243,     0,     0,
       0,     0,     0,     0,  1244,     0,     0,     0,     0,  1245,
    1246,     0,     0,  1247,     0,     0,     0,     0,  1248,  1249,
    1250,  1251,  1252,     0,     0,  1253,     0,  1254,  1255,  1256,
       0,     0,  1257,  1258,     0,  1259,  1260,  1261,     0,     0,
       0,  1262,     0,     0,     0,     0,  1263,     0,     0,     0,
    1264,     0,     0,     0,     0,  1265,  1266,  1267,     0,     0,
       0,     0,  1268,  1269,     0,  1270,  1271,  1272,  1273,     0,
       0,  1274,     0,  1612,  1276,  1277,  1278,     0,  1279,     0,
    1280,  1281,     0,  1282,  1283,  1284,     0,  1285,  1286,  1287,
    1288,     0,     0,     0,     0,  1289,     0,  1290,     0,  1291,
    1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,     0,  1299,
    1300,  1301,  1302,  1303,     0,     0,     0,  1304,     0,  1305,
       0,  1306,     0,     0,     0,     0,     0,     0,     0,     0,
    1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,     0,
       0,  1315,  1316,     0,     0,     0,     0,  1317,     0,  1318,
    1319,  1320,     0,  1321,     0,  1322,     0,  1323,  1324,  1325,
    1326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1327,  1328,  1329,     0,     0,     0,     0,     0,
       0,  1330,     0,  1331,  1332,  1333,     0,     0,     0,     0,
    1334,     0,  1335,  1336,  1337,     0,  1338,     0,     0,     0,
    1339,  1340,   778,  1341,  1342,  1343,  1344,     0,     0,     0,
    1345,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   779,     0,     0,
       0,  1346,  1347,  1348,  1349,  1350,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,  1351,  1352,
    1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,
       0,  1233,     0,  1234,     0,     0,     0,  1235,  1236,  1237,
       0,  1238,     0,     0,     0,  1239,  1240,  1241,  1242,  1243,
       0,     0,     0,     0,     0,     0,  1244,     0,     0,     0,
       0,  1245,  1246,     0,     0,  1247,     0,     0,     0,     0,
    1248,  1249,  1250,  1251,  1252,     0,     0,  1253,     0,  1254,
    1255,  1256,     0,     0,  1257,  1258,     0,  1259,  1260,  1261,
       0,     0,     0,  1262,     0,     0,     0,     0,  1263,     0,
       0,     0,  1264,     0,     0,     0,     0,  1265,  1266,  1267,
       0,     0,     0,     0,  1268,  1269,     0,  1270,  1271,  1272,
    1273,     0,     0,  1274,     0,  1613,  1276,  1277,  1278,     0,
    1279,     0,  1280,  1281,     0,  1282,  1283,  1284,     0,  1285,
    1286,  1287,  1288,     0,     0,     0,     0,  1289,     0,  1290,
       0,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,
       0,  1299,  1300,  1301,  1302,  1303,     0,     0,     0,  1304,
       0,  1305,     0,  1306,     0,     0,     0,     0,     0,     0,
       0,     0,  1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,     0,     0,  1315,  1316,     0,     0,     0,     0,  1317,
       0,  1318,  1319,  1320,     0,  1321,     0,  1322,     0,  1323,
    1324,  1325,  1326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1327,  1328,  1329,     0,     0,     0,
       0,     0,     0,  1330,     0,  1331,  1332,  1333,     0,     0,
       0,     0,  1334,     0,  1335,  1336,  1337,     0,  1338,     0,
       0,     0,  1339,  1340,   780,  1341,  1342,  1343,  1344,     0,
       0,     0,  1345,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   782,
       0,     0,     0,  1346,  1347,  1348,  1349,  1350,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
    1351,  1352,  1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,
    1231,  1232,     0,  1233,     0,  1234,     0,     0,     0,  1235,
    1236,  1237,     0,  1238,     0,     0,     0,  1239,  1240,  1241,
    1242,  1243,     0,     0,     0,     0,     0,     0,  1244,     0,
       0,     0,     0,  1245,  1246,     0,     0,  1247,     0,     0,
       0,     0,  1248,  1249,  1250,  1251,  1252,     0,     0,  1253,
       0,  1254,  1255,  1256,     0,     0,  1257,  1258,     0,  1259,
    1260,  1261,     0,     0,     0,  1262,     0,     0,     0,     0,
    1263,     0,     0,     0,  1264,     0,     0,     0,     0,  1265,
    1266,  1267,     0,     0,     0,     0,  1268,  1269,     0,  1270,
    1271,  1272,  1273,     0,     0,  1274,     0,  1680,  1276,  1277,
    1278,     0,  1279,     0,  1280,  1281,     0,  1282,  1283,  1284,
       0,  1285,  1286,  1287,  1288,     0,     0,     0,     0,  1289,
       0,  1290,     0,  1291,  1292,     0,  1293,  1294,  1295,  1296,
    1297,  1298,     0,  1299,  1300,  1301,  1302,  1303,     0,     0,
       0,  1304,     0,  1305,     0,  1306,     0,     0,     0,     0,
       0,     0,     0,     0,  1307,     0,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,     0,     0,  1315,  1316,     0,     0,     0,
       0,  1317,     0,  1318,  1319,  1320,     0,  1321,     0,  1322,
       0,  1323,  1324,  1325,  1326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1327,  1328,  1329,     0,
       0,     0,     0,     0,     0,  1330,     0,  1331,  1332,  1333,
       0,     0,     0,     0,  1334,     0,  1335,  1336,  1337,     0,
    1338,     0,     0,     0,  1339,  1340,  1112,  1341,  1342,  1343,
    1344,     0,     0,     0,  1345,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1113,     0,     0,     0,  1346,  1347,  1348,  1349,  1350,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,  1351,  1352,  1353,  1354,  1355,  1356,  1227,  1228,
    1229,  1230,  1231,  1232,     0,  1233,     0,  1234,     0,     0,
       0,  1235,  1236,  1237,     0,  1238,     0,     0,     0,  1239,
    1240,  1241,  1242,  1243,     0,     0,     0,     0,     0,     0,
    1244,     0,     0,     0,     0,  1245,  1246,     0,     0,  1247,
       0,     0,     0,     0,  1248,  1249,  1250,  1251,  1252,     0,
       0,  1253,     0,  1254,  1255,  1256,     0,     0,  1257,  1258,
       0,  1259,  1260,  1261,     0,     0,     0,  1262,     0,     0,
       0,     0,  1263,     0,     0,     0,  1264,     0,     0,     0,
       0,  1265,  1266,  1267,     0,     0,     0,     0,  1268,  1269,
       0,  1270,  1271,  1272,  1273,     0,     0,  1274,     0,  1681,
    1276,  1277,  1278,     0,  1279,     0,  1280,  1281,     0,  1282,
    1283,  1284,     0,  1285,  1286,  1287,  1288,     0,     0,     0,
       0,  1289,     0,  1290,     0,  1291,  1292,     0,  1293,  1294,
    1295,  1296,  1297,  1298,     0,  1299,  1300,  1301,  1302,  1303,
       0,     0,     0,  1304,     0,  1305,     0,  1306,     0,     0,
       0,     0,     0,     0,     0,     0,  1307,     0,  1308,  1309,
    1310,  1311,  1312,  1313,  1314,     0,     0,  1315,  1316,     0,
       0,     0,     0,  1317,     0,  1318,  1319,  1320,     0,  1321,
       0,  1322,     0,  1323,  1324,  1325,  1326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1327,  1328,
    1329,     0,     0,     0,     0,     0,     0,  1330,     0,  1331,
    1332,  1333,     0,     0,     0,     0,  1334,     0,  1335,  1336,
    1337,     0,  1338,     0,     0,     0,  1339,  1340,  1124,  1341,
    1342,  1343,  1344,     0,     0,     0,  1345,     0,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1134,     0,     0,     0,  1346,  1347,  1348,
    1349,  1350,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,  1351,  1352,  1353,  1354,  1355,  1356,
    1227,  1228,  1229,  1230,  1231,  1232,     0,  1233,     0,  1234,
       0,     0,     0,  1235,  1236,  1237,     0,  1238,     0,     0,
       0,  1239,  1240,  1241,  1242,  1243,     0,     0,     0,     0,
       0,     0,  1244,     0,     0,     0,     0,  1245,  1246,     0,
       0,  1247,     0,     0,     0,     0,  1248,  1249,  1250,  1251,
    1252,     0,     0,  1253,     0,  1254,  1255,  1256,     0,     0,
    1257,  1258,     0,  1259,  1260,  1261,     0,     0,     0,  1262,
       0,     0,     0,     0,  1263,     0,     0,     0,  1264,     0,
       0,  1100,     0,  1265,  1266,  1267,     0,     0,     0,     0,
    1268,  1269,     0,  1270,  1271,  1272,  1273,     0,     0,  1274,
       0,  1734,  1276,  1277,  1278,     0,  1279,     0,  1280,  1281,
       0,  1282,  1283,  1284,     0,  1285,  1286,  1287,  1288,     0,
       0,     0,     0,  1289,     0,  1290,     0,  1291,  1292,     0,
    1293,  1294,  1295,  1296,  1297,  1298,     0,  1299,  1300,  1301,
    1302,  1303,     0,     0,     0,  1304,     0,  1305,     0,  1306,
       0,     0,     0,     0,     0,     0,     0,     0,  1307,     0,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,     0,     0,  1315,
    1316,     0,     0,     0,     0,  1317,     0,  1318,  1319,  1320,
       0,  1321,     0,  1322,     0,  1323,  1324,  1325,  1326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   767,
    1327,  1328,  1329,     0,     0,     0,     0,     0,     0,  1330,
       0,  1331,  1332,  1333,     0,     0,     0,     0,  1334,     0,
    1335,  1336,  1337,     0,  1338,     0,     0,     0,  1339,  1340,
     768,  1341,  1342,  1343,  1344,     0,     0,     0,  1345,     0,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1101,     0,     0,     0,     0,  1346,
    1347,  1348,  1349,  1350,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,  1351,  1352,  1353,  1354,
    1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,     0,  1233,
       0,  1234,     0,     0,     0,  1235,  1236,  1237,     0,  1238,
       0,     0,     0,  1239,  1240,  1241,  1242,  1243,     0,     0,
       0,     0,     0,     0,  1244,     0,     0,     0,     0,  1245,
    1246,     0,     0,  1247,     0,     0,     0,     0,  1248,  1249,
    1250,  1251,  1252,     0,     0,  1253,     0,  1254,  1255,  1256,
       0,     0,  1257,  1258,     0,  1259,  1260,  1261,     0,     0,
       0,  1262,     0,     0,     0,     0,  1263,     0,     0,     0,
    1264,     0,     0,     0,     0,  1265,  1266,  1267,     0,     0,
       0,     0,  1268,  1269,     0,  1270,  1271,  1272,  1273,     0,
       0,  1274,     0,  1735,  1276,  1277,  1278,     0,  1279,     0,
    1280,  1281,     0,  1282,  1283,  1284,     0,  1285,  1286,  1287,
    1288,     0,     0,     0,     0,  1289,     0,  1290,     0,  1291,
    1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,     0,  1299,
    1300,  1301,  1302,  1303,     0,     0,     0,  1304,     0,  1305,
       0,  1306,     0,     0,     0,     0,     0,     0,     0,     0,
    1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,  1314,     0,
       0,  1315,  1316,     0,     0,     0,     0,  1317,     0,  1318,
    1319,  1320,     0,  1321,     0,  1322,     0,  1323,  1324,  1325,
    1326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1327,  1328,  1329,     0,     0,     0,     0,     0,
       0,  1330,     0,  1331,  1332,  1333,     0,     0,     0,     0,
    1334,     0,  1335,  1336,  1337,     0,  1338,     0,     0,     0,
    1339,  1340,   586,  1341,  1342,  1343,  1344,     0,     0,     0,
    1345,     0,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,  1346,  1347,  1348,  1349,  1350,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,  1351,  1352,
    1353,  1354,  1355,  1356,  1227,  1228,  1229,  1230,  1231,  1232,
       0,  1233,     0,  1234,     0,     0,     0,  1235,  1236,  1237,
       0,  1238,     0,     0,     0,  1239,  1240,  1241,  1242,  1243,
       0,     0,     0,     0,     0,     0,  1244,     0,     0,     0,
       0,  1245,  1246,     0,     0,  1247,     0,     0,     0,     0,
    1248,  1249,  1250,  1251,  1252,     0,     0,  1253,     0,  1254,
    1255,  1256,     0,     0,  1257,  1258,     0,  1259,  1260,  1261,
       0,     0,     0,  1262,     0,     0,     0,     0,  1263,     0,
       0,     0,  1264,     0,     0,     0,     0,  1265,  1266,  1267,
       0,     0,     0,     0,  1268,  1269,     0,  1270,  1271,  1272,
    1273,     0,     0,  1274,     0,  1759,  1276,  1277,  1278,     0,
    1279,     0,  1280,  1281,     0,  1282,  1283,  1284,     0,  1285,
    1286,  1287,  1288,     0,     0,     0,     0,  1289,     0,  1290,
       0,  1291,  1292,     0,  1293,  1294,  1295,  1296,  1297,  1298,
       0,  1299,  1300,  1301,  1302,  1303,     1,     0,     0,  1304,
       2,  1305,     0,  1306,     0,     0,     0,     0,     0,     0,
       0,     0,  1307,     0,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,     0,     3,  1315,  1316,     0,     0,     4,     0,  1317,
       0,  1318,  1319,  1320,     0,  1321,     0,  1322,     0,  1323,
    1324,  1325,  1326,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     0,  1327,  1328,  1329,     0,     0,     0,
       0,     0,     0,  1330,     0,  1331,  1332,  1333,     0,     0,
       0,     0,  1334,     0,  1335,  1336,  1337,     0,  1338,     0,
       0,     0,  1339,  1340,   737,  1341,  1342,  1343,  1344,     0,
       0,     0,  1345,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,    44,     0,     0,
       0,   138,   139,     0,     0,     0,     0,     0,   738,   140,
     141,     0,     0,  1346,  1347,  1348,  1349,  1350,     0,   142,
       0,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
    1351,  1352,  1353,  1354,  1355,  1356,   143,     0,    11,    12,
       0,   144,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,    13,    45,     0,    14,     0,     0,     0,    46,
     147,     0,    15,     0,   148,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,   150,     0,
     132,   133,   134,   135,   136,   137,     0,     0,     0,     0,
      49,     0,     0,     0,   138,   139,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   151,    50,     0,     0,
      51,     0,     0,   152,   153,     0,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,     0,   519,     0,     0,     0,     0,     0,     0,   143,
       0,    54,     0,     0,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,   520,     0,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,   150,   138,   139,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     602,     0,   603,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,   143,     0,     0,
       0,     0,   144,     0,   521,   145,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   739,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   740,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,   219,   150,
     132,   133,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   372,   373,   374,   375,
     376,   377,   378,   604,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,     0,   605,     0,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,   150,   138,   139,     0,     0,     0,     0,     0,     0,
     140,   560,     0,     0,     0,   741,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   303,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,   219,   150,
       0,     0,   132,   133,   134,   135,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,   742,     0,
       0,     0,     0,     0,   140,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,     0,     0,   145,
     146,     0,     0,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   732,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,     0,   219,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,   150,     0,     0,     0,     0,   747,   140,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,  1087,     0,     0,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,     0,   193,
       0,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,     0,     0,   150,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   751,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,   752,     0,     0,     0,     0,     0,   140,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,   753,     0,
     144,     0,     0,   145,   146,     0,     0,     0,   132,   133,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,     0,     0,  1092,     0,     0,     0,
     140,     0,     0,     0,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   144,     0,     0,   145,   146,     0,     0,     0,
     132,   133,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,   150,  1532,     0,
       0,     0,   140,   372,   373,   374,   375,   376,   377,   378,
     757,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,     0,     0,
       0,   759,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   723,     0,     0,     0,   150,
    1534,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     917,   150,     0,     0,   219,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,     0,   219,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,   219,   132,
     133,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   760,     0,     0,     0,     0,
       0,   140,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,     0,     0,   145,   146,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,   372,   373,   374,   375,   376,   377,   378,
     150,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     0,     0,     0,     0,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,   373,   374,
     375,   376,   377,   378,   761,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
     770,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,   771,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,   772,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,   773,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,   372,   373,
     374,   375,   376,   377,   378,   774,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,   775,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,   776,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,   777,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,   781,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
    1104,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,   372,   373,
     374,   375,   376,   377,   378,  1109,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,  1110,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,  1111,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,  1114,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,   372,   373,   374,   375,   376,   377,   378,
    1115,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,  1116,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,  1117,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,  1118,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,  1119,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,  1122,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,  1123,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,  1135,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,  1136,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
    1212,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,   373,   374,   375,   376,   377,
     378,  1403,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,  1457,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,  1513,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,   372,   373,
     374,   375,   376,   377,   378,  1537,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,  1538,     0,     0,   999,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1000,     0,  1539,     0,  1001,
       0,     0,  1002,     0,  1003,     0,     0,  1004,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1540,     0,
       0,     0,  1005,     0,     0,     0,     0,     0,     0,  1006,
    1007,     0,   372,   373,   374,   375,   376,   377,   378,  1541,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,  1008,     0,     0,     0,     0,     0,
    1550,     0,     0,     0,     0,   999,     0,     0,     0,     0,
       0,  1009,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1586,     0,     0,     0,  1001,     0,     0,  1002,     0,
    1003,     0,     0,  1004,     0,     0,     0,     0,     0,     0,
       0,     0,  1592,  1010,     0,     0,  1404,  1405,  1005,     0,
       0,  1406,     0,  1407,     0,  1006,  1007,     0,     0,     0,
       0,   435,   436,  1596,   437,  1011,   438,   439,     0,     0,
       0,     0,     0,  1012,     0,     0,     0,     0,     0,     0,
    1008,     0,   440,     0,  1408,  1409,     0,  1410,  1601,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   441,   442,   443,   444,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,  1013,  1693,     0,     0,  1010,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,  1710,   448,     0,
       0,  1011,     0,     0,     0,     0,   449,     0,     0,  1012,
       0,     0,     0,   450,     0,     0,   451,     0,  1731,   452,
     453,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   454,     0,     0,     0,
    1732,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1411,  1412,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1013,     0,   455,   456,     0,   457,   458,     0,     0,
       0,     0,   459,     0,   460,     0,     0,     0,     0,   461,
     462,     0,     0,     0,     0,   463,     0,     0,     0,     0,
       0,   464,     0,   465,     0,     0,     0,     0,   466,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,  1384,     0,     0,     0,     0,     0,     0,     0,     0,
     371,     0,     0,     0,   922,     0,     0,   372,   373,   374,
     375,   376,   377,   378,   916,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,     0,
       0,     0,     0,     0,     0,  1098,     0,     0,   392,     0,
       0,     0,     0,     0,  1385,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,   372,
     373,   374,   375,   376,   377,   378,   762,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,   372,   373,   374,   375,   376,   377,   378,   801,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,   372,   373,   374,   375,   376,
     377,   378,   967,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  -572,  -572,  -572,  -572,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391
};

static const yytype_int16 yycheck[] =
{
      72,   505,   874,  1081,   885,   984,    20,   826,   827,   881,
    1075,   830,   226,   270,   815,   669,   670,    20,   408,   227,
      39,   675,     3,   677,     3,     3,  1073,   115,     3,     4,
       5,     6,     7,     8,  1372,   115,     3,     3,     3,  1426,
    1427,  1378,   721,     4,     8,   227,    78,   132,   170,     6,
    1437,  1438,    87,   170,    87,   127,   128,   204,    87,     3,
     204,    18,    41,     6,   204,   227,   138,   139,   140,     3,
     227,    61,   144,    92,   234,   283,    68,   116,    68,   996,
     997,   424,    64,    79,   227,   234,   227,   237,     4,     5,
       6,     7,     3,   118,   190,    51,   175,     3,  1015,   718,
     227,   720,   187,   227,     3,   196,   135,   148,    39,   227,
       3,  1138,  1139,  1096,    34,   168,   795,   222,   215,   215,
    1147,  1148,   114,  1170,   114,   468,     3,   117,     3,    49,
     221,   127,   171,    26,   215,   240,     3,     4,     5,     6,
       7,     8,    98,   133,   215,   186,    62,   219,   173,    93,
     229,   313,   142,   313,   311,  1542,  1543,  1544,  1545,  1546,
    1547,    92,   201,   313,   313,    76,   313,   311,   311,  1556,
     311,   311,  1044,  1560,   227,    74,   211,  1564,  1056,   998,
     172,   163,   172,  1055,   311,  1168,   394,   311,   221,   164,
    1062,   313,   221,   311,   155,  1076,   313,    74,   230,   181,
      10,    11,    12,    13,    14,    15,    16,   164,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   164,   204,   493,   205,   313,   311,   299,   134,   193,
      68,   303,   224,   313,   224,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   636,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,  1179,   335,   336,   337,    41,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   492,  1623,   965,  1624,   360,   361,
     909,   310,   911,   365,   366,   132,   310,   164,   641,   642,
     372,   373,   374,   375,   376,   115,   649,   310,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       3,   503,   279,   395,   506,  1203,  1373,  1374,  1715,     3,
     311,   310,  1719,   311,   172,   517,  1214,   312,    64,    66,
     227,   684,   685,   686,   311,   311,   311,   234,   618,  1221,
     187,  1223,     3,   287,   288,   289,   290,   132,    93,  1160,
     630,     5,    38,     3,     3,    68,  1444,   312,   313,     3,
      93,  1249,  1026,   215,  1028,  1029,    20,   293,   294,   295,
    1767,  1768,  1260,  1770,  1771,     0,   224,    44,    45,  1416,
    1417,  1418,  1419,  1420,  1421,   311,   104,   105,   655,   656,
       3,  1428,  1280,     3,   131,  1432,    18,    64,   622,  1436,
       3,   114,   187,    80,   141,     3,  1294,   113,   490,   762,
     763,   148,   311,   310,    75,  1303,   313,    61,   818,   164,
     205,   821,   115,   100,   161,    75,   132,   163,    10,   709,
      74,   164,    14,   515,   516,    61,   309,  1512,  1526,   132,
       9,   523,   205,    41,     3,   181,     5,   205,    74,   186,
     134,    20,   187,    18,   147,  1343,    78,     3,  1447,   172,
       3,   104,   105,   310,   311,   202,     3,     3,   204,   232,
       3,     3,   451,   134,   232,   828,   134,  1359,   457,    16,
     459,   174,   168,  1365,   134,   134,    10,    11,    12,    13,
      14,    15,    16,   313,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     3,   194,   209,
      41,   224,   133,    78,   181,   597,   598,   235,   600,    50,
       3,   134,   228,   605,   134,    10,    11,    12,    13,    14,
      15,    16,   154,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   168,    10,    11,    12,
      13,    14,    15,    16,  1383,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,  1663,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   154,
    1478,   128,   235,    83,     3,  1483,     3,    41,   134,  1762,
     682,   134,   134,   168,   796,    18,    50,   133,  1791,    41,
    1492,    41,     3,   805,   215,  1652,   142,  1508,    50,  1656,
      50,  1503,     3,  1505,  1712,     3,  1789,  1790,     3,   166,
    1813,  1814,   310,   311,   124,     3,   312,   313,    83,    33,
     313,   723,   132,   725,   312,   313,     3,   729,   730,  1812,
     732,   310,    61,   241,   736,    68,     3,   147,    41,  1842,
     311,   743,   744,   745,   746,    74,   748,   749,   750,  1726,
     168,    65,   311,   755,   756,   241,   758,  1765,     3,   124,
      93,   310,   764,   765,   766,     3,    80,   132,   312,   313,
      72,    73,   137,   241,    88,     3,   778,   779,   780,   241,
     782,   241,   147,   312,   313,   897,   100,   312,   313,   208,
    1598,  1748,  1749,   241,  1751,  1752,   241,    13,    14,   801,
      16,   312,   313,    19,   241,  1078,  1614,   312,   313,     8,
     812,    26,    27,    28,    29,    30,  1618,   819,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   312,
     313,   312,   313,     9,   158,    24,    25,    26,    27,    28,
      29,    30,    76,   311,   966,    41,   858,   969,   970,   971,
       4,     5,   312,   313,   311,   179,     4,     5,   312,   313,
    1678,    10,    11,    12,    13,    14,    15,    16,   311,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   312,   313,   118,   312,   313,   899,   312,   313,
     902,   312,   313,   312,   313,   311,   908,   312,   313,   133,
     312,   313,   312,   313,   311,   917,   230,   312,   313,   311,
     922,   923,   311,   438,   439,   440,   441,   311,   443,   312,
     313,   446,   447,   448,   312,   313,   312,   313,   453,   454,
     455,   312,   313,   458,   312,   313,   312,   313,   311,   173,
     312,   313,   311,   662,   663,   311,   665,   666,   667,   312,
     313,  1395,   671,   672,   673,   967,   190,   676,   311,   193,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   312,   313,    61,   987,   312,   313,   312,   313,
     992,   215,    10,    11,    12,    13,    14,    15,    16,   311,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   152,    10,    11,    12,    13,    14,    15,
      16,   311,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   311,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,  1068,    10,    11,    12,
      13,    14,    15,    16,   311,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   311,  1100,   312,
     313,  1103,    23,    24,    25,    26,    27,    28,    29,    30,
    1112,  1113,   312,   313,   312,   313,   312,   313,   312,   313,
     312,   313,  1124,   312,   313,   312,   313,   312,   313,   312,
     313,  1133,  1134,    10,    11,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    47,    48,  1158,  1159,   312,   313,
     312,   313,   311,  1165,  1166,   312,   313,   312,   313,   312,
     313,   312,   313,   313,   313,   312,   313,   312,   313,    47,
      48,  1183,   310,   311,   311,  1187,   312,   313,    10,    11,
      12,    13,    14,    15,    16,  1197,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,  1211,
      10,    11,    12,    13,    14,    15,    16,   235,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   310,   311,    43,   312,   313,   312,   313,   312,   313,
      52,   312,   313,   311,    56,   311,     3,     4,     5,     6,
       7,     8,   311,    10,   311,    12,   312,   313,   311,    16,
      17,    18,    43,    20,   311,   632,   633,    24,    25,    26,
      27,    28,   810,   811,  1163,  1164,   311,   311,    35,   311,
     311,   311,    94,    40,    41,    97,   311,    44,   311,   311,
     311,   311,    49,    50,    51,    52,    53,   311,   311,    56,
     112,    58,    59,    60,   311,   311,    63,    64,   311,    66,
      67,    68,   311,   311,   311,    72,   312,   313,   130,   311,
      77,   311,   311,   311,    81,   311,   138,   311,   311,    86,
      87,    88,   311,   311,   311,   311,    93,    94,   313,    96,
      97,    98,    99,   311,   311,   102,    61,   104,   105,   106,
     107,   311,   109,   311,   111,   112,   311,   114,   115,   116,
     311,   118,   119,   120,   121,   311,   311,   311,    61,   126,
     313,   128,     3,   130,   131,     3,   133,   134,   135,   136,
     137,   138,     3,   140,   141,   142,   143,   144,  1390,  1391,
       3,   148,   168,   150,  1396,   152,  1398,   241,     3,   168,
     212,   241,   214,     3,   161,     3,   163,   164,   165,   166,
     167,   168,   169,     3,    26,   172,   173,     3,     3,   231,
       3,   178,     3,   180,   181,   182,     3,   184,     3,   186,
       3,   188,   189,   190,   191,     5,   313,   312,   312,   312,
     312,   312,   312,   312,     3,   312,   203,   204,   205,   312,
     312,   312,   312,   311,     3,   212,     3,   214,   215,   216,
     312,     3,   141,   167,   221,     3,   223,   224,   225,     3,
     227,     3,     3,     3,   231,   232,     3,   234,   235,   236,
     237,     3,     3,     3,   241,    11,    12,    13,    14,    15,
      16,   313,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   208,  1509,     3,     3,
       3,    54,   311,   313,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   282,   283,   284,   285,   286,
       3,   311,   311,   311,  1536,     3,   311,   311,   311,     3,
     312,     3,   313,     3,   168,   312,   168,  1549,     3,   168,
     241,     3,   309,   310,   311,   312,   313,   314,   169,     3,
       3,   312,   205,   312,   307,   307,   307,  1569,     3,     4,
       5,     6,     7,     8,  1576,    10,   312,    12,   307,   307,
     205,    16,    17,    18,   311,    20,   311,  1589,  1590,    24,
      25,    26,    27,    28,   311,   311,    30,   142,   142,   313,
      35,   142,   141,   168,   141,    40,    41,     3,     3,    44,
       4,   208,   208,     5,    49,    50,    51,    52,    53,     5,
       5,    56,   311,    58,    59,    60,   184,   229,    63,    64,
       3,    66,    67,    68,     3,   164,     3,    72,     3,     3,
     168,    53,    77,   168,    20,   150,    81,   311,   139,   312,
       4,    86,    87,    88,   170,   307,   307,   307,    93,    94,
     307,    96,    97,    98,    99,   307,   307,   102,   307,   104,
     105,   106,   107,   311,   109,   311,   111,   112,   311,   114,
     115,   116,     5,   118,   119,   120,   121,   307,     5,   307,
     205,   126,   120,   128,   311,   130,   131,   311,   133,   134,
     135,   136,   137,   138,     3,   140,   141,   142,   143,   144,
     119,     3,     3,   148,     3,   150,   311,   152,   142,   142,
     311,     3,    68,   312,   312,   312,   161,   311,   163,   164,
     165,   166,   167,   168,   169,     3,   312,   172,   173,   311,
     311,   229,   311,   178,   311,   180,   181,   182,    50,   184,
     229,   186,   168,   188,   189,   190,   191,   119,     3,     3,
     311,   142,   142,   311,     3,   311,   183,   142,   203,   204,
     205,   311,     3,     3,    53,   126,   312,   212,   311,   214,
     215,   216,   141,    20,     3,   164,   221,   311,   223,   224,
     225,     3,   227,   312,   312,   312,   231,   232,   312,   234,
     235,   236,   237,   311,   311,     3,   241,    10,    11,    12,
      13,    14,    15,    16,   311,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    12,    13,
      14,    15,    16,   311,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   282,   283,   284,
     285,   286,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   311,   309,   310,   311,   312,   313,   314,
       3,     4,     5,     6,     7,     8,   311,    10,    42,    12,
     311,     4,   312,    16,    17,    18,   311,    20,   312,   142,
     311,    24,    25,    26,    27,    28,   311,   311,   311,   311,
     311,   311,    35,   311,   311,   142,     5,    40,    41,   184,
     204,    44,     4,     4,   311,     3,    49,    50,    51,    52,
      53,     3,     3,    56,     3,    58,    59,    60,     3,   311,
      63,    64,   229,    66,    67,    68,    98,     3,   311,    72,
     311,   229,     3,   311,    77,   311,   311,   221,    81,   311,
     313,    20,   307,    86,    87,    88,   308,   307,   312,   312,
      93,    94,     3,    96,    97,    98,    99,   312,   312,   102,
     312,   104,   105,   106,   107,     3,   109,     3,   111,   112,
       3,   114,   115,   116,     5,   118,   119,   120,   121,     5,
      41,   311,   311,   126,   311,   128,    50,   130,   131,   312,
     133,   134,   135,   136,   137,   138,     4,   140,   141,   142,
     143,   144,    50,   313,   312,   148,   312,   150,   311,   152,
     229,   312,   188,   142,   311,   311,   311,   142,   161,   311,
     163,   164,   165,   166,   167,   168,   169,     3,   311,   172,
     173,   313,    53,   169,   311,   178,   312,   180,   181,   182,
     312,   184,   311,   186,   312,   188,   189,   190,   191,    20,
     312,    18,     3,   311,   142,   311,     3,   312,   312,   312,
     203,   204,   205,    50,     3,   311,   311,   311,     3,   212,
      53,   214,   215,   216,     3,   313,     3,   312,   221,    53,
     223,   224,   225,   312,   227,   312,   307,   307,   231,   232,
     313,   234,   235,   236,   237,   307,   307,   312,   241,    10,
      11,    12,    13,    14,    15,    16,   312,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     185,   119,     3,   230,   178,     3,     3,    50,   312,     5,
       5,    67,   111,   134,   144,   313,   236,   178,     5,   282,
     283,   284,   285,   286,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   312,   309,   310,   311,   312,
     313,   314,     3,     4,     5,     6,     7,     8,   312,    10,
     312,    12,   312,     3,   312,    16,    17,    18,   312,    20,
     313,   311,   311,    24,    25,    26,    27,    28,   312,   311,
     311,     3,   312,   137,    35,     3,   312,   312,     3,    40,
      41,     3,   311,    44,   311,     3,   197,   313,    49,    50,
      51,    52,    53,   178,   197,    56,     3,    58,    59,    60,
     311,     3,    63,    64,     3,    66,    67,    68,   312,   312,
       3,    72,   151,   151,   313,     3,    77,     3,     3,   312,
      81,   195,   312,   311,   311,    86,    87,    88,     3,   312,
     312,   194,    93,    94,     5,    96,    97,    98,    99,   312,
     312,   102,   311,   104,   105,   106,   107,     3,   109,   129,
     111,   112,    78,   114,   115,   116,   232,   118,   119,   120,
     121,   145,   213,   162,   168,   126,   168,   128,   162,   130,
     131,     5,   133,   134,   135,   136,   137,   138,     5,   140,
     141,   142,   143,   144,    79,   304,   735,   148,  1389,   150,
     395,   152,   402,   991,   100,   705,   494,   808,    67,   293,
     161,   719,   163,   164,   165,   166,   167,   168,   169,  1536,
    1508,   172,   173,  1818,  1065,  1077,   674,   178,   131,   180,
     181,   182,   688,   184,  1201,   186,    -1,   188,   189,   190,
     191,    -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,   214,   215,   216,    -1,    -1,    -1,    -1,
     221,    -1,   223,   224,   225,    -1,   227,    -1,    -1,    -1,
     231,   232,   313,   234,   235,   236,   237,    -1,    -1,    -1,
     241,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,   282,   283,   284,   285,   286,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   309,   310,
     311,   312,   313,   314,     3,     4,     5,     6,     7,     8,
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
      -1,   180,   181,   182,    -1,   184,    -1,   186,    -1,   188,
     189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   214,   215,   216,    -1,    -1,
      -1,    -1,   221,    -1,   223,   224,   225,    -1,   227,    -1,
      -1,    -1,   231,   232,   313,   234,   235,   236,   237,    -1,
      -1,    -1,   241,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,
      -1,    -1,    -1,   282,   283,   284,   285,   286,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     309,   310,   311,   312,   313,   314,     3,     4,     5,     6,
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
      -1,   178,    -1,   180,   181,   182,    -1,   184,    -1,   186,
      -1,   188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,   214,   215,   216,
      -1,    -1,    -1,    -1,   221,    -1,   223,   224,   225,    -1,
     227,    -1,    -1,    -1,   231,   232,   313,   234,   235,   236,
     237,    -1,    -1,    -1,   241,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,   282,   283,   284,   285,   286,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   309,   310,   311,   312,   313,   314,     3,     4,
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
      -1,    -1,    -1,   178,    -1,   180,   181,   182,    -1,   184,
      -1,   186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,
     215,   216,    -1,    -1,    -1,    -1,   221,    -1,   223,   224,
     225,    -1,   227,    -1,    -1,    -1,   231,   232,   313,   234,
     235,   236,   237,    -1,    -1,    -1,   241,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,   282,   283,   284,
     285,   286,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   309,   310,   311,   312,   313,   314,
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
      -1,   184,    -1,   186,    -1,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   214,   215,   216,    -1,    -1,    -1,    -1,   221,    -1,
     223,   224,   225,    -1,   227,    -1,    -1,    -1,   231,   232,
     313,   234,   235,   236,   237,    -1,    -1,    -1,   241,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,   282,
     283,   284,   285,   286,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   309,   310,   311,   312,
     313,   314,     3,     4,     5,     6,     7,     8,    -1,    10,
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
     181,   182,    -1,   184,    -1,   186,    -1,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,   214,   215,   216,    -1,    -1,    -1,    -1,
     221,    -1,   223,   224,   225,    -1,   227,    -1,    -1,    -1,
     231,   232,   313,   234,   235,   236,   237,    -1,    -1,    -1,
     241,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,   282,   283,   284,   285,   286,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   309,   310,
     311,   312,   313,   314,     3,     4,     5,     6,     7,     8,
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
      -1,   180,   181,   182,    -1,   184,    -1,   186,    -1,   188,
     189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   214,   215,   216,    -1,    -1,
      -1,    -1,   221,    -1,   223,   224,   225,    -1,   227,    -1,
      -1,    -1,   231,   232,   313,   234,   235,   236,   237,    -1,
      -1,    -1,   241,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,
      -1,    -1,    -1,   282,   283,   284,   285,   286,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     309,   310,   311,   312,   313,   314,     3,     4,     5,     6,
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
      -1,   178,    -1,   180,   181,   182,    -1,   184,    -1,   186,
      -1,   188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,   214,   215,   216,
      -1,    -1,    -1,    -1,   221,    -1,   223,   224,   225,    -1,
     227,    -1,    -1,    -1,   231,   232,   313,   234,   235,   236,
     237,    -1,    -1,    -1,   241,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,   282,   283,   284,   285,   286,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   309,   310,   311,   312,   313,   314,     3,     4,
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
      -1,    -1,    -1,   178,    -1,   180,   181,   182,    -1,   184,
      -1,   186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,
     215,   216,    -1,    -1,    -1,    -1,   221,    -1,   223,   224,
     225,    -1,   227,    -1,    -1,    -1,   231,   232,   313,   234,
     235,   236,   237,    -1,    -1,    -1,   241,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,   282,   283,   284,
     285,   286,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   309,   310,   311,   312,   313,   314,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    59,    60,    -1,    -1,
      63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,
      -1,   119,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      93,    94,    -1,    96,    97,    98,    99,    -1,    -1,   102,
      -1,   104,   105,   106,   107,    -1,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,   126,    -1,   128,    -1,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,   172,
     173,    -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,
      -1,   184,    -1,   186,    -1,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
     203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   214,   215,   216,    -1,    -1,    -1,    -1,   221,    -1,
     223,   224,   225,    -1,   227,    -1,    -1,    -1,   231,   232,
     312,   234,   235,   236,   237,    -1,    -1,    -1,   241,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,   286,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   309,   310,   311,   312,
     313,   314,     3,     4,     5,     6,     7,     8,    -1,    10,
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
     181,   182,    -1,   184,    -1,   186,    -1,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,   214,   215,   216,    -1,    -1,    -1,    -1,
     221,    -1,   223,   224,   225,    -1,   227,    -1,    -1,    -1,
     231,   232,   312,   234,   235,   236,   237,    -1,    -1,    -1,
     241,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,   286,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   309,   310,
     311,   312,   313,   314,     3,     4,     5,     6,     7,     8,
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
      -1,   140,   141,   142,   143,   144,    32,    -1,    -1,   148,
      36,   150,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,   163,   164,   165,   166,   167,   168,
     169,    -1,    58,   172,   173,    -1,    -1,    63,    -1,   178,
      -1,   180,   181,   182,    -1,   184,    -1,   186,    -1,   188,
     189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,   203,   204,   205,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   214,   215,   216,    -1,    -1,
      -1,    -1,   221,    -1,   223,   224,   225,    -1,   227,    -1,
      -1,    -1,   231,   232,   312,   234,   235,   236,   237,    -1,
      -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,   312,    25,
      26,    -1,    -1,   282,   283,   284,   285,   286,    -1,    35,
      -1,   177,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,    62,    -1,   204,   205,
      -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,   218,    76,    -1,   221,    -1,    -1,    -1,    82,
      86,    -1,   228,    -1,    90,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,   164,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,   192,   190,    -1,    -1,
     193,    -1,    -1,   199,   200,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,   210,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,   224,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,   149,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,   217,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   312,   280,    -1,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,    -1,    -1,    -1,    -1,   311,   164,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   198,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    -1,   280,    -1,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    -1,    -1,    -1,    -1,   311,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,   312,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    -1,   280,    -1,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,    -1,    -1,    -1,    -1,   311,   164,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   312,    -1,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   115,   280,    -1,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    -1,    -1,    -1,    -1,   311,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,   164,    -1,    -1,    -1,    -1,   312,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    71,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    93,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,    -1,   280,
      -1,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,    -1,    -1,   164,    -1,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   312,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,   312,    -1,
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
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,   164,
      93,    -1,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,   280,    -1,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     216,   164,    -1,    -1,   311,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    -1,   280,    -1,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    -1,    -1,    -1,    -1,   311,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    -1,   280,    -1,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,    -1,    -1,    -1,    -1,   311,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,   312,    -1,    -1,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    71,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     164,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    -1,   280,    -1,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    -1,    -1,    -1,    -1,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   312,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   312,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   312,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   312,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   312,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   312,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
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
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,   312,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   312,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,   312,    -1,    38,
      -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    93,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   312,   142,    -1,    -1,    84,    85,    61,    -1,
      -1,    89,    -1,    91,    -1,    68,    69,    -1,    -1,    -1,
      -1,    51,    52,   312,    54,   164,    56,    57,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    72,    -1,   122,   123,    -1,   125,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   224,   312,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,   312,   138,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   146,    -1,    -1,   172,
      -1,    -1,    -1,   153,    -1,    -1,   156,    -1,   312,   159,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,   203,   204,    -1,   206,   207,    -1,    -1,
      -1,    -1,   212,    -1,   214,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,   231,    -1,   233,    -1,    -1,    -1,    -1,   238,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,   115,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   104,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    92,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    41,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    63,    87,    88,   135,   177,   179,
     187,   204,   205,   218,   221,   228,   316,   352,   353,   390,
     394,   395,   398,   399,   402,   403,   404,   406,   416,   417,
     420,   422,   423,   424,   446,   449,   456,   457,   460,   463,
     190,   215,   215,     3,    10,    76,    82,   118,   133,   173,
     190,   193,   209,   210,   224,   428,   391,    76,   118,   133,
     173,   190,   193,   215,   408,   215,   215,   408,     8,   193,
     447,   448,   371,   215,   408,   418,     3,    76,     0,   309,
     401,     3,     3,     3,   311,   187,   134,   421,     3,     3,
       3,    75,   134,     3,     3,   421,   209,   133,   215,     3,
     115,   132,   147,   174,   392,     3,   134,     3,   134,     3,
       3,   134,     3,   134,     3,   134,     3,   134,    83,   124,
     132,   137,   147,   409,     3,     3,   409,     9,    20,     3,
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
       3,     4,     5,     6,     7,     8,   164,   312,   458,   459,
     118,   173,   241,     3,    41,   311,   168,     3,   134,   241,
     311,    34,    49,   461,     3,     3,    75,   134,   421,   310,
     393,     3,   392,   115,   313,   241,   241,   241,   241,   241,
     241,     3,   208,     3,   317,   317,   448,   310,   311,     9,
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
     214,   219,   220,   225,   231,   233,   238,   442,     3,    16,
     128,   166,   450,   451,   452,     3,   168,   241,     3,   450,
      87,   135,   221,   462,   168,     3,   134,   241,     3,    26,
     234,   354,   227,   375,     3,     3,     3,     3,     3,     3,
       3,   204,   311,   410,     3,   204,   410,     3,   317,   322,
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
     419,   376,   148,   186,   383,   377,   141,   167,   381,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   442,     3,
     208,     3,     3,     3,   459,   311,   311,   311,   438,   438,
     438,   438,   438,   438,   311,   438,   438,   438,    54,   439,
     439,   438,   438,   438,   311,   439,   438,   439,   311,   311,
      18,    68,    93,   442,     3,     3,     3,   312,   313,   227,
     311,     3,     3,   168,   312,   168,     3,   168,   241,     3,
     132,   187,   310,   311,   444,   445,   317,   169,   364,   375,
     354,   393,     3,   415,     3,   411,   232,   353,   415,   232,
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
     377,   141,    68,   114,   172,   224,   442,   442,     3,   437,
     442,     3,   208,   208,   450,   450,     5,   440,   441,   440,
     440,     4,   443,   440,   440,   440,   441,   441,   440,   440,
     440,   443,   441,   440,   441,     5,     5,   164,   311,   317,
     442,   442,   442,   184,   452,   229,     3,   287,   288,   289,
     290,   396,   397,   227,   311,   168,     3,    41,    50,     3,
     227,   311,     3,     3,   168,     3,    61,    68,   114,   117,
     133,   142,   172,   224,   429,   430,   436,   378,    53,   150,
     367,   354,    20,   170,   313,   407,   312,   313,   311,   412,
     407,   412,   407,   322,   317,   317,   104,   216,   312,   317,
     317,   317,   115,   139,   350,   350,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   442,   442,   317,
     317,   317,     4,   307,   307,   307,   307,   307,   307,   317,
     317,   317,   317,   311,   311,   311,   307,     5,   307,     5,
     307,   311,   311,   322,   353,   325,   327,    40,   317,   321,
     319,   320,   353,   120,   355,     3,   386,   119,   387,   387,
     387,   317,     3,     3,   364,   377,   317,   168,   227,   384,
     385,   377,   311,   142,   142,   311,   437,   437,   442,    18,
      34,    38,    41,    43,    46,    61,    68,    69,    93,   110,
     142,   164,   172,   224,   405,   437,     3,     3,   312,   312,
     312,   313,   222,   240,    72,    73,   312,   313,   312,   312,
     312,    68,   317,    52,    56,    94,    97,   112,   130,   138,
     212,   214,   231,   453,   311,   311,   311,   311,   311,   312,
     313,   229,   396,     3,   227,   311,    50,   454,   119,   229,
     396,   227,   311,   168,     3,   311,   444,     3,   311,   142,
     133,   142,   311,   311,   142,   311,   312,   313,     3,   353,
       3,     5,   365,   366,   317,   183,   464,    93,   317,   142,
       3,     3,    93,   317,   414,   313,   407,   407,   104,   317,
     119,   312,   312,   313,   312,   317,   317,   312,   312,   312,
     312,   312,   313,   313,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   313,   312,   311,   311,   311,   311,
     311,   311,   312,   313,   313,   312,   312,   329,   330,   331,
     311,   312,   313,   311,   312,   313,   311,   347,   348,   312,
     312,   322,   353,   317,   353,   353,   353,   312,    53,   126,
     359,   141,   311,   311,   311,    20,    20,   310,   367,   317,
     311,   385,   317,   311,   311,     3,   435,   405,   405,   437,
     164,     3,   311,   311,   311,    42,     3,   311,     4,     4,
       5,     6,     7,    62,   293,   294,   295,   311,   142,   142,
     405,   184,    41,    50,     5,   204,     4,   441,     4,   441,
     441,   311,   312,    41,    50,   396,     3,     3,     3,     3,
       3,   311,   312,   311,   229,   396,   454,     3,     4,     5,
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
     286,   309,   310,   311,   312,   313,   314,   455,    98,   311,
     312,   229,   396,     3,   227,   311,   429,    68,   114,   172,
     224,   317,   311,   311,   311,     3,   370,   370,   311,   435,
     425,   444,   430,   442,    39,    92,   310,   357,   357,   313,
     152,   313,     3,    26,   465,   221,    20,   312,   313,   413,
     464,   317,   317,   312,    84,    85,    89,    91,   122,   123,
     125,   238,   239,   317,   317,   317,   333,   334,   332,   335,
     336,   337,   317,   317,   308,   360,   360,   360,   338,   307,
       4,     5,   342,   307,     4,     5,   346,   360,   360,   312,
     312,   312,   312,   312,   317,   356,   317,   364,     3,   388,
     388,   388,   317,   317,     3,   464,   370,   312,     3,   432,
       3,   431,   312,   313,   405,     5,   317,     5,    41,    68,
     172,   224,   317,   311,   311,   311,   317,   453,    50,   454,
     312,     4,   317,    50,   454,   312,   312,   312,   312,   313,
     396,   396,   311,   312,   104,   454,   454,   454,   454,   454,
     454,   188,   396,   311,   312,   311,   229,   396,   312,   311,
     142,   142,   311,   312,   432,   370,   370,   312,   313,   312,
     431,   312,    38,   168,   194,   437,     3,   366,   317,   317,
     313,   415,    93,   317,    93,   317,   311,   312,   312,   312,
     312,   312,   360,   360,   360,   360,   360,   360,   312,   313,
     312,    53,   169,   362,   362,   362,   360,   311,   312,   312,
     360,   311,   312,   312,   360,   362,   362,   357,   237,   313,
     358,   367,   312,   313,   312,   312,    20,   312,    18,   312,
     313,   312,   313,     3,   312,   313,   312,   312,   313,   311,
     311,   142,   312,   312,   312,   312,   312,    41,    50,   454,
     104,   312,   454,   104,     3,   312,   312,   396,   104,   104,
     104,   104,   104,   104,    50,   312,   396,   396,   311,   312,
     425,   444,   317,   311,   311,   435,   312,   312,   312,     3,
     312,     5,    20,     3,    53,   357,     3,   414,   362,   362,
     362,   362,   362,   362,   317,     3,   361,    53,   312,   312,
     312,   362,   339,   307,   307,   362,   343,   307,   307,   362,
     312,   312,   185,   317,   119,   368,     3,   317,   230,   178,
       3,     3,     5,    47,    48,     5,   317,   317,    50,   454,
     104,   104,   312,   312,    67,   111,   134,   144,   236,   454,
     312,   312,   396,   312,   432,   431,   312,   178,     5,    87,
     211,   175,   229,   312,   312,   312,   312,   312,   312,   312,
     312,   313,     3,   363,   312,   360,   311,   311,   312,   360,
     311,   311,   312,   357,   196,   221,   137,   369,     3,   312,
     312,   312,   312,   454,   104,   104,   312,   312,   312,     3,
       3,     3,   311,   311,     3,   357,   313,   362,   340,   341,
     362,   344,   345,   197,   197,   370,   311,    47,    48,   104,
     178,   310,   311,     3,     3,     3,   312,   360,   360,   312,
     360,   360,   151,   151,     3,   433,     3,     3,   433,   312,
     312,   357,   362,   362,   362,   362,   312,   313,   310,   311,
     311,   312,   311,   195,   312,   312,   312,   312,   434,     3,
       3,   433,   433,   434,   194,   426,   427,     5,    18,    78,
     154,   168,   311,   312,   312,    18,     3,   312,   313,    78,
     230,   129,   116,   171,   201,    87,   221,   433,   434,   434,
     232,   427,    79,   127,    64,   163,   181,   204,    64,   163,
     181,   204,   312,   145,    93,   164,    93,   164,   434,   213,
       4,   155,   168,   168,   162,   162,     5,     5
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
#line 405 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 411 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 412 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 414 "parser/evoparser.y"
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
#line 432 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 440 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 448 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 454 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 461 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 462 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 463 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 464 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 465 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 466 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 467 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 468 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 469 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 470 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 471 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 472 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 473 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 474 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 475 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 476 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 477 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 479 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 484 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 485 "parser/evoparser.y"
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
#line 493 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 494 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 495 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 496 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 497 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 498 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 501 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 502 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 503 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 504 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 505 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 508 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 509 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 512 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 513 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 516 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 520 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 520 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 521 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 521 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 522 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 523 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 530 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 531 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 538 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 539 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 549 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 553 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 554 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 555 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 556 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 557 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 558 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 559 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 560 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 564 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 69:
#line 565 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 70:
#line 566 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 71:
#line 567 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 72:
#line 568 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 73:
#line 569 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 74:
#line 571 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 75:
#line 572 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 76:
#line 573 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 77:
#line 574 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 78:
#line 575 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 576 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 80:
#line 577 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 578 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 82:
#line 579 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 580 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 84:
#line 581 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 582 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 86:
#line 584 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 585 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 88:
#line 586 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 89:
#line 587 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 588 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 91:
#line 589 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 590 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 93:
#line 591 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 592 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 95:
#line 593 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 96:
#line 594 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 97:
#line 595 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 98:
#line 596 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 99:
#line 597 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 100:
#line 598 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 101:
#line 599 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 601 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 103:
#line 602 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 104:
#line 603 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 105:
#line 604 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 106:
#line 605 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 107:
#line 606 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 108:
#line 609 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 109:
#line 610 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 110:
#line 611 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 111:
#line 612 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 613 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 113:
#line 614 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 114:
#line 615 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 115:
#line 616 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 617 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 618 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 619 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 620 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 120:
#line 621 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 622 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 122:
#line 623 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 123:
#line 624 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 124:
#line 625 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 125:
#line 626 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 126:
#line 627 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 127:
#line 628 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 128:
#line 629 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 129:
#line 630 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 130:
#line 631 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 131:
#line 632 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 132:
#line 633 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 133:
#line 634 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 134:
#line 635 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 135:
#line 636 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 136:
#line 637 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 137:
#line 638 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 138:
#line 639 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 139:
#line 640 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 140:
#line 641 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 141:
#line 642 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 142:
#line 644 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 143:
#line 645 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 144:
#line 646 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 145:
#line 647 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 146:
#line 648 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 147:
#line 649 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 148:
#line 650 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 149:
#line 651 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 150:
#line 653 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 151:
#line 654 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 152:
#line 656 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 153:
#line 657 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 154:
#line 658 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 155:
#line 660 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 156:
#line 661 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 157:
#line 662 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 158:
#line 663 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 159:
#line 670 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 160:
#line 677 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 161:
#line 684 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 162:
#line 688 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 163:
#line 692 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 164:
#line 698 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 165:
#line 699 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 166:
#line 700 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 167:
#line 704 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 168:
#line 710 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 169:
#line 716 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 170:
#line 717 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 171:
#line 718 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 172:
#line 719 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 173:
#line 720 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 174:
#line 721 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 175:
#line 722 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 176:
#line 723 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 177:
#line 724 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 178:
#line 728 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 179:
#line 730 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 180:
#line 732 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 181:
#line 734 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 182:
#line 738 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 183:
#line 746 "parser/evoparser.y"
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
#line 756 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 185:
#line 757 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 186:
#line 760 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 187:
#line 761 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 188:
#line 765 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 189:
#line 773 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 190:
#line 781 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 191:
#line 792 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 192:
#line 801 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 193:
#line 806 "parser/evoparser.y"
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
#line 817 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 197:
#line 819 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 198:
#line 822 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 199:
#line 829 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 200:
#line 837 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 201:
#line 838 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 839 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 842 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 204:
#line 843 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 206:
#line 847 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 209:
#line 856 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 210:
#line 858 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 213:
#line 866 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 214:
#line 868 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 219:
#line 880 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 220:
#line 886 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 221:
#line 893 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 222:
#line 901 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 223:
#line 902 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 224:
#line 903 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 225:
#line 904 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 226:
#line 907 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 227:
#line 908 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 228:
#line 909 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 229:
#line 910 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 230:
#line 911 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 232:
#line 915 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 233:
#line 918 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 234:
#line 919 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 235:
#line 922 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 923 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 237:
#line 924 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 238:
#line 925 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 239:
#line 926 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 240:
#line 927 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 241:
#line 928 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 242:
#line 929 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 243:
#line 930 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 244:
#line 933 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 245:
#line 934 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 936 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 247:
#line 944 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 248:
#line 949 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 249:
#line 950 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 250:
#line 951 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 251:
#line 954 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 955 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 255:
#line 964 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 256:
#line 970 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 257:
#line 971 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 258:
#line 972 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 261:
#line 981 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 262:
#line 983 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 263:
#line 985 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 264:
#line 987 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 265:
#line 989 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 266:
#line 992 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 993 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 994 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 269:
#line 997 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 998 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 271:
#line 1001 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 272:
#line 1002 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 273:
#line 1005 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 274:
#line 1006 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 275:
#line 1007 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 1014 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 279:
#line 1015 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 280:
#line 1020 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 281:
#line 1022 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 282:
#line 1024 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 284:
#line 1028 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1029 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1032 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1033 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1036 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 289:
#line 1041 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 290:
#line 1051 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 291:
#line 1058 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 292:
#line 1059 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 293:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 294:
#line 1061 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1066 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 296:
#line 1070 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1072 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 300:
#line 1078 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 301:
#line 1083 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 302:
#line 1090 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 303:
#line 1097 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 304:
#line 1107 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 305:
#line 1114 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 306:
#line 1121 "parser/evoparser.y"
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
#line 1131 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 308:
#line 1139 "parser/evoparser.y"
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
#line 1149 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 310:
#line 1157 "parser/evoparser.y"
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
#line 1166 "parser/evoparser.y"
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
#line 1175 "parser/evoparser.y"
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
#line 1185 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 314:
#line 1193 "parser/evoparser.y"
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
#line 1202 "parser/evoparser.y"
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
#line 1211 "parser/evoparser.y"
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
#line 1221 "parser/evoparser.y"
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
#line 1230 "parser/evoparser.y"
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
#line 1242 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 320:
#line 1247 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 321:
#line 1252 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 322:
#line 1258 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 323:
#line 1265 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 324:
#line 1272 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 325:
#line 1279 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 326:
#line 1289 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 327:
#line 1296 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1305 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 329:
#line 1312 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 330:
#line 1318 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 331:
#line 1326 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 332:
#line 1332 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 334:
#line 1340 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 335:
#line 1341 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 336:
#line 1342 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 337:
#line 1343 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 338:
#line 1348 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 339:
#line 1355 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 340:
#line 1364 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 341:
#line 1371 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 342:
#line 1377 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 343:
#line 1387 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 344:
#line 1391 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 345:
#line 1397 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 346:
#line 1403 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 347:
#line 1410 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 348:
#line 1416 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 349:
#line 1423 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 350:
#line 1429 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 351:
#line 1435 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 352:
#line 1441 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 353:
#line 1447 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 354:
#line 1453 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 355:
#line 1459 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 356:
#line 1465 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 357:
#line 1471 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 358:
#line 1477 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 359:
#line 1483 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 360:
#line 1489 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 361:
#line 1495 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 362:
#line 1501 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 363:
#line 1507 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 364:
#line 1514 "parser/evoparser.y"
    { ;}
    break;

  case 365:
#line 1515 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 366:
#line 1516 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 367:
#line 1520 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 368:
#line 1528 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 369:
#line 1534 "parser/evoparser.y"
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
#line 1547 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 372:
#line 1550 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 373:
#line 1551 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 374:
#line 1552 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 375:
#line 1553 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 376:
#line 1554 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 380:
#line 1561 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 381:
#line 1565 "parser/evoparser.y"
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
#line 1575 "parser/evoparser.y"
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
#line 1587 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 384:
#line 1588 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 385:
#line 1588 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 386:
#line 1591 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 387:
#line 1592 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1593 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1594 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 390:
#line 1598 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 391:
#line 1601 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1602 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1603 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 394:
#line 1604 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1610 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 396:
#line 1616 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 397:
#line 1621 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 398:
#line 1626 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 399:
#line 1631 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 400:
#line 1640 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 401:
#line 1647 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 402:
#line 1648 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 403:
#line 1649 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 404:
#line 1654 "parser/evoparser.y"
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
#line 1665 "parser/evoparser.y"
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
#line 1677 "parser/evoparser.y"
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
#line 1688 "parser/evoparser.y"
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
#line 1703 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 409:
#line 1707 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 410:
#line 1711 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 411:
#line 1712 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 412:
#line 1717 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 413:
#line 1719 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 414:
#line 1721 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 415:
#line 1723 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 416:
#line 1726 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 417:
#line 1727 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 418:
#line 1733 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 419:
#line 1738 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 420:
#line 1740 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 421:
#line 1742 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 422:
#line 1744 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 423:
#line 1746 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 424:
#line 1750 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1754 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 426:
#line 1755 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 427:
#line 1760 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 428:
#line 1770 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 429:
#line 1779 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 431:
#line 1783 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 432:
#line 1784 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 433:
#line 1785 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 434:
#line 1786 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 435:
#line 1788 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 436:
#line 1790 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 439:
#line 1798 "parser/evoparser.y"
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
#line 1813 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 441:
#line 1821 "parser/evoparser.y"
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
#line 1835 "parser/evoparser.y"
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
#line 1849 "parser/evoparser.y"
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
#line 1863 "parser/evoparser.y"
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
#line 1875 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 446:
#line 1876 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 447:
#line 1877 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 448:
#line 1880 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 449:
#line 1881 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1884 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 451:
#line 1885 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 452:
#line 1886 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 453:
#line 1887 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 454:
#line 1888 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 455:
#line 1889 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 456:
#line 1890 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 457:
#line 1891 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 458:
#line 1893 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 459:
#line 1895 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 460:
#line 1897 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 461:
#line 1899 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 462:
#line 1901 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 463:
#line 1903 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 464:
#line 1906 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 465:
#line 1907 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 1910 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 467:
#line 1911 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 468:
#line 1914 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 469:
#line 1915 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1919 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 472:
#line 1920 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 473:
#line 1921 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 474:
#line 1922 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 475:
#line 1923 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 476:
#line 1924 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 477:
#line 1925 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 478:
#line 1926 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 479:
#line 1927 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 480:
#line 1928 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 481:
#line 1929 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 482:
#line 1930 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 483:
#line 1931 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 484:
#line 1932 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 485:
#line 1933 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 486:
#line 1934 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 487:
#line 1935 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 488:
#line 1938 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 489:
#line 1939 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 490:
#line 1942 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 491:
#line 1944 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 492:
#line 1952 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 493:
#line 1953 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 495:
#line 1955 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 496:
#line 1956 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 497:
#line 1957 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 498:
#line 1958 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1959 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 500:
#line 1960 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 501:
#line 1961 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 502:
#line 1962 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 1963 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 504:
#line 1970 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 505:
#line 1971 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 506:
#line 1972 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 507:
#line 1973 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 508:
#line 1974 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 509:
#line 1975 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 510:
#line 1976 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 511:
#line 1977 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 512:
#line 1978 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 513:
#line 1979 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 514:
#line 1980 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 515:
#line 1981 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 516:
#line 1982 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 517:
#line 1983 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 518:
#line 1984 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 519:
#line 1985 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 520:
#line 1986 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 521:
#line 1987 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 522:
#line 1988 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 523:
#line 1989 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 524:
#line 1990 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 525:
#line 1993 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 526:
#line 1994 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 527:
#line 1995 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 528:
#line 1998 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 529:
#line 1999 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 530:
#line 2002 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 531:
#line 2003 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 532:
#line 2004 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 534:
#line 2008 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 535:
#line 2009 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 536:
#line 2013 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 537:
#line 2014 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 538:
#line 2015 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 539:
#line 2016 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 540:
#line 2017 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 541:
#line 2018 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 542:
#line 2019 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 543:
#line 2020 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 544:
#line 2021 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 545:
#line 2022 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 546:
#line 2023 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 547:
#line 2024 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 548:
#line 2025 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 549:
#line 2026 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 550:
#line 2027 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 551:
#line 2028 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 552:
#line 2029 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 553:
#line 2030 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 554:
#line 2031 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 555:
#line 2032 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 556:
#line 2033 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 557:
#line 2034 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 558:
#line 2035 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 559:
#line 2036 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 560:
#line 2037 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 561:
#line 2038 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 562:
#line 2039 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 563:
#line 2040 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 564:
#line 2041 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 565:
#line 2042 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 566:
#line 2043 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 567:
#line 2044 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 568:
#line 2047 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 569:
#line 2048 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2052 "parser/evoparser.y"
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
#line 2064 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 572:
#line 2065 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 573:
#line 2066 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 574:
#line 2070 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 575:
#line 2073 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 576:
#line 2074 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 580:
#line 2078 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 581:
#line 2079 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 582:
#line 2087 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 583:
#line 2092 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 584:
#line 2098 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 585:
#line 2104 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 586:
#line 2111 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 587:
#line 2118 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 588:
#line 2124 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 589:
#line 2130 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 590:
#line 2137 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 595:
#line 2153 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 596:
#line 2154 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 597:
#line 2155 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 598:
#line 2156 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 599:
#line 2159 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 600:
#line 2160 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 601:
#line 2161 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 602:
#line 2162 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 603:
#line 2163 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 604:
#line 2164 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 605:
#line 2165 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 606:
#line 2166 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 607:
#line 2167 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 608:
#line 2168 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 617:
#line 2185 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 618:
#line 2186 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 739:
#line 2204 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 740:
#line 2211 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 741:
#line 2216 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 742:
#line 2222 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 743:
#line 2228 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 744:
#line 2234 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 745:
#line 2245 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 746:
#line 2250 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 747:
#line 2256 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 750:
#line 2267 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 751:
#line 2268 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 752:
#line 2269 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 753:
#line 2270 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 754:
#line 2271 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 755:
#line 2272 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 756:
#line 2273 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 757:
#line 2280 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 758:
#line 2285 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 759:
#line 2292 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 760:
#line 2293 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 761:
#line 2296 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 762:
#line 2297 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 763:
#line 2298 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 764:
#line 2301 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 765:
#line 2306 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 766:
#line 2312 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 767:
#line 2321 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 768:
#line 2329 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 770:
#line 2340 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 772:
#line 2344 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 773:
#line 2345 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8853 "parser/evoparser.tab.c"
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


#line 2348 "parser/evoparser.y"

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
