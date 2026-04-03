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
     BLOB = 295,
     BOOLEAN = 296,
     BY = 297,
     BINARY = 298,
     BOTH = 299,
     BIGINT = 300,
     BIT = 301,
     CONSTRAINT = 302,
     CURRENT_TIMESTAMP = 303,
     CREATE = 304,
     CASCADE = 305,
     CHANGE = 306,
     CROSS = 307,
     CASE = 308,
     CHECK = 309,
     COMMENT = 310,
     CURRENT_DATE = 311,
     CURRENT_TIME = 312,
     CHAR = 313,
     COLLATE = 314,
     COLUMN = 315,
     CONCURRENTLY = 316,
     DATABASE = 317,
     DEFERRABLE = 318,
     DEFERRED = 319,
     DISABLE = 320,
     DOMAIN = 321,
     DELAYED = 322,
     DAY_HOUR = 323,
     DAY_MICROSECOND = 324,
     DISTINCT = 325,
     DELETE = 326,
     DROP = 327,
     DAY_MINUTE = 328,
     DISTINCTROW = 329,
     DAY_SECOND = 330,
     DESC = 331,
     DEFAULT = 332,
     DOUBLE = 333,
     DATETIME = 334,
     DECIMAL = 335,
     DATE = 336,
     ENABLE = 337,
     ESCAPED = 338,
     EXCEPT = 339,
     ENUM = 340,
     END = 341,
     ELSE = 342,
     EXPLAIN = 343,
     FIRST = 344,
     FLOAT = 345,
     FORCE = 346,
     FOREIGN = 347,
     FROM = 348,
     FULL = 349,
     FULLTEXT = 350,
     FOR = 351,
     GROUP = 352,
     HOUR_MINUTE = 353,
     HOUR_MICROSECOND = 354,
     HIGH_PRIORITY = 355,
     HOUR_SECOND = 356,
     HAVING = 357,
     IMMEDIATE = 358,
     INITIALLY = 359,
     INTEGER = 360,
     INNER = 361,
     IGNORE = 362,
     INDEX = 363,
     IF = 364,
     INSERT = 365,
     INTERSECT = 366,
     INTO = 367,
     INT = 368,
     INTERVAL = 369,
     JOIN = 370,
     KEY = 371,
     LESS = 372,
     LONGTEXT = 373,
     LOW_PRIORITY = 374,
     LEFT = 375,
     LEADING = 376,
     LIMIT = 377,
     LOCKED = 378,
     OFFSET = 379,
     LONGBLOB = 380,
     MATCH = 381,
     MAXVALUE = 382,
     MEDIUMTEXT = 383,
     MINUS = 384,
     MODIFY = 385,
     MEDIUMBLOB = 386,
     MEDIUMINT = 387,
     NATURAL = 388,
     NODE = 389,
     NO_ACTION = 390,
     NULLX = 391,
     OUTER = 392,
     ON = 393,
     ORDER = 394,
     ONDUPLICATE = 395,
     PARTIAL = 396,
     PRIMARY = 397,
     QUICK = 398,
     RANGE = 399,
     REAL = 400,
     RECLAIM = 401,
     REFERENCES = 402,
     RENAME = 403,
     RESTRICT = 404,
     ROLLUP = 405,
     RIGHT = 406,
     REPLACE = 407,
     SQL_SMALL_RESULT = 408,
     SCHEMA = 409,
     SHARD = 410,
     SHARDS = 411,
     SHARE = 412,
     SKIP = 413,
     SOME = 414,
     SQL_CALC_FOUND_ROWS = 415,
     SQL_BIG_RESULT = 416,
     SIMPLE = 417,
     STRAIGHT_JOIN = 418,
     SMALLINT = 419,
     SET = 420,
     SELECT = 421,
     TINYTEXT = 422,
     TINYINT = 423,
     TO = 424,
     TEMPORARY = 425,
     GLOBAL = 426,
     PRESERVE = 427,
     TEXT = 428,
     THAN = 429,
     TIMESTAMP = 430,
     TABLE = 431,
     THEN = 432,
     TRAILING = 433,
     TRUNCATE = 434,
     TINYBLOB = 435,
     TIME = 436,
     UPDATE = 437,
     UNSIGNED = 438,
     UNION = 439,
     UNIQUE = 440,
     UUID = 441,
     VIEW = 442,
     USING = 443,
     USE = 444,
     HASH = 445,
     VALIDATE = 446,
     VARCHAR = 447,
     VALUES = 448,
     VARBINARY = 449,
     WHERE = 450,
     WHEN = 451,
     WITH = 452,
     YEAR = 453,
     YEAR_MONTH = 454,
     ZEROFILL = 455,
     EXISTS = 456,
     FSUBSTRING = 457,
     FTRIM = 458,
     FDATE_ADD = 459,
     FDATE_SUB = 460,
     FDATEDIFF = 461,
     FYEAR = 462,
     FMONTH = 463,
     FDAY = 464,
     FHOUR = 465,
     FMINUTE = 466,
     FSECOND = 467,
     FNOW = 468,
     FLEFT = 469,
     FRIGHT = 470,
     FLPAD = 471,
     FRPAD = 472,
     FREVERSE = 473,
     FREPEAT = 474,
     FINSTR = 475,
     FLOCATE = 476,
     FABS = 477,
     FCEIL = 478,
     FFLOOR = 479,
     FROUND = 480,
     FPOWER = 481,
     FSQRT = 482,
     FMOD = 483,
     FRAND = 484,
     FLOG = 485,
     FLOG10 = 486,
     FSIGN = 487,
     FPI = 488,
     FCAST = 489,
     FCONVERT = 490,
     FNULLIF = 491,
     FIFNULL = 492,
     FIF = 493,
     UNKNOWN = 494,
     FGROUP_CONCAT = 495,
     SEPARATOR = 496,
     FCOUNT = 497,
     FSUM = 498,
     FAVG = 499,
     FMIN = 500,
     FMAX = 501,
     FUPPER = 502,
     FLOWER = 503,
     FLENGTH = 504,
     FCONCAT = 505,
     FREPLACE = 506,
     FCOALESCE = 507,
     FGEN_RANDOM_UUID = 508,
     FGEN_RANDOM_UUID_V7 = 509,
     FSNOWFLAKE_ID = 510,
     FLAST_INSERT_ID = 511,
     FEVO_SLEEP = 512,
     FEVO_JITTER = 513,
     FROW_NUMBER = 514,
     FRANK = 515,
     FDENSE_RANK = 516,
     FLEAD = 517,
     FLAG = 518,
     FNTILE = 519,
     FPERCENT_RANK = 520,
     FCUME_DIST = 521,
     OVER = 522,
     PARTITION = 523
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
#define BLOB 295
#define BOOLEAN 296
#define BY 297
#define BINARY 298
#define BOTH 299
#define BIGINT 300
#define BIT 301
#define CONSTRAINT 302
#define CURRENT_TIMESTAMP 303
#define CREATE 304
#define CASCADE 305
#define CHANGE 306
#define CROSS 307
#define CASE 308
#define CHECK 309
#define COMMENT 310
#define CURRENT_DATE 311
#define CURRENT_TIME 312
#define CHAR 313
#define COLLATE 314
#define COLUMN 315
#define CONCURRENTLY 316
#define DATABASE 317
#define DEFERRABLE 318
#define DEFERRED 319
#define DISABLE 320
#define DOMAIN 321
#define DELAYED 322
#define DAY_HOUR 323
#define DAY_MICROSECOND 324
#define DISTINCT 325
#define DELETE 326
#define DROP 327
#define DAY_MINUTE 328
#define DISTINCTROW 329
#define DAY_SECOND 330
#define DESC 331
#define DEFAULT 332
#define DOUBLE 333
#define DATETIME 334
#define DECIMAL 335
#define DATE 336
#define ENABLE 337
#define ESCAPED 338
#define EXCEPT 339
#define ENUM 340
#define END 341
#define ELSE 342
#define EXPLAIN 343
#define FIRST 344
#define FLOAT 345
#define FORCE 346
#define FOREIGN 347
#define FROM 348
#define FULL 349
#define FULLTEXT 350
#define FOR 351
#define GROUP 352
#define HOUR_MINUTE 353
#define HOUR_MICROSECOND 354
#define HIGH_PRIORITY 355
#define HOUR_SECOND 356
#define HAVING 357
#define IMMEDIATE 358
#define INITIALLY 359
#define INTEGER 360
#define INNER 361
#define IGNORE 362
#define INDEX 363
#define IF 364
#define INSERT 365
#define INTERSECT 366
#define INTO 367
#define INT 368
#define INTERVAL 369
#define JOIN 370
#define KEY 371
#define LESS 372
#define LONGTEXT 373
#define LOW_PRIORITY 374
#define LEFT 375
#define LEADING 376
#define LIMIT 377
#define LOCKED 378
#define OFFSET 379
#define LONGBLOB 380
#define MATCH 381
#define MAXVALUE 382
#define MEDIUMTEXT 383
#define MINUS 384
#define MODIFY 385
#define MEDIUMBLOB 386
#define MEDIUMINT 387
#define NATURAL 388
#define NODE 389
#define NO_ACTION 390
#define NULLX 391
#define OUTER 392
#define ON 393
#define ORDER 394
#define ONDUPLICATE 395
#define PARTIAL 396
#define PRIMARY 397
#define QUICK 398
#define RANGE 399
#define REAL 400
#define RECLAIM 401
#define REFERENCES 402
#define RENAME 403
#define RESTRICT 404
#define ROLLUP 405
#define RIGHT 406
#define REPLACE 407
#define SQL_SMALL_RESULT 408
#define SCHEMA 409
#define SHARD 410
#define SHARDS 411
#define SHARE 412
#define SKIP 413
#define SOME 414
#define SQL_CALC_FOUND_ROWS 415
#define SQL_BIG_RESULT 416
#define SIMPLE 417
#define STRAIGHT_JOIN 418
#define SMALLINT 419
#define SET 420
#define SELECT 421
#define TINYTEXT 422
#define TINYINT 423
#define TO 424
#define TEMPORARY 425
#define GLOBAL 426
#define PRESERVE 427
#define TEXT 428
#define THAN 429
#define TIMESTAMP 430
#define TABLE 431
#define THEN 432
#define TRAILING 433
#define TRUNCATE 434
#define TINYBLOB 435
#define TIME 436
#define UPDATE 437
#define UNSIGNED 438
#define UNION 439
#define UNIQUE 440
#define UUID 441
#define VIEW 442
#define USING 443
#define USE 444
#define HASH 445
#define VALIDATE 446
#define VARCHAR 447
#define VALUES 448
#define VARBINARY 449
#define WHERE 450
#define WHEN 451
#define WITH 452
#define YEAR 453
#define YEAR_MONTH 454
#define ZEROFILL 455
#define EXISTS 456
#define FSUBSTRING 457
#define FTRIM 458
#define FDATE_ADD 459
#define FDATE_SUB 460
#define FDATEDIFF 461
#define FYEAR 462
#define FMONTH 463
#define FDAY 464
#define FHOUR 465
#define FMINUTE 466
#define FSECOND 467
#define FNOW 468
#define FLEFT 469
#define FRIGHT 470
#define FLPAD 471
#define FRPAD 472
#define FREVERSE 473
#define FREPEAT 474
#define FINSTR 475
#define FLOCATE 476
#define FABS 477
#define FCEIL 478
#define FFLOOR 479
#define FROUND 480
#define FPOWER 481
#define FSQRT 482
#define FMOD 483
#define FRAND 484
#define FLOG 485
#define FLOG10 486
#define FSIGN 487
#define FPI 488
#define FCAST 489
#define FCONVERT 490
#define FNULLIF 491
#define FIFNULL 492
#define FIF 493
#define UNKNOWN 494
#define FGROUP_CONCAT 495
#define SEPARATOR 496
#define FCOUNT 497
#define FSUM 498
#define FAVG 499
#define FMIN 500
#define FMAX 501
#define FUPPER 502
#define FLOWER 503
#define FLENGTH 504
#define FCONCAT 505
#define FREPLACE 506
#define FCOALESCE 507
#define FGEN_RANDOM_UUID 508
#define FGEN_RANDOM_UUID_V7 509
#define FSNOWFLAKE_ID 510
#define FLAST_INSERT_ID 511
#define FEVO_SLEEP 512
#define FEVO_JITTER 513
#define FROW_NUMBER 514
#define FRANK 515
#define FDENSE_RANK 516
#define FLEAD 517
#define FLAG 518
#define FNTILE 519
#define FPERCENT_RANK 520
#define FCUME_DIST 521
#define OVER 522
#define PARTITION 523




/* Copy the first part of user declarations.  */
#line 4 "evoparser.y"

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
#line 54 "evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 687 "evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 700 "evoparser.tab.c"

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  283
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  581
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1566

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   523

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     280,   281,    26,    24,   282,    25,   279,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   278,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
     274,   275,   276,   277
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
    2799,  2803
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     284,     0,    -1,   320,   278,    -1,   320,   278,   284,    -1,
       3,    -1,     3,   279,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   285,    24,
     285,    -1,   285,    25,   285,    -1,   285,    26,   285,    -1,
     285,    27,   285,    -1,   285,    28,   285,    -1,   285,    29,
     285,    -1,    25,   285,    -1,   280,   285,   281,    -1,   285,
      12,   285,    -1,   285,    10,   285,    -1,   285,    11,   285,
      -1,   285,    21,   285,    -1,   285,    22,   285,    -1,   285,
      30,   285,    -1,   285,    23,   285,    -1,    18,   285,    -1,
      17,   285,    -1,   285,    20,   285,    -1,    -1,   285,    20,
     280,   286,   321,   281,    -1,    -1,   285,    20,    37,   280,
     287,   321,   281,    -1,    -1,   285,    20,   168,   280,   288,
     321,   281,    -1,    -1,   285,    20,    35,   280,   289,   321,
     281,    -1,   285,    15,   145,    -1,   285,    15,    18,   145,
      -1,   285,    15,     6,    -1,   285,    15,    18,     6,    -1,
       8,     9,   285,    -1,   285,    19,   285,    40,   285,    -1,
     285,    18,    19,   285,    40,   285,    -1,   285,    -1,   285,
     282,   290,    -1,    -1,   290,    -1,    -1,   285,    16,   280,
     292,   290,   281,    -1,    -1,   285,    18,    16,   280,   293,
     290,   281,    -1,    -1,   285,    16,   280,   294,   321,   281,
      -1,    -1,   285,    18,    16,   280,   295,   321,   281,    -1,
      -1,   210,   280,   296,   321,   281,    -1,     3,   280,   291,
     281,    -1,   251,   280,    26,   281,    -1,   251,   280,   285,
     281,    -1,   252,   280,   285,   281,    -1,   253,   280,   285,
     281,    -1,   254,   280,   285,   281,    -1,   255,   280,   285,
     281,    -1,   249,   280,   285,   281,    -1,   249,   280,   285,
     250,     4,   281,    -1,    -1,   268,   280,   281,   276,   280,
     297,   328,   330,   281,    -1,    -1,   269,   280,   281,   276,
     280,   298,   328,   330,   281,    -1,    -1,   270,   280,   281,
     276,   280,   299,   328,   330,   281,    -1,    -1,   252,   280,
     285,   281,   276,   280,   300,   328,   330,   281,    -1,    -1,
     251,   280,    26,   281,   276,   280,   301,   328,   330,   281,
      -1,    -1,   251,   280,   285,   281,   276,   280,   302,   328,
     330,   281,    -1,    -1,   253,   280,   285,   281,   276,   280,
     303,   328,   330,   281,    -1,    -1,   254,   280,   285,   281,
     276,   280,   304,   328,   330,   281,    -1,    -1,   255,   280,
     285,   281,   276,   280,   305,   328,   330,   281,    -1,    -1,
     271,   280,   285,   281,   276,   280,   306,   328,   330,   281,
      -1,    -1,   271,   280,   285,   282,     5,   281,   276,   280,
     307,   328,   330,   281,    -1,    -1,   271,   280,   285,   282,
       5,   282,     4,   281,   276,   280,   308,   328,   330,   281,
      -1,    -1,   271,   280,   285,   282,     5,   282,     5,   281,
     276,   280,   309,   328,   330,   281,    -1,    -1,   272,   280,
     285,   281,   276,   280,   310,   328,   330,   281,    -1,    -1,
     272,   280,   285,   282,     5,   281,   276,   280,   311,   328,
     330,   281,    -1,    -1,   272,   280,   285,   282,     5,   282,
       4,   281,   276,   280,   312,   328,   330,   281,    -1,    -1,
     272,   280,   285,   282,     5,   282,     5,   281,   276,   280,
     313,   328,   330,   281,    -1,    -1,   273,   280,     5,   281,
     276,   280,   314,   328,   330,   281,    -1,    -1,   274,   280,
     281,   276,   280,   315,   328,   330,   281,    -1,    -1,   275,
     280,   281,   276,   280,   316,   328,   330,   281,    -1,   211,
     280,   285,   282,   285,   282,   285,   281,    -1,   211,   280,
     285,   282,   285,   281,    -1,   211,   280,   285,   102,   285,
     281,    -1,   211,   280,   285,   102,   285,   105,   285,   281,
      -1,   212,   280,   285,   281,    -1,   212,   280,   317,   285,
     102,   285,   281,    -1,   212,   280,   317,   102,   285,   281,
      -1,   256,   280,   285,   281,    -1,   257,   280,   285,   281,
      -1,   258,   280,   285,   281,    -1,   259,   280,   285,   282,
     285,   281,    -1,   260,   280,   285,   282,   285,   282,   285,
     281,    -1,   261,   280,   285,   282,   285,   281,    -1,   223,
     280,   285,   282,   285,   281,    -1,   224,   280,   285,   282,
     285,   281,    -1,   225,   280,   285,   282,   285,   282,   285,
     281,    -1,   226,   280,   285,   282,   285,   282,   285,   281,
      -1,   227,   280,   285,   281,    -1,   228,   280,   285,   282,
     285,   281,    -1,   229,   280,   285,   282,   285,   281,    -1,
     230,   280,   285,   282,   285,   281,    -1,   231,   280,   285,
     281,    -1,   232,   280,   285,   281,    -1,   233,   280,   285,
     281,    -1,   234,   280,   285,   282,   285,   281,    -1,   234,
     280,   285,   281,    -1,   235,   280,   285,   282,   285,   281,
      -1,   236,   280,   285,   281,    -1,   237,   280,   285,   282,
     285,   281,    -1,   238,   280,   281,    -1,   239,   280,   285,
     281,    -1,   240,   280,   285,   281,    -1,   241,   280,   285,
     281,    -1,   242,   280,   281,    -1,   222,   280,   281,    -1,
     215,   280,   285,   282,   285,   281,    -1,   216,   280,   285,
     281,    -1,   217,   280,   285,   281,    -1,   218,   280,   285,
     281,    -1,   219,   280,   285,   281,    -1,   220,   280,   285,
     281,    -1,   221,   280,   285,   281,    -1,   243,   280,   285,
      41,   410,   281,    -1,   244,   280,   285,   282,   410,   281,
      -1,   245,   280,   285,   282,   285,   281,    -1,   246,   280,
     285,   282,   285,   281,    -1,   247,   280,   285,   282,   285,
     282,   285,   281,    -1,   285,    15,   248,    -1,   259,   280,
     285,   282,   285,   282,   285,   281,    -1,   259,   280,   285,
     282,   285,   282,   285,   282,   285,   281,    -1,   262,   280,
     281,    -1,   263,   280,   281,    -1,   264,   280,   281,    -1,
     265,   280,   281,    -1,   266,   280,   285,   281,    -1,   267,
     280,   285,   282,   285,   281,    -1,   130,    -1,   187,    -1,
      53,    -1,   213,   280,   285,   282,   318,   281,    -1,   214,
     280,   285,   282,   318,   281,    -1,   123,   285,   207,    -1,
     123,   285,    77,    -1,   123,   285,    78,    -1,   123,   285,
      82,    -1,   123,   285,    84,    -1,   123,   285,   208,    -1,
     123,   285,   108,    -1,   123,   285,   107,    -1,   123,   285,
     110,    -1,    62,   285,   319,    95,    -1,    62,   285,   319,
      96,   285,    95,    -1,    62,   319,    95,    -1,    62,   319,
      96,   285,    95,    -1,   205,   285,   186,   285,    -1,   319,
     205,   285,   186,   285,    -1,   285,    14,   285,    -1,   285,
      18,    14,   285,    -1,   285,    13,   285,    -1,   285,    18,
      13,   285,    -1,    57,    -1,    65,    -1,    66,    -1,   321,
      -1,   175,   339,   340,    -1,   175,   339,   340,   102,   343,
     322,   323,   327,   332,   335,   336,   337,    -1,    -1,   204,
     285,    -1,    -1,   106,    51,   324,   326,    -1,   285,   325,
      -1,   324,   282,   285,   325,    -1,    -1,    39,    -1,    85,
      -1,    -1,   206,   159,    -1,    -1,   111,   285,    -1,    -1,
     277,    51,   329,    -1,     3,    -1,   329,   282,     3,    -1,
      -1,   148,    51,   331,    -1,     3,   325,    -1,   331,   282,
       3,   325,    -1,    -1,   148,    51,   333,    -1,   334,    -1,
     333,   282,   334,    -1,     3,   325,    -1,     3,   279,     3,
     325,    -1,     5,   325,    -1,    -1,   131,   285,    -1,   131,
     285,   282,   285,    -1,   131,   285,   133,   285,    -1,    -1,
     105,   191,    -1,   105,   166,    -1,   105,   191,   167,   132,
      -1,   105,   166,   167,   132,    -1,    -1,   121,   338,    -1,
       3,    -1,   338,   282,     3,    -1,    -1,   339,    35,    -1,
     339,    79,    -1,   339,    83,    -1,   339,   109,    -1,   339,
     172,    -1,   339,   162,    -1,   339,   170,    -1,   339,   169,
      -1,   341,    -1,   340,   282,   341,    -1,    26,    -1,   285,
     342,    -1,    41,     3,    -1,     3,    -1,    -1,   344,    -1,
     343,   282,   344,    -1,   345,    -1,   347,    -1,     3,   342,
     354,    -1,     3,   279,     3,   342,   354,    -1,   357,   346,
       3,    -1,   280,   343,   281,    -1,    41,    -1,    -1,   344,
     348,   124,   345,   352,    -1,   344,   172,   345,    -1,   344,
     172,   345,   147,   285,    -1,   344,   350,   349,   124,   345,
     353,    -1,   344,   142,   351,   124,   345,    -1,    -1,   115,
      -1,    61,    -1,    -1,   146,    -1,   129,    -1,   160,    -1,
     129,   349,    -1,   160,   349,    -1,    -1,    -1,   353,    -1,
     147,   285,    -1,   197,   280,   338,   281,    -1,   198,   125,
     355,   280,   356,   281,    -1,   116,   125,   355,   280,   356,
     281,    -1,   100,   125,   355,   280,   356,   281,    -1,    -1,
     105,   124,    -1,    -1,     3,    -1,   356,   282,     3,    -1,
     280,   321,   281,    -1,   358,    -1,    80,   359,   102,     3,
     322,   332,   335,    -1,   359,   128,    -1,   359,   152,    -1,
     359,   116,    -1,    -1,    80,   359,   360,   102,   343,   322,
      -1,     3,   361,    -1,   360,   282,     3,   361,    -1,    -1,
     279,    26,    -1,    80,   359,   102,   360,   197,   343,   322,
      -1,   362,    -1,    81,   185,     3,    -1,    81,   185,   118,
     210,     3,    -1,   363,    -1,    58,   117,     3,   147,     3,
     280,   364,   281,    -1,    58,   117,   118,   210,     3,   147,
       3,   280,   364,   281,    -1,    58,   194,   117,     3,   147,
       3,   280,   364,   281,    -1,    58,   194,   117,   118,   210,
       3,   147,     3,   280,   364,   281,    -1,    58,   117,     3,
     147,     3,   197,   199,   280,   364,   281,    -1,    58,   117,
     118,   210,     3,   147,     3,   197,   199,   280,   364,   281,
      -1,    58,   194,   117,     3,   147,     3,   197,   199,   280,
     364,   281,    -1,    58,   194,   117,   118,   210,     3,   147,
       3,   197,   199,   280,   364,   281,    -1,    58,   117,    70,
       3,   147,     3,   280,   364,   281,    -1,    58,   117,    70,
     118,   210,     3,   147,     3,   280,   364,   281,    -1,    58,
     194,   117,    70,     3,   147,     3,   280,   364,   281,    -1,
      58,   194,   117,    70,   118,   210,     3,   147,     3,   280,
     364,   281,    -1,    58,   117,    70,     3,   147,     3,   197,
     199,   280,   364,   281,    -1,    58,   194,   117,    70,     3,
     147,     3,   197,   199,   280,   364,   281,    -1,     3,    -1,
     364,   282,     3,    -1,   365,    -1,   256,   280,     3,   281,
      -1,   257,   280,     3,   281,    -1,   258,   280,     3,   281,
      -1,   259,   280,     3,   282,     3,   281,    -1,   366,    -1,
      81,   117,     3,    -1,   367,   369,    -1,   188,   185,     3,
      -1,   188,   185,     3,   282,   368,    -1,     3,    -1,   368,
     282,     3,    -1,    -1,   369,    59,    -1,   369,   158,    -1,
     369,    45,    43,    -1,   369,    44,    43,    -1,   370,    -1,
     155,   185,     3,    -1,   371,    -1,    36,   185,     3,    -1,
      36,   185,     3,   279,     3,    -1,   372,    -1,    32,   185,
       3,    33,    56,     3,    63,   280,   285,   281,    -1,    32,
     185,     3,    33,    56,     3,   194,   280,   403,   281,    -1,
      32,   185,     3,    33,    56,     3,   101,   125,   280,   400,
     281,   156,     3,   280,   401,   281,   402,    -1,    32,   185,
       3,    33,    56,     3,    63,   280,   285,   281,    18,   200,
      -1,    32,   185,     3,    33,    56,     3,   101,   125,   280,
     400,   281,   156,     3,   280,   401,   281,   402,    18,   200,
      -1,    32,   185,     3,    33,    56,     3,   151,   125,   280,
     399,   281,    -1,    32,   185,     3,    81,    56,     3,    -1,
      32,   185,     3,   157,    56,     3,   178,     3,    -1,    32,
     185,     3,    91,    56,     3,    -1,    32,   185,     3,    74,
      56,     3,    -1,    32,   185,     3,   200,    56,     3,    -1,
      32,   185,     3,    33,    69,     3,   410,   405,   373,    -1,
      32,   185,     3,    81,    69,     3,    -1,    32,   185,     3,
      81,     3,    -1,    32,   185,     3,   157,    69,     3,   178,
       3,    -1,    32,   185,     3,   157,     3,   178,     3,    -1,
      32,   185,     3,   139,    69,     3,   410,   405,   373,    -1,
      32,   185,     3,   139,     3,   410,   405,   373,    -1,    32,
     185,     3,    60,    69,     3,     3,   410,   405,   373,    -1,
      32,   185,     3,    60,     3,     3,   410,   405,   373,    -1,
      -1,    98,    -1,    34,     3,    -1,   374,    -1,   119,   376,
     377,     3,   378,   202,   380,   375,    -1,   119,   376,   377,
       3,   378,   321,    -1,    -1,   149,   125,   191,   383,    -1,
      -1,   376,   128,    -1,   376,    76,    -1,   376,   109,    -1,
     376,   116,    -1,   121,    -1,    -1,    -1,   280,   379,   281,
      -1,     3,    -1,   379,   282,     3,    -1,   280,   382,   281,
      -1,    -1,   380,   282,   381,   280,   382,   281,    -1,   285,
      -1,    86,    -1,   382,   282,   285,    -1,   382,   282,    86,
      -1,   119,   376,   377,     3,   174,   383,   375,    -1,     3,
      20,   285,    -1,     3,    20,    86,    -1,   383,   282,     3,
      20,   285,    -1,   383,   282,     3,    20,    86,    -1,   384,
      -1,   161,   376,   377,     3,   378,   202,   380,   375,    -1,
     161,   376,   377,     3,   174,   383,   375,    -1,   161,   376,
     377,     3,   378,   321,   375,    -1,   385,    -1,   191,   386,
     343,   174,   387,   322,   332,   335,    -1,    -1,   376,   128,
      -1,   376,   116,    -1,     3,    20,   285,    -1,     3,   279,
       3,    20,   285,    -1,   387,   282,     3,    20,   285,    -1,
     387,   282,     3,   279,     3,    20,   285,    -1,   157,   185,
       3,   178,     3,    -1,   388,    -1,    58,    71,   389,     3,
      -1,    58,   163,   389,     3,    -1,    81,    71,     3,    -1,
      81,    71,   118,   210,     3,    -1,    81,   163,     3,    -1,
      81,   163,   118,   210,     3,    -1,    -1,   118,   210,    -1,
     390,    -1,    58,    75,     3,    41,   410,    -1,    58,    75,
       3,    41,   410,    86,   285,    -1,    58,    75,     3,    41,
     410,    18,   145,    -1,    58,    75,     3,    41,   410,    63,
     280,   285,   281,    -1,    58,    75,     3,    41,   410,    18,
     145,    63,   280,   285,   281,    -1,   391,    -1,   198,     3,
      -1,   198,    71,     3,    -1,   392,    -1,    58,   396,   185,
     389,     3,   280,   397,   281,   393,    -1,    58,   396,   185,
     389,     3,   279,     3,   280,   397,   281,   393,    -1,    -1,
     393,    38,    20,     5,    -1,   393,    38,     5,    -1,   393,
     147,     3,    80,     3,    -1,   393,   147,     3,   181,     3,
      -1,   393,   164,    51,   199,   280,     3,   281,   165,     5,
      -1,   393,   164,    51,   153,   280,     3,   281,   280,   394,
     281,    -1,   395,    -1,   394,   282,   395,    -1,   164,     3,
     202,   126,   183,     4,   147,   143,     5,    -1,   164,     3,
     202,   126,   183,   136,   147,   143,     5,    -1,    58,   396,
     185,   389,     3,   280,   397,   281,   412,    -1,    58,   396,
     185,   389,     3,   412,    -1,    58,   396,   185,   389,     3,
     279,     3,   280,   397,   281,   412,    -1,    58,   396,   185,
     389,     3,   279,     3,   412,    -1,    -1,   179,    -1,   180,
     179,    -1,   398,    -1,   397,   282,   398,    -1,   151,   125,
     280,   399,   281,    -1,    56,     3,   151,   125,   280,   399,
     281,    -1,   125,   280,   338,   281,    -1,   117,   280,   338,
     281,    -1,   104,   117,   280,   338,   281,    -1,   104,   125,
     280,   338,   281,    -1,    63,   280,   285,   281,    -1,    56,
       3,    63,   280,   285,   281,    -1,   101,   125,   280,   400,
     281,   156,     3,   280,   401,   281,   402,    -1,   101,   125,
     280,   400,   281,   156,     3,   279,     3,   280,   401,   281,
     402,    -1,    56,     3,   101,   125,   280,   400,   281,   156,
       3,   280,   401,   281,   402,    -1,    56,     3,   101,   125,
     280,   400,   281,   156,     3,   279,     3,   280,   401,   281,
     402,    -1,   194,   280,   403,   281,    -1,    56,     3,   194,
     280,   403,   281,    -1,     3,    -1,   399,   282,     3,    -1,
       3,    -1,   400,   282,     3,    -1,     3,    -1,   401,   282,
       3,    -1,    -1,   402,   147,    80,    59,    -1,   402,   147,
      80,   174,   145,    -1,   402,   147,    80,   158,    -1,   402,
     147,    80,   174,    86,    -1,   402,   147,   191,    59,    -1,
     402,   147,   191,   174,   145,    -1,   402,   147,   191,   158,
      -1,   402,   147,   191,   174,    86,    -1,   402,   147,    80,
     144,    -1,   402,   147,   191,   144,    -1,   402,   135,   103,
      -1,   402,   135,   171,    -1,   402,   135,   150,    -1,   402,
      72,    -1,   402,    18,    72,    -1,   402,    72,   113,    73,
      -1,   402,    72,   113,   112,    -1,     3,    -1,   403,   282,
       3,    -1,    -1,   404,     3,   410,   405,    -1,    -1,   405,
      18,   145,    -1,   405,   145,    -1,   405,    86,     4,    -1,
     405,    86,     5,    -1,   405,    86,     7,    -1,   405,    86,
       6,    -1,   405,    86,   262,   280,   281,    -1,   405,    86,
     263,   280,   281,    -1,   405,    86,   264,   280,   281,    -1,
     405,    86,    57,    -1,   405,    86,   280,   285,   281,    -1,
     405,    38,    -1,   405,    38,   280,     5,   282,     5,   281,
      -1,   405,    38,   280,     5,   281,    -1,   405,    43,   280,
       5,   282,     5,   281,    -1,   405,    43,   280,     5,   281,
      -1,   405,    43,    -1,   405,   194,   125,    -1,   405,   194,
      -1,   405,   151,   125,    -1,   405,   125,    -1,   405,    64,
       4,    -1,   405,    63,   280,   285,   281,    -1,   405,    56,
       3,   194,    -1,   405,    56,     3,   151,   125,    -1,   405,
      56,     3,    63,   280,   285,   281,    -1,   405,    46,    42,
      41,   280,   285,   281,    47,    -1,   405,    46,    42,    41,
     280,   285,   281,    48,    -1,   405,    46,    42,    41,   280,
     285,   281,    -1,   405,    41,   280,   285,   281,    47,    -1,
     405,    41,   280,   285,   281,    48,    -1,   405,    41,   280,
     285,   281,    -1,    -1,   280,     5,   281,    -1,   280,     5,
     282,     5,   281,    -1,    -1,    52,    -1,    -1,   408,   192,
      -1,   408,   209,    -1,    -1,   409,    67,   174,     4,    -1,
     409,    68,     4,    -1,    55,   406,    -1,   177,   406,   408,
      -1,   173,   406,   408,    -1,   141,   406,   408,    -1,   122,
     406,   408,    -1,   114,   406,   408,    -1,    54,   406,   408,
      -1,   154,   406,   408,    -1,    87,   406,   408,    -1,    99,
     406,   408,    -1,    89,   406,   408,    -1,    90,    -1,   190,
      -1,   184,    -1,    88,    -1,   207,    -1,    67,   406,   409,
      -1,   201,   280,     5,   281,   409,    -1,    52,   406,    -1,
     203,   280,     5,   281,    -1,   189,    -1,    49,    -1,   140,
      -1,   134,    -1,   176,   407,   409,    -1,   182,   407,   409,
      -1,   137,   407,   409,    -1,   127,   407,   409,    -1,    94,
     280,   411,   281,   409,    -1,   174,   280,   411,   281,   409,
      -1,    50,    -1,   195,    -1,     4,    -1,   411,   282,     4,
      -1,   413,   346,   321,    -1,    -1,   116,    -1,   161,    -1,
     414,    -1,   174,   163,     3,    -1,   174,   163,    86,    -1,
     174,   415,    -1,   416,    -1,   415,   282,   416,    -1,     8,
      20,   285,    -1,     8,     9,   285,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   365,   365,   366,   371,   378,   379,   380,   398,   406,
     414,   420,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     451,   451,   460,   460,   462,   462,   464,   464,   468,   469,
     470,   471,   472,   475,   476,   479,   480,   483,   484,   487,
     487,   488,   488,   489,   489,   497,   497,   505,   505,   516,
     520,   521,   522,   523,   524,   525,   526,   527,   531,   531,
     533,   533,   535,   535,   538,   538,   540,   540,   542,   542,
     544,   544,   546,   546,   548,   548,   551,   551,   553,   553,
     555,   555,   557,   557,   559,   559,   561,   561,   563,   563,
     565,   565,   568,   568,   570,   570,   572,   572,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   611,   612,   613,   614,   615,   616,   617,   618,
     620,   621,   623,   624,   625,   627,   628,   629,   630,   637,
     644,   651,   655,   659,   665,   666,   667,   670,   676,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   694,   696,
     698,   700,   704,   712,   723,   724,   727,   728,   731,   739,
     747,   758,   768,   769,   783,   784,   785,   786,   789,   796,
     804,   805,   806,   809,   810,   813,   814,   818,   819,   822,
     824,   828,   829,   832,   834,   838,   839,   842,   843,   846,
     852,   859,   868,   869,   870,   871,   874,   875,   876,   877,
     878,   881,   882,   885,   886,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   900,   901,   902,   910,   916,   917,
     918,   921,   922,   925,   926,   930,   937,   938,   939,   942,
     943,   947,   949,   951,   953,   955,   959,   960,   961,   964,
     965,   968,   969,   972,   973,   974,   977,   978,   981,   982,
     986,   988,   990,   992,   995,   996,   999,  1000,  1003,  1007,
    1017,  1025,  1026,  1027,  1028,  1032,  1036,  1038,  1042,  1042,
    1044,  1049,  1056,  1063,  1073,  1080,  1087,  1097,  1105,  1115,
    1123,  1132,  1141,  1151,  1159,  1168,  1177,  1187,  1196,  1208,
    1213,  1218,  1224,  1231,  1238,  1245,  1255,  1262,  1271,  1278,
    1284,  1292,  1298,  1306,  1307,  1308,  1309,  1310,  1314,  1321,
    1330,  1337,  1343,  1354,  1357,  1363,  1369,  1376,  1382,  1389,
    1395,  1401,  1407,  1413,  1419,  1425,  1431,  1437,  1443,  1449,
    1455,  1461,  1467,  1473,  1481,  1482,  1483,  1486,  1494,  1500,
    1513,  1514,  1517,  1518,  1519,  1520,  1521,  1524,  1524,  1527,
    1528,  1531,  1541,  1554,  1555,  1555,  1558,  1559,  1560,  1561,
    1564,  1568,  1569,  1570,  1571,  1577,  1580,  1586,  1591,  1597,
    1605,  1614,  1615,  1616,  1620,  1631,  1643,  1654,  1669,  1674,
    1678,  1679,  1683,  1685,  1687,  1689,  1693,  1694,  1700,  1704,
    1706,  1708,  1710,  1712,  1717,  1721,  1722,  1726,  1735,  1745,
    1749,  1750,  1751,  1752,  1753,  1754,  1756,  1760,  1761,  1764,
    1779,  1786,  1801,  1814,  1829,  1842,  1843,  1844,  1847,  1848,
    1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,  1859,  1861,
    1863,  1865,  1867,  1869,  1873,  1874,  1877,  1878,  1881,  1882,
    1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,
    1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1905,  1906,
    1909,  1909,  1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,
    1927,  1928,  1929,  1930,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1960,  1961,  1962,  1965,  1966,
    1969,  1970,  1971,  1974,  1975,  1976,  1980,  1981,  1982,  1983,
    1984,  1985,  1986,  1987,  1988,  1989,  1990,  1991,  1992,  1993,
    1994,  1995,  1996,  1997,  1998,  1999,  2000,  2001,  2002,  2003,
    2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,  2014,  2015,
    2018,  2031,  2032,  2033,  2037,  2040,  2041,  2042,  2043,  2043,
    2045,  2046
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
  "VIRTUAL", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CHANGE",
  "CROSS", "CASE", "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME",
  "CHAR", "COLLATE", "COLUMN", "CONCURRENTLY", "DATABASE", "DEFERRABLE",
  "DEFERRED", "DISABLE", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ENABLE", "ESCAPED", "EXCEPT", "ENUM", "END", "ELSE",
  "EXPLAIN", "FIRST", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL",
  "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INITIALLY",
  "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTERSECT",
  "INTO", "INT", "INTERVAL", "JOIN", "KEY", "LESS", "LONGTEXT",
  "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED", "OFFSET",
  "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS", "MODIFY",
  "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION", "NULLX",
  "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY", "QUICK",
  "RANGE", "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESTRICT", "ROLLUP",
  "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS",
  "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT",
  "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "TINYTEXT",
  "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT", "THAN",
  "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME",
  "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "VIEW", "USING", "USE",
  "HASH", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN",
  "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING",
  "FTRIM", "FDATE_ADD", "FDATE_SUB", "FDATEDIFF", "FYEAR", "FMONTH",
  "FDAY", "FHOUR", "FMINUTE", "FSECOND", "FNOW", "FLEFT", "FRIGHT",
  "FLPAD", "FRPAD", "FREVERSE", "FREPEAT", "FINSTR", "FLOCATE", "FABS",
  "FCEIL", "FFLOOR", "FROUND", "FPOWER", "FSQRT", "FMOD", "FRAND", "FLOG",
  "FLOG10", "FSIGN", "FPI", "FCAST", "FCONVERT", "FNULLIF", "FIFNULL",
  "FIF", "UNKNOWN", "FGROUP_CONCAT", "SEPARATOR", "FCOUNT", "FSUM", "FAVG",
  "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE",
  "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "FROW_NUMBER", "FRANK",
  "FDENSE_RANK", "FLEAD", "FLAG", "FNTILE", "FPERCENT_RANK", "FCUME_DIST",
  "OVER", "PARTITION", "';'", "'.'", "'('", "')'", "','", "$accept",
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
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", 0
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
     516,   517,   518,   519,   520,   521,   522,   523,    59,    46,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   283,   284,   284,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     286,   285,   287,   285,   288,   285,   289,   285,   285,   285,
     285,   285,   285,   285,   285,   290,   290,   291,   291,   292,
     285,   293,   285,   294,   285,   295,   285,   296,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   297,   285,
     298,   285,   299,   285,   300,   285,   301,   285,   302,   285,
     303,   285,   304,   285,   305,   285,   306,   285,   307,   285,
     308,   285,   309,   285,   310,   285,   311,   285,   312,   285,
     313,   285,   314,   285,   315,   285,   316,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   317,   317,   317,   285,   285,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   285,   285,
     285,   285,   319,   319,   285,   285,   285,   285,   285,   285,
     285,   320,   321,   321,   322,   322,   323,   323,   324,   324,
     325,   325,   325,   326,   326,   327,   327,   328,   328,   329,
     329,   330,   330,   331,   331,   332,   332,   333,   333,   334,
     334,   334,   335,   335,   335,   335,   336,   336,   336,   336,
     336,   337,   337,   338,   338,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   340,   340,   340,   341,   342,   342,
     342,   343,   343,   344,   344,   345,   345,   345,   345,   346,
     346,   347,   347,   347,   347,   347,   348,   348,   348,   349,
     349,   350,   350,   351,   351,   351,   352,   352,   353,   353,
     354,   354,   354,   354,   355,   355,   356,   356,   357,   320,
     358,   359,   359,   359,   359,   358,   360,   360,   361,   361,
     358,   320,   362,   362,   320,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   364,
     364,   364,   365,   365,   365,   365,   320,   366,   320,   367,
     367,   368,   368,   369,   369,   369,   369,   369,   320,   370,
     320,   371,   371,   320,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   373,   373,   373,   320,   374,   374,
     375,   375,   376,   376,   376,   376,   376,   377,   377,   378,
     378,   379,   379,   380,   381,   380,   382,   382,   382,   382,
     374,   383,   383,   383,   383,   320,   384,   384,   384,   320,
     385,   386,   386,   386,   387,   387,   387,   387,   320,   320,
     388,   388,   320,   320,   320,   320,   389,   389,   320,   390,
     390,   390,   390,   390,   320,   391,   391,   320,   392,   392,
     393,   393,   393,   393,   393,   393,   393,   394,   394,   395,
     395,   392,   392,   392,   392,   396,   396,   396,   397,   397,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   399,   399,   400,   400,   401,   401,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   403,   403,
     404,   398,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   406,   406,   406,   407,   407,
     408,   408,   408,   409,   409,   409,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   411,   411,
     412,   413,   413,   413,   320,   414,   414,   414,   415,   415,
     416,   416
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
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   445,   294,     0,   372,     0,     0,   372,
       0,   235,     0,   372,     0,     0,     0,   191,   289,   301,
     304,   326,   333,   338,   340,   343,   367,   395,   399,   409,
     418,   424,   427,   574,     0,     0,   416,     0,     0,   416,
     446,     0,     0,     0,     0,     0,     0,     0,     0,   378,
       0,     0,   378,     0,     0,   577,   578,     0,     0,     0,
       0,   425,     0,     1,     2,   328,     0,   341,     0,     0,
       0,     0,     0,     0,     0,   447,     0,   416,   298,     0,
     293,   291,   292,     0,   412,     0,   327,   414,     0,   302,
       0,   374,   375,   376,   377,   373,     0,   339,     0,     0,
       0,     0,   575,   576,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   246,   236,   188,     0,   189,   190,
     237,   238,   239,    11,   241,   243,   242,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   192,   244,   329,   376,   373,   250,
       0,     0,   251,   253,   254,   260,   426,     3,     0,     0,
     334,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,   410,     0,     0,     0,     0,     0,   411,     0,
       0,     0,     0,     0,   296,   194,     0,     0,     0,     0,
       0,     0,   379,     0,   379,   581,   580,   579,     0,    47,
       0,    28,    27,    18,     0,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,     0,     0,     0,   283,
       0,     0,     0,     0,   268,   267,   271,   275,   272,     0,
       0,   269,   259,     0,   337,   336,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   342,   557,   566,   525,   525,   525,   525,   525,   550,
     525,   547,     0,   525,   525,   525,   528,   559,   528,   558,
     525,   525,   525,     0,   528,   525,   528,   549,   556,   548,
     567,     0,     0,   551,   419,     0,     0,     0,     0,     0,
       0,     0,     0,   571,   299,     0,   215,     0,   194,   298,
     413,   415,   303,     0,     0,     0,   408,     0,     0,     5,
      45,    48,     0,    42,     0,     0,   180,     0,     0,     0,
       0,   166,   164,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,   159,   160,   161,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    21,
      22,    20,   186,   184,    40,     0,    38,   155,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    29,    23,
      24,    26,    12,    13,    14,    15,    16,    17,    25,   248,
     194,   245,   331,   330,   250,     0,     0,     0,   255,   288,
     258,     0,   194,   252,   269,   269,     0,   262,     0,   270,
       0,   257,     0,     0,     0,     0,   353,   350,   356,   352,
     492,     0,     0,     0,     0,   354,     0,   554,   530,   536,
     533,   530,   530,     0,   530,   530,   530,   529,   533,   533,
     530,   530,   530,     0,   533,   530,   533,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   572,   573,     0,   490,   442,   260,   195,     0,   222,
     194,   295,   297,     0,   370,   381,     0,     0,   369,   370,
       0,   370,     0,    59,     0,   178,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,   144,   145,
     146,   147,   148,   149,     0,     0,     0,     0,   125,     0,
       0,     0,   129,   130,   131,   133,     0,     0,   135,     0,
     138,   139,   140,     0,     0,     0,     0,     0,     0,    66,
      60,    61,    62,    63,    64,    65,   115,   116,   117,     0,
       0,     0,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    39,     0,     0,   187,   185,
      51,     0,     0,    36,    32,    34,     0,   196,     0,   283,
     285,   285,   285,     0,     0,     0,   215,   273,   274,     0,
       0,   276,     0,     0,     0,     0,     0,   492,   492,     0,
     364,   492,   359,     0,     0,     0,   542,   552,   544,   546,
     568,     0,   545,   541,   540,   563,   562,   539,   543,   538,
       0,   560,   537,   561,     0,     0,   421,     0,   420,     0,
     319,     0,     0,     0,     0,     0,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   571,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   448,     0,     0,     0,
       0,   290,   300,     0,     0,     0,   390,   380,     0,     0,
     370,   397,   370,   398,    46,   182,     0,   181,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    70,    72,     0,     0,     0,
       0,     0,   104,   106,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,   205,   332,   256,     0,     0,
       0,     0,   404,     0,     0,   222,   265,   263,     0,     0,
     261,   277,     0,     0,     0,     0,     0,   364,   364,   492,
       0,     0,   504,     0,   509,     0,     0,     0,     0,     0,
     365,   513,   494,     0,   511,   361,   364,   351,   358,   526,
       0,   531,   532,     0,     0,   533,     0,   533,   533,   555,
       0,     0,     0,     0,     0,     0,     0,   305,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     490,   444,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   430,   490,     0,   570,   200,   200,   216,   217,   223,
     392,   391,     0,     0,   382,   387,   386,     0,   384,   368,
     396,   179,   183,     0,   110,   109,     0,   114,     0,     0,
     167,   168,   143,   121,   122,     0,     0,   126,   127,   128,
     132,   134,   136,   150,   151,   152,   153,     0,    67,    76,
      78,    74,    80,    82,    84,   118,     0,     0,   120,   163,
     207,   207,   207,    86,     0,     0,    94,     0,     0,   102,
     207,   207,    50,    54,     0,     0,    44,     0,     0,     0,
      31,     0,     0,   215,   284,     0,     0,     0,     0,     0,
       0,   400,   278,     0,   264,     0,     0,     0,   488,     0,
     355,   363,   364,   493,   366,     0,     0,     0,     0,     0,
       0,   514,   495,   496,   498,   497,   502,     0,     0,     0,
       0,   512,   510,   360,     0,     0,   535,   564,   569,   565,
     553,     0,   422,     0,     0,     0,     0,     0,   320,     0,
     313,     0,     0,     0,     0,   307,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,     0,     0,     0,   428,   441,   449,   492,   201,
     202,     0,   219,   221,     0,     0,     0,     0,     0,   383,
       0,     0,     0,     0,   113,   170,   171,   172,   173,   176,
     175,   177,   169,   174,     0,     0,     0,   207,   207,   207,
     207,   207,   207,     0,     0,     0,   211,   211,   211,   207,
       0,     0,     0,   207,     0,     0,     0,   207,   211,   211,
      52,    56,    37,    33,    35,   200,   203,   206,   222,   286,
       0,     0,     0,   405,   406,     0,     0,   344,   466,     0,
     464,     0,   345,     0,   362,     0,     0,     0,     0,     0,
       0,   516,     0,     0,     0,     0,     0,   527,   534,     0,
     309,   322,   323,   324,     0,     0,     0,     0,   306,     0,
       0,   315,     0,     0,     0,   430,     0,     0,     0,     0,
     456,     0,     0,     0,   453,     0,   452,     0,   462,     0,
       0,     0,   491,   200,   218,   225,   224,   371,   394,   393,
     389,   388,     0,   111,   108,   123,   124,   154,   211,   211,
     211,   211,   211,   211,   156,     0,   119,     0,     0,     0,
       0,     0,   211,    88,     0,     0,   211,    96,     0,     0,
     211,     0,     0,   198,     0,     0,   197,   226,   282,     0,
     281,   280,     0,   279,     0,     0,     0,   349,     0,   489,
     506,     0,   524,   508,     0,     0,     0,   517,   515,   499,
     500,   501,   503,   423,     0,   317,   314,     0,   311,     0,
       0,     0,   308,   429,   443,     0,     0,     0,     0,     0,
     454,   455,   234,   450,   432,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,     0,   209,   208,     0,
      69,    71,    73,     0,   207,     0,     0,     0,   207,     0,
       0,     0,   105,   107,   204,   200,     0,   231,   287,   407,
     347,     0,   467,   465,     0,   522,   523,     0,     0,     0,
     325,   310,   318,   316,     0,   457,     0,     0,   463,     0,
     431,     0,     0,     0,     0,   385,    77,    79,    75,    81,
      83,    85,   157,     0,   200,   212,    87,   211,    90,    92,
      95,   211,    98,   100,   103,   199,   228,   227,     0,   193,
       0,   505,   507,   521,   518,   312,     0,   451,     0,   433,
     434,     0,     0,   210,   213,     0,     0,   207,   207,     0,
     207,   207,     0,     0,   232,     0,   519,   520,     0,     0,
       0,     0,     0,   200,    89,   211,   211,    97,   211,   211,
     230,   229,   468,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,     0,   470,     0,     0,     0,     0,   470,
       0,     0,    91,    93,    99,   101,   346,   469,     0,     0,
       0,   458,     0,     0,   437,   435,     0,   484,     0,     0,
       0,   470,   470,     0,     0,   436,     0,   485,   348,     0,
     481,   483,   482,     0,     0,     0,   460,   459,     0,   438,
     486,   487,   471,   479,   473,     0,   475,   480,   477,     0,
     470,     0,   474,   472,   478,   476,   461,     0,     0,     0,
       0,     0,     0,     0,   439,   440
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   440,   726,   881,   882,   880,   441,   442,   716,
     876,   717,   877,   449,  1030,  1031,  1032,  1169,  1167,  1168,
    1170,  1171,  1172,  1179,  1374,  1457,  1458,  1183,  1378,  1460,
    1461,  1187,  1040,  1041,   455,   835,   256,    16,    17,   426,
     885,  1196,  1142,  1306,  1053,  1176,  1368,  1289,  1425,   629,
     977,   978,   811,  1387,  1439,  1131,    57,   194,   195,   344,
     201,   202,   203,   363,   204,   360,   570,   361,   566,   900,
     901,   558,   889,  1200,   205,    18,    44,    83,   234,    19,
      20,   785,   786,    21,    22,   553,    65,    23,    24,    25,
     925,    26,   816,    49,    96,   435,   636,   820,  1151,   987,
     634,    27,    28,    60,   562,    29,    69,    30,    31,    32,
    1135,  1513,  1514,    43,   805,   806,  1211,  1209,  1483,  1506,
    1069,   807,   750,   587,   598,   756,   757,   414,   761,   625,
     626,    33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1091
static const yytype_int16 yypact[] =
{
    1184,   -87,   -61,   364, -1091,   454, -1091,   -56,   -24, -1091,
      31, -1091,   157,    22,   118,   152,    93, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091,   407,   441,   329,   516,    58,   329,
   -1091,   300,   404,   343,   330,    44,   521,    48,   134,   539,
     533,   544,   539,   121,   104,   268, -1091,   896,   549,   433,
      24, -1091,   583, -1091,  1184,   285,   314,   278,   378,   592,
     560,   474,   180,   406,   642, -1091,    81,   329,   368,   649,
   -1091, -1091, -1091,   -11, -1091,   440, -1091, -1091,   444, -1091,
     456, -1091, -1091, -1091, -1091, -1091,   672, -1091,   501,   678,
    2829,  2829, -1091, -1091,   702,   233, -1091, -1091, -1091, -1091,
     691,  2829,  2829,  2829, -1091, -1091, -1091,  1583, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091,   468,   472,
     481,   490,   505,   526,   540,   546,   565,   574,   588,   599,
     625,   637,   650,   653,   655,   660,   662,   667,   677,   679,
     687,   698,   713,   744,   760,   763,   776,   777,   779,   780,
     781,   782,   783,   784,   787,   802,   803,   804,   805,   806,
     807,   810,   812,   824,   825,   866,   892,   893,   894,   895,
     903,   904,   905,   906,   907,   908,   910,   933,   934,   937,
     938,   939,  2829,  5140,    36, -1091,   558,    25,    26,    21,
      23,  -122,   808, -1091, -1091,   942, -1091, -1091,   977,   985,
   -1091, -1091,   461,   304,   992,   466,  1013,   340,   536,  1165,
    1219, -1091, -1091,  4803,  1220,  1077,  1015,  1223, -1091,  1082,
     324,  1020,  1229,  1207, -1091,   182,  -102,    24,  1231,  1232,
    1234,  1235,   -85,  1238,   -84,  5210,  5210, -1091,  1240,  2829,
    2829,   715,   715, -1091,  2829,   837,   260, -1091,  2829,  1174,
    2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,   963,
    2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,  2829,
    2829,  2829,  2829,  2829,  2829,   964,  2829,  2829,  2829,   965,
    2829,  2829,  2829,  2829,  2829,  2829,  1686,  2829,  2829,  2829,
    2829,  2829,  2829,  2829,  2829,  2829,  2829,   966,   968,   969,
     970,  2829,  2829,   971,   972,   973,  2829,  2829,  1251,   976,
     978,  3238, -1091,  2829,  2829,  2829,  2829,  2829,    40,   980,
     532,  2829,  1305,  2829,  2829,  2829,  2829,  2829,  2829,  2829,
    2829,  2829,  2829,  1255, -1091,    24,  2829,  1258,  1259,   261,
     982,   309,  1263,    24, -1091, -1091, -1091,   -33, -1091,    24,
    1143,  1124, -1091,  1268, -1091, -1091,  1269,  1270,  1272,  1273,
    1274, -1091,  1275,  1276,  1277,  4803,  1285,  1096,  1299,  1302,
    1303, -1091, -1091, -1091,  1027,  1027,  1027,  1027,  1027, -1091,
    1027, -1091,  1034,  1027,  1027,  1027,  1264, -1091,  1264, -1091,
    1027,  1027,  1027,  1035,  1264,  1027,  1264, -1091, -1091, -1091,
   -1091,  1037,  1038, -1091,   445,   -15,  1317,  1318,  1177,  1322,
    1179,  1117,  1325,   -22, -1091,  2829,  1181,    24,  -151,   368,
   -1091, -1091, -1091,  1328,  1329,   -49, -1091,  1328,   332, -1091,
     862, -1091,  1052,  5210,  4741,   263, -1091,  2829,  2829,  1159,
      90, -1091, -1091, -1091,  3262,  1964,  1271,  1477,  1599,  3283,
    3305,  3326,  3347,  3373,  3400, -1091,  1652,  1750,  1864,  1980,
    3440,  2033,  2092,  2245,  3461,  3502,  3526,   473,  2365,  3547,
    2414, -1091,  3569,  3590,  3611, -1091,  5107,  2473,  2616,  2746,
    2795,   401,  1054,  3637,  3664,  3685,  3725,  3746,  3774,  3811,
    3833,  2854,  2889,  2997, -1091, -1091, -1091, -1091,  3854,  3100,
    1060,  1061,  1062,   554,   703,  1063,  1067,  1070, -1091,  1182,
    2136,  2517,  3419,  3419, -1091,    34, -1091, -1091,  1172,  2829,
    2829,  1068,  2829,  5164,  1069,  1071,  1072,  2829,  1051,  1073,
     608,   739,   661,   661,  1320,  1320,  1320,  1320, -1091, -1091,
    -151, -1091, -1091,  1074,   334,  1228,  1230,  1239, -1091, -1091,
   -1091,    16,   -82,   808,  1124,  1124,  1233,  1213,    24, -1091,
    1241, -1091,   256,  4803,  4803,  1351, -1091, -1091, -1091, -1091,
   -1091,  4803,  1360,  1188,  1190, -1091,  1364, -1091, -1091, -1091,
   -1091, -1091, -1091,  1369, -1091, -1091, -1091, -1091, -1091, -1091,
   -1091, -1091, -1091,  1369, -1091, -1091, -1091,  1371,  1372,  1236,
    1094,  2829,  1180,    54,   119,  1304,  1375,   186,  1377,  1380,
    1306, -1091, -1091,  1419,   555, -1091,   942,  5210,  1373,  1321,
    -151, -1091, -1091,  1435,  -108, -1091,   316,  1176, -1091,  -108,
    1176,  1308,  2829, -1091,  2829, -1091,  2829,  5029,  4810,  1178,
    2829,  2829, -1091,  2829,  5008,  1335,  1335,  2829, -1091, -1091,
   -1091, -1091, -1091, -1091,  2829,  2829,  2829,  2829, -1091,  2829,
    2829,  2829, -1091, -1091, -1091, -1091,  2829,  2829, -1091,  2829,
   -1091, -1091, -1091,  4803,  4803,  2829,  2829,  2829,  1457, -1091,
    1186,  1187,  1189,  1218,  1237,  1279, -1091, -1091, -1091,  2829,
    2829,  2829, -1091,  2829,  1301,  1312,  1313,  1307,  1455,  1319,
    1459,  1323,  1314,  1316, -1091, -1091,  2829,  1159,  3419,  3419,
    1333,  5187,  2829, -1091, -1091, -1091,  1159,  1403,  1507,   261,
    1406,  1406,  1406,  2829,  1509,  1511,  1181, -1091, -1091,    24,
    2829,   -55,    24,  1324,  1472,  1473,  1326, -1091, -1091,  4803,
     900, -1091, -1091,  1579,  1581,   322,   161,   573,   161,   161,
   -1091,   376,   161,   161,   161,   573,   573,   161,   161,   161,
     380,   573,   161,   573,  1349,  1350,  1539,  2829,  5210,  1327,
   -1091,  1336,  1352,  1353,  1354,   387, -1091,  1404,    54,  1602,
     190,  1436,    54,   196,  1489,  1634,   -68,  1635,  1359,  1516,
     393,  1362,  1363,  1519,  1366,   389, -1091,  1644,  1159,   317,
    2829, -1091, -1091,  2067,  1525,  1648, -1091, -1091,  1649,  2345,
    -107, -1091,  -107, -1091, -1091,  5210,  5050, -1091,  2829, -1091,
    3217,   768,  3875,  2829,  2829,  1374,  1376,  3901,  3928,  3949,
    3127,  3154,  3970,  4010,  4038,  4059,  4083,  4118,  1378,  1379,
    4139,  4165,  3175,  1388,  1381,  1405,  1407,  1408,  1415,  1416,
     789,  3196,  4192,  4213, -1091, -1091, -1091,  1417,   392,  1418,
     396,  1420, -1091, -1091,  1402,  1421,  2829,  1159,  2829,   986,
    1159,  1159,  1159,  1424,  1603,  1542, -1091, -1091,  1532,  1426,
    1427,  1428,  5210,  1638,    18,  1321, -1091,  5210,  2829,  1429,
   -1091, -1091,   -55,  2829,  1430,  1433,  1681,   900,   900, -1091,
    1541,  1696,  1434,  1437,  1438,  1659,  1712,  1439,  1716,    28,
   -1091, -1091, -1091,  1591,  1596, -1091,   900, -1091, -1091, -1091,
    1717, -1091, -1091,  1549,  1720, -1091,  1721, -1091, -1091, -1091,
    1446,  4234,    54,  1724,  1726,  1727,  1728, -1091,  1729,  1453,
     403,  1454,  1536,    54,  1460,   412,  1537,    54,  1736,   197,
     555, -1091,   339,  2829,  1461,  1462,  1464,  1742,  1742,  1466,
    1681,     9,   555,  4803, -1091,    47,    84,  1465, -1091,    53,
   -1091,  5210,  1558,  1730, -1091, -1091,  5210,   423, -1091, -1091,
   -1091, -1091,  5210,  2829, -1091, -1091,  2829, -1091,  4255,  4703,
   -1091, -1091, -1091, -1091, -1091,  2829,  2829, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091, -1091, -1091,  2829, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091, -1091,  2829,  2829, -1091, -1091,
    1476,  1476,  1476, -1091,  1478,   659, -1091,  1479,   742, -1091,
    1476,  1476, -1091, -1091,  1475,  1486,   986,  1500,  1501,  1502,
   -1091,  2829,  2829,  1181, -1091,  1754,  1754,  1754,  2829,  2829,
    1755, -1091,  5210,  1742, -1091,  4282,  1781,  1782, -1091,   469,
   -1091, -1091,   900, -1091, -1091,  1784,  2829,  1785,  1745,   188,
    2829, -1091, -1091, -1091, -1091, -1091, -1091,  1512,  1553,  1580,
    2829, -1091, -1091, -1091,  1506,  1787, -1091,   573, -1091,   573,
     573,  2829, -1091,   476,  1578,  1584,  1585,  1582, -1091,    54,
   -1091,    54,  1587,   478,    54, -1091,  1588,   491,  1589,  1662,
      54,   493,  1590,  1737,  1746,  1592,  4323,  1781,  1742,  1742,
   -1091,   547,   552,  1782,   562,    -7, -1091, -1091, -1091, -1091,
   -1091,  1870, -1091, -1091,   317,  2829,  2829,  1328,  2448, -1091,
    2726,  1615,  4347,  4368, -1091, -1091, -1091, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091,  4403,  4429,  4456,  1476,  1476,  1476,
    1476,  1476,  1476,  1456,  4477,  1885,  1814,  1814,  1814,  1476,
    1683,  1684,  1692,  1476,  1694,  1695,  1697,  1476,  1814,  1814,
   -1091, -1091, -1091, -1091, -1091,  5072,  -109,  5210,  1321, -1091,
     589,   612,   614,  5210,  5210,  1944,   616,  1957, -1091,   626,
   -1091,   628, -1091,  1974, -1091,   630,  4498,   634,  1699,  1700,
    1858, -1091,  4519,  1703,  1704,  1705,  4546, -1091, -1091,  4567,
   -1091, -1091, -1091, -1091,  1984,   638,   643,    54, -1091,   645,
      54, -1091,    54,  1708,   647,     9,  2829,  1731,  1732,  1681,
   -1091,   663,   670,   673, -1091,  1994, -1091,   684, -1091,   500,
    2010,  1963,  4823,    84, -1091,  5210,  5210,  1733, -1091,  5210,
   -1091,  5210,  2345, -1091, -1091, -1091, -1091, -1091,  1814,  1814,
    1814,  1814,  1814,  1814, -1091,  2829, -1091,  2013,  1966,  1738,
    1739,  1741,  1814, -1091,  1747,  1748,  1814, -1091,  1749,  1751,
    1814,  1752,  1753, -1091,  1859,  2829, -1091,  1923, -1091,  2028,
   -1091, -1091,  2829, -1091,  1835,  1880,  2034, -1091,  2035, -1091,
   -1091,  2036,   924, -1091,  2037,  2829,  2829, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091,  1758, -1091, -1091,   692, -1091,   695,
     700,    54, -1091,    -7, -1091,  4595,  1781,  1782,   706,  1884,
   -1091, -1091, -1091, -1091, -1091,  2045,     7,   179, -1091,   708,
    1783,  1786,  1788,  1795,  1796,  1797,  4632, -1091,  1798,  2062,
   -1091, -1091, -1091,  1800,  1476,  1799,  1802,  1805,  1476,  1803,
    1807,  1808, -1091, -1091, -1091,  5072,   338,  1947, -1091,  5210,
   -1091,  2085, -1091, -1091,  1809, -1091, -1091,  1810,  4653,  4675,
   -1091, -1091, -1091, -1091,   710, -1091,   718,   722, -1091,  2090,
   -1091,  2091,  2093,  1815,  1817, -1091, -1091, -1091, -1091, -1091,
   -1091, -1091, -1091,  2095,    84,  1818, -1091,  1814, -1091, -1091,
   -1091,  1814, -1091, -1091, -1091, -1091,  1932,  1934,  1742, -1091,
    1843, -1091, -1091,   949, -1091, -1091,  1969, -1091,   738, -1091,
   -1091,  2123,  2124, -1091, -1091,  2125,  1849,  1476,  1476,  1850,
    1476,  1476,  2002,  2003,  1854,  2134, -1091, -1091,  2135,  2137,
    2134,  1860,  1861,    84, -1091,  1814,  1814, -1091,  1814,  1814,
   -1091, -1091, -1091,   740,   747,  1863,   748,  1865,  1979, -1091,
    1866,  1886,  1887,  1888, -1091,  2167,  2168,  2134,  2134, -1091,
    1975,  2209, -1091, -1091, -1091, -1091,   313, -1091,  1892,   750,
     753,   320,  2170,   755, -1091, -1091,   -42,  2127,   435,   -10,
    2134, -1091, -1091,  2169,  2040, -1091,  1975, -1091, -1091,   296,
   -1091, -1091, -1091,   379,   382,   757,   320,   320,  2117, -1091,
   -1091, -1091, -1091, -1091, -1091,   255, -1091, -1091, -1091,   259,
   -1091,  2063, -1091, -1091, -1091, -1091,   320,    41,  2098,  2100,
    2105,  2106,  2246,  2247, -1091, -1091
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1091,  2186,   -57, -1091, -1091, -1091, -1091,  -583, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091,
   -1091, -1091, -1091, -1091, -1091,  1597,  1999, -1091,  -185,  -241,
   -1091, -1091,  -967, -1091, -1091, -1024, -1091,  -916, -1091,  -717,
   -1091,  1132,  -874, -1091, -1091,  -964, -1091, -1091,  1971,  -194,
     -46,  1990,  -336,  1718, -1091, -1091,   482, -1091, -1091, -1091,
    1443,  1617,   321,    -2, -1091, -1091, -1091,  2275,  1926, -1091,
   -1091,  -786, -1091, -1091, -1091, -1091, -1091, -1091, -1091, -1091,
    -758, -1091,  -505,   436,  2304,  2113, -1091,  1719, -1091,  1086,
    -436, -1091, -1091, -1091, -1091, -1091,   439, -1091, -1091, -1091,
    1115, -1091,   835, -1091,  1409,  1392, -1084, -1090,  -871,  -897,
    -948, -1091,  -737,   437,   -58,   107,  -586,  -287,  1762,  -793,
   -1091, -1091, -1091,  2262
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -572
static const yytype_int16 yytable[] =
{
     193,   639,   950,   961,  1132,   349,   955,  1177,  1178,  1143,
     907,   908,   765,   766,   926,   350,  1188,  1189,   771,   895,
     773,  1061,  1134,   567,   322,  -401,   199,   199,  -403,  -402,
    1527,  1259,  1082,  1083,  1084,  1085,   733,  1251,  1059,    53,
     714,   814,   814,   245,   246,  1558,   524,    84,   621,  1257,
    -571,    87,   352,   425,   251,   252,   253,   780,   525,   824,
     255,    71,   343,   323,   324,   325,   326,   327,   328,   329,
    1533,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   229,  1086,  1139,  1411,   580,   433,
     437,   237,   898,   622,   621,   427,   564,  1304,    34,  1206,
     323,   324,   325,   326,   327,   328,   329,   102,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    61,   425,  1139,    35,   621,    11,   565,    72,    50,
     100,   353,  1140,   874,   821,   321,   823,    89,   345,   622,
    1260,   101,   899,  1278,  1279,  1280,  1281,  1282,  1283,  1070,
    1071,   230,    63,   637,   351,  1292,  1103,  1261,  1528,  1296,
     353,    51,    85,  1300,  1252,  1253,    88,  1113,  1093,  1140,
     622,  1117,  1072,  1305,   815,   988,    73,  1559,  1136,   715,
     238,  1534,   612,   225,  -571,   526,  1145,   631,  1412,    62,
     103,   428,   650,   443,    54,   434,   434,   444,    11,   231,
     735,   450,   454,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   960,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,  1303,   482,
     483,   484,   741,   486,   487,   488,   489,   490,   491,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     638,  1219,    90,   641,   508,   509,  1406,   623,   624,   513,
     514,  1290,  1291,  1407,   649,   613,   519,   520,   521,   522,
     523,   238,  1301,  1302,   533,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   747,   748,   527,   193,
    1087,  1088,  1089,  1044,   751,   734,  1358,  1060,   226,   550,
     348,  1348,  -401,   200,   200,  -403,  -402,   368,  1090,   727,
     781,   782,   783,   784,  1214,   989,   787,   990,   346,   743,
     975,   736,   976,  1235,  1307,  1236,  1141,   420,  1239,   208,
     209,  1516,  1413,    78,  1244,  1146,  1198,   322,  1523,  1220,
     599,  1552,    58,   375,   210,  1554,   604,   212,   606,  1097,
    1427,  1099,  1100,   931,  1431,   446,   447,   744,   645,   646,
     729,   555,  1360,  1361,  1362,  1363,  1364,  1365,   627,  1540,
     932,    64,   651,   369,   213,   343,  1373,   556,  1414,  -298,
    1377,   630,  1221,   791,  1381,  1517,   425,   952,   214,   812,
     647,   648,  1517,   956,  1119,   215,   848,   849,   654,   788,
    1553,  1262,  1122,   896,  1555,   216,   902,   745,  1541,   376,
      66,   323,   324,   325,   326,   327,   328,   329,  1435,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,    79,  1475,  1476,    36,  1478,  1479,  1542,    37,
    1123,  1546,   421,   211,    67,    52,    80,    68,  1518,    59,
     746,  1337,  1344,   217,  1339,  1518,  1340,  1454,    81,   557,
    1519,   233,   909,   609,  -298,   448,   792,  1519,   448,   371,
     953,   218,   718,   719,  1464,   721,   957,  1120,    74,    75,
     321,    38,    82,   323,   324,   325,   326,   327,   328,   329,
    1124,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,  1436,  1354,  1489,    11,   610,    91,
     965,  1456,   248,   249,   219,  1459,   232,   366,   966,    70,
    1355,    76,   372,  1543,    86,    45,  1547,    39,    77,  1437,
     367,   611,   875,  1125,   640,   373,    97,  1544,  1530,   377,
    1548,   883,    92,    40,    41,   529,   530,    98,   531,   197,
     104,   532,   196,  1545,   778,  1404,  1549,   220,    42,  1490,
    1491,   198,  1492,  1493,   323,   324,   325,   326,   327,   328,
     329,    46,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,  1531,   206,   825,   221,   826,
     560,   353,   378,   830,   831,   222,   832,   817,   818,  1486,
     837,   223,  1511,   929,   930,   379,  1532,   838,   839,   840,
     841,   797,   842,   843,   844,    91,   227,    47,   798,   845,
     846,   224,   847,   974,  1536,  1537,  1509,  1510,   850,   851,
     852,   335,   336,   337,   338,   339,   340,   341,   342,    48,
     933,   934,   860,   861,   862,   228,   863,   233,    92,  1535,
     239,   688,   235,  1556,   240,    93,   799,   935,   936,   800,
      94,   937,   936,  1181,  1182,   879,   241,    95,   947,   948,
     971,   972,   801,  1034,  1035,   242,   892,  1037,  1038,   243,
     802,   244,   689,   897,  1110,   948,  1138,   338,   339,   340,
     341,   342,  1045,  1115,   948,  1047,  1048,  1049,   758,   759,
     250,   762,   763,   764,  1149,  1150,   803,   767,   768,   769,
      53,  1267,   772,   323,   324,   325,   326,   327,   328,   329,
     941,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,  1185,  1186,   257,   804,
    1212,  1213,   258,   979,   675,   676,   981,  1230,   948,  1238,
     948,   259,   986,   336,   337,   338,   339,   340,   341,   342,
     260,   992,  1241,   948,  1245,   972,   998,   999,   323,   324,
     325,   326,   327,   328,   329,   261,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   323,
     324,   325,   326,   327,   328,   329,   262,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     263,  1046,   588,   589,   590,   591,   264,   592,  1254,  1255,
     594,   595,   596,  1256,  1255,   707,   708,   600,   601,   602,
     347,  1062,   605,  1258,  1213,   265,  1065,   323,   324,   325,
     326,   327,   328,   329,   266,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   267,   354,
    1308,  1309,   323,   324,   325,   326,   327,   328,   329,   268,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,  1310,  1309,  1311,  1309,  1313,  1255,   105,
     106,   107,   108,   109,   110,   269,  1126,  1315,  1316,  1317,
    1318,  1320,  1321,   111,   112,  1323,  1324,   270,   910,  1335,
     948,   113,   114,   355,  1336,   948,  1338,   948,  1342,   948,
     271,   115,  -266,   272,   911,   273,  1152,   356,   912,  1153,
     274,   913,   275,   914,  1349,  1316,   915,   276,  1164,  1165,
     357,  1350,  1255,   116,  1351,  1255,   916,   277,   117,   278,
    1166,   118,   119,   917,   918,  1353,  1318,   279,   358,  1173,
    1174,  1395,  1396,  1401,   948,   120,  1402,   948,   280,   121,
     359,  1403,   948,   362,   709,   710,   919,  1408,  1213,  1415,
    1150,  1445,   948,   281,  1195,  1197,  1466,  1467,   920,  1446,
    1316,  1203,  1204,  1447,  1318,   122,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,  1469,  1470,  1216,
     364,  1494,  1495,  1222,   282,   921,  1496,  1497,   365,  1499,
    1495,  1521,  1495,  1226,  1522,  1495,  1525,  1526,  1550,  1495,
     283,   123,   254,   284,  1229,   922,   737,   738,   370,   995,
     996,   923,   890,   891,  1201,  1202,   285,   286,   124,   287,
     288,   289,   290,   291,   292,   125,   126,   293,   127,   374,
    1025,  1026,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   294,   295,   296,   297,   298,   299,  1265,  1266,
     300,  1269,   301,  1271,   924,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   302,   303,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   642,   166,   304,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   305,   306,   307,   308,   192,   105,   106,   107,
     108,   109,   110,   309,   310,   311,   312,   313,   314,  1345,
     315,   111,   112,   324,   325,   326,   327,   328,   329,   113,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   316,   317,   986,     1,   318,   319,   320,
       2,   380,   381,   415,   416,   417,   418,   451,  1366,   419,
     422,   116,   423,   424,   429,   430,   117,   431,   432,   118,
     119,   436,     3,   439,   465,   481,   485,   504,  1385,   505,
     506,   507,   510,   511,   512,  1389,   515,   516,   549,   517,
     528,   552,   554,   559,     4,     5,   561,   568,  1398,  1399,
     569,   571,   572,   573,   582,   574,   575,   576,   577,   578,
     579,   323,   324,   325,   326,   327,   328,   329,   581,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   583,     6,   452,   584,   585,   586,   105,   106,
     107,   108,   109,   110,   593,   603,   597,   607,   608,   123,
     614,   615,   111,   112,   616,   617,   618,   619,   620,   628,
     113,   633,   635,   643,    11,   690,   704,   705,   706,     7,
     534,     8,   535,   712,   711,     9,   713,   -53,   720,   723,
     342,   724,   725,   730,   749,   731,   728,   739,    10,    11,
     740,   453,   116,   752,   732,   742,   753,   117,   754,   755,
     118,   119,    12,   760,   777,    13,   774,   775,   790,   779,
     793,   776,    14,   794,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   796,   166,   809,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     123,   789,   810,   795,   192,   813,   819,   814,   834,   829,
     868,   853,   854,   855,   870,   856,   323,   324,   325,   326,
     327,   328,   329,   536,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   323,   324,   325,
     326,   327,   328,   329,   857,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   -55,   884,
     886,   888,   893,   858,   894,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   655,   166,   859,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   864,   927,   867,   928,   537,   105,   106,   107,   108,
     109,   110,   865,   866,   872,   869,   873,   904,   905,   871,
     111,   112,   940,   949,   903,   951,   906,   942,   113,   323,
     324,   325,   326,   327,   328,   329,   943,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     938,   939,   944,   945,   946,   954,   958,   959,   962,   963,
     116,   964,   967,   968,   969,   117,   970,   973,   118,   119,
     982,   983,   984,  1052,  1051,  1000,  1054,  1001,  1058,  1013,
    1014,  1019,   323,   324,   325,   326,   327,   328,   329,  1018,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,  1042,  1068,  1020,  1073,  1021,  1022,   105,
     106,   107,   108,   109,   110,  1023,  1024,  1033,  1036,  1074,
    1039,  1078,  1043,   111,   112,  1050,  1055,  1056,  1057,  1063,
    1066,   113,   492,  1067,  1075,  1079,  1091,  1076,  1077,  1080,
    1081,  1092,  1094,  1095,  1096,  1098,  1101,  1104,   123,  1105,
    1106,  1107,  1108,  1109,  1111,  1112,  1116,  1284,  1285,  1118,
    1114,  1127,  1128,   116,  1129,  1130,  1133,  1144,   117,  1147,
    1148,   118,   119,  1175,  1180,  1184,  1190,  1199,  1205,   656,
     323,   324,   325,   326,   327,   328,   329,  1191,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,  1192,  1193,  1194,  1208,  1210,  1218,  1227,   254,  1215,
    1217,  1228,  1223,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   123,   166,  1224,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,  1231,
    1225,  1243,  1247,   192,  1234,  1232,  1233,  1237,  1240,  1242,
    1246,  1248,  1249,  1263,   323,   324,   325,   326,   327,   328,
     329,   657,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,  1272,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   664,   166,  1287,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,  1288,  1293,  1312,  1294,   192,   105,   106,   107,
     108,   109,   110,  1295,  1297,  1314,  1298,  1319,  1299,  1325,
    1326,   111,   112,  1327,  1329,  1330,  1331,  1334,  1341,   113,
     323,   324,   325,   326,   327,   328,   329,  1352,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,  1346,  1347,  1356,  1357,   815,  1367,  1369,  1384,  1370,
    1371,   116,  1372,  1375,  1376,  1379,   117,  1380,  1386,   118,
     119,  1388,   665,  1382,  1383,  1390,  1391,  1392,  1393,  1400,
    1409,  1394,  1397,   323,   324,   325,   326,   327,   328,   329,
    1410,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,  1416,  1424,   653,  1417,  1438,  1418,
     105,   106,   107,   108,   109,   110,  1419,  1420,  1421,  1428,
    1423,  1426,  1429,  1432,   111,   112,  1430,  1433,  1440,  1434,
    1441,  1442,   113,  1448,  1449,  1451,  1450,  1452,  1453,  1462,
    1455,  1463,   323,   324,   325,   326,   327,   328,   329,   123,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,  1465,   116,  1468,  1471,  1472,  1473,   117,
    1474,  1477,   118,   119,  1480,  1481,  1255,  1482,  1484,  1512,
    1485,  1487,  1488,  1498,  1501,  1500,   666,  1502,   325,   326,
     327,   328,   329,   980,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,  1503,  1504,  1505,
    1507,  1508,  1520,  1524,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   123,   166,  1515,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
    1529,  1527,  1538,  1551,   192,  1560,  1557,  1561,  1562,  1563,
     207,  1564,  1565,   836,   445,   323,   324,   325,   326,   327,
     328,   329,   667,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,  1264,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   669,   166,   551,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   563,   808,  1064,   887,   192,   105,   106,
     107,   108,   109,   110,   236,   632,    99,   438,  1359,   822,
    1343,  1539,   111,   112,  1137,   770,   247,     0,     0,  1121,
     113,     0,     0,     0,   670,   323,   324,   325,   326,   327,
     328,   329,     0,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,   117,     0,     0,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   323,   324,   325,   326,   327,   328,
     329,   985,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   324,   325,   326,   327,   328,   329,
     123,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,   116,     0,     0,     0,     0,
     117,     0,     0,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   671,     0,     0,
     326,   327,   328,   329,  1268,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   123,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,     0,     0,     0,     0,   192,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   677,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   679,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,     0,     0,     0,     0,   192,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,   684,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,     0,   117,     0,
       0,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   324,   325,   326,   327,
     328,   329,  1270,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   112,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   323,   324,   325,   326,   327,   328,
     329,   123,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,   116,     0,     0,     0,
       0,   117,     0,     0,   118,   119,     0,     0,   685,   323,
     324,   325,   326,   327,   328,   329,     0,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   123,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,   323,   324,   325,
     326,   327,   328,   329,     0,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   686,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   687,   166,     0,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,     0,     0,     0,     0,   192,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,     0,     0,     0,     0,   699,   323,   324,   325,
     326,   327,   328,   329,     0,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,     0,     0,   323,   324,   325,   326,   327,   328,
     329,   700,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   323,   324,   325,   326,   327,
     328,   329,     0,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   323,   324,   325,
     326,   327,   328,   329,     0,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,     0,
       0,     0,   323,   324,   325,   326,   327,   328,   329,   701,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   323,   324,   325,   326,   327,   328,   329,
       0,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,   323,   324,   325,   326,   327,
     328,   329,   993,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   323,   324,   325,
     326,   327,   328,   329,     0,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,   703,   323,   324,   325,   326,   327,   328,   329,
       0,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,     0,     0,     0,  1005,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,  -572,  -572,  -572,  -572,  1006,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     323,   324,   325,   326,   327,   328,   329,  1017,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   323,   324,   325,   326,   327,   328,   329,  1027,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   323,   324,   325,   326,   327,   328,   329,   518,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,     0,     0,     0,   323,   324,   325,   326,
     327,   328,   329,   652,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   323,   324,   325,
     326,   327,   328,   329,   658,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,   323,
     324,   325,   326,   327,   328,   329,   659,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     323,   324,   325,   326,   327,   328,   329,   660,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   323,   324,   325,   326,   327,   328,   329,   661,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,     0,     0,     0,     0,     0,   323,   324,   325,
     326,   327,   328,   329,   662,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,     0,     0,   323,   324,   325,   326,   327,   328,
     329,   663,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   323,   324,   325,   326,   327,
     328,   329,     0,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
       0,   668,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   324,   325,   326,   327,
     328,   329,   672,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,     0,     0,     0,
       0,     0,     0,   673,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,     0,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,   678,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,     0,   323,   324,   325,   326,   327,   328,   329,
     680,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   323,   324,   325,   326,   327,   328,
     329,   681,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   323,   324,   325,   326,   327,
     328,   329,   682,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,   691,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,     0,     0,     0,     0,     0,     0,   323,   324,
     325,   326,   327,   328,   329,   692,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   323,
     324,   325,   326,   327,   328,   329,   693,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,     0,     0,     0,     0,   694,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   695,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,     0,     0,     0,     0,     0,     0,   323,   324,
     325,   326,   327,   328,   329,   696,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   323,
     324,   325,   326,   327,   328,   329,     0,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
       0,     0,   697,   323,   324,   325,   326,   327,   328,   329,
       0,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   698,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   323,   324,
     325,   326,   327,   328,   329,   702,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   323,
     324,   325,   326,   327,   328,   329,   997,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
       0,     0,     0,     0,     0,   323,   324,   325,   326,   327,
     328,   329,  1002,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
       0,     0,   323,   324,   325,   326,   327,   328,   329,  1003,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   323,   324,   325,   326,   327,   328,   329,
    1004,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   323,   324,   325,   326,   327,   328,
     329,  1007,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   323,   324,   325,   326,   327,
     328,   329,     0,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
       0,  1008,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,     0,     0,     0,     0,     0,     0,  1009,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   324,   325,   326,   327,   328,   329,
    1010,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,     0,   323,   324,   325,
     326,   327,   328,   329,  1011,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,  1012,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   324,   325,   326,   327,   328,   329,
    1015,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,     0,     0,     0,   323,
     324,   325,   326,   327,   328,   329,  1016,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
       0,     0,     0,     0,     0,     0,   323,   324,   325,   326,
     327,   328,   329,  1028,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   323,   324,   325,
     326,   327,   328,   329,  1029,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   323,   324,
     325,   326,   327,   328,   329,  1102,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   323,
     324,   325,   326,   327,   328,   329,  1154,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
       0,     0,     0,     0,     0,     0,   323,   324,   325,   326,
     327,   328,   329,  1207,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   323,   324,   325,
     326,   327,   328,   329,     0,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,     0,     0,  1250,   323,   324,   325,   326,   327,
     328,   329,     0,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,  1273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   323,   324,   325,   326,   327,   328,   329,  1274,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   323,   324,   325,   326,   327,   328,   329,
       0,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,  1275,   323,   324,   325,   326,   327,
     328,   329,     0,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,     0,     0,     0,     0,
    1276,     0,     0,   323,   324,   325,   326,   327,   328,   329,
       0,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,     0,  1277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,  1286,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,     0,     0,     0,     0,     0,     0,     0,  1322,
    1155,  1156,     0,     0,     0,  1157,     0,  1158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1159,  1160,     0,  1161,     0,     0,     0,     0,     0,     0,
     323,   324,   325,   326,   327,   328,   329,  1332,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   910,     0,     0,     0,     0,     0,     0,  1333,     0,
       0,     0,   382,   383,     0,   384,     0,   385,   386,     0,
       0,   912,     0,     0,   913,     0,   914,     0,     0,   915,
     387,     0,     0,     0,     0,     0,  1405,     0,     0,   916,
       0,     0,     0,     0,     0,     0,   917,   918,     0,     0,
     388,   389,   390,   391,     0,     0,     0,   392,     0,     0,
       0,     0,   393,     0,     0,     0,     0,     0,     0,   919,
    1162,  1163,     0,  1422,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,   395,     0,   644,     0,     0,
     396,     0,     0,     0,  1443,     0,     0,   397,     0,     0,
     398,     0,     0,   399,   400,     0,     0,     0,   921,     0,
       0,     0,     0,     0,     0,     0,  1444,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   922,     0,
       0,     0,     0,     0,   923,     0,   402,   403,     0,   404,
     405,     0,     0,     0,     0,   406,     0,   407,     0,     0,
       0,     0,   408,   409,     0,     0,   828,     0,   410,     0,
       0,     0,     0,     0,   411,     0,   412,     0,     0,     0,
     413,     0,     0,     0,     0,     0,     0,   924,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   323,
     324,   325,   326,   327,   328,   329,     0,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,     0,     0,     0,     0,     0,     0,     0,
     833,  1139,     0,     0,     0,     0,     0,   323,   324,   325,
     326,   327,   328,   329,   827,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,     0,   322,     0,   991,     0,     0,   683,     0,
     323,   324,   325,   326,   327,   328,   329,  1140,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     0,     0,     0,   323,   324,   325,   326,   327,   328,
     329,   343,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,     0,     0,   323,   324,   325,
     326,   327,   328,   329,   722,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   878,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342
};

static const yytype_int16 yycheck[] =
{
      57,   437,   788,   796,   968,   199,   792,  1031,  1032,   976,
     747,   748,   598,   599,   751,   200,  1040,  1041,   604,   736,
     606,   895,   970,   359,     3,     3,     3,     3,     3,     3,
      72,    38,     4,     5,     6,     7,    20,  1127,    20,     8,
       6,   149,   149,   100,   101,     4,     6,     3,   116,  1133,
      41,     3,   174,   204,   111,   112,   113,     3,    18,   642,
     117,     3,    41,    10,    11,    12,    13,    14,    15,    16,
      80,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,    57,    39,    80,   375,   174,
     174,   102,   147,   161,   116,   197,   129,   206,   185,  1063,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,   204,    39,   185,   116,   175,   160,    70,   185,
       9,   282,    85,   716,   639,   192,   641,     3,   102,   161,
     147,    20,   197,  1167,  1168,  1169,  1170,  1171,  1172,   907,
     908,    70,     0,   202,   200,  1179,   942,   164,   200,  1183,
     282,   185,   118,  1187,  1128,  1129,   118,   953,   926,    85,
     161,   957,   909,   282,   282,   282,   118,   136,   971,   145,
     282,   191,   197,     3,   175,   145,   133,   428,   181,    71,
      86,   237,   102,   250,   163,   280,   280,   254,   175,   118,
     282,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   280,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,  1195,   286,
     287,   288,   568,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     435,    63,   118,   438,   311,   312,  1346,   279,   280,   316,
     317,  1177,  1178,  1347,   449,   280,   323,   324,   325,   326,
     327,   282,  1188,  1189,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   573,   574,   248,   346,
     262,   263,   264,   876,   581,   279,  1263,   279,   118,   345,
     279,  1249,   280,   280,   280,   280,   280,     3,   280,   550,
     256,   257,   258,   259,  1072,   820,   197,   822,   282,    63,
       3,   562,     5,  1109,  1198,  1111,   279,     3,  1114,    44,
      45,    18,   153,     3,  1120,   282,  1053,     3,    18,   151,
     398,    86,   185,     3,    59,    86,   404,    33,   406,   935,
    1374,   937,   938,   192,  1378,    95,    96,   101,    95,    96,
     554,   100,  1278,  1279,  1280,  1281,  1282,  1283,   425,    73,
     209,   278,   282,    69,    60,    41,  1292,   116,   199,   197,
    1296,   427,   194,   197,  1300,    72,   204,   197,    74,   630,
     447,   448,    72,   197,   197,    81,   683,   684,   455,   280,
     145,  1138,    63,   739,   145,    91,   742,   151,   112,    69,
       3,    10,    11,    12,    13,    14,    15,    16,  1385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   102,  1457,  1458,    71,  1460,  1461,    59,    75,
     101,    59,   118,   158,     3,     9,   116,   118,   135,    13,
     194,  1237,  1245,   139,  1240,   135,  1242,  1424,   128,   198,
     147,   279,   749,    18,   282,   205,   280,   147,   205,     3,
     280,   157,   529,   530,  1438,   532,   280,   280,    39,   179,
     537,   117,   152,    10,    11,    12,    13,    14,    15,    16,
     151,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   166,     5,  1473,   175,    63,    76,
     117,  1427,   279,   280,   200,  1431,    77,    56,   125,     3,
      20,   117,    56,   144,     3,    71,   144,   163,   185,   191,
      69,    86,   717,   194,   202,    69,     3,   158,   103,     3,
     158,   726,   109,   179,   180,    13,    14,     3,    16,   116,
     282,    19,     3,   174,   611,  1341,   174,   279,   194,  1475,
    1476,   128,  1478,  1479,    10,    11,    12,    13,    14,    15,
      16,   117,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   150,     3,   644,   210,   646,
     281,   282,    56,   650,   651,     3,   653,   281,   282,  1470,
     657,    41,  1499,   281,   282,    69,   171,   664,   665,   666,
     667,    56,   669,   670,   671,    76,   210,   163,    63,   676,
     677,   147,   679,   808,  1521,  1522,  1497,  1498,   685,   686,
     687,    23,    24,    25,    26,    27,    28,    29,    30,   185,
      67,    68,   699,   700,   701,     3,   703,   279,   109,  1520,
     210,   250,     3,  1550,   210,   116,   101,   281,   282,   104,
     121,   281,   282,     4,     5,   722,   210,   128,   281,   282,
     281,   282,   117,   281,   282,     3,   733,   281,   282,   178,
     125,     3,   281,   740,   281,   282,   973,    26,    27,    28,
      29,    30,   877,   281,   282,   880,   881,   882,   591,   592,
       9,   594,   595,   596,   281,   282,   151,   600,   601,   602,
       8,  1147,   605,    10,    11,    12,    13,    14,    15,    16,
     777,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     4,     5,   280,   194,
     281,   282,   280,   810,   281,   282,   813,   281,   282,   281,
     282,   280,   819,    24,    25,    26,    27,    28,    29,    30,
     280,   828,   281,   282,   281,   282,   833,   834,    10,    11,
      12,    13,    14,    15,    16,   280,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   280,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     280,   878,   385,   386,   387,   388,   280,   390,   281,   282,
     393,   394,   395,   281,   282,   281,   282,   400,   401,   402,
     282,   898,   405,   281,   282,   280,   903,    10,    11,    12,
      13,    14,    15,    16,   280,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   280,    61,
     281,   282,    10,    11,    12,    13,    14,    15,    16,   280,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   281,   282,   281,   282,   281,   282,     3,
       4,     5,     6,     7,     8,   280,   963,   281,   282,   281,
     282,   281,   282,    17,    18,   281,   282,   280,    18,   281,
     282,    25,    26,   115,   281,   282,   281,   282,   281,   282,
     280,    35,   124,   280,    34,   280,   993,   129,    38,   996,
     280,    41,   280,    43,   281,   282,    46,   280,  1005,  1006,
     142,   281,   282,    57,   281,   282,    56,   280,    62,   280,
    1017,    65,    66,    63,    64,   281,   282,   280,   160,  1026,
    1027,    47,    48,   281,   282,    79,   281,   282,   280,    83,
     172,   281,   282,    41,   281,   282,    86,   281,   282,   281,
     282,   281,   282,   280,  1051,  1052,    47,    48,    98,   281,
     282,  1058,  1059,   281,   282,   109,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   279,   280,  1076,
      43,   281,   282,  1080,   280,   125,   279,   280,    43,   281,
     282,   281,   282,  1090,   281,   282,   281,   282,   281,   282,
     280,   145,   205,   280,  1101,   145,   564,   565,    56,   281,
     282,   151,   731,   732,  1056,  1057,   280,   280,   162,   280,
     280,   280,   280,   280,   280,   169,   170,   280,   172,    56,
     281,   282,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   280,   280,   280,   280,   280,   280,  1145,  1146,
     280,  1148,   280,  1150,   194,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   280,   280,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   282,   249,   280,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   280,   280,   280,   280,   280,     3,     4,     5,
       6,     7,     8,   280,   280,   280,   280,   280,   280,  1246,
     280,    17,    18,    11,    12,    13,    14,    15,    16,    25,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   280,   280,  1272,    32,   280,   280,   280,
      36,    56,     3,     3,   147,   210,     3,    53,  1285,   147,
     210,    57,     3,    26,     3,     3,    62,     3,     3,    65,
      66,     3,    58,     3,   281,   281,   281,   281,  1305,   281,
     281,   281,   281,   281,   281,  1312,     5,   281,     3,   281,
     280,     3,     3,   281,    80,    81,     3,   124,  1325,  1326,
     146,     3,     3,     3,   178,     3,     3,     3,     3,     3,
       3,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,   119,   130,     3,     3,   280,     3,     4,
       5,     6,     7,     8,   280,   280,    52,   280,   280,   145,
       3,     3,    17,    18,   147,     3,   147,   210,     3,   148,
      25,     3,     3,   281,   175,   281,   276,   276,   276,   155,
      35,   157,    37,   276,   281,   161,   276,   175,   280,   280,
      30,   280,   280,   125,     3,   125,   282,   124,   174,   175,
     147,   187,    57,     3,   125,   124,   178,    62,   178,     5,
      65,    66,   188,     4,   280,   191,     5,     5,     3,   199,
       3,   145,   198,     3,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,     3,   249,    51,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     145,   147,   131,   147,   280,    20,   280,   149,   123,   281,
       5,     4,   276,   276,     5,   276,    10,    11,    12,    13,
      14,    15,    16,   168,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   276,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   175,   106,
       3,   105,     3,   276,     3,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   282,   249,   276,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   280,     3,   276,     3,   280,     3,     4,     5,     6,
       7,     8,   280,   280,   280,   276,   280,   125,   125,   276,
      17,    18,    63,   199,   280,     3,   280,   280,    25,    10,
      11,    12,    13,    14,    15,    16,   280,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     281,   281,   280,   280,   280,   199,   147,     3,     3,   280,
      57,   125,   280,   280,   125,    62,   280,     3,    65,    66,
     125,     3,     3,   111,    51,   281,   124,   281,    20,   281,
     281,   280,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   281,     3,   280,   145,   280,   280,     3,
       4,     5,     6,     7,     8,   280,   280,   280,   280,     3,
     280,    42,   281,    17,    18,   281,   280,   280,   280,   280,
     280,    25,    26,   280,   280,     3,   125,   280,   280,   280,
       4,   125,     5,   174,     4,     4,   280,     3,   145,     3,
       3,     3,     3,   280,   280,   199,   199,   281,   282,     3,
     280,   280,   280,    57,   280,     3,   280,   282,    62,   191,
      20,    65,    66,   277,   276,   276,   281,     3,     3,   282,
      10,    11,    12,    13,    14,    15,    16,   281,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   281,   281,   281,     3,     3,    41,   281,   205,     5,
       5,     4,   280,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   145,   249,   280,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   281,
     280,   199,   125,   280,   282,   281,   281,   280,   280,   280,
     280,   125,   280,     3,    10,    11,    12,    13,    14,    15,
      16,   282,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   280,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   282,   249,    51,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   148,   280,    20,   281,   280,     3,     4,     5,
       6,     7,     8,   281,   280,    18,   281,     3,   281,   280,
     280,    17,    18,   125,   281,   281,   281,     3,   280,    25,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   280,   280,     3,    51,   282,     3,    51,   159,   281,
     281,    57,   281,   276,   276,   276,    62,   276,   105,    65,
      66,     3,   282,   281,   281,   200,   156,     3,     3,   281,
     156,     5,     5,    10,    11,    12,    13,    14,    15,    16,
       5,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   281,     3,   102,   281,   121,   281,
       3,     4,     5,     6,     7,     8,   281,   281,   281,   280,
     282,   281,   280,   280,    17,    18,   281,   280,     3,   281,
     281,   281,    25,     3,     3,   280,     3,   280,     3,   167,
     282,   167,    10,    11,    12,    13,    14,    15,    16,   145,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   280,    57,   156,     3,     3,     3,    62,
     281,   281,    65,    66,   132,   132,   282,     3,     3,   164,
       3,   281,   281,   280,   165,   280,   282,   281,    12,    13,
      14,    15,    16,    86,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   281,   281,   281,
       3,     3,   280,     3,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   145,   249,     5,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     113,    72,   202,   126,   280,   147,   183,   147,   143,   143,
      64,     5,     5,   656,   255,    10,    11,    12,    13,    14,
      15,    16,   282,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,  1144,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   282,   249,   346,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   353,   626,   902,   729,   280,     3,     4,
       5,     6,     7,     8,    79,   429,    52,   244,  1272,   640,
    1245,  1526,    17,    18,   972,   603,   104,    -1,    -1,   960,
      25,    -1,    -1,    -1,   282,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    86,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     145,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,
      13,    14,    15,    16,    86,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   145,   249,    -1,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    -1,    -1,    -1,    -1,   280,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   282,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   282,   249,    -1,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,    -1,    -1,    -1,    -1,   280,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,   282,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    86,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   145,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    -1,    -1,   282,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   145,   249,    -1,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,    -1,    -1,    -1,    -1,   280,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   282,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   282,   249,    -1,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,    -1,    -1,    -1,    -1,   280,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,   282,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   282,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   282,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,   105,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,   282,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,   282,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    13,    14,    15,    16,   282,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   282,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   282,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   281,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   281,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   281,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   281,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   281,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   281,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     281,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   281,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   281,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   281,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   281,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   281,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   281,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   281,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     281,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   281,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   281,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     281,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   281,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     281,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   281,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   281,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   281,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   281,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,   281,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   281,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   281,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
     281,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      77,    78,    -1,    -1,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   281,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    18,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,
      -1,    -1,    49,    50,    -1,    52,    -1,    54,    55,    -1,
      -1,    38,    -1,    -1,    41,    -1,    43,    -1,    -1,    46,
      67,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    86,
     207,   208,    -1,   281,    -1,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,   186,    -1,    -1,
     127,    -1,    -1,    -1,   281,    -1,    -1,   134,    -1,    -1,
     137,    -1,    -1,   140,   141,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,   151,    -1,   173,   174,    -1,   176,
     177,    -1,    -1,    -1,    -1,   182,    -1,   184,    -1,    -1,
      -1,    -1,   189,   190,    -1,    -1,   186,    -1,   195,    -1,
      -1,    -1,    -1,    -1,   201,    -1,   203,    -1,    -1,    -1,
     207,    -1,    -1,    -1,    -1,    -1,    -1,   194,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    39,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    95,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    95,    -1,    -1,    41,    -1,
      10,    11,    12,    13,    14,    15,    16,    85,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    40,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   198,   284,   320,   321,   358,   362,
     363,   366,   367,   370,   371,   372,   374,   384,   385,   388,
     390,   391,   392,   414,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   396,   359,    71,   117,   163,   185,   376,
     185,   185,   376,     8,   163,   415,   416,   339,   185,   376,
     386,     3,    71,     0,   278,   369,     3,     3,   118,   389,
       3,     3,    70,   118,   389,   179,   117,   185,     3,   102,
     116,   128,   152,   360,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   377,     3,     3,   377,
       9,    20,     3,    86,   282,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   249,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   280,   285,   340,   341,     3,   116,   128,     3,
     280,   343,   344,   345,   347,   357,     3,   284,    44,    45,
      59,   158,    33,    60,    74,    81,    91,   139,   157,   200,
     279,   210,     3,    41,   147,     3,   118,   210,     3,     3,
      70,   118,   389,   279,   361,     3,   360,   102,   282,   210,
     210,   210,     3,   178,     3,   285,   285,   416,   279,   280,
       9,   285,   285,   285,   205,   285,   319,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   285,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    41,   342,   102,   282,   282,   279,   342,
     321,   343,   174,   282,    61,   115,   129,   142,   160,   172,
     348,   350,    41,   346,    43,    43,    56,    69,     3,    69,
      56,     3,    56,    69,    56,     3,    69,     3,    56,    69,
      56,     3,    49,    50,    52,    54,    55,    67,    87,    88,
      89,    90,    94,    99,   114,   122,   127,   134,   137,   140,
     141,   154,   173,   174,   176,   177,   182,   184,   189,   190,
     195,   201,   203,   207,   410,     3,   147,   210,     3,   147,
       3,   118,   210,     3,    26,   204,   322,   197,   343,     3,
       3,     3,     3,   174,   280,   378,     3,   174,   378,     3,
     285,   290,   291,   285,   285,   319,    95,    96,   205,   296,
     285,    53,   130,   187,   285,   317,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   281,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   281,   285,   285,   285,   281,   285,   285,   285,   285,
     285,   285,    26,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   281,   281,   281,   281,   285,   285,
     281,   281,   281,   285,   285,     5,   281,   281,   281,   285,
     285,   285,   285,   285,     6,    18,   145,   248,   280,    13,
      14,    16,    19,   285,    35,    37,   168,   280,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,     3,
     343,   341,     3,   368,     3,   100,   116,   198,   354,   281,
     281,     3,   387,   344,   129,   160,   351,   345,   124,   146,
     349,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     410,     3,   178,     3,     3,     3,   280,   406,   406,   406,
     406,   406,   406,   280,   406,   406,   406,    52,   407,   407,
     406,   406,   406,   280,   407,   406,   407,   280,   280,    18,
      63,    86,   197,   280,     3,     3,   147,     3,   147,   210,
       3,   116,   161,   279,   280,   412,   413,   285,   148,   332,
     343,   322,   361,     3,   383,     3,   379,   202,   321,   383,
     202,   321,   282,   281,   186,    95,    96,   285,   285,   321,
     102,   282,   281,   102,   285,   282,   282,   282,   281,   281,
     281,   281,   281,   281,   282,   282,   282,   282,   281,   282,
     282,   282,   281,   281,   281,   281,   282,   282,   281,   282,
     281,   281,   281,    41,   282,   282,   282,   282,   250,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   282,
     282,   282,   281,   282,   276,   276,   276,   281,   282,   281,
     282,   281,   276,   276,     6,   145,   292,   294,   285,   285,
     280,   285,    40,   280,   280,   280,   286,   322,   282,   342,
     125,   125,   125,    20,   279,   282,   322,   349,   349,   124,
     147,   345,   124,    63,   101,   151,   194,   410,   410,     3,
     405,   410,     3,   178,   178,     5,   408,   409,   408,   408,
       4,   411,   408,   408,   408,   409,   409,   408,   408,   408,
     411,   409,   408,   409,     5,     5,   145,   280,   285,   199,
       3,   256,   257,   258,   259,   364,   365,   197,   280,   147,
       3,   197,   280,     3,     3,   147,     3,    56,    63,   101,
     104,   117,   125,   151,   194,   397,   398,   404,   346,    51,
     131,   335,   322,    20,   149,   282,   375,   281,   282,   280,
     380,   375,   380,   375,   290,   285,   285,    95,   186,   281,
     285,   285,   285,   102,   123,   318,   318,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   410,   410,
     285,   285,   285,     4,   276,   276,   276,   276,   276,   276,
     285,   285,   285,   285,   280,   280,   280,   276,     5,   276,
       5,   276,   280,   280,   290,   321,   293,   295,    40,   285,
     289,   287,   288,   321,   106,   323,     3,   354,   105,   355,
     355,   355,   285,     3,     3,   332,   345,   285,   147,   197,
     352,   353,   345,   280,   125,   125,   280,   405,   405,   410,
      18,    34,    38,    41,    43,    46,    56,    63,    64,    86,
      98,   125,   145,   151,   194,   373,   405,     3,     3,   281,
     282,   192,   209,    67,    68,   281,   282,   281,   281,   281,
      63,   285,   280,   280,   280,   280,   280,   281,   282,   199,
     364,     3,   197,   280,   199,   364,   197,   280,   147,     3,
     280,   412,     3,   280,   125,   117,   125,   280,   280,   125,
     280,   281,   282,     3,   321,     3,     5,   333,   334,   285,
      86,   285,   125,     3,     3,    86,   285,   382,   282,   375,
     375,    95,   285,   105,   281,   281,   282,   281,   285,   285,
     281,   281,   281,   281,   281,   282,   282,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   282,   281,   280,
     280,   280,   280,   280,   280,   281,   282,   282,   281,   281,
     297,   298,   299,   280,   281,   282,   280,   281,   282,   280,
     315,   316,   281,   281,   290,   321,   285,   321,   321,   321,
     281,    51,   111,   327,   124,   280,   280,   280,    20,    20,
     279,   335,   285,   280,   353,   285,   280,   280,     3,   403,
     373,   373,   405,   145,     3,   280,   280,   280,    42,     3,
     280,     4,     4,     5,     6,     7,    57,   262,   263,   264,
     280,   125,   125,   373,     5,   174,     4,   409,     4,   409,
     409,   280,   281,   364,     3,     3,     3,     3,     3,   280,
     281,   280,   199,   364,   280,   281,   199,   364,     3,   197,
     280,   397,    63,   101,   151,   194,   285,   280,   280,   280,
       3,   338,   338,   280,   403,   393,   412,   398,   410,    39,
      85,   279,   325,   325,   282,   133,   282,   191,    20,   281,
     282,   381,   285,   285,   281,    77,    78,    82,    84,   107,
     108,   110,   207,   208,   285,   285,   285,   301,   302,   300,
     303,   304,   305,   285,   285,   277,   328,   328,   328,   306,
     276,     4,     5,   310,   276,     4,     5,   314,   328,   328,
     281,   281,   281,   281,   281,   285,   324,   285,   332,     3,
     356,   356,   356,   285,   285,     3,   338,   281,     3,   400,
       3,   399,   281,   282,   373,     5,   285,     5,    41,    63,
     151,   194,   285,   280,   280,   280,   285,   281,     4,   285,
     281,   281,   281,   281,   282,   364,   364,   280,   281,   364,
     280,   281,   280,   199,   364,   281,   280,   125,   125,   280,
     281,   400,   338,   338,   281,   282,   281,   399,   281,    38,
     147,   164,   405,     3,   334,   285,   285,   383,    86,   285,
      86,   285,   280,   281,   281,   281,   281,   281,   328,   328,
     328,   328,   328,   328,   281,   282,   281,    51,   148,   330,
     330,   330,   328,   280,   281,   281,   328,   280,   281,   281,
     328,   330,   330,   325,   206,   282,   326,   335,   281,   282,
     281,   281,    20,   281,    18,   281,   282,   281,   282,     3,
     281,   282,   281,   281,   282,   280,   280,   125,   281,   281,
     281,   281,   281,   281,     3,   281,   281,   364,   281,   364,
     364,   280,   281,   393,   412,   285,   280,   280,   403,   281,
     281,   281,     3,   281,     5,    20,     3,    51,   325,   382,
     330,   330,   330,   330,   330,   330,   285,     3,   329,    51,
     281,   281,   281,   330,   307,   276,   276,   330,   311,   276,
     276,   330,   281,   281,   159,   285,   105,   336,     3,   285,
     200,   156,     3,     3,     5,    47,    48,     5,   285,   285,
     281,   281,   281,   281,   364,   281,   400,   399,   281,   156,
       5,    80,   181,   153,   199,   281,   281,   281,   281,   281,
     281,   281,   281,   282,     3,   331,   281,   328,   280,   280,
     281,   328,   280,   280,   281,   325,   166,   191,   121,   337,
       3,   281,   281,   281,   281,   281,   281,   281,     3,     3,
       3,   280,   280,     3,   325,   282,   330,   308,   309,   330,
     312,   313,   167,   167,   338,   280,    47,    48,   156,   279,
     280,     3,     3,     3,   281,   328,   328,   281,   328,   328,
     132,   132,     3,   401,     3,     3,   401,   281,   281,   325,
     330,   330,   330,   330,   281,   282,   279,   280,   280,   281,
     280,   165,   281,   281,   281,   281,   402,     3,     3,   401,
     401,   402,   164,   394,   395,     5,    18,    72,   135,   147,
     280,   281,   281,    18,     3,   281,   282,    72,   200,   113,
     103,   150,   171,    80,   191,   401,   402,   402,   202,   395,
      73,   112,    59,   144,   158,   174,    59,   144,   158,   174,
     281,   126,    86,   145,    86,   145,   402,   183,     4,   136,
     147,   147,   143,   143,     5,     5
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
#line 372 "evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 378 "evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 379 "evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 381 "evoparser.y"
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
#line 399 "evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 407 "evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 415 "evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 421 "evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 428 "evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 429 "evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 430 "evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 431 "evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 432 "evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 433 "evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 434 "evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 435 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 436 "evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 437 "evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 438 "evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 439 "evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 440 "evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 441 "evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 442 "evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 443 "evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 444 "evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 446 "evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 451 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 452 "evoparser.y"
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
#line 460 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 461 "evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 462 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 463 "evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 464 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 465 "evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 468 "evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 469 "evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 470 "evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 471 "evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 472 "evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 475 "evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 476 "evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 479 "evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 480 "evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 483 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 487 "evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 487 "evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 488 "evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 488 "evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 489 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 490 "evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 497 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 498 "evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 505 "evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 506 "evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 516 "evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 520 "evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 521 "evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 522 "evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 523 "evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 524 "evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 525 "evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 526 "evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 527 "evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 531 "evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 69:
#line 532 "evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 70:
#line 533 "evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 71:
#line 534 "evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 72:
#line 535 "evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 73:
#line 536 "evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 74:
#line 538 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 75:
#line 539 "evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 76:
#line 540 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 77:
#line 541 "evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 78:
#line 542 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 79:
#line 543 "evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 80:
#line 544 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 81:
#line 545 "evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 82:
#line 546 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 83:
#line 547 "evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 84:
#line 548 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 85:
#line 549 "evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 86:
#line 551 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 87:
#line 552 "evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 88:
#line 553 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 89:
#line 554 "evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 90:
#line 555 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 91:
#line 556 "evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 92:
#line 557 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 93:
#line 558 "evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 94:
#line 559 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 95:
#line 560 "evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 96:
#line 561 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 97:
#line 562 "evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 98:
#line 563 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 99:
#line 564 "evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 100:
#line 565 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 101:
#line 566 "evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 102:
#line 568 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 103:
#line 569 "evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 104:
#line 570 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 105:
#line 571 "evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 106:
#line 572 "evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 107:
#line 573 "evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 108:
#line 576 "evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 109:
#line 577 "evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 110:
#line 578 "evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 111:
#line 579 "evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 112:
#line 580 "evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 113:
#line 581 "evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 114:
#line 582 "evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 115:
#line 583 "evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 116:
#line 584 "evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 117:
#line 585 "evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 118:
#line 586 "evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 119:
#line 587 "evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 120:
#line 588 "evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 121:
#line 589 "evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 122:
#line 590 "evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 123:
#line 591 "evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 124:
#line 592 "evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 125:
#line 593 "evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 126:
#line 594 "evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 127:
#line 595 "evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 128:
#line 596 "evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 129:
#line 597 "evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 130:
#line 598 "evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 131:
#line 599 "evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 132:
#line 600 "evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 133:
#line 601 "evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 134:
#line 602 "evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 135:
#line 603 "evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 136:
#line 604 "evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 137:
#line 605 "evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 138:
#line 606 "evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 139:
#line 607 "evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 140:
#line 608 "evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 141:
#line 609 "evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 142:
#line 611 "evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 143:
#line 612 "evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 144:
#line 613 "evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 145:
#line 614 "evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 146:
#line 615 "evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 147:
#line 616 "evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 148:
#line 617 "evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 149:
#line 618 "evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 150:
#line 620 "evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 151:
#line 621 "evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 152:
#line 623 "evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 153:
#line 624 "evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 154:
#line 625 "evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 155:
#line 627 "evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 156:
#line 628 "evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 157:
#line 629 "evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 158:
#line 630 "evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 159:
#line 637 "evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 160:
#line 644 "evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 161:
#line 651 "evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 162:
#line 655 "evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 163:
#line 659 "evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 164:
#line 665 "evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 165:
#line 666 "evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 166:
#line 667 "evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 167:
#line 671 "evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 168:
#line 677 "evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 169:
#line 683 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 170:
#line 684 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 171:
#line 685 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 172:
#line 686 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 173:
#line 687 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 174:
#line 688 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 175:
#line 689 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 176:
#line 690 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 177:
#line 691 "evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 178:
#line 695 "evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 179:
#line 697 "evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 180:
#line 699 "evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 181:
#line 701 "evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 182:
#line 705 "evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 183:
#line 713 "evoparser.y"
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
#line 723 "evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 185:
#line 724 "evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 186:
#line 727 "evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 187:
#line 728 "evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 188:
#line 732 "evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 189:
#line 740 "evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 190:
#line 748 "evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 191:
#line 759 "evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 192:
#line 768 "evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 193:
#line 773 "evoparser.y"
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
#line 784 "evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 197:
#line 786 "evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 198:
#line 789 "evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 199:
#line 796 "evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 200:
#line 804 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 201:
#line 805 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 806 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 809 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 204:
#line 810 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 206:
#line 814 "evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 209:
#line 823 "evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 210:
#line 825 "evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 213:
#line 833 "evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 214:
#line 835 "evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 219:
#line 847 "evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 220:
#line 853 "evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 221:
#line 860 "evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 222:
#line 868 "evoparser.y"
    { /* no limit */ ;}
    break;

  case 223:
#line 869 "evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 224:
#line 870 "evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 225:
#line 871 "evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 226:
#line 874 "evoparser.y"
    { /* no locking */ ;}
    break;

  case 227:
#line 875 "evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 228:
#line 876 "evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 229:
#line 877 "evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 230:
#line 878 "evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 232:
#line 882 "evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 233:
#line 885 "evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 234:
#line 886 "evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 235:
#line 889 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 890 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 237:
#line 891 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 238:
#line 892 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 239:
#line 893 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 240:
#line 894 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 241:
#line 895 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 242:
#line 896 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 243:
#line 897 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 244:
#line 900 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 245:
#line 901 "evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 903 "evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 247:
#line 911 "evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 248:
#line 916 "evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 249:
#line 917 "evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 250:
#line 918 "evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 251:
#line 921 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 922 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 255:
#line 931 "evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 256:
#line 937 "evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 257:
#line 938 "evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 258:
#line 939 "evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 261:
#line 948 "evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 262:
#line 950 "evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 263:
#line 952 "evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 264:
#line 954 "evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 265:
#line 956 "evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 266:
#line 959 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 267:
#line 960 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 961 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 269:
#line 964 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 270:
#line 965 "evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 271:
#line 968 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 272:
#line 969 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 273:
#line 972 "evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 274:
#line 973 "evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 275:
#line 974 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 981 "evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 279:
#line 982 "evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 280:
#line 987 "evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 281:
#line 989 "evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 282:
#line 991 "evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 284:
#line 995 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 285:
#line 996 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 999 "evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1000 "evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1003 "evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 289:
#line 1008 "evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 290:
#line 1018 "evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 291:
#line 1025 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 292:
#line 1026 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 293:
#line 1027 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 294:
#line 1028 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1033 "evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 296:
#line 1037 "evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1039 "evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 300:
#line 1045 "evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 301:
#line 1050 "evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 302:
#line 1057 "evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 303:
#line 1064 "evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 304:
#line 1074 "evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 305:
#line 1081 "evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 306:
#line 1088 "evoparser.y"
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
#line 1098 "evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 308:
#line 1106 "evoparser.y"
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
#line 1116 "evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 310:
#line 1124 "evoparser.y"
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
#line 1133 "evoparser.y"
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
#line 1142 "evoparser.y"
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
#line 1152 "evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 314:
#line 1160 "evoparser.y"
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
#line 1169 "evoparser.y"
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
#line 1178 "evoparser.y"
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
#line 1188 "evoparser.y"
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
#line 1197 "evoparser.y"
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
#line 1209 "evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 320:
#line 1214 "evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 321:
#line 1219 "evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 322:
#line 1225 "evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 323:
#line 1232 "evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 324:
#line 1239 "evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 325:
#line 1246 "evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 326:
#line 1256 "evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 327:
#line 1263 "evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 328:
#line 1272 "evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 329:
#line 1279 "evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 330:
#line 1285 "evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 331:
#line 1293 "evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 332:
#line 1299 "evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 334:
#line 1307 "evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 335:
#line 1308 "evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 336:
#line 1309 "evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 337:
#line 1310 "evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 338:
#line 1315 "evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 339:
#line 1322 "evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 340:
#line 1331 "evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 341:
#line 1338 "evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 342:
#line 1344 "evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 343:
#line 1354 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 344:
#line 1358 "evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 345:
#line 1364 "evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 346:
#line 1370 "evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 347:
#line 1377 "evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 348:
#line 1383 "evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 349:
#line 1390 "evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 350:
#line 1396 "evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 351:
#line 1402 "evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 352:
#line 1408 "evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 353:
#line 1414 "evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 354:
#line 1420 "evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 355:
#line 1426 "evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 356:
#line 1432 "evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 357:
#line 1438 "evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 358:
#line 1444 "evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 359:
#line 1450 "evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 360:
#line 1456 "evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 361:
#line 1462 "evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 362:
#line 1468 "evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 363:
#line 1474 "evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 364:
#line 1481 "evoparser.y"
    { ;}
    break;

  case 365:
#line 1482 "evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 366:
#line 1483 "evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 367:
#line 1487 "evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 368:
#line 1495 "evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 369:
#line 1501 "evoparser.y"
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
#line 1514 "evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 372:
#line 1517 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 373:
#line 1518 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 374:
#line 1519 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 375:
#line 1520 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 376:
#line 1521 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 380:
#line 1528 "evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 381:
#line 1532 "evoparser.y"
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
#line 1542 "evoparser.y"
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
#line 1554 "evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 384:
#line 1555 "evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 385:
#line 1555 "evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 386:
#line 1558 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 387:
#line 1559 "evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1560 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1561 "evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 390:
#line 1565 "evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 391:
#line 1568 "evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1569 "evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1570 "evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 394:
#line 1571 "evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1577 "evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 396:
#line 1583 "evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 397:
#line 1588 "evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 398:
#line 1593 "evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 399:
#line 1598 "evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 400:
#line 1607 "evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 401:
#line 1614 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 402:
#line 1615 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 403:
#line 1616 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 404:
#line 1621 "evoparser.y"
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
#line 1632 "evoparser.y"
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
#line 1644 "evoparser.y"
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
#line 1655 "evoparser.y"
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
#line 1670 "evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 409:
#line 1674 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 410:
#line 1678 "evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 411:
#line 1679 "evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 412:
#line 1684 "evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 413:
#line 1686 "evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 414:
#line 1688 "evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 415:
#line 1690 "evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 416:
#line 1693 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 417:
#line 1694 "evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 418:
#line 1700 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 419:
#line 1705 "evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 420:
#line 1707 "evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 421:
#line 1709 "evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 422:
#line 1711 "evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 423:
#line 1713 "evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 424:
#line 1717 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1721 "evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 426:
#line 1722 "evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 427:
#line 1727 "evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 428:
#line 1737 "evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 429:
#line 1746 "evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 431:
#line 1750 "evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 432:
#line 1751 "evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 433:
#line 1752 "evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 434:
#line 1753 "evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 435:
#line 1755 "evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 436:
#line 1757 "evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 439:
#line 1765 "evoparser.y"
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
#line 1780 "evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 441:
#line 1788 "evoparser.y"
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
#line 1802 "evoparser.y"
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
#line 1816 "evoparser.y"
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
#line 1830 "evoparser.y"
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
#line 1842 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 446:
#line 1843 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 447:
#line 1844 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 448:
#line 1847 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 449:
#line 1848 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1851 "evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 451:
#line 1852 "evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 452:
#line 1853 "evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 453:
#line 1854 "evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 454:
#line 1855 "evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 455:
#line 1856 "evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 456:
#line 1857 "evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 457:
#line 1858 "evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 458:
#line 1860 "evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 459:
#line 1862 "evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 460:
#line 1864 "evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 461:
#line 1866 "evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 462:
#line 1868 "evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 463:
#line 1870 "evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 464:
#line 1873 "evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 465:
#line 1874 "evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 1877 "evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 467:
#line 1878 "evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 468:
#line 1881 "evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 469:
#line 1882 "evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1886 "evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 472:
#line 1887 "evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 473:
#line 1888 "evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 474:
#line 1889 "evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 475:
#line 1890 "evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 476:
#line 1891 "evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 477:
#line 1892 "evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 478:
#line 1893 "evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 479:
#line 1894 "evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 480:
#line 1895 "evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 481:
#line 1896 "evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 482:
#line 1897 "evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 483:
#line 1898 "evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 484:
#line 1899 "evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 485:
#line 1900 "evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 486:
#line 1901 "evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 487:
#line 1902 "evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 488:
#line 1905 "evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 489:
#line 1906 "evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 490:
#line 1909 "evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 491:
#line 1911 "evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 492:
#line 1919 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 493:
#line 1920 "evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 495:
#line 1922 "evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 496:
#line 1923 "evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 497:
#line 1924 "evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 498:
#line 1925 "evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 499:
#line 1926 "evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 500:
#line 1927 "evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 501:
#line 1928 "evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 502:
#line 1929 "evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 1930 "evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 504:
#line 1937 "evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 505:
#line 1938 "evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 506:
#line 1939 "evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 507:
#line 1940 "evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 508:
#line 1941 "evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 509:
#line 1942 "evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 510:
#line 1943 "evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 511:
#line 1944 "evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 512:
#line 1945 "evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 513:
#line 1946 "evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 514:
#line 1947 "evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 515:
#line 1948 "evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 516:
#line 1949 "evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 517:
#line 1950 "evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 518:
#line 1951 "evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 519:
#line 1952 "evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 520:
#line 1953 "evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 521:
#line 1954 "evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 522:
#line 1955 "evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 523:
#line 1956 "evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 524:
#line 1957 "evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 525:
#line 1960 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 526:
#line 1961 "evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 527:
#line 1962 "evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 528:
#line 1965 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 529:
#line 1966 "evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 530:
#line 1969 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 531:
#line 1970 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 532:
#line 1971 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 534:
#line 1975 "evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 535:
#line 1976 "evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 536:
#line 1980 "evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 537:
#line 1981 "evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 538:
#line 1982 "evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 539:
#line 1983 "evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 540:
#line 1984 "evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 541:
#line 1985 "evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 542:
#line 1986 "evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 543:
#line 1987 "evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 544:
#line 1988 "evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 545:
#line 1989 "evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 546:
#line 1990 "evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 547:
#line 1991 "evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 548:
#line 1992 "evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 549:
#line 1993 "evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 550:
#line 1994 "evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 551:
#line 1995 "evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 552:
#line 1996 "evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 553:
#line 1997 "evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 554:
#line 1998 "evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 555:
#line 1999 "evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 556:
#line 2000 "evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 557:
#line 2001 "evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 558:
#line 2002 "evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 559:
#line 2003 "evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 560:
#line 2004 "evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 561:
#line 2005 "evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 562:
#line 2006 "evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 563:
#line 2007 "evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 564:
#line 2008 "evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 565:
#line 2009 "evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 566:
#line 2010 "evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 567:
#line 2011 "evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 568:
#line 2014 "evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 569:
#line 2015 "evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2019 "evoparser.y"
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
#line 2031 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 572:
#line 2032 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 573:
#line 2033 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 574:
#line 2037 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 575:
#line 2040 "evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 576:
#line 2041 "evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 580:
#line 2045 "evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 581:
#line 2046 "evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 7403 "evoparser.tab.c"
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


#line 2049 "evoparser.y"

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
