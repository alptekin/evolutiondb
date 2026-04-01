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
     USING = 442,
     USE = 443,
     HASH = 444,
     VALIDATE = 445,
     VARCHAR = 446,
     VALUES = 447,
     VARBINARY = 448,
     WHERE = 449,
     WHEN = 450,
     WITH = 451,
     YEAR = 452,
     YEAR_MONTH = 453,
     ZEROFILL = 454,
     EXISTS = 455,
     FSUBSTRING = 456,
     FTRIM = 457,
     FDATE_ADD = 458,
     FDATE_SUB = 459,
     FDATEDIFF = 460,
     FYEAR = 461,
     FMONTH = 462,
     FDAY = 463,
     FHOUR = 464,
     FMINUTE = 465,
     FSECOND = 466,
     FNOW = 467,
     FLEFT = 468,
     FRIGHT = 469,
     FLPAD = 470,
     FRPAD = 471,
     FREVERSE = 472,
     FREPEAT = 473,
     FINSTR = 474,
     FLOCATE = 475,
     FABS = 476,
     FCEIL = 477,
     FFLOOR = 478,
     FROUND = 479,
     FPOWER = 480,
     FSQRT = 481,
     FMOD = 482,
     FRAND = 483,
     FLOG = 484,
     FLOG10 = 485,
     FSIGN = 486,
     FPI = 487,
     FCAST = 488,
     FCONVERT = 489,
     FNULLIF = 490,
     FIFNULL = 491,
     FIF = 492,
     UNKNOWN = 493,
     FGROUP_CONCAT = 494,
     SEPARATOR = 495,
     FCOUNT = 496,
     FSUM = 497,
     FAVG = 498,
     FMIN = 499,
     FMAX = 500,
     FUPPER = 501,
     FLOWER = 502,
     FLENGTH = 503,
     FCONCAT = 504,
     FREPLACE = 505,
     FCOALESCE = 506,
     FGEN_RANDOM_UUID = 507,
     FGEN_RANDOM_UUID_V7 = 508,
     FSNOWFLAKE_ID = 509,
     FLAST_INSERT_ID = 510,
     FEVO_SLEEP = 511,
     FEVO_JITTER = 512
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
#define USING 442
#define USE 443
#define HASH 444
#define VALIDATE 445
#define VARCHAR 446
#define VALUES 447
#define VARBINARY 448
#define WHERE 449
#define WHEN 450
#define WITH 451
#define YEAR 452
#define YEAR_MONTH 453
#define ZEROFILL 454
#define EXISTS 455
#define FSUBSTRING 456
#define FTRIM 457
#define FDATE_ADD 458
#define FDATE_SUB 459
#define FDATEDIFF 460
#define FYEAR 461
#define FMONTH 462
#define FDAY 463
#define FHOUR 464
#define FMINUTE 465
#define FSECOND 466
#define FNOW 467
#define FLEFT 468
#define FRIGHT 469
#define FLPAD 470
#define FRPAD 471
#define FREVERSE 472
#define FREPEAT 473
#define FINSTR 474
#define FLOCATE 475
#define FABS 476
#define FCEIL 477
#define FFLOOR 478
#define FROUND 479
#define FPOWER 480
#define FSQRT 481
#define FMOD 482
#define FRAND 483
#define FLOG 484
#define FLOG10 485
#define FSIGN 486
#define FPI 487
#define FCAST 488
#define FCONVERT 489
#define FNULLIF 490
#define FIFNULL 491
#define FIF 492
#define UNKNOWN 493
#define FGROUP_CONCAT 494
#define SEPARATOR 495
#define FCOUNT 496
#define FSUM 497
#define FAVG 498
#define FMIN 499
#define FMAX 500
#define FUPPER 501
#define FLOWER 502
#define FLENGTH 503
#define FCONCAT 504
#define FREPLACE 505
#define FCOALESCE 506
#define FGEN_RANDOM_UUID 507
#define FGEN_RANDOM_UUID_V7 508
#define FSNOWFLAKE_ID 509
#define FLAST_INSERT_ID 510
#define FEVO_SLEEP 511
#define FEVO_JITTER 512




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
#line 665 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 678 "parser/evoparser.tab.c"

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
#define YYLAST   4866

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  272
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  532
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1386

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   512

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     269,   270,    26,    24,   271,    25,   268,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   267,
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
     264,   265,   266
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
     273,     0,    -1,   289,   267,    -1,   289,   267,   273,    -1,
       3,    -1,     3,   268,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   274,    24,
     274,    -1,   274,    25,   274,    -1,   274,    26,   274,    -1,
     274,    27,   274,    -1,   274,    28,   274,    -1,   274,    29,
     274,    -1,    25,   274,    -1,   269,   274,   270,    -1,   274,
      12,   274,    -1,   274,    10,   274,    -1,   274,    11,   274,
      -1,   274,    21,   274,    -1,   274,    22,   274,    -1,   274,
      30,   274,    -1,   274,    23,   274,    -1,    18,   274,    -1,
      17,   274,    -1,   274,    20,   274,    -1,    -1,   274,    20,
     269,   275,   290,   270,    -1,    -1,   274,    20,    37,   269,
     276,   290,   270,    -1,    -1,   274,    20,   168,   269,   277,
     290,   270,    -1,    -1,   274,    20,    35,   269,   278,   290,
     270,    -1,   274,    15,   145,    -1,   274,    15,    18,   145,
      -1,   274,    15,     6,    -1,   274,    15,    18,     6,    -1,
       8,     9,   274,    -1,   274,    19,   274,    40,   274,    -1,
     274,    18,    19,   274,    40,   274,    -1,   274,    -1,   274,
     271,   279,    -1,    -1,   279,    -1,    -1,   274,    16,   269,
     281,   279,   270,    -1,    -1,   274,    18,    16,   269,   282,
     279,   270,    -1,    -1,   274,    16,   269,   283,   290,   270,
      -1,    -1,   274,    18,    16,   269,   284,   290,   270,    -1,
      -1,   209,   269,   285,   290,   270,    -1,     3,   269,   280,
     270,    -1,   250,   269,    26,   270,    -1,   250,   269,   274,
     270,    -1,   251,   269,   274,   270,    -1,   252,   269,   274,
     270,    -1,   253,   269,   274,   270,    -1,   254,   269,   274,
     270,    -1,   248,   269,   274,   270,    -1,   248,   269,   274,
     249,     4,   270,    -1,   210,   269,   274,   271,   274,   271,
     274,   270,    -1,   210,   269,   274,   271,   274,   270,    -1,
     210,   269,   274,   102,   274,   270,    -1,   210,   269,   274,
     102,   274,   105,   274,   270,    -1,   211,   269,   274,   270,
      -1,   211,   269,   286,   274,   102,   274,   270,    -1,   211,
     269,   286,   102,   274,   270,    -1,   255,   269,   274,   270,
      -1,   256,   269,   274,   270,    -1,   257,   269,   274,   270,
      -1,   258,   269,   274,   271,   274,   270,    -1,   259,   269,
     274,   271,   274,   271,   274,   270,    -1,   260,   269,   274,
     271,   274,   270,    -1,   222,   269,   274,   271,   274,   270,
      -1,   223,   269,   274,   271,   274,   270,    -1,   224,   269,
     274,   271,   274,   271,   274,   270,    -1,   225,   269,   274,
     271,   274,   271,   274,   270,    -1,   226,   269,   274,   270,
      -1,   227,   269,   274,   271,   274,   270,    -1,   228,   269,
     274,   271,   274,   270,    -1,   229,   269,   274,   271,   274,
     270,    -1,   230,   269,   274,   270,    -1,   231,   269,   274,
     270,    -1,   232,   269,   274,   270,    -1,   233,   269,   274,
     271,   274,   270,    -1,   233,   269,   274,   270,    -1,   234,
     269,   274,   271,   274,   270,    -1,   235,   269,   274,   270,
      -1,   236,   269,   274,   271,   274,   270,    -1,   237,   269,
     270,    -1,   238,   269,   274,   270,    -1,   239,   269,   274,
     270,    -1,   240,   269,   274,   270,    -1,   241,   269,   270,
      -1,   221,   269,   270,    -1,   214,   269,   274,   271,   274,
     270,    -1,   215,   269,   274,   270,    -1,   216,   269,   274,
     270,    -1,   217,   269,   274,   270,    -1,   218,   269,   274,
     270,    -1,   219,   269,   274,   270,    -1,   220,   269,   274,
     270,    -1,   242,   269,   274,    41,   375,   270,    -1,   243,
     269,   274,   271,   375,   270,    -1,   244,   269,   274,   271,
     274,   270,    -1,   245,   269,   274,   271,   274,   270,    -1,
     246,   269,   274,   271,   274,   271,   274,   270,    -1,   274,
      15,   247,    -1,   258,   269,   274,   271,   274,   271,   274,
     270,    -1,   258,   269,   274,   271,   274,   271,   274,   271,
     274,   270,    -1,   261,   269,   270,    -1,   262,   269,   270,
      -1,   263,   269,   270,    -1,   264,   269,   270,    -1,   265,
     269,   274,   270,    -1,   266,   269,   274,   271,   274,   270,
      -1,   130,    -1,   187,    -1,    53,    -1,   212,   269,   274,
     271,   287,   270,    -1,   213,   269,   274,   271,   287,   270,
      -1,   123,   274,   206,    -1,   123,   274,    77,    -1,   123,
     274,    78,    -1,   123,   274,    82,    -1,   123,   274,    84,
      -1,   123,   274,   207,    -1,   123,   274,   108,    -1,   123,
     274,   107,    -1,   123,   274,   110,    -1,    62,   274,   288,
      95,    -1,    62,   274,   288,    96,   274,    95,    -1,    62,
     288,    95,    -1,    62,   288,    96,   274,    95,    -1,   204,
     274,   186,   274,    -1,   288,   204,   274,   186,   274,    -1,
     274,    14,   274,    -1,   274,    18,    14,   274,    -1,   274,
      13,   274,    -1,   274,    18,    13,   274,    -1,    57,    -1,
      65,    -1,    66,    -1,   290,    -1,   175,   304,   305,    -1,
     175,   304,   305,   102,   308,   291,   292,   296,   297,   300,
     301,   302,    -1,    -1,   203,   274,    -1,    -1,   106,    51,
     293,   295,    -1,   274,   294,    -1,   293,   271,   274,   294,
      -1,    -1,    39,    -1,    85,    -1,    -1,   205,   159,    -1,
      -1,   111,   274,    -1,    -1,   148,    51,   298,    -1,   299,
      -1,   298,   271,   299,    -1,     3,   294,    -1,     5,   294,
      -1,    -1,   131,   274,    -1,   131,   274,   271,   274,    -1,
     131,   274,   133,   274,    -1,    -1,   105,   191,    -1,   105,
     166,    -1,   105,   191,   167,   132,    -1,   105,   166,   167,
     132,    -1,    -1,   121,   303,    -1,     3,    -1,   303,   271,
       3,    -1,    -1,   304,    35,    -1,   304,    79,    -1,   304,
      83,    -1,   304,   109,    -1,   304,   172,    -1,   304,   162,
      -1,   304,   170,    -1,   304,   169,    -1,   306,    -1,   305,
     271,   306,    -1,    26,    -1,   274,   307,    -1,    41,     3,
      -1,     3,    -1,    -1,   309,    -1,   308,   271,   309,    -1,
     310,    -1,   312,    -1,     3,   307,   319,    -1,     3,   268,
       3,   307,   319,    -1,   322,   311,     3,    -1,   269,   308,
     270,    -1,    41,    -1,    -1,   309,   313,   124,   310,   317,
      -1,   309,   172,   310,    -1,   309,   172,   310,   147,   274,
      -1,   309,   315,   314,   124,   310,   318,    -1,   309,   142,
     316,   124,   310,    -1,    -1,   115,    -1,    61,    -1,    -1,
     146,    -1,   129,    -1,   160,    -1,   129,   314,    -1,   160,
     314,    -1,    -1,    -1,   318,    -1,   147,   274,    -1,   196,
     269,   303,   270,    -1,   197,   125,   320,   269,   321,   270,
      -1,   116,   125,   320,   269,   321,   270,    -1,   100,   125,
     320,   269,   321,   270,    -1,    -1,   105,   124,    -1,    -1,
       3,    -1,   321,   271,     3,    -1,   269,   290,   270,    -1,
     323,    -1,    80,   324,   102,     3,   291,   297,   300,    -1,
     324,   128,    -1,   324,   152,    -1,   324,   116,    -1,    -1,
      80,   324,   325,   102,   308,   291,    -1,     3,   326,    -1,
     325,   271,     3,   326,    -1,    -1,   268,    26,    -1,    80,
     324,   102,   325,   196,   308,   291,    -1,   327,    -1,    81,
     185,     3,    -1,    81,   185,   118,   209,     3,    -1,   328,
      -1,    58,   117,     3,   147,     3,   269,   329,   270,    -1,
      58,   117,   118,   209,     3,   147,     3,   269,   329,   270,
      -1,    58,   194,   117,     3,   147,     3,   269,   329,   270,
      -1,    58,   194,   117,   118,   209,     3,   147,     3,   269,
     329,   270,    -1,    58,   117,     3,   147,     3,   196,   198,
     269,   329,   270,    -1,    58,   117,   118,   209,     3,   147,
       3,   196,   198,   269,   329,   270,    -1,    58,   194,   117,
       3,   147,     3,   196,   198,   269,   329,   270,    -1,    58,
     194,   117,   118,   209,     3,   147,     3,   196,   198,   269,
     329,   270,    -1,    58,   117,    70,     3,   147,     3,   269,
     329,   270,    -1,    58,   117,    70,   118,   209,     3,   147,
       3,   269,   329,   270,    -1,    58,   194,   117,    70,     3,
     147,     3,   269,   329,   270,    -1,    58,   194,   117,    70,
     118,   209,     3,   147,     3,   269,   329,   270,    -1,    58,
     117,    70,     3,   147,     3,   196,   198,   269,   329,   270,
      -1,    58,   194,   117,    70,     3,   147,     3,   196,   198,
     269,   329,   270,    -1,     3,    -1,   329,   271,     3,    -1,
     330,    -1,   255,   269,     3,   270,    -1,   256,   269,     3,
     270,    -1,   257,   269,     3,   270,    -1,   258,   269,     3,
     271,     3,   270,    -1,   331,    -1,    81,   117,     3,    -1,
     332,   334,    -1,   188,   185,     3,    -1,   188,   185,     3,
     271,   333,    -1,     3,    -1,   333,   271,     3,    -1,    -1,
     334,    59,    -1,   334,   158,    -1,   334,    45,    43,    -1,
     334,    44,    43,    -1,   335,    -1,   155,   185,     3,    -1,
     336,    -1,    36,   185,     3,    -1,    36,   185,     3,   268,
       3,    -1,   337,    -1,    32,   185,     3,    33,    56,     3,
      63,   269,   274,   270,    -1,    32,   185,     3,    33,    56,
       3,   194,   269,   368,   270,    -1,    32,   185,     3,    33,
      56,     3,   101,   125,   269,   365,   270,   156,     3,   269,
     366,   270,   367,    -1,    32,   185,     3,    33,    56,     3,
      63,   269,   274,   270,    18,   199,    -1,    32,   185,     3,
      33,    56,     3,   101,   125,   269,   365,   270,   156,     3,
     269,   366,   270,   367,    18,   199,    -1,    32,   185,     3,
      33,    56,     3,   151,   125,   269,   364,   270,    -1,    32,
     185,     3,    81,    56,     3,    -1,    32,   185,     3,   157,
      56,     3,   178,     3,    -1,    32,   185,     3,    91,    56,
       3,    -1,    32,   185,     3,    74,    56,     3,    -1,    32,
     185,     3,   199,    56,     3,    -1,    32,   185,     3,    33,
      69,     3,   375,   370,   338,    -1,    32,   185,     3,    81,
      69,     3,    -1,    32,   185,     3,    81,     3,    -1,    32,
     185,     3,   157,    69,     3,   178,     3,    -1,    32,   185,
       3,   157,     3,   178,     3,    -1,    32,   185,     3,   139,
      69,     3,   375,   370,   338,    -1,    32,   185,     3,   139,
       3,   375,   370,   338,    -1,    32,   185,     3,    60,    69,
       3,     3,   375,   370,   338,    -1,    32,   185,     3,    60,
       3,     3,   375,   370,   338,    -1,    -1,    98,    -1,    34,
       3,    -1,   339,    -1,   119,   341,   342,     3,   343,   201,
     345,   340,    -1,   119,   341,   342,     3,   343,   290,    -1,
      -1,   149,   125,   191,   348,    -1,    -1,   341,   128,    -1,
     341,    76,    -1,   341,   109,    -1,   341,   116,    -1,   121,
      -1,    -1,    -1,   269,   344,   270,    -1,     3,    -1,   344,
     271,     3,    -1,   269,   347,   270,    -1,    -1,   345,   271,
     346,   269,   347,   270,    -1,   274,    -1,    86,    -1,   347,
     271,   274,    -1,   347,   271,    86,    -1,   119,   341,   342,
       3,   174,   348,   340,    -1,     3,    20,   274,    -1,     3,
      20,    86,    -1,   348,   271,     3,    20,   274,    -1,   348,
     271,     3,    20,    86,    -1,   349,    -1,   161,   341,   342,
       3,   343,   201,   345,   340,    -1,   161,   341,   342,     3,
     174,   348,   340,    -1,   161,   341,   342,     3,   343,   290,
     340,    -1,   350,    -1,   191,   351,   308,   174,   352,   291,
     297,   300,    -1,    -1,   341,   128,    -1,   341,   116,    -1,
       3,    20,   274,    -1,     3,   268,     3,    20,   274,    -1,
     352,   271,     3,    20,   274,    -1,   352,   271,     3,   268,
       3,    20,   274,    -1,   157,   185,     3,   178,     3,    -1,
     353,    -1,    58,    71,   354,     3,    -1,    58,   163,   354,
       3,    -1,    81,    71,     3,    -1,    81,    71,   118,   209,
       3,    -1,    81,   163,     3,    -1,    81,   163,   118,   209,
       3,    -1,    -1,   118,   209,    -1,   355,    -1,    58,    75,
       3,    41,   375,    -1,    58,    75,     3,    41,   375,    86,
     274,    -1,    58,    75,     3,    41,   375,    18,   145,    -1,
      58,    75,     3,    41,   375,    63,   269,   274,   270,    -1,
      58,    75,     3,    41,   375,    18,   145,    63,   269,   274,
     270,    -1,   356,    -1,   197,     3,    -1,   197,    71,     3,
      -1,   357,    -1,    58,   361,   185,   354,     3,   269,   362,
     270,   358,    -1,    58,   361,   185,   354,     3,   268,     3,
     269,   362,   270,   358,    -1,    -1,   358,    38,    20,     5,
      -1,   358,    38,     5,    -1,   358,   147,     3,    80,     3,
      -1,   358,   147,     3,   181,     3,    -1,   358,   164,    51,
     198,   269,     3,   270,   165,     5,    -1,   358,   164,    51,
     153,   269,     3,   270,   269,   359,   270,    -1,   360,    -1,
     359,   271,   360,    -1,   164,     3,   201,   126,   183,     4,
     147,   143,     5,    -1,   164,     3,   201,   126,   183,   136,
     147,   143,     5,    -1,    58,   361,   185,   354,     3,   269,
     362,   270,   377,    -1,    58,   361,   185,   354,     3,   377,
      -1,    58,   361,   185,   354,     3,   268,     3,   269,   362,
     270,   377,    -1,    58,   361,   185,   354,     3,   268,     3,
     377,    -1,    -1,   179,    -1,   180,   179,    -1,   363,    -1,
     362,   271,   363,    -1,   151,   125,   269,   364,   270,    -1,
      56,     3,   151,   125,   269,   364,   270,    -1,   125,   269,
     303,   270,    -1,   117,   269,   303,   270,    -1,   104,   117,
     269,   303,   270,    -1,   104,   125,   269,   303,   270,    -1,
      63,   269,   274,   270,    -1,    56,     3,    63,   269,   274,
     270,    -1,   101,   125,   269,   365,   270,   156,     3,   269,
     366,   270,   367,    -1,   101,   125,   269,   365,   270,   156,
       3,   268,     3,   269,   366,   270,   367,    -1,    56,     3,
     101,   125,   269,   365,   270,   156,     3,   269,   366,   270,
     367,    -1,    56,     3,   101,   125,   269,   365,   270,   156,
       3,   268,     3,   269,   366,   270,   367,    -1,   194,   269,
     368,   270,    -1,    56,     3,   194,   269,   368,   270,    -1,
       3,    -1,   364,   271,     3,    -1,     3,    -1,   365,   271,
       3,    -1,     3,    -1,   366,   271,     3,    -1,    -1,   367,
     147,    80,    59,    -1,   367,   147,    80,   174,   145,    -1,
     367,   147,    80,   158,    -1,   367,   147,    80,   174,    86,
      -1,   367,   147,   191,    59,    -1,   367,   147,   191,   174,
     145,    -1,   367,   147,   191,   158,    -1,   367,   147,   191,
     174,    86,    -1,   367,   147,    80,   144,    -1,   367,   147,
     191,   144,    -1,   367,   135,   103,    -1,   367,   135,   171,
      -1,   367,   135,   150,    -1,   367,    72,    -1,   367,    18,
      72,    -1,   367,    72,   113,    73,    -1,   367,    72,   113,
     112,    -1,     3,    -1,   368,   271,     3,    -1,    -1,   369,
       3,   375,   370,    -1,    -1,   370,    18,   145,    -1,   370,
     145,    -1,   370,    86,     4,    -1,   370,    86,     5,    -1,
     370,    86,     7,    -1,   370,    86,     6,    -1,   370,    86,
     261,   269,   270,    -1,   370,    86,   262,   269,   270,    -1,
     370,    86,   263,   269,   270,    -1,   370,    86,    57,    -1,
     370,    86,   269,   274,   270,    -1,   370,    38,    -1,   370,
      38,   269,     5,   271,     5,   270,    -1,   370,    38,   269,
       5,   270,    -1,   370,    43,   269,     5,   271,     5,   270,
      -1,   370,    43,   269,     5,   270,    -1,   370,    43,    -1,
     370,   194,   125,    -1,   370,   194,    -1,   370,   151,   125,
      -1,   370,   125,    -1,   370,    64,     4,    -1,   370,    63,
     269,   274,   270,    -1,   370,    56,     3,   194,    -1,   370,
      56,     3,   151,   125,    -1,   370,    56,     3,    63,   269,
     274,   270,    -1,   370,    46,    42,    41,   269,   274,   270,
      47,    -1,   370,    46,    42,    41,   269,   274,   270,    48,
      -1,   370,    46,    42,    41,   269,   274,   270,    -1,   370,
      41,   269,   274,   270,    47,    -1,   370,    41,   269,   274,
     270,    48,    -1,   370,    41,   269,   274,   270,    -1,    -1,
     269,     5,   270,    -1,   269,     5,   271,     5,   270,    -1,
      -1,    52,    -1,    -1,   373,   192,    -1,   373,   208,    -1,
      -1,   374,    67,   174,     4,    -1,   374,    68,     4,    -1,
      55,   371,    -1,   177,   371,   373,    -1,   173,   371,   373,
      -1,   141,   371,   373,    -1,   122,   371,   373,    -1,   114,
     371,   373,    -1,    54,   371,   373,    -1,   154,   371,   373,
      -1,    87,   371,   373,    -1,    99,   371,   373,    -1,    89,
     371,   373,    -1,    90,    -1,   190,    -1,   184,    -1,    88,
      -1,   206,    -1,    67,   371,   374,    -1,   200,   269,     5,
     270,   374,    -1,    52,   371,    -1,   202,   269,     5,   270,
      -1,   189,    -1,    49,    -1,   140,    -1,   134,    -1,   176,
     372,   374,    -1,   182,   372,   374,    -1,   137,   372,   374,
      -1,   127,   372,   374,    -1,    94,   269,   376,   270,   374,
      -1,   174,   269,   376,   270,   374,    -1,    50,    -1,   195,
      -1,     4,    -1,   376,   271,     4,    -1,   378,   311,   290,
      -1,    -1,   116,    -1,   161,    -1,   379,    -1,   174,   163,
       3,    -1,   174,   163,    86,    -1,   174,   380,    -1,   381,
      -1,   380,   271,   381,    -1,     8,    20,   274,    -1,     8,
       9,   274,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   361,   361,   362,   367,   374,   375,   376,   394,   402,
     410,   416,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     447,   447,   456,   456,   458,   458,   460,   460,   464,   465,
     466,   467,   468,   471,   472,   475,   476,   479,   480,   483,
     483,   484,   484,   485,   485,   493,   493,   501,   501,   512,
     516,   517,   518,   519,   520,   521,   522,   523,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   560,   561,   562,   563,   564,   565,   566,   567,
     569,   570,   572,   573,   574,   576,   577,   578,   579,   586,
     593,   600,   604,   608,   614,   615,   616,   619,   625,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   643,   645,
     647,   649,   653,   661,   672,   673,   676,   677,   680,   688,
     696,   707,   717,   718,   732,   733,   734,   735,   738,   745,
     753,   754,   755,   758,   759,   762,   763,   766,   767,   770,
     771,   774,   780,   789,   790,   791,   792,   795,   796,   797,
     798,   799,   802,   803,   806,   807,   810,   811,   812,   813,
     814,   815,   816,   817,   818,   821,   822,   823,   831,   837,
     838,   839,   842,   843,   846,   847,   851,   858,   859,   860,
     863,   864,   868,   870,   872,   874,   876,   880,   881,   882,
     885,   886,   889,   890,   893,   894,   895,   898,   899,   902,
     903,   907,   909,   911,   913,   916,   917,   920,   921,   924,
     928,   938,   946,   947,   948,   949,   953,   957,   959,   963,
     963,   965,   970,   977,   984,   994,  1001,  1008,  1018,  1026,
    1036,  1044,  1053,  1062,  1072,  1080,  1089,  1098,  1108,  1117,
    1129,  1134,  1139,  1145,  1152,  1159,  1166,  1176,  1183,  1192,
    1199,  1205,  1213,  1219,  1227,  1228,  1229,  1230,  1231,  1235,
    1242,  1251,  1258,  1264,  1275,  1278,  1284,  1290,  1297,  1303,
    1310,  1316,  1322,  1328,  1334,  1340,  1346,  1352,  1358,  1364,
    1370,  1376,  1382,  1388,  1394,  1402,  1403,  1404,  1407,  1415,
    1421,  1434,  1435,  1438,  1439,  1440,  1441,  1442,  1445,  1445,
    1448,  1449,  1452,  1462,  1475,  1476,  1476,  1479,  1480,  1481,
    1482,  1485,  1489,  1490,  1491,  1492,  1498,  1501,  1507,  1512,
    1518,  1526,  1535,  1536,  1537,  1541,  1552,  1564,  1575,  1590,
    1595,  1599,  1600,  1604,  1606,  1608,  1610,  1614,  1615,  1619,
    1623,  1625,  1627,  1629,  1631,  1636,  1640,  1641,  1645,  1654,
    1664,  1668,  1669,  1670,  1671,  1672,  1673,  1675,  1679,  1680,
    1683,  1698,  1705,  1720,  1733,  1748,  1761,  1762,  1763,  1766,
    1767,  1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,
    1780,  1782,  1784,  1786,  1788,  1792,  1793,  1796,  1797,  1800,
    1801,  1804,  1805,  1806,  1807,  1808,  1809,  1810,  1811,  1812,
    1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,  1821,  1824,
    1825,  1828,  1828,  1838,  1839,  1840,  1841,  1842,  1843,  1844,
    1845,  1846,  1847,  1848,  1849,  1856,  1857,  1858,  1859,  1860,
    1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,  1869,  1870,
    1871,  1872,  1873,  1874,  1875,  1876,  1879,  1880,  1881,  1884,
    1885,  1888,  1889,  1890,  1893,  1894,  1895,  1899,  1900,  1901,
    1902,  1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,
    1912,  1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,
    1922,  1923,  1924,  1925,  1926,  1927,  1928,  1929,  1930,  1933,
    1934,  1937,  1950,  1951,  1952,  1956,  1959,  1960,  1961,  1962,
    1962,  1964,  1965
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
  "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "USING", "USE", "HASH",
  "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH",
  "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FDATEDIFF", "FYEAR", "FMONTH", "FDAY",
  "FHOUR", "FMINUTE", "FSECOND", "FNOW", "FLEFT", "FRIGHT", "FLPAD",
  "FRPAD", "FREVERSE", "FREPEAT", "FINSTR", "FLOCATE", "FABS", "FCEIL",
  "FFLOOR", "FROUND", "FPOWER", "FSQRT", "FMOD", "FRAND", "FLOG", "FLOG10",
  "FSIGN", "FPI", "FCAST", "FCONVERT", "FNULLIF", "FIFNULL", "FIF",
  "UNKNOWN", "FGROUP_CONCAT", "SEPARATOR", "FCOUNT", "FSUM", "FAVG",
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
     506,   507,   508,   509,   510,   511,   512,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   272,   273,   273,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     275,   274,   276,   274,   277,   274,   278,   274,   274,   274,
     274,   274,   274,   274,   274,   279,   279,   280,   280,   281,
     274,   282,   274,   283,   274,   284,   274,   285,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   286,   286,   286,   274,   274,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   274,   274,
     274,   274,   288,   288,   274,   274,   274,   274,   274,   274,
     274,   289,   290,   290,   291,   291,   292,   292,   293,   293,
     294,   294,   294,   295,   295,   296,   296,   297,   297,   298,
     298,   299,   299,   300,   300,   300,   300,   301,   301,   301,
     301,   301,   302,   302,   303,   303,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   305,   305,   305,   306,   307,
     307,   307,   308,   308,   309,   309,   310,   310,   310,   310,
     311,   311,   312,   312,   312,   312,   312,   313,   313,   313,
     314,   314,   315,   315,   316,   316,   316,   317,   317,   318,
     318,   319,   319,   319,   319,   320,   320,   321,   321,   322,
     289,   323,   324,   324,   324,   324,   323,   325,   325,   326,
     326,   323,   289,   327,   327,   289,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     329,   329,   329,   330,   330,   330,   330,   289,   331,   289,
     332,   332,   333,   333,   334,   334,   334,   334,   334,   289,
     335,   289,   336,   336,   289,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   338,   338,   338,   289,   339,
     339,   340,   340,   341,   341,   341,   341,   341,   342,   342,
     343,   343,   344,   344,   345,   346,   345,   347,   347,   347,
     347,   339,   348,   348,   348,   348,   289,   349,   349,   349,
     289,   350,   351,   351,   351,   352,   352,   352,   352,   289,
     289,   353,   353,   289,   289,   289,   289,   354,   354,   289,
     355,   355,   355,   355,   355,   289,   356,   356,   289,   357,
     357,   358,   358,   358,   358,   358,   358,   358,   359,   359,
     360,   360,   357,   357,   357,   357,   361,   361,   361,   362,
     362,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   364,   364,   365,   365,   366,
     366,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   368,
     368,   369,   363,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   371,   371,   371,   372,
     372,   373,   373,   373,   374,   374,   374,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   376,
     376,   377,   378,   378,   378,   289,   379,   379,   379,   380,
     380,   381,   381
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
    1058,  -111,  -107,   261, -1014,   381, -1014,   -51,   -33, -1014,
      20, -1014,     2,    13,    65,   361,   116, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014,   456,   492,   393,   504,    59,   393,
   -1014,   335,   404,   360,    29,    31,   547,   139,   170,   443,
     555,   591,   443,   444,    80,   282, -1014,   822,   599,   471,
      14, -1014,   614, -1014,  1058,   271,   269,   353,   416,   642,
     602,   523,   309,   485,   724, -1014,   307,   393,   483,   766,
   -1014, -1014, -1014,   -67, -1014,   563, -1014, -1014,   574, -1014,
     581, -1014, -1014, -1014, -1014, -1014,   803, -1014,   646,   862,
    2675,  2675, -1014, -1014,   877,   232, -1014, -1014, -1014, -1014,
     891,  2675,  2675,  2675, -1014, -1014, -1014,  1466, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014,   635,   656,
     661,   663,   678,   685,   697,   699,   700,   701,   702,   703,
     704,   705,   706,   708,   709,   710,   711,   712,   713,   714,
     716,   717,   718,   719,   720,   721,   726,   727,   728,   752,
     754,   756,   757,   758,   759,   760,   761,   800,   802,   820,
     823,   824,   826,   827,   828,   829,   837,   838,   839,   840,
     841,   842,   843,   844,  2675,  4779,   -27, -1014,   846,    16,
      18,    22,    11,  -113,   431, -1014, -1014,  1077, -1014, -1014,
    1078,  1080, -1014, -1014,   285,   435,  1064,   440,  1069,   436,
     447,  1070,  1124, -1014, -1014,  4472,  1125,   982,   921,  1129,
   -1014,   986,   310,   925,  1133,  1111, -1014,   190,  -130,    14,
    1137,  1138,  1140,  1141,  -115,  1142,  -105,  2273,  2273, -1014,
    1143,  2675,  2675,   916,   916, -1014,  2675,   789,   -43, -1014,
    2675,  1097,  2675,  2675,  2675,  2675,  2675,  2675,  2675,  2675,
    2675,   878,  2675,  2675,  2675,  2675,  2675,  2675,  2675,  2675,
    2675,  2675,  2675,  2675,  2675,  2675,  2675,   879,  2675,  2675,
    2675,   881,  2675,  2675,  2675,  2675,  2675,  2675,  1568,  2675,
    2675,  2675,  2675,  2675,  2675,  2675,  2675,  2675,  2675,   882,
     883,   887,   888,  2675,  2675,  3049, -1014,  2675,  2675,  2675,
    2675,  2675,    39,   892,   535,  2675,  1199,  2675,  2675,  2675,
    2675,  2675,  2675,  2675,  2675,  2675,  2675,  1144, -1014,    14,
    2675,  1157,  1161,   240,   895,   247,  1163,    14, -1014, -1014,
   -1014,   198, -1014,    14,  1043,  1022, -1014,  1166, -1014, -1014,
    1198,  1205,  1206,  1207,  1208, -1014,  1209,  1211,  1215,  4472,
    1217,  1044,  1218,  1220,  1222, -1014, -1014, -1014,   957,   957,
     957,   957,   957, -1014,   957, -1014,   959,   957,   957,   957,
    1177, -1014,  1177, -1014,   957,   957,   957,   961,  1177,   957,
    1177, -1014, -1014, -1014, -1014,   962,   966, -1014,   427,  -126,
    1234,  1235,  1092,  1237,  1094,  1034,  1241,   -89, -1014,  2675,
    1099,    14,  -127,   483, -1014, -1014, -1014,  1242,  1245,   292,
   -1014,  1242,   319, -1014,   677, -1014,   980,  2273,  1160,   226,
   -1014,  2675,  2675,  1076,    74, -1014, -1014, -1014,  3070,  1835,
     734,   848,   988,  3095,  3116,  3137,  3158,  3189,  3217, -1014,
    1267,  1358,  1482,  1594,  3260,  1625,  1736,  1856,  3281,  3302,
    3323,    95,  1963,  3348,  2006, -1014,  3369,  3390,  3411, -1014,
    4733,  2095,  2225,  2332,  2375,  3007,   983,  3442,  3470,  3491,
    3513,  3534,  3555,  3576,  3601,  2464,  2594,  2701, -1014, -1014,
   -1014, -1014,  3622,  2732, -1014,  2642,  1377,  2115,  2484,  2484,
   -1014,    25, -1014, -1014,  1079,  2675,  2675,   989,  2675,  4803,
     991,   993,   994,  2675,  1170,   934,   808,   825,   586,   586,
    1227,  1227,  1227,  1227, -1014, -1014,  -127, -1014, -1014,   981,
     321,  1145,  1146,  1147, -1014, -1014, -1014,     4,   160,   431,
    1022,  1022,  1149,  1119,    14, -1014,  1150, -1014,   241,  4472,
    4472,  1264, -1014, -1014, -1014, -1014, -1014,  4472,  1265,  1091,
    1098, -1014,  1270, -1014, -1014, -1014, -1014, -1014, -1014,  1294,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014, -1014,  1294,
   -1014, -1014, -1014,  1295,  1296,  1154,  1033,  2675,  1105,    19,
    -119,  1158,  1301,   110,  1361,  1362,  1228, -1014, -1014,  1391,
     272, -1014,  1077,  2273,  1395,  1317,  -127, -1014, -1014,  1446,
    -123, -1014,   286,  1210, -1014,  -123,  1210,  1318,  2675, -1014,
    2675, -1014,  2675,  4669,  1529,  1212,  2675,  2675, -1014,  2675,
    1893,  1352,  1352,  2675, -1014, -1014, -1014, -1014, -1014, -1014,
    2675,  2675,  2675,  2675, -1014,  2675,  2675,  2675, -1014, -1014,
   -1014, -1014,  2675,  2675, -1014,  2675, -1014, -1014, -1014,  4472,
    4472,  2675,  2675,  2675,  1472, -1014, -1014, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,  2675,  2675,  2675, -1014,  2675,
   -1014, -1014,  2675,  1076,  2484,  2484,  1302,  4826,  2675, -1014,
   -1014, -1014,  1076,  1372,  1477,   240,  1376,  1376,  1376,  2675,
    1483,  1484,  1099, -1014, -1014,    14,  2675,   161,    14,  1216,
    1363,  1364,  1221, -1014, -1014,  4472,  4398, -1014, -1014,  1496,
    1510,   291,   145,   500,   145,   145, -1014,   304,   145,   145,
     145,   500,   500,   145,   145,   145,   308,   500,   145,   500,
    1244,  1246,  1452,  2675,  2273,  1248, -1014,  1249,  1250,  1251,
    1252,   311, -1014,  1324,    19,  1521,   118,  1327,    19,   121,
    1379,  1524,   -79,  1526,  1261,  1408,   340,  1266,  1268,  1409,
    1277,   330, -1014,  1533,  1076,   365,  2675, -1014, -1014,  1937,
    1435,  1558, -1014, -1014,  1559,  2204,  -102, -1014,  -102, -1014,
   -1014,  2273,  4690, -1014,  2675, -1014,  3028,   391,  3643,  2675,
    2675,  1293,  1297,  3664,  3695,  3723,  2833,  2935,  3744,  3766,
    3787,  3808,  3829,  3854,  1298,  1299,  3875,  3896,  2963,  1300,
     459,  2986,  3917,  3948,  1307,  1308,  2675,  1076,  2675,   688,
    1076,  1076,  1076,  1309,  1513,  1454, -1014, -1014,  1442,  1311,
    1312,  1313,  2273,  1563,    30,  1317, -1014,  2273,  2675,  1315,
   -1014, -1014,   161,  2675,  1319,  1320,  1584,  4398,  4398, -1014,
    1445,  1588,  1323,  1326,  1328,  1554,  1595,  1330,  1596,    34,
   -1014, -1014, -1014,  1476,  1478, -1014,  4398, -1014, -1014, -1014,
    1597, -1014, -1014,  1453,  1622, -1014,  1624, -1014, -1014, -1014,
    1373,  3976,    19,  1628,  1629,  1653,  1654, -1014,  1655,  1390,
     337,  1392,  1462,    19,  1393,   339,  1465,    19,  1661,   122,
     272, -1014,   248,  2675,  1396,  1397,  1398,  1665,  1665,  1400,
    1584,    17,   272,  4472, -1014,    87,    87,  1401, -1014,   513,
   -1014,  2273,  1480,  1713, -1014, -1014,  2273,   359, -1014, -1014,
   -1014, -1014,  2273,  2675, -1014, -1014,  2675, -1014,  3997,  4381,
   -1014, -1014, -1014, -1014, -1014,  2675,  2675, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014, -1014,  2675, -1014, -1014,
    2675,  2675, -1014, -1014, -1014, -1014,  1403,  1404,   688,  1464,
    1467,  1468, -1014,  2675,  2675,  1099, -1014,  1733,  1733,  1733,
    2675,  2675,  1737, -1014,  2273,  1665, -1014,  4019,  1738,  1739,
   -1014,   368, -1014, -1014,  4398, -1014, -1014,  1734,  2675,  1740,
    1702,   -12,  2675, -1014, -1014, -1014, -1014, -1014, -1014,  1475,
    1498,  1499,  2675, -1014, -1014, -1014,  1500,  1765, -1014,   500,
   -1014,   500,   500,  2675, -1014,   370,  1501,  1502,  1503,  1504,
   -1014,    19, -1014,    19,  1505,   377,    19, -1014,  1507,   386,
    1546,  1619,    19,   389,  1566,  1711,  1719,  1576,  4040,  1738,
    1665,  1665, -1014,   414,   450,  1739,   453,    27, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,   365,  2675,  2675,  1242,  2306,
   -1014,  2573,  1577,  4061,  4082, -1014, -1014, -1014, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,  4107,  4128,  4149,   653,  4170,
   -1014, -1014, -1014, -1014, -1014,  4711,   189,  2273,  1317, -1014,
     455,   461,   463,  2273,  2273,  1827,   465,  1830, -1014,   468,
   -1014,   470, -1014,  1846, -1014,   506,  4201,   508,  1581,  1582,
    1729, -1014,  4229,  1585,  1586,  1587,  4250, -1014, -1014,  4272,
   -1014, -1014, -1014, -1014,  1855,   516,   518,    19, -1014,   522,
      19, -1014,    19,  1590,   524,    17,  2675,  1592,  1593,  1584,
   -1014,   527,   550,   552, -1014,  1860, -1014,   571, -1014,   314,
    1861,  1822,  4429, -1014,  2273,  2273,  1616, -1014,  2273, -1014,
    2273,  2204, -1014, -1014, -1014, -1014, -1014, -1014,  2675, -1014,
   -1014,  1730,  2675, -1014,  1783, -1014,  1887, -1014, -1014,  2675,
   -1014,  1692,  1742,  1890, -1014,  1891, -1014, -1014,  1894,   588,
   -1014,  1897,  2675,  2675, -1014, -1014, -1014, -1014, -1014, -1014,
   -1014,  1640, -1014, -1014,   573, -1014,   575,   610,    19, -1014,
      27, -1014,  4293,  1738,  1739,   612,  1768, -1014, -1014, -1014,
   -1014, -1014,  1920,   -16,   301,   620,  4314, -1014,  4711,   331,
    1774, -1014,  2273, -1014,  1923, -1014, -1014,  1657, -1014, -1014,
    1658,  4335,  4360, -1014, -1014, -1014, -1014,   622, -1014,   624,
     626, -1014,  1926, -1014,  1927,  1928,  1663,  1664, -1014, -1014,
   -1014,  1767,  1769,  1665, -1014,  1666, -1014, -1014,   604, -1014,
   -1014,  1782, -1014,   634, -1014, -1014,  1936,  1943,  1815,  1816,
    1678,  1947, -1014, -1014,  1948,  1949,  1947,  1683,  1686, -1014,
   -1014, -1014,   636,   640,  1688,   641,  1689,  1794, -1014,  1957,
    1958,  1947,  1947, -1014,  1799,  1959,   237, -1014,  1696,   645,
     647,   287,  1964,   649, -1014, -1014,   -39,  1853,   341,   -32,
    1947, -1014, -1014,  1896,  1770, -1014,  1799, -1014, -1014,   234,
   -1014, -1014, -1014,   288,   289,   651,   287,   287,  1843, -1014,
   -1014, -1014, -1014, -1014, -1014,   -13, -1014, -1014, -1014,    26,
   -1014,  1787, -1014, -1014, -1014, -1014,   287,    32,  1825,  1849,
    1854,  1857,  1993,  1996, -1014, -1014
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1014,  1940,   -57, -1014, -1014, -1014, -1014,  -547, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014,  1374,  1758, -1014,  -177,  -363,
   -1014, -1014,  -917, -1014, -1014,  -692, -1014,   933,  -816, -1014,
   -1014,  -914, -1014, -1014,  1679,  -186,  -162,  1673,  -320,  1410,
   -1014, -1014,   388, -1014, -1014, -1014,  1159,  1342,   252,   -36,
   -1014, -1014, -1014,  1934,  1601, -1014, -1014,  -752, -1014, -1014,
   -1014, -1014, -1014, -1014, -1014, -1014,  -720, -1014,  -487,   342,
    1986,  1779, -1014,  1423, -1014,   859,  -420, -1014, -1014, -1014,
   -1014, -1014,   294, -1014, -1014, -1014,   886, -1014,   696, -1014,
    1174,  1121,  -986, -1013,  -729, -1003,  -878, -1014,  -706,   396,
     120,    56,  -562,  -279,  1523,  -759, -1014, -1014, -1014,  1999
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
     739,  -353,   746,   543,   699,   306,   780,   597,    53,   993,
     335,   680,    78,  1347,    84,   229,  1378,   597,  1014,  1015,
    1016,  1017,  1066,   237,   238,   500,  1161,   780,  1353,   607,
     991,  1129,   430,   431,   243,   244,   245,   501,  -522,   417,
     247,   336,    71,   327,  1274,  1169,   411,   412,    61,   421,
     588,   790,   598,  1372,    34,   329,   409,   753,    35,  1167,
     556,  1116,   598,   102,   307,   308,   309,   310,   311,   312,
     313,  1018,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,  1374,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,  1071,   305,   787,    72,
     789,    79,  1373,   597,    50,   824,    62,  1002,  1003,  1130,
    1035,   230,    87,   589,   337,    80,  1162,  1163,   781,    85,
     754,  1045,    51,  1004,   418,  1049,  1025,    81,   337,  1354,
    1348,   432,  1068,   693,   418,  1275,   103,   526,  1379,   938,
     681,  1375,  1072,    89,  1170,   702,   626,    73,   598,   599,
     600,    82,  1131,    54,   502,   427,    11,    58,  1190,   428,
     910,  1171,  -522,   434,   438,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   230,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
    1269,   466,   467,   468,   707,   470,   471,   472,   473,   474,
     475,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   614,   778,   330,   617,   492,   493,  1270,   606,
     495,   496,   497,   498,   499,  1336,   625,    88,   509,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     713,   714,   700,   185,   747,   748,   749,   750,   717,   976,
     192,  1235,  -352,   192,  1124,  -354,   503,  -353,    90,  1145,
     332,  1146,  1194,  1108,  1149,  1019,  1020,  1021,   992,   939,
    1154,   940,   204,  1022,   709,  1343,   757,  1360,   848,  1337,
     221,  1054,   217,   404,   902,   200,   201,   906,  1051,  1241,
    1331,   621,   622,  1029,   306,  1031,  1032,   540,   763,   205,
     202,  1280,    36,    74,  1242,   764,    37,   881,  1356,  1357,
     531,   350,   710,   206,   695,   627,  1361,  1362,  1366,  1055,
     207,    52,   603,   882,   351,    59,   532,   849,   541,  1337,
     208,    63,   327,   409,  1172,   651,   652,  1376,   925,  1300,
     926,   224,  1338,   765,   623,   624,   766,   222,    38,   758,
     814,   815,   630,    64,  1339,   846,  -249,   903,   852,   767,
     907,  1052,   711,   409,  1191,  1224,  1231,   768,  1226,  1056,
    1227,   307,   308,   309,   310,   311,   312,   313,   209,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,  1338,   769,    39,   223,   210,   218,   405,   203,
     432,   701,  1363,  1367,  1339,   712,   859,   533,   352,   359,
      40,    41,  1057,   355,  1350,   585,  1364,  1368,   684,   685,
     361,   687,    45,   100,  1276,    42,   305,   915,   225,    66,
    1192,  -249,  1365,  1369,   101,   916,   770,    11,   211,   307,
     308,   309,   310,   311,   312,   313,  1267,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     586,  1351,   338,   613,    11,    67,   356,  1281,    46,  1277,
     240,   241,   575,   362,   353,   360,   825,    70,   580,   357,
     582,    68,  1352,   587,    75,   833,   363,   536,   337,    91,
     616,    76,  1282,   307,   308,   309,   310,   311,   312,   313,
     744,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,    47,    77,   339,    91,   505,   506,
      86,   507,    92,   104,   508,  -217,   783,   784,    97,    93,
     340,   879,   880,   791,    94,   792,    48,   883,   884,   796,
     797,    95,   798,   341,   885,   886,   803,  1315,   887,   886,
      92,   897,   898,   804,   805,   806,   807,   189,   808,   809,
     810,   342,  1329,  1330,    98,   811,   812,   924,   813,   190,
     921,   922,   188,   343,   816,   817,   818,  1042,   898,  1047,
     898,  1355,   322,   323,   324,   325,   326,   198,   820,   821,
     822,   212,   823,   724,   725,   213,   728,   729,   730,  1080,
    1081,   829,   733,   734,   735,  1258,  1259,   738,  1122,  1123,
    1140,   898,   842,   215,  1070,   214,  1076,  1148,   898,   847,
     977,  1302,  1303,   979,   980,   981,  1151,   898,  1176,  1155,
     922,   945,   946,   307,   308,   309,   310,   311,   312,   313,
     216,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,  1164,  1165,   891,   307,   308,   309,
     310,   311,   312,   313,   219,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   929,
    1166,  1165,   931,  1168,  1123,  1195,  1196,   220,   936,   969,
     970,  1197,  1196,  1198,  1196,  1200,  1165,   942,  1202,  1203,
    1204,  1205,   948,   949,   307,   308,   309,   310,   311,   312,
     313,   225,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   564,   565,   566,   567,   227,
     568,   978,   231,   570,   571,   572,  1207,  1208,  1210,  1211,
     576,   577,   578,   232,  1077,   581,  1222,   898,  1223,   898,
     233,   994,  1225,   898,  1229,   898,   997,  1236,  1203,   307,
     308,   309,   310,   311,   312,   313,   234,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
    1237,  1165,  1238,  1165,   235,   105,   106,   107,   108,   109,
     110,   319,   320,   321,   322,   323,   324,   325,   326,   111,
     112,  1240,  1205,  1264,   898,  1265,   898,   113,   114,   320,
     321,   322,   323,   324,   325,   326,  1058,   115,   307,   308,
     309,   310,   311,   312,   313,   236,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   116,
    1266,   898,  1271,  1123,   117,    53,  1083,   118,   119,  1084,
    1278,  1081,  1290,   898,  1291,  1203,  1292,  1205,  1095,  1096,
     242,   120,  1305,  1306,   249,   121,  1318,  1319,  1320,  1321,
    1097,  1323,  1319,  1098,  1099,  1341,  1319,  1342,  1319,  1345,
    1346,  1370,  1319,  1187,  1188,   250,  1105,  1107,   703,   704,
     251,   122,   252,  1113,  1114,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   253,   618,   840,
     841,  1126,  1111,  1112,   254,  1132,   318,   319,   320,   321,
     322,   323,   324,   325,   326,  1136,   255,   123,   256,   257,
     258,   259,   260,   261,   262,   263,  1139,   264,   265,   266,
     267,   268,   269,   270,   124,   271,   272,   273,   274,   275,
     276,   125,   126,   246,   127,   277,   278,   279,   307,   308,
     309,   310,   311,   312,   313,   631,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,  1174,
    1175,   280,  1178,   281,  1180,   282,   283,   284,   285,   286,
     287,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   288,
     166,   289,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   290,
       1,   184,   291,   292,     2,   293,   294,   295,   296,  1232,
     105,   106,   107,   108,   109,   110,   297,   298,   299,   300,
     301,   302,   303,   304,   111,   112,     3,   331,   346,   632,
     354,   348,   113,   349,   936,   358,   364,   365,   399,   400,
     401,  1246,   402,   403,   406,  1248,   407,   408,     4,     5,
     413,   414,  1252,   415,   416,   420,   423,   525,   449,   465,
     435,   469,   488,   489,   116,  1261,  1262,   490,   491,   117,
     528,   504,   118,   119,   530,   535,   537,   544,   545,   547,
     307,   308,   309,   310,   311,   312,   313,     6,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   548,   105,   106,   107,   108,   109,   110,   549,   550,
     551,   552,   553,     7,   554,     8,   111,   112,   555,     9,
     557,   559,   558,   560,   113,   561,   562,   436,   569,   573,
     579,   583,    10,    11,   510,   584,   511,   590,   591,   592,
     593,   594,   123,   595,   596,   609,    12,   604,   611,    13,
     619,    11,   694,   666,   -53,    14,   116,   326,   686,   633,
     689,   117,   690,   691,   118,   119,   706,   715,   718,   719,
     696,   697,   698,   705,   708,   721,   720,   307,   308,   309,
     310,   311,   312,   313,   437,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   726,   742,
     740,   741,   743,   745,   756,   755,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   123,   166,   620,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   759,   760,   184,   512,   307,   308,
     309,   310,   311,   312,   313,   761,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   309,
     310,   311,   312,   313,   762,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   775,   166,   776,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   779,   780,   513,   105,
     106,   107,   108,   109,   110,   800,   819,   -55,   834,   785,
     836,   838,   795,   111,   112,   853,   843,   844,   854,   855,
     856,   113,   307,   308,   309,   310,   311,   312,   313,   877,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   878,   888,   890,   889,   892,   893,   894,
     895,   896,   899,   116,   901,   904,   908,   909,   117,   912,
     913,   118,   119,   914,   919,   917,   923,   918,   640,   307,
     308,   309,   310,   311,   312,   313,   920,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     932,   933,   934,   950,   983,   984,   986,   951,   963,   964,
     968,   105,   106,   107,   108,   109,   110,   974,   975,   982,
     987,   988,   989,   990,   995,   111,   112,  1000,   998,   999,
    1005,  1006,  1007,   113,   476,  1008,  1010,  1009,  1011,  1012,
    1013,  1023,  1026,  1024,   307,   308,   309,   310,   311,   312,
     313,   123,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   116,  1028,  1027,  1030,   641,
     117,  1036,  1037,   118,   119,   307,   308,   309,   310,   311,
     312,   313,  1033,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,  1038,  1039,  1040,  1041,
    1044,  1043,  1046,  1048,  1050,  1059,  1060,  1061,  1062,  1065,
     246,  1078,  1075,  1100,  1101,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   123,   166,   794,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,  1079,  1102,   184,  1109,  1103,  1104,  1125,
    1115,  1118,  1120,  1128,  1133,  1127,   307,   308,   309,   310,
     311,   312,   313,   642,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,  1134,  1135,  1138,
    1137,  1141,  1142,  1143,  1147,  1144,  1150,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,  1152,   166,  1153,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,  1156,  1157,   184,   105,   106,
     107,   108,   109,   110,  1158,  1159,  1181,  1199,  1201,  1206,
    1212,  1213,   111,   112,  1214,  1216,  1217,  1218,  1221,  1228,
     113,  1233,  1234,  1239,  1243,   643,   307,   308,   309,   310,
     311,   312,   313,  1244,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   781,  1249,  1247,
    1251,  1253,   116,  1255,  1256,  1283,   645,   117,  1254,  1257,
     118,   119,  1260,   307,   308,   309,   310,   311,   312,   313,
    1263,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,  1272,  1273,  1285,  1286,  1287,  1293,
    1294,  1295,  1296,  1297,  1298,  1301,  1299,   629,  1304,  1307,
     105,   106,   107,   108,   109,   110,  1308,  1309,  1310,  1165,
    1311,  1313,  1314,  1316,   111,   112,  1317,  1322,  1324,  1325,
    1327,  1328,   113,  1332,  1335,  1340,  1349,  1344,  1347,  1371,
    1377,  1358,  1380,   307,   308,   309,   310,   311,   312,   313,
     123,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   116,   799,  1381,  1382,  1384,   117,
    1383,  1385,   118,   119,   199,   429,   802,   646,  1173,   527,
     539,   996,   774,   228,   608,   422,   307,   308,   309,   310,
     311,   312,   313,   930,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   837,    99,   788,
    1245,  1230,  1359,  1069,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   123,   166,  1053,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   736,   239,   184,   307,   308,   309,   310,   311,
     312,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,   647,   310,   311,
     312,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,     0,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,     0,     0,   184,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,   653,   307,   308,   309,   310,   311,
     312,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
       0,   116,     0,     0,     0,     0,   117,     0,     0,   118,
     119,     0,     0,     0,     0,     0,     0,   655,     0,     0,
       0,     0,     0,   307,   308,   309,   310,   311,   312,   313,
     935,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,   123,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   116,     0,     0,   660,     0,   117,     0,
       0,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,   310,   311,
     312,   313,  1177,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   123,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,     0,   184,   307,   308,   309,   310,   311,   312,
     313,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,     0,   661,  -523,  -523,  -523,
    -523,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,     0,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,     0,     0,   184,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,   662,   307,   308,   309,   310,   311,   312,
     313,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,     0,     0,     0,     0,     0,
     116,     0,     0,     0,     0,   117,     0,     0,   118,   119,
       0,     0,     0,     0,     0,     0,   663,     0,     0,     0,
       0,     0,     0,   308,   309,   310,   311,   312,   313,  1179,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   123,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   116,     0,     0,   675,     0,   117,     0,     0,
     118,   119,   307,   308,   309,   310,   311,   312,   313,     0,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     123,   166,     0,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,   184,   307,   308,   309,   310,   311,   312,   313,
       0,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,   676,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,     0,   166,     0,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,     0,   184,   307,   308,   309,   310,   311,
     312,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
       0,     0,   677,   307,   308,   309,   310,   311,   312,   313,
       0,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,   307,   308,   309,   310,
     311,   312,   313,   679,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,     0,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,     0,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,     0,   955,   307,   308,   309,   310,   311,
     312,   313,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,   943,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,     0,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   307,
     308,   309,   310,   311,   312,   313,   956,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
       0,     0,     0,     0,     0,     0,     0,   307,   308,   309,
     310,   311,   312,   313,   967,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,     0,     0,     0,     0,   664,   971,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,   665,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   944,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   494,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     628,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,     0,   307,   308,
     309,   310,   311,   312,   313,   634,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   635,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,   636,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   637,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,   638,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,   639,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,     0,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,   307,   308,   309,   310,   311,   312,   313,
     644,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   648,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,   649,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,   650,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   654,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   656,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
     657,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   658,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,   310,   311,
     312,   313,   667,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
       0,     0,     0,   307,   308,   309,   310,   311,   312,   313,
     668,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,   669,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,     0,   307,   308,   309,   310,
     311,   312,   313,   670,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,   671,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,   672,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   673,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
       0,     0,     0,     0,   307,   308,   309,   310,   311,   312,
     313,   674,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,   678,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   307,   308,   309,   310,
     311,   312,   313,   947,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,   952,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,   308,
     309,   310,   311,   312,   313,   953,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   310,
     311,   312,   313,   954,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   307,   308,   309,
     310,   311,   312,   313,   957,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,   307,
     308,   309,   310,   311,   312,   313,   958,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,   959,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,   960,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   307,   308,   309,   310,   311,   312,   313,   961,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,     0,   307,   308,   309,
     310,   311,   312,   313,   962,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   307,   308,
     309,   310,   311,   312,   313,   965,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   307,
     308,   309,   310,   311,   312,   313,   966,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,   972,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   973,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,     0,     0,     0,     0,     0,     0,   307,
     308,   309,   310,   311,   312,   313,  1034,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,  1085,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,     0,   307,   308,   309,   310,   311,   312,   313,  1117,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   307,   308,   309,   310,   311,   312,   313,
    1160,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   307,   308,   309,   310,   311,   312,
     313,  1182,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   307,   308,   309,   310,   311,
     312,   313,  1183,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,     0,     0,     0,     0,
     307,   308,   309,   310,   311,   312,   313,  1184,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,  1185,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,     0,     0,     0,   860,     0,     0,  1186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   861,     0,     0,     0,   862,     0,     0,   863,
    1189,   864,     0,     0,   865,     0,     0,   860,     0,     0,
       0,     0,     0,     0,   866,     0,     0,     0,  1086,  1087,
       0,   867,   868,  1088,     0,  1089,     0,   862,     0,     0,
     863,  1209,   864,     0,     0,   865,     0,     0,     0,     0,
       0,     0,     0,     0,   869,   866,     0,     0,  1090,  1091,
       0,  1092,   867,   868,     0,     0,   870,     0,     0,  1215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   869,     0,     0,     0,     0,
    1219,   366,   367,   871,   368,     0,   369,   370,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,  1220,   872,     0,     0,     0,     0,     0,   873,
       0,     0,     0,     0,   871,     0,     0,     0,     0,   372,
     373,   374,   375,  1268,     0,     0,   376,     0,     0,     0,
       0,   377,     0,     0,   872,     0,     0,     0,     0,     0,
     873,     0,     0,     0,  1279,     0,   378,  1093,  1094,     0,
       0,     0,   874,     0,   379,     0,     0,     0,     0,   380,
       0,     0,     0,     0,     0,  1288,   381,     0,     0,   382,
       0,     0,   383,   384,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   874,     0,     0,   385,     0,     0,     0,
    1289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   386,   387,     0,   388,   389,
       0,     0,     0,     0,   390,     0,   391,     0,     0,     0,
       0,   392,   393,     0,     0,     0,     0,   394,     0,     0,
       0,     0,   395,     0,   396,     0,     0,     0,   397,   307,
     308,   309,   310,   311,   312,   313,     0,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     307,   308,   309,   310,   311,   312,   313,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   307,   308,   309,   310,   311,   312,   313,     0,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,     0,   307,   308,   309,   310,   311,   312,   313,
    1071,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   793,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   659,     0,     0,     0,     0,     0,
       0,     0,   306,     0,     0,   941,     0,     0,     0,   307,
     308,   309,   310,   311,   312,   313,  1072,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
       0,     0,     0,   307,   308,   309,   310,   311,   312,   313,
     327,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,   307,   308,   309,   310,
     311,   312,   313,   688,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   828
};

static const yytype_int16 yycheck[] =
{
      57,   421,   754,   762,   918,   191,   758,   713,   714,   926,
     702,   717,   574,   575,     3,   192,     3,     3,   580,     3,
     582,     3,     3,   343,    20,     3,   149,   116,     8,   845,
     192,     6,     3,    72,     3,   102,     4,   116,     4,     5,
       6,     7,   920,   100,   101,     6,  1059,   149,    80,   412,
      20,    63,    95,    96,   111,   112,   113,    18,    41,   174,
     117,   174,     3,    41,    80,    38,   196,   229,     3,   174,
     196,   618,   161,    86,   185,   102,   203,   196,   185,  1065,
     359,   995,   161,     3,    10,    11,    12,    13,    14,    15,
      16,    57,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    86,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    39,   184,   615,    70,
     617,   102,   145,   116,   185,   682,    71,   857,   858,   151,
     892,   271,     3,   269,   271,   116,  1060,  1061,   271,   118,
     269,   903,   185,   859,   269,   907,   876,   128,   271,   191,
     199,   204,   921,   526,   269,   181,    86,   329,   136,   271,
     145,   145,    85,     3,   147,   538,   102,   118,   161,   268,
     269,   152,   194,   163,   145,   242,   175,   185,  1105,   246,
     269,   164,   175,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   271,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
    1233,   278,   279,   280,   544,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   419,   606,   271,   422,   303,   304,  1234,   411,
     307,   308,   309,   310,   311,    18,   433,   118,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     549,   550,   268,   330,   255,   256,   257,   258,   557,   826,
     269,  1159,   269,   269,  1004,   269,   247,   269,   118,  1041,
     268,  1043,  1108,   985,  1046,   261,   262,   263,   268,   786,
    1052,   788,    33,   269,    63,    18,   196,    73,   147,    72,
       3,    63,     3,     3,   196,    44,    45,   196,   196,     5,
    1323,    95,    96,   885,     3,   887,   888,   129,    56,    60,
      59,  1248,    71,    39,    20,    63,    75,   192,  1341,  1342,
     100,    56,   101,    74,   530,   271,   112,    59,    59,   101,
      81,     9,   409,   208,    69,    13,   116,   196,   160,    72,
      91,     0,    41,   203,  1070,   270,   271,  1370,     3,  1283,
       5,    77,   135,   101,   431,   432,   104,    70,   117,   269,
     659,   660,   439,   267,   147,   705,   196,   269,   708,   117,
     269,   269,   151,   203,   205,  1147,  1155,   125,  1150,   151,
    1152,    10,    11,    12,    13,    14,    15,    16,   139,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   135,   151,   163,   118,   157,   118,   118,   158,
     204,   271,   144,   144,   147,   194,   715,   197,     3,     3,
     179,   180,   194,     3,   103,    18,   158,   158,   505,   506,
       3,   508,    71,     9,   153,   194,   513,   117,   268,     3,
     271,   271,   174,   174,    20,   125,   194,   175,   199,    10,
      11,    12,    13,    14,    15,    16,  1228,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      63,   150,    61,   201,   175,     3,    56,   166,   117,   198,
     268,   269,   382,    56,    69,    69,   683,     3,   388,    69,
     390,   118,   171,    86,   179,   692,    69,   270,   271,    76,
     201,   117,   191,    10,    11,    12,    13,    14,    15,    16,
     587,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   163,   185,   115,    76,    13,    14,
       3,    16,   109,   271,    19,   124,   270,   271,     3,   116,
     129,   270,   271,   620,   121,   622,   185,    67,    68,   626,
     627,   128,   629,   142,   270,   271,   633,  1306,   270,   271,
     109,   270,   271,   640,   641,   642,   643,   116,   645,   646,
     647,   160,  1321,  1322,     3,   652,   653,   774,   655,   128,
     270,   271,     3,   172,   661,   662,   663,   270,   271,   270,
     271,  1340,    26,    27,    28,    29,    30,     3,   675,   676,
     677,   268,   679,   567,   568,   209,   570,   571,   572,   270,
     271,   688,   576,   577,   578,    47,    48,   581,   270,   271,
     270,   271,   699,    41,   923,     3,   133,   270,   271,   706,
     827,    47,    48,   830,   831,   832,   270,   271,  1078,   270,
     271,   270,   271,    10,    11,    12,    13,    14,    15,    16,
     147,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   270,   271,   743,    10,    11,    12,
      13,    14,    15,    16,   209,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   776,
     270,   271,   779,   270,   271,   270,   271,     3,   785,   270,
     271,   270,   271,   270,   271,   270,   271,   794,   270,   271,
     270,   271,   799,   800,    10,    11,    12,    13,    14,    15,
      16,   268,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   369,   370,   371,   372,     3,
     374,   828,   209,   377,   378,   379,   270,   271,   270,   271,
     384,   385,   386,   209,   271,   389,   270,   271,   270,   271,
     209,   848,   270,   271,   270,   271,   853,   270,   271,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     270,   271,   270,   271,   178,     3,     4,     5,     6,     7,
       8,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,   270,   271,   270,   271,   270,   271,    25,    26,    24,
      25,    26,    27,    28,    29,    30,   913,    35,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    57,
     270,   271,   270,   271,    62,     8,   943,    65,    66,   946,
     270,   271,   270,   271,   270,   271,   270,   271,   955,   956,
       9,    79,   268,   269,   269,    83,   270,   271,   268,   269,
     967,   270,   271,   970,   971,   270,   271,   270,   271,   270,
     271,   270,   271,   270,   271,   269,   983,   984,   540,   541,
     269,   109,   269,   990,   991,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   269,   271,   697,
     698,  1008,   988,   989,   269,  1012,    22,    23,    24,    25,
      26,    27,    28,    29,    30,  1022,   269,   145,   269,   269,
     269,   269,   269,   269,   269,   269,  1033,   269,   269,   269,
     269,   269,   269,   269,   162,   269,   269,   269,   269,   269,
     269,   169,   170,   204,   172,   269,   269,   269,    10,    11,
      12,    13,    14,    15,    16,   271,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,  1076,
    1077,   269,  1079,   269,  1081,   269,   269,   269,   269,   269,
     269,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   269,
     248,   269,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   269,
      32,   269,   269,   269,    36,   269,   269,   269,   269,  1156,
       3,     4,     5,     6,     7,     8,   269,   269,   269,   269,
     269,   269,   269,   269,    17,    18,    58,   271,    41,   271,
      56,    43,    25,    43,  1181,    56,    56,     3,     3,   147,
     209,  1188,     3,   147,   209,  1192,     3,    26,    80,    81,
       3,     3,  1199,     3,     3,     3,     3,     3,   270,   270,
      53,   270,   270,   270,    57,  1212,  1213,   270,   270,    62,
       3,   269,    65,    66,     3,   270,     3,   124,   146,     3,
      10,    11,    12,    13,    14,    15,    16,   119,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,     3,     4,     5,     6,     7,     8,     3,     3,
       3,     3,     3,   155,     3,   157,    17,    18,     3,   161,
       3,     3,   178,     3,    25,     3,   269,   130,   269,    52,
     269,   269,   174,   175,    35,   269,    37,     3,     3,   147,
       3,   147,   145,   209,     3,     3,   188,   148,     3,   191,
     270,   175,   271,   270,   175,   197,    57,    30,   269,   271,
     269,    62,   269,   269,    65,    66,   147,     3,     3,   178,
     125,   125,   125,   124,   124,     5,   178,    10,    11,    12,
      13,    14,    15,    16,   187,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     4,   145,
       5,     5,   269,   198,     3,   147,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   145,   248,   186,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,     3,     3,   269,   168,    10,    11,
      12,    13,    14,    15,    16,   147,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    51,   248,   131,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,    20,   149,   269,     3,
       4,     5,     6,     7,     8,   123,     4,   175,   106,   269,
       3,   105,   270,    17,    18,   269,     3,     3,   125,   125,
     269,    25,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,   270,    63,   270,   269,   269,   269,
     269,   269,   198,    57,     3,   198,   147,     3,    62,     3,
     269,    65,    66,   125,   125,   269,     3,   269,   271,    10,
      11,    12,    13,    14,    15,    16,   269,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     125,     3,     3,   270,    51,   111,   124,   270,   270,   270,
     270,     3,     4,     5,     6,     7,     8,   270,   270,   270,
     269,   269,   269,    20,   269,    17,    18,     3,   269,   269,
     145,     3,   269,    25,    26,   269,    42,   269,     3,   269,
       4,   125,     5,   125,    10,    11,    12,    13,    14,    15,
      16,   145,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    57,     4,   174,     4,   271,
      62,     3,     3,    65,    66,    10,    11,    12,    13,    14,
      15,    16,   269,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,     3,     3,   269,
     198,   269,   269,   198,     3,   269,   269,   269,     3,   269,
     204,   191,   271,   270,   270,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   145,   248,   186,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,    20,   270,   269,     3,   270,   270,     5,
       3,     3,     3,    41,   269,     5,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   269,   269,     4,
     270,   270,   270,   270,   269,   271,   269,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   269,   248,   198,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   269,   125,   269,     3,     4,
       5,     6,     7,     8,   125,   269,   269,    20,    18,     3,
     269,   269,    17,    18,   125,   270,   270,   270,     3,   269,
      25,   269,   269,     3,     3,   271,    10,    11,    12,    13,
      14,    15,    16,    51,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   271,   105,   159,
       3,   199,    57,     3,     3,   121,   271,    62,   156,     5,
      65,    66,     5,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   156,     5,     3,   270,   270,     3,
       3,     3,   269,   269,   167,   269,   167,   102,   156,     3,
       3,     4,     5,     6,     7,     8,     3,   132,   132,   271,
       3,     3,     3,   270,    17,    18,   270,   269,   269,   165,
       3,     3,    25,   164,     5,   269,   113,     3,    72,   126,
     183,   201,   147,    10,    11,    12,    13,    14,    15,    16,
     145,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    57,   102,   147,   143,     5,    62,
     143,     5,    65,    66,    64,   247,   632,   271,  1075,   330,
     337,   852,   602,    79,   413,   236,    10,    11,    12,    13,
      14,    15,    16,    86,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   695,    52,   616,
    1181,  1155,  1346,   922,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   145,   248,   910,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   579,   104,   269,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   271,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,    -1,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,    -1,    -1,   269,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,   271,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      86,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   145,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    57,    -1,    -1,   271,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    86,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   145,   248,    -1,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,    -1,    -1,   269,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   271,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,    -1,    -1,   269,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,   271,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    86,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   145,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    57,    -1,    -1,   271,    -1,    62,    -1,    -1,
      65,    66,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     145,   248,    -1,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,    -1,   269,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   271,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,    -1,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    -1,    -1,   269,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,   271,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   271,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,   271,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   105,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   271,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   271,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   270,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   270,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   270,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   270,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   270,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   270,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   270,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   270,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   270,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   270,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   270,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   270,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   270,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   270,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   270,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   270,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   270,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   270,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   270,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   270,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   270,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   270,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   270,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   270,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   270,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   270,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   270,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   270,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,   270,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     270,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   270,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   270,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   270,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   270,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    18,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    41,
     270,    43,    -1,    -1,    46,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    77,    78,
      -1,    63,    64,    82,    -1,    84,    -1,    38,    -1,    -1,
      41,   270,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    56,    -1,    -1,   107,   108,
      -1,   110,    63,    64,    -1,    -1,    98,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
     270,    49,    50,   125,    52,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,   270,   145,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,   270,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,   270,    -1,   114,   206,   207,    -1,
      -1,    -1,   194,    -1,   122,    -1,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,   270,   134,    -1,    -1,   137,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,    -1,    -1,   154,    -1,    -1,    -1,
     270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,   177,
      -1,    -1,    -1,    -1,   182,    -1,   184,    -1,    -1,    -1,
      -1,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,    -1,   200,    -1,   202,    -1,    -1,    -1,   206,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
      39,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    95,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    85,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      41,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    40,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   197,   273,   289,   290,   323,   327,
     328,   331,   332,   335,   336,   337,   339,   349,   350,   353,
     355,   356,   357,   379,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   361,   324,    71,   117,   163,   185,   341,
     185,   185,   341,     8,   163,   380,   381,   304,   185,   341,
     351,     3,    71,     0,   267,   334,     3,     3,   118,   354,
       3,     3,    70,   118,   354,   179,   117,   185,     3,   102,
     116,   128,   152,   325,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   342,     3,     3,   342,
       9,    20,     3,    86,   271,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   248,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   269,   274,   305,   306,     3,   116,
     128,     3,   269,   308,   309,   310,   312,   322,     3,   273,
      44,    45,    59,   158,    33,    60,    74,    81,    91,   139,
     157,   199,   268,   209,     3,    41,   147,     3,   118,   209,
       3,     3,    70,   118,   354,   268,   326,     3,   325,   102,
     271,   209,   209,   209,     3,   178,     3,   274,   274,   381,
     268,   269,     9,   274,   274,   274,   204,   274,   288,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   274,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    41,   307,   102,
     271,   271,   268,   307,   290,   308,   174,   271,    61,   115,
     129,   142,   160,   172,   313,   315,    41,   311,    43,    43,
      56,    69,     3,    69,    56,     3,    56,    69,    56,     3,
      69,     3,    56,    69,    56,     3,    49,    50,    52,    54,
      55,    67,    87,    88,    89,    90,    94,    99,   114,   122,
     127,   134,   137,   140,   141,   154,   173,   174,   176,   177,
     182,   184,   189,   190,   195,   200,   202,   206,   375,     3,
     147,   209,     3,   147,     3,   118,   209,     3,    26,   203,
     291,   196,   308,     3,     3,     3,     3,   174,   269,   343,
       3,   174,   343,     3,   274,   279,   280,   274,   274,   288,
      95,    96,   204,   285,   274,    53,   130,   187,   274,   286,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   270,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   270,   274,   274,   274,   270,
     274,   274,   274,   274,   274,   274,    26,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   270,   270,
     270,   270,   274,   274,   270,   274,   274,   274,   274,   274,
       6,    18,   145,   247,   269,    13,    14,    16,    19,   274,
      35,    37,   168,   269,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,     3,   308,   306,     3,   333,
       3,   100,   116,   197,   319,   270,   270,     3,   352,   309,
     129,   160,   316,   310,   124,   146,   314,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   375,     3,   178,     3,
       3,     3,   269,   371,   371,   371,   371,   371,   371,   269,
     371,   371,   371,    52,   372,   372,   371,   371,   371,   269,
     372,   371,   372,   269,   269,    18,    63,    86,   196,   269,
       3,     3,   147,     3,   147,   209,     3,   116,   161,   268,
     269,   377,   378,   274,   148,   297,   308,   291,   326,     3,
     348,     3,   344,   201,   290,   348,   201,   290,   271,   270,
     186,    95,    96,   274,   274,   290,   102,   271,   270,   102,
     274,   271,   271,   271,   270,   270,   270,   270,   270,   270,
     271,   271,   271,   271,   270,   271,   271,   271,   270,   270,
     270,   270,   271,   271,   270,   271,   270,   270,   270,    41,
     271,   271,   271,   271,   249,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   271,   271,   271,   270,   271,
       6,   145,   281,   283,   274,   274,   269,   274,    40,   269,
     269,   269,   275,   291,   271,   307,   125,   125,   125,    20,
     268,   271,   291,   314,   314,   124,   147,   310,   124,    63,
     101,   151,   194,   375,   375,     3,   370,   375,     3,   178,
     178,     5,   373,   374,   373,   373,     4,   376,   373,   373,
     373,   374,   374,   373,   373,   373,   376,   374,   373,   374,
       5,     5,   145,   269,   274,   198,     3,   255,   256,   257,
     258,   329,   330,   196,   269,   147,     3,   196,   269,     3,
       3,   147,     3,    56,    63,   101,   104,   117,   125,   151,
     194,   362,   363,   369,   311,    51,   131,   300,   291,    20,
     149,   271,   340,   270,   271,   269,   345,   340,   345,   340,
     279,   274,   274,    95,   186,   270,   274,   274,   274,   102,
     123,   287,   287,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   375,   375,   274,   274,   274,     4,
     274,   274,   274,   274,   279,   290,   282,   284,    40,   274,
     278,   276,   277,   290,   106,   292,     3,   319,   105,   320,
     320,   320,   274,     3,     3,   297,   310,   274,   147,   196,
     317,   318,   310,   269,   125,   125,   269,   370,   370,   375,
      18,    34,    38,    41,    43,    46,    56,    63,    64,    86,
      98,   125,   145,   151,   194,   338,   370,     3,     3,   270,
     271,   192,   208,    67,    68,   270,   271,   270,   270,   270,
      63,   274,   269,   269,   269,   269,   269,   270,   271,   198,
     329,     3,   196,   269,   198,   329,   196,   269,   147,     3,
     269,   377,     3,   269,   125,   117,   125,   269,   269,   125,
     269,   270,   271,     3,   290,     3,     5,   298,   299,   274,
      86,   274,   125,     3,     3,    86,   274,   347,   271,   340,
     340,    95,   274,   105,   270,   270,   271,   270,   274,   274,
     270,   270,   270,   270,   270,   271,   271,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   271,   270,   270,
     271,   271,   270,   270,   270,   270,   279,   290,   274,   290,
     290,   290,   270,    51,   111,   296,   124,   269,   269,   269,
      20,    20,   268,   300,   274,   269,   318,   274,   269,   269,
       3,   368,   338,   338,   370,   145,     3,   269,   269,   269,
      42,     3,   269,     4,     4,     5,     6,     7,    57,   261,
     262,   263,   269,   125,   125,   338,     5,   174,     4,   374,
       4,   374,   374,   269,   270,   329,     3,     3,     3,     3,
       3,   269,   270,   269,   198,   329,   269,   270,   198,   329,
       3,   196,   269,   362,    63,   101,   151,   194,   274,   269,
     269,   269,     3,   303,   303,   269,   368,   358,   377,   363,
     375,    39,    85,   294,   294,   271,   133,   271,   191,    20,
     270,   271,   346,   274,   274,   270,    77,    78,    82,    84,
     107,   108,   110,   206,   207,   274,   274,   274,   274,   274,
     270,   270,   270,   270,   270,   274,   293,   274,   297,     3,
     321,   321,   321,   274,   274,     3,   303,   270,     3,   365,
       3,   364,   270,   271,   338,     5,   274,     5,    41,    63,
     151,   194,   274,   269,   269,   269,   274,   270,     4,   274,
     270,   270,   270,   270,   271,   329,   329,   269,   270,   329,
     269,   270,   269,   198,   329,   270,   269,   125,   125,   269,
     270,   365,   303,   303,   270,   271,   270,   364,   270,    38,
     147,   164,   370,   299,   274,   274,   348,    86,   274,    86,
     274,   269,   270,   270,   270,   270,   270,   270,   271,   270,
     294,   205,   271,   295,   300,   270,   271,   270,   270,    20,
     270,    18,   270,   271,   270,   271,     3,   270,   271,   270,
     270,   271,   269,   269,   125,   270,   270,   270,   270,   270,
     270,     3,   270,   270,   329,   270,   329,   329,   269,   270,
     358,   377,   274,   269,   269,   368,   270,   270,   270,     3,
     270,     5,    20,     3,    51,   347,   274,   159,   274,   105,
     301,     3,   274,   199,   156,     3,     3,     5,    47,    48,
       5,   274,   274,   270,   270,   270,   270,   329,   270,   365,
     364,   270,   156,     5,    80,   181,   153,   198,   270,   270,
     294,   166,   191,   121,   302,     3,   270,   270,   270,   270,
     270,   270,   270,     3,     3,     3,   269,   269,   167,   167,
     303,   269,    47,    48,   156,   268,   269,     3,     3,   132,
     132,     3,   366,     3,     3,   366,   270,   270,   270,   271,
     268,   269,   269,   270,   269,   165,   367,     3,     3,   366,
     366,   367,   164,   359,   360,     5,    18,    72,   135,   147,
     269,   270,   270,    18,     3,   270,   271,    72,   199,   113,
     103,   150,   171,    80,   191,   366,   367,   367,   201,   360,
      73,   112,    59,   144,   158,   174,    59,   144,   158,   174,
     270,   126,    86,   145,    86,   145,   367,   183,     4,   136,
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
#line 368 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 374 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 375 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 7:
#line 377 "parser/evoparser.y"
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
#line 395 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 403 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 411 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 417 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 424 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 425 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 426 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 427 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 428 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 429 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 430 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 431 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 432 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 433 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 434 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 435 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 436 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 437 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 438 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 439 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 440 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 442 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 447 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 448 "parser/evoparser.y"
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
#line 456 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 457 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 458 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 459 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 460 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 461 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 464 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 465 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 466 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 467 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 468 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 471 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 472 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 475 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 476 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 479 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 483 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 483 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 484 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 484 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 485 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 486 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 493 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 494 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 501 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 502 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 512 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 516 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 517 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 518 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 519 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 520 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 521 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 522 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 67:
#line 523 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 68:
#line 525 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 69:
#line 526 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 70:
#line 527 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 71:
#line 528 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 72:
#line 529 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 73:
#line 530 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 74:
#line 531 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 75:
#line 532 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 76:
#line 533 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 77:
#line 534 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 78:
#line 535 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 79:
#line 536 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 80:
#line 537 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 81:
#line 538 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 82:
#line 539 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 83:
#line 540 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 84:
#line 541 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 85:
#line 542 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 86:
#line 543 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 87:
#line 544 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 88:
#line 545 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 89:
#line 546 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 90:
#line 547 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 91:
#line 548 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 92:
#line 549 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 93:
#line 550 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 94:
#line 551 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 95:
#line 552 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 96:
#line 553 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 97:
#line 554 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 98:
#line 555 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 99:
#line 556 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 100:
#line 557 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 101:
#line 558 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 102:
#line 560 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 103:
#line 561 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 104:
#line 562 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 105:
#line 563 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 106:
#line 564 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 107:
#line 565 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 108:
#line 566 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 109:
#line 567 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 110:
#line 569 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 111:
#line 570 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 112:
#line 572 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 113:
#line 573 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 114:
#line 574 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 115:
#line 576 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 116:
#line 577 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 117:
#line 578 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 118:
#line 579 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 119:
#line 586 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 120:
#line 593 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 121:
#line 600 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 122:
#line 604 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 123:
#line 608 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 124:
#line 614 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 125:
#line 615 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 126:
#line 616 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 127:
#line 620 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 128:
#line 626 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 129:
#line 632 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 130:
#line 633 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 131:
#line 634 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 132:
#line 635 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 133:
#line 636 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 134:
#line 637 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 135:
#line 638 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 136:
#line 639 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 137:
#line 640 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 138:
#line 644 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 139:
#line 646 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 140:
#line 648 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 141:
#line 650 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 142:
#line 654 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 143:
#line 662 "parser/evoparser.y"
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
#line 672 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 145:
#line 673 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 146:
#line 676 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 147:
#line 677 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 148:
#line 681 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 149:
#line 689 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 150:
#line 697 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 151:
#line 708 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 152:
#line 717 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 153:
#line 722 "parser/evoparser.y"
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
#line 733 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 157:
#line 735 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 158:
#line 738 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 159:
#line 745 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 160:
#line 753 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 161:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 162:
#line 755 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 163:
#line 758 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 759 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 166:
#line 763 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 171:
#line 775 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 172:
#line 781 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 173:
#line 789 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 174:
#line 790 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 175:
#line 791 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 176:
#line 792 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 177:
#line 795 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 178:
#line 796 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 179:
#line 797 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 180:
#line 798 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 181:
#line 799 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 183:
#line 803 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 184:
#line 806 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 185:
#line 807 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 186:
#line 810 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 187:
#line 811 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 188:
#line 812 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 189:
#line 813 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 190:
#line 814 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 191:
#line 815 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 192:
#line 816 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 193:
#line 817 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 194:
#line 818 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 195:
#line 821 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 196:
#line 822 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 197:
#line 824 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 198:
#line 832 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 199:
#line 837 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 200:
#line 838 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 201:
#line 839 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 202:
#line 842 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 843 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 206:
#line 852 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 207:
#line 858 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 208:
#line 859 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 209:
#line 860 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 212:
#line 869 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 213:
#line 871 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 214:
#line 873 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 215:
#line 875 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 216:
#line 877 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 217:
#line 880 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 218:
#line 881 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 219:
#line 882 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 220:
#line 885 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 221:
#line 886 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 222:
#line 889 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 223:
#line 890 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 224:
#line 893 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 225:
#line 894 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 226:
#line 895 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 229:
#line 902 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 230:
#line 903 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 231:
#line 908 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 232:
#line 910 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 233:
#line 912 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 235:
#line 916 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 236:
#line 917 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 237:
#line 920 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 238:
#line 921 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 239:
#line 924 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 240:
#line 929 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 241:
#line 939 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 242:
#line 946 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 243:
#line 947 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 244:
#line 948 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 245:
#line 949 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 246:
#line 954 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 247:
#line 958 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 248:
#line 960 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 251:
#line 966 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 252:
#line 971 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 253:
#line 978 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 254:
#line 985 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 255:
#line 995 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 256:
#line 1002 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 257:
#line 1009 "parser/evoparser.y"
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
#line 1019 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 259:
#line 1027 "parser/evoparser.y"
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
#line 1037 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 261:
#line 1045 "parser/evoparser.y"
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
#line 1054 "parser/evoparser.y"
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
#line 1063 "parser/evoparser.y"
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
#line 1073 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 265:
#line 1081 "parser/evoparser.y"
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
#line 1090 "parser/evoparser.y"
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
#line 1099 "parser/evoparser.y"
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
#line 1109 "parser/evoparser.y"
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
#line 1118 "parser/evoparser.y"
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
#line 1130 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 271:
#line 1135 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 272:
#line 1140 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 273:
#line 1146 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 274:
#line 1153 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 275:
#line 1160 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 276:
#line 1167 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 277:
#line 1177 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 278:
#line 1184 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 279:
#line 1193 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 280:
#line 1200 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 281:
#line 1206 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 282:
#line 1214 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 283:
#line 1220 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 285:
#line 1228 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 286:
#line 1229 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 287:
#line 1230 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 288:
#line 1231 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 289:
#line 1236 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 290:
#line 1243 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 291:
#line 1252 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 292:
#line 1259 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 293:
#line 1265 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 294:
#line 1275 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 295:
#line 1279 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 296:
#line 1285 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 297:
#line 1291 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 298:
#line 1298 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 299:
#line 1304 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 300:
#line 1311 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 301:
#line 1317 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 302:
#line 1323 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 303:
#line 1329 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 304:
#line 1335 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 305:
#line 1341 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 306:
#line 1347 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 307:
#line 1353 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 308:
#line 1359 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 309:
#line 1365 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 310:
#line 1371 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 311:
#line 1377 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 312:
#line 1383 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 313:
#line 1389 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 314:
#line 1395 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 315:
#line 1402 "parser/evoparser.y"
    { ;}
    break;

  case 316:
#line 1403 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 317:
#line 1404 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 318:
#line 1408 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 319:
#line 1416 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 320:
#line 1422 "parser/evoparser.y"
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
#line 1435 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 323:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1439 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 325:
#line 1440 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 326:
#line 1441 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 327:
#line 1442 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 331:
#line 1449 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 332:
#line 1453 "parser/evoparser.y"
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
#line 1463 "parser/evoparser.y"
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
#line 1475 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1476 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 336:
#line 1476 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 337:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 338:
#line 1480 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 339:
#line 1481 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 340:
#line 1482 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 341:
#line 1486 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 342:
#line 1489 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 343:
#line 1490 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1491 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 345:
#line 1492 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 346:
#line 1498 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 347:
#line 1504 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 348:
#line 1509 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 349:
#line 1514 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 350:
#line 1519 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 351:
#line 1528 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 352:
#line 1535 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 353:
#line 1536 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 354:
#line 1537 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 355:
#line 1542 "parser/evoparser.y"
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
#line 1553 "parser/evoparser.y"
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
#line 1565 "parser/evoparser.y"
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
#line 1576 "parser/evoparser.y"
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
#line 1591 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 360:
#line 1595 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 361:
#line 1599 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 362:
#line 1600 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 363:
#line 1605 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 364:
#line 1607 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 365:
#line 1609 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 366:
#line 1611 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 367:
#line 1614 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 368:
#line 1615 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 369:
#line 1619 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 370:
#line 1624 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 371:
#line 1626 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 372:
#line 1628 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 373:
#line 1630 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 374:
#line 1632 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 375:
#line 1636 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 376:
#line 1640 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 377:
#line 1641 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 378:
#line 1646 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 379:
#line 1656 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 380:
#line 1665 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 382:
#line 1669 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 383:
#line 1670 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 384:
#line 1671 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 385:
#line 1672 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 386:
#line 1674 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 387:
#line 1676 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 390:
#line 1684 "parser/evoparser.y"
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
#line 1699 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 392:
#line 1707 "parser/evoparser.y"
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
#line 1721 "parser/evoparser.y"
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
#line 1735 "parser/evoparser.y"
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
#line 1749 "parser/evoparser.y"
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
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 397:
#line 1762 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 398:
#line 1763 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 399:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 400:
#line 1767 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1770 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 402:
#line 1771 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 403:
#line 1772 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 404:
#line 1773 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 405:
#line 1774 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 406:
#line 1775 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 407:
#line 1776 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 408:
#line 1777 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 409:
#line 1779 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 410:
#line 1781 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 411:
#line 1783 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 412:
#line 1785 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 413:
#line 1787 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 414:
#line 1789 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 415:
#line 1792 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 416:
#line 1793 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 417:
#line 1796 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 418:
#line 1797 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 419:
#line 1800 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 420:
#line 1801 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 422:
#line 1805 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 423:
#line 1806 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 424:
#line 1807 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 425:
#line 1808 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 426:
#line 1809 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 427:
#line 1810 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 428:
#line 1811 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 429:
#line 1812 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 430:
#line 1813 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 431:
#line 1814 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 432:
#line 1815 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 433:
#line 1816 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 434:
#line 1817 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 435:
#line 1818 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 436:
#line 1819 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 437:
#line 1820 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 438:
#line 1821 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 439:
#line 1824 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 440:
#line 1825 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 441:
#line 1828 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 442:
#line 1830 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 443:
#line 1838 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 444:
#line 1839 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 446:
#line 1841 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 447:
#line 1842 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 448:
#line 1843 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 449:
#line 1844 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1845 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 451:
#line 1846 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 452:
#line 1847 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 453:
#line 1848 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 454:
#line 1849 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 455:
#line 1856 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 456:
#line 1857 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 457:
#line 1858 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 458:
#line 1859 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 459:
#line 1860 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 460:
#line 1861 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 461:
#line 1862 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 462:
#line 1863 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 463:
#line 1864 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 464:
#line 1865 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 465:
#line 1866 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 1867 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 467:
#line 1868 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 468:
#line 1869 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 469:
#line 1870 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 470:
#line 1871 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 471:
#line 1872 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 472:
#line 1873 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 473:
#line 1874 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 474:
#line 1875 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 475:
#line 1876 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 476:
#line 1879 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 477:
#line 1880 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 478:
#line 1881 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 479:
#line 1884 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 480:
#line 1885 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 481:
#line 1888 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 482:
#line 1889 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 483:
#line 1890 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 485:
#line 1894 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 486:
#line 1895 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 487:
#line 1899 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 488:
#line 1900 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 489:
#line 1901 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 490:
#line 1902 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 491:
#line 1903 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 492:
#line 1904 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 493:
#line 1905 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 494:
#line 1906 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 495:
#line 1907 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 496:
#line 1908 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 497:
#line 1909 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 498:
#line 1910 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 499:
#line 1911 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 500:
#line 1912 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 501:
#line 1913 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 502:
#line 1914 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 503:
#line 1915 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 504:
#line 1916 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 505:
#line 1917 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 506:
#line 1918 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 507:
#line 1919 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 508:
#line 1920 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 509:
#line 1921 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 510:
#line 1922 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 511:
#line 1923 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 512:
#line 1924 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 513:
#line 1925 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 514:
#line 1926 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 515:
#line 1927 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 516:
#line 1928 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 517:
#line 1929 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 518:
#line 1930 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 519:
#line 1933 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 520:
#line 1934 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 521:
#line 1938 "parser/evoparser.y"
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
#line 1950 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 523:
#line 1951 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 524:
#line 1952 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 525:
#line 1956 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 526:
#line 1959 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 527:
#line 1960 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 531:
#line 1964 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 532:
#line 1965 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6960 "parser/evoparser.tab.c"
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


#line 1968 "parser/evoparser.y"

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
