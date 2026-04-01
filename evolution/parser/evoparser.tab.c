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
     FEVO_JITTER = 513
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
#line 667 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 680 "parser/evoparser.tab.c"

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
#define YYLAST   4762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  273
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  532
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1386

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   513

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     270,   271,    26,    24,   272,    25,   269,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   268,
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
     264,   265,   266,   267
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
     222,   227,   232,   237,   242,   247,   252,   257,   264,   273,
     280,   287,   296,   301,   309,   316,   321,   326,   331,   338,
     347,   354,   361,   368,   377,   386,   391,   398,   405,   412,
     417,   422,   427,   434,   439,   446,   451,   458,   462,   467,
     472,   477,   481,   485,   492,   497,   502,   507,   512,   517,
     522,   529,   536,   543,   550,   559,   563,   572,   583,   587,
     591,   595,   599,   604,   611,   613,   615,   617,   624,   631,
     635,   639,   643,   647,   651,   655,   659,   663,   667,   672,
     679,   683,   689,   694,   700,   704,   709,   713,   718,   720,
     722,   724,   726,   730,   743,   744,   747,   748,   753,   756,
     761,   762,   764,   766,   767,   770,   771,   774,   775,   779,
     781,   785,   788,   791,   792,   795,   800,   805,   806,   809,
     812,   817,   822,   823,   826,   828,   832,   833,   836,   839,
     842,   845,   848,   851,   854,   857,   859,   863,   865,   868,
     871,   873,   874,   876,   880,   882,   884,   888,   894,   898,
     902,   904,   905,   911,   915,   921,   928,   934,   935,   937,
     939,   940,   942,   944,   946,   949,   952,   953,   954,   956,
     959,   964,   971,   978,   985,   986,   989,   990,   992,   996,
    1000,  1002,  1010,  1013,  1016,  1019,  1020,  1027,  1030,  1035,
    1036,  1039,  1047,  1049,  1053,  1059,  1061,  1070,  1081,  1091,
    1103,  1114,  1127,  1139,  1153,  1163,  1175,  1186,  1199,  1211,
    1224,  1226,  1230,  1232,  1237,  1242,  1247,  1254,  1256,  1260,
    1263,  1267,  1273,  1275,  1279,  1280,  1283,  1286,  1290,  1294,
    1296,  1300,  1302,  1306,  1312,  1314,  1325,  1336,  1354,  1367,
    1387,  1399,  1406,  1415,  1422,  1429,  1436,  1446,  1453,  1459,
    1468,  1476,  1486,  1495,  1506,  1516,  1517,  1519,  1522,  1524,
    1533,  1540,  1541,  1546,  1547,  1550,  1553,  1556,  1559,  1561,
    1562,  1563,  1567,  1569,  1573,  1577,  1578,  1585,  1587,  1589,
    1593,  1597,  1605,  1609,  1613,  1619,  1625,  1627,  1636,  1644,
    1652,  1654,  1663,  1664,  1667,  1670,  1674,  1680,  1686,  1694,
    1700,  1702,  1707,  1712,  1716,  1722,  1726,  1732,  1733,  1736,
    1738,  1744,  1752,  1760,  1770,  1782,  1784,  1787,  1791,  1793,
    1803,  1815,  1816,  1821,  1825,  1831,  1837,  1847,  1858,  1860,
    1864,  1874,  1884,  1894,  1901,  1913,  1922,  1923,  1925,  1928,
    1930,  1934,  1940,  1948,  1953,  1958,  1964,  1970,  1975,  1982,
    1994,  2008,  2022,  2038,  2043,  2050,  2052,  2056,  2058,  2062,
    2064,  2068,  2069,  2074,  2080,  2085,  2091,  2096,  2102,  2107,
    2113,  2118,  2123,  2127,  2131,  2135,  2138,  2142,  2147,  2152,
    2154,  2158,  2159,  2164,  2165,  2169,  2172,  2176,  2180,  2184,
    2188,  2194,  2200,  2206,  2210,  2216,  2219,  2227,  2233,  2241,
    2247,  2250,  2254,  2257,  2261,  2264,  2268,  2274,  2279,  2285,
    2293,  2302,  2311,  2319,  2326,  2333,  2339,  2340,  2344,  2350,
    2351,  2353,  2354,  2357,  2360,  2361,  2366,  2370,  2373,  2377,
    2381,  2385,  2389,  2393,  2397,  2401,  2405,  2409,  2413,  2415,
    2417,  2419,  2421,  2423,  2427,  2433,  2436,  2441,  2443,  2445,
    2447,  2449,  2453,  2457,  2461,  2465,  2471,  2477,  2479,  2481,
    2483,  2487,  2491,  2492,  2494,  2496,  2498,  2502,  2506,  2509,
    2511,  2515,  2519
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     274,     0,    -1,   290,   268,    -1,   290,   268,   274,    -1,
       3,    -1,     3,   269,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   275,    24,
     275,    -1,   275,    25,   275,    -1,   275,    26,   275,    -1,
     275,    27,   275,    -1,   275,    28,   275,    -1,   275,    29,
     275,    -1,    25,   275,    -1,   270,   275,   271,    -1,   275,
      12,   275,    -1,   275,    10,   275,    -1,   275,    11,   275,
      -1,   275,    21,   275,    -1,   275,    22,   275,    -1,   275,
      30,   275,    -1,   275,    23,   275,    -1,    18,   275,    -1,
      17,   275,    -1,   275,    20,   275,    -1,    -1,   275,    20,
     270,   276,   291,   271,    -1,    -1,   275,    20,    37,   270,
     277,   291,   271,    -1,    -1,   275,    20,   168,   270,   278,
     291,   271,    -1,    -1,   275,    20,    35,   270,   279,   291,
     271,    -1,   275,    15,   145,    -1,   275,    15,    18,   145,
      -1,   275,    15,     6,    -1,   275,    15,    18,     6,    -1,
       8,     9,   275,    -1,   275,    19,   275,    40,   275,    -1,
     275,    18,    19,   275,    40,   275,    -1,   275,    -1,   275,
     272,   280,    -1,    -1,   280,    -1,    -1,   275,    16,   270,
     282,   280,   271,    -1,    -1,   275,    18,    16,   270,   283,
     280,   271,    -1,    -1,   275,    16,   270,   284,   291,   271,
      -1,    -1,   275,    18,    16,   270,   285,   291,   271,    -1,
      -1,   210,   270,   286,   291,   271,    -1,     3,   270,   281,
     271,    -1,   251,   270,    26,   271,    -1,   251,   270,   275,
     271,    -1,   252,   270,   275,   271,    -1,   253,   270,   275,
     271,    -1,   254,   270,   275,   271,    -1,   255,   270,   275,
     271,    -1,   249,   270,   275,   271,    -1,   249,   270,   275,
     250,     4,   271,    -1,   211,   270,   275,   272,   275,   272,
     275,   271,    -1,   211,   270,   275,   272,   275,   271,    -1,
     211,   270,   275,   102,   275,   271,    -1,   211,   270,   275,
     102,   275,   105,   275,   271,    -1,   212,   270,   275,   271,
      -1,   212,   270,   287,   275,   102,   275,   271,    -1,   212,
     270,   287,   102,   275,   271,    -1,   256,   270,   275,   271,
      -1,   257,   270,   275,   271,    -1,   258,   270,   275,   271,
      -1,   259,   270,   275,   272,   275,   271,    -1,   260,   270,
     275,   272,   275,   272,   275,   271,    -1,   261,   270,   275,
     272,   275,   271,    -1,   223,   270,   275,   272,   275,   271,
      -1,   224,   270,   275,   272,   275,   271,    -1,   225,   270,
     275,   272,   275,   272,   275,   271,    -1,   226,   270,   275,
     272,   275,   272,   275,   271,    -1,   227,   270,   275,   271,
      -1,   228,   270,   275,   272,   275,   271,    -1,   229,   270,
     275,   272,   275,   271,    -1,   230,   270,   275,   272,   275,
     271,    -1,   231,   270,   275,   271,    -1,   232,   270,   275,
     271,    -1,   233,   270,   275,   271,    -1,   234,   270,   275,
     272,   275,   271,    -1,   234,   270,   275,   271,    -1,   235,
     270,   275,   272,   275,   271,    -1,   236,   270,   275,   271,
      -1,   237,   270,   275,   272,   275,   271,    -1,   238,   270,
     271,    -1,   239,   270,   275,   271,    -1,   240,   270,   275,
     271,    -1,   241,   270,   275,   271,    -1,   242,   270,   271,
      -1,   222,   270,   271,    -1,   215,   270,   275,   272,   275,
     271,    -1,   216,   270,   275,   271,    -1,   217,   270,   275,
     271,    -1,   218,   270,   275,   271,    -1,   219,   270,   275,
     271,    -1,   220,   270,   275,   271,    -1,   221,   270,   275,
     271,    -1,   243,   270,   275,    41,   376,   271,    -1,   244,
     270,   275,   272,   376,   271,    -1,   245,   270,   275,   272,
     275,   271,    -1,   246,   270,   275,   272,   275,   271,    -1,
     247,   270,   275,   272,   275,   272,   275,   271,    -1,   275,
      15,   248,    -1,   259,   270,   275,   272,   275,   272,   275,
     271,    -1,   259,   270,   275,   272,   275,   272,   275,   272,
     275,   271,    -1,   262,   270,   271,    -1,   263,   270,   271,
      -1,   264,   270,   271,    -1,   265,   270,   271,    -1,   266,
     270,   275,   271,    -1,   267,   270,   275,   272,   275,   271,
      -1,   130,    -1,   187,    -1,    53,    -1,   213,   270,   275,
     272,   288,   271,    -1,   214,   270,   275,   272,   288,   271,
      -1,   123,   275,   207,    -1,   123,   275,    77,    -1,   123,
     275,    78,    -1,   123,   275,    82,    -1,   123,   275,    84,
      -1,   123,   275,   208,    -1,   123,   275,   108,    -1,   123,
     275,   107,    -1,   123,   275,   110,    -1,    62,   275,   289,
      95,    -1,    62,   275,   289,    96,   275,    95,    -1,    62,
     289,    95,    -1,    62,   289,    96,   275,    95,    -1,   205,
     275,   186,   275,    -1,   289,   205,   275,   186,   275,    -1,
     275,    14,   275,    -1,   275,    18,    14,   275,    -1,   275,
      13,   275,    -1,   275,    18,    13,   275,    -1,    57,    -1,
      65,    -1,    66,    -1,   291,    -1,   175,   305,   306,    -1,
     175,   305,   306,   102,   309,   292,   293,   297,   298,   301,
     302,   303,    -1,    -1,   204,   275,    -1,    -1,   106,    51,
     294,   296,    -1,   275,   295,    -1,   294,   272,   275,   295,
      -1,    -1,    39,    -1,    85,    -1,    -1,   206,   159,    -1,
      -1,   111,   275,    -1,    -1,   148,    51,   299,    -1,   300,
      -1,   299,   272,   300,    -1,     3,   295,    -1,     5,   295,
      -1,    -1,   131,   275,    -1,   131,   275,   272,   275,    -1,
     131,   275,   133,   275,    -1,    -1,   105,   191,    -1,   105,
     166,    -1,   105,   191,   167,   132,    -1,   105,   166,   167,
     132,    -1,    -1,   121,   304,    -1,     3,    -1,   304,   272,
       3,    -1,    -1,   305,    35,    -1,   305,    79,    -1,   305,
      83,    -1,   305,   109,    -1,   305,   172,    -1,   305,   162,
      -1,   305,   170,    -1,   305,   169,    -1,   307,    -1,   306,
     272,   307,    -1,    26,    -1,   275,   308,    -1,    41,     3,
      -1,     3,    -1,    -1,   310,    -1,   309,   272,   310,    -1,
     311,    -1,   313,    -1,     3,   308,   320,    -1,     3,   269,
       3,   308,   320,    -1,   323,   312,     3,    -1,   270,   309,
     271,    -1,    41,    -1,    -1,   310,   314,   124,   311,   318,
      -1,   310,   172,   311,    -1,   310,   172,   311,   147,   275,
      -1,   310,   316,   315,   124,   311,   319,    -1,   310,   142,
     317,   124,   311,    -1,    -1,   115,    -1,    61,    -1,    -1,
     146,    -1,   129,    -1,   160,    -1,   129,   315,    -1,   160,
     315,    -1,    -1,    -1,   319,    -1,   147,   275,    -1,   197,
     270,   304,   271,    -1,   198,   125,   321,   270,   322,   271,
      -1,   116,   125,   321,   270,   322,   271,    -1,   100,   125,
     321,   270,   322,   271,    -1,    -1,   105,   124,    -1,    -1,
       3,    -1,   322,   272,     3,    -1,   270,   291,   271,    -1,
     324,    -1,    80,   325,   102,     3,   292,   298,   301,    -1,
     325,   128,    -1,   325,   152,    -1,   325,   116,    -1,    -1,
      80,   325,   326,   102,   309,   292,    -1,     3,   327,    -1,
     326,   272,     3,   327,    -1,    -1,   269,    26,    -1,    80,
     325,   102,   326,   197,   309,   292,    -1,   328,    -1,    81,
     185,     3,    -1,    81,   185,   118,   210,     3,    -1,   329,
      -1,    58,   117,     3,   147,     3,   270,   330,   271,    -1,
      58,   117,   118,   210,     3,   147,     3,   270,   330,   271,
      -1,    58,   194,   117,     3,   147,     3,   270,   330,   271,
      -1,    58,   194,   117,   118,   210,     3,   147,     3,   270,
     330,   271,    -1,    58,   117,     3,   147,     3,   197,   199,
     270,   330,   271,    -1,    58,   117,   118,   210,     3,   147,
       3,   197,   199,   270,   330,   271,    -1,    58,   194,   117,
       3,   147,     3,   197,   199,   270,   330,   271,    -1,    58,
     194,   117,   118,   210,     3,   147,     3,   197,   199,   270,
     330,   271,    -1,    58,   117,    70,     3,   147,     3,   270,
     330,   271,    -1,    58,   117,    70,   118,   210,     3,   147,
       3,   270,   330,   271,    -1,    58,   194,   117,    70,     3,
     147,     3,   270,   330,   271,    -1,    58,   194,   117,    70,
     118,   210,     3,   147,     3,   270,   330,   271,    -1,    58,
     117,    70,     3,   147,     3,   197,   199,   270,   330,   271,
      -1,    58,   194,   117,    70,     3,   147,     3,   197,   199,
     270,   330,   271,    -1,     3,    -1,   330,   272,     3,    -1,
     331,    -1,   256,   270,     3,   271,    -1,   257,   270,     3,
     271,    -1,   258,   270,     3,   271,    -1,   259,   270,     3,
     272,     3,   271,    -1,   332,    -1,    81,   117,     3,    -1,
     333,   335,    -1,   188,   185,     3,    -1,   188,   185,     3,
     272,   334,    -1,     3,    -1,   334,   272,     3,    -1,    -1,
     335,    59,    -1,   335,   158,    -1,   335,    45,    43,    -1,
     335,    44,    43,    -1,   336,    -1,   155,   185,     3,    -1,
     337,    -1,    36,   185,     3,    -1,    36,   185,     3,   269,
       3,    -1,   338,    -1,    32,   185,     3,    33,    56,     3,
      63,   270,   275,   271,    -1,    32,   185,     3,    33,    56,
       3,   194,   270,   369,   271,    -1,    32,   185,     3,    33,
      56,     3,   101,   125,   270,   366,   271,   156,     3,   270,
     367,   271,   368,    -1,    32,   185,     3,    33,    56,     3,
      63,   270,   275,   271,    18,   200,    -1,    32,   185,     3,
      33,    56,     3,   101,   125,   270,   366,   271,   156,     3,
     270,   367,   271,   368,    18,   200,    -1,    32,   185,     3,
      33,    56,     3,   151,   125,   270,   365,   271,    -1,    32,
     185,     3,    81,    56,     3,    -1,    32,   185,     3,   157,
      56,     3,   178,     3,    -1,    32,   185,     3,    91,    56,
       3,    -1,    32,   185,     3,    74,    56,     3,    -1,    32,
     185,     3,   200,    56,     3,    -1,    32,   185,     3,    33,
      69,     3,   376,   371,   339,    -1,    32,   185,     3,    81,
      69,     3,    -1,    32,   185,     3,    81,     3,    -1,    32,
     185,     3,   157,    69,     3,   178,     3,    -1,    32,   185,
       3,   157,     3,   178,     3,    -1,    32,   185,     3,   139,
      69,     3,   376,   371,   339,    -1,    32,   185,     3,   139,
       3,   376,   371,   339,    -1,    32,   185,     3,    60,    69,
       3,     3,   376,   371,   339,    -1,    32,   185,     3,    60,
       3,     3,   376,   371,   339,    -1,    -1,    98,    -1,    34,
       3,    -1,   340,    -1,   119,   342,   343,     3,   344,   202,
     346,   341,    -1,   119,   342,   343,     3,   344,   291,    -1,
      -1,   149,   125,   191,   349,    -1,    -1,   342,   128,    -1,
     342,    76,    -1,   342,   109,    -1,   342,   116,    -1,   121,
      -1,    -1,    -1,   270,   345,   271,    -1,     3,    -1,   345,
     272,     3,    -1,   270,   348,   271,    -1,    -1,   346,   272,
     347,   270,   348,   271,    -1,   275,    -1,    86,    -1,   348,
     272,   275,    -1,   348,   272,    86,    -1,   119,   342,   343,
       3,   174,   349,   341,    -1,     3,    20,   275,    -1,     3,
      20,    86,    -1,   349,   272,     3,    20,   275,    -1,   349,
     272,     3,    20,    86,    -1,   350,    -1,   161,   342,   343,
       3,   344,   202,   346,   341,    -1,   161,   342,   343,     3,
     174,   349,   341,    -1,   161,   342,   343,     3,   344,   291,
     341,    -1,   351,    -1,   191,   352,   309,   174,   353,   292,
     298,   301,    -1,    -1,   342,   128,    -1,   342,   116,    -1,
       3,    20,   275,    -1,     3,   269,     3,    20,   275,    -1,
     353,   272,     3,    20,   275,    -1,   353,   272,     3,   269,
       3,    20,   275,    -1,   157,   185,     3,   178,     3,    -1,
     354,    -1,    58,    71,   355,     3,    -1,    58,   163,   355,
       3,    -1,    81,    71,     3,    -1,    81,    71,   118,   210,
       3,    -1,    81,   163,     3,    -1,    81,   163,   118,   210,
       3,    -1,    -1,   118,   210,    -1,   356,    -1,    58,    75,
       3,    41,   376,    -1,    58,    75,     3,    41,   376,    86,
     275,    -1,    58,    75,     3,    41,   376,    18,   145,    -1,
      58,    75,     3,    41,   376,    63,   270,   275,   271,    -1,
      58,    75,     3,    41,   376,    18,   145,    63,   270,   275,
     271,    -1,   357,    -1,   198,     3,    -1,   198,    71,     3,
      -1,   358,    -1,    58,   362,   185,   355,     3,   270,   363,
     271,   359,    -1,    58,   362,   185,   355,     3,   269,     3,
     270,   363,   271,   359,    -1,    -1,   359,    38,    20,     5,
      -1,   359,    38,     5,    -1,   359,   147,     3,    80,     3,
      -1,   359,   147,     3,   181,     3,    -1,   359,   164,    51,
     199,   270,     3,   271,   165,     5,    -1,   359,   164,    51,
     153,   270,     3,   271,   270,   360,   271,    -1,   361,    -1,
     360,   272,   361,    -1,   164,     3,   202,   126,   183,     4,
     147,   143,     5,    -1,   164,     3,   202,   126,   183,   136,
     147,   143,     5,    -1,    58,   362,   185,   355,     3,   270,
     363,   271,   378,    -1,    58,   362,   185,   355,     3,   378,
      -1,    58,   362,   185,   355,     3,   269,     3,   270,   363,
     271,   378,    -1,    58,   362,   185,   355,     3,   269,     3,
     378,    -1,    -1,   179,    -1,   180,   179,    -1,   364,    -1,
     363,   272,   364,    -1,   151,   125,   270,   365,   271,    -1,
      56,     3,   151,   125,   270,   365,   271,    -1,   125,   270,
     304,   271,    -1,   117,   270,   304,   271,    -1,   104,   117,
     270,   304,   271,    -1,   104,   125,   270,   304,   271,    -1,
      63,   270,   275,   271,    -1,    56,     3,    63,   270,   275,
     271,    -1,   101,   125,   270,   366,   271,   156,     3,   270,
     367,   271,   368,    -1,   101,   125,   270,   366,   271,   156,
       3,   269,     3,   270,   367,   271,   368,    -1,    56,     3,
     101,   125,   270,   366,   271,   156,     3,   270,   367,   271,
     368,    -1,    56,     3,   101,   125,   270,   366,   271,   156,
       3,   269,     3,   270,   367,   271,   368,    -1,   194,   270,
     369,   271,    -1,    56,     3,   194,   270,   369,   271,    -1,
       3,    -1,   365,   272,     3,    -1,     3,    -1,   366,   272,
       3,    -1,     3,    -1,   367,   272,     3,    -1,    -1,   368,
     147,    80,    59,    -1,   368,   147,    80,   174,   145,    -1,
     368,   147,    80,   158,    -1,   368,   147,    80,   174,    86,
      -1,   368,   147,   191,    59,    -1,   368,   147,   191,   174,
     145,    -1,   368,   147,   191,   158,    -1,   368,   147,   191,
     174,    86,    -1,   368,   147,    80,   144,    -1,   368,   147,
     191,   144,    -1,   368,   135,   103,    -1,   368,   135,   171,
      -1,   368,   135,   150,    -1,   368,    72,    -1,   368,    18,
      72,    -1,   368,    72,   113,    73,    -1,   368,    72,   113,
     112,    -1,     3,    -1,   369,   272,     3,    -1,    -1,   370,
       3,   376,   371,    -1,    -1,   371,    18,   145,    -1,   371,
     145,    -1,   371,    86,     4,    -1,   371,    86,     5,    -1,
     371,    86,     7,    -1,   371,    86,     6,    -1,   371,    86,
     262,   270,   271,    -1,   371,    86,   263,   270,   271,    -1,
     371,    86,   264,   270,   271,    -1,   371,    86,    57,    -1,
     371,    86,   270,   275,   271,    -1,   371,    38,    -1,   371,
      38,   270,     5,   272,     5,   271,    -1,   371,    38,   270,
       5,   271,    -1,   371,    43,   270,     5,   272,     5,   271,
      -1,   371,    43,   270,     5,   271,    -1,   371,    43,    -1,
     371,   194,   125,    -1,   371,   194,    -1,   371,   151,   125,
      -1,   371,   125,    -1,   371,    64,     4,    -1,   371,    63,
     270,   275,   271,    -1,   371,    56,     3,   194,    -1,   371,
      56,     3,   151,   125,    -1,   371,    56,     3,    63,   270,
     275,   271,    -1,   371,    46,    42,    41,   270,   275,   271,
      47,    -1,   371,    46,    42,    41,   270,   275,   271,    48,
      -1,   371,    46,    42,    41,   270,   275,   271,    -1,   371,
      41,   270,   275,   271,    47,    -1,   371,    41,   270,   275,
     271,    48,    -1,   371,    41,   270,   275,   271,    -1,    -1,
     270,     5,   271,    -1,   270,     5,   272,     5,   271,    -1,
      -1,    52,    -1,    -1,   374,   192,    -1,   374,   209,    -1,
      -1,   375,    67,   174,     4,    -1,   375,    68,     4,    -1,
      55,   372,    -1,   177,   372,   374,    -1,   173,   372,   374,
      -1,   141,   372,   374,    -1,   122,   372,   374,    -1,   114,
     372,   374,    -1,    54,   372,   374,    -1,   154,   372,   374,
      -1,    87,   372,   374,    -1,    99,   372,   374,    -1,    89,
     372,   374,    -1,    90,    -1,   190,    -1,   184,    -1,    88,
      -1,   207,    -1,    67,   372,   375,    -1,   201,   270,     5,
     271,   375,    -1,    52,   372,    -1,   203,   270,     5,   271,
      -1,   189,    -1,    49,    -1,   140,    -1,   134,    -1,   176,
     373,   375,    -1,   182,   373,   375,    -1,   137,   373,   375,
      -1,   127,   373,   375,    -1,    94,   270,   377,   271,   375,
      -1,   174,   270,   377,   271,   375,    -1,    50,    -1,   195,
      -1,     4,    -1,   377,   272,     4,    -1,   379,   312,   291,
      -1,    -1,   116,    -1,   161,    -1,   380,    -1,   174,   163,
       3,    -1,   174,   163,    86,    -1,   174,   381,    -1,   382,
      -1,   381,   272,   382,    -1,     8,    20,   275,    -1,     8,
       9,   275,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   362,   362,   363,   368,   375,   376,   377,   395,   403,
     411,   417,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     448,   448,   457,   457,   459,   459,   461,   461,   465,   466,
     467,   468,   469,   472,   473,   476,   477,   480,   481,   484,
     484,   485,   485,   486,   486,   494,   494,   502,   502,   513,
     517,   518,   519,   520,   521,   522,   523,   524,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   561,   562,   563,   564,   565,   566,   567,   568,
     570,   571,   573,   574,   575,   577,   578,   579,   580,   587,
     594,   601,   605,   609,   615,   616,   617,   620,   626,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   644,   646,
     648,   650,   654,   662,   673,   674,   677,   678,   681,   689,
     697,   708,   718,   719,   733,   734,   735,   736,   739,   746,
     754,   755,   756,   759,   760,   763,   764,   767,   768,   771,
     772,   775,   781,   790,   791,   792,   793,   796,   797,   798,
     799,   800,   803,   804,   807,   808,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   822,   823,   824,   832,   838,
     839,   840,   843,   844,   847,   848,   852,   859,   860,   861,
     864,   865,   869,   871,   873,   875,   877,   881,   882,   883,
     886,   887,   890,   891,   894,   895,   896,   899,   900,   903,
     904,   908,   910,   912,   914,   917,   918,   921,   922,   925,
     929,   939,   947,   948,   949,   950,   954,   958,   960,   964,
     964,   966,   971,   978,   985,   995,  1002,  1009,  1019,  1027,
    1037,  1045,  1054,  1063,  1073,  1081,  1090,  1099,  1109,  1118,
    1130,  1135,  1140,  1146,  1153,  1160,  1167,  1177,  1184,  1193,
    1200,  1206,  1214,  1220,  1228,  1229,  1230,  1231,  1232,  1236,
    1243,  1252,  1259,  1265,  1276,  1279,  1285,  1291,  1298,  1304,
    1311,  1317,  1323,  1329,  1335,  1341,  1347,  1353,  1359,  1365,
    1371,  1377,  1383,  1389,  1395,  1403,  1404,  1405,  1408,  1416,
    1422,  1435,  1436,  1439,  1440,  1441,  1442,  1443,  1446,  1446,
    1449,  1450,  1453,  1463,  1476,  1477,  1477,  1480,  1481,  1482,
    1483,  1486,  1490,  1491,  1492,  1493,  1499,  1502,  1508,  1513,
    1519,  1527,  1536,  1537,  1538,  1542,  1553,  1565,  1576,  1591,
    1596,  1600,  1601,  1605,  1607,  1609,  1611,  1615,  1616,  1622,
    1626,  1628,  1630,  1632,  1634,  1639,  1643,  1644,  1648,  1657,
    1667,  1671,  1672,  1673,  1674,  1675,  1676,  1678,  1682,  1683,
    1686,  1701,  1708,  1723,  1736,  1751,  1764,  1765,  1766,  1769,
    1770,  1773,  1774,  1775,  1776,  1777,  1778,  1779,  1780,  1781,
    1783,  1785,  1787,  1789,  1791,  1795,  1796,  1799,  1800,  1803,
    1804,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,
    1816,  1817,  1818,  1819,  1820,  1821,  1822,  1823,  1824,  1827,
    1828,  1831,  1831,  1841,  1842,  1843,  1844,  1845,  1846,  1847,
    1848,  1849,  1850,  1851,  1852,  1859,  1860,  1861,  1862,  1863,
    1864,  1865,  1866,  1867,  1868,  1869,  1870,  1871,  1872,  1873,
    1874,  1875,  1876,  1877,  1878,  1879,  1882,  1883,  1884,  1887,
    1888,  1891,  1892,  1893,  1896,  1897,  1898,  1902,  1903,  1904,
    1905,  1906,  1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,
    1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,
    1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,  1933,  1936,
    1937,  1940,  1953,  1954,  1955,  1959,  1962,  1963,  1964,  1965,
    1965,  1967,  1968
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
  "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "';'", "'.'", "'('",
  "')'", "','", "$accept", "stmt_list", "expr", "@1", "@2", "@3", "@4",
  "val_list", "opt_val_list", "@5", "@6", "@7", "@8", "@9", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
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
  "insert_vals_list", "@10", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_table_options",
  "shard_range_list", "shard_range_def", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list",
  "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@11", "column_atts", "opt_length", "opt_binary",
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
     506,   507,   508,   509,   510,   511,   512,   513,    59,    46,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   273,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     276,   275,   277,   275,   278,   275,   279,   275,   275,   275,
     275,   275,   275,   275,   275,   280,   280,   281,   281,   282,
     275,   283,   275,   284,   275,   285,   275,   286,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   287,   287,   287,   275,   275,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   275,   275,
     275,   275,   289,   289,   275,   275,   275,   275,   275,   275,
     275,   290,   291,   291,   292,   292,   293,   293,   294,   294,
     295,   295,   295,   296,   296,   297,   297,   298,   298,   299,
     299,   300,   300,   301,   301,   301,   301,   302,   302,   302,
     302,   302,   303,   303,   304,   304,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   306,   306,   306,   307,   308,
     308,   308,   309,   309,   310,   310,   311,   311,   311,   311,
     312,   312,   313,   313,   313,   313,   313,   314,   314,   314,
     315,   315,   316,   316,   317,   317,   317,   318,   318,   319,
     319,   320,   320,   320,   320,   321,   321,   322,   322,   323,
     290,   324,   325,   325,   325,   325,   324,   326,   326,   327,
     327,   324,   290,   328,   328,   290,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     330,   330,   330,   331,   331,   331,   331,   290,   332,   290,
     333,   333,   334,   334,   335,   335,   335,   335,   335,   290,
     336,   290,   337,   337,   290,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   339,   339,   339,   290,   340,
     340,   341,   341,   342,   342,   342,   342,   342,   343,   343,
     344,   344,   345,   345,   346,   347,   346,   348,   348,   348,
     348,   340,   349,   349,   349,   349,   290,   350,   350,   350,
     290,   351,   352,   352,   352,   353,   353,   353,   353,   290,
     290,   354,   354,   290,   290,   290,   290,   355,   355,   290,
     356,   356,   356,   356,   356,   290,   357,   357,   290,   358,
     358,   359,   359,   359,   359,   359,   359,   359,   360,   360,
     361,   361,   358,   358,   358,   358,   362,   362,   362,   363,
     363,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   365,   365,   366,   366,   367,
     367,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   369,
     369,   370,   364,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   372,   372,   372,   373,
     373,   374,   374,   374,   375,   375,   375,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   377,
     377,   378,   379,   379,   379,   290,   380,   380,   380,   381,
     381,   382,   382
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
       4,     4,     4,     4,     4,     4,     4,     6,     8,     6,
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
       3,     2,     2,     0,     2,     4,     4,     0,     2,     2,
       4,     4,     0,     2,     1,     3,     0,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     2,     2,
       1,     0,     1,     3,     1,     1,     3,     5,     3,     3,
       1,     0,     5,     3,     5,     6,     5,     0,     1,     1,
       0,     1,     1,     1,     2,     2,     0,     0,     1,     2,
       4,     6,     6,     6,     0,     2,     0,     1,     3,     3,
       1,     7,     2,     2,     2,     0,     6,     2,     4,     0,
       2,     7,     1,     3,     5,     1,     8,    10,     9,    11,
      10,    12,    11,    13,     9,    11,    10,    12,    11,    12,
       1,     3,     1,     4,     4,     4,     6,     1,     3,     2,
       3,     5,     1,     3,     0,     2,     2,     3,     3,     1,
       3,     1,     3,     5,     1,    10,    10,    17,    12,    19,
      11,     6,     8,     6,     6,     6,     9,     6,     5,     8,
       7,     9,     8,    10,     9,     0,     1,     2,     1,     8,
       6,     0,     4,     0,     2,     2,     2,     2,     1,     0,
       0,     3,     1,     3,     3,     0,     6,     1,     1,     3,
       3,     7,     3,     3,     5,     5,     1,     8,     7,     7,
       1,     8,     0,     2,     2,     3,     5,     5,     7,     5,
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
       3,     3,     0,     1,     1,     1,     3,     3,     2,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   396,   245,     0,   323,     0,     0,   323,
       0,   186,     0,   323,     0,     0,     0,   151,   240,   252,
     255,   277,   284,   289,   291,   294,   318,   346,   350,   360,
     369,   375,   378,   525,     0,     0,   367,     0,     0,   367,
     397,     0,     0,     0,     0,     0,     0,     0,     0,   329,
       0,     0,   329,     0,     0,   528,   529,     0,     0,     0,
       0,   376,     0,     1,     2,   279,     0,   292,     0,     0,
       0,     0,     0,     0,     0,   398,     0,   367,   249,     0,
     244,   242,   243,     0,   363,     0,   278,   365,     0,   253,
       0,   325,   326,   327,   328,   324,     0,   290,     0,     0,
       0,     0,   526,   527,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   197,   187,   148,     0,   149,   150,
     188,   189,   190,    11,   192,   194,   193,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   152,   195,   280,   327,
     324,   201,     0,     0,   202,   204,   205,   211,   377,     3,
       0,     0,   285,   286,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   368,   361,     0,     0,     0,     0,     0,
     362,     0,     0,     0,     0,     0,   247,   154,     0,     0,
       0,     0,     0,     0,   330,     0,   330,   532,   531,   530,
       0,    47,     0,    28,    27,    18,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,   234,     0,     0,     0,     0,   219,   218,
     222,   226,   223,     0,     0,   220,   210,     0,   288,   287,
       0,     0,     0,     0,     0,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,   508,   517,   476,   476,
     476,   476,   476,   501,   476,   498,     0,   476,   476,   476,
     479,   510,   479,   509,   476,   476,   476,     0,   479,   476,
     479,   500,   507,   499,   518,     0,     0,   502,   370,     0,
       0,     0,     0,     0,     0,     0,     0,   522,   250,     0,
     167,     0,   154,   249,   364,   366,   254,     0,     0,     0,
     359,     0,     0,     5,    45,    48,     0,    42,     0,     0,
     140,     0,     0,     0,     0,   126,   124,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,   121,     0,     0,    19,    21,    22,    20,   146,   144,
      40,     0,    38,   115,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    29,    23,    24,    26,    12,    13,
      14,    15,    16,    17,    25,   199,   154,   196,   282,   281,
     201,     0,     0,     0,   206,   239,   209,     0,   154,   203,
     220,   220,     0,   213,     0,   221,     0,   208,     0,     0,
       0,     0,   304,   301,   307,   303,   443,     0,     0,     0,
       0,   305,     0,   505,   481,   487,   484,   481,   481,     0,
     481,   481,   481,   480,   484,   484,   481,   481,   481,     0,
     484,   481,   484,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   523,   524,     0,
     441,   393,   211,   155,     0,   173,   154,   246,   248,     0,
     321,   332,     0,     0,   320,   321,     0,   321,     0,    59,
       0,   138,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,    85,     0,     0,     0,    89,    90,
      91,    93,     0,     0,    95,     0,    98,    99,   100,     0,
       0,     0,     0,     0,     0,    66,    60,    61,    62,    63,
      64,    65,    75,    76,    77,     0,     0,     0,   122,     0,
      41,    39,     0,     0,   147,   145,    51,     0,     0,    36,
      32,    34,     0,   156,     0,   234,   236,   236,   236,     0,
       0,     0,   167,   224,   225,     0,     0,   227,     0,     0,
       0,     0,     0,   443,   443,     0,   315,   443,   310,     0,
       0,     0,   493,   503,   495,   497,   519,     0,   496,   492,
     491,   514,   513,   490,   494,   489,     0,   511,   488,   512,
       0,     0,   372,     0,   371,     0,   270,     0,     0,     0,
       0,     0,   272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   522,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,   241,   251,     0,
       0,     0,   341,   331,     0,     0,   321,   348,   321,   349,
      46,   142,     0,   141,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,   165,   283,   207,     0,     0,
       0,     0,   355,     0,     0,   173,   216,   214,     0,     0,
     212,   228,     0,     0,     0,     0,     0,   315,   315,   443,
       0,     0,   455,     0,   460,     0,     0,     0,     0,     0,
     316,   464,   445,     0,   462,   312,   315,   302,   309,   477,
       0,   482,   483,     0,     0,   484,     0,   484,   484,   506,
       0,     0,     0,     0,     0,     0,     0,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     441,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   381,   441,     0,   521,   160,   160,   168,   169,   174,
     343,   342,     0,     0,   333,   338,   337,     0,   335,   319,
     347,   139,   143,     0,    70,    69,     0,    74,     0,     0,
     127,   128,   103,    81,    82,     0,     0,    86,    87,    88,
      92,    94,    96,   110,   111,   112,   113,     0,    67,    78,
       0,     0,    80,   123,    50,    54,     0,     0,    44,     0,
       0,     0,    31,     0,     0,   167,   235,     0,     0,     0,
       0,     0,     0,   351,   229,     0,   215,     0,     0,     0,
     439,     0,   306,   314,   315,   444,   317,     0,     0,     0,
       0,     0,     0,   465,   446,   447,   449,   448,   453,     0,
       0,     0,     0,   463,   461,   311,     0,     0,   486,   515,
     520,   516,   504,     0,   373,     0,     0,     0,     0,     0,
     271,     0,   264,     0,     0,     0,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,     0,     0,     0,   379,   392,   400,
     443,   161,   162,   171,   172,     0,     0,     0,     0,     0,
     334,     0,     0,     0,     0,    73,   130,   131,   132,   133,
     136,   135,   137,   129,   134,     0,     0,     0,     0,     0,
      52,    56,    37,    33,    35,   160,   163,   166,   173,   237,
       0,     0,     0,   356,   357,     0,     0,   295,   417,     0,
     415,     0,   296,     0,   313,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,   478,   485,     0,
     260,   273,   274,   275,     0,     0,     0,     0,   257,     0,
       0,   266,     0,     0,     0,   381,     0,     0,     0,     0,
     407,     0,     0,     0,   404,     0,   403,     0,   413,     0,
       0,     0,   442,   170,   176,   175,   322,   345,   344,   340,
     339,     0,    71,    68,    83,    84,   114,   116,     0,    79,
     158,     0,     0,   157,   177,   233,     0,   232,   231,     0,
     230,     0,     0,     0,   300,     0,   440,   457,     0,   475,
     459,     0,     0,     0,   468,   466,   450,   451,   452,   454,
     374,     0,   268,   265,     0,   262,     0,     0,     0,   259,
     380,   394,     0,     0,     0,     0,     0,   405,   406,   185,
     401,   383,     0,     0,     0,     0,     0,   164,   160,     0,
     182,   238,   358,   298,     0,   418,   416,     0,   473,   474,
       0,     0,     0,   276,   261,   269,   267,     0,   408,     0,
       0,   414,     0,   382,     0,     0,     0,     0,   336,   117,
     159,   179,   178,     0,   153,     0,   456,   458,   472,   469,
     263,     0,   402,     0,   384,   385,     0,     0,     0,     0,
     183,     0,   470,   471,     0,     0,     0,     0,     0,   181,
     180,   419,     0,     0,     0,     0,     0,     0,   421,     0,
       0,     0,     0,   421,     0,     0,   297,   420,     0,     0,
       0,   409,     0,     0,   388,   386,     0,   435,     0,     0,
       0,   421,   421,     0,     0,   387,     0,   436,   299,     0,
     432,   434,   433,     0,     0,     0,   411,   410,     0,   389,
     437,   438,   422,   430,   424,     0,   426,   431,   428,     0,
     421,     0,   425,   423,   429,   427,   412,     0,     0,     0,
       0,     0,     0,     0,   390,   391
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   424,   692,   831,   832,   830,   425,   426,   682,
     826,   683,   827,   433,   439,   801,   248,    16,    17,   410,
     835,  1106,  1073,  1193,   985,   605,   927,   928,   777,  1250,
    1284,  1063,    57,   186,   187,   328,   193,   194,   195,   347,
     196,   344,   546,   345,   542,   850,   851,   534,   839,  1110,
     197,    18,    44,    83,   226,    19,    20,   751,   752,    21,
      22,   529,    65,    23,    24,    25,   875,    26,   782,    49,
      96,   419,   612,   786,  1082,   937,   610,    27,    28,    60,
     538,    29,    69,    30,    31,    32,  1067,  1333,  1334,    43,
     771,   772,  1121,  1119,  1312,  1326,  1001,   773,   716,   563,
     574,   722,   723,   398,   727,   601,   602,    33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1014
static const yytype_int16 yypact[] =
{
    4265,   -36,   -25,   387, -1014,   261, -1014,   -20,   152, -1014,
      19, -1014,   157,    13,    68,   333,    80, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014,   440,   492,   379,   497,    56,   379,
   -1014,   287,   427,   320,    29,    61,   511,    65,    66,   392,
     544,   550,   392,    52,    62,   299, -1014,   608,   559,   436,
      14, -1014,   565, -1014,  4265,   268,   296,   306,   372,   575,
     546,   460,    72,   407,   618, -1014,   276,   379,   363,   624,
   -1014, -1014, -1014,   -68, -1014,   435, -1014, -1014,   454, -1014,
     480, -1014, -1014, -1014, -1014, -1014,   656, -1014,   540,   696,
    2361,  2361, -1014, -1014,   721,    84, -1014, -1014, -1014, -1014,
     727,  2361,  2361,  2361, -1014, -1014, -1014,  1232, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014,   499,   506,
     509,   520,   534,   588,   615,   626,   641,   662,   665,   668,
     674,   705,   737,   748,   753,   755,   768,   810,   838,   846,
     847,   848,   849,   850,   851,   853,   855,   856,   857,   858,
     859,   860,   863,   866,   867,   868,   869,   870,   871,   873,
     874,   875,   876,   877,   878,   879,   880,   882,   883,   887,
     888,   890,   891,   896,  2361,  4620,   -29, -1014,   607,    16,
      18,    21,    11,  -122,   431, -1014, -1014,   841, -1014, -1014,
     909,   923, -1014, -1014,   282,   388,  1108,   438,  1111,   429,
     447,  1112,   922, -1014, -1014,  4392,  1166,  1023,   961,  1169,
   -1014,  1026,   131,  1002,  1211,  1206, -1014,   305,    95,    14,
    1230,  1238,  1240,  1241,  -100,  1242,   103,  4714,  4714, -1014,
    1243,  2361,  2361,  1765,  1765, -1014,  2361,  1042,   222, -1014,
    2361,   964,  2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,
    2361,   977,  2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,
    2361,  2361,  2361,  2361,  2361,  2361,  2361,   980,  2361,  2361,
    2361,   981,  2361,  2361,  2361,  2361,  2361,  2361,  1365,  2361,
    2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,  2361,   982,
     983,   984,   985,  2361,  2361,  1718, -1014,  2361,  2361,  2361,
    2361,  2361,    24,  1009,   535,  2361,  1097,  2361,  2361,  2361,
    2361,  2361,  2361,  2361,  2361,  2361,  2361,  1277, -1014,    14,
    2361,  1278,  1279,   241,  1012,    87,  1281,    14, -1014, -1014,
   -1014,   195, -1014,    14,  1161,  1140, -1014,  1284, -1014, -1014,
    1285,  1287,  1288,  1289,  1292, -1014,  1293,  1296,  1297,  4392,
    1298,  1124,  1300,  1301,  1302, -1014, -1014, -1014,  1036,  1036,
    1036,  1036,  1036, -1014,  1036, -1014,  1075,  1036,  1036,  1036,
    1295, -1014,  1295, -1014,  1036,  1036,  1036,  1095,  1295,  1036,
    1295, -1014, -1014, -1014, -1014,  1096,  1104, -1014,   368,  -127,
    1372,  1373,  1231,  1376,  1233,  1171,  1381,   160, -1014,  2361,
    1237,    14,   118,   363, -1014, -1014, -1014,  1383,  1384,   258,
   -1014,  1383,   316, -1014,   736, -1014,  1117,  4714,  1653,   240,
   -1014,  2361,  2361,  1214,    73, -1014, -1014, -1014,  2902,  1633,
     787,  1021,  1248,  2935,  2977,  2998,  3019,  3040,  3061, -1014,
    1382,  1503,  1524,  1787,  3102,  1808,  2108,  2129,  3131,  3156,
    3189,    94,  2384,  3210,  2425, -1014,  3231,  3252,  3273, -1014,
    4644,  2446,  2467,  2622,  2647,  2848,  1128,  3294,  3315,  3336,
    3364,  3385,  3410,  3443,  3464,  2680,  2701,  2722, -1014, -1014,
   -1014, -1014,  3485,  2743, -1014,   972,  1543,  2042,  4732,  4732,
   -1014,    22, -1014, -1014,  1239,  2361,  2361,  1143,  2361,  4668,
    1145,  1146,  1147,  2361,   894,   934,   986,   611,   697,   697,
    1388,  1388,  1388,  1388, -1014, -1014,   118, -1014, -1014,  1148,
     449,  1294,  1299,  1303, -1014, -1014, -1014,     5,   136,   431,
    1140,  1140,  1305,  1274,    14, -1014,  1308, -1014,   248,  4392,
    4392,  1420, -1014, -1014, -1014, -1014, -1014,  4392,  1422,  1255,
    1256, -1014,  1421, -1014, -1014, -1014, -1014, -1014, -1014,  1431,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014,  1431,
   -1014, -1014, -1014,  1433,  1434,  1291,  1170,  2361,  1283,    48,
      90,  1333,  1438,   113,  1497,  1498,  1356, -1014, -1014,  1501,
     246, -1014,   841,  4714,  1454,  1375,   118, -1014, -1014,  1487,
    -113, -1014,   250,  1271, -1014,  -113,  1271,  1359,  2361, -1014,
    2361, -1014,  2361,  2320,  1981,  1342,  2361,  2361, -1014,  2361,
    1063,  1386,  1386,  2361, -1014, -1014, -1014, -1014, -1014, -1014,
    2361,  2361,  2361,  2361, -1014,  2361,  2361,  2361, -1014, -1014,
   -1014, -1014,  2361,  2361, -1014,  2361, -1014, -1014, -1014,  4392,
    4392,  2361,  2361,  2361,  1507, -1014, -1014, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,  2361,  2361,  2361, -1014,  2361,
   -1014, -1014,  2361,  1214,  4732,  4732,  1337,  4691,  2361, -1014,
   -1014, -1014,  1214,  1468,  1557,   241,  1510,  1510,  1510,  2361,
    1630,  1631,  1237, -1014, -1014,    14,  2361,   -65,    14,  1374,
    1517,  1518,  1377, -1014, -1014,  4392,  4270, -1014, -1014,  1642,
    1643,   285,   -51,   491,   -51,   -51, -1014,   321,   -51,   -51,
     -51,   491,   491,   -51,   -51,   -51,   328,   491,   -51,   491,
    1378,  1385,  1585,  2361,  4714,  1387, -1014,  1389,  1390,  1391,
    1392,   330, -1014,  1453,    48,  1650,   119,  1456,    48,   122,
    1523,  1681,   -83,  1682,  1416,  1562,   338,  1418,  1419,  1566,
    1423,   352, -1014,  1689,  1214,    74,  2361, -1014, -1014,  1697,
    1569,  1693, -1014, -1014,  1694,  1965,  -101, -1014,  -101, -1014,
   -1014,  4714,  4529, -1014,  2361, -1014,  2877,   391,  3506,  2361,
    2361,  1435,  1436,  3527,  3548,  3569,  2764,  2785,  3590,  3618,
    3639,  3664,  3697,  3718,  1437,  1439,  3739,  3760,  2806,  1440,
     459,  2827,  3781,  3802,  1441,  1442,  2361,  1214,  2361,   655,
    1214,  1214,  1214,  1445,  1658,  1606, -1014, -1014,  1594,  1449,
    1450,  1451,  4714,  1703,     6,  1375, -1014,  4714,  2361,  1455,
   -1014, -1014,   -65,  2361,  1457,  1479,  1721,  4270,  4270, -1014,
    1581,  1747,  1481,  1482,  1483,  1713,  1753,  1488,  1756,    33,
   -1014, -1014, -1014,  1632,  1636, -1014,  4270, -1014, -1014, -1014,
    1759, -1014, -1014,  1591,  1762, -1014,  1763, -1014, -1014, -1014,
    1499,  3823,    48,  1767,  1768,  1769,  1770, -1014,  1771,  1506,
     358,  1509,  1578,    48,  1511,   376,  1583,    48,  1777,   123,
     246, -1014,   271,  2361,  1534,  1555,  1570,  1838,  1838,  1611,
    1721,    17,   246,  4392, -1014,   425,   425,  1496, -1014,   513,
   -1014,  4714,  1692,  1881, -1014, -1014,  4714,   380, -1014, -1014,
   -1014, -1014,  4714,  2361, -1014, -1014,  2361, -1014,  3844,  4247,
   -1014, -1014, -1014, -1014, -1014,  2361,  2361, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014,  2361, -1014, -1014,
    2361,  2361, -1014, -1014, -1014, -1014,  1634,  1635,   655,  1674,
    1676,  1695, -1014,  2361,  2361,  1237, -1014,  1899,  1899,  1899,
    2361,  2361,  1901, -1014,  4714,  1838, -1014,  3872,  1962,  1971,
   -1014,   385, -1014, -1014,  4270, -1014, -1014,  1970,  2361,  1972,
    1935,   -14,  2361, -1014, -1014, -1014, -1014, -1014, -1014,  1708,
    1709,  1710,  2361, -1014, -1014, -1014,  1714,  1977, -1014,   491,
   -1014,   491,   491,  2361, -1014,   389,  1715,  1716,  1717,  1712,
   -1014,    48, -1014,    48,  1728,   395,    48, -1014,  1742,   397,
    1743,  1815,    48,   400,  1745,  1891,  1892,  1748,  3893,  1962,
    1838,  1838, -1014,   417,   442,  1971,   444,    -3, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,    74,  2361,  2361,  1383,  2029,
   -1014,  2297,  1749,  3918,  3951, -1014, -1014, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,  3972,  3993,  4014,   682,  4035,
   -1014, -1014, -1014, -1014, -1014,  4590,   -81,  4714,  1375, -1014,
     461,   463,   467,  4714,  4714,  2000,   469,  2003, -1014,   473,
   -1014,   496, -1014,  2020, -1014,   501,  4056,   503,  1754,  1755,
    1903, -1014,  4077,  1758,  1772,  1773,  4098, -1014, -1014,  4126,
   -1014, -1014, -1014, -1014,  2023,   510,   512,    48, -1014,   515,
      48, -1014,    48,  1775,   517,    17,  2361,  1778,  1779,  1721,
   -1014,   521,   605,   609, -1014,  2035, -1014,   612, -1014,   323,
    2036,  1989,  4274, -1014,  4714,  4714,  1780, -1014,  4714, -1014,
    4714,  1965, -1014, -1014, -1014, -1014, -1014, -1014,  2361, -1014,
   -1014,  1882,  2361, -1014,  1937, -1014,  2047, -1014, -1014,  2361,
   -1014,  1853,  1917,  2071, -1014,  2072, -1014, -1014,  2073,   673,
   -1014,  2074,  2361,  2361, -1014, -1014, -1014, -1014, -1014, -1014,
   -1014,  1805, -1014, -1014,   616, -1014,   619,   632,    48, -1014,
      -3, -1014,  4147,  1962,  1971,   634,  1921, -1014, -1014, -1014,
   -1014, -1014,  2076,    -4,   162,   657,  4172, -1014,  4590,   148,
    1961, -1014,  4714, -1014,  2080, -1014, -1014,  1813, -1014, -1014,
    1814,  4205,  4226, -1014, -1014, -1014, -1014,   659, -1014,   671,
     677, -1014,  2084, -1014,  2085,  2086,  1820,  1822, -1014, -1014,
   -1014,  1926,  1929,  1838, -1014,  1827, -1014, -1014,   747, -1014,
   -1014,  1942, -1014,   704, -1014, -1014,  2096,  2097,  1969,  1973,
    1830,  2100, -1014, -1014,  2101,  2103,  2100,  1836,  1837, -1014,
   -1014, -1014,   706,   710,  1839,   732,  1841,  1947, -1014,  2110,
    2111,  2100,  2100, -1014,  1952,  2112,   290, -1014,  1855,   734,
     756,   312,  2143,   824, -1014, -1014,   -27,  2048,   273,   177,
    2100, -1014, -1014,  2088,  1960, -1014,  1952, -1014, -1014,   355,
   -1014, -1014, -1014,    -6,    -2,   826,   312,   312,  2037, -1014,
   -1014, -1014, -1014, -1014, -1014,   293, -1014, -1014, -1014,   348,
   -1014,  1982, -1014, -1014, -1014, -1014,   312,    27,  2017,  2019,
    2025,  2026,  2165,  2166, -1014, -1014
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1014,  2109,   -57, -1014, -1014, -1014, -1014,  -571, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,  1540,  1966, -1014,  -177,  -362,
   -1014, -1014,  -917, -1014, -1014,  -692, -1014,  1158,  -823, -1014,
   -1014,  -914, -1014, -1014,  1885,  -186,  -163,  1897,  -320,  1675,
   -1014, -1014,   566, -1014, -1014, -1014,  1427,  1541,   413,   124,
   -1014, -1014, -1014,  2158,  1825, -1014, -1014,  -752, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014,  -722, -1014,  -487,    54,
    2245,  2062, -1014,  1690, -1014,  1126,  -420, -1014, -1014, -1014,
   -1014, -1014,   422, -1014, -1014, -1014,  1153, -1014,   963, -1014,
    1400,  1394,  -936, -1013,  -712,  -762,  -879, -1014,  -706,   523,
     129,   369,  -562,  -279,  1732,  -759, -1014, -1014, -1014,  2208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -523
static const yytype_int16 yytable[] =
{
     185,   615,   900,   911,  1064,   333,   905,   857,   858,  1074,
     845,   876,   731,   732,   191,   334,  -352,   191,   737,  -354,
     739,  -353,   993,   543,   306,   699,   991,    53,   680,   335,
     500,  1378,    78,   597,   229,  1169,   780,  1014,  1015,  1016,
    1017,  1066,   501,   237,   238,  1347,  1161,   790,   780,  1129,
     607,   746,   336,  1362,   243,   244,   245,  1366,  -522,    71,
     247,   100,   327,    52,    84,   102,   412,    59,    87,    89,
     588,    61,   101,   329,   417,   217,  1274,   925,   598,   926,
     556,  1116,   848,   307,   308,   309,   310,   311,   312,   313,
    1018,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   824,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,  1191,    72,   305,   787,  1167,
     789,    79,   849,   597,   404,  1002,  1003,  1130,  1363,    62,
    1035,   881,  1367,   589,  1170,    80,  1162,  1163,   103,    34,
     337,  1045,  1364,  1004,  1025,  1049,  1368,    81,   882,   781,
      35,  1171,  1068,  1379,   693,    50,   526,   681,  1365,   502,
     418,   938,  1369,  1348,    73,   626,   702,  1275,   598,    85,
    1131,    82,    54,    88,    90,   427,    11,   910,  1190,   428,
     218,  1192,  -522,   434,   438,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   230,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
    1269,   466,   467,   468,   707,   470,   471,   472,   473,   474,
     475,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   614,   330,   778,   617,   492,   493,   606,   405,
     495,   496,   497,   498,   499,   976,   625,  1353,   509,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     713,   714,   503,   185,   700,   992,   597,   421,   717,   221,
    1235,   192,  1124,  -352,   192,  1194,  -354,   753,  -353,  1145,
     332,  1146,   411,  1108,  1149,  1019,  1020,  1021,  1270,   939,
    1154,   940,   763,  1022,   747,   748,   749,   750,  1336,   764,
     757,   709,   200,   201,  1281,  1276,   902,   430,   431,   906,
    1051,   598,   409,  1029,   540,  1031,  1032,   202,  1241,   204,
    1343,  1280,    45,    63,  1054,   621,   622,    51,   350,  1282,
     409,   531,    58,  1242,   695,   627,   222,   765,    64,   710,
     766,   351,   603,   240,   241,   541,   205,   532,   536,   337,
     754,  1277,  1337,   767,  1172,   651,   652,   230,  1354,  1300,
     206,   768,  1055,   418,   623,   624,  1350,   207,    46,  1372,
     814,   815,   630,   758,  1337,   846,   585,   208,   852,   903,
     337,   352,   907,  1052,   223,  1224,  1231,   769,  1226,   711,
    1227,   307,   308,   309,   310,   311,   312,   313,   701,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,  1056,  1351,    47,  1338,   203,   432,  1360,   599,
     600,   586,   359,    11,  1374,   209,   859,  1339,  1373,   533,
     770,   355,   712,    66,  1352,   432,    48,  1338,   684,   685,
     361,   687,   306,   210,   587,   915,   305,   353,    36,  1339,
     613,    74,    37,   916,  1071,  1057,    75,  1361,    91,   307,
     308,   309,   310,   311,   312,   313,  1267,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    11,   338,  1375,   356,    67,   211,    68,   360,   224,
      70,    92,  -249,   362,    38,    77,   825,   357,    93,   409,
    1072,   575,    91,    94,    86,   833,   363,   580,   616,   582,
      95,   783,   784,   307,   308,   309,   310,   311,   312,   313,
     744,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,    76,    92,   339,    97,   505,   506,
      39,   507,   189,    98,   508,  -217,   879,   880,   883,   884,
     340,  1331,   188,   791,   190,   792,    40,    41,   198,   796,
     797,   104,   798,   341,   225,   212,   803,  -249,   214,  1356,
    1357,    42,   213,   804,   805,   806,   807,   215,   808,   809,
     810,   342,   885,   886,  1315,   811,   812,   924,   813,   887,
     886,   897,   898,   343,   816,   817,   818,   216,  1376,  1329,
    1330,   105,   106,   107,   108,   109,   110,   219,   820,   821,
     822,   220,   823,   921,   922,   111,   112,   227,  1355,  1042,
     898,   829,   225,   113,   114,   320,   321,   322,   323,   324,
     325,   326,   842,   115,  1070,   231,  1076,  1047,   898,   847,
     977,  1080,  1081,   979,   980,   981,  1122,  1123,  1176,   234,
    1140,   898,   945,   946,   232,   116,  1148,   898,  1151,   898,
     117,  1155,   922,   118,   119,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   891,   120,  1164,  1165,
     233,   121,   307,   308,   309,   310,   311,   312,   313,   236,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,  1166,  1165,  1168,  1123,   122,   235,   929,
    1258,  1259,   931,   322,   323,   324,   325,   326,   936,    53,
     969,   970,  1195,  1196,  1197,  1196,   242,   942,  1198,  1196,
    1200,  1165,   948,   949,  1202,  1203,   307,   308,   309,   310,
     311,   312,   313,   123,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,  1204,  1205,   249,
     124,   978,  1207,  1208,  1210,  1211,   250,   125,   126,   251,
     127,  1222,   898,  1223,   898,  1077,  1225,   898,  1229,   898,
     252,   994,  1236,  1203,  1302,  1303,   997,   307,   308,   309,
     310,   311,   312,   313,   253,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,  1058,   166,   254,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,  1237,  1165,   184,   331,
    1238,  1165,   346,  1240,  1205,   255,  1083,  1264,   898,  1084,
    1265,   898,   564,   565,   566,   567,   256,   568,  1095,  1096,
     570,   571,   572,  1266,   898,  1271,  1123,   576,   577,   578,
    1097,   257,   581,  1098,  1099,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   365,  1105,  1107,  1278,  1081,
    1290,   898,   258,  1113,  1114,   259,   724,   725,   260,   728,
     729,   730,  1291,  1203,   261,   733,   734,   735,  1292,  1205,
     738,  1126,   348,  1187,  1188,  1132,   318,   319,   320,   321,
     322,   323,   324,   325,   326,  1136,   349,   105,   106,   107,
     108,   109,   110,  1305,  1306,   262,  1139,  1318,  1319,  1320,
    1321,   111,   112,   308,   309,   310,   311,   312,   313,   113,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,  1323,  1319,  1341,  1319,   263,   618,   319,
     320,   321,   322,   323,   324,   325,   326,   435,   264,  1174,
    1175,   116,  1178,   265,  1180,   266,   117,  1342,  1319,   118,
     119,   307,   308,   309,   310,   311,   312,   313,   267,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   631,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     268,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   436,  1345,  1346,  1370,  1319,  1232,
     105,   106,   107,   108,   109,   110,   703,   704,   269,   123,
     840,   841,  1111,  1112,   111,   112,   270,   271,   272,   273,
     274,   275,   113,   276,   936,   277,   278,   279,   280,   281,
     282,  1246,   510,   283,   511,  1248,   284,   285,   286,   287,
     288,   289,  1252,   290,   291,   292,   293,   294,   295,   296,
     297,   437,   298,   299,   116,  1261,  1262,   300,   301,   117,
     302,   303,   118,   119,   354,   799,   304,   358,   364,   399,
     400,   401,   402,   403,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   406,   166,   407,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   408,   413,   184,   105,   106,   107,   108,   109,
     110,   414,   123,   415,   416,   420,   423,   246,   449,   111,
     112,   465,   469,   488,   489,   490,   491,   113,   307,   308,
     309,   310,   311,   312,   313,   512,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   504,
     525,   528,   530,   535,   537,   544,   545,   547,   548,   116,
     549,   550,   551,   632,   117,   552,   553,   118,   119,   554,
     555,   557,   558,   559,   560,   561,   562,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   569,   166,   573,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   579,   583,   513,   105,   106,
     107,   108,   109,   110,   584,   590,   591,   123,   592,   593,
     594,   595,   111,   112,   596,   604,   609,   611,   619,    11,
     113,   476,   307,   308,   309,   310,   311,   312,   313,   666,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   686,   -53,   689,   690,   691,   326,   696,
     694,   706,   116,   715,   697,   718,   721,   117,   698,   705,
     118,   119,   708,   719,   720,   726,   742,   246,   740,   741,
     743,   756,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     755,   166,   745,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     759,   760,   184,   761,   762,   775,   776,   779,   780,   800,
     123,   819,   -55,   307,   308,   309,   310,   311,   312,   313,
     633,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   785,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   309,   310,   311,   312,   313,
     836,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   834,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   795,   166,   838,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   843,   844,   184,   105,   106,   107,   108,
     109,   110,   854,   855,   853,   877,   878,   856,   890,   888,
     111,   112,   899,   901,   640,   904,   889,   892,   113,   893,
     894,   895,   896,   307,   308,   309,   310,   311,   312,   313,
     908,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   909,   912,   913,   914,   917,   918,
     116,   919,   923,   920,   932,   117,   933,   934,   118,   119,
     105,   106,   107,   108,   109,   110,   950,   951,   963,   983,
     964,   968,   974,   975,   111,   112,   982,   984,   986,   987,
     988,   989,   113,   990,  1000,   995,  1005,   998,   307,   308,
     309,   310,   311,   312,   313,   629,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   999,
    1006,  1007,  1008,  1009,   116,  1010,  1011,  1023,  1012,   117,
    1013,  1024,   118,   119,  1026,  1027,  1028,  1030,  1075,  1033,
    1036,  1037,  1038,  1039,  1040,   641,  1041,  1044,   123,  1043,
    1050,  1046,  1048,   930,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   642,   307,   308,   309,
     310,   311,   312,   313,  1059,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,  1060,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   620,
    1061,  1062,   123,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,  1065,   166,  1078,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,  1079,  1109,   184,  1115,  1100,  1101,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,  1102,   166,  1103,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,  1118,  1104,   184,   105,   106,
     107,   108,   109,   110,  1120,  1125,  1128,  1127,  1133,  1134,
    1135,  1138,   111,   112,  1144,  1137,  1141,  1142,  1143,   494,
     113,   307,   308,   309,   310,   311,   312,   313,  1147,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,  1150,  1152,  1153,  1156,  1157,  1158,  1159,  1181,
    1199,  1201,   116,  1206,  1212,  1213,  1221,   117,  1214,  1216,
     118,   119,   105,   106,   107,   108,   109,   110,  1239,  1243,
    1244,  1247,  1249,  1217,  1218,  1228,   111,   112,  1233,  1234,
    1251,   935,   781,  1253,   113,   310,   311,   312,   313,   643,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,  1254,  1255,  1256,  1263,  1272,  1257,  1260,
     645,  1273,  1283,  1285,  1286,  1287,   116,  1293,  1294,  1295,
    1296,   117,  1297,  1298,   118,   119,  1299,  1301,  1304,  1307,
    1308,  1309,  1165,  1311,  1313,  1310,  1314,  1316,  1317,  1322,
     123,  1324,  1325,  1327,  1328,  1177,  1332,  1335,   307,   308,
     309,   310,   311,   312,   313,  1340,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,  1344,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
    1347,  1349,  1358,  1371,  1380,  1377,  1381,   794,  1382,  1383,
    1384,  1385,   802,   199,   123,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   429,   166,   527,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,  1173,   539,   184,   837,   228,   608,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   774,   166,   996,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    99,   422,   184,
     105,   106,   107,   108,   109,   110,   788,  1245,  1230,  1359,
    1053,   736,   239,     0,   111,   112,  1069,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,     0,   116,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
     646,     0,     0,  1179,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,   307,   308,   309,   310,   311,   312,
     313,   647,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   793,     0,     0,   116,     0,
       0,     0,     0,   117,     0,     0,   118,   119,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,   310,   311,
     312,   313,   123,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,     0,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,     0,     0,     0,     0,   123,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,     0,   166,     0,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,     0,   184,     0,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,     0,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,     0,
       0,   184,   307,   308,   309,   310,   311,   312,   313,     0,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,   653,   307,   308,   309,
     310,   311,   312,   313,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,   655,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   660,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   661,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
       0,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,     0,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,     0,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   308,   309,
     310,   311,   312,   313,   662,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,   663,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,   310,   311,
     312,   313,   675,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
       0,     0,     0,   676,     0,     0,     0,     0,     0,     0,
       0,     0,   943,     0,     0,     0,     0,   307,   308,   309,
     310,   311,   312,   313,   677,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,   679,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   955,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,   956,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   967,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,     0,     0,     0,     0,     0,   664,   971,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,   665,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   944,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,     0,     0,     0,   307,   308,   309,   310,
     311,   312,   313,   628,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   307,
     308,   309,   310,   311,   312,   313,   634,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   635,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   636,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     637,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   638,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,   639,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,     0,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,     0,     0,     0,
       0,     0,     0,   644,   307,   308,   309,   310,   311,   312,
     313,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,   648,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,   649,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,   308,   309,   310,   311,   312,   313,
     650,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   654,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,   656,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,   657,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,   658,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,   667,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   668,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,   669,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,     0,     0,     0,     0,     0,   307,   308,
     309,   310,   311,   312,   313,   670,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   671,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
       0,     0,     0,     0,   307,   308,   309,   310,   311,   312,
     313,   672,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   308,   309,
     310,   311,   312,   313,   673,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,   674,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   678,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,   947,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   952,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   953,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     954,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   957,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,   958,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     959,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,     0,   307,   308,
     309,   310,   311,   312,   313,   960,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   961,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   962,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     965,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   966,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,   972,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,   973,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,  1034,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,  1085,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   310,
     311,   312,   313,  1117,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,  1160,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,  1182,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,   310,   311,
     312,   313,  1183,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,  1184,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,  1185,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,     0,     0,     0,  1186,     0,     0,   860,     0,
       0,     0,   860,     0,     0,     0,     0,     1,     0,     0,
       0,     2,     0,     0,   861,     0,  1189,     0,   862,     0,
       0,   863,   862,   864,     0,   863,   865,   864,     0,     0,
     865,     0,     0,     3,  1086,  1087,   866,  1209,     0,  1088,
     866,  1089,     0,   867,   868,     0,     0,   867,   868,     0,
       0,     0,     0,     0,     0,     4,     5,     0,  1215,     0,
       0,     0,     0,     0,  1090,  1091,   869,  1092,     0,     0,
     869,     0,     0,     0,     0,     0,     0,     0,   870,  1219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   871,     0,  1220,     0,   871,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   872,     0,     0,  1268,   872,
       7,   873,     8,     0,     0,   873,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,   366,   367,  1279,   368,     0,   369,   370,     0,     0,
       0,     0,     0,    12,  1093,  1094,    13,     0,     0,   371,
       0,     0,     0,    14,   874,     0,     0,     0,   874,     0,
       0,     0,     0,     0,     0,     0,  1288,     0,     0,   372,
     373,   374,   375,     0,     0,     0,   376,     0,     0,     0,
       0,   377,     0,     0,     0,     0,     0,  1289,     0,     0,
       0,     0,     0,     0,     0,     0,   378,     0,     0,     0,
       0,     0,     0,     0,   379,     0,     0,     0,     0,   380,
       0,     0,     0,     0,     0,     0,   381,     0,     0,   382,
       0,     0,   383,   384,     0,     0,     0,     0,     0,   307,
     308,   309,   310,   311,   312,   313,   385,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
       0,     0,     0,     0,     0,   386,   387,     0,   388,   389,
       0,     0,     0,     0,   390,     0,   391,     0,     0,     0,
       0,   392,   393,     0,     0,     0,     0,   394,     0,     0,
       0,     0,     0,   395,     0,   396,     0,     0,     0,   397,
     307,   308,   309,   310,   311,   312,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,   306,   941,     0,     0,     0,     0,  1071,
     307,   308,   309,   310,   311,   312,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,     0,   307,   308,   309,   310,   311,   312,
     313,   327,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,  1072,     0,     0,   307,   308,
     309,   310,   311,   312,   313,   659,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   688,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,     0,   307,   308,   309,   310,   311,   312,
     313,   828,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,  -523,  -523,  -523,  -523,     0,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326
};

static const yytype_int16 yycheck[] =
{
      57,   421,   754,   762,   918,   191,   758,   713,   714,   926,
     702,   717,   574,   575,     3,   192,     3,     3,   580,     3,
     582,     3,   845,   343,     3,    20,    20,     8,     6,   192,
       6,     4,     3,   116,   102,    38,   149,     4,     5,     6,
       7,   920,    18,   100,   101,    72,  1059,   618,   149,    63,
     412,     3,   174,    59,   111,   112,   113,    59,    41,     3,
     117,     9,    41,     9,     3,     3,   229,    13,     3,     3,
     197,     3,    20,   102,   174,     3,    80,     3,   161,     5,
     359,   995,   147,    10,    11,    12,    13,    14,    15,    16,
      57,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   682,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   206,    70,   184,   615,  1065,
     617,   102,   197,   116,     3,   857,   858,   151,   144,    71,
     892,   192,   144,   270,   147,   116,  1060,  1061,    86,   185,
     272,   903,   158,   859,   876,   907,   158,   128,   209,   272,
     185,   164,   921,   136,   526,   185,   329,   145,   174,   145,
     270,   272,   174,   200,   118,   102,   538,   181,   161,   118,
     194,   152,   163,   118,   118,   242,   175,   270,  1105,   246,
     118,   272,   175,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   272,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
    1233,   278,   279,   280,   544,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   419,   272,   606,   422,   303,   304,   411,   118,
     307,   308,   309,   310,   311,   826,   433,    80,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     549,   550,   248,   330,   269,   269,   116,   174,   557,     3,
    1159,   270,  1004,   270,   270,  1108,   270,   197,   270,  1041,
     269,  1043,   197,   985,  1046,   262,   263,   264,  1234,   786,
    1052,   788,    56,   270,   256,   257,   258,   259,    18,    63,
     197,    63,    44,    45,   166,   153,   197,    95,    96,   197,
     197,   161,   204,   885,   129,   887,   888,    59,     5,    33,
      18,  1248,    71,     0,    63,    95,    96,   185,    56,   191,
     204,   100,   185,    20,   530,   272,    70,   101,   268,   101,
     104,    69,   409,   269,   270,   160,    60,   116,   271,   272,
     270,   199,    72,   117,  1070,   271,   272,   272,   191,  1283,
      74,   125,   101,   270,   431,   432,   103,    81,   117,    86,
     659,   660,   439,   270,    72,   705,    18,    91,   708,   270,
     272,     3,   270,   270,   118,  1147,  1155,   151,  1150,   151,
    1152,    10,    11,    12,    13,    14,    15,    16,   272,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   151,   150,   163,   135,   158,   205,    73,   269,
     270,    63,     3,   175,    86,   139,   715,   147,   145,   198,
     194,     3,   194,     3,   171,   205,   185,   135,   505,   506,
       3,   508,     3,   157,    86,   117,   513,    69,    71,   147,
     202,    39,    75,   125,    39,   194,   179,   112,    76,    10,
      11,    12,    13,    14,    15,    16,  1228,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      41,   175,    61,   145,    56,     3,   200,   118,    69,    77,
       3,   109,   197,    56,   117,   185,   683,    69,   116,   204,
      85,   382,    76,   121,     3,   692,    69,   388,   202,   390,
     128,   271,   272,    10,    11,    12,    13,    14,    15,    16,
     587,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   117,   109,   115,     3,    13,    14,
     163,    16,   116,     3,    19,   124,   271,   272,    67,    68,
     129,  1323,     3,   620,   128,   622,   179,   180,     3,   626,
     627,   272,   629,   142,   269,   269,   633,   272,     3,  1341,
    1342,   194,   210,   640,   641,   642,   643,    41,   645,   646,
     647,   160,   271,   272,  1306,   652,   653,   774,   655,   271,
     272,   271,   272,   172,   661,   662,   663,   147,  1370,  1321,
    1322,     3,     4,     5,     6,     7,     8,   210,   675,   676,
     677,     3,   679,   271,   272,    17,    18,     3,  1340,   271,
     272,   688,   269,    25,    26,    24,    25,    26,    27,    28,
      29,    30,   699,    35,   923,   210,   133,   271,   272,   706,
     827,   271,   272,   830,   831,   832,   271,   272,  1078,     3,
     271,   272,   271,   272,   210,    57,   271,   272,   271,   272,
      62,   271,   272,    65,    66,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   743,    79,   271,   272,
     210,    83,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   271,   272,   271,   272,   109,   178,   776,
      47,    48,   779,    26,    27,    28,    29,    30,   785,     8,
     271,   272,   271,   272,   271,   272,     9,   794,   271,   272,
     271,   272,   799,   800,   271,   272,    10,    11,    12,    13,
      14,    15,    16,   145,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   271,   272,   270,
     162,   828,   271,   272,   271,   272,   270,   169,   170,   270,
     172,   271,   272,   271,   272,   272,   271,   272,   271,   272,
     270,   848,   271,   272,    47,    48,   853,    10,    11,    12,
      13,    14,    15,    16,   270,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   913,   249,   270,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   271,   272,   270,   272,
     271,   272,    41,   271,   272,   270,   943,   271,   272,   946,
     271,   272,   369,   370,   371,   372,   270,   374,   955,   956,
     377,   378,   379,   271,   272,   271,   272,   384,   385,   386,
     967,   270,   389,   970,   971,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   983,   984,   271,   272,
     271,   272,   270,   990,   991,   270,   567,   568,   270,   570,
     571,   572,   271,   272,   270,   576,   577,   578,   271,   272,
     581,  1008,    43,   271,   272,  1012,    22,    23,    24,    25,
      26,    27,    28,    29,    30,  1022,    43,     3,     4,     5,
       6,     7,     8,   269,   270,   270,  1033,   271,   272,   269,
     270,    17,    18,    11,    12,    13,    14,    15,    16,    25,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   271,   272,   271,   272,   270,   272,    23,
      24,    25,    26,    27,    28,    29,    30,    53,   270,  1076,
    1077,    57,  1079,   270,  1081,   270,    62,   271,   272,    65,
      66,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   272,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   130,   271,   272,   271,   272,  1156,
       3,     4,     5,     6,     7,     8,   540,   541,   270,   145,
     697,   698,   988,   989,    17,    18,   270,   270,   270,   270,
     270,   270,    25,   270,  1181,   270,   270,   270,   270,   270,
     270,  1188,    35,   270,    37,  1192,   270,   270,   270,   270,
     270,   270,  1199,   270,   270,   270,   270,   270,   270,   270,
     270,   187,   270,   270,    57,  1212,  1213,   270,   270,    62,
     270,   270,    65,    66,    56,   102,   270,    56,    56,     3,
     147,   210,     3,   147,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   210,   249,     3,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,    26,     3,   270,     3,     4,     5,     6,     7,
       8,     3,   145,     3,     3,     3,     3,   205,   271,    17,
      18,   271,   271,   271,   271,   271,   271,    25,    10,    11,
      12,    13,    14,    15,    16,   168,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   270,
       3,     3,     3,   271,     3,   124,   146,     3,     3,    57,
       3,     3,     3,   272,    62,     3,     3,    65,    66,     3,
       3,     3,   178,     3,     3,     3,   270,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   270,   249,    52,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   270,   270,   270,     3,     4,
       5,     6,     7,     8,   270,     3,     3,   145,   147,     3,
     147,   210,    17,    18,     3,   148,     3,     3,   271,   175,
      25,    26,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   270,   175,   270,   270,   270,    30,   125,
     272,   147,    57,     3,   125,     3,     5,    62,   125,   124,
      65,    66,   124,   178,   178,     4,   145,   205,     5,     5,
     270,     3,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     147,   249,   199,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       3,     3,   270,   147,     3,    51,   131,    20,   149,   123,
     145,     4,   175,    10,    11,    12,    13,    14,    15,    16,
     272,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   270,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   106,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   271,   249,   105,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     3,     3,   270,     3,     4,     5,     6,
       7,     8,   125,   125,   270,     3,     3,   270,    63,   271,
      17,    18,   199,     3,   272,   199,   271,   270,    25,   270,
     270,   270,   270,    10,    11,    12,    13,    14,    15,    16,
     147,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,     3,   270,   125,   270,   270,
      57,   125,     3,   270,   125,    62,     3,     3,    65,    66,
       3,     4,     5,     6,     7,     8,   271,   271,   271,    51,
     271,   271,   271,   271,    17,    18,   271,   111,   124,   270,
     270,   270,    25,    20,     3,   270,   145,   270,    10,    11,
      12,    13,    14,    15,    16,   102,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   270,
       3,   270,   270,   270,    57,    42,     3,   125,   270,    62,
       4,   125,    65,    66,     5,   174,     4,     4,   272,   270,
       3,     3,     3,     3,     3,   272,   270,   199,   145,   270,
       3,   270,   199,    86,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   272,    10,    11,    12,
      13,    14,    15,    16,   270,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   270,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   186,
     270,     3,   145,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   270,   249,   191,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,    20,     3,   270,     3,   271,   271,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   271,   249,   271,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     3,   271,   270,     3,     4,
       5,     6,     7,     8,     3,     5,    41,     5,   270,   270,
     270,     4,    17,    18,   272,   271,   271,   271,   271,   271,
      25,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   270,   270,   199,   270,   125,   125,   270,   270,
      20,    18,    57,     3,   270,   270,     3,    62,   125,   271,
      65,    66,     3,     4,     5,     6,     7,     8,     3,     3,
      51,   159,   105,   271,   271,   270,    17,    18,   270,   270,
       3,    86,   272,   200,    25,    13,    14,    15,    16,   272,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   156,     3,     3,   271,   156,     5,     5,
     272,     5,   121,     3,   271,   271,    57,     3,     3,     3,
     270,    62,   270,   167,    65,    66,   167,   270,   156,     3,
       3,   132,   272,     3,     3,   132,     3,   271,   271,   270,
     145,   270,   165,     3,     3,    86,   164,     5,    10,    11,
      12,    13,    14,    15,    16,   270,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      72,   113,   202,   126,   147,   183,   147,   186,   143,   143,
       5,     5,   632,    64,   145,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   247,   249,   330,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,  1075,   337,   270,   695,    79,   413,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   602,   249,   852,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,    52,   236,   270,
       3,     4,     5,     6,     7,     8,   616,  1181,  1155,  1346,
     910,   579,   104,    -1,    17,    18,   922,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
     272,    -1,    -1,    86,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   272,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    95,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   145,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,    -1,   249,    -1,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,    -1,    -1,   270,    -1,    -1,
      -1,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,    -1,
     249,    -1,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,    -1,
      -1,   270,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,   272,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   272,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   272,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   272,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   272,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   272,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   272,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   272,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   272,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   272,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   272,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   272,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   250,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   271,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   271,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   271,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     271,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   271,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   271,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   271,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   271,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   271,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     271,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   271,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   271,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   271,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   271,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   271,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   271,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   271,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   271,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   271,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   271,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   271,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   271,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   271,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   271,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     271,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   271,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     271,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   271,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   271,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     271,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   271,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   271,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   271,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   271,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   271,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   271,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   271,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   271,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    18,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    34,    -1,   271,    -1,    38,    -1,
      -1,    41,    38,    43,    -1,    41,    46,    43,    -1,    -1,
      46,    -1,    -1,    58,    77,    78,    56,   271,    -1,    82,
      56,    84,    -1,    63,    64,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,   271,    -1,
      -1,    -1,    -1,    -1,   107,   108,    86,   110,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,   271,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,   271,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,   271,   145,
     155,   151,   157,    -1,    -1,   151,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    49,    50,   271,    52,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,   188,   207,   208,   191,    -1,    -1,    67,
      -1,    -1,    -1,   198,   194,    -1,    -1,    -1,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,   137,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   154,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,   177,
      -1,    -1,    -1,    -1,   182,    -1,   184,    -1,    -1,    -1,
      -1,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,    -1,    -1,   201,    -1,   203,    -1,    -1,    -1,   207,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,     3,    95,    -1,    -1,    -1,    -1,    39,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    85,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    41,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   198,   274,   290,   291,   324,   328,
     329,   332,   333,   336,   337,   338,   340,   350,   351,   354,
     356,   357,   358,   380,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   362,   325,    71,   117,   163,   185,   342,
     185,   185,   342,     8,   163,   381,   382,   305,   185,   342,
     352,     3,    71,     0,   268,   335,     3,     3,   118,   355,
       3,     3,    70,   118,   355,   179,   117,   185,     3,   102,
     116,   128,   152,   326,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   343,     3,     3,   343,
       9,    20,     3,    86,   272,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   249,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   270,   275,   306,   307,     3,   116,
     128,     3,   270,   309,   310,   311,   313,   323,     3,   274,
      44,    45,    59,   158,    33,    60,    74,    81,    91,   139,
     157,   200,   269,   210,     3,    41,   147,     3,   118,   210,
       3,     3,    70,   118,   355,   269,   327,     3,   326,   102,
     272,   210,   210,   210,     3,   178,     3,   275,   275,   382,
     269,   270,     9,   275,   275,   275,   205,   275,   289,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   275,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    41,   308,   102,
     272,   272,   269,   308,   291,   309,   174,   272,    61,   115,
     129,   142,   160,   172,   314,   316,    41,   312,    43,    43,
      56,    69,     3,    69,    56,     3,    56,    69,    56,     3,
      69,     3,    56,    69,    56,     3,    49,    50,    52,    54,
      55,    67,    87,    88,    89,    90,    94,    99,   114,   122,
     127,   134,   137,   140,   141,   154,   173,   174,   176,   177,
     182,   184,   189,   190,   195,   201,   203,   207,   376,     3,
     147,   210,     3,   147,     3,   118,   210,     3,    26,   204,
     292,   197,   309,     3,     3,     3,     3,   174,   270,   344,
       3,   174,   344,     3,   275,   280,   281,   275,   275,   289,
      95,    96,   205,   286,   275,    53,   130,   187,   275,   287,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   271,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   271,   275,   275,   275,   271,
     275,   275,   275,   275,   275,   275,    26,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   271,   271,
     271,   271,   275,   275,   271,   275,   275,   275,   275,   275,
       6,    18,   145,   248,   270,    13,    14,    16,    19,   275,
      35,    37,   168,   270,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,     3,   309,   307,     3,   334,
       3,   100,   116,   198,   320,   271,   271,     3,   353,   310,
     129,   160,   317,   311,   124,   146,   315,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   376,     3,   178,     3,
       3,     3,   270,   372,   372,   372,   372,   372,   372,   270,
     372,   372,   372,    52,   373,   373,   372,   372,   372,   270,
     373,   372,   373,   270,   270,    18,    63,    86,   197,   270,
       3,     3,   147,     3,   147,   210,     3,   116,   161,   269,
     270,   378,   379,   275,   148,   298,   309,   292,   327,     3,
     349,     3,   345,   202,   291,   349,   202,   291,   272,   271,
     186,    95,    96,   275,   275,   291,   102,   272,   271,   102,
     275,   272,   272,   272,   271,   271,   271,   271,   271,   271,
     272,   272,   272,   272,   271,   272,   272,   272,   271,   271,
     271,   271,   272,   272,   271,   272,   271,   271,   271,    41,
     272,   272,   272,   272,   250,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   272,   272,   272,   271,   272,
       6,   145,   282,   284,   275,   275,   270,   275,    40,   270,
     270,   270,   276,   292,   272,   308,   125,   125,   125,    20,
     269,   272,   292,   315,   315,   124,   147,   311,   124,    63,
     101,   151,   194,   376,   376,     3,   371,   376,     3,   178,
     178,     5,   374,   375,   374,   374,     4,   377,   374,   374,
     374,   375,   375,   374,   374,   374,   377,   375,   374,   375,
       5,     5,   145,   270,   275,   199,     3,   256,   257,   258,
     259,   330,   331,   197,   270,   147,     3,   197,   270,     3,
       3,   147,     3,    56,    63,   101,   104,   117,   125,   151,
     194,   363,   364,   370,   312,    51,   131,   301,   292,    20,
     149,   272,   341,   271,   272,   270,   346,   341,   346,   341,
     280,   275,   275,    95,   186,   271,   275,   275,   275,   102,
     123,   288,   288,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   376,   376,   275,   275,   275,     4,
     275,   275,   275,   275,   280,   291,   283,   285,    40,   275,
     279,   277,   278,   291,   106,   293,     3,   320,   105,   321,
     321,   321,   275,     3,     3,   298,   311,   275,   147,   197,
     318,   319,   311,   270,   125,   125,   270,   371,   371,   376,
      18,    34,    38,    41,    43,    46,    56,    63,    64,    86,
      98,   125,   145,   151,   194,   339,   371,     3,     3,   271,
     272,   192,   209,    67,    68,   271,   272,   271,   271,   271,
      63,   275,   270,   270,   270,   270,   270,   271,   272,   199,
     330,     3,   197,   270,   199,   330,   197,   270,   147,     3,
     270,   378,     3,   270,   125,   117,   125,   270,   270,   125,
     270,   271,   272,     3,   291,     3,     5,   299,   300,   275,
      86,   275,   125,     3,     3,    86,   275,   348,   272,   341,
     341,    95,   275,   105,   271,   271,   272,   271,   275,   275,
     271,   271,   271,   271,   271,   272,   272,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   272,   271,   271,
     272,   272,   271,   271,   271,   271,   280,   291,   275,   291,
     291,   291,   271,    51,   111,   297,   124,   270,   270,   270,
      20,    20,   269,   301,   275,   270,   319,   275,   270,   270,
       3,   369,   339,   339,   371,   145,     3,   270,   270,   270,
      42,     3,   270,     4,     4,     5,     6,     7,    57,   262,
     263,   264,   270,   125,   125,   339,     5,   174,     4,   375,
       4,   375,   375,   270,   271,   330,     3,     3,     3,     3,
       3,   270,   271,   270,   199,   330,   270,   271,   199,   330,
       3,   197,   270,   363,    63,   101,   151,   194,   275,   270,
     270,   270,     3,   304,   304,   270,   369,   359,   378,   364,
     376,    39,    85,   295,   295,   272,   133,   272,   191,    20,
     271,   272,   347,   275,   275,   271,    77,    78,    82,    84,
     107,   108,   110,   207,   208,   275,   275,   275,   275,   275,
     271,   271,   271,   271,   271,   275,   294,   275,   298,     3,
     322,   322,   322,   275,   275,     3,   304,   271,     3,   366,
       3,   365,   271,   272,   339,     5,   275,     5,    41,    63,
     151,   194,   275,   270,   270,   270,   275,   271,     4,   275,
     271,   271,   271,   271,   272,   330,   330,   270,   271,   330,
     270,   271,   270,   199,   330,   271,   270,   125,   125,   270,
     271,   366,   304,   304,   271,   272,   271,   365,   271,    38,
     147,   164,   371,   300,   275,   275,   349,    86,   275,    86,
     275,   270,   271,   271,   271,   271,   271,   271,   272,   271,
     295,   206,   272,   296,   301,   271,   272,   271,   271,    20,
     271,    18,   271,   272,   271,   272,     3,   271,   272,   271,
     271,   272,   270,   270,   125,   271,   271,   271,   271,   271,
     271,     3,   271,   271,   330,   271,   330,   330,   270,   271,
     359,   378,   275,   270,   270,   369,   271,   271,   271,     3,
     271,     5,    20,     3,    51,   348,   275,   159,   275,   105,
     302,     3,   275,   200,   156,     3,     3,     5,    47,    48,
       5,   275,   275,   271,   271,   271,   271,   330,   271,   366,
     365,   271,   156,     5,    80,   181,   153,   199,   271,   271,
     295,   166,   191,   121,   303,     3,   271,   271,   271,   271,
     271,   271,   271,     3,     3,     3,   270,   270,   167,   167,
     304,   270,    47,    48,   156,   269,   270,     3,     3,   132,
     132,     3,   367,     3,     3,   367,   271,   271,   271,   272,
     269,   270,   270,   271,   270,   165,   368,     3,     3,   367,
     367,   368,   164,   360,   361,     5,    18,    72,   135,   147,
     270,   271,   271,    18,     3,   271,   272,    72,   200,   113,
     103,   150,   171,    80,   191,   367,   368,   368,   202,   361,
      73,   112,    59,   144,   158,   174,    59,   144,   158,   174,
     271,   126,    86,   145,    86,   145,   368,   183,     4,   136,
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
#line 369 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 375 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 376 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 378 "parser/evoparser.y"
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
#line 396 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 404 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 412 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 418 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 425 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 426 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 427 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 428 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 429 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 430 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 431 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 432 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 433 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 434 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 435 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 436 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 437 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 438 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 439 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 440 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 441 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 443 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 448 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 449 "parser/evoparser.y"
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
#line 457 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 458 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 459 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 460 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 461 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 462 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 465 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 466 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 467 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 468 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 469 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 472 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 473 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 476 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 477 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 480 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 484 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 484 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 485 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 485 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 486 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 487 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 494 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 495 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 502 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 503 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 513 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 517 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 518 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 519 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 520 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 521 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 522 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 523 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 524 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 526 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 69:
#line 527 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 70:
#line 528 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 71:
#line 529 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 72:
#line 530 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 73:
#line 531 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 74:
#line 532 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 75:
#line 533 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 76:
#line 534 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 77:
#line 535 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 78:
#line 536 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 79:
#line 537 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 80:
#line 538 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 81:
#line 539 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 82:
#line 540 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 83:
#line 541 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 84:
#line 542 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 85:
#line 543 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 86:
#line 544 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 87:
#line 545 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 88:
#line 546 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 89:
#line 547 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 90:
#line 548 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 91:
#line 549 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 92:
#line 550 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 93:
#line 551 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 94:
#line 552 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 95:
#line 553 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 96:
#line 554 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 97:
#line 555 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 98:
#line 556 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 99:
#line 557 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 100:
#line 558 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 101:
#line 559 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 102:
#line 561 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 103:
#line 562 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 104:
#line 563 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 105:
#line 564 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 106:
#line 565 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 107:
#line 566 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 108:
#line 567 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 109:
#line 568 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 110:
#line 570 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 111:
#line 571 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 112:
#line 573 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 113:
#line 574 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 114:
#line 575 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 115:
#line 577 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 116:
#line 578 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 117:
#line 579 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 118:
#line 580 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 119:
#line 587 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 120:
#line 594 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 121:
#line 601 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 122:
#line 605 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 123:
#line 609 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 124:
#line 615 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 125:
#line 616 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 126:
#line 617 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 127:
#line 621 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 128:
#line 627 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 129:
#line 633 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 130:
#line 634 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 131:
#line 635 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 132:
#line 636 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 133:
#line 637 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 134:
#line 638 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 135:
#line 639 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 136:
#line 640 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 137:
#line 641 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 138:
#line 645 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 139:
#line 647 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 140:
#line 649 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 141:
#line 651 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 142:
#line 655 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 143:
#line 663 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 144:
#line 673 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 145:
#line 674 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 146:
#line 677 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 147:
#line 678 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 148:
#line 682 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 149:
#line 690 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 150:
#line 698 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 151:
#line 709 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 152:
#line 718 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 153:
#line 723 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 155:
#line 734 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 157:
#line 736 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 158:
#line 739 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 159:
#line 746 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 160:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 161:
#line 755 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 162:
#line 756 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 163:
#line 759 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 760 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 166:
#line 764 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 171:
#line 776 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 172:
#line 782 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 173:
#line 790 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 174:
#line 791 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 175:
#line 792 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 176:
#line 793 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 177:
#line 796 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 178:
#line 797 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 179:
#line 798 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 180:
#line 799 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 181:
#line 800 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 183:
#line 804 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 184:
#line 807 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 185:
#line 808 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 186:
#line 811 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 187:
#line 812 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 188:
#line 813 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 189:
#line 814 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 190:
#line 815 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 191:
#line 816 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 192:
#line 817 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 193:
#line 818 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 194:
#line 819 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 195:
#line 822 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 196:
#line 823 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 197:
#line 825 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 198:
#line 833 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 199:
#line 838 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 200:
#line 839 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 201:
#line 840 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 202:
#line 843 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 844 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 206:
#line 853 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 207:
#line 859 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 208:
#line 860 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 209:
#line 861 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 212:
#line 870 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 213:
#line 872 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 214:
#line 874 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 215:
#line 876 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 216:
#line 878 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 217:
#line 881 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 218:
#line 882 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 219:
#line 883 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 220:
#line 886 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 221:
#line 887 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 222:
#line 890 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 223:
#line 891 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 224:
#line 894 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 225:
#line 895 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 226:
#line 896 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 229:
#line 903 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 230:
#line 904 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 231:
#line 909 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 232:
#line 911 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 233:
#line 913 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 235:
#line 917 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 236:
#line 918 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 921 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 238:
#line 922 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 239:
#line 925 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 240:
#line 930 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 241:
#line 940 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 242:
#line 947 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 243:
#line 948 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 244:
#line 949 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 245:
#line 950 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 246:
#line 955 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 247:
#line 959 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 248:
#line 961 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 251:
#line 967 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 252:
#line 972 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 253:
#line 979 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 254:
#line 986 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 255:
#line 996 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 256:
#line 1003 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 257:
#line 1010 "parser/evoparser.y"
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

  case 258:
#line 1020 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 259:
#line 1028 "parser/evoparser.y"
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

  case 260:
#line 1038 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 261:
#line 1046 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 262:
#line 1055 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 263:
#line 1064 "parser/evoparser.y"
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

  case 264:
#line 1074 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 265:
#line 1082 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 266:
#line 1091 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 267:
#line 1100 "parser/evoparser.y"
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

  case 268:
#line 1110 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 269:
#line 1119 "parser/evoparser.y"
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

  case 270:
#line 1131 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 271:
#line 1136 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 272:
#line 1141 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 273:
#line 1147 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 274:
#line 1154 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 275:
#line 1161 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 276:
#line 1168 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 277:
#line 1178 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 278:
#line 1185 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 279:
#line 1194 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 280:
#line 1201 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 281:
#line 1207 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 282:
#line 1215 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 283:
#line 1221 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 285:
#line 1229 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 286:
#line 1230 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 287:
#line 1231 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 288:
#line 1232 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 289:
#line 1237 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 290:
#line 1244 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 291:
#line 1253 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 292:
#line 1260 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 293:
#line 1266 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 294:
#line 1276 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 295:
#line 1280 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 296:
#line 1286 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 297:
#line 1292 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 298:
#line 1299 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 299:
#line 1305 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 300:
#line 1312 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 301:
#line 1318 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 302:
#line 1324 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 303:
#line 1330 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 304:
#line 1336 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 305:
#line 1342 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 306:
#line 1348 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 307:
#line 1354 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 308:
#line 1360 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 309:
#line 1366 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 310:
#line 1372 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 311:
#line 1378 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 312:
#line 1384 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 313:
#line 1390 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 314:
#line 1396 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 315:
#line 1403 "parser/evoparser.y"
    { ;}
    break;

  case 316:
#line 1404 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 317:
#line 1405 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 318:
#line 1409 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 319:
#line 1417 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 320:
#line 1423 "parser/evoparser.y"
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

  case 322:
#line 1436 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 323:
#line 1439 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1440 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 325:
#line 1441 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 326:
#line 1442 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 327:
#line 1443 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 331:
#line 1450 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 332:
#line 1454 "parser/evoparser.y"
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

  case 333:
#line 1464 "parser/evoparser.y"
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

  case 334:
#line 1476 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1477 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 336:
#line 1477 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 337:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 338:
#line 1481 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 339:
#line 1482 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 340:
#line 1483 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 341:
#line 1487 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 342:
#line 1490 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 343:
#line 1491 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1492 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 345:
#line 1493 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 346:
#line 1499 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 347:
#line 1505 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 348:
#line 1510 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 349:
#line 1515 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 350:
#line 1520 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 351:
#line 1529 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 352:
#line 1536 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 353:
#line 1537 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 354:
#line 1538 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 355:
#line 1543 "parser/evoparser.y"
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

  case 356:
#line 1554 "parser/evoparser.y"
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

  case 357:
#line 1566 "parser/evoparser.y"
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

  case 358:
#line 1577 "parser/evoparser.y"
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

  case 359:
#line 1592 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 360:
#line 1596 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 361:
#line 1600 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 362:
#line 1601 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 363:
#line 1606 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 364:
#line 1608 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 365:
#line 1610 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 366:
#line 1612 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 367:
#line 1615 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 368:
#line 1616 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 369:
#line 1622 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 370:
#line 1627 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 371:
#line 1629 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 372:
#line 1631 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 373:
#line 1633 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 374:
#line 1635 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 375:
#line 1639 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 376:
#line 1643 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 377:
#line 1644 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 378:
#line 1649 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 379:
#line 1659 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 380:
#line 1668 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 382:
#line 1672 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 383:
#line 1673 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 384:
#line 1674 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 385:
#line 1675 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 386:
#line 1677 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 387:
#line 1679 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 390:
#line 1687 "parser/evoparser.y"
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

  case 391:
#line 1702 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 392:
#line 1710 "parser/evoparser.y"
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

  case 393:
#line 1724 "parser/evoparser.y"
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

  case 394:
#line 1738 "parser/evoparser.y"
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

  case 395:
#line 1752 "parser/evoparser.y"
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

  case 396:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 397:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 398:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 399:
#line 1769 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 400:
#line 1770 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1773 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 402:
#line 1774 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 403:
#line 1775 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 404:
#line 1776 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 405:
#line 1777 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 406:
#line 1778 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 407:
#line 1779 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 408:
#line 1780 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 409:
#line 1782 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 410:
#line 1784 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 411:
#line 1786 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 412:
#line 1788 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 413:
#line 1790 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 414:
#line 1792 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 415:
#line 1795 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 416:
#line 1796 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 417:
#line 1799 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 418:
#line 1800 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 419:
#line 1803 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 420:
#line 1804 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 422:
#line 1808 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 423:
#line 1809 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 424:
#line 1810 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 425:
#line 1811 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 426:
#line 1812 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 427:
#line 1813 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 428:
#line 1814 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 429:
#line 1815 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 430:
#line 1816 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 431:
#line 1817 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 432:
#line 1818 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 433:
#line 1819 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 434:
#line 1820 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 435:
#line 1821 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 436:
#line 1822 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 437:
#line 1823 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 438:
#line 1824 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 439:
#line 1827 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 440:
#line 1828 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 441:
#line 1831 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 442:
#line 1833 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 443:
#line 1841 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 444:
#line 1842 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 446:
#line 1844 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 447:
#line 1845 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 448:
#line 1846 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 449:
#line 1847 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1848 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 451:
#line 1849 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 452:
#line 1850 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 453:
#line 1851 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 454:
#line 1852 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 455:
#line 1859 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 456:
#line 1860 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 457:
#line 1861 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 458:
#line 1862 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 459:
#line 1863 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 460:
#line 1864 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 461:
#line 1865 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 462:
#line 1866 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 463:
#line 1867 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 464:
#line 1868 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 465:
#line 1869 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 1870 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 467:
#line 1871 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 468:
#line 1872 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 469:
#line 1873 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 470:
#line 1874 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 471:
#line 1875 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 472:
#line 1876 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 473:
#line 1877 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 474:
#line 1878 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 475:
#line 1879 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 476:
#line 1882 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 477:
#line 1883 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 478:
#line 1884 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 479:
#line 1887 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 480:
#line 1888 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 481:
#line 1891 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 482:
#line 1892 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 483:
#line 1893 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 485:
#line 1897 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 486:
#line 1898 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 487:
#line 1902 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 488:
#line 1903 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 489:
#line 1904 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 490:
#line 1905 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 491:
#line 1906 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 492:
#line 1907 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 493:
#line 1908 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 494:
#line 1909 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 495:
#line 1910 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 496:
#line 1911 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 497:
#line 1912 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 498:
#line 1913 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 499:
#line 1914 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 500:
#line 1915 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 501:
#line 1916 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 502:
#line 1917 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 503:
#line 1918 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 504:
#line 1919 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 505:
#line 1920 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 506:
#line 1921 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 507:
#line 1922 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 508:
#line 1923 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 509:
#line 1924 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 510:
#line 1925 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 511:
#line 1926 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 512:
#line 1927 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 513:
#line 1928 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 514:
#line 1929 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 515:
#line 1930 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 516:
#line 1931 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 517:
#line 1932 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 518:
#line 1933 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 519:
#line 1936 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 520:
#line 1937 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 521:
#line 1941 "parser/evoparser.y"
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

  case 522:
#line 1953 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 523:
#line 1954 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 524:
#line 1955 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 525:
#line 1959 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 526:
#line 1962 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 527:
#line 1963 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 531:
#line 1967 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 532:
#line 1968 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6942 "parser/evoparser.tab.c"
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


#line 1971 "parser/evoparser.y"

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
