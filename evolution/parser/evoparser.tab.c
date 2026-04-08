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
#define YYLAST   9088

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  315
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  777
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1875

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
     977,   979,   981,   985,   998,  1011,  1012,  1015,  1016,  1021,
    1024,  1029,  1030,  1032,  1034,  1035,  1038,  1039,  1042,  1043,
    1047,  1049,  1053,  1054,  1058,  1061,  1066,  1067,  1071,  1073,
    1077,  1080,  1085,  1088,  1089,  1092,  1097,  1102,  1103,  1106,
    1109,  1114,  1119,  1120,  1123,  1125,  1129,  1130,  1133,  1136,
    1139,  1142,  1145,  1148,  1151,  1154,  1156,  1160,  1162,  1165,
    1168,  1170,  1171,  1173,  1177,  1179,  1181,  1185,  1191,  1195,
    1199,  1201,  1202,  1208,  1212,  1218,  1225,  1231,  1232,  1234,
    1236,  1237,  1239,  1241,  1243,  1246,  1249,  1250,  1251,  1253,
    1256,  1261,  1268,  1275,  1282,  1283,  1286,  1287,  1289,  1293,
    1297,  1299,  1308,  1311,  1314,  1317,  1318,  1325,  1328,  1333,
    1334,  1337,  1345,  1347,  1351,  1357,  1359,  1368,  1379,  1389,
    1401,  1412,  1425,  1437,  1451,  1461,  1473,  1484,  1497,  1509,
    1522,  1524,  1528,  1530,  1535,  1540,  1545,  1552,  1554,  1558,
    1561,  1565,  1571,  1573,  1577,  1578,  1581,  1584,  1588,  1592,
    1594,  1598,  1600,  1604,  1610,  1612,  1623,  1634,  1652,  1665,
    1685,  1697,  1704,  1713,  1720,  1727,  1734,  1744,  1751,  1757,
    1766,  1774,  1784,  1793,  1804,  1814,  1815,  1817,  1820,  1822,
    1832,  1839,  1840,  1841,  1847,  1851,  1857,  1858,  1861,  1864,
    1867,  1870,  1872,  1873,  1874,  1878,  1880,  1884,  1888,  1889,
    1896,  1898,  1900,  1904,  1908,  1916,  1920,  1924,  1930,  1936,
    1938,  1947,  1955,  1963,  1965,  1975,  1976,  1979,  1982,  1986,
    1992,  1998,  2006,  2012,  2014,  2019,  2024,  2028,  2034,  2038,
    2044,  2045,  2048,  2050,  2056,  2064,  2072,  2082,  2094,  2096,
    2099,  2103,  2105,  2115,  2127,  2128,  2133,  2137,  2143,  2149,
    2159,  2170,  2172,  2176,  2186,  2196,  2206,  2213,  2225,  2234,
    2235,  2237,  2240,  2242,  2246,  2252,  2260,  2265,  2270,  2276,
    2282,  2287,  2294,  2306,  2320,  2334,  2350,  2355,  2362,  2364,
    2368,  2370,  2374,  2376,  2380,  2381,  2386,  2392,  2397,  2403,
    2408,  2414,  2419,  2425,  2430,  2435,  2439,  2443,  2447,  2450,
    2454,  2459,  2464,  2466,  2470,  2471,  2476,  2477,  2481,  2484,
    2488,  2492,  2496,  2500,  2506,  2512,  2518,  2522,  2528,  2531,
    2539,  2545,  2553,  2559,  2562,  2566,  2569,  2573,  2576,  2580,
    2586,  2591,  2597,  2605,  2614,  2623,  2631,  2638,  2645,  2651,
    2652,  2656,  2662,  2663,  2665,  2666,  2669,  2672,  2673,  2678,
    2682,  2685,  2689,  2693,  2697,  2701,  2705,  2709,  2713,  2717,
    2721,  2725,  2727,  2729,  2731,  2733,  2735,  2739,  2745,  2748,
    2753,  2755,  2757,  2759,  2761,  2765,  2769,  2773,  2777,  2783,
    2789,  2791,  2793,  2795,  2799,  2803,  2804,  2806,  2808,  2810,
    2814,  2818,  2821,  2823,  2827,  2831,  2835,  2837,  2848,  2858,
    2871,  2883,  2896,  2908,  2923,  2937,  2938,  2940,  2942,  2946,
    2949,  2953,  2957,  2961,  2963,  2965,  2967,  2969,  2971,  2973,
    2975,  2977,  2979,  2981,  2982,  2985,  2990,  2996,  3002,  3008,
    3014,  3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,
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
    3238,  3240,  3242,  3244,  3246,  3248,  3250,  3252,  3254,  3256,
    3258,  3260,  3262,  3264,  3266,  3268,  3272,  3278,  3282,  3288,
    3290,  3295,  3301,  3303,  3307,  3309,  3311,  3313,  3315,  3317,
    3319,  3321,  3323,  3337,  3339,  3341,  3343,  3345,  3347,  3349,
    3353,  3359,  3364,  3369,  3370,  3373,  3376,  3378
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
     354,   355,   359,   364,   367,   368,   369,    -1,   205,   371,
     372,   137,     3,   115,   375,   354,   355,   359,   364,   367,
      -1,    -1,   234,   317,    -1,    -1,   120,    53,   356,   358,
      -1,   317,   357,    -1,   356,   313,   317,   357,    -1,    -1,
      39,    -1,    92,    -1,    -1,   237,   185,    -1,    -1,   126,
     317,    -1,    -1,   308,    53,   361,    -1,     3,    -1,   361,
     313,     3,    -1,    -1,   169,    53,   363,    -1,     3,   357,
      -1,   363,   313,     3,   357,    -1,    -1,   169,    53,   365,
      -1,   366,    -1,   365,   313,   366,    -1,     3,   357,    -1,
       3,   310,     3,   357,    -1,     5,   357,    -1,    -1,   150,
     317,    -1,   150,   317,   313,   317,    -1,   150,   317,   152,
     317,    -1,    -1,   119,   221,    -1,   119,   196,    -1,   119,
     221,   197,   151,    -1,   119,   196,   197,   151,    -1,    -1,
     137,   370,    -1,     3,    -1,   370,   313,     3,    -1,    -1,
     371,    35,    -1,   371,    86,    -1,   371,    90,    -1,   371,
     124,    -1,   371,   202,    -1,   371,   192,    -1,   371,   200,
      -1,   371,   199,    -1,   373,    -1,   372,   313,   373,    -1,
      26,    -1,   317,   374,    -1,    41,     3,    -1,     3,    -1,
      -1,   376,    -1,   375,   313,   376,    -1,   377,    -1,   379,
      -1,     3,   374,   386,    -1,     3,   310,     3,   374,   386,
      -1,   389,   378,     3,    -1,   311,   375,   312,    -1,    41,
      -1,    -1,   376,   380,   141,   377,   384,    -1,   376,   202,
     377,    -1,   376,   202,   377,   168,   317,    -1,   376,   382,
     381,   141,   377,   385,    -1,   376,   161,   383,   141,   377,
      -1,    -1,   131,    -1,    66,    -1,    -1,   167,    -1,   148,
      -1,   186,    -1,   148,   381,    -1,   186,   381,    -1,    -1,
      -1,   385,    -1,   168,   317,    -1,   227,   311,   370,   312,
      -1,   228,   142,   387,   311,   388,   312,    -1,   132,   142,
     387,   311,   388,   312,    -1,   113,   142,   387,   311,   388,
     312,    -1,    -1,   119,   141,    -1,    -1,     3,    -1,   388,
     313,     3,    -1,   311,   353,   312,    -1,   390,    -1,    87,
     391,   115,     3,   354,   364,   367,   466,    -1,   391,   147,
      -1,   391,   174,    -1,   391,   132,    -1,    -1,    87,   391,
     392,   115,   375,   354,    -1,     3,   393,    -1,   392,   313,
       3,   393,    -1,    -1,   310,    26,    -1,    87,   391,   115,
     392,   227,   375,   354,    -1,   394,    -1,    88,   215,     3,
      -1,    88,   215,   134,   241,     3,    -1,   395,    -1,    63,
     133,     3,   168,     3,   311,   396,   312,    -1,    63,   133,
     134,   241,     3,   168,     3,   311,   396,   312,    -1,    63,
     224,   133,     3,   168,     3,   311,   396,   312,    -1,    63,
     224,   133,   134,   241,     3,   168,     3,   311,   396,   312,
      -1,    63,   133,     3,   168,     3,   227,   229,   311,   396,
     312,    -1,    63,   133,   134,   241,     3,   168,     3,   227,
     229,   311,   396,   312,    -1,    63,   224,   133,     3,   168,
       3,   227,   229,   311,   396,   312,    -1,    63,   224,   133,
     134,   241,     3,   168,     3,   227,   229,   311,   396,   312,
      -1,    63,   133,    75,     3,   168,     3,   311,   396,   312,
      -1,    63,   133,    75,   134,   241,     3,   168,     3,   311,
     396,   312,    -1,    63,   224,   133,    75,     3,   168,     3,
     311,   396,   312,    -1,    63,   224,   133,    75,   134,   241,
       3,   168,     3,   311,   396,   312,    -1,    63,   133,    75,
       3,   168,     3,   227,   229,   311,   396,   312,    -1,    63,
     224,   133,    75,     3,   168,     3,   227,   229,   311,   396,
     312,    -1,     3,    -1,   396,   313,     3,    -1,   397,    -1,
     287,   311,     3,   312,    -1,   288,   311,     3,   312,    -1,
     289,   311,     3,   312,    -1,   290,   311,     3,   313,     3,
     312,    -1,   398,    -1,    88,   133,     3,    -1,   399,   401,
      -1,   218,   215,     3,    -1,   218,   215,     3,   313,   400,
      -1,     3,    -1,   400,   313,     3,    -1,    -1,   401,    64,
      -1,   401,   181,    -1,   401,    45,    43,    -1,   401,    44,
      43,    -1,   402,    -1,   177,   215,     3,    -1,   403,    -1,
      36,   215,     3,    -1,    36,   215,     3,   310,     3,    -1,
     404,    -1,    32,   215,     3,    33,    61,     3,    68,   311,
     317,   312,    -1,    32,   215,     3,    33,    61,     3,   224,
     311,   437,   312,    -1,    32,   215,     3,    33,    61,     3,
     114,   142,   311,   434,   312,   178,     3,   311,   435,   312,
     436,    -1,    32,   215,     3,    33,    61,     3,    68,   311,
     317,   312,    18,   230,    -1,    32,   215,     3,    33,    61,
       3,   114,   142,   311,   434,   312,   178,     3,   311,   435,
     312,   436,    18,   230,    -1,    32,   215,     3,    33,    61,
       3,   172,   142,   311,   433,   312,    -1,    32,   215,     3,
      88,    61,     3,    -1,    32,   215,     3,   179,    61,     3,
     208,     3,    -1,    32,   215,     3,   100,    61,     3,    -1,
      32,   215,     3,    80,    61,     3,    -1,    32,   215,     3,
     230,    61,     3,    -1,    32,   215,     3,    33,    74,     3,
     444,   439,   405,    -1,    32,   215,     3,    88,    74,     3,
      -1,    32,   215,     3,    88,     3,    -1,    32,   215,     3,
     179,    74,     3,   208,     3,    -1,    32,   215,     3,   179,
       3,   208,     3,    -1,    32,   215,     3,   158,    74,     3,
     444,   439,   405,    -1,    32,   215,     3,   158,     3,   444,
     439,   405,    -1,    32,   215,     3,    65,    74,     3,     3,
     444,   439,   405,    -1,    32,   215,     3,    65,     3,     3,
     444,   439,   405,    -1,    -1,   110,    -1,    34,     3,    -1,
     406,    -1,   135,   410,   411,     3,   412,   232,   414,   407,
     466,    -1,   135,   410,   411,     3,   412,   353,    -1,    -1,
      -1,   170,   142,   221,   408,   409,    -1,     3,    20,   317,
      -1,   409,   313,     3,    20,   317,    -1,    -1,   410,   147,
      -1,   410,    83,    -1,   410,   124,    -1,   410,   132,    -1,
     137,    -1,    -1,    -1,   311,   413,   312,    -1,     3,    -1,
     413,   313,     3,    -1,   311,   416,   312,    -1,    -1,   414,
     313,   415,   311,   416,   312,    -1,   317,    -1,    93,    -1,
     416,   313,   317,    -1,   416,   313,    93,    -1,   135,   410,
     411,     3,   204,   417,   407,    -1,     3,    20,   317,    -1,
       3,    20,    93,    -1,   417,   313,     3,    20,   317,    -1,
     417,   313,     3,    20,    93,    -1,   418,    -1,   187,   410,
     411,     3,   412,   232,   414,   407,    -1,   187,   410,   411,
       3,   204,   417,   407,    -1,   187,   410,   411,     3,   412,
     353,   407,    -1,   419,    -1,   221,   420,   375,   204,   421,
     354,   364,   367,   466,    -1,    -1,   410,   147,    -1,   410,
     132,    -1,     3,    20,   317,    -1,     3,   310,     3,    20,
     317,    -1,   421,   313,     3,    20,   317,    -1,   421,   313,
       3,   310,     3,    20,   317,    -1,   179,   215,     3,   208,
       3,    -1,   422,    -1,    63,    76,   423,     3,    -1,    63,
     193,   423,     3,    -1,    88,    76,     3,    -1,    88,    76,
     134,   241,     3,    -1,    88,   193,     3,    -1,    88,   193,
     134,   241,     3,    -1,    -1,   134,   241,    -1,   424,    -1,
      63,    82,     3,    41,   444,    -1,    63,    82,     3,    41,
     444,    93,   317,    -1,    63,    82,     3,    41,   444,    18,
     164,    -1,    63,    82,     3,    41,   444,    68,   311,   317,
     312,    -1,    63,    82,     3,    41,   444,    18,   164,    68,
     311,   317,   312,    -1,   425,    -1,   228,     3,    -1,   228,
      76,     3,    -1,   426,    -1,    63,   430,   215,   423,     3,
     311,   431,   312,   427,    -1,    63,   430,   215,   423,     3,
     310,     3,   311,   431,   312,   427,    -1,    -1,   427,    38,
      20,     5,    -1,   427,    38,     5,    -1,   427,   168,     3,
      87,     3,    -1,   427,   168,     3,   211,     3,    -1,   427,
     194,    53,   229,   311,     3,   312,   195,     5,    -1,   427,
     194,    53,   175,   311,     3,   312,   311,   428,   312,    -1,
     429,    -1,   428,   313,   429,    -1,   194,     3,   232,   145,
     213,     4,   168,   162,     5,    -1,   194,     3,   232,   145,
     213,   155,   168,   162,     5,    -1,    63,   430,   215,   423,
       3,   311,   431,   312,   446,    -1,    63,   430,   215,   423,
       3,   446,    -1,    63,   430,   215,   423,     3,   310,     3,
     311,   431,   312,   446,    -1,    63,   430,   215,   423,     3,
     310,     3,   446,    -1,    -1,   209,    -1,   210,   209,    -1,
     432,    -1,   431,   313,   432,    -1,   172,   142,   311,   433,
     312,    -1,    61,     3,   172,   142,   311,   433,   312,    -1,
     142,   311,   370,   312,    -1,   133,   311,   370,   312,    -1,
     117,   133,   311,   370,   312,    -1,   117,   142,   311,   370,
     312,    -1,    68,   311,   317,   312,    -1,    61,     3,    68,
     311,   317,   312,    -1,   114,   142,   311,   434,   312,   178,
       3,   311,   435,   312,   436,    -1,   114,   142,   311,   434,
     312,   178,     3,   310,     3,   311,   435,   312,   436,    -1,
      61,     3,   114,   142,   311,   434,   312,   178,     3,   311,
     435,   312,   436,    -1,    61,     3,   114,   142,   311,   434,
     312,   178,     3,   310,     3,   311,   435,   312,   436,    -1,
     224,   311,   437,   312,    -1,    61,     3,   224,   311,   437,
     312,    -1,     3,    -1,   433,   313,     3,    -1,     3,    -1,
     434,   313,     3,    -1,     3,    -1,   435,   313,     3,    -1,
      -1,   436,   168,    87,    64,    -1,   436,   168,    87,   204,
     164,    -1,   436,   168,    87,   181,    -1,   436,   168,    87,
     204,    93,    -1,   436,   168,   221,    64,    -1,   436,   168,
     221,   204,   164,    -1,   436,   168,   221,   181,    -1,   436,
     168,   221,   204,    93,    -1,   436,   168,    87,   163,    -1,
     436,   168,   221,   163,    -1,   436,   154,   116,    -1,   436,
     154,   201,    -1,   436,   154,   171,    -1,   436,    78,    -1,
     436,    18,    78,    -1,   436,    78,   129,    79,    -1,   436,
      78,   129,   127,    -1,     3,    -1,   437,   313,     3,    -1,
      -1,   438,     3,   444,   439,    -1,    -1,   439,    18,   164,
      -1,   439,   164,    -1,   439,    93,     4,    -1,   439,    93,
       5,    -1,   439,    93,     7,    -1,   439,    93,     6,    -1,
     439,    93,   293,   311,   312,    -1,   439,    93,   294,   311,
     312,    -1,   439,    93,   295,   311,   312,    -1,   439,    93,
      62,    -1,   439,    93,   311,   317,   312,    -1,   439,    38,
      -1,   439,    38,   311,     5,   313,     5,   312,    -1,   439,
      38,   311,     5,   312,    -1,   439,    43,   311,     5,   313,
       5,   312,    -1,   439,    43,   311,     5,   312,    -1,   439,
      43,    -1,   439,   224,   142,    -1,   439,   224,    -1,   439,
     172,   142,    -1,   439,   142,    -1,   439,    69,     4,    -1,
     439,    68,   311,   317,   312,    -1,   439,    61,     3,   224,
      -1,   439,    61,     3,   172,   142,    -1,   439,    61,     3,
      68,   311,   317,   312,    -1,   439,    46,    42,    41,   311,
     317,   312,    47,    -1,   439,    46,    42,    41,   311,   317,
     312,    48,    -1,   439,    46,    42,    41,   311,   317,   312,
      -1,   439,    41,   311,   317,   312,    47,    -1,   439,    41,
     311,   317,   312,    48,    -1,   439,    41,   311,   317,   312,
      -1,    -1,   311,     5,   312,    -1,   311,     5,   313,     5,
     312,    -1,    -1,    54,    -1,    -1,   442,   222,    -1,   442,
     240,    -1,    -1,   443,    72,   204,     4,    -1,   443,    73,
       4,    -1,    57,   440,    -1,   207,   440,   442,    -1,   203,
     440,   442,    -1,   160,   440,   442,    -1,   138,   440,   442,
      -1,   130,   440,   442,    -1,    56,   440,   442,    -1,   176,
     440,   442,    -1,    94,   440,   442,    -1,   112,   440,   442,
      -1,    96,   440,   442,    -1,    97,    -1,   220,    -1,   214,
      -1,    95,    -1,   238,    -1,    72,   440,   443,    -1,   231,
     311,     5,   312,   443,    -1,    54,   440,    -1,   233,   311,
       5,   312,    -1,   219,    -1,    51,    -1,   159,    -1,   153,
      -1,   206,   441,   443,    -1,   212,   441,   443,    -1,   156,
     441,   443,    -1,   146,   441,   443,    -1,   103,   311,   445,
     312,   443,    -1,   204,   311,   445,   312,   443,    -1,    52,
      -1,   225,    -1,     4,    -1,   445,   313,     4,    -1,   447,
     378,   353,    -1,    -1,   132,    -1,   187,    -1,   448,    -1,
     204,   193,     3,    -1,   204,   193,    93,    -1,   204,   449,
      -1,   450,    -1,   449,   313,   450,    -1,     8,    20,   317,
      -1,     8,     9,   317,    -1,   451,    -1,    63,   173,     3,
     311,   452,   312,    41,    50,   456,   104,    -1,    63,   173,
       3,   311,   452,   312,    50,   456,   104,    -1,    63,    10,
     187,   173,     3,   311,   452,   312,    41,    50,   456,   104,
      -1,    63,    10,   187,   173,     3,   311,   452,   312,    50,
     456,   104,    -1,    63,   118,     3,   311,   452,   312,   184,
     455,    41,    50,   456,   104,    -1,    63,   118,     3,   311,
     452,   312,   184,   455,    50,   456,   104,    -1,    63,    10,
     187,   118,     3,   311,   452,   312,   184,   455,    41,    50,
     456,   104,    -1,    63,    10,   187,   118,     3,   311,   452,
     312,   184,   455,    50,   456,   104,    -1,    -1,   453,    -1,
     454,    -1,   453,   313,   454,    -1,     3,   444,    -1,    16,
       3,   444,    -1,   166,     3,   444,    -1,   128,     3,   444,
      -1,   130,    -1,   138,    -1,   231,    -1,   212,    -1,    52,
      -1,   112,    -1,    94,    -1,    56,    -1,    97,    -1,   214,
      -1,    -1,   456,   457,    -1,   456,    50,   456,   104,    -1,
     456,   134,   456,   104,   134,    -1,   456,   236,   456,   104,
     236,    -1,   456,   144,   456,   104,   144,    -1,   456,   111,
     456,   104,   111,    -1,   456,    67,   456,   104,    67,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,
      20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,
      40,    -1,   205,    -1,   135,    -1,   221,    -1,    87,    -1,
     115,    -1,   234,    -1,   204,    -1,   137,    -1,   232,    -1,
      63,    -1,    88,    -1,   215,    -1,   133,    -1,   216,    -1,
     105,    -1,    99,    -1,    77,    -1,    81,    -1,    58,    -1,
     182,    -1,   143,    -1,   140,    -1,    60,    -1,   165,    -1,
     109,    -1,    59,    -1,   121,    -1,   107,    -1,   166,    -1,
     128,    -1,   119,    -1,    44,    -1,   189,    -1,   180,    -1,
     106,    -1,   191,    -1,    49,    -1,    98,    -1,   188,    -1,
     190,    -1,    41,    -1,   168,    -1,   169,    -1,    53,    -1,
     120,    -1,   126,    -1,   150,    -1,   152,    -1,   141,    -1,
     148,    -1,   186,    -1,   131,    -1,   167,    -1,   116,    -1,
      66,    -1,   161,    -1,   227,    -1,   164,    -1,    93,    -1,
     172,    -1,   142,    -1,   224,    -1,    68,    -1,   114,    -1,
     178,    -1,    64,    -1,   181,    -1,   163,    -1,   130,    -1,
     138,    -1,   231,    -1,   212,    -1,    52,    -1,   112,    -1,
      94,    -1,    56,    -1,    97,    -1,   214,    -1,   203,    -1,
      96,    -1,    72,    -1,   225,    -1,    51,    -1,   223,    -1,
     102,    -1,   136,    -1,    35,    -1,    86,    -1,   241,    -1,
     235,    -1,   237,    -1,   173,    -1,   118,    -1,   184,    -1,
     311,    -1,   312,    -1,   313,    -1,   309,    -1,   310,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      17,    -1,   314,    -1,   282,    -1,   283,    -1,   284,    -1,
     285,    -1,   286,    -1,     8,    -1,   458,    -1,    88,   173,
       3,    -1,    88,   173,   134,   241,     3,    -1,    88,   118,
       3,    -1,    88,   118,   134,   241,     3,    -1,   459,    -1,
      58,     3,   311,   312,    -1,    58,     3,   311,   460,   312,
      -1,   461,    -1,   460,   313,   461,    -1,     5,    -1,     4,
      -1,     7,    -1,   164,    -1,     6,    -1,     3,    -1,     8,
      -1,   462,    -1,    63,   190,     3,   463,   464,   168,     3,
     119,    98,   188,    50,   456,   104,    -1,    49,    -1,    34,
      -1,   135,    -1,   221,    -1,    87,    -1,   465,    -1,    88,
     190,     3,    -1,    88,   190,   134,   241,     3,    -1,    32,
     190,     3,   100,    -1,    32,   190,     3,    80,    -1,    -1,
     183,    26,    -1,   183,   467,    -1,     3,    -1,   467,   313,
       3,    -1
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
     781,   792,   802,   803,   816,   832,   833,   834,   835,   838,
     845,   853,   854,   855,   858,   859,   862,   863,   867,   868,
     871,   873,   877,   878,   881,   883,   887,   888,   891,   892,
     895,   901,   908,   917,   918,   919,   920,   923,   924,   925,
     926,   927,   930,   931,   934,   935,   938,   939,   940,   941,
     942,   943,   944,   945,   946,   949,   950,   951,   959,   965,
     966,   967,   970,   971,   974,   975,   979,   986,   987,   988,
     991,   992,   996,   998,  1000,  1002,  1004,  1008,  1009,  1010,
    1013,  1014,  1017,  1018,  1021,  1022,  1023,  1026,  1027,  1030,
    1031,  1035,  1037,  1039,  1041,  1044,  1045,  1048,  1049,  1052,
    1056,  1066,  1074,  1075,  1076,  1077,  1081,  1085,  1087,  1091,
    1091,  1093,  1098,  1105,  1112,  1122,  1129,  1136,  1146,  1154,
    1164,  1172,  1181,  1190,  1200,  1208,  1217,  1226,  1236,  1245,
    1257,  1262,  1267,  1273,  1280,  1287,  1294,  1304,  1311,  1320,
    1327,  1333,  1341,  1347,  1355,  1356,  1357,  1358,  1359,  1363,
    1370,  1379,  1386,  1392,  1403,  1406,  1412,  1418,  1425,  1431,
    1438,  1444,  1450,  1456,  1462,  1468,  1474,  1480,  1486,  1492,
    1498,  1504,  1510,  1516,  1522,  1530,  1531,  1532,  1535,  1543,
    1549,  1562,  1563,  1563,  1566,  1574,  1584,  1585,  1586,  1587,
    1588,  1591,  1591,  1594,  1595,  1598,  1608,  1621,  1622,  1622,
    1625,  1626,  1627,  1628,  1631,  1635,  1636,  1637,  1638,  1644,
    1647,  1653,  1658,  1664,  1672,  1681,  1682,  1683,  1687,  1698,
    1710,  1721,  1736,  1741,  1745,  1746,  1750,  1752,  1754,  1756,
    1760,  1761,  1767,  1771,  1773,  1775,  1777,  1779,  1784,  1788,
    1789,  1793,  1802,  1812,  1816,  1817,  1818,  1819,  1820,  1821,
    1823,  1827,  1828,  1831,  1846,  1853,  1868,  1881,  1896,  1909,
    1910,  1911,  1914,  1915,  1918,  1919,  1920,  1921,  1922,  1923,
    1924,  1925,  1926,  1928,  1930,  1932,  1934,  1936,  1940,  1941,
    1944,  1945,  1948,  1949,  1952,  1953,  1954,  1955,  1956,  1957,
    1958,  1959,  1960,  1961,  1962,  1963,  1964,  1965,  1966,  1967,
    1968,  1969,  1972,  1973,  1976,  1976,  1986,  1987,  1988,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  2004,  2005,
    2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,
    2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,  2027,
    2028,  2029,  2032,  2033,  2036,  2037,  2038,  2041,  2042,  2043,
    2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,  2055,  2056,
    2057,  2058,  2059,  2060,  2061,  2062,  2063,  2064,  2065,  2066,
    2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,  2075,  2076,
    2077,  2078,  2081,  2082,  2085,  2098,  2099,  2100,  2104,  2107,
    2108,  2109,  2110,  2110,  2112,  2113,  2121,  2125,  2131,  2137,
    2144,  2151,  2157,  2163,  2170,  2179,  2180,  2183,  2184,  2187,
    2188,  2189,  2190,  2193,  2194,  2195,  2196,  2197,  2198,  2199,
    2200,  2201,  2202,  2209,  2210,  2211,  2212,  2213,  2214,  2215,
    2216,  2219,  2220,  2221,  2221,  2221,  2222,  2222,  2222,  2222,
    2222,  2222,  2223,  2223,  2223,  2223,  2223,  2223,  2223,  2223,
    2223,  2224,  2224,  2224,  2224,  2224,  2224,  2224,  2225,  2225,
    2225,  2225,  2226,  2226,  2226,  2226,  2226,  2226,  2226,  2226,
    2226,  2226,  2226,  2226,  2227,  2227,  2227,  2227,  2227,  2227,
    2227,  2227,  2228,  2228,  2228,  2228,  2228,  2228,  2228,  2228,
    2229,  2229,  2229,  2229,  2229,  2229,  2229,  2229,  2229,  2230,
    2230,  2230,  2230,  2230,  2230,  2230,  2230,  2231,  2231,  2231,
    2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,  2233,  2233,
    2233,  2233,  2233,  2233,  2233,  2234,  2234,  2234,  2234,  2234,
    2234,  2234,  2235,  2235,  2235,  2235,  2236,  2236,  2236,  2236,
    2236,  2236,  2236,  2236,  2236,  2236,  2236,  2236,  2237,  2237,
    2237,  2237,  2237,  2238,  2245,  2249,  2255,  2261,  2267,  2279,
    2283,  2289,  2297,  2298,  2301,  2302,  2303,  2304,  2305,  2306,
    2307,  2314,  2318,  2326,  2327,  2330,  2331,  2332,  2335,  2339,
    2345,  2354,  2362,  2373,  2374,  2375,  2378,  2379
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
     317,   352,   353,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   357,   358,   358,   359,   359,   360,   360,
     361,   361,   362,   362,   363,   363,   364,   364,   365,   365,
     366,   366,   366,   367,   367,   367,   367,   368,   368,   368,
     368,   368,   369,   369,   370,   370,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   372,   372,   372,   373,   374,
     374,   374,   375,   375,   376,   376,   377,   377,   377,   377,
     378,   378,   379,   379,   379,   379,   379,   380,   380,   380,
     381,   381,   382,   382,   383,   383,   383,   384,   384,   385,
     385,   386,   386,   386,   386,   387,   387,   388,   388,   389,
     352,   390,   391,   391,   391,   391,   390,   392,   392,   393,
     393,   390,   352,   394,   394,   352,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     396,   396,   396,   397,   397,   397,   397,   352,   398,   352,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   352,
     402,   352,   403,   403,   352,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   405,   405,   405,   352,   406,
     406,   407,   408,   407,   409,   409,   410,   410,   410,   410,
     410,   411,   411,   412,   412,   413,   413,   414,   415,   414,
     416,   416,   416,   416,   406,   417,   417,   417,   417,   352,
     418,   418,   418,   352,   419,   420,   420,   420,   421,   421,
     421,   421,   352,   352,   422,   422,   352,   352,   352,   352,
     423,   423,   352,   424,   424,   424,   424,   424,   352,   425,
     425,   352,   426,   426,   427,   427,   427,   427,   427,   427,
     427,   428,   428,   429,   429,   426,   426,   426,   426,   430,
     430,   430,   431,   431,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   433,   433,
     434,   434,   435,   435,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   437,   437,   438,   432,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   440,
     440,   440,   441,   441,   442,   442,   442,   443,   443,   443,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   445,   445,   446,   447,   447,   447,   352,   448,
     448,   448,   449,   449,   450,   450,   352,   451,   451,   451,
     451,   451,   451,   451,   451,   452,   452,   453,   453,   454,
     454,   454,   454,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   456,   456,   456,   456,   456,   456,
     456,   457,   457,   457,   457,   457,   457,   457,   457,   457,
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
     457,   457,   457,   457,   352,   458,   458,   458,   458,   352,
     459,   459,   460,   460,   461,   461,   461,   461,   461,   461,
     461,   352,   462,   463,   463,   464,   464,   464,   352,   465,
     465,   352,   352,   466,   466,   466,   467,   467
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
       1,     1,     3,    12,    12,     0,     2,     0,     4,     2,
       4,     0,     1,     1,     0,     2,     0,     2,     0,     3,
       1,     3,     0,     3,     2,     4,     0,     3,     1,     3,
       2,     4,     2,     0,     2,     4,     4,     0,     2,     2,
       4,     4,     0,     2,     1,     3,     0,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     2,     2,
       1,     0,     1,     3,     1,     1,     3,     5,     3,     3,
       1,     0,     5,     3,     5,     6,     5,     0,     1,     1,
       0,     1,     1,     1,     2,     2,     0,     0,     1,     2,
       4,     6,     6,     6,     0,     2,     0,     1,     3,     3,
       1,     8,     2,     2,     2,     0,     6,     2,     4,     0,
       2,     7,     1,     3,     5,     1,     8,    10,     9,    11,
      10,    12,    11,    13,     9,    11,    10,    12,    11,    12,
       1,     3,     1,     4,     4,     4,     6,     1,     3,     2,
       3,     5,     1,     3,     0,     2,     2,     3,     3,     1,
       3,     1,     3,     5,     1,    10,    10,    17,    12,    19,
      11,     6,     8,     6,     6,     6,     9,     6,     5,     8,
       7,     9,     8,    10,     9,     0,     1,     2,     1,     9,
       6,     0,     0,     5,     3,     5,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     9,     0,     2,     2,     3,     5,
       5,     7,     5,     1,     4,     4,     3,     5,     3,     5,
       0,     2,     1,     5,     7,     7,     9,    11,     1,     2,
       3,     1,     9,    11,     0,     4,     3,     5,     5,     9,
      10,     1,     3,     9,     9,     9,     6,    11,     8,     0,
       1,     2,     1,     3,     5,     7,     4,     4,     5,     5,
       4,     6,    11,    13,    13,    15,     4,     6,     1,     3,
       1,     3,     1,     3,     0,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     4,     3,     3,     3,     2,     3,
       4,     4,     1,     3,     0,     4,     0,     3,     2,     3,
       3,     3,     3,     5,     5,     5,     3,     5,     2,     7,
       5,     7,     5,     2,     3,     2,     3,     2,     3,     5,
       4,     5,     7,     8,     8,     7,     6,     6,     5,     0,
       3,     5,     0,     1,     0,     2,     2,     0,     4,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     3,     5,     2,     4,
       1,     1,     1,     1,     3,     3,     3,     3,     5,     5,
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
       5,     4,     4,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   449,   295,     0,   376,     0,     0,
     376,     0,   236,     0,   376,     0,     0,     0,   191,   290,
     302,   305,   327,   334,   339,   341,   344,   368,   399,   403,
     413,   422,   428,   431,   578,   586,   744,   749,   761,   768,
       0,     0,     0,     0,     0,   420,     0,     0,     0,     0,
       0,   420,   450,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   382,     0,     0,   382,     0,     0,
     581,   582,     0,     0,     0,     0,   429,     0,     1,     2,
     329,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   451,     0,   420,   299,
       0,   294,   292,   293,     0,   416,     0,   747,     0,   328,
     745,     0,   769,     0,   418,     0,   303,     0,   378,   379,
     380,   381,   377,     0,   340,     0,     0,     0,     0,   579,
     580,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   247,   237,   188,     0,   189,   190,   238,   239,   240,
      11,   242,   244,   243,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,   192,   245,   330,   380,   377,   251,     0,     0,   252,
     254,   255,   261,   430,     3,     0,     0,   335,   336,   772,
     771,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     759,   755,   754,   758,   756,   760,   757,   750,     0,   752,
       0,     0,   421,   414,     0,   595,     0,     0,     0,     0,
     595,   764,   763,     0,   415,     0,     0,     0,     0,     0,
     297,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,     0,   383,   585,   584,   583,     0,    47,     0,
      28,    27,    18,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,   284,
       0,     0,     0,     0,   269,   268,   272,   276,   273,     0,
       0,   270,   260,     0,   338,   337,     0,     0,     0,     0,
       0,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   751,     0,     0,     0,   561,   570,   529,   529,
     529,   529,   529,   554,   529,   551,     0,   529,   529,   529,
     532,   563,   532,   562,   529,   529,   529,     0,   532,   529,
     532,   553,   560,   552,   571,     0,     0,   555,   423,     0,
       0,     0,     0,     0,   596,   597,     0,     0,     0,     0,
       0,   767,   765,   766,     0,     0,     0,     0,     0,   575,
     300,     0,   216,     0,   195,   299,   417,   748,   746,   770,
     419,   304,     0,     0,     0,   412,     0,     0,     5,    45,
      48,     0,    42,     0,     0,   180,     0,     0,     0,     0,
     166,   164,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,   159,   160,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    21,    22,
      20,   186,   184,    40,     0,    38,   155,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    29,    23,    24,
      26,    12,    13,    14,    15,    16,    17,    25,   249,   195,
       0,   246,   332,   331,   251,     0,     0,     0,   256,   289,
     259,     0,   195,   253,   270,   270,     0,   263,     0,   271,
       0,   258,     0,     0,     0,     0,   354,   351,   357,   353,
     496,     0,     0,     0,     0,   355,   753,   595,   595,     0,
     558,   534,   540,   537,   534,   534,     0,   534,   534,   534,
     533,   537,   537,   534,   534,   534,     0,   537,   534,   537,
       0,     0,     0,     0,     0,   599,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,   577,     0,   494,   446,   261,   196,     0,
     223,   195,   296,   298,     0,   371,   385,     0,     0,   370,
     371,     0,   371,     0,    59,     0,   178,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,   144,
     145,   146,   147,   148,   149,     0,     0,     0,     0,   125,
       0,     0,     0,   129,   130,   131,   133,     0,     0,   135,
       0,   138,   139,   140,     0,     0,     0,     0,     0,     0,
      66,    60,    61,    62,    63,    64,    65,   115,   116,   117,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    39,     0,     0,   187,
     185,    51,     0,     0,    36,    32,    34,     0,   197,     0,
       0,   284,   286,   286,   286,     0,     0,     0,   216,   274,
     275,     0,     0,   277,     0,     0,     0,     0,     0,   496,
     496,     0,   365,   496,   360,     0,     0,     0,     0,     0,
     546,   556,   548,   550,   572,     0,   549,   545,   544,   567,
     566,   543,   547,   542,     0,   564,   541,   565,     0,     0,
     425,     0,   424,   600,   602,   601,     0,   598,     0,   320,
       0,     0,     0,     0,     0,   322,     0,     0,     0,     0,
       0,   613,     0,     0,     0,     0,     0,     0,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   452,     0,
       0,     0,     0,   773,   301,     0,     0,     0,   394,   384,
       0,     0,   371,   401,   371,   402,    46,   182,     0,   181,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    70,    72,     0,
       0,     0,     0,     0,   104,   106,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,   206,   195,   333,
     257,     0,     0,     0,     0,   408,     0,     0,   223,   266,
     264,     0,     0,   262,   278,     0,     0,     0,     0,     0,
     365,   365,   496,     0,     0,   508,     0,   513,     0,     0,
       0,     0,     0,   366,   517,   498,     0,   515,   362,   365,
     352,   359,     0,     0,   530,     0,   535,   536,     0,     0,
     537,     0,   537,   537,   559,     0,     0,   607,   610,   609,
     611,   608,   603,   604,   606,   612,   605,     0,     0,     0,
       0,     0,     0,   306,     0,     0,     0,     0,     0,     0,
     613,     0,     0,     0,     0,     0,     0,     0,     0,   494,
     448,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     434,   494,     0,   574,   201,   201,   217,   218,   224,     0,
     291,   396,   395,     0,     0,   386,   391,   390,     0,   388,
     773,   400,   179,   183,     0,   110,   109,     0,   114,     0,
       0,   167,   168,   143,   121,   122,     0,     0,   126,   127,
     128,   132,   134,   136,   150,   151,   152,   153,     0,    67,
      76,    78,    74,    80,    82,    84,   118,     0,     0,   120,
     163,   208,   208,   208,    86,     0,     0,    94,     0,     0,
     102,   208,   208,    50,    54,     0,     0,    44,     0,     0,
       0,    31,     0,     0,   216,   197,   285,     0,     0,     0,
       0,     0,     0,   773,   279,     0,   265,     0,     0,     0,
     492,     0,   356,   364,   365,   497,   367,     0,     0,     0,
       0,     0,     0,   518,   499,   500,   502,   501,   506,     0,
       0,     0,     0,   516,   514,   361,     0,     0,   613,     0,
       0,   539,   568,   573,   569,   557,     0,   426,     0,   613,
       0,     0,     0,     0,     0,   321,     0,   314,     0,     0,
       0,     0,   621,   622,   623,   625,   624,   743,   628,   629,
     630,   736,   627,   626,   731,   732,   733,   734,   735,   718,
     631,   672,   663,   668,   613,   714,   704,   675,   707,   650,
     657,   654,   641,   697,   686,   613,   694,   712,   648,   649,
     719,   635,   642,   690,   706,   711,   708,   669,   647,   716,
     588,   646,   666,   659,   656,   613,   705,   695,   636,   685,
     724,   662,   676,   658,   677,   661,   700,   683,   644,   613,
     633,   717,   639,   701,   653,   680,   692,   652,   613,   681,
     678,   679,   687,   699,   689,   655,   660,   684,   673,   674,
     691,   723,   696,   665,   698,   651,   725,   682,   670,   664,
     671,   667,   710,   638,   632,   703,   709,   643,   645,   634,
     715,   693,   713,   688,   702,   640,   637,   721,   613,   722,
     720,   738,   739,   740,   741,   742,   729,   730,   726,   727,
     728,   737,   614,     0,     0,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,     0,   432,   445,   453,   496,   202,
     203,     0,   220,   222,     0,     0,     0,   776,   774,   775,
     372,     0,   387,     0,     0,   369,     0,     0,   113,   170,
     171,   172,   173,   176,   175,   177,   169,   174,     0,     0,
       0,   208,   208,   208,   208,   208,   208,     0,     0,     0,
     212,   212,   212,   208,     0,     0,     0,   208,     0,     0,
       0,   208,   212,   212,    52,    56,    37,    33,    35,   201,
     204,   207,   223,   206,   287,     0,     0,     0,   409,   410,
       0,   404,     0,   345,   470,     0,   468,     0,   346,     0,
     363,     0,     0,     0,     0,     0,     0,   520,     0,     0,
       0,     0,     0,     0,   613,     0,   531,   538,     0,   613,
       0,   310,   323,   324,   325,     0,     0,     0,     0,   307,
     587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     316,     0,     0,     0,   434,     0,     0,     0,     0,   460,
       0,     0,     0,   457,     0,   456,     0,   466,     0,     0,
       0,   495,   201,   219,   226,   225,     0,     0,   398,   397,
     393,   392,     0,   111,   108,   123,   124,   154,   212,   212,
     212,   212,   212,   212,   156,     0,   119,     0,     0,     0,
       0,     0,   212,    88,     0,     0,   212,    96,     0,     0,
     212,     0,     0,   199,     0,     0,   198,   227,   216,   283,
       0,   282,   281,     0,   280,     0,     0,     0,   350,     0,
     493,   510,     0,   528,   512,     0,     0,     0,   521,   519,
     503,   504,   505,   507,     0,   613,     0,   590,   427,     0,
     592,     0,   318,   315,     0,   615,     0,     0,     0,     0,
       0,   613,   312,     0,     0,     0,   309,   433,   447,     0,
       0,     0,     0,     0,   458,   459,   235,   454,   436,     0,
       0,     0,   221,   777,     0,   373,     0,     0,     0,     0,
       0,     0,     0,     0,   210,   209,     0,    69,    71,    73,
       0,   208,     0,     0,     0,   208,     0,     0,     0,   105,
     107,   205,   201,     0,   232,   223,   288,   411,   348,     0,
     471,   469,     0,   526,   527,     0,     0,     0,   613,     0,
     589,   591,   326,   311,   620,   619,   616,   618,   617,     0,
     319,   317,     0,   461,     0,     0,   467,     0,   435,     0,
       0,     0,     0,     0,     0,   389,    77,    79,    75,    81,
      83,    85,   157,     0,   201,   213,    87,   212,    90,    92,
      95,   212,    98,   100,   103,   200,   229,   228,     0,   193,
     194,     0,   509,   511,   525,   522,     0,   594,   762,   313,
       0,   455,     0,   437,   438,     0,     0,   374,     0,   211,
     214,     0,     0,   208,   208,     0,   208,   208,     0,     0,
     233,     0,   523,   524,   593,     0,     0,     0,     0,     0,
       0,   201,    89,   212,   212,    97,   212,   212,   231,   230,
     472,     0,     0,     0,     0,     0,     0,   375,   215,     0,
       0,     0,     0,   474,     0,     0,     0,     0,   474,     0,
       0,    91,    93,    99,   101,   347,   473,     0,     0,     0,
     462,     0,     0,   441,   439,     0,   488,     0,     0,     0,
     474,   474,     0,     0,   440,     0,   489,   349,     0,   485,
     487,   486,     0,     0,     0,   464,   463,     0,   442,   490,
     491,   475,   483,   477,     0,   479,   484,   481,     0,   474,
       0,   478,   476,   482,   480,   465,     0,     0,     0,     0,
       0,     0,     0,   443,   444
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   509,   807,   973,   974,   972,   510,   511,   797,
     968,   798,   969,   518,  1141,  1142,  1143,  1423,  1421,  1422,
    1424,  1425,  1426,  1433,  1661,  1763,  1764,  1437,  1665,  1766,
    1767,  1441,  1151,  1152,   524,   927,   305,    17,    18,   492,
     977,  1450,  1392,  1576,  1164,  1430,  1655,  1559,  1725,   710,
    1086,  1087,   903,  1674,  1739,  1381,    72,   221,   222,   393,
     228,   229,   230,   413,   231,   410,   640,   411,   636,   993,
     994,   628,   982,  1455,   232,    19,    56,   104,   280,    20,
      21,   874,   875,    22,    23,   623,    80,    24,    25,    26,
    1018,    27,   908,  1537,  1645,    64,   123,   504,   717,   912,
    1404,  1098,   715,    28,    29,    75,   632,    30,    87,    31,
      32,    33,  1385,  1822,  1823,    55,   897,   898,  1467,  1465,
    1791,  1815,  1181,   899,   832,   660,   671,   840,   841,   468,
     845,   706,   707,    34,    70,    71,    35,   473,   474,   475,
    1047,  1061,  1362,    36,    37,   258,   259,    38,   273,   484,
      39,  1090,  1399
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1370
static const yytype_int16 yypact[] =
{
    5671,   241,   -59,   287,   430, -1370,   457, -1370,   173,   180,
   -1370,    73, -1370,   192,    15,   292,   411,   -11, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
     485,   501,   505,   122,   405,   390,   511,   602,    87,   640,
     642,   390, -1370,   389,   431,   393,    34,    90,   288,   646,
     302,   350,   366,   367,   514,   654,   674,   514,   137,    83,
     371, -1370,  5811,   697,   524,    20, -1370,   704, -1370,  5671,
     115,   316,    -4,   409,    36,   310,   472,   739,   681,   435,
     584,   368,   521,   449,   565,   752, -1370,    89,   390,   468,
     762, -1370, -1370, -1370,   -95, -1370,   526, -1370,   559, -1370,
   -1370,   601, -1370,   606, -1370,   628, -1370,   638, -1370, -1370,
   -1370, -1370, -1370,   833, -1370,   685,   933,  7503,  7503, -1370,
   -1370,   974,   299, -1370, -1370, -1370, -1370,   948,  7503,  7503,
    7503, -1370, -1370, -1370,  6284, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370,   690,   698,   778,   786,   808,
     841,   859,   865,   866,   867,   868,   869,   876,   878,   880,
     881,   882,   886,   888,   889,   890,   896,   897,   898,   899,
     900,   901,   903,   904,   905,   906,   909,   910,   912,   913,
     914,   915,   922,   924,   928,   929,   932,   936,   937,   938,
     943,   945,   946,   947,   950,   951,   952,   956,   957,   958,
     959,   962,   968,   970,   975,   977,   980,   984,   989,  7503,
    8956,   -80, -1370,   781,    22,    24,    13,    10,    80,   586,
   -1370, -1370,  1070, -1370, -1370,  1130,  1208, -1370, -1370, -1370,
   -1370,   353,    98,  1199,   373,  1240,   364,   532,  1241,  1300,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,   314, -1370,
    1304,  1307, -1370, -1370,  8676,   179,  1314,  1157,  1086,  1329,
     179, -1370, -1370,     7, -1370,  1165,   381,  1093,  1332,  1310,
   -1370,   176,  -142,    20,  1334,  1335,  1337,  1345,  1346,  1349,
    1350,  -124,  1351,  -113,  9058,  9058, -1370,  1352,  7503,  7503,
     836,   836, -1370,  7503,  5918,    64, -1370,  7503,  5974,  7503,
    7503,  7503,  7503,  7503,  7503,  7503,  7503,  7503,  1045,  7503,
    7503,  7503,  7503,  7503,  7503,  7503,  7503,  7503,  7503,  7503,
    7503,  7503,  7503,  7503,  1049,  7503,  7503,  7503,  1051,  7503,
    7503,  7503,  7503,  7503,  7503,  6432,  7503,  7503,  7503,  7503,
    7503,  7503,  7503,  7503,  7503,  7503,  1053,  1058,  1059,  1060,
    7503,  7503,  1061,  1062,  1063,  7503,  7503,  1371,  1065,  1066,
    5211, -1370,  7503,  7503,  7503,  7503,  7503,    65,  1068,   719,
    7503,  6122,  7503,  7503,  7503,  7503,  7503,  7503,  7503,  7503,
    7503,  7503,  1377, -1370,    20,  1381,  7503,  1382,  1383,   -35,
    1075,   321,  1385,    20, -1370, -1370, -1370,   -43, -1370,    20,
    1248,  1224, -1370,  1392, -1370, -1370,  1393,  1394,  1395,  1397,
    1401, -1370,  1403,  1404,  1405,  8676,  1408,  1209,  1413,  1415,
    1437, -1370, -1370,   198,  1131,  1133, -1370, -1370,  1134,  1134,
    1134,  1134,  1134, -1370,  1134, -1370,  1136,  1134,  1134,  1134,
    1387, -1370,  1387, -1370,  1134,  1134,  1134,  1138,  1387,  1134,
    1387, -1370, -1370, -1370, -1370,  1139,  1140, -1370,    77,  8676,
    1443,  1449,  1450,  1142,  1143, -1370,  -150,  1452,  1454,  1290,
    1147, -1370, -1370, -1370,  1297,  1463,  1299,  1227,  1466,  -100,
   -1370,  7503,  1302,    20,  -136,   468, -1370, -1370, -1370, -1370,
   -1370, -1370,  1469,  1470,   -91, -1370,  1469,   298, -1370,   965,
   -1370,  1162,  9058,  7066,    85, -1370,  7503,  7503,  1270,   107,
   -1370, -1370, -1370,  5479,  6596,   992,  1113,  1135,  5523,  5892,
    5941,  6150,  6303,  6453, -1370,  1734,  1779,  2046,  2091,  6612,
    2358,  2403,  2670,  6757,  6803,  6915,   451,  2715,  6936,  2982,
   -1370,  7210,  7519,  7565, -1370,  8980,  3027,  3294,  3339,  3606,
    4899,  1164,  7586,  7607,  7628,  7650,  7671,  7692,  7713,  7814,
    3651,  3918,  3963, -1370, -1370, -1370, -1370,  7835,  4230,  1170,
    1171,  1172,   531,   558,  1168,  1174,  1175, -1370,  1409,  1753,
    1054,  8738,  8738, -1370,    56, -1370, -1370,  1279,  7503,  7503,
    1182,  7503,  9012,  1183,  1184,  1185,  7503,  1025,  1001,   799,
     790,   676,   676,  1455,  1455,  1455,  1455, -1370, -1370,  -136,
    1384, -1370, -1370,  1173,   110,  1355,  1356,  1358, -1370, -1370,
   -1370,    39,   130,   586,  1224,  1224,  1360,  1336,    20, -1370,
    1361, -1370,     1,  8676,  8676,  1510, -1370, -1370, -1370, -1370,
   -1370,  8676,  1512,  1308,  1309, -1370, -1370,   179,   179,  1516,
   -1370, -1370, -1370, -1370, -1370, -1370,  1519, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370,  1519, -1370, -1370, -1370,
    1526,  1527,  1369,  1223,  7503, -1370,  8676,  8676,  8676,  1354,
     179,  1306,    70,  -123,  1368,  1536,   444,  1537,  -115,  1538,
    1541,  1379, -1370, -1370,  1542,   597, -1370,  1070,  9058,  1495,
    1399,  -136, -1370, -1370,  1530,  -122, -1370,   351,  1245, -1370,
    -122,  1245,  1389,  7503, -1370,  7503, -1370,  7503,  8577,  7141,
    1251,  7503,  7503, -1370,  7503,  8905,  1418,  1418,  7503, -1370,
   -1370, -1370, -1370, -1370, -1370,  7503,  7503,  7503,  7503, -1370,
    7503,  7503,  7503, -1370, -1370, -1370, -1370,  7503,  7503, -1370,
    7503, -1370, -1370, -1370,  8676,  8676,  7503,  7503,  7503,  1560,
   -1370,  1260,  1264,  1265,  1266,  1268,  1269, -1370, -1370, -1370,
    7503,  7503,  7503, -1370,  7503,  1267,  1271,  1273,  1274,  1572,
    1278,  1575,  1280,  1275,  1281, -1370, -1370,  7503,  1270,  8738,
    8738,  1386,  9035,  7503, -1370, -1370, -1370,  1270,  1473,    20,
    1591,   -35,  1478,  1478,  1478,  7503,  1599,  1600,  1302, -1370,
   -1370,    20,  7503,   -62,    20,  1294,  1468,  1477,  1301, -1370,
   -1370,  8676,  8645, -1370, -1370,  1612,  1621,  1313,  1315,   355,
     202,   556,   202,   202, -1370,   357,   202,   202,   202,   556,
     556,   202,   202,   202,   369,   556,   202,   556,  1317,  1319,
    1558,  7503,  9058, -1370, -1370, -1370,   401, -1370,  1323, -1370,
    1338,  1340,  1342,  1344,   377, -1370,  1419,    70,  1644,   114,
    1606, -1370,  1539,  1428,    70,   181,  1491,  1657,   -99,  1658,
    1353,  1520,   383,  1362,  1365,  1535,  1367,   380, -1370,  1669,
    1270,   432,  7503,  1496, -1370,  6741,  1543,  1678, -1370, -1370,
    1684,  7050,  -106, -1370,  -106, -1370, -1370,  9058,  8598, -1370,
    7503, -1370,  5172,   783,  7860,  7503,  7503,  1388,  1390,  7881,
    7902,  7923,  4275,  4542,  7945,  7966,  7987,  8008,  8029,  8050,
    1391,  1398,  8071,  8092,  4587,  1400,  1378,  1402,  1410,  1411,
    1417,  1420,   862,  4854,  8130,  8155, -1370, -1370, -1370,  1421,
     403,  1424,   413,  1429, -1370, -1370,  1407,  1412,  7503,  1270,
    7503,  1080,  1270,  1270,  1270,  1430,  1641,  1569,  -136, -1370,
   -1370,  1555,  1440,  1459,  1485,  9058,  1677,    40,  1399, -1370,
    9058,  7503,  1499, -1370, -1370,   -62,  7503,  1514,  1517,  1695,
    8645,  8645, -1370,  1540,  1696,  1518,  1522,  1524,  1659,  1706,
    1525,  1707,    45, -1370, -1370, -1370,  1573,  1578, -1370,  8645,
   -1370, -1370,  1546,   487, -1370,  1736, -1370, -1370,  1619,  1823,
   -1370,  1833, -1370, -1370, -1370,  1532,  8176, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370,   550,    70,  1841,
    1842,  1843,  1844, -1370,  1845,  1545,   416,  1548,  1622,    70,
   -1370,  1178,  1752,  1549,   424,  1623,    70,  1850,   182,   597,
   -1370,   283,  7503,  1550,  1551,  1557,  1854,  1854,  1564,  1695,
      12,   597,  8676, -1370,   -18,   326,  1556, -1370,   919,   113,
   -1370, -1370,  9058,  1650,  1856, -1370, -1370,  9058,   428, -1370,
    1496, -1370, -1370,  9058,  7503, -1370, -1370,  7503, -1370,  8197,
    8619, -1370, -1370, -1370, -1370, -1370,  7503,  7503, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,  7503, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370,  7503,  7503, -1370,
   -1370,  1571,  1571,  1571, -1370,  1576,   740, -1370,  1577,   744,
   -1370,  1571,  1571, -1370, -1370,  1580,  1581,  1080,  1582,  1584,
    1585, -1370,  7503,  7503,  1302,  1473, -1370,  1882,  1882,  1882,
    7503,  7503,  1884,  1496,  9058,  1854, -1370,  8218,  1885,  1886,
   -1370,   446, -1370, -1370,  8645, -1370, -1370,  1893,  7503,  1894,
    1849,    -5,  7503, -1370, -1370, -1370, -1370, -1370, -1370,  1592,
    1593,  1594,  7503, -1370, -1370, -1370,   401,  1859, -1370,  1602,
    1902, -1370,   556, -1370,   556,   556,  7503, -1370,  1865, -1370,
     464,  1605,  1610,  1615,  1611, -1370,    70, -1370,    70,  1620,
     470,  1502, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370,  1748,    70, -1370,  1626,   473,  1627,  1710,
      70,   519,  1630,  1801,  1804,  1642,  8240,  1885,  1854,  1854,
   -1370,   522,   525,  1886,   528,   -10, -1370, -1370, -1370, -1370,
   -1370,  1956, -1370, -1370,   432,  7503,  7503, -1370, -1370,  1647,
   -1370,  7122, -1370,  7194,  1652, -1370,  8261,  8282, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,  8303,  8324,
    8345,  1571,  1571,  1571,  1571,  1571,  1571,   940,  8366,  1908,
    1796,  1796,  1796,  1571,  1656,  1660,  1661,  1571,  1663,  1664,
    1672,  1571,  1796,  1796, -1370, -1370, -1370, -1370, -1370,  8926,
    -135,  9058,  1399,  1569, -1370,   533,   537,   539,  9058,  9058,
    1948, -1370,   555,  1951, -1370,   588, -1370,   593, -1370,  1967,
   -1370,   595,  8387,   600,  1674,  1679,  1829, -1370,  8408,  1676,
    1681,  1685,  8433,   561, -1370,  1814, -1370, -1370,  8471, -1370,
    2126, -1370, -1370, -1370, -1370,  1986,   603,   605,    70, -1370,
   -1370,  2438,  2750,  3062,  3374,  3686,  3998,  1941,   608,    70,
   -1370,    70,  1688,   610,    12,  7503,  1690,  1697,  1695, -1370,
     613,   615,   659, -1370,  2003, -1370,   661, -1370,   599,  2004,
    1957,  8654,   326, -1370,  9058,  9058,  2006,  2008, -1370,  9058,
   -1370,  9058,  7050, -1370, -1370, -1370, -1370, -1370,  1796,  1796,
    1796,  1796,  1796,  1796, -1370,  7503, -1370,  2009,  1960,  1702,
    1703,  1704,  1796, -1370,  1713,  1714,  1796, -1370,  1715,  1716,
    1796,  1712,  1719, -1370,  1840,  7503, -1370,  1913,  1302, -1370,
    2024, -1370, -1370,  7503, -1370,  1803,  1858,  2031, -1370,  2037,
   -1370, -1370,  2038,   949, -1370,  2039,  7503,  7503, -1370, -1370,
   -1370, -1370, -1370, -1370,  1992, -1370,  4310, -1370, -1370,  4622,
   -1370,  1740, -1370, -1370,   686, -1370,  1987,  1942,  1929,  1933,
    1846, -1370, -1370,   721,   724,    70, -1370,   -10, -1370,  8492,
    1885,  1886,   726,  1900, -1370, -1370, -1370, -1370, -1370,  2074,
     -17,   210, -1370, -1370,  2060,  1768,   728,  1771,  1772,  1773,
    1774,  1775,  1776,  8513, -1370,  1777,  2086, -1370, -1370, -1370,
    1781,  1571,  1780,  1783,  1810,  1571,  1784,  1797,  1825, -1370,
   -1370, -1370,  8926,   400,  1998,  1399, -1370,  9058, -1370,  2136,
   -1370, -1370,  1828, -1370, -1370,  1835,  8535,  8556, -1370,  4934,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,  5246,
   -1370, -1370,   730, -1370,   745,   747, -1370,  2138, -1370,  2142,
    2145,  1838,  1847,  7503,  2152, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370,  2153,   326,  1851, -1370,  1796, -1370, -1370,
   -1370,  1796, -1370, -1370, -1370, -1370,  1962,  1963,  1854, -1370,
   -1370,  1852, -1370, -1370,  1014, -1370,  5558, -1370, -1370, -1370,
    1979, -1370,   753, -1370, -1370,  2159,  2162,  9058,  2148, -1370,
   -1370,  2166,  1860,  1571,  1571,  1861,  1571,  1571,  2020,  2023,
    1867,  2178, -1370, -1370, -1370,  2180,  2184,  2178,  1876,  1879,
    7503,   326, -1370,  1796,  1796, -1370,  1796,  1796, -1370, -1370,
   -1370,   773,   777,  1888,   780,  1889,  2000,  9058, -1370,  1890,
    1892,  1896,  1897, -1370,  2193,  2194,  2178,  2178, -1370,  2007,
    2200, -1370, -1370, -1370, -1370,   337, -1370,  1895,   800,   802,
     343,  2207,   805, -1370, -1370,     4,  2082,   259,    -8,  2178,
   -1370, -1370,  2137,  1984, -1370,  2007, -1370, -1370,   327, -1370,
   -1370, -1370,   242,   278,   809,   343,   343,  2072, -1370, -1370,
   -1370, -1370, -1370, -1370,   253, -1370, -1370, -1370,   294, -1370,
    2005, -1370, -1370, -1370, -1370,   343,    54,  2053,  2058,  2065,
    2067,  2229,  2231, -1370, -1370
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1370,  2160,   -72, -1370, -1370, -1370, -1370,  -634, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370,  1506,  1944, -1370,  -182,  -479,
    1084, -1370, -1083, -1370,   797, -1043, -1370, -1030, -1370,  -817,
   -1370,   857,  -984, -1370, -1370, -1051, -1370, -1370,  1857,  -220,
    -208,  1855,  -392,  1565, -1370, -1370,   534, -1370, -1370, -1370,
    1276,  1444,   358,    -2, -1370, -1370, -1370,  2165,  1778, -1370,
   -1370,  -874, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
    -954, -1370,  -698, -1370, -1370,   138,  2208,  1988, -1370,  1559,
   -1370,   735,  1782, -1370, -1370, -1370, -1370, -1370,    52, -1370,
   -1370, -1370,   765, -1370,   447, -1370,  1214,  1203, -1369, -1343,
   -1212, -1321, -1070, -1370,  -822,   455,   184,   106,  -641,  -314,
    1609,  -883, -1370, -1370, -1370,  2155, -1370,  -258, -1370,  1607,
    1090,  -922, -1370, -1370, -1370, -1370,  1868, -1370, -1370, -1370,
   -1370,  -990, -1370
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -576
static const yytype_int16 yytable[] =
{
     220,   988,  1393,  1056,  1173,  1070,   399,  1000,  1001,  1384,
    1064,  1019,   480,   226,  1526,   712,   371,   637,  -405,   401,
     283,  1389,   913,   226,   915,  -407,  1382,  -406,  1528,   241,
     849,   850,   702,   702,  1520,   394,   855,    99,   857,   250,
     251,   252,   253,   254,   255,   400,  1182,  1183,   906,  1194,
    1195,  1196,  1197,  -575,   392,   294,   295,   395,  1867,   815,
    1171,   242,   795,  1475,   906,  1205,   300,   301,   302,   825,
    1709,   593,   304,   869,  1390,   494,   243,   691,   625,  1842,
     502,    68,  1836,   594,   244,   493,   129,   703,   703,   916,
      90,   506,   275,   105,   481,   682,   245,   626,   491,  1431,
    1432,   418,  1574,    95,   876,   634,   991,  1198,  1442,  1443,
    1405,   650,   883,   371,    12,   826,  1397,   372,   373,   374,
     375,   376,   377,   378,  1462,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,  1231,  1398,
     808,   718,   482,   635,   702,   683,   127,   370,    67,   100,
     278,   392,    74,   818,   246,   685,    42,   128,  1529,   235,
     236,   692,    91,   966,   276,   992,   101,  1476,   515,   516,
     684,   284,   419,   827,  1220,   247,   130,   403,  1575,   237,
    1184,   102,   469,  1461,  1530,  1230,   619,   503,   877,   726,
     727,   907,  1367,   627,  1710,   470,   884,  1386,   503,   703,
     256,   250,   251,   252,   253,   254,   255,  1099,   103,  1868,
     704,   705,  1069,  1843,  1100,    12,  1101,  -575,   284,  1477,
     796,    92,   731,   277,   106,   828,   248,   512,   483,   595,
    1470,   513,   904,   396,  1837,   519,   523,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   823,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,  1705,   551,   552,   553,    69,   555,   556,   557,
     558,   559,   560,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   402,   711,  1485,  1704,   577,   578,
      43,   107,  1391,   582,   583,    76,   238,  1490,    79,   517,
     588,   589,   590,   591,   592,   110,  1851,   471,   602,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     517,   227,   719,   398,   220,   722,  -405,  1521,  1522,   829,
     830,   227,  1501,  -407,  1155,  -406,   730,   833,  1199,  1200,
    1201,  1058,  1855,  1502,   596,   472,  1861,  1452,   257,   816,
    1172,  1372,  1496,   112,  1497,  1825,  1202,   870,   871,   872,
     873,  1832,   256,  1503,   491,  1389,  1573,   425,    77,   114,
     116,   267,   863,   864,   865,  1839,   421,  1504,  1548,  1549,
    1550,  1551,  1552,  1553,   486,  1711,  1505,  1863,    65,  1212,
    1562,  1214,  1215,   403,  1566,    66,   239,  1373,  1570,   837,
     838,  1560,  1561,  -299,   811,  1852,  1849,    73,  1065,  1369,
     491,    78,  1571,  1572,   416,  1826,   240,  1862,  1390,   708,
     732,  1826,   108,  1853,  1026,  1059,  1506,   417,   260,   989,
    1840,    40,   995,    84,   422,  1084,   111,  1085,   426,  1712,
      44,  1856,  1027,   817,   728,   729,  1854,   423,  1632,  1642,
     940,   941,   735,  1037,  1850,  1374,    41,  1038,  1864,  1857,
    1841,   372,   373,   374,   375,   376,   377,   378,  1577,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1858,   261,   113,   880,   279,  1820,    81,  -299,
    1508,  1827,  1066,  1370,   881,  1039,  1513,  1827,  1040,  1165,
     115,   117,   268,    12,    82,  1828,    45,  1375,    83,  1845,
    1846,  1828,    46,  1041,    88,   487,  1074,  1002,  1647,  1648,
    1649,  1650,  1651,  1652,    86,  1075,   799,   800,  1207,   802,
     721,  1042,  1660,    57,   370,   427,  1664,  1208,  1865,  1043,
    1668,   372,   373,   374,   375,   376,   377,   378,    47,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1606,    48,    97,  1794,  1531,  1609,   372,   373,
     374,   375,   376,   377,   378,    58,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,  1735,
      59,  1218,    85,   428,  1818,  1819,  1736,   118,    96,   271,
    1219,   978,  1604,    49,  1638,    89,   429,   118,    98,   297,
     298,  1605,   862,  1044,   272,  1045,   967,  1844,  1727,  1639,
      50,  1737,  1731,    51,  1614,   975,   432,   433,  1028,  1029,
      60,  1628,  1046,   630,   403,  1623,   672,  1624,   119,    52,
      53,  1760,   677,    93,   679,    94,   120,    61,   119,   109,
      62,   121,   404,   917,    54,   918,   224,   124,   889,   922,
     923,   122,   924,   909,   910,   890,   929,  1024,  1025,  1030,
    1031,   225,    63,   930,   931,   932,   933,   125,   934,   935,
     936,  1032,  1031,  1689,   131,   937,   938,  1770,   939,  1053,
    1054,  1740,  1080,  1081,   942,   943,   944,  1762,  1798,  1699,
     223,  1765,   387,   388,   389,   390,   391,   233,   952,   953,
     954,   891,   955,   262,   892,  1145,  1146,   405,  1083,   249,
    1783,  1784,   264,  1786,  1787,  1148,  1149,  -267,  1227,  1054,
     893,   971,   598,   599,   406,   600,  1365,  1054,   601,   894,
    1402,  1403,   263,   985,  1435,  1436,   265,   407,  1439,  1440,
     990,  1702,   266,  1799,  1800,   274,  1801,  1802,  1468,  1469,
     270,  1675,   269,   756,   757,   281,  1746,   285,  1388,   895,
     842,   843,   408,   846,   847,   848,  1491,  1054,   279,   851,
     852,   853,  1499,  1054,   856,  1510,  1054,  1156,   409,  1036,
    1158,  1159,  1160,   372,   373,   374,   375,   376,   377,   378,
     286,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   385,   386,   387,   388,   389,   390,
     391,   896,   384,   385,   386,   387,   388,   389,   390,   391,
    1088,  1514,  1081,  1092,  1523,  1524,   291,  1525,  1524,  1097,
    1527,  1469,   287,   788,   789,  1579,  1580,   288,  1103,  1581,
    1580,  1582,  1580,  1109,  1110,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,  1584,  1524,   289,
     790,   791,   372,   373,   374,   375,   376,   377,   378,   290,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   292,   661,   662,   663,   664,  1157,   665,
    1586,  1587,   667,   668,   669,  1588,  1589,  1591,  1592,   673,
     674,   675,  1594,  1595,   678,  1612,  1054,  1613,  1054,  1174,
    1622,  1054,  1626,  1054,  1177,  1633,  1587,  1634,  1524,   372,
     373,   374,   375,   376,   377,   378,   293,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,   299,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,  1635,  1524,  1637,  1589,   372,   373,   374,   375,   376,
     377,   378,    68,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1683,  1684,  1693,  1054,
    1376,   306,   372,   373,   374,   375,   376,   377,   378,   307,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1406,  1700,  1054,  1407,  1701,  1054,  1706,  1469,
    1715,  1403,  1749,  1054,  1418,  1419,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1420,  1750,  1587,  1751,
    1589,  1772,  1773,  1776,  1777,  1427,  1428,   375,   376,   377,
     378,  1395,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,  1803,  1804,  1805,  1806,   308,
    1449,  1451,  1808,  1804,   397,  1106,  1107,   309,  1458,  1459,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   412,  1830,  1804,  1831,  1804,  1472,  1834,  1835,   310,
    1478,  1859,  1804,   372,   373,   374,   375,   376,   377,   378,
    1482,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1488,   372,   373,   374,   375,   376,
     377,   378,   311,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,  1456,  1457,   819,   820,
     312,   983,   984,   414,  1136,  1137,   313,   314,   315,   316,
     317,  1232,  1233,  1234,  1235,  1236,  1237,   318,  1238,   319,
    1239,   320,   321,   322,  1240,  1241,  1242,   323,  1243,   324,
     325,   326,  1244,  1245,  1246,  1247,  1248,   327,   328,   329,
     330,   331,   332,  1249,   333,   334,   335,   336,  1250,  1251,
     337,   338,  1252,   339,   340,   341,   342,  1253,  1254,  1255,
    1256,  1257,  1396,   343,  1258,   344,  1259,  1260,  1261,   345,
     346,  1262,  1263,   347,  1264,  1265,  1266,   348,   349,   350,
    1267,   415,  1554,  1555,   351,  1268,   352,   353,   354,  1269,
     420,   355,   356,   357,  1270,  1271,  1272,   358,   359,   360,
     361,  1273,  1274,   362,  1275,  1276,  1277,  1278,   723,   363,
    1279,   364,  1280,  1281,  1282,  1283,   365,  1284,   366,  1285,
    1286,   367,  1287,  1288,  1289,   368,  1290,  1291,  1292,  1293,
     369,   424,   430,   431,  1294,   736,  1295,   434,  1296,  1297,
     435,  1298,  1299,  1300,  1301,  1302,  1303,   476,  1304,  1305,
    1306,  1307,  1308,  1534,  1535,   477,  1309,   478,  1310,  1539,
    1311,  1541,   479,   485,   488,   489,   490,   495,   496,  1312,
     497,  1313,  1314,  1315,  1316,  1317,  1318,  1319,   498,   499,
    1320,  1321,   500,   501,   505,   508,  1322,   534,  1323,  1324,
    1325,   550,  1326,   554,  1327,   573,  1328,  1329,  1330,  1331,
     574,   575,   576,   579,   580,   581,   584,   585,   586,   597,
     618,  1332,  1333,  1334,   620,   622,   624,   629,   631,   638,
    1335,   639,  1336,  1337,  1338,   641,   642,   643,   644,  1339,
     645,  1340,  1341,  1342,   646,  1343,   647,   648,   649,  1344,
    1345,   651,  1346,  1347,  1348,  1349,   653,   652,   654,  1350,
     373,   374,   375,   376,   377,   378,   737,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     655,   670,   657,  1629,   658,   659,   686,   666,   738,   676,
     680,   681,   687,   688,   689,   693,   690,   694,   695,   696,
    1351,  1352,  1353,  1354,  1355,   697,   698,   699,   700,   701,
    1097,   709,   714,   716,   724,    12,   771,   785,   786,   787,
     792,   793,   794,  1653,   -53,   391,   810,  1356,  1357,  1358,
    1359,  1360,  1361,   801,   804,   805,   806,   812,   813,   809,
     814,   821,   824,  1672,   822,  1232,  1233,  1234,  1235,  1236,
    1237,  1677,  1238,   831,  1239,   834,   835,   836,  1240,  1241,
    1242,   839,  1243,   844,  1686,  1687,  1244,  1245,  1246,  1247,
    1248,   858,   859,   860,   861,   868,   878,  1249,   866,   879,
     882,   885,  1250,  1251,   886,   888,  1252,   887,   901,   902,
     905,  1253,  1254,  1255,  1256,  1257,   911,   926,  1258,   906,
    1259,  1260,  1261,   921,   945,  1262,  1263,   946,  1264,  1265,
    1266,   947,   948,   949,  1267,   950,   951,   960,   956,  1268,
     962,   959,   957,  1269,   958,   961,   964,   963,  1270,  1271,
    1272,   -55,   965,   976,   979,  1273,  1274,   981,  1275,  1276,
    1277,  1278,   986,   987,  1279,   996,  1500,  1281,  1282,  1283,
     997,  1284,   999,  1285,  1286,  1020,  1287,  1288,  1289,   998,
    1290,  1291,  1292,  1293,  1021,  1022,  1035,  1023,  1294,  1033,
    1295,  1034,  1296,  1297,  1048,  1298,  1299,  1300,  1301,  1302,
    1303,  1757,  1304,  1305,  1306,  1307,  1308,  1057,  1055,  1049,
    1309,  1050,  1310,  1051,  1311,  1052,  1060,  1063,  1062,  1067,
    1068,  1071,  1073,  1312,  1072,  1313,  1314,  1315,  1316,  1317,
    1318,  1319,  1082,  1076,  1320,  1321,  1077,  1078,  1079,  1089,
    1322,  1094,  1323,  1324,  1325,  1093,  1326,  1095,  1327,  1130,
    1328,  1329,  1330,  1331,  1162,  1163,  1166,  1170,  1180,  1186,
    1111,  1190,  1112,  1124,  1185,  1332,  1333,  1334,  1797,  1191,
    1125,  1193,  1129,  1131,  1335,  1203,  1336,  1337,  1338,  1153,
    1204,  1132,  1133,  1339,  1154,  1340,  1341,  1342,  1134,  1343,
    1206,  1135,  1144,  1344,  1345,  1147,  1346,  1347,  1348,  1349,
    1150,  1209,  1161,  1350,   372,   373,   374,   375,   376,   377,
     378,  1167,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   374,   375,   376,   377,   378,
    1168,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1351,  1352,  1353,  1354,  1355,   372,
     373,   374,   375,   376,   377,   378,  1169,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
    1175,  1356,  1357,  1358,  1359,  1360,  1361,  1232,  1233,  1234,
    1235,  1236,  1237,  1210,  1238,  1178,  1239,  1211,  1179,  1187,
    1240,  1241,  1242,  1188,  1243,  1189,  1192,  1213,  1244,  1245,
    1246,  1247,  1248,  1216,  1221,  1222,  1223,  1224,  1225,  1249,
    1363,  1229,  1366,  1368,  1250,  1251,  1226,  1380,  1252,  1228,
    1364,  1377,  1378,  1253,  1254,  1255,  1256,  1257,  1379,  1394,
    1258,  1400,  1259,  1260,  1261,  1383,  1401,  1262,  1263,  1429,
    1264,  1265,  1266,  1434,  1438,  1454,  1267,  1460,  1464,  1466,
    1474,  1268,  1444,  1445,  1446,  1269,  1447,  1448,  1471,  1473,
    1270,  1271,  1272,  1479,  1480,  1481,  1487,  1273,  1274,  1484,
    1275,  1276,  1277,  1278,  1486,  1489,  1279,  1492,  1607,  1281,
    1282,  1283,  1493,  1284,  1495,  1285,  1286,  1494,  1287,  1288,
    1289,  1498,  1290,  1291,  1292,  1293,  1507,  1509,  1511,  1512,
    1294,  1515,  1295,  1516,  1296,  1297,  1517,  1298,  1299,  1300,
    1301,  1302,  1303,  1518,  1304,  1305,  1306,  1307,  1308,  1532,
    1536,  1557,  1309,  1542,  1310,  1558,  1311,  1563,  1583,  1585,
    1590,  1598,  1564,  1565,  1567,  1312,  1568,  1313,  1314,  1315,
    1316,  1317,  1318,  1319,  1569,  1596,  1320,  1321,  1600,  1611,
    1597,  1621,  1322,  1601,  1323,  1324,  1325,  1602,  1326,  1625,
    1327,  1630,  1328,  1329,  1330,  1331,  1636,  1640,  1631,  1643,
    1641,  1644,  1654,  1656,  1657,  1658,  1659,  1332,  1333,  1334,
    1662,  1663,  1666,  1667,  1669,  1671,  1335,  1676,  1336,  1337,
    1338,  1670,  1673,  1678,  1680,  1339,  1679,  1340,  1341,  1342,
    1681,  1343,  1688,  1682,  1685,  1344,  1345,   745,  1346,  1347,
    1348,  1349,  1692,  1695,  1694,  1350,   372,   373,   374,   375,
     376,   377,   378,  1696,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,  1697,  1707,  1708,
    1713,  1714,  1698,  1716,  1717,  1718,  1719,  1720,  1721,  1724,
    1723,  1728,   746,  1726,  1729,  1732,  1351,  1352,  1353,  1354,
    1355,   372,   373,   374,   375,   376,   377,   378,  1733,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,  1730,  1356,  1357,  1358,  1359,  1360,  1361,  1232,
    1233,  1234,  1235,  1236,  1237,  1738,  1238,  1734,  1239,  1741,
    1742,  1752,  1240,  1241,  1242,  1753,  1243,  1743,  1754,  1755,
    1244,  1245,  1246,  1247,  1248,  1758,  1759,  1775,  1756,  1768,
    1769,  1249,  1778,  1771,  1761,  1779,  1250,  1251,  1780,  1781,
    1252,  1788,  1782,  1785,  1789,  1253,  1254,  1255,  1256,  1257,
    1524,  1790,  1258,  1792,  1259,  1260,  1261,  1793,  1795,  1262,
    1263,  1796,  1264,  1265,  1266,  1810,  1816,  1817,  1267,  1807,
    1809,  1821,  1811,  1268,  1812,  1824,  1829,  1269,  1813,  1814,
    1833,  1838,  1270,  1271,  1272,  1836,  1847,  1860,  1866,  1273,
    1274,  1869,  1275,  1276,  1277,  1278,  1870,  1871,  1279,  1872,
    1610,  1281,  1282,  1283,  1873,  1284,  1874,  1285,  1286,   234,
    1287,  1288,  1289,   928,  1290,  1291,  1292,  1293,   514,  1453,
    1578,  1533,  1294,   621,  1295,   980,  1296,  1297,   633,  1298,
    1299,  1300,  1301,  1302,  1303,   282,  1304,  1305,  1306,  1307,
    1308,  1176,   900,   713,  1309,   126,  1310,  1646,  1311,  1627,
     914,   507,  1848,  1371,  1387,   854,   296,  1312,   720,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1483,   867,  1320,  1321,
       0,   656,     0,     0,  1322,     0,  1323,  1324,  1325,     0,
    1326,     0,  1327,     0,  1328,  1329,  1330,  1331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1332,
    1333,  1334,     0,     0,     0,     0,     0,     0,  1335,     0,
    1336,  1337,  1338,     0,     0,     0,     0,  1339,     0,  1340,
    1341,  1342,     0,  1343,     0,     0,     0,  1344,  1345,   747,
    1346,  1347,  1348,  1349,     0,     0,     0,  1350,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   748,     0,     0,     0,  1351,  1352,
    1353,  1354,  1355,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,  1356,  1357,  1358,  1359,  1360,
    1361,  1232,  1233,  1234,  1235,  1236,  1237,     0,  1238,     0,
    1239,     0,     0,     0,  1240,  1241,  1242,     0,  1243,     0,
       0,     0,  1244,  1245,  1246,  1247,  1248,     0,     0,     0,
       0,     0,     0,  1249,     0,     0,     0,     0,  1250,  1251,
       0,     0,  1252,     0,     0,     0,     0,  1253,  1254,  1255,
    1256,  1257,     0,     0,  1258,     0,  1259,  1260,  1261,     0,
       0,  1262,  1263,     0,  1264,  1265,  1266,     0,     0,     0,
    1267,     0,     0,     0,     0,  1268,     0,     0,     0,  1269,
       0,     0,     0,     0,  1270,  1271,  1272,     0,     0,     0,
       0,  1273,  1274,     0,  1275,  1276,  1277,  1278,     0,     0,
    1279,     0,  1615,  1281,  1282,  1283,     0,  1284,     0,  1285,
    1286,     0,  1287,  1288,  1289,     0,  1290,  1291,  1292,  1293,
       0,     0,     0,     0,  1294,     0,  1295,     0,  1296,  1297,
       0,  1298,  1299,  1300,  1301,  1302,  1303,     0,  1304,  1305,
    1306,  1307,  1308,     0,     0,     0,  1309,     0,  1310,     0,
    1311,     0,     0,     0,     0,     0,     0,     0,     0,  1312,
       0,  1313,  1314,  1315,  1316,  1317,  1318,  1319,     0,     0,
    1320,  1321,     0,     0,     0,     0,  1322,     0,  1323,  1324,
    1325,     0,  1326,     0,  1327,     0,  1328,  1329,  1330,  1331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1332,  1333,  1334,     0,     0,     0,     0,     0,     0,
    1335,     0,  1336,  1337,  1338,     0,     0,     0,     0,  1339,
       0,  1340,  1341,  1342,     0,  1343,     0,     0,     0,  1344,
    1345,   750,  1346,  1347,  1348,  1349,     0,     0,     0,  1350,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   751,     0,     0,     0,
    1351,  1352,  1353,  1354,  1355,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,  1356,  1357,  1358,
    1359,  1360,  1361,  1232,  1233,  1234,  1235,  1236,  1237,     0,
    1238,     0,  1239,     0,     0,     0,  1240,  1241,  1242,     0,
    1243,     0,     0,     0,  1244,  1245,  1246,  1247,  1248,     0,
       0,     0,     0,     0,     0,  1249,     0,     0,     0,     0,
    1250,  1251,     0,     0,  1252,     0,     0,     0,     0,  1253,
    1254,  1255,  1256,  1257,     0,     0,  1258,     0,  1259,  1260,
    1261,     0,     0,  1262,  1263,     0,  1264,  1265,  1266,     0,
       0,     0,  1267,     0,     0,     0,     0,  1268,     0,     0,
       0,  1269,     0,     0,     0,     0,  1270,  1271,  1272,     0,
       0,     0,     0,  1273,  1274,     0,  1275,  1276,  1277,  1278,
       0,     0,  1279,     0,  1616,  1281,  1282,  1283,     0,  1284,
       0,  1285,  1286,     0,  1287,  1288,  1289,     0,  1290,  1291,
    1292,  1293,     0,     0,     0,     0,  1294,     0,  1295,     0,
    1296,  1297,     0,  1298,  1299,  1300,  1301,  1302,  1303,     0,
    1304,  1305,  1306,  1307,  1308,     0,     0,     0,  1309,     0,
    1310,     0,  1311,     0,     0,     0,     0,     0,     0,     0,
       0,  1312,     0,  1313,  1314,  1315,  1316,  1317,  1318,  1319,
       0,     0,  1320,  1321,     0,     0,     0,     0,  1322,     0,
    1323,  1324,  1325,     0,  1326,     0,  1327,     0,  1328,  1329,
    1330,  1331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1332,  1333,  1334,     0,     0,     0,     0,
       0,     0,  1335,     0,  1336,  1337,  1338,     0,     0,     0,
       0,  1339,     0,  1340,  1341,  1342,     0,  1343,     0,     0,
       0,  1344,  1345,   752,  1346,  1347,  1348,  1349,     0,     0,
       0,  1350,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   758,     0,
       0,     0,  1351,  1352,  1353,  1354,  1355,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,  1356,
    1357,  1358,  1359,  1360,  1361,  1232,  1233,  1234,  1235,  1236,
    1237,     0,  1238,     0,  1239,     0,     0,     0,  1240,  1241,
    1242,     0,  1243,     0,     0,     0,  1244,  1245,  1246,  1247,
    1248,     0,     0,     0,     0,     0,     0,  1249,     0,     0,
       0,     0,  1250,  1251,     0,     0,  1252,     0,     0,     0,
       0,  1253,  1254,  1255,  1256,  1257,     0,     0,  1258,     0,
    1259,  1260,  1261,     0,     0,  1262,  1263,     0,  1264,  1265,
    1266,     0,     0,     0,  1267,     0,     0,     0,     0,  1268,
       0,     0,     0,  1269,     0,     0,     0,     0,  1270,  1271,
    1272,     0,     0,     0,     0,  1273,  1274,     0,  1275,  1276,
    1277,  1278,     0,     0,  1279,     0,  1617,  1281,  1282,  1283,
       0,  1284,     0,  1285,  1286,     0,  1287,  1288,  1289,     0,
    1290,  1291,  1292,  1293,     0,     0,     0,     0,  1294,     0,
    1295,     0,  1296,  1297,     0,  1298,  1299,  1300,  1301,  1302,
    1303,     0,  1304,  1305,  1306,  1307,  1308,     0,     0,     0,
    1309,     0,  1310,     0,  1311,     0,     0,     0,     0,     0,
       0,     0,     0,  1312,     0,  1313,  1314,  1315,  1316,  1317,
    1318,  1319,     0,     0,  1320,  1321,     0,     0,     0,     0,
    1322,     0,  1323,  1324,  1325,     0,  1326,     0,  1327,     0,
    1328,  1329,  1330,  1331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1332,  1333,  1334,     0,     0,
       0,     0,     0,     0,  1335,     0,  1336,  1337,  1338,     0,
       0,     0,     0,  1339,     0,  1340,  1341,  1342,     0,  1343,
       0,     0,     0,  1344,  1345,   760,  1346,  1347,  1348,  1349,
       0,     0,     0,  1350,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     765,     0,     0,     0,  1351,  1352,  1353,  1354,  1355,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,  1356,  1357,  1358,  1359,  1360,  1361,  1232,  1233,  1234,
    1235,  1236,  1237,     0,  1238,     0,  1239,     0,     0,     0,
    1240,  1241,  1242,     0,  1243,     0,     0,     0,  1244,  1245,
    1246,  1247,  1248,     0,     0,     0,     0,     0,     0,  1249,
       0,     0,     0,     0,  1250,  1251,     0,     0,  1252,     0,
       0,     0,     0,  1253,  1254,  1255,  1256,  1257,     0,     0,
    1258,     0,  1259,  1260,  1261,     0,     0,  1262,  1263,     0,
    1264,  1265,  1266,     0,     0,     0,  1267,     0,     0,     0,
       0,  1268,     0,     0,     0,  1269,     0,     0,     0,     0,
    1270,  1271,  1272,     0,     0,     0,     0,  1273,  1274,     0,
    1275,  1276,  1277,  1278,     0,     0,  1279,     0,  1618,  1281,
    1282,  1283,     0,  1284,     0,  1285,  1286,     0,  1287,  1288,
    1289,     0,  1290,  1291,  1292,  1293,     0,     0,     0,     0,
    1294,     0,  1295,     0,  1296,  1297,     0,  1298,  1299,  1300,
    1301,  1302,  1303,     0,  1304,  1305,  1306,  1307,  1308,     0,
       0,     0,  1309,     0,  1310,     0,  1311,     0,     0,     0,
       0,     0,     0,     0,     0,  1312,     0,  1313,  1314,  1315,
    1316,  1317,  1318,  1319,     0,     0,  1320,  1321,     0,     0,
       0,     0,  1322,     0,  1323,  1324,  1325,     0,  1326,     0,
    1327,     0,  1328,  1329,  1330,  1331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1332,  1333,  1334,
       0,     0,     0,     0,     0,     0,  1335,     0,  1336,  1337,
    1338,     0,     0,     0,     0,  1339,     0,  1340,  1341,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,   766,  1346,  1347,
    1348,  1349,     0,     0,     0,  1350,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   767,     0,     0,     0,  1351,  1352,  1353,  1354,
    1355,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,  1356,  1357,  1358,  1359,  1360,  1361,  1232,
    1233,  1234,  1235,  1236,  1237,     0,  1238,     0,  1239,     0,
       0,     0,  1240,  1241,  1242,     0,  1243,     0,     0,     0,
    1244,  1245,  1246,  1247,  1248,     0,     0,     0,     0,     0,
       0,  1249,     0,     0,     0,     0,  1250,  1251,     0,     0,
    1252,     0,     0,     0,     0,  1253,  1254,  1255,  1256,  1257,
       0,     0,  1258,     0,  1259,  1260,  1261,     0,     0,  1262,
    1263,     0,  1264,  1265,  1266,     0,     0,     0,  1267,     0,
       0,     0,     0,  1268,     0,     0,     0,  1269,     0,     0,
       0,     0,  1270,  1271,  1272,     0,     0,     0,     0,  1273,
    1274,     0,  1275,  1276,  1277,  1278,     0,     0,  1279,     0,
    1619,  1281,  1282,  1283,     0,  1284,     0,  1285,  1286,     0,
    1287,  1288,  1289,     0,  1290,  1291,  1292,  1293,     0,     0,
       0,     0,  1294,     0,  1295,     0,  1296,  1297,     0,  1298,
    1299,  1300,  1301,  1302,  1303,     0,  1304,  1305,  1306,  1307,
    1308,     0,     0,     0,  1309,     0,  1310,     0,  1311,     0,
       0,     0,     0,     0,     0,     0,     0,  1312,     0,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,     0,     0,  1320,  1321,
       0,     0,     0,     0,  1322,     0,  1323,  1324,  1325,     0,
    1326,     0,  1327,     0,  1328,  1329,  1330,  1331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1332,
    1333,  1334,     0,     0,     0,     0,     0,     0,  1335,     0,
    1336,  1337,  1338,     0,     0,     0,     0,  1339,     0,  1340,
    1341,  1342,     0,  1343,     0,     0,     0,  1344,  1345,   768,
    1346,  1347,  1348,  1349,     0,     0,     0,  1350,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   780,     0,     0,     0,  1351,  1352,
    1353,  1354,  1355,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,  1356,  1357,  1358,  1359,  1360,
    1361,  1232,  1233,  1234,  1235,  1236,  1237,     0,  1238,     0,
    1239,     0,     0,     0,  1240,  1241,  1242,     0,  1243,     0,
       0,     0,  1244,  1245,  1246,  1247,  1248,     0,     0,     0,
       0,     0,     0,  1249,     0,     0,     0,     0,  1250,  1251,
       0,     0,  1252,     0,     0,     0,     0,  1253,  1254,  1255,
    1256,  1257,     0,     0,  1258,     0,  1259,  1260,  1261,     0,
       0,  1262,  1263,     0,  1264,  1265,  1266,     0,     0,     0,
    1267,     0,     0,     0,     0,  1268,     0,     0,     0,  1269,
       0,     0,     0,     0,  1270,  1271,  1272,     0,     0,     0,
       0,  1273,  1274,     0,  1275,  1276,  1277,  1278,     0,     0,
    1279,     0,  1620,  1281,  1282,  1283,     0,  1284,     0,  1285,
    1286,     0,  1287,  1288,  1289,     0,  1290,  1291,  1292,  1293,
       0,     0,     0,     0,  1294,     0,  1295,     0,  1296,  1297,
       0,  1298,  1299,  1300,  1301,  1302,  1303,     0,  1304,  1305,
    1306,  1307,  1308,     0,     0,     0,  1309,     0,  1310,     0,
    1311,     0,     0,     0,     0,     0,     0,     0,     0,  1312,
       0,  1313,  1314,  1315,  1316,  1317,  1318,  1319,     0,     0,
    1320,  1321,     0,     0,     0,     0,  1322,     0,  1323,  1324,
    1325,     0,  1326,     0,  1327,     0,  1328,  1329,  1330,  1331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1332,  1333,  1334,     0,     0,     0,     0,     0,     0,
    1335,     0,  1336,  1337,  1338,     0,     0,     0,     0,  1339,
       0,  1340,  1341,  1342,     0,  1343,     0,     0,     0,  1344,
    1345,   781,  1346,  1347,  1348,  1349,     0,     0,     0,  1350,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   782,     0,     0,     0,
    1351,  1352,  1353,  1354,  1355,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,  1356,  1357,  1358,
    1359,  1360,  1361,  1232,  1233,  1234,  1235,  1236,  1237,     0,
    1238,     0,  1239,     0,     0,     0,  1240,  1241,  1242,     0,
    1243,     0,     0,     0,  1244,  1245,  1246,  1247,  1248,     0,
       0,     0,     0,     0,     0,  1249,     0,     0,     0,     0,
    1250,  1251,     0,     0,  1252,     0,     0,     0,     0,  1253,
    1254,  1255,  1256,  1257,     0,     0,  1258,     0,  1259,  1260,
    1261,     0,     0,  1262,  1263,     0,  1264,  1265,  1266,     0,
       0,     0,  1267,     0,     0,     0,     0,  1268,     0,     0,
       0,  1269,     0,     0,     0,     0,  1270,  1271,  1272,     0,
       0,     0,     0,  1273,  1274,     0,  1275,  1276,  1277,  1278,
       0,     0,  1279,     0,  1690,  1281,  1282,  1283,     0,  1284,
       0,  1285,  1286,     0,  1287,  1288,  1289,     0,  1290,  1291,
    1292,  1293,     0,     0,     0,     0,  1294,     0,  1295,     0,
    1296,  1297,     0,  1298,  1299,  1300,  1301,  1302,  1303,     0,
    1304,  1305,  1306,  1307,  1308,     0,     0,     0,  1309,     0,
    1310,     0,  1311,     0,     0,     0,     0,     0,     0,     0,
       0,  1312,     0,  1313,  1314,  1315,  1316,  1317,  1318,  1319,
       0,     0,  1320,  1321,     0,     0,     0,     0,  1322,     0,
    1323,  1324,  1325,     0,  1326,     0,  1327,     0,  1328,  1329,
    1330,  1331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1332,  1333,  1334,     0,     0,     0,     0,
       0,     0,  1335,     0,  1336,  1337,  1338,     0,     0,     0,
       0,  1339,     0,  1340,  1341,  1342,     0,  1343,     0,     0,
       0,  1344,  1345,   784,  1346,  1347,  1348,  1349,     0,     0,
       0,  1350,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1116,     0,
       0,     0,  1351,  1352,  1353,  1354,  1355,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,  1356,
    1357,  1358,  1359,  1360,  1361,  1232,  1233,  1234,  1235,  1236,
    1237,     0,  1238,     0,  1239,     0,     0,     0,  1240,  1241,
    1242,     0,  1243,     0,     0,     0,  1244,  1245,  1246,  1247,
    1248,     0,     0,     0,     0,     0,     0,  1249,     0,     0,
       0,     0,  1250,  1251,     0,     0,  1252,     0,     0,     0,
       0,  1253,  1254,  1255,  1256,  1257,     0,     0,  1258,     0,
    1259,  1260,  1261,     0,     0,  1262,  1263,     0,  1264,  1265,
    1266,     0,     0,     0,  1267,     0,     0,     0,     0,  1268,
       0,     0,     0,  1269,     0,     0,     0,     0,  1270,  1271,
    1272,     0,     0,     0,     0,  1273,  1274,     0,  1275,  1276,
    1277,  1278,     0,     0,  1279,     0,  1691,  1281,  1282,  1283,
       0,  1284,     0,  1285,  1286,     0,  1287,  1288,  1289,     0,
    1290,  1291,  1292,  1293,     0,     0,     0,     0,  1294,     0,
    1295,     0,  1296,  1297,     0,  1298,  1299,  1300,  1301,  1302,
    1303,     0,  1304,  1305,  1306,  1307,  1308,     0,     0,     0,
    1309,     0,  1310,     0,  1311,     0,     0,     0,     0,     0,
       0,     0,     0,  1312,     0,  1313,  1314,  1315,  1316,  1317,
    1318,  1319,     0,     0,  1320,  1321,     0,     0,     0,     0,
    1322,     0,  1323,  1324,  1325,     0,  1326,     0,  1327,     0,
    1328,  1329,  1330,  1331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1332,  1333,  1334,     0,     0,
       0,     0,     0,     0,  1335,     0,  1336,  1337,  1338,     0,
       0,     0,     0,  1339,     0,  1340,  1341,  1342,     0,  1343,
       0,     0,     0,  1344,  1345,  1117,  1346,  1347,  1348,  1349,
       0,     0,     0,  1350,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1128,     0,     0,     0,  1351,  1352,  1353,  1354,  1355,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,  1356,  1357,  1358,  1359,  1360,  1361,  1232,  1233,  1234,
    1235,  1236,  1237,     0,  1238,     0,  1239,     0,     0,     0,
    1240,  1241,  1242,     0,  1243,     0,     0,     0,  1244,  1245,
    1246,  1247,  1248,     0,     0,     0,     0,     0,     0,  1249,
       0,     0,     0,     0,  1250,  1251,     0,     0,  1252,     0,
       0,     0,     0,  1253,  1254,  1255,  1256,  1257,     0,     0,
    1258,     0,  1259,  1260,  1261,     0,     0,  1262,  1263,     0,
    1264,  1265,  1266,     0,     0,     0,  1267,     0,     0,     0,
       0,  1268,     0,     0,     0,  1269,     0,     0,     0,     0,
    1270,  1271,  1272,     0,     0,     0,     0,  1273,  1274,     0,
    1275,  1276,  1277,  1278,     0,     0,  1279,     0,  1747,  1281,
    1282,  1283,     0,  1284,     0,  1285,  1286,     0,  1287,  1288,
    1289,     0,  1290,  1291,  1292,  1293,     0,     0,     0,     0,
    1294,     0,  1295,     0,  1296,  1297,     0,  1298,  1299,  1300,
    1301,  1302,  1303,     0,  1304,  1305,  1306,  1307,  1308,     0,
       0,     0,  1309,     0,  1310,     0,  1311,     0,     0,     0,
       0,     0,     0,     0,     0,  1312,     0,  1313,  1314,  1315,
    1316,  1317,  1318,  1319,     0,     0,  1320,  1321,     0,     0,
       0,     0,  1322,     0,  1323,  1324,  1325,     0,  1326,     0,
    1327,     0,  1328,  1329,  1330,  1331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1332,  1333,  1334,
       0,     0,     0,     0,     0,     0,  1335,     0,  1336,  1337,
    1338,     0,     0,     0,     0,  1339,     0,  1340,  1341,  1342,
       0,  1343,     0,     0,     0,  1344,  1345,  1138,  1346,  1347,
    1348,  1349,     0,     0,     0,  1350,     0,     0,     0,     0,
     769,     0,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,     0,     0,  1351,  1352,  1353,  1354,
    1355,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,  1356,  1357,  1358,  1359,  1360,  1361,  1232,
    1233,  1234,  1235,  1236,  1237,     0,  1238,     0,  1239,     0,
       0,     0,  1240,  1241,  1242,     0,  1243,     0,     0,     0,
    1244,  1245,  1246,  1247,  1248,     0,     0,     0,     0,     0,
       0,  1249,     0,     0,     0,     0,  1250,  1251,     0,     0,
    1252,  1104,     0,     0,     0,  1253,  1254,  1255,  1256,  1257,
       0,     0,  1258,     0,  1259,  1260,  1261,     0,     0,  1262,
    1263,     0,  1264,  1265,  1266,     0,     0,     0,  1267,     0,
       0,     0,     0,  1268,     0,     0,     0,  1269,     0,     0,
       0,     0,  1270,  1271,  1272,     0,     0,     0,     0,  1273,
    1274,     0,  1275,  1276,  1277,  1278,     0,     0,  1279,     0,
    1748,  1281,  1282,  1283,     0,  1284,     0,  1285,  1286,     0,
    1287,  1288,  1289,     0,  1290,  1291,  1292,  1293,     0,     0,
       0,     0,  1294,     0,  1295,     0,  1296,  1297,     0,  1298,
    1299,  1300,  1301,  1302,  1303,     0,  1304,  1305,  1306,  1307,
    1308,     0,     0,     0,  1309,     0,  1310,     0,  1311,     0,
       0,     0,     0,     0,     0,     0,     0,  1312,     0,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,     0,     0,  1320,  1321,
       0,     0,     0,     0,  1322,     0,  1323,  1324,  1325,     0,
    1326,     0,  1327,     0,  1328,  1329,  1330,  1331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1332,
    1333,  1334,     0,     0,     0,     0,     0,     0,  1335,     0,
    1336,  1337,  1338,     0,     0,     0,     0,  1339,     0,  1340,
    1341,  1342,     0,  1343,     0,     0,     0,  1344,  1345,     0,
    1346,  1347,  1348,  1349,  1105,     0,     0,  1350,     0,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   587,     0,     0,     0,     0,  1351,  1352,
    1353,  1354,  1355,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,  1356,  1357,  1358,  1359,  1360,
    1361,  1232,  1233,  1234,  1235,  1236,  1237,     0,  1238,     0,
    1239,     0,     0,     0,  1240,  1241,  1242,     0,  1243,     0,
       0,     0,  1244,  1245,  1246,  1247,  1248,     0,     0,     0,
       0,     0,     0,  1249,     0,     0,     0,     0,  1250,  1251,
       0,     0,  1252,     0,     0,     0,     0,  1253,  1254,  1255,
    1256,  1257,     0,     0,  1258,     0,  1259,  1260,  1261,     0,
       0,  1262,  1263,     0,  1264,  1265,  1266,     0,     0,     0,
    1267,     0,     0,     0,     0,  1268,     0,     0,     0,  1269,
       0,     0,     0,     0,  1270,  1271,  1272,     0,     0,     0,
       0,  1273,  1274,     0,  1275,  1276,  1277,  1278,     0,     0,
    1279,     0,  1774,  1281,  1282,  1283,     0,  1284,     0,  1285,
    1286,     0,  1287,  1288,  1289,     0,  1290,  1291,  1292,  1293,
       0,     0,     0,     0,  1294,     0,  1295,     0,  1296,  1297,
       0,  1298,  1299,  1300,  1301,  1302,  1303,     0,  1304,  1305,
    1306,  1307,  1308,     1,     0,     0,  1309,     2,  1310,     0,
    1311,     0,     0,     0,     0,     0,     0,     0,     0,  1312,
       0,  1313,  1314,  1315,  1316,  1317,  1318,  1319,     0,     3,
    1320,  1321,     0,     0,     4,     0,  1322,     0,  1323,  1324,
    1325,     0,  1326,     0,  1327,     0,  1328,  1329,  1330,  1331,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       0,  1332,  1333,  1334,     0,     0,     0,     0,     0,     0,
    1335,     0,  1336,  1337,  1338,     0,     0,     0,     0,  1339,
       0,  1340,  1341,  1342,     0,  1343,     0,     0,     0,  1344,
    1345,   733,  1346,  1347,  1348,  1349,     0,     0,     0,  1350,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,     0,     0,     0,     0,   739,   140,   141,     0,     0,
    1351,  1352,  1353,  1354,  1355,     0,   142,     0,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,  1356,  1357,  1358,
    1359,  1360,  1361,   143,     0,    11,    12,     0,   144,     0,
       0,   145,   146,     0,     0,     0,     0,     0,     0,    13,
       0,     0,    14,     0,     0,     0,     0,   147,     0,    15,
       0,   148,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,   372,   373,
     374,   375,   376,   377,   378,   149,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,   150,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,     0,     0,     0,     0,     0,     0,   140,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
     152,   153,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   520,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
       0,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
       0,     0,   219,   521,     0,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,   150,   138,
     139,     0,     0,     0,     0,     0,     0,   140,     0,     0,
       0,     0,     0,   303,     0,     0,     0,   603,     0,   604,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,   143,     0,     0,     0,     0,   144,
       0,   522,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   740,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   741,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,   150,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,     0,     0,     0,     0,     0,     0,   140,
       0,     0,     0,   372,   373,   374,   375,   376,   377,   378,
     605,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,   606,     0,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,   150,   138,
     139,     0,     0,     0,     0,     0,     0,   140,   561,     0,
       0,     0,   742,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   303,
       0,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,   150,     0,     0,   132,
     133,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   743,     0,     0,     0,     0,
       0,   140,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,     0,     0,   145,   146,     0,     0,
       0,     0,     0,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   734,   193,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,   219,   132,   133,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
     150,     0,     0,     0,     0,   744,   140,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   144,     0,
       0,   145,   146,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,  1091,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     0,     0,   150,     0,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   749,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
       0,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
       0,     0,   219,   132,   133,   134,   135,   136,   137,     0,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   753,
       0,     0,     0,     0,     0,   140,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,   754,     0,   144,     0,     0,
     145,   146,     0,     0,     0,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,     0,     0,  1096,     0,     0,     0,   140,     0,     0,
       0,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
       0,     0,   145,   146,     0,     0,     0,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,     0,   150,  1538,     0,     0,     0,   140,
     372,   373,   374,   375,   376,   377,   378,   755,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,   759,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,     0,     0,     0,   150,  1540,     0,     0,
       0,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   920,   150,     0,
       0,   219,     0,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,   219,     0,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,   219,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,   761,     0,     0,     0,     0,     0,   140,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     144,     0,     0,   145,   146,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
     372,   373,   374,   375,   376,   377,   378,   150,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
       0,     0,     0,     0,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,   373,   374,   375,   376,   377,
     378,   762,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,     0,     0,
     372,   373,   374,   375,   376,   377,   378,   763,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,   772,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,   773,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
     774,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,   372,   373,   374,   375,   376,
     377,   378,   775,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,   776,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,   777,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,   778,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,     0,   779,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     372,   373,   374,   375,   376,   377,   378,   783,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,   372,   373,   374,   375,   376,
     377,   378,  1108,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,  1113,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,  1114,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,  1115,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
     372,   373,   374,   375,   376,   377,   378,  1118,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   372,   373,   374,   375,   376,   377,   378,  1119,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,  1120,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
    1121,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   372,   373,   374,   375,   376,   377,
     378,  1122,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   372,   373,   374,   375,   376,
     377,   378,  1123,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,  1126,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,  1127,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
       0,     0,  1139,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,     0,     0,  1140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,   373,   374,   375,   376,   377,   378,  1217,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   372,   373,   374,   375,   376,   377,   378,  1408,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   372,   373,   374,   375,   376,   377,   378,
    1463,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,     0,   372,   373,   374,   375,   376,
     377,   378,  1519,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,  1543,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   372,   373,   374,
     375,   376,   377,   378,  1544,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   372,   373,
     374,   375,   376,   377,   378,  1545,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   372,
     373,   374,   375,   376,   377,   378,  1546,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
       0,     0,     0,     0,     0,     0,     0,  1547,     0,     0,
       0,     0,     0,  1003,     0,     0,     0,     0,     0,     0,
       0,     0,  1003,     0,     0,     0,     0,     0,  1556,  1004,
       0,   919,     0,  1005,     0,     0,  1006,     0,  1007,     0,
       0,  1008,  1005,     0,     0,  1006,     0,  1007,     0,  1593,
    1008,     0,  1102,  1409,  1410,     0,  1009,     0,  1411,     0,
    1412,     0,     0,  1010,  1011,  1009,     0,     0,     0,     0,
    1599,     0,  1010,  1011,     0,     0,     0,   436,   437,     0,
     438,     0,   439,   440,     0,     0,     0,     0,  1012,     0,
       0,  1413,  1414,     0,  1415,  1603,     0,  1012,   441,     0,
       0,  -576,  -576,  -576,  -576,  1013,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,     0,
     442,   443,   444,   445,     0,     0,     0,     0,     0,   446,
       0,     0,     0,  1608,     0,     0,     0,  1014,   447,     0,
       0,     0,     0,     0,     0,     0,  1014,     0,     0,     0,
       0,     0,     0,     0,  1703,     0,   448,     0,     0,  1015,
       0,     0,     0,     0,   449,     0,     0,  1016,  1015,     0,
       0,     0,   450,     0,     0,  1722,  1016,     0,     0,   451,
       0,     0,   452,     0,     0,   453,   454,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1744,     0,     0,
       0,     0,   455,     0,     0,     0,     0,  1416,  1417,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1745,  1017,
       0,     0,     0,     0,     0,     0,     0,     0,  1017,   456,
     457,     0,   458,   459,     0,     0,     0,     0,   460,     0,
     461,     0,     0,     0,     0,   462,   463,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,   465,     0,   466,
       0,     0,     0,     0,   467,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,   371,
       0,     0,     0,     0,     0,  1389,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,     0,     0,     0,
     372,   373,   374,   375,   376,   377,   378,   392,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,     0,     0,     0,     0,     0,     0,     0,  1390,     0,
     925,   764,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,     0,     0,   372,   373,   374,   375,   376,
     377,   378,   803,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,     0,     0,   372,   373,
     374,   375,   376,   377,   378,   970,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391
};

static const yytype_int16 yycheck[] =
{
      72,   818,  1085,   877,   988,   888,   226,   829,   830,  1079,
     884,   833,   270,     3,  1383,   494,     3,   409,     3,   227,
     115,    39,   720,     3,   722,     3,  1077,     3,    38,    33,
     671,   672,   132,   132,  1377,   115,   677,     3,   679,     3,
       4,     5,     6,     7,     8,   227,  1000,  1001,   170,     4,
       5,     6,     7,    41,    41,   127,   128,   137,     4,    20,
      20,    65,     6,    68,   170,  1019,   138,   139,   140,    68,
      87,     6,   144,     3,    92,   283,    80,   227,   113,    87,
     204,     8,    78,    18,    88,   227,     3,   187,   187,   723,
       3,   204,     3,     3,    87,    18,   100,   132,   234,  1142,
    1143,     3,   237,    51,   227,   148,   168,    62,  1151,  1152,
    1100,   425,   227,     3,   205,   114,     3,    10,    11,    12,
      13,    14,    15,    16,  1175,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,  1060,    26,
     619,   232,   135,   186,   132,    68,     9,   219,    10,   115,
      98,    41,    14,   632,   158,   469,   215,    20,   168,    44,
      45,   311,    75,   797,    75,   227,   132,   172,   104,   105,
      93,   313,    74,   172,  1048,   179,    93,   313,   313,    64,
    1002,   147,     3,  1173,   194,  1059,   394,   311,   311,   104,
     105,   313,  1066,   228,   211,    16,   311,  1080,   311,   187,
     164,     3,     4,     5,     6,     7,     8,   313,   174,   155,
     310,   311,   311,   221,   912,   205,   914,   205,   313,   224,
     164,   134,   115,   134,   134,   224,   230,   299,   221,   164,
    1184,   303,   711,   313,   230,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   638,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,  1631,   335,   336,   337,   193,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   204,   493,  1208,  1630,   360,   361,
       3,     3,   310,   365,   366,     3,   181,  1219,   309,   235,
     372,   373,   374,   375,   376,     3,    64,   128,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     235,   311,   504,   310,   396,   507,   311,  1378,  1379,   643,
     644,   311,  1254,   311,   968,   311,   518,   651,   293,   294,
     295,   227,    64,  1265,   279,   166,    93,  1164,   312,   310,
     310,    68,  1226,     3,  1228,    18,   311,   287,   288,   289,
     290,    18,   164,  1285,   234,    39,  1449,     3,    76,     3,
       3,     3,   686,   687,   688,   116,     3,  1299,  1421,  1422,
    1423,  1424,  1425,  1426,     3,   175,  1308,    93,   215,  1030,
    1433,  1032,  1033,   313,  1437,   215,    80,   114,  1441,   657,
     658,  1431,  1432,   227,   624,   163,    79,   215,   227,   227,
     234,     0,  1442,  1443,    61,    78,   100,   164,    92,   491,
     313,    78,   134,   181,   222,   311,  1348,    74,   118,   821,
     171,   190,   824,   311,    61,     3,   134,     5,    74,   229,
      10,   163,   240,   313,   516,   517,   204,    74,  1518,  1532,
     764,   765,   524,    52,   127,   172,   215,    56,   164,   181,
     201,    10,    11,    12,    13,    14,    15,    16,  1452,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   204,   173,   134,    41,   310,  1808,     3,   313,
    1364,   154,   311,   311,    50,    94,  1370,   154,    97,   978,
     134,   134,   134,   205,     3,   168,    76,   224,     3,  1830,
    1831,   168,    82,   112,     3,   134,   133,   831,  1548,  1549,
    1550,  1551,  1552,  1553,   134,   142,   598,   599,    41,   601,
     232,   130,  1562,    76,   606,     3,  1566,    50,  1859,   138,
    1570,    10,    11,    12,    13,    14,    15,    16,   118,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,  1484,   133,   133,  1777,  1388,  1489,    10,    11,
      12,    13,    14,    15,    16,   118,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,  1672,
     133,    41,   187,    61,  1806,  1807,   196,    83,   209,    34,
      50,   809,    41,   173,     5,     3,    74,    83,   215,   310,
     311,    50,   684,   212,    49,   214,   798,  1829,  1661,    20,
     190,   221,  1665,   193,  1498,   807,   312,   313,    72,    73,
     173,  1514,   231,   312,   313,  1509,   452,  1511,   124,   209,
     210,  1724,   458,     3,   460,     3,   132,   190,   124,     3,
     193,   137,    66,   725,   224,   727,   132,     3,    61,   731,
     732,   147,   734,   312,   313,    68,   738,   312,   313,   312,
     313,   147,   215,   745,   746,   747,   748,     3,   750,   751,
     752,   312,   313,  1605,   313,   757,   758,  1738,   760,   312,
     313,  1675,   312,   313,   766,   767,   768,  1727,  1781,  1621,
       3,  1731,    26,    27,    28,    29,    30,     3,   780,   781,
     782,   114,   784,   241,   117,   312,   313,   131,   900,   310,
    1763,  1764,    41,  1766,  1767,   312,   313,   141,   312,   313,
     133,   803,    13,    14,   148,    16,   312,   313,    19,   142,
     312,   313,     3,   815,     4,     5,   311,   161,     4,     5,
     822,  1625,   168,  1783,  1784,     3,  1786,  1787,   312,   313,
     311,  1578,   241,   312,   313,     3,  1688,   241,  1082,   172,
     664,   665,   186,   667,   668,   669,   312,   313,   310,   673,
     674,   675,   312,   313,   678,   312,   313,   969,   202,   861,
     972,   973,   974,    10,    11,    12,    13,    14,    15,    16,
     241,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    24,    25,    26,    27,    28,    29,
      30,   224,    23,    24,    25,    26,    27,    28,    29,    30,
     902,   312,   313,   905,   312,   313,     3,   312,   313,   911,
     312,   313,   241,   312,   313,   312,   313,   241,   920,   312,
     313,   312,   313,   925,   926,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   312,   313,   241,
     312,   313,    10,    11,    12,    13,    14,    15,    16,   241,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   208,   439,   440,   441,   442,   970,   444,
     312,   313,   447,   448,   449,   312,   313,   312,   313,   454,
     455,   456,   312,   313,   459,   312,   313,   312,   313,   991,
     312,   313,   312,   313,   996,   312,   313,   312,   313,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,     9,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   312,   313,   312,   313,    10,    11,    12,    13,    14,
      15,    16,     8,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    47,    48,   312,   313,
    1072,   311,    10,    11,    12,    13,    14,    15,    16,   311,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    22,    23,    24,    25,    26,    27,    28,
      29,    30,  1104,   312,   313,  1107,   312,   313,   312,   313,
     312,   313,   312,   313,  1116,  1117,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,  1128,   312,   313,   312,
     313,    47,    48,   310,   311,  1137,  1138,    13,    14,    15,
      16,   152,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   312,   313,   310,   311,   311,
    1162,  1163,   312,   313,   313,   312,   313,   311,  1170,  1171,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    41,   312,   313,   312,   313,  1188,   312,   313,   311,
    1192,   312,   313,    10,    11,    12,    13,    14,    15,    16,
    1202,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,  1216,    10,    11,    12,    13,    14,
      15,    16,   311,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,  1168,  1169,   634,   635,
     311,   813,   814,    43,   312,   313,   311,   311,   311,   311,
     311,     3,     4,     5,     6,     7,     8,   311,    10,   311,
      12,   311,   311,   311,    16,    17,    18,   311,    20,   311,
     311,   311,    24,    25,    26,    27,    28,   311,   311,   311,
     311,   311,   311,    35,   311,   311,   311,   311,    40,    41,
     311,   311,    44,   311,   311,   311,   311,    49,    50,    51,
      52,    53,   313,   311,    56,   311,    58,    59,    60,   311,
     311,    63,    64,   311,    66,    67,    68,   311,   311,   311,
      72,    43,   312,   313,   311,    77,   311,   311,   311,    81,
      61,   311,   311,   311,    86,    87,    88,   311,   311,   311,
     311,    93,    94,   311,    96,    97,    98,    99,   313,   311,
     102,   311,   104,   105,   106,   107,   311,   109,   311,   111,
     112,   311,   114,   115,   116,   311,   118,   119,   120,   121,
     311,    61,    61,     3,   126,   313,   128,     3,   130,   131,
       3,   133,   134,   135,   136,   137,   138,     3,   140,   141,
     142,   143,   144,  1395,  1396,   168,   148,   241,   150,  1401,
     152,  1403,     3,   168,   241,     3,    26,     3,     3,   161,
       3,   163,   164,   165,   166,   167,   168,   169,     3,     3,
     172,   173,     3,     3,     3,     3,   178,   312,   180,   181,
     182,   312,   184,   312,   186,   312,   188,   189,   190,   191,
     312,   312,   312,   312,   312,   312,     5,   312,   312,   311,
       3,   203,   204,   205,     3,     3,     3,   312,     3,   141,
     212,   167,   214,   215,   216,     3,     3,     3,     3,   221,
       3,   223,   224,   225,     3,   227,     3,     3,     3,   231,
     232,     3,   234,   235,   236,   237,     3,   208,     3,   241,
      11,    12,    13,    14,    15,    16,   313,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       3,    54,   311,  1515,   311,   311,     3,   311,   313,   311,
     311,   311,     3,     3,   312,     3,   313,     3,   168,   312,
     282,   283,   284,   285,   286,   168,     3,   168,   241,     3,
    1542,   169,     3,     3,   312,   205,   312,   307,   307,   307,
     312,   307,   307,  1555,   205,    30,   313,   309,   310,   311,
     312,   313,   314,   311,   311,   311,   311,   142,   142,   115,
     142,   141,   141,  1575,   168,     3,     4,     5,     6,     7,
       8,  1583,    10,     3,    12,     3,   208,   208,    16,    17,
      18,     5,    20,     4,  1596,  1597,    24,    25,    26,    27,
      28,     5,     5,   164,   311,   229,   168,    35,   184,     3,
       3,     3,    40,    41,     3,     3,    44,   168,    53,   150,
      20,    49,    50,    51,    52,    53,   311,   139,    56,   170,
      58,    59,    60,   312,     4,    63,    64,   307,    66,    67,
      68,   307,   307,   307,    72,   307,   307,     5,   311,    77,
       5,   307,   311,    81,   311,   307,   311,   307,    86,    87,
      88,   205,   311,   120,     3,    93,    94,   119,    96,    97,
      98,    99,     3,     3,   102,   311,   104,   105,   106,   107,
     142,   109,   311,   111,   112,     3,   114,   115,   116,   142,
     118,   119,   120,   121,     3,   312,    68,   312,   126,   312,
     128,   312,   130,   131,   311,   133,   134,   135,   136,   137,
     138,  1713,   140,   141,   142,   143,   144,     3,   229,   311,
     148,   311,   150,   311,   152,   311,    50,   229,   119,   168,
       3,     3,   142,   161,   311,   163,   164,   165,   166,   167,
     168,   169,     3,   311,   172,   173,   311,   142,   311,   183,
     178,     3,   180,   181,   182,   142,   184,     3,   186,   311,
     188,   189,   190,   191,    53,   126,   141,    20,     3,     3,
     312,    42,   312,   312,   164,   203,   204,   205,  1780,     3,
     312,     4,   312,   311,   212,   142,   214,   215,   216,   312,
     142,   311,   311,   221,   312,   223,   224,   225,   311,   227,
     184,   311,   311,   231,   232,   311,   234,   235,   236,   237,
     311,     5,   312,   241,    10,    11,    12,    13,    14,    15,
      16,   311,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    12,    13,    14,    15,    16,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   282,   283,   284,   285,   286,    10,
      11,    12,    13,    14,    15,    16,   311,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     311,   309,   310,   311,   312,   313,   314,     3,     4,     5,
       6,     7,     8,   204,    10,   311,    12,     4,   311,   311,
      16,    17,    18,   311,    20,   311,   311,     4,    24,    25,
      26,    27,    28,   311,     3,     3,     3,     3,     3,    35,
      98,   229,   229,     3,    40,    41,   311,     3,    44,   311,
     311,   311,   311,    49,    50,    51,    52,    53,   311,   313,
      56,   221,    58,    59,    60,   311,    20,    63,    64,   308,
      66,    67,    68,   307,   307,     3,    72,     3,     3,     3,
      41,    77,   312,   312,   312,    81,   312,   312,     5,     5,
      86,    87,    88,   311,   311,   311,     4,    93,    94,    50,
      96,    97,    98,    99,   312,    50,   102,   312,   104,   105,
     106,   107,   312,   109,   313,   111,   112,   312,   114,   115,
     116,   311,   118,   119,   120,   121,   188,   311,   311,   229,
     126,   311,   128,   142,   130,   131,   142,   133,   134,   135,
     136,   137,   138,   311,   140,   141,   142,   143,   144,     3,
     313,    53,   148,   311,   150,   169,   152,   311,    20,    18,
       3,   142,   312,   312,   311,   161,   312,   163,   164,   165,
     166,   167,   168,   169,   312,   311,   172,   173,   312,     3,
     311,    50,   178,   312,   180,   181,   182,   312,   184,   311,
     186,   311,   188,   189,   190,   191,     3,     3,   311,     3,
      53,     3,     3,    53,   312,   312,   312,   203,   204,   205,
     307,   307,   307,   307,   312,   185,   212,     3,   214,   215,
     216,   312,   119,   230,     3,   221,   178,   223,   224,   225,
       3,   227,    50,     5,     5,   231,   232,   313,   234,   235,
     236,   237,   312,   111,    67,   241,    10,    11,    12,    13,
      14,    15,    16,   134,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   144,   178,     5,
      20,   313,   236,   312,   312,   312,   312,   312,   312,     3,
     313,   311,   313,   312,   311,   311,   282,   283,   284,   285,
     286,    10,    11,    12,    13,    14,    15,    16,   311,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   312,   309,   310,   311,   312,   313,   314,     3,
       4,     5,     6,     7,     8,   137,    10,   312,    12,     3,
     312,     3,    16,    17,    18,     3,    20,   312,     3,   311,
      24,    25,    26,    27,    28,     3,     3,   178,   311,   197,
     197,    35,     3,   311,   313,     3,    40,    41,    20,     3,
      44,   151,   312,   312,   151,    49,    50,    51,    52,    53,
     313,     3,    56,     3,    58,    59,    60,     3,   312,    63,
      64,   312,    66,    67,    68,   195,     3,     3,    72,   311,
     311,   194,   312,    77,   312,     5,   311,    81,   312,   312,
       3,   129,    86,    87,    88,    78,   232,   145,   213,    93,
      94,   168,    96,    97,    98,    99,   168,   162,   102,   162,
     104,   105,   106,   107,     5,   109,     5,   111,   112,    79,
     114,   115,   116,   737,   118,   119,   120,   121,   304,  1165,
    1453,  1394,   126,   396,   128,   811,   130,   131,   403,   133,
     134,   135,   136,   137,   138,   100,   140,   141,   142,   143,
     144,   995,   707,   495,   148,    67,   150,  1542,   152,  1514,
     721,   293,  1835,  1069,  1081,   676,   131,   161,   506,   163,
     164,   165,   166,   167,   168,   169,  1206,   690,   172,   173,
      -1,   433,    -1,    -1,   178,    -1,   180,   181,   182,    -1,
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
     236,   237,    -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,
     281,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
     286,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   309,   310,   311,   312,   313,   314,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,   119,    -1,    -1,    -1,    49,    50,    51,    52,    53,
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
     224,   225,    -1,   227,    -1,    -1,    -1,   231,   232,    -1,
     234,   235,   236,   237,   312,    -1,    -1,   241,    -1,    10,
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
     142,   143,   144,    32,    -1,    -1,   148,    36,   150,    -1,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,   163,   164,   165,   166,   167,   168,   169,    -1,    58,
     172,   173,    -1,    -1,    63,    -1,   178,    -1,   180,   181,
     182,    -1,   184,    -1,   186,    -1,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      -1,   203,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,   215,   216,    -1,    -1,    -1,    -1,   221,
      -1,   223,   224,   225,    -1,   227,    -1,    -1,    -1,   231,
     232,   312,   234,   235,   236,   237,    -1,    -1,    -1,   241,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,   312,    25,    26,    -1,    -1,
     282,   283,   284,   285,   286,    -1,    35,    -1,   177,    -1,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,
     312,   313,   314,    62,    -1,   204,   205,    -1,    67,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,   218,
      -1,    -1,   221,    -1,    -1,    -1,    -1,    86,    -1,   228,
      -1,    90,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   124,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,   164,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
     199,   200,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
      -1,   280,    -1,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,    -1,    -1,
      -1,    -1,   311,   149,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    35,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      -1,   217,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   312,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,   164,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     198,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    -1,   280,    -1,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,    -1,
      -1,    -1,    -1,   311,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,   312,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,    -1,   280,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    -1,    -1,    -1,    -1,   311,   164,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,   312,    -1,    -1,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   115,   280,    -1,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,    -1,
      -1,    -1,    -1,   311,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
     164,    -1,    -1,    -1,    -1,   312,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    70,    71,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    93,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    -1,   280,    -1,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    -1,    -1,   164,    -1,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
      -1,   280,    -1,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,    -1,    -1,
      -1,    -1,   311,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   312,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,   312,    -1,    67,    -1,    -1,
      70,    71,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    93,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    70,    71,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,   164,    93,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,   164,    93,    -1,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,    -1,
     280,    -1,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   216,   164,    -1,
      -1,   311,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    -1,   280,    -1,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,    -1,
      -1,    -1,    -1,   311,    -1,   241,   242,   243,   244,   245,
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
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    70,    71,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   164,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    -1,   280,    -1,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   312,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   312,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,   312,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   312,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   312,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   312,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   312,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   312,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   312,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   312,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   312,
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
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,   312,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   312,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   312,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     312,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,   312,    34,
      -1,   104,    -1,    38,    -1,    -1,    41,    -1,    43,    -1,
      -1,    46,    38,    -1,    -1,    41,    -1,    43,    -1,   312,
      46,    -1,   104,    84,    85,    -1,    61,    -1,    89,    -1,
      91,    -1,    -1,    68,    69,    61,    -1,    -1,    -1,    -1,
     312,    -1,    68,    69,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    56,    57,    -1,    -1,    -1,    -1,    93,    -1,
      -1,   122,   123,    -1,   125,   312,    -1,    93,    72,    -1,
      -1,    13,    14,    15,    16,   110,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   312,    -1,    -1,    -1,   142,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,   130,    -1,    -1,   164,
      -1,    -1,    -1,    -1,   138,    -1,    -1,   172,   164,    -1,
      -1,    -1,   146,    -1,    -1,   312,   172,    -1,    -1,   153,
      -1,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,   238,   239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,   203,
     204,    -1,   206,   207,    -1,    -1,    -1,    -1,   212,    -1,
     214,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,   231,    -1,   233,
      -1,    -1,    -1,    -1,   238,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    41,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
     115,    41,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    40,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
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
      29,    30,    41,   374,   115,   137,   313,   313,   310,   374,
     353,   375,   204,   313,    66,   131,   148,   161,   186,   202,
     380,   382,    41,   378,    43,    43,    61,    74,     3,    74,
      61,     3,    61,    74,    61,     3,    74,     3,    61,    74,
      61,     3,   312,   313,     3,     3,    51,    52,    54,    56,
      57,    72,    94,    95,    96,    97,   103,   112,   130,   138,
     146,   153,   156,   159,   160,   176,   203,   204,   206,   207,
     212,   214,   219,   220,   225,   231,   233,   238,   444,     3,
      16,   128,   166,   452,   453,   454,     3,   168,   241,     3,
     452,    87,   135,   221,   464,   168,     3,   134,   241,     3,
      26,   234,   354,   227,   375,     3,     3,     3,     3,     3,
       3,     3,   204,   311,   412,     3,   204,   412,     3,   317,
     322,   323,   317,   317,   351,   104,   105,   235,   328,   317,
      55,   149,   217,   317,   349,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   312,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     312,   317,   317,   317,   312,   317,   317,   317,   317,   317,
     317,    26,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   312,   312,   312,   312,   317,   317,   312,
     312,   312,   317,   317,     5,   312,   312,   312,   317,   317,
     317,   317,   317,     6,    18,   164,   279,   311,    13,    14,
      16,    19,   317,    35,    37,   198,   311,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,     3,   375,
       3,   373,     3,   400,     3,   113,   132,   228,   386,   312,
     312,     3,   421,   376,   148,   186,   383,   377,   141,   167,
     381,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     444,     3,   208,     3,     3,     3,   461,   311,   311,   311,
     440,   440,   440,   440,   440,   440,   311,   440,   440,   440,
      54,   441,   441,   440,   440,   440,   311,   441,   440,   441,
     311,   311,    18,    68,    93,   444,     3,     3,     3,   312,
     313,   227,   311,     3,     3,   168,   312,   168,     3,   168,
     241,     3,   132,   187,   310,   311,   446,   447,   317,   169,
     364,   375,   354,   393,     3,   417,     3,   413,   232,   353,
     417,   232,   353,   313,   312,   216,   104,   105,   317,   317,
     353,   115,   313,   312,   115,   317,   313,   313,   313,   312,
     312,   312,   312,   312,   312,   313,   313,   313,   313,   312,
     313,   313,   313,   312,   312,   312,   312,   313,   313,   312,
     313,   312,   312,   312,    41,   313,   313,   313,   313,   281,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     313,   313,   313,   312,   313,   307,   307,   307,   312,   313,
     312,   313,   312,   307,   307,     6,   164,   324,   326,   317,
     317,   311,   317,    40,   311,   311,   311,   318,   354,   115,
     313,   374,   142,   142,   142,    20,   310,   313,   354,   381,
     381,   141,   168,   377,   141,    68,   114,   172,   224,   444,
     444,     3,   439,   444,     3,   208,   208,   452,   452,     5,
     442,   443,   442,   442,     4,   445,   442,   442,   442,   443,
     443,   442,   442,   442,   445,   443,   442,   443,     5,     5,
     164,   311,   317,   444,   444,   444,   184,   454,   229,     3,
     287,   288,   289,   290,   396,   397,   227,   311,   168,     3,
      41,    50,     3,   227,   311,     3,     3,   168,     3,    61,
      68,   114,   117,   133,   142,   172,   224,   431,   432,   438,
     378,    53,   150,   367,   354,    20,   170,   313,   407,   312,
     313,   311,   414,   407,   414,   407,   322,   317,   317,   104,
     216,   312,   317,   317,   317,   115,   139,   350,   350,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     444,   444,   317,   317,   317,     4,   307,   307,   307,   307,
     307,   307,   317,   317,   317,   317,   311,   311,   311,   307,
       5,   307,     5,   307,   311,   311,   322,   353,   325,   327,
      40,   317,   321,   319,   320,   353,   120,   355,   375,     3,
     386,   119,   387,   387,   387,   317,     3,     3,   364,   377,
     317,   168,   227,   384,   385,   377,   311,   142,   142,   311,
     439,   439,   444,    18,    34,    38,    41,    43,    46,    61,
      68,    69,    93,   110,   142,   164,   172,   224,   405,   439,
       3,     3,   312,   312,   312,   313,   222,   240,    72,    73,
     312,   313,   312,   312,   312,    68,   317,    52,    56,    94,
      97,   112,   130,   138,   212,   214,   231,   455,   311,   311,
     311,   311,   311,   312,   313,   229,   396,     3,   227,   311,
      50,   456,   119,   229,   396,   227,   311,   168,     3,   311,
     446,     3,   311,   142,   133,   142,   311,   311,   142,   311,
     312,   313,     3,   353,     3,     5,   365,   366,   317,   183,
     466,    93,   317,   142,     3,     3,    93,   317,   416,   313,
     407,   407,   104,   317,   119,   312,   312,   313,   312,   317,
     317,   312,   312,   312,   312,   312,   313,   313,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   312,
     311,   311,   311,   311,   311,   311,   312,   313,   313,   312,
     312,   329,   330,   331,   311,   312,   313,   311,   312,   313,
     311,   347,   348,   312,   312,   322,   353,   317,   353,   353,
     353,   312,    53,   126,   359,   354,   141,   311,   311,   311,
      20,    20,   310,   367,   317,   311,   385,   317,   311,   311,
       3,   437,   405,   405,   439,   164,     3,   311,   311,   311,
      42,     3,   311,     4,     4,     5,     6,     7,    62,   293,
     294,   295,   311,   142,   142,   405,   184,    41,    50,     5,
     204,     4,   443,     4,   443,   443,   311,   312,    41,    50,
     396,     3,     3,     3,     3,     3,   311,   312,   311,   229,
     396,   456,     3,     4,     5,     6,     7,     8,    10,    12,
      16,    17,    18,    20,    24,    25,    26,    27,    28,    35,
      40,    41,    44,    49,    50,    51,    52,    53,    56,    58,
      59,    60,    63,    64,    66,    67,    68,    72,    77,    81,
      86,    87,    88,    93,    94,    96,    97,    98,    99,   102,
     104,   105,   106,   107,   109,   111,   112,   114,   115,   116,
     118,   119,   120,   121,   126,   128,   130,   131,   133,   134,
     135,   136,   137,   138,   140,   141,   142,   143,   144,   148,
     150,   152,   161,   163,   164,   165,   166,   167,   168,   169,
     172,   173,   178,   180,   181,   182,   184,   186,   188,   189,
     190,   191,   203,   204,   205,   212,   214,   215,   216,   221,
     223,   224,   225,   227,   231,   232,   234,   235,   236,   237,
     241,   282,   283,   284,   285,   286,   309,   310,   311,   312,
     313,   314,   457,    98,   311,   312,   229,   396,     3,   227,
     311,   431,    68,   114,   172,   224,   317,   311,   311,   311,
       3,   370,   370,   311,   437,   427,   446,   432,   444,    39,
      92,   310,   357,   357,   313,   152,   313,     3,    26,   467,
     221,    20,   312,   313,   415,   466,   317,   317,   312,    84,
      85,    89,    91,   122,   123,   125,   238,   239,   317,   317,
     317,   333,   334,   332,   335,   336,   337,   317,   317,   308,
     360,   360,   360,   338,   307,     4,     5,   342,   307,     4,
       5,   346,   360,   360,   312,   312,   312,   312,   312,   317,
     356,   317,   364,   355,     3,   388,   388,   388,   317,   317,
       3,   466,   370,   312,     3,   434,     3,   433,   312,   313,
     405,     5,   317,     5,    41,    68,   172,   224,   317,   311,
     311,   311,   317,   455,    50,   456,   312,     4,   317,    50,
     456,   312,   312,   312,   312,   313,   396,   396,   311,   312,
     104,   456,   456,   456,   456,   456,   456,   188,   396,   311,
     312,   311,   229,   396,   312,   311,   142,   142,   311,   312,
     434,   370,   370,   312,   313,   312,   433,   312,    38,   168,
     194,   439,     3,   366,   317,   317,   313,   408,    93,   317,
      93,   317,   311,   312,   312,   312,   312,   312,   360,   360,
     360,   360,   360,   360,   312,   313,   312,    53,   169,   362,
     362,   362,   360,   311,   312,   312,   360,   311,   312,   312,
     360,   362,   362,   357,   237,   313,   358,   367,   359,   312,
     313,   312,   312,    20,   312,    18,   312,   313,   312,   313,
       3,   312,   313,   312,   312,   313,   311,   311,   142,   312,
     312,   312,   312,   312,    41,    50,   456,   104,   312,   456,
     104,     3,   312,   312,   396,   104,   104,   104,   104,   104,
     104,    50,   312,   396,   396,   311,   312,   427,   446,   317,
     311,   311,   437,   312,   312,   312,     3,   312,     5,    20,
       3,    53,   357,     3,     3,   409,   416,   362,   362,   362,
     362,   362,   362,   317,     3,   361,    53,   312,   312,   312,
     362,   339,   307,   307,   362,   343,   307,   307,   362,   312,
     312,   185,   317,   119,   368,   364,     3,   317,   230,   178,
       3,     3,     5,    47,    48,     5,   317,   317,    50,   456,
     104,   104,   312,   312,    67,   111,   134,   144,   236,   456,
     312,   312,   396,   312,   434,   433,   312,   178,     5,    87,
     211,   175,   229,    20,   313,   312,   312,   312,   312,   312,
     312,   312,   312,   313,     3,   363,   312,   360,   311,   311,
     312,   360,   311,   311,   312,   357,   196,   221,   137,   369,
     367,     3,   312,   312,   312,   312,   456,   104,   104,   312,
     312,   312,     3,     3,     3,   311,   311,   317,     3,     3,
     357,   313,   362,   340,   341,   362,   344,   345,   197,   197,
     370,   311,    47,    48,   104,   178,   310,   311,     3,     3,
      20,     3,   312,   360,   360,   312,   360,   360,   151,   151,
       3,   435,     3,     3,   435,   312,   312,   317,   357,   362,
     362,   362,   362,   312,   313,   310,   311,   311,   312,   311,
     195,   312,   312,   312,   312,   436,     3,     3,   435,   435,
     436,   194,   428,   429,     5,    18,    78,   154,   168,   311,
     312,   312,    18,     3,   312,   313,    78,   230,   129,   116,
     171,   201,    87,   221,   435,   436,   436,   232,   429,    79,
     127,    64,   163,   181,   204,    64,   163,   181,   204,   312,
     145,    93,   164,    93,   164,   436,   213,     4,   155,   168,
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

  case 194:
#line 820 "parser/evoparser.y"
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

  case 196:
#line 833 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 198:
#line 835 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 199:
#line 838 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 200:
#line 845 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 201:
#line 853 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 854 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 203:
#line 855 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 204:
#line 858 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 205:
#line 859 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 207:
#line 863 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 210:
#line 872 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 211:
#line 874 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 214:
#line 882 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 215:
#line 884 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 220:
#line 896 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 221:
#line 902 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 222:
#line 909 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 223:
#line 917 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 224:
#line 918 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 225:
#line 919 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 226:
#line 920 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 227:
#line 923 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 228:
#line 924 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 229:
#line 925 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 230:
#line 926 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 231:
#line 927 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 233:
#line 931 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 234:
#line 934 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 235:
#line 935 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 236:
#line 938 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 939 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 238:
#line 940 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 239:
#line 941 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 240:
#line 942 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 241:
#line 943 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 242:
#line 944 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 243:
#line 945 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 244:
#line 946 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 245:
#line 949 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 246:
#line 950 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 247:
#line 952 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 248:
#line 960 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 249:
#line 965 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 250:
#line 966 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 251:
#line 967 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 252:
#line 970 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 971 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 256:
#line 980 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 257:
#line 986 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 258:
#line 987 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 259:
#line 988 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 262:
#line 997 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 263:
#line 999 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 264:
#line 1001 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 265:
#line 1003 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 266:
#line 1005 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 267:
#line 1008 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 268:
#line 1009 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1010 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 270:
#line 1013 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 271:
#line 1014 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 272:
#line 1017 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 273:
#line 1018 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 274:
#line 1021 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 275:
#line 1022 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 276:
#line 1023 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 279:
#line 1030 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 280:
#line 1031 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 281:
#line 1036 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 282:
#line 1038 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 283:
#line 1040 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 285:
#line 1044 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 286:
#line 1045 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 287:
#line 1048 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 288:
#line 1049 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 289:
#line 1052 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 290:
#line 1057 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 291:
#line 1067 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 292:
#line 1074 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 293:
#line 1075 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 294:
#line 1076 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 295:
#line 1077 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 296:
#line 1082 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 297:
#line 1086 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 298:
#line 1088 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 301:
#line 1094 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 302:
#line 1099 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 303:
#line 1106 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 304:
#line 1113 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 305:
#line 1123 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 306:
#line 1130 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 307:
#line 1137 "parser/evoparser.y"
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

  case 308:
#line 1147 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 309:
#line 1155 "parser/evoparser.y"
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

  case 310:
#line 1165 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 311:
#line 1173 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 312:
#line 1182 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 313:
#line 1191 "parser/evoparser.y"
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

  case 314:
#line 1201 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 315:
#line 1209 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 316:
#line 1218 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 317:
#line 1227 "parser/evoparser.y"
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

  case 318:
#line 1237 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 319:
#line 1246 "parser/evoparser.y"
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

  case 320:
#line 1258 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 321:
#line 1263 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 322:
#line 1268 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 323:
#line 1274 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 324:
#line 1281 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 325:
#line 1288 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 326:
#line 1295 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 327:
#line 1305 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 328:
#line 1312 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 329:
#line 1321 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 330:
#line 1328 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 331:
#line 1334 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 332:
#line 1342 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 333:
#line 1348 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 335:
#line 1356 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 336:
#line 1357 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 337:
#line 1358 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 338:
#line 1359 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 339:
#line 1364 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 340:
#line 1371 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 341:
#line 1380 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 342:
#line 1387 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 343:
#line 1393 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 344:
#line 1403 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 345:
#line 1407 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 346:
#line 1413 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 347:
#line 1419 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 348:
#line 1426 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 349:
#line 1432 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 350:
#line 1439 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 351:
#line 1445 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 352:
#line 1451 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 353:
#line 1457 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 354:
#line 1463 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 355:
#line 1469 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 356:
#line 1475 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 357:
#line 1481 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 358:
#line 1487 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 359:
#line 1493 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 360:
#line 1499 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 361:
#line 1505 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 362:
#line 1511 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 363:
#line 1517 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 364:
#line 1523 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 365:
#line 1530 "parser/evoparser.y"
    { ;}
    break;

  case 366:
#line 1531 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 367:
#line 1532 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 368:
#line 1536 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 369:
#line 1544 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(4) - (9)].strval));
        GetInsertionTableName((yyvsp[(4) - (9)].strval));
        free((yyvsp[(4) - (9)].strval));
    ;}
    break;

  case 370:
#line 1550 "parser/evoparser.y"
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

  case 372:
#line 1563 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 373:
#line 1563 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 374:
#line 1567 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 375:
#line 1575 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 376:
#line 1584 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 377:
#line 1585 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 378:
#line 1586 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 379:
#line 1587 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 380:
#line 1588 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 384:
#line 1595 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 385:
#line 1599 "parser/evoparser.y"
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

  case 386:
#line 1609 "parser/evoparser.y"
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

  case 387:
#line 1621 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1622 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 389:
#line 1622 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 390:
#line 1625 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 391:
#line 1626 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1627 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 393:
#line 1628 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 394:
#line 1632 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 395:
#line 1635 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 396:
#line 1636 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 397:
#line 1637 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 398:
#line 1638 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 399:
#line 1644 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 400:
#line 1650 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 401:
#line 1655 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 402:
#line 1660 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 403:
#line 1665 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 404:
#line 1674 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 405:
#line 1681 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 406:
#line 1682 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 407:
#line 1683 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 408:
#line 1688 "parser/evoparser.y"
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

  case 409:
#line 1699 "parser/evoparser.y"
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

  case 410:
#line 1711 "parser/evoparser.y"
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

  case 411:
#line 1722 "parser/evoparser.y"
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

  case 412:
#line 1737 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 413:
#line 1741 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 414:
#line 1745 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 415:
#line 1746 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 416:
#line 1751 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 417:
#line 1753 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 418:
#line 1755 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 419:
#line 1757 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 420:
#line 1760 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 421:
#line 1761 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 422:
#line 1767 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 423:
#line 1772 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 424:
#line 1774 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 425:
#line 1776 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 426:
#line 1778 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 427:
#line 1780 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 428:
#line 1784 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 429:
#line 1788 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 430:
#line 1789 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 431:
#line 1794 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 432:
#line 1804 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 433:
#line 1813 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 435:
#line 1817 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 436:
#line 1818 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 437:
#line 1819 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 438:
#line 1820 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 439:
#line 1822 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 440:
#line 1824 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 443:
#line 1832 "parser/evoparser.y"
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

  case 444:
#line 1847 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 445:
#line 1855 "parser/evoparser.y"
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

  case 446:
#line 1869 "parser/evoparser.y"
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

  case 447:
#line 1883 "parser/evoparser.y"
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

  case 448:
#line 1897 "parser/evoparser.y"
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

  case 449:
#line 1909 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 450:
#line 1910 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 451:
#line 1911 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 452:
#line 1914 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 453:
#line 1915 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 454:
#line 1918 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 455:
#line 1919 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 456:
#line 1920 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 457:
#line 1921 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 458:
#line 1922 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 459:
#line 1923 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 460:
#line 1924 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 461:
#line 1925 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 462:
#line 1927 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 463:
#line 1929 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 464:
#line 1931 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 465:
#line 1933 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 466:
#line 1935 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 467:
#line 1937 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 468:
#line 1940 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 469:
#line 1941 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 470:
#line 1944 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 471:
#line 1945 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 472:
#line 1948 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 473:
#line 1949 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 475:
#line 1953 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 476:
#line 1954 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 477:
#line 1955 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 478:
#line 1956 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 479:
#line 1957 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 480:
#line 1958 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 481:
#line 1959 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 482:
#line 1960 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 483:
#line 1961 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 484:
#line 1962 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 485:
#line 1963 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 486:
#line 1964 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 487:
#line 1965 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 488:
#line 1966 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 489:
#line 1967 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 490:
#line 1968 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 491:
#line 1969 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 492:
#line 1972 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 493:
#line 1973 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 494:
#line 1976 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 495:
#line 1978 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 496:
#line 1986 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 497:
#line 1987 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1989 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 500:
#line 1990 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 501:
#line 1991 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 502:
#line 1992 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 1993 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 504:
#line 1994 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 505:
#line 1995 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 506:
#line 1996 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 507:
#line 1997 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 508:
#line 2004 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 509:
#line 2005 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 510:
#line 2006 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 511:
#line 2007 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 512:
#line 2008 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 513:
#line 2009 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 514:
#line 2010 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 515:
#line 2011 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 516:
#line 2012 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 517:
#line 2013 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 518:
#line 2014 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 519:
#line 2015 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 520:
#line 2016 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 521:
#line 2017 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 522:
#line 2018 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 523:
#line 2019 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 524:
#line 2020 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 525:
#line 2021 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 526:
#line 2022 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 527:
#line 2023 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 528:
#line 2024 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 529:
#line 2027 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 530:
#line 2028 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 531:
#line 2029 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 532:
#line 2032 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 533:
#line 2033 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 534:
#line 2036 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 535:
#line 2037 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 536:
#line 2038 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 538:
#line 2042 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 539:
#line 2043 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 540:
#line 2047 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 541:
#line 2048 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 542:
#line 2049 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 543:
#line 2050 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 544:
#line 2051 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 545:
#line 2052 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 546:
#line 2053 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 547:
#line 2054 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 548:
#line 2055 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 549:
#line 2056 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 550:
#line 2057 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 551:
#line 2058 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 552:
#line 2059 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 553:
#line 2060 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 554:
#line 2061 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 555:
#line 2062 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 556:
#line 2063 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 557:
#line 2064 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 558:
#line 2065 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 559:
#line 2066 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 560:
#line 2067 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 561:
#line 2068 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 562:
#line 2069 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 563:
#line 2070 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 564:
#line 2071 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 565:
#line 2072 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 566:
#line 2073 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 567:
#line 2074 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 568:
#line 2075 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 569:
#line 2076 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 570:
#line 2077 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 571:
#line 2078 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 572:
#line 2081 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 573:
#line 2082 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 574:
#line 2086 "parser/evoparser.y"
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

  case 575:
#line 2098 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 576:
#line 2099 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 577:
#line 2100 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 578:
#line 2104 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 579:
#line 2107 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 580:
#line 2108 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 584:
#line 2112 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 585:
#line 2113 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 586:
#line 2121 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 587:
#line 2126 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 588:
#line 2132 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 589:
#line 2138 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 590:
#line 2145 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 591:
#line 2152 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 592:
#line 2158 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 593:
#line 2164 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 594:
#line 2171 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 599:
#line 2187 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 600:
#line 2188 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 601:
#line 2189 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 602:
#line 2190 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 603:
#line 2193 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 604:
#line 2194 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 605:
#line 2195 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 606:
#line 2196 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 607:
#line 2197 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 608:
#line 2198 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 609:
#line 2199 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 610:
#line 2200 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 611:
#line 2201 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 612:
#line 2202 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 621:
#line 2219 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 622:
#line 2220 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 743:
#line 2238 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 744:
#line 2245 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 745:
#line 2250 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 746:
#line 2256 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 747:
#line 2262 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 748:
#line 2268 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 749:
#line 2279 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 750:
#line 2284 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 751:
#line 2290 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 754:
#line 2301 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 755:
#line 2302 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 756:
#line 2303 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 757:
#line 2304 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 758:
#line 2305 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 759:
#line 2306 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 760:
#line 2307 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 761:
#line 2314 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 762:
#line 2319 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 763:
#line 2326 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 764:
#line 2327 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 765:
#line 2330 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 766:
#line 2331 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 767:
#line 2332 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 768:
#line 2335 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 769:
#line 2340 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 770:
#line 2346 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 771:
#line 2355 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 772:
#line 2363 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 774:
#line 2374 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 776:
#line 2378 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 777:
#line 2379 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8885 "parser/evoparser.tab.c"
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


#line 2382 "parser/evoparser.y"

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
