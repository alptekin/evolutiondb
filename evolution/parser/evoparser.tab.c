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
     FCOUNT = 494,
     FSUM = 495,
     FAVG = 496,
     FMIN = 497,
     FMAX = 498,
     FUPPER = 499,
     FLOWER = 500,
     FLENGTH = 501,
     FCONCAT = 502,
     FREPLACE = 503,
     FCOALESCE = 504,
     FGEN_RANDOM_UUID = 505,
     FGEN_RANDOM_UUID_V7 = 506,
     FSNOWFLAKE_ID = 507,
     FLAST_INSERT_ID = 508,
     FEVO_SLEEP = 509,
     FEVO_JITTER = 510
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
#define FCOUNT 494
#define FSUM 495
#define FAVG 496
#define FMIN 497
#define FMAX 498
#define FUPPER 499
#define FLOWER 500
#define FLENGTH 501
#define FCONCAT 502
#define FREPLACE 503
#define FCOALESCE 504
#define FGEN_RANDOM_UUID 505
#define FGEN_RANDOM_UUID_V7 506
#define FSNOWFLAKE_ID 507
#define FLAST_INSERT_ID 508
#define FEVO_SLEEP 509
#define FEVO_JITTER 510




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
#line 661 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 674 "parser/evoparser.tab.c"

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
#define YYLAST   4933

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  270
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  531
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1379

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   510

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     267,   268,    26,    24,   269,    25,   266,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   265,
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
     264
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
     222,   227,   232,   237,   242,   247,   252,   261,   268,   275,
     284,   289,   297,   304,   309,   314,   319,   326,   335,   342,
     349,   356,   365,   374,   379,   386,   393,   400,   405,   410,
     415,   422,   427,   434,   439,   446,   450,   455,   460,   465,
     469,   473,   480,   485,   490,   495,   500,   505,   510,   517,
     524,   531,   538,   547,   551,   555,   564,   575,   579,   583,
     587,   591,   596,   603,   605,   607,   609,   616,   623,   627,
     631,   635,   639,   643,   647,   651,   655,   659,   664,   671,
     675,   681,   686,   692,   696,   701,   705,   710,   712,   714,
     716,   718,   722,   735,   736,   739,   740,   745,   748,   753,
     754,   756,   758,   759,   762,   763,   766,   767,   771,   773,
     777,   780,   783,   784,   787,   792,   797,   798,   801,   804,
     809,   814,   815,   818,   820,   824,   825,   828,   831,   834,
     837,   840,   843,   846,   849,   851,   855,   857,   860,   863,
     865,   866,   868,   872,   874,   876,   880,   886,   890,   894,
     896,   897,   903,   907,   913,   920,   926,   927,   929,   931,
     932,   934,   936,   938,   941,   944,   945,   946,   948,   951,
     956,   963,   970,   977,   978,   981,   982,   984,   988,   992,
     994,  1002,  1005,  1008,  1011,  1012,  1019,  1022,  1027,  1028,
    1031,  1039,  1041,  1045,  1051,  1053,  1062,  1073,  1083,  1095,
    1106,  1119,  1131,  1145,  1155,  1167,  1178,  1191,  1203,  1216,
    1218,  1222,  1224,  1229,  1234,  1239,  1246,  1248,  1252,  1255,
    1259,  1265,  1267,  1271,  1272,  1275,  1278,  1282,  1286,  1288,
    1292,  1294,  1298,  1304,  1306,  1317,  1328,  1346,  1359,  1379,
    1391,  1398,  1407,  1414,  1421,  1428,  1438,  1445,  1451,  1460,
    1468,  1478,  1487,  1498,  1508,  1509,  1511,  1514,  1516,  1525,
    1532,  1533,  1538,  1539,  1542,  1545,  1548,  1551,  1553,  1554,
    1555,  1559,  1561,  1565,  1569,  1570,  1577,  1579,  1581,  1585,
    1589,  1597,  1601,  1605,  1611,  1617,  1619,  1628,  1636,  1644,
    1646,  1655,  1656,  1659,  1662,  1666,  1672,  1678,  1686,  1692,
    1694,  1699,  1704,  1708,  1714,  1718,  1724,  1725,  1728,  1730,
    1736,  1744,  1752,  1762,  1774,  1776,  1779,  1783,  1785,  1795,
    1807,  1808,  1813,  1817,  1823,  1829,  1839,  1850,  1852,  1856,
    1866,  1876,  1886,  1893,  1905,  1914,  1915,  1917,  1920,  1922,
    1926,  1932,  1940,  1945,  1950,  1956,  1962,  1967,  1974,  1986,
    2000,  2014,  2030,  2035,  2042,  2044,  2048,  2050,  2054,  2056,
    2060,  2061,  2066,  2072,  2077,  2083,  2088,  2094,  2099,  2105,
    2110,  2115,  2119,  2123,  2127,  2130,  2134,  2139,  2144,  2146,
    2150,  2151,  2156,  2157,  2161,  2164,  2168,  2172,  2176,  2180,
    2186,  2192,  2198,  2202,  2208,  2211,  2219,  2225,  2233,  2239,
    2242,  2246,  2249,  2253,  2256,  2260,  2266,  2271,  2277,  2285,
    2294,  2303,  2311,  2318,  2325,  2331,  2332,  2336,  2342,  2343,
    2345,  2346,  2349,  2352,  2353,  2358,  2362,  2365,  2369,  2373,
    2377,  2381,  2385,  2389,  2393,  2397,  2401,  2405,  2407,  2409,
    2411,  2413,  2415,  2419,  2425,  2428,  2433,  2435,  2437,  2439,
    2441,  2445,  2449,  2453,  2457,  2463,  2469,  2471,  2473,  2475,
    2479,  2483,  2484,  2486,  2488,  2490,  2494,  2498,  2501,  2503,
    2507,  2511
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     271,     0,    -1,   287,   265,    -1,   287,   265,   271,    -1,
       3,    -1,     3,   266,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   272,    24,
     272,    -1,   272,    25,   272,    -1,   272,    26,   272,    -1,
     272,    27,   272,    -1,   272,    28,   272,    -1,   272,    29,
     272,    -1,    25,   272,    -1,   267,   272,   268,    -1,   272,
      12,   272,    -1,   272,    10,   272,    -1,   272,    11,   272,
      -1,   272,    21,   272,    -1,   272,    22,   272,    -1,   272,
      30,   272,    -1,   272,    23,   272,    -1,    18,   272,    -1,
      17,   272,    -1,   272,    20,   272,    -1,    -1,   272,    20,
     267,   273,   288,   268,    -1,    -1,   272,    20,    37,   267,
     274,   288,   268,    -1,    -1,   272,    20,   168,   267,   275,
     288,   268,    -1,    -1,   272,    20,    35,   267,   276,   288,
     268,    -1,   272,    15,   145,    -1,   272,    15,    18,   145,
      -1,   272,    15,     6,    -1,   272,    15,    18,     6,    -1,
       8,     9,   272,    -1,   272,    19,   272,    40,   272,    -1,
     272,    18,    19,   272,    40,   272,    -1,   272,    -1,   272,
     269,   277,    -1,    -1,   277,    -1,    -1,   272,    16,   267,
     279,   277,   268,    -1,    -1,   272,    18,    16,   267,   280,
     277,   268,    -1,    -1,   272,    16,   267,   281,   288,   268,
      -1,    -1,   272,    18,    16,   267,   282,   288,   268,    -1,
      -1,   209,   267,   283,   288,   268,    -1,     3,   267,   278,
     268,    -1,   248,   267,    26,   268,    -1,   248,   267,   272,
     268,    -1,   249,   267,   272,   268,    -1,   250,   267,   272,
     268,    -1,   251,   267,   272,   268,    -1,   252,   267,   272,
     268,    -1,   210,   267,   272,   269,   272,   269,   272,   268,
      -1,   210,   267,   272,   269,   272,   268,    -1,   210,   267,
     272,   102,   272,   268,    -1,   210,   267,   272,   102,   272,
     105,   272,   268,    -1,   211,   267,   272,   268,    -1,   211,
     267,   284,   272,   102,   272,   268,    -1,   211,   267,   284,
     102,   272,   268,    -1,   253,   267,   272,   268,    -1,   254,
     267,   272,   268,    -1,   255,   267,   272,   268,    -1,   256,
     267,   272,   269,   272,   268,    -1,   257,   267,   272,   269,
     272,   269,   272,   268,    -1,   258,   267,   272,   269,   272,
     268,    -1,   222,   267,   272,   269,   272,   268,    -1,   223,
     267,   272,   269,   272,   268,    -1,   224,   267,   272,   269,
     272,   269,   272,   268,    -1,   225,   267,   272,   269,   272,
     269,   272,   268,    -1,   226,   267,   272,   268,    -1,   227,
     267,   272,   269,   272,   268,    -1,   228,   267,   272,   269,
     272,   268,    -1,   229,   267,   272,   269,   272,   268,    -1,
     230,   267,   272,   268,    -1,   231,   267,   272,   268,    -1,
     232,   267,   272,   268,    -1,   233,   267,   272,   269,   272,
     268,    -1,   233,   267,   272,   268,    -1,   234,   267,   272,
     269,   272,   268,    -1,   235,   267,   272,   268,    -1,   236,
     267,   272,   269,   272,   268,    -1,   237,   267,   268,    -1,
     238,   267,   272,   268,    -1,   239,   267,   272,   268,    -1,
     240,   267,   272,   268,    -1,   241,   267,   268,    -1,   221,
     267,   268,    -1,   214,   267,   272,   269,   272,   268,    -1,
     215,   267,   272,   268,    -1,   216,   267,   272,   268,    -1,
     217,   267,   272,   268,    -1,   218,   267,   272,   268,    -1,
     219,   267,   272,   268,    -1,   220,   267,   272,   268,    -1,
     242,   267,   272,    41,   373,   268,    -1,   243,   267,   272,
     269,   373,   268,    -1,   244,   267,   272,   269,   272,   268,
      -1,   245,   267,   272,   269,   272,   268,    -1,   246,   267,
     272,   269,   272,   269,   272,   268,    -1,   272,    15,     6,
      -1,   272,    15,   247,    -1,   256,   267,   272,   269,   272,
     269,   272,   268,    -1,   256,   267,   272,   269,   272,   269,
     272,   269,   272,   268,    -1,   259,   267,   268,    -1,   260,
     267,   268,    -1,   261,   267,   268,    -1,   262,   267,   268,
      -1,   263,   267,   272,   268,    -1,   264,   267,   272,   269,
     272,   268,    -1,   130,    -1,   187,    -1,    53,    -1,   212,
     267,   272,   269,   285,   268,    -1,   213,   267,   272,   269,
     285,   268,    -1,   123,   272,   206,    -1,   123,   272,    77,
      -1,   123,   272,    78,    -1,   123,   272,    82,    -1,   123,
     272,    84,    -1,   123,   272,   207,    -1,   123,   272,   108,
      -1,   123,   272,   107,    -1,   123,   272,   110,    -1,    62,
     272,   286,    95,    -1,    62,   272,   286,    96,   272,    95,
      -1,    62,   286,    95,    -1,    62,   286,    96,   272,    95,
      -1,   204,   272,   186,   272,    -1,   286,   204,   272,   186,
     272,    -1,   272,    14,   272,    -1,   272,    18,    14,   272,
      -1,   272,    13,   272,    -1,   272,    18,    13,   272,    -1,
      57,    -1,    65,    -1,    66,    -1,   288,    -1,   175,   302,
     303,    -1,   175,   302,   303,   102,   306,   289,   290,   294,
     295,   298,   299,   300,    -1,    -1,   203,   272,    -1,    -1,
     106,    51,   291,   293,    -1,   272,   292,    -1,   291,   269,
     272,   292,    -1,    -1,    39,    -1,    85,    -1,    -1,   205,
     159,    -1,    -1,   111,   272,    -1,    -1,   148,    51,   296,
      -1,   297,    -1,   296,   269,   297,    -1,     3,   292,    -1,
       5,   292,    -1,    -1,   131,   272,    -1,   131,   272,   269,
     272,    -1,   131,   272,   133,   272,    -1,    -1,   105,   191,
      -1,   105,   166,    -1,   105,   191,   167,   132,    -1,   105,
     166,   167,   132,    -1,    -1,   121,   301,    -1,     3,    -1,
     301,   269,     3,    -1,    -1,   302,    35,    -1,   302,    79,
      -1,   302,    83,    -1,   302,   109,    -1,   302,   172,    -1,
     302,   162,    -1,   302,   170,    -1,   302,   169,    -1,   304,
      -1,   303,   269,   304,    -1,    26,    -1,   272,   305,    -1,
      41,     3,    -1,     3,    -1,    -1,   307,    -1,   306,   269,
     307,    -1,   308,    -1,   310,    -1,     3,   305,   317,    -1,
       3,   266,     3,   305,   317,    -1,   320,   309,     3,    -1,
     267,   306,   268,    -1,    41,    -1,    -1,   307,   311,   124,
     308,   315,    -1,   307,   172,   308,    -1,   307,   172,   308,
     147,   272,    -1,   307,   313,   312,   124,   308,   316,    -1,
     307,   142,   314,   124,   308,    -1,    -1,   115,    -1,    61,
      -1,    -1,   146,    -1,   129,    -1,   160,    -1,   129,   312,
      -1,   160,   312,    -1,    -1,    -1,   316,    -1,   147,   272,
      -1,   196,   267,   301,   268,    -1,   197,   125,   318,   267,
     319,   268,    -1,   116,   125,   318,   267,   319,   268,    -1,
     100,   125,   318,   267,   319,   268,    -1,    -1,   105,   124,
      -1,    -1,     3,    -1,   319,   269,     3,    -1,   267,   288,
     268,    -1,   321,    -1,    80,   322,   102,     3,   289,   295,
     298,    -1,   322,   128,    -1,   322,   152,    -1,   322,   116,
      -1,    -1,    80,   322,   323,   102,   306,   289,    -1,     3,
     324,    -1,   323,   269,     3,   324,    -1,    -1,   266,    26,
      -1,    80,   322,   102,   323,   196,   306,   289,    -1,   325,
      -1,    81,   185,     3,    -1,    81,   185,   118,   209,     3,
      -1,   326,    -1,    58,   117,     3,   147,     3,   267,   327,
     268,    -1,    58,   117,   118,   209,     3,   147,     3,   267,
     327,   268,    -1,    58,   194,   117,     3,   147,     3,   267,
     327,   268,    -1,    58,   194,   117,   118,   209,     3,   147,
       3,   267,   327,   268,    -1,    58,   117,     3,   147,     3,
     196,   198,   267,   327,   268,    -1,    58,   117,   118,   209,
       3,   147,     3,   196,   198,   267,   327,   268,    -1,    58,
     194,   117,     3,   147,     3,   196,   198,   267,   327,   268,
      -1,    58,   194,   117,   118,   209,     3,   147,     3,   196,
     198,   267,   327,   268,    -1,    58,   117,    70,     3,   147,
       3,   267,   327,   268,    -1,    58,   117,    70,   118,   209,
       3,   147,     3,   267,   327,   268,    -1,    58,   194,   117,
      70,     3,   147,     3,   267,   327,   268,    -1,    58,   194,
     117,    70,   118,   209,     3,   147,     3,   267,   327,   268,
      -1,    58,   117,    70,     3,   147,     3,   196,   198,   267,
     327,   268,    -1,    58,   194,   117,    70,     3,   147,     3,
     196,   198,   267,   327,   268,    -1,     3,    -1,   327,   269,
       3,    -1,   328,    -1,   253,   267,     3,   268,    -1,   254,
     267,     3,   268,    -1,   255,   267,     3,   268,    -1,   256,
     267,     3,   269,     3,   268,    -1,   329,    -1,    81,   117,
       3,    -1,   330,   332,    -1,   188,   185,     3,    -1,   188,
     185,     3,   269,   331,    -1,     3,    -1,   331,   269,     3,
      -1,    -1,   332,    59,    -1,   332,   158,    -1,   332,    45,
      43,    -1,   332,    44,    43,    -1,   333,    -1,   155,   185,
       3,    -1,   334,    -1,    36,   185,     3,    -1,    36,   185,
       3,   266,     3,    -1,   335,    -1,    32,   185,     3,    33,
      56,     3,    63,   267,   272,   268,    -1,    32,   185,     3,
      33,    56,     3,   194,   267,   366,   268,    -1,    32,   185,
       3,    33,    56,     3,   101,   125,   267,   363,   268,   156,
       3,   267,   364,   268,   365,    -1,    32,   185,     3,    33,
      56,     3,    63,   267,   272,   268,    18,   199,    -1,    32,
     185,     3,    33,    56,     3,   101,   125,   267,   363,   268,
     156,     3,   267,   364,   268,   365,    18,   199,    -1,    32,
     185,     3,    33,    56,     3,   151,   125,   267,   362,   268,
      -1,    32,   185,     3,    81,    56,     3,    -1,    32,   185,
       3,   157,    56,     3,   178,     3,    -1,    32,   185,     3,
      91,    56,     3,    -1,    32,   185,     3,    74,    56,     3,
      -1,    32,   185,     3,   199,    56,     3,    -1,    32,   185,
       3,    33,    69,     3,   373,   368,   336,    -1,    32,   185,
       3,    81,    69,     3,    -1,    32,   185,     3,    81,     3,
      -1,    32,   185,     3,   157,    69,     3,   178,     3,    -1,
      32,   185,     3,   157,     3,   178,     3,    -1,    32,   185,
       3,   139,    69,     3,   373,   368,   336,    -1,    32,   185,
       3,   139,     3,   373,   368,   336,    -1,    32,   185,     3,
      60,    69,     3,     3,   373,   368,   336,    -1,    32,   185,
       3,    60,     3,     3,   373,   368,   336,    -1,    -1,    98,
      -1,    34,     3,    -1,   337,    -1,   119,   339,   340,     3,
     341,   201,   343,   338,    -1,   119,   339,   340,     3,   341,
     288,    -1,    -1,   149,   125,   191,   346,    -1,    -1,   339,
     128,    -1,   339,    76,    -1,   339,   109,    -1,   339,   116,
      -1,   121,    -1,    -1,    -1,   267,   342,   268,    -1,     3,
      -1,   342,   269,     3,    -1,   267,   345,   268,    -1,    -1,
     343,   269,   344,   267,   345,   268,    -1,   272,    -1,    86,
      -1,   345,   269,   272,    -1,   345,   269,    86,    -1,   119,
     339,   340,     3,   174,   346,   338,    -1,     3,    20,   272,
      -1,     3,    20,    86,    -1,   346,   269,     3,    20,   272,
      -1,   346,   269,     3,    20,    86,    -1,   347,    -1,   161,
     339,   340,     3,   341,   201,   343,   338,    -1,   161,   339,
     340,     3,   174,   346,   338,    -1,   161,   339,   340,     3,
     341,   288,   338,    -1,   348,    -1,   191,   349,   306,   174,
     350,   289,   295,   298,    -1,    -1,   339,   128,    -1,   339,
     116,    -1,     3,    20,   272,    -1,     3,   266,     3,    20,
     272,    -1,   350,   269,     3,    20,   272,    -1,   350,   269,
       3,   266,     3,    20,   272,    -1,   157,   185,     3,   178,
       3,    -1,   351,    -1,    58,    71,   352,     3,    -1,    58,
     163,   352,     3,    -1,    81,    71,     3,    -1,    81,    71,
     118,   209,     3,    -1,    81,   163,     3,    -1,    81,   163,
     118,   209,     3,    -1,    -1,   118,   209,    -1,   353,    -1,
      58,    75,     3,    41,   373,    -1,    58,    75,     3,    41,
     373,    86,   272,    -1,    58,    75,     3,    41,   373,    18,
     145,    -1,    58,    75,     3,    41,   373,    63,   267,   272,
     268,    -1,    58,    75,     3,    41,   373,    18,   145,    63,
     267,   272,   268,    -1,   354,    -1,   197,     3,    -1,   197,
      71,     3,    -1,   355,    -1,    58,   359,   185,   352,     3,
     267,   360,   268,   356,    -1,    58,   359,   185,   352,     3,
     266,     3,   267,   360,   268,   356,    -1,    -1,   356,    38,
      20,     5,    -1,   356,    38,     5,    -1,   356,   147,     3,
      80,     3,    -1,   356,   147,     3,   181,     3,    -1,   356,
     164,    51,   198,   267,     3,   268,   165,     5,    -1,   356,
     164,    51,   153,   267,     3,   268,   267,   357,   268,    -1,
     358,    -1,   357,   269,   358,    -1,   164,     3,   201,   126,
     183,     4,   147,   143,     5,    -1,   164,     3,   201,   126,
     183,   136,   147,   143,     5,    -1,    58,   359,   185,   352,
       3,   267,   360,   268,   375,    -1,    58,   359,   185,   352,
       3,   375,    -1,    58,   359,   185,   352,     3,   266,     3,
     267,   360,   268,   375,    -1,    58,   359,   185,   352,     3,
     266,     3,   375,    -1,    -1,   179,    -1,   180,   179,    -1,
     361,    -1,   360,   269,   361,    -1,   151,   125,   267,   362,
     268,    -1,    56,     3,   151,   125,   267,   362,   268,    -1,
     125,   267,   301,   268,    -1,   117,   267,   301,   268,    -1,
     104,   117,   267,   301,   268,    -1,   104,   125,   267,   301,
     268,    -1,    63,   267,   272,   268,    -1,    56,     3,    63,
     267,   272,   268,    -1,   101,   125,   267,   363,   268,   156,
       3,   267,   364,   268,   365,    -1,   101,   125,   267,   363,
     268,   156,     3,   266,     3,   267,   364,   268,   365,    -1,
      56,     3,   101,   125,   267,   363,   268,   156,     3,   267,
     364,   268,   365,    -1,    56,     3,   101,   125,   267,   363,
     268,   156,     3,   266,     3,   267,   364,   268,   365,    -1,
     194,   267,   366,   268,    -1,    56,     3,   194,   267,   366,
     268,    -1,     3,    -1,   362,   269,     3,    -1,     3,    -1,
     363,   269,     3,    -1,     3,    -1,   364,   269,     3,    -1,
      -1,   365,   147,    80,    59,    -1,   365,   147,    80,   174,
     145,    -1,   365,   147,    80,   158,    -1,   365,   147,    80,
     174,    86,    -1,   365,   147,   191,    59,    -1,   365,   147,
     191,   174,   145,    -1,   365,   147,   191,   158,    -1,   365,
     147,   191,   174,    86,    -1,   365,   147,    80,   144,    -1,
     365,   147,   191,   144,    -1,   365,   135,   103,    -1,   365,
     135,   171,    -1,   365,   135,   150,    -1,   365,    72,    -1,
     365,    18,    72,    -1,   365,    72,   113,    73,    -1,   365,
      72,   113,   112,    -1,     3,    -1,   366,   269,     3,    -1,
      -1,   367,     3,   373,   368,    -1,    -1,   368,    18,   145,
      -1,   368,   145,    -1,   368,    86,     4,    -1,   368,    86,
       5,    -1,   368,    86,     7,    -1,   368,    86,     6,    -1,
     368,    86,   259,   267,   268,    -1,   368,    86,   260,   267,
     268,    -1,   368,    86,   261,   267,   268,    -1,   368,    86,
      57,    -1,   368,    86,   267,   272,   268,    -1,   368,    38,
      -1,   368,    38,   267,     5,   269,     5,   268,    -1,   368,
      38,   267,     5,   268,    -1,   368,    43,   267,     5,   269,
       5,   268,    -1,   368,    43,   267,     5,   268,    -1,   368,
      43,    -1,   368,   194,   125,    -1,   368,   194,    -1,   368,
     151,   125,    -1,   368,   125,    -1,   368,    64,     4,    -1,
     368,    63,   267,   272,   268,    -1,   368,    56,     3,   194,
      -1,   368,    56,     3,   151,   125,    -1,   368,    56,     3,
      63,   267,   272,   268,    -1,   368,    46,    42,    41,   267,
     272,   268,    47,    -1,   368,    46,    42,    41,   267,   272,
     268,    48,    -1,   368,    46,    42,    41,   267,   272,   268,
      -1,   368,    41,   267,   272,   268,    47,    -1,   368,    41,
     267,   272,   268,    48,    -1,   368,    41,   267,   272,   268,
      -1,    -1,   267,     5,   268,    -1,   267,     5,   269,     5,
     268,    -1,    -1,    52,    -1,    -1,   371,   192,    -1,   371,
     208,    -1,    -1,   372,    67,   174,     4,    -1,   372,    68,
       4,    -1,    55,   369,    -1,   177,   369,   371,    -1,   173,
     369,   371,    -1,   141,   369,   371,    -1,   122,   369,   371,
      -1,   114,   369,   371,    -1,    54,   369,   371,    -1,   154,
     369,   371,    -1,    87,   369,   371,    -1,    99,   369,   371,
      -1,    89,   369,   371,    -1,    90,    -1,   190,    -1,   184,
      -1,    88,    -1,   206,    -1,    67,   369,   372,    -1,   200,
     267,     5,   268,   372,    -1,    52,   369,    -1,   202,   267,
       5,   268,    -1,   189,    -1,    49,    -1,   140,    -1,   134,
      -1,   176,   370,   372,    -1,   182,   370,   372,    -1,   137,
     370,   372,    -1,   127,   370,   372,    -1,    94,   267,   374,
     268,   372,    -1,   174,   267,   374,   268,   372,    -1,    50,
      -1,   195,    -1,     4,    -1,   374,   269,     4,    -1,   376,
     309,   288,    -1,    -1,   116,    -1,   161,    -1,   377,    -1,
     174,   163,     3,    -1,   174,   163,    86,    -1,   174,   378,
      -1,   379,    -1,   378,   269,   379,    -1,     8,    20,   272,
      -1,     8,     9,   272,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   360,   360,   361,   366,   373,   374,   375,   393,   401,
     409,   415,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     446,   446,   455,   455,   457,   457,   459,   459,   463,   464,
     465,   466,   467,   470,   471,   474,   475,   478,   479,   482,
     482,   483,   483,   484,   484,   492,   492,   500,   500,   511,
     515,   516,   517,   518,   519,   520,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     557,   558,   559,   560,   561,   562,   563,   564,   566,   567,
     569,   570,   571,   573,   574,   575,   576,   577,   584,   591,
     598,   602,   606,   612,   613,   614,   617,   623,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   641,   643,   645,
     647,   651,   659,   670,   671,   674,   675,   678,   686,   694,
     705,   715,   716,   730,   731,   732,   733,   736,   743,   751,
     752,   753,   756,   757,   760,   761,   764,   765,   768,   769,
     772,   778,   787,   788,   789,   790,   793,   794,   795,   796,
     797,   800,   801,   804,   805,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   819,   820,   821,   829,   835,   836,
     837,   840,   841,   844,   845,   849,   856,   857,   858,   861,
     862,   866,   868,   870,   872,   874,   878,   879,   880,   883,
     884,   887,   888,   891,   892,   893,   896,   897,   900,   901,
     905,   907,   909,   911,   914,   915,   918,   919,   922,   926,
     936,   944,   945,   946,   947,   951,   955,   957,   961,   961,
     963,   968,   975,   982,   992,   999,  1006,  1016,  1024,  1034,
    1042,  1051,  1060,  1070,  1078,  1087,  1096,  1106,  1115,  1127,
    1132,  1137,  1143,  1150,  1157,  1164,  1174,  1181,  1190,  1197,
    1203,  1211,  1217,  1225,  1226,  1227,  1228,  1229,  1233,  1240,
    1249,  1256,  1262,  1273,  1276,  1282,  1288,  1295,  1301,  1308,
    1314,  1320,  1326,  1332,  1338,  1344,  1350,  1356,  1362,  1368,
    1374,  1380,  1386,  1392,  1400,  1401,  1402,  1405,  1413,  1419,
    1432,  1433,  1436,  1437,  1438,  1439,  1440,  1443,  1443,  1446,
    1447,  1450,  1460,  1473,  1474,  1474,  1477,  1478,  1479,  1480,
    1483,  1487,  1488,  1489,  1490,  1496,  1499,  1505,  1510,  1516,
    1524,  1533,  1534,  1535,  1539,  1550,  1562,  1573,  1588,  1593,
    1597,  1598,  1602,  1604,  1606,  1608,  1612,  1613,  1617,  1621,
    1623,  1625,  1627,  1629,  1634,  1638,  1639,  1643,  1652,  1662,
    1666,  1667,  1668,  1669,  1670,  1671,  1673,  1677,  1678,  1681,
    1696,  1703,  1718,  1731,  1746,  1759,  1760,  1761,  1764,  1765,
    1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,  1778,
    1780,  1782,  1784,  1786,  1790,  1791,  1794,  1795,  1798,  1799,
    1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,  1810,  1811,
    1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,  1822,  1823,
    1826,  1826,  1836,  1837,  1838,  1839,  1840,  1841,  1842,  1843,
    1844,  1845,  1846,  1847,  1854,  1855,  1856,  1857,  1858,  1859,
    1860,  1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,  1869,
    1870,  1871,  1872,  1873,  1874,  1877,  1878,  1879,  1882,  1883,
    1886,  1887,  1888,  1891,  1892,  1893,  1897,  1898,  1899,  1900,
    1901,  1902,  1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,
    1911,  1912,  1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,
    1921,  1922,  1923,  1924,  1925,  1926,  1927,  1928,  1931,  1932,
    1935,  1948,  1949,  1950,  1954,  1957,  1958,  1959,  1960,  1960,
    1962,  1963
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
  "UNKNOWN", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER",
  "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID",
  "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "FEVO_SLEEP",
  "FEVO_JITTER", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "@1", "@2", "@3", "@4", "val_list", "opt_val_list", "@5", "@6",
  "@7", "@8", "@9", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_for_update",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "drop_table_stmt", "create_index_stmt", "index_col_list",
  "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "truncate_extra_tables", "opt_truncate_options", "reclaim_table_stmt",
  "analyze_table_stmt", "alter_table_stmt", "opt_col_position",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_col_list", "insert_vals_list", "@10",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "create_domain_stmt", "use_database_stmt",
  "create_table_stmt", "opt_table_options", "shard_range_list",
  "shard_range_def", "opt_temporary", "create_col_list",
  "create_definition", "pk_column_list", "fk_column_list",
  "fk_ref_column_list", "fk_actions", "unique_column_list", "@11",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
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
     506,   507,   508,   509,   510,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   270,   271,   271,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     273,   272,   274,   272,   275,   272,   276,   272,   272,   272,
     272,   272,   272,   272,   272,   277,   277,   278,   278,   279,
     272,   280,   272,   281,   272,   282,   272,   283,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   284,   284,   284,   272,   272,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   272,   272,   272,
     272,   286,   286,   272,   272,   272,   272,   272,   272,   272,
     287,   288,   288,   289,   289,   290,   290,   291,   291,   292,
     292,   292,   293,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   298,   298,   298,   298,   299,   299,   299,   299,
     299,   300,   300,   301,   301,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   303,   303,   303,   304,   305,   305,
     305,   306,   306,   307,   307,   308,   308,   308,   308,   309,
     309,   310,   310,   310,   310,   310,   311,   311,   311,   312,
     312,   313,   313,   314,   314,   314,   315,   315,   316,   316,
     317,   317,   317,   317,   318,   318,   319,   319,   320,   287,
     321,   322,   322,   322,   322,   321,   323,   323,   324,   324,
     321,   287,   325,   325,   287,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   327,
     327,   327,   328,   328,   328,   328,   287,   329,   287,   330,
     330,   331,   331,   332,   332,   332,   332,   332,   287,   333,
     287,   334,   334,   287,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   336,   336,   336,   287,   337,   337,
     338,   338,   339,   339,   339,   339,   339,   340,   340,   341,
     341,   342,   342,   343,   344,   343,   345,   345,   345,   345,
     337,   346,   346,   346,   346,   287,   347,   347,   347,   287,
     348,   349,   349,   349,   350,   350,   350,   350,   287,   287,
     351,   351,   287,   287,   287,   287,   352,   352,   287,   353,
     353,   353,   353,   353,   287,   354,   354,   287,   355,   355,
     356,   356,   356,   356,   356,   356,   356,   357,   357,   358,
     358,   355,   355,   355,   355,   359,   359,   359,   360,   360,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   362,   362,   363,   363,   364,   364,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   366,   366,
     367,   361,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   369,   369,   369,   370,   370,
     371,   371,   371,   372,   372,   372,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   374,   374,
     375,   376,   376,   376,   287,   377,   377,   377,   378,   378,
     379,   379
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
       4,     4,     4,     4,     4,     4,     8,     6,     6,     8,
       4,     7,     6,     4,     4,     4,     6,     8,     6,     6,
       6,     8,     8,     4,     6,     6,     6,     4,     4,     4,
       6,     4,     6,     4,     6,     3,     4,     4,     4,     3,
       3,     6,     4,     4,     4,     4,     4,     4,     6,     6,
       6,     6,     8,     3,     3,     8,    10,     3,     3,     3,
       3,     4,     6,     1,     1,     1,     6,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     6,     3,
       5,     4,     5,     3,     4,     3,     4,     1,     1,     1,
       1,     3,    12,     0,     2,     0,     4,     2,     4,     0,
       1,     1,     0,     2,     0,     2,     0,     3,     1,     3,
       2,     2,     0,     2,     4,     4,     0,     2,     2,     4,
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
       0,     0,     0,   395,   244,     0,   322,     0,     0,   322,
       0,   185,     0,   322,     0,     0,     0,   150,   239,   251,
     254,   276,   283,   288,   290,   293,   317,   345,   349,   359,
     368,   374,   377,   524,     0,     0,   366,     0,     0,   366,
     396,     0,     0,     0,     0,     0,     0,     0,     0,   328,
       0,     0,   328,     0,     0,   527,   528,     0,     0,     0,
       0,   375,     0,     1,     2,   278,     0,   291,     0,     0,
       0,     0,     0,     0,     0,   397,     0,   366,   248,     0,
     243,   241,   242,     0,   362,     0,   277,   364,     0,   252,
       0,   324,   325,   326,   327,   323,     0,   289,     0,     0,
       0,     0,   525,   526,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   196,   186,   147,     0,   148,   149,
     187,   188,   189,    11,   191,   193,   192,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,   151,   194,   279,   326,   323,
     200,     0,     0,   201,   203,   204,   210,   376,     3,     0,
       0,   284,   285,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   360,     0,     0,     0,     0,     0,   361,
       0,     0,     0,     0,     0,   246,   153,     0,     0,     0,
       0,     0,     0,   329,     0,   329,   531,   530,   529,     0,
      47,     0,    28,    27,    18,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,     0,     0,     0,
       0,   233,     0,     0,     0,     0,   218,   217,   221,   225,
     222,     0,     0,   219,   209,     0,   287,   286,     0,     0,
       0,     0,     0,   307,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   292,   507,   516,   475,   475,   475,   475,
     475,   500,   475,   497,     0,   475,   475,   475,   478,   509,
     478,   508,   475,   475,   475,     0,   478,   475,   478,   499,
     506,   498,   517,     0,     0,   501,   369,     0,     0,     0,
       0,     0,     0,     0,     0,   521,   249,     0,   166,     0,
     153,   248,   363,   365,   253,     0,     0,     0,   358,     0,
       0,     5,    45,    48,     0,    42,     0,     0,   139,     0,
       0,     0,     0,   125,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,     0,
       0,    19,    21,    22,    20,   145,   143,    40,     0,    38,
     114,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    29,    23,    24,    26,    12,    13,    14,    15,    16,
      17,    25,   198,   153,   195,   281,   280,   200,     0,     0,
       0,   205,   238,   208,     0,   153,   202,   219,   219,     0,
     212,     0,   220,     0,   207,     0,     0,     0,     0,   303,
     300,   306,   302,   442,     0,     0,     0,     0,   304,     0,
     504,   480,   486,   483,   480,   480,     0,   480,   480,   480,
     479,   483,   483,   480,   480,   480,     0,   483,   480,   483,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   522,   523,     0,   440,   392,   210,
     154,     0,   172,   153,   245,   247,     0,   320,   331,     0,
       0,   319,   320,     0,   320,     0,    59,     0,   137,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,    83,     0,     0,     0,    87,    88,    89,    91,     0,
       0,    93,     0,    96,    97,    98,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    73,    74,    75,
       0,     0,     0,   121,     0,    41,    39,     0,     0,   146,
     144,    51,     0,     0,    36,    32,    34,     0,   155,     0,
     233,   235,   235,   235,     0,     0,     0,   166,   223,   224,
       0,     0,   226,     0,     0,     0,     0,     0,   442,   442,
       0,   314,   442,   309,     0,     0,     0,   492,   502,   494,
     496,   518,     0,   495,   491,   490,   513,   512,   489,   493,
     488,     0,   510,   487,   511,     0,     0,   371,     0,   370,
       0,   269,     0,     0,     0,     0,     0,   271,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   521,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,   240,   250,     0,     0,     0,   340,   330,     0,
       0,   320,   347,   320,   348,    46,   141,     0,   140,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,   164,
     282,   206,     0,     0,     0,     0,   354,     0,     0,   172,
     215,   213,     0,     0,   211,   227,     0,     0,     0,     0,
       0,   314,   314,   442,     0,     0,   454,     0,   459,     0,
       0,     0,     0,     0,   315,   463,   444,     0,   461,   311,
     314,   301,   308,   476,     0,   481,   482,     0,     0,   483,
       0,   483,   483,   505,     0,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   440,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   380,   440,     0,   520,   159,
     159,   167,   168,   173,   342,   341,     0,     0,   332,   337,
     336,     0,   334,   318,   346,   138,   142,     0,    68,    67,
       0,    72,     0,     0,   126,   127,   101,    79,    80,     0,
       0,    84,    85,    86,    90,    92,    94,   108,   109,   110,
     111,     0,    76,     0,     0,    78,   122,    50,    54,     0,
       0,    44,     0,     0,     0,    31,     0,     0,   166,   234,
       0,     0,     0,     0,     0,     0,   350,   228,     0,   214,
       0,     0,     0,   438,     0,   305,   313,   314,   443,   316,
       0,     0,     0,     0,     0,     0,   464,   445,   446,   448,
     447,   452,     0,     0,     0,     0,   462,   460,   310,     0,
       0,   485,   514,   519,   515,   503,     0,   372,     0,     0,
       0,     0,     0,   270,     0,   263,     0,     0,     0,     0,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,     0,
     378,   391,   399,   442,   160,   161,   170,   171,     0,     0,
       0,     0,     0,   333,     0,     0,     0,     0,    71,   129,
     130,   131,   132,   135,   134,   136,   128,   133,     0,     0,
       0,     0,     0,    52,    56,    37,    33,    35,   159,   162,
     165,   172,   236,     0,     0,     0,   355,   356,     0,     0,
     294,   416,     0,   414,     0,   295,     0,   312,     0,     0,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
     477,   484,     0,   259,   272,   273,   274,     0,     0,     0,
       0,   256,     0,     0,   265,     0,     0,     0,   380,     0,
       0,     0,     0,   406,     0,     0,     0,   403,     0,   402,
       0,   412,     0,     0,     0,   441,   169,   175,   174,   321,
     344,   343,   339,   338,     0,    69,    66,    81,    82,   112,
     115,     0,    77,   157,     0,     0,   156,   176,   232,     0,
     231,   230,     0,   229,     0,     0,     0,   299,     0,   439,
     456,     0,   474,   458,     0,     0,     0,   467,   465,   449,
     450,   451,   453,   373,     0,   267,   264,     0,   261,     0,
       0,     0,   258,   379,   393,     0,     0,     0,     0,     0,
     404,   405,   184,   400,   382,     0,     0,     0,     0,     0,
     163,   159,     0,   181,   237,   357,   297,     0,   417,   415,
       0,   472,   473,     0,     0,     0,   275,   260,   268,   266,
       0,   407,     0,     0,   413,     0,   381,     0,     0,     0,
       0,   335,   116,   158,   178,   177,     0,   152,     0,   455,
     457,   471,   468,   262,     0,   401,     0,   383,   384,     0,
       0,     0,     0,   182,     0,   469,   470,     0,     0,     0,
       0,     0,   180,   179,   418,     0,     0,     0,     0,     0,
       0,   420,     0,     0,     0,     0,   420,     0,     0,   296,
     419,     0,     0,     0,   408,     0,     0,   387,   385,     0,
     434,     0,     0,     0,   420,   420,     0,     0,   386,     0,
     435,   298,     0,   431,   433,   432,     0,     0,     0,   410,
     409,     0,   388,   436,   437,   421,   429,   423,     0,   425,
     430,   427,     0,   420,     0,   424,   422,   428,   426,   411,
       0,     0,     0,     0,     0,     0,     0,   389,   390
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   422,   687,   825,   826,   824,   423,   424,   677,
     820,   678,   821,   431,   437,   796,   247,    16,    17,   408,
     829,  1099,  1066,  1186,   978,   602,   921,   922,   772,  1243,
    1277,  1056,    57,   185,   186,   326,   192,   193,   194,   345,
     195,   342,   543,   343,   539,   844,   845,   531,   833,  1103,
     196,    18,    44,    83,   225,    19,    20,   746,   747,    21,
      22,   526,    65,    23,    24,    25,   869,    26,   777,    49,
      96,   417,   609,   781,  1075,   931,   607,    27,    28,    60,
     535,    29,    69,    30,    31,    32,  1060,  1326,  1327,    43,
     766,   767,  1114,  1112,  1305,  1319,   994,   768,   711,   560,
     571,   717,   718,   396,   722,   598,   599,    33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1024
static const yytype_int16 yypact[] =
{
    4428,  -128,   142,   548, -1024,   266, -1024,   151,   161, -1024,
      19, -1024,   203,    13,   294,   438,   178, -1024, -1024, -1024,
   -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,
   -1024, -1024, -1024, -1024,   446,   556,   329,   558,    73,   329,
   -1024,   389,   457,   399,   279,    67,   587,   306,   308,   513,
     593,   595,   513,   319,    62,   331, -1024,   812,   601,   496,
      14, -1024,   608, -1024,  4428,   272,   583,   313,   412,   615,
     597,   486,   309,   419,   637, -1024,   304,   329,   376,   649,
   -1024, -1024, -1024,   -28, -1024,   440, -1024, -1024,   458, -1024,
     460, -1024, -1024, -1024, -1024, -1024,   653, -1024,   507,   677,
    2647,  2647, -1024, -1024,   685,  -153, -1024, -1024, -1024, -1024,
     715,  2647,  2647,  2647, -1024, -1024, -1024,  1444, -1024, -1024,
   -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,   459,   464,
     469,   472,   478,   484,   488,   522,   547,   568,   579,   591,
     600,   603,   612,   623,   627,   636,   638,   643,   651,   655,
     679,   680,   682,   688,   695,   696,   697,   698,   705,   706,
     708,   710,   711,   712,   713,   716,   718,   719,   727,   741,
     742,   743,   744,   747,   751,   753,   792,   810,   811,   819,
     820,   821,   822,  2647,  4808,    39, -1024,   554,    16,    18,
      11,    12,   -93,   664, -1024, -1024,   692, -1024, -1024,   839,
     857, -1024, -1024,   278,   327,   806,   381,  1034,   352,   383,
    1035,   738, -1024, -1024,  4560,  1090,   969,   910,  1115, -1024,
     973,   310,   912,  1119,  1097, -1024,   328,  -158,    14,  1122,
    1123,  1124,  1126,  -108,  1128,   -92,  2247,  2247, -1024,  1129,
    2647,  2647,   909,   909, -1024,  2647,  1141,   219, -1024,  2647,
    1077,  2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,
     865,  2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,  2647,   868,  2647,  2647,  2647,
     869,  2647,  2647,  2647,  2647,  2647,  1546,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,  2647,  2647,   870,   872,   873,
     876,  2647,  2647,   109, -1024,  2647,  2647,  2647,  2647,  2647,
      27,   878,   509,  2647,  1179,  2647,  2647,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,  1143, -1024,    14,  2647,  1144,
    1147,   -32,   890,   264,  1185,    14, -1024, -1024, -1024,   209,
   -1024,    14,  1065,  1044, -1024,  1188, -1024, -1024,  1189,  1190,
    1191,  1192,  1195, -1024,  1196,  1197,  1198,  4560,  1199,  1025,
    1202,  1203,  1206, -1024, -1024, -1024,   941,   941,   941,   941,
     941, -1024,   941, -1024,   943,   941,   941,   941,  1159, -1024,
    1159, -1024,   941,   941,   941,   945,  1159,   941,  1159, -1024,
   -1024, -1024, -1024,   946,   948, -1024,   502,  -160,  1234,  1235,
    1092,  1237,  1095,  1047,  1240,   -86, -1024,  2647,  1130,    14,
    -125,   376, -1024, -1024, -1024,  1276,  1277,   160, -1024,  1276,
     260, -1024,   676, -1024,  1013,  2247,  4412,   230, -1024,  2647,
    2647,  1107,    75, -1024, -1024, -1024,  3019,  1811,   977,  1247,
    1338,  3040,  3063,  3084,  3105,  3126,  3157, -1024,  1460,  1572,
    1603,  1712,  3185,  1832,  1939,  1982,  3208,  3229,  3250,   390,
    2069,  3291,  2199, -1024,  3314,  3335,  3356, -1024,  4846,  2306,
    2349,  2436,  2566,  1015,  3377,  3408,  3436,  3459,  3480,  3501,
    3522,  3550,  2673,  2704,  2803, -1024, -1024, -1024, -1024,  3586,
    2905, -1024,  1085,  1205,  1356,  2089,  2089, -1024,    22, -1024,
   -1024,  1109,  2647,  2647,  1018,  2647,  4870,  1075,  1076,  1079,
    2647,  1151,  1225,   775,   783,   580,   580,  1325,  1325,  1325,
    1325, -1024, -1024,  -125, -1024, -1024,  1104,   326,  1262,  1301,
    1319, -1024, -1024, -1024,     4,   156,   664,  1044,  1044,  1321,
    1306,    14, -1024,  1330, -1024,   247,  4560,  4560,  1452, -1024,
   -1024, -1024, -1024, -1024,  4560,  1453,  1279,  1280, -1024,  1454,
   -1024, -1024, -1024, -1024, -1024, -1024,  1456, -1024, -1024, -1024,
   -1024, -1024, -1024, -1024, -1024, -1024,  1456, -1024, -1024, -1024,
    1458,  1459,  1320,  1200,  2647,  1268,    50,    90,  1344,  1465,
      91,  1474,  1489,  1346, -1024, -1024,  1491,   474, -1024,   692,
    2247,  1445,  1364,  -125, -1024, -1024,  1477,  -103, -1024,   295,
    1231, -1024,  -103,  1231,  1350,  2647, -1024,  2647, -1024,  2647,
    1876,  4505,  1232,  2647,  2647, -1024,  2647,  1507,  1379,  1379,
    2647, -1024, -1024, -1024, -1024, -1024, -1024,  2647,  2647,  2647,
    2647, -1024,  2647,  2647,  2647, -1024, -1024, -1024, -1024,  2647,
    2647, -1024,  2647, -1024, -1024, -1024,  4560,  4560,  2647,  2647,
    2647, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,
    2647,  2647,  2647, -1024,  2647, -1024, -1024,  2647,  1107,  2089,
    2089,  1328,  4893,  2647, -1024, -1024, -1024,  1107,  1398,  1502,
     -32,  1402,  1402,  1402,  2647,  1505,  1508,  1130, -1024, -1024,
      14,  2647,   -80,    14,  1245,  1388,  1389,  1248, -1024, -1024,
    4560,   825, -1024, -1024,  1521,  1552,   302,   141,   467,   141,
     141, -1024,   362,   141,   141,   141,   467,   467,   141,   141,
     141,   367,   467,   141,   467,  1288,  1289,  1495,  2647,  2247,
    1292, -1024,  1293,  1294,  1295,  1298,   377, -1024,  1368,    50,
    1564,   122,  1370,    50,   125,  1422,  1567,   -84,  1570,  1307,
    1450,   401,  1309,  1310,  1455,  1311,   382, -1024,  1576,  1107,
     516,  2647, -1024, -1024,  1913,  1479,  1578, -1024, -1024,  1602,
    2178,   -91, -1024,   -91, -1024, -1024,  2247,  4757, -1024,  2647,
   -1024,   748,   444,  3607,  2647,  2647,  1342,  1352,  3628,  3659,
    3687,  2933,  2956,  3710,  3731,  3752,  3773,  3801,  3822,  1366,
    1367,  3858,  3879,  2977,   466,  2998,  3910,  3938,  1369,  1371,
    2647,  1107,  2647,  1518,  1107,  1107,  1107,  1372,  1555,  1525,
   -1024, -1024,  1514,  1374,  1375,  1376,  2247,  1624,     6,  1364,
   -1024,  2247,  2647,  1378, -1024, -1024,   -80,  2647,  1380,  1382,
    1643,   825,   825, -1024,  1506,  1647,  1385,  1442,  1443,  1670,
    1710,  1447,  1711,    35, -1024, -1024, -1024,  1591,  1592, -1024,
     825, -1024, -1024, -1024,  1713, -1024, -1024,  1545,  1716, -1024,
    1717, -1024, -1024, -1024,  1476,  3961,    50,  1741,  1742,  1743,
    1744, -1024,  1745,  1482,   386,  1483,  1553,    50,  1485,   392,
    1556,    50,  1750,   166,   474, -1024,   289,  2647,  1526,  1544,
    1554,  1809,  1809,  1557,  1643,    -7,   474,  4560, -1024,    30,
      30,  1551, -1024,   487, -1024,  2247,  1631,  1803, -1024, -1024,
    2247,   394, -1024, -1024, -1024, -1024,  2247,  2647, -1024, -1024,
    2647, -1024,  3982,  4389, -1024, -1024, -1024, -1024, -1024,  2647,
    2647, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,
   -1024,  2647, -1024,  2647,  2647, -1024, -1024, -1024, -1024,  1558,
    1559,  1518,  1562,  1563,  1565, -1024,  2647,  2647,  1130, -1024,
    1822,  1822,  1822,  2647,  2647,  1829, -1024,  2247,  1809, -1024,
    4003,  1831,  1834, -1024,   402, -1024, -1024,   825, -1024, -1024,
    1830,  2647,  1833,  1798,    -4,  2647, -1024, -1024, -1024, -1024,
   -1024, -1024,  1573,  1582,  1596,  2647, -1024, -1024, -1024,  1597,
    1860, -1024,   467, -1024,   467,   467,  2647, -1024,   404,  1598,
    1599,  1601,  1605, -1024,    50, -1024,    50,  1604,   407,    50,
   -1024,  1608,   409,  1611,  1672,    50,   439,  1612,  1755,  1756,
    1615,  4024,  1831,  1809,  1809, -1024,   441,   447,  1834,   450,
       9, -1024, -1024, -1024, -1024, -1024, -1024, -1024,   516,  2647,
    2647,  1276,  2280, -1024,  2545,  1616,  4052,  4073, -1024, -1024,
   -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,  4094,  4130,
    4161,   528,  4189, -1024, -1024, -1024, -1024, -1024,  4778,   -99,
    2247,  1364, -1024,   452,   461,   481,  2247,  2247,  1864,   512,
    1867, -1024,   515, -1024,   518, -1024,  1890, -1024,   523,  4212,
     526,  1640,  1641,  1784, -1024,  4233,  1642,  1644,  1646,  4254,
   -1024, -1024,  4275, -1024, -1024, -1024, -1024,  1908,   553,   557,
      50, -1024,   559,    50, -1024,    50,  1648,   563,    -7,  2647,
    1655,  1656,  1643, -1024,   565,   571,   573, -1024,  1921, -1024,
     576, -1024,   336,  1922,  1875,  4518, -1024,  2247,  2247,  1658,
   -1024,  2247, -1024,  2247,  2178, -1024, -1024, -1024, -1024, -1024,
   -1024,  2647, -1024, -1024,  1769,  2647, -1024,  1824, -1024,  1929,
   -1024, -1024,  2647, -1024,  1734,  1778,  1932, -1024,  1933, -1024,
   -1024,  1934,   529, -1024,  1935,  2647,  2647, -1024, -1024, -1024,
   -1024, -1024, -1024, -1024,  1669, -1024, -1024,   586, -1024,   588,
     592,    50, -1024,     9, -1024,  4303,  1831,  1834,   596,  1785,
   -1024, -1024, -1024, -1024, -1024,  1937,   -17,   -81,   604,  4324,
   -1024,  4778,   338,  1823, -1024,  2247, -1024,  1940, -1024, -1024,
    1677, -1024, -1024,  1678,  4345,  4366, -1024, -1024, -1024, -1024,
     607, -1024,   616,   618, -1024,  1944, -1024,  1945,  1969,  1706,
    1707, -1024, -1024, -1024,  1810,  1813,  1809, -1024,  1709, -1024,
   -1024,   801, -1024, -1024,  1826, -1024,   585, -1024, -1024,  1980,
    1981,  1853,  1854,  1718,  1985, -1024, -1024,  1986,  1987,  1985,
    1723,  1746, -1024, -1024, -1024,   628,   632,  1748,   633,  1749,
    1848, -1024,  2014,  2015,  1985,  1985, -1024,  1855,  2071,   228,
   -1024,  1819,   640,   644,   229,  2074,   646, -1024, -1024,   -41,
    1993,   216,   -29,  1985, -1024, -1024,  2028,  1919, -1024,  1855,
   -1024, -1024,    45, -1024, -1024, -1024,     5,   196,   648,   229,
     229,  1995, -1024, -1024, -1024, -1024, -1024, -1024,    -3, -1024,
   -1024, -1024,   206, -1024,  1977, -1024, -1024, -1024, -1024,   229,
      33,  2031,  2032,  2044,  2045,  2184,  2185, -1024, -1024
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1024,  2127,   -57, -1024, -1024, -1024, -1024,  -567, -1024, -1024,
   -1024, -1024, -1024, -1024, -1024,  1568,  1946, -1024,  -142,  -349,
   -1024, -1024,  -909, -1024, -1024,  -687, -1024,  1125,  -817, -1024,
   -1024,  -908, -1024, -1024,  1866,  -182,  -166,  1863,  -318,  1600,
   -1024, -1024,   387, -1024, -1024, -1024,  1354,  1511,   248,   -39,
   -1024, -1024, -1024,  2123,  1793, -1024, -1024,  -746, -1024, -1024,
   -1024, -1024, -1024, -1024, -1024, -1024,  -699, -1024,  -541,    99,
    2153,  1971, -1024,  1594, -1024,  1042,  -418, -1024, -1024, -1024,
   -1024, -1024,   314, -1024, -1024, -1024,  1082, -1024,   892, -1024,
    1329,  1316, -1008, -1023,  -667,  -992,  -879, -1024,  -703,   584,
      56,   179,  -559,  -278,  1660,  -755, -1024, -1024, -1024,  2130
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -522
static const yytype_int16 yytable[] =
{
     184,   612,   905,   894,  1057,   851,   852,   899,   331,   870,
     839,  1067,   726,   727,   304,   190,  -351,   190,   732,  -353,
     734,  -352,   986,   540,   694,   333,   984,    53,   675,  1154,
     594,  1340,   594,   497,  -521,  1059,   585,  1371,   409,  1007,
    1008,  1009,  1010,   236,   237,   498,   775,  1162,   785,   332,
    1160,  1346,   325,   741,   242,   243,   244,    34,   775,  1122,
     246,   604,   410,  1267,  1355,   102,   415,   842,   528,  1064,
      84,   782,  1269,   784,   228,   595,    71,   595,   407,   553,
    1109,   334,   419,  1365,   529,   305,   306,   307,   308,   309,
     310,   311,  1011,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,  1184,   586,    52,   594,
     818,   229,    59,   239,   240,  1065,   843,  1270,  1353,   305,
     306,   307,   308,   309,   310,   311,   303,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
    1028,   327,  1366,    72,   335,  1155,  1156,  1123,   103,  1356,
     997,  1038,   995,   996,   595,  1042,  1163,  1354,  1341,   416,
    1061,   523,  1347,  1357,  1268,   530,   776,   676,  -521,  1372,
    1185,  1018,   499,  1164,   688,   416,   335,   623,   932,  1358,
     596,   597,    54,   904,   425,    85,   697,    11,   426,  1183,
    1124,    73,   432,   436,   438,   439,   440,   441,   442,   443,
     444,   445,   446,  1262,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,  1263,
     464,   465,   466,   702,   468,   469,   470,   471,   472,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     933,   229,   934,   603,   489,   490,  1329,  1336,   492,   493,
     494,   495,   496,   969,   773,  1359,   506,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   708,   709,
     695,   184,   985,  1228,   500,   611,   712,   330,   614,   191,
    -351,   191,    78,  -353,  1187,  -352,   748,   752,  1138,   622,
    1139,  1101,  1367,  1142,  1012,  1013,  1014,    61,  1117,  1147,
    1330,  1330,  1015,   742,   743,   744,   745,   220,   328,    87,
     704,    89,   216,   402,   428,   429,   199,   200,   896,  1343,
    1022,   900,  1024,  1025,  1324,   618,   619,    35,   100,   304,
     350,   201,  1273,   875,   348,    11,    50,    45,   537,   101,
    1360,  1234,  1349,  1350,   624,   690,    51,   349,   705,   876,
     600,  1368,  1047,    74,  1361,   357,  1235,   749,   753,   407,
    1165,   610,  1044,  1331,  1331,    62,  1344,   325,  1293,   538,
    1362,  1369,   620,   621,   221,  1332,  1332,   491,   809,   810,
     627,    79,   840,    46,   353,   846,   359,  1345,    58,   897,
    1048,   223,   901,  1224,  1217,    80,   351,  1219,   706,  1220,
     305,   306,   307,   308,   309,   310,   311,    81,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   358,   222,   430,    88,   696,    90,   217,   403,    47,
     202,    82,   853,  1045,   430,    11,   572,   354,    63,   360,
    1049,   707,   577,    64,   579,   679,   680,    68,   682,    66,
     355,    48,   361,   303,   305,   306,   307,   308,   309,   310,
     311,   613,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,  1260,   305,   306,   307,   308,
     309,   310,   311,  1050,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   305,   306,   307,
     308,   309,   310,   311,  1274,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   909,   919,
     582,   920,   502,   503,  -248,   504,   910,   739,   505,  1275,
     758,   407,   533,   335,   877,   878,   819,   759,   305,   306,
     307,   308,   309,   310,   311,   827,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,    67,
     786,    70,   787,   778,   779,   583,   791,   792,    75,   793,
     873,   874,    91,   798,    76,   760,  1251,  1252,   761,   211,
     799,   800,   801,   802,    77,   803,   804,   805,   584,    91,
      86,   762,   806,   807,   224,   808,    97,  -248,    98,   763,
     104,   811,   812,   813,   187,    92,   320,   321,   322,   323,
     324,   197,   188,   814,   815,   816,   203,   817,   213,    36,
    1069,   212,    92,    37,   189,   764,   823,   918,   218,    93,
     879,   880,  1308,   215,    94,   881,   880,   836,   214,  1063,
     219,    95,   224,   204,   841,   891,   892,  1322,  1323,   230,
     915,   916,   226,  1169,  1035,   892,   233,   205,   648,   649,
    1040,   892,  1073,  1074,   206,    38,  1348,   231,   765,   232,
    1115,  1116,  1133,   892,   207,  1141,   892,  1144,   892,   970,
     235,   885,   972,   973,   974,   234,   305,   306,   307,   308,
     309,   310,   311,    53,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,  1148,   916,  1157,
    1158,    39,   939,   940,   923,  1159,  1158,   925,  1161,  1116,
    1188,  1189,   208,   930,   241,   336,   248,    40,    41,  1190,
    1189,   249,   936,   344,   962,   963,   250,   942,   943,   251,
     209,   363,    42,   719,   720,   252,   723,   724,   725,  1191,
    1189,   253,   728,   729,   730,   254,  1070,   733,   305,   306,
     307,   308,   309,   310,   311,   971,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   337,
    1193,  1158,   210,  1195,  1196,   987,  1197,  1198,  -216,   255,
     990,  1200,  1201,   338,  1203,  1204,  1180,  1181,   317,   318,
     319,   320,   321,   322,   323,   324,   339,   318,   319,   320,
     321,   322,   323,   324,   256,   105,   106,   107,   108,   109,
     110,  1215,   892,   329,   340,  1216,   892,  1218,   892,   111,
     112,  1222,   892,  1229,  1196,   257,   341,   113,   114,  1230,
    1158,  1231,  1158,   854,  1233,  1198,   258,   115,  1295,  1296,
    1051,  1298,  1299,   937,  1257,   892,  1258,   892,   259,   855,
    1259,   892,   352,   856,  1264,  1116,   857,   260,   858,   116,
     261,   859,  1271,  1074,   117,  1283,   892,   118,   119,   262,
    1076,   860,   346,  1077,  1284,  1196,  1285,  1198,   861,   862,
     263,   120,  1088,  1089,   264,   121,  1311,  1312,  1313,  1314,
     347,  1316,  1312,   265,  1090,   266,  1091,  1092,  1334,  1312,
     267,   863,  1335,  1312,  1338,  1339,  1363,  1312,   268,  1098,
    1100,   122,   269,   864,   698,   699,  1106,  1107,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     834,   835,  1104,  1105,  1119,   615,   270,   271,  1125,   272,
     865,   561,   562,   563,   564,   273,   565,   123,  1129,   567,
     568,   569,   274,   275,   276,   277,   573,   574,   575,  1132,
     866,   578,   278,   279,   124,   280,   867,   281,   282,   283,
     284,   125,   126,   285,   127,   286,   287,   305,   306,   307,
     308,   309,   310,   311,   288,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   289,   290,
     291,   292,  1167,  1168,   293,  1171,   938,  1173,   294,   868,
     295,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   296,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   297,   298,   183,
     105,   106,   107,   108,   109,   110,   299,   300,   301,   302,
     356,   362,  1225,   397,   111,   112,   306,   307,   308,   309,
     310,   311,   113,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   398,   930,   400,   399,
     401,   404,   405,   406,  1239,   411,   412,   413,  1241,   414,
     433,   418,   421,   447,   116,  1245,   463,   467,   485,   117,
     486,   487,   118,   119,   488,   501,   522,   525,  1254,  1255,
     527,   305,   306,   307,   308,   309,   310,   311,   532,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   105,   106,   107,   108,   109,   110,   534,   541,
     542,   544,   545,   546,   547,   548,   111,   112,   549,   550,
     551,   552,   554,   555,   113,   556,   557,   434,   559,   558,
     566,   570,   576,   580,   507,   581,   508,   307,   308,   309,
     310,   311,   123,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   116,   587,   588,   589,
     590,   117,   591,   593,   118,   119,   628,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   592,   305,   306,   307,
     308,   309,   310,   311,   435,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   601,   606,
     608,   616,    11,   661,   -53,   681,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   123,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   684,   685,   183,   245,   686,   509,   305,   306,
     307,   308,   309,   310,   311,   324,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   308,
     309,   310,   311,   689,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   691,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   692,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   693,   700,   510,   105,   106,   107,
     108,   109,   110,   701,   703,   710,   713,   714,   715,   716,
     721,   111,   112,   735,   736,   737,   740,   738,   751,   113,
     305,   306,   307,   308,   309,   310,   311,   754,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   750,   755,   756,   757,   771,   770,   774,   780,   775,
     790,   116,   795,   -55,   828,   830,   117,   832,   837,   118,
     119,   838,   847,   848,   849,   850,   629,   305,   306,   307,
     308,   309,   310,   311,   871,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   105,
     106,   107,   108,   109,   110,   872,   882,   883,   884,   886,
     887,   888,   889,   111,   112,   890,   893,   895,   898,   902,
     903,   113,   473,   906,   907,   908,   911,   912,   914,   917,
     913,   927,   305,   306,   307,   308,   309,   310,   311,   123,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   116,   926,   928,   976,   630,   117,   794,
     944,   118,   119,   305,   306,   307,   308,   309,   310,   311,
     945,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   957,   958,   977,   967,   979,   968,
     975,   980,   981,   982,   983,   988,   993,   991,   245,   992,
     999,   998,  1000,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   123,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,  1001,
    1002,   183,  1003,  1004,  1005,  1006,  1016,  1017,  1019,  1020,
    1021,  1023,   305,   306,   307,   308,   309,   310,   311,   637,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,  1026,  1029,  1030,  1031,  1032,  1033,  1034,
    1036,  1037,  1039,  1043,  1041,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,  1052,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,  1053,  1055,   183,   105,   106,   107,   108,   109,   110,
    1068,  1054,  1071,  1072,  1058,  1102,  1093,  1094,   111,   112,
    1095,  1096,  1108,  1097,  1111,  1118,   113,  1113,  1120,  1121,
    1126,   638,   305,   306,   307,   308,   309,   310,   311,  1127,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,  1128,  1131,  1130,  1134,  1135,   116,  1136,
    1146,  1140,   639,   117,  1137,  1143,   118,   119,  1145,  1149,
    1150,  1151,  1152,  1174,  1192,  1194,   305,   306,   307,   308,
     309,   310,   311,  1199,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,  1205,  1206,  1207,
    1209,  1214,  1210,   626,  1211,  1221,   105,   106,   107,   108,
     109,   110,  1226,  1227,  1232,  1236,  1237,   776,  1240,  1242,
     111,   112,  1244,  1246,  1247,  1248,  1249,  1256,   113,  1250,
    1253,  1265,  1266,  1278,  1276,  1279,  1280,  1286,  1287,   305,
     306,   307,   308,   309,   310,   311,   123,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     116,   788,  1288,  1289,  1290,   117,  1294,  1291,   118,   119,
    1292,   640,  1297,  1300,  1301,  1302,  1303,  1158,  1304,  1306,
    1307,  1309,   305,   306,   307,   308,   309,   310,   311,   924,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,  1318,  1310,  1315,  1317,  1320,  1321,  1325,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   123,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,  1328,  1337,   183,   305,
     306,   307,   308,   309,   310,   311,  1333,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
    1340,   642,  -522,  -522,  -522,  -522,  1342,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
    1351,  1364,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
    1370,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,  1373,  1374,
     183,   105,   106,   107,   108,   109,   110,  1375,  1376,  1377,
    1378,   198,   427,  1166,   524,   111,   112,   797,   536,   769,
     989,   831,   227,   113,   605,    99,   420,   783,   643,   305,
     306,   307,   308,   309,   310,   311,  1238,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
    1223,  1352,  1062,  1046,   238,   116,   731,     0,     0,     0,
     117,     0,     0,   118,   119,     0,     0,     0,     0,     0,
       0,   644,     0,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   929,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   112,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   123,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   116,   650,     0,
       0,     0,   117,     0,     0,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,  1170,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   123,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,     0,     0,   183,   305,   306,   307,   308,
     309,   310,   311,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,     0,     0,   183,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,   657,   305,   306,   307,   308,
     309,   310,   311,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,   117,     0,     0,
     118,   119,     0,     0,     0,     0,     0,     0,   658,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   112,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     123,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   116,   659,     0,     0,     0,   117,
       0,     0,   118,   119,   305,   306,   307,   308,   309,   310,
     311,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   123,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
       0,     0,   183,   305,   306,   307,   308,   309,   310,   311,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,   660,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,     0,     0,   183,   305,   306,   307,   308,   309,
     310,   311,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,     0,     0,     0,
       0,     0,   670,   305,   306,   307,   308,   309,   310,   311,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   671,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   305,   306,   307,
     308,   309,   310,   311,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   305,   306,
     307,   308,   309,   310,   311,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   305,
     306,   307,   308,   309,   310,   311,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     305,   306,   307,   308,   309,   310,   311,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   672,   305,   306,   307,   308,   309,   310,   311,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   305,   306,   307,   308,   309,   310,
     311,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   305,   306,   307,   308,   309,
     310,   311,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   305,   306,   307,   308,
     309,   310,   311,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   674,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,     0,
       0,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   949,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   950,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   305,
     306,   307,   308,   309,   310,   311,   961,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     305,   306,   307,   308,   309,   310,   311,   964,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,     0,     0,     0,     0,     0,   625,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   631,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   632,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   305,   306,   307,   308,   309,
     310,   311,   633,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   305,   306,   307,   308,
     309,   310,   311,   634,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   305,   306,   307,
     308,   309,   310,   311,   635,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   636,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,     0,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   641,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   645,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     305,   306,   307,   308,   309,   310,   311,   646,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   305,   306,   307,   308,   309,   310,   311,   647,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   305,   306,   307,   308,   309,   310,   311,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,     0,     0,     0,     0,     0,   651,
     305,   306,   307,   308,   309,   310,   311,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   653,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   654,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   305,   306,   307,
     308,   309,   310,   311,   655,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   305,   306,
     307,   308,   309,   310,   311,   662,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   663,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,     0,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   664,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   665,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   305,   306,   307,   308,   309,   310,   311,   666,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   305,   306,   307,   308,   309,   310,   311,   667,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   305,   306,   307,   308,   309,   310,   311,
     668,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,     0,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   669,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   305,   306,   307,   308,   309,   310,   311,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,   673,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   941,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   305,
     306,   307,   308,   309,   310,   311,   946,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   947,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,     0,     0,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   948,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   951,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   305,   306,   307,   308,   309,   310,   311,   952,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   305,   306,   307,   308,   309,   310,   311,
     953,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   305,   306,   307,   308,   309,   310,
     311,   954,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,     0,     0,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   955,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   305,   306,   307,   308,   309,   310,   311,
     956,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   305,   306,   307,   308,   309,   310,
     311,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,   959,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   960,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   965,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,     0,     0,     0,     0,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   966,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,   305,   306,   307,   308,   309,   310,   311,  1027,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   305,   306,   307,   308,   309,   310,   311,
    1078,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   305,   306,   307,   308,   309,   310,
     311,  1110,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   305,   306,   307,   308,   309,
     310,   311,  1153,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,     0,     0,     0,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
    1175,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   305,   306,   307,   308,   309,   310,
     311,  1176,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   305,   306,   307,   308,   309,
     310,   311,  1177,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   305,   306,   307,   308,
     309,   310,   311,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,  1178,   305,
     306,   307,   308,   309,   310,   311,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,   305,   306,   307,   308,   309,   310,   311,  1179,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1182,     0,     0,
       1,     0,     0,     0,     2,     0,  1079,  1080,     0,     0,
       0,  1081,     0,  1082,     0,     0,     0,     0,     0,     0,
    1202,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1083,  1084,     0,  1085,
       0,  1208,     0,     0,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,  1212,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   854,     0,     0,     0,
       0,     0,     0,  1213,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,   856,     0,     0,   857,
       0,   858,     0,     0,   859,     0,     0,     0,     0,     0,
       0,  1261,     0,     0,   860,     0,     0,     0,     0,     0,
       0,   861,   862,     7,     0,     8,     0,     0,     0,     9,
       0,     0,  1272,     0,     0,  1086,  1087,     0,   617,     0,
       0,     0,    10,    11,   863,     0,     0,     0,     0,   364,
     365,     0,   366,  1281,   367,   368,    12,     0,     0,    13,
       0,     0,     0,     0,     0,    14,     0,   369,     0,     0,
       0,     0,     0,     0,  1282,     0,     0,     0,     0,     0,
       0,     0,     0,   865,     0,     0,     0,   370,   371,   372,
     373,     0,     0,     0,   374,     0,     0,     0,     0,   375,
       0,     0,     0,   866,     0,     0,     0,     0,     0,   867,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
       0,     0,   377,     0,     0,     0,     0,   378,     0,     0,
       0,   789,     0,     0,   379,     0,     0,   380,     0,     0,
     381,   382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   868,     0,   383,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   384,   385,     0,   386,   387,     0,     0,
       0,     0,   388,     0,   389,     0,     0,     0,     0,   390,
     391,     0,     0,     0,     0,   392,     0,     0,     0,     0,
     393,     0,   394,     0,     0,     0,   395,   305,   306,   307,
     308,   309,   310,   311,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   305,   306,
     307,   308,   309,   310,   311,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,   304,     0,     0,     0,     0,     0,  1064,   305,   306,
     307,   308,   309,   310,   311,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   325,
       0,     0,   935,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,  1065,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   656,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     683,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   822
};

static const yytype_int16 yycheck[] =
{
      57,   419,   757,   749,   912,   708,   709,   753,   190,   712,
     697,   920,   571,   572,     3,     3,     3,     3,   577,     3,
     579,     3,   839,   341,    20,   191,    20,     8,     6,  1052,
     116,    72,   116,     6,    41,   914,   196,     4,   196,     4,
       5,     6,     7,   100,   101,    18,   149,    38,   615,   191,
    1058,    80,    41,     3,   111,   112,   113,   185,   149,    63,
     117,   410,   228,    80,    59,     3,   174,   147,   100,    39,
       3,   612,   153,   614,   102,   161,     3,   161,   203,   357,
     988,   174,   174,    86,   116,    10,    11,    12,    13,    14,
      15,    16,    57,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   205,   267,     9,   116,
     677,   269,    13,   266,   267,    85,   196,   198,    73,    10,
      11,    12,    13,    14,    15,    16,   183,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     886,   102,   145,    70,   269,  1053,  1054,   151,    86,   144,
     853,   897,   851,   852,   161,   901,   147,   112,   199,   267,
     915,   327,   191,   158,   181,   197,   269,   145,   175,   136,
     269,   870,   145,   164,   523,   267,   269,   102,   269,   174,
     266,   267,   163,   267,   241,   118,   535,   175,   245,  1098,
     194,   118,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,  1226,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,  1227,
     277,   278,   279,   541,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     781,   269,   783,   409,   301,   302,    18,    18,   305,   306,
     307,   308,   309,   820,   603,    59,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   546,   547,
     266,   328,   266,  1152,   247,   417,   554,   266,   420,   267,
     267,   267,     3,   267,  1101,   267,   196,   196,  1034,   431,
    1036,   978,    86,  1039,   259,   260,   261,     3,   997,  1045,
      72,    72,   267,   253,   254,   255,   256,     3,   269,     3,
      63,     3,     3,     3,    95,    96,    44,    45,   196,   103,
     879,   196,   881,   882,  1316,    95,    96,   185,     9,     3,
       3,    59,  1241,   192,    56,   175,   185,    71,   129,    20,
     144,     5,  1334,  1335,   269,   527,   185,    69,   101,   208,
     407,   145,    63,    39,   158,     3,    20,   267,   267,   203,
    1063,   201,   196,   135,   135,    71,   150,    41,  1276,   160,
     174,  1363,   429,   430,    70,   147,   147,   268,   656,   657,
     437,   102,   700,   117,     3,   703,     3,   171,   185,   267,
     101,    77,   267,  1148,  1140,   116,    69,  1143,   151,  1145,
      10,    11,    12,    13,    14,    15,    16,   128,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    69,   118,   204,   118,   269,   118,   118,   118,   163,
     158,   152,   710,   267,   204,   175,   380,    56,     0,    56,
     151,   194,   386,   265,   388,   502,   503,   118,   505,     3,
      69,   185,    69,   510,    10,    11,    12,    13,    14,    15,
      16,   201,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,  1221,    10,    11,    12,    13,
      14,    15,    16,   194,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   166,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   117,     3,
      18,     5,    13,    14,   196,    16,   125,   584,    19,   191,
      56,   203,   268,   269,    67,    68,   678,    63,    10,    11,
      12,    13,    14,    15,    16,   687,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
     617,     3,   619,   268,   269,    63,   623,   624,   179,   626,
     268,   269,    76,   630,   117,   101,    47,    48,   104,   266,
     637,   638,   639,   640,   185,   642,   643,   644,    86,    76,
       3,   117,   649,   650,   266,   652,     3,   269,     3,   125,
     269,   658,   659,   660,     3,   109,    26,    27,    28,    29,
      30,     3,   116,   670,   671,   672,    33,   674,     3,    71,
     133,   209,   109,    75,   128,   151,   683,   769,   209,   116,
     268,   269,  1299,   147,   121,   268,   269,   694,    41,   917,
       3,   128,   266,    60,   701,   268,   269,  1314,  1315,   209,
     268,   269,     3,  1071,   268,   269,     3,    74,   268,   269,
     268,   269,   268,   269,    81,   117,  1333,   209,   194,   209,
     268,   269,   268,   269,    91,   268,   269,   268,   269,   821,
       3,   738,   824,   825,   826,   178,    10,    11,    12,    13,
      14,    15,    16,     8,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   268,   269,   268,
     269,   163,   268,   269,   771,   268,   269,   774,   268,   269,
     268,   269,   139,   780,     9,    61,   267,   179,   180,   268,
     269,   267,   789,    41,   268,   269,   267,   794,   795,   267,
     157,     3,   194,   564,   565,   267,   567,   568,   569,   268,
     269,   267,   573,   574,   575,   267,   269,   578,    10,    11,
      12,    13,    14,    15,    16,   822,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   115,
     268,   269,   199,   268,   269,   842,   268,   269,   124,   267,
     847,   268,   269,   129,   268,   269,   268,   269,    23,    24,
      25,    26,    27,    28,    29,    30,   142,    24,    25,    26,
      27,    28,    29,    30,   267,     3,     4,     5,     6,     7,
       8,   268,   269,   269,   160,   268,   269,   268,   269,    17,
      18,   268,   269,   268,   269,   267,   172,    25,    26,   268,
     269,   268,   269,    18,   268,   269,   267,    35,    47,    48,
     907,   266,   267,   105,   268,   269,   268,   269,   267,    34,
     268,   269,    56,    38,   268,   269,    41,   267,    43,    57,
     267,    46,   268,   269,    62,   268,   269,    65,    66,   267,
     937,    56,    43,   940,   268,   269,   268,   269,    63,    64,
     267,    79,   949,   950,   267,    83,   268,   269,   266,   267,
      43,   268,   269,   267,   961,   267,   963,   964,   268,   269,
     267,    86,   268,   269,   268,   269,   268,   269,   267,   976,
     977,   109,   267,    98,   537,   538,   983,   984,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     692,   693,   981,   982,  1001,   269,   267,   267,  1005,   267,
     125,   367,   368,   369,   370,   267,   372,   145,  1015,   375,
     376,   377,   267,   267,   267,   267,   382,   383,   384,  1026,
     145,   387,   267,   267,   162,   267,   151,   267,   267,   267,
     267,   169,   170,   267,   172,   267,   267,    10,    11,    12,
      13,    14,    15,    16,   267,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   267,   267,
     267,   267,  1069,  1070,   267,  1072,   268,  1074,   267,   194,
     267,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   267,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   267,   267,   267,
       3,     4,     5,     6,     7,     8,   267,   267,   267,   267,
      56,    56,  1149,     3,    17,    18,    11,    12,    13,    14,
      15,    16,    25,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   147,  1174,     3,   209,
     147,   209,     3,    26,  1181,     3,     3,     3,  1185,     3,
      53,     3,     3,   268,    57,  1192,   268,   268,   268,    62,
     268,   268,    65,    66,   268,   267,     3,     3,  1205,  1206,
       3,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,     4,     5,     6,     7,     8,     3,   124,
     146,     3,     3,     3,     3,     3,    17,    18,     3,     3,
       3,     3,     3,   178,    25,     3,     3,   130,   267,     3,
     267,    52,   267,   267,    35,   267,    37,    12,    13,    14,
      15,    16,   145,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    57,     3,     3,   147,
       3,    62,   147,     3,    65,    66,   269,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   209,    10,    11,    12,
      13,    14,    15,    16,   187,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   148,     3,
       3,   268,   175,   268,   175,   267,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   145,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   267,   267,   267,   204,   267,   168,    10,    11,
      12,    13,    14,    15,    16,    30,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    13,
      14,    15,    16,   269,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   125,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   125,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   125,   124,   267,     3,     4,     5,
       6,     7,     8,   147,   124,     3,     3,   178,   178,     5,
       4,    17,    18,     5,     5,   145,   198,   267,     3,    25,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   147,     3,   147,     3,   131,    51,    20,   267,   149,
     268,    57,   123,   175,   106,     3,    62,   105,     3,    65,
      66,     3,   267,   125,   125,   267,   269,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
       4,     5,     6,     7,     8,     3,   268,   268,    63,   267,
     267,   267,   267,    17,    18,   267,   198,     3,   198,   147,
       3,    25,    26,     3,   267,   125,   267,   267,   267,     3,
     125,     3,    10,    11,    12,    13,    14,    15,    16,   145,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    57,   125,     3,    51,   269,    62,   102,
     268,    65,    66,    10,    11,    12,    13,    14,    15,    16,
     268,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   268,   268,   111,   268,   124,   268,
     268,   267,   267,   267,    20,   267,     3,   267,   204,   267,
       3,   145,   267,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   145,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   267,
     267,   267,    42,     3,   267,     4,   125,   125,     5,   174,
       4,     4,    10,    11,    12,    13,    14,    15,    16,   269,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   267,     3,     3,     3,     3,     3,   267,
     267,   198,   267,     3,   198,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   267,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   267,     3,   267,     3,     4,     5,     6,     7,     8,
     269,   267,   191,    20,   267,     3,   268,   268,    17,    18,
     268,   268,     3,   268,     3,     5,    25,     3,     5,    41,
     267,   269,    10,    11,    12,    13,    14,    15,    16,   267,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   267,     4,   268,   268,   268,    57,   268,
     198,   267,   269,    62,   269,   267,    65,    66,   267,   267,
     125,   125,   267,   267,    20,    18,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   267,   267,   125,
     268,     3,   268,   102,   268,   267,     3,     4,     5,     6,
       7,     8,   267,   267,     3,     3,    51,   269,   159,   105,
      17,    18,     3,   199,   156,     3,     3,   268,    25,     5,
       5,   156,     5,     3,   121,   268,   268,     3,     3,    10,
      11,    12,    13,    14,    15,    16,   145,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      57,    95,     3,   267,   267,    62,   267,   167,    65,    66,
     167,   269,   156,     3,     3,   132,   132,   269,     3,     3,
       3,   268,    10,    11,    12,    13,    14,    15,    16,    86,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   165,   268,   267,   267,     3,     3,   164,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   145,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,     5,     3,   267,    10,
      11,    12,    13,    14,    15,    16,   267,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      72,   269,    13,    14,    15,    16,   113,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     201,   126,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     183,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   147,   147,
     267,     3,     4,     5,     6,     7,     8,   143,   143,     5,
       5,    64,   246,  1068,   328,    17,    18,   629,   335,   599,
     846,   690,    79,    25,   411,    52,   235,   613,   269,    10,
      11,    12,    13,    14,    15,    16,  1174,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    1148,  1339,   916,   904,   104,    57,   576,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,   269,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    86,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   145,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    57,   269,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    86,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   145,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,    -1,   267,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,   269,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     145,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    57,   269,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   145,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,   267,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,   267,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,   269,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   269,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   269,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   269,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   269,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   269,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   269,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   269,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   268,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   268,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   268,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   268,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   268,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   268,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   268,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   268,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   268,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   268,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   268,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   268,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   268,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   268,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   268,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   268,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     268,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   268,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   268,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   268,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   268,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   268,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   268,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     268,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   268,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   268,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     268,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   268,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   268,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   268,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   268,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     268,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   268,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   268,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     268,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   268,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   268,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   268,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   268,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      32,    -1,    -1,    -1,    36,    -1,    77,    78,    -1,    -1,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
     268,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,   110,
      -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   268,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    18,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,   268,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,   155,    -1,   157,    -1,    -1,    -1,   161,
      -1,    -1,   268,    -1,    -1,   206,   207,    -1,   186,    -1,
      -1,    -1,   174,   175,    86,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,   268,    54,    55,   188,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,   127,    -1,    -1,
      -1,   186,    -1,    -1,   134,    -1,    -1,   137,    -1,    -1,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,   176,   177,    -1,    -1,
      -1,    -1,   182,    -1,   184,    -1,    -1,    -1,    -1,   189,
     190,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
     200,    -1,   202,    -1,    -1,    -1,   206,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    95,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    85,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    41,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      40,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   197,   271,   287,   288,   321,   325,
     326,   329,   330,   333,   334,   335,   337,   347,   348,   351,
     353,   354,   355,   377,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   359,   322,    71,   117,   163,   185,   339,
     185,   185,   339,     8,   163,   378,   379,   302,   185,   339,
     349,     3,    71,     0,   265,   332,     3,     3,   118,   352,
       3,     3,    70,   118,   352,   179,   117,   185,     3,   102,
     116,   128,   152,   323,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   340,     3,     3,   340,
       9,    20,     3,    86,   269,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   267,   272,   303,   304,     3,   116,   128,
       3,   267,   306,   307,   308,   310,   320,     3,   271,    44,
      45,    59,   158,    33,    60,    74,    81,    91,   139,   157,
     199,   266,   209,     3,    41,   147,     3,   118,   209,     3,
       3,    70,   118,   352,   266,   324,     3,   323,   102,   269,
     209,   209,   209,     3,   178,     3,   272,   272,   379,   266,
     267,     9,   272,   272,   272,   204,   272,   286,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   272,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    41,   305,   102,   269,   269,
     266,   305,   288,   306,   174,   269,    61,   115,   129,   142,
     160,   172,   311,   313,    41,   309,    43,    43,    56,    69,
       3,    69,    56,     3,    56,    69,    56,     3,    69,     3,
      56,    69,    56,     3,    49,    50,    52,    54,    55,    67,
      87,    88,    89,    90,    94,    99,   114,   122,   127,   134,
     137,   140,   141,   154,   173,   174,   176,   177,   182,   184,
     189,   190,   195,   200,   202,   206,   373,     3,   147,   209,
       3,   147,     3,   118,   209,     3,    26,   203,   289,   196,
     306,     3,     3,     3,     3,   174,   267,   341,     3,   174,
     341,     3,   272,   277,   278,   272,   272,   286,    95,    96,
     204,   283,   272,    53,   130,   187,   272,   284,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   268,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   268,   272,   272,   272,   268,   272,   272,
     272,   272,   272,    26,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   268,   268,   268,   268,   272,
     272,   268,   272,   272,   272,   272,   272,     6,    18,   145,
     247,   267,    13,    14,    16,    19,   272,    35,    37,   168,
     267,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,     3,   306,   304,     3,   331,     3,   100,   116,
     197,   317,   268,   268,     3,   350,   307,   129,   160,   314,
     308,   124,   146,   312,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   373,     3,   178,     3,     3,     3,   267,
     369,   369,   369,   369,   369,   369,   267,   369,   369,   369,
      52,   370,   370,   369,   369,   369,   267,   370,   369,   370,
     267,   267,    18,    63,    86,   196,   267,     3,     3,   147,
       3,   147,   209,     3,   116,   161,   266,   267,   375,   376,
     272,   148,   295,   306,   289,   324,     3,   346,     3,   342,
     201,   288,   346,   201,   288,   269,   268,   186,    95,    96,
     272,   272,   288,   102,   269,   268,   102,   272,   269,   269,
     269,   268,   268,   268,   268,   268,   268,   269,   269,   269,
     269,   268,   269,   269,   269,   268,   268,   268,   268,   269,
     269,   268,   269,   268,   268,   268,    41,   269,   269,   269,
     269,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     269,   269,   269,   268,   269,     6,   145,   279,   281,   272,
     272,   267,   272,    40,   267,   267,   267,   273,   289,   269,
     305,   125,   125,   125,    20,   266,   269,   289,   312,   312,
     124,   147,   308,   124,    63,   101,   151,   194,   373,   373,
       3,   368,   373,     3,   178,   178,     5,   371,   372,   371,
     371,     4,   374,   371,   371,   371,   372,   372,   371,   371,
     371,   374,   372,   371,   372,     5,     5,   145,   267,   272,
     198,     3,   253,   254,   255,   256,   327,   328,   196,   267,
     147,     3,   196,   267,     3,     3,   147,     3,    56,    63,
     101,   104,   117,   125,   151,   194,   360,   361,   367,   309,
      51,   131,   298,   289,    20,   149,   269,   338,   268,   269,
     267,   343,   338,   343,   338,   277,   272,   272,    95,   186,
     268,   272,   272,   272,   102,   123,   285,   285,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   373,
     373,   272,   272,   272,   272,   272,   272,   272,   277,   288,
     280,   282,    40,   272,   276,   274,   275,   288,   106,   290,
       3,   317,   105,   318,   318,   318,   272,     3,     3,   295,
     308,   272,   147,   196,   315,   316,   308,   267,   125,   125,
     267,   368,   368,   373,    18,    34,    38,    41,    43,    46,
      56,    63,    64,    86,    98,   125,   145,   151,   194,   336,
     368,     3,     3,   268,   269,   192,   208,    67,    68,   268,
     269,   268,   268,   268,    63,   272,   267,   267,   267,   267,
     267,   268,   269,   198,   327,     3,   196,   267,   198,   327,
     196,   267,   147,     3,   267,   375,     3,   267,   125,   117,
     125,   267,   267,   125,   267,   268,   269,     3,   288,     3,
       5,   296,   297,   272,    86,   272,   125,     3,     3,    86,
     272,   345,   269,   338,   338,    95,   272,   105,   268,   268,
     269,   268,   272,   272,   268,   268,   268,   268,   268,   269,
     269,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   269,   268,   269,   269,   268,   268,   268,   268,   277,
     288,   272,   288,   288,   288,   268,    51,   111,   294,   124,
     267,   267,   267,    20,    20,   266,   298,   272,   267,   316,
     272,   267,   267,     3,   366,   336,   336,   368,   145,     3,
     267,   267,   267,    42,     3,   267,     4,     4,     5,     6,
       7,    57,   259,   260,   261,   267,   125,   125,   336,     5,
     174,     4,   372,     4,   372,   372,   267,   268,   327,     3,
       3,     3,     3,     3,   267,   268,   267,   198,   327,   267,
     268,   198,   327,     3,   196,   267,   360,    63,   101,   151,
     194,   272,   267,   267,   267,     3,   301,   301,   267,   366,
     356,   375,   361,   373,    39,    85,   292,   292,   269,   133,
     269,   191,    20,   268,   269,   344,   272,   272,   268,    77,
      78,    82,    84,   107,   108,   110,   206,   207,   272,   272,
     272,   272,   272,   268,   268,   268,   268,   268,   272,   291,
     272,   295,     3,   319,   319,   319,   272,   272,     3,   301,
     268,     3,   363,     3,   362,   268,   269,   336,     5,   272,
       5,    41,    63,   151,   194,   272,   267,   267,   267,   272,
     268,     4,   272,   268,   268,   268,   268,   269,   327,   327,
     267,   268,   327,   267,   268,   267,   198,   327,   268,   267,
     125,   125,   267,   268,   363,   301,   301,   268,   269,   268,
     362,   268,    38,   147,   164,   368,   297,   272,   272,   346,
      86,   272,    86,   272,   267,   268,   268,   268,   268,   268,
     268,   269,   268,   292,   205,   269,   293,   298,   268,   269,
     268,   268,    20,   268,    18,   268,   269,   268,   269,     3,
     268,   269,   268,   268,   269,   267,   267,   125,   268,   268,
     268,   268,   268,   268,     3,   268,   268,   327,   268,   327,
     327,   267,   268,   356,   375,   272,   267,   267,   366,   268,
     268,   268,     3,   268,     5,    20,     3,    51,   345,   272,
     159,   272,   105,   299,     3,   272,   199,   156,     3,     3,
       5,    47,    48,     5,   272,   272,   268,   268,   268,   268,
     327,   268,   363,   362,   268,   156,     5,    80,   181,   153,
     198,   268,   268,   292,   166,   191,   121,   300,     3,   268,
     268,   268,   268,   268,   268,   268,     3,     3,     3,   267,
     267,   167,   167,   301,   267,    47,    48,   156,   266,   267,
       3,     3,   132,   132,     3,   364,     3,     3,   364,   268,
     268,   268,   269,   266,   267,   267,   268,   267,   165,   365,
       3,     3,   364,   364,   365,   164,   357,   358,     5,    18,
      72,   135,   147,   267,   268,   268,    18,     3,   268,   269,
      72,   199,   113,   103,   150,   171,    80,   191,   364,   365,
     365,   201,   358,    73,   112,    59,   144,   158,   174,    59,
     144,   158,   174,   268,   126,    86,   145,    86,   145,   365,
     183,     4,   136,   147,   147,   143,   143,     5,     5
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
#line 367 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 373 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 374 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 376 "parser/evoparser.y"
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
#line 394 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 402 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 410 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 416 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 423 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 424 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 425 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 426 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 427 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 428 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 429 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 430 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 431 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 432 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 433 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 434 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 435 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 436 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 437 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 438 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 439 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 441 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 446 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 447 "parser/evoparser.y"
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
#line 455 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 456 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 457 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 458 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 459 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 460 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 463 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 464 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 465 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 466 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 467 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 470 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 471 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 474 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 475 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 478 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 482 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 482 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 483 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 483 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 484 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 485 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 492 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 493 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 500 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 501 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 511 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 515 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 516 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 517 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 518 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 519 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 520 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 522 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 67:
#line 523 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 68:
#line 524 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 69:
#line 525 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 70:
#line 526 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 71:
#line 527 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 72:
#line 528 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 73:
#line 529 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 74:
#line 530 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 75:
#line 531 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 76:
#line 532 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 77:
#line 533 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 78:
#line 534 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 79:
#line 535 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 80:
#line 536 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 81:
#line 537 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 82:
#line 538 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 83:
#line 539 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 84:
#line 540 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 85:
#line 541 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 86:
#line 542 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 87:
#line 543 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 88:
#line 544 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 89:
#line 545 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 90:
#line 546 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 91:
#line 547 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 92:
#line 548 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 93:
#line 549 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 94:
#line 550 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 95:
#line 551 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 96:
#line 552 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 97:
#line 553 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 98:
#line 554 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 99:
#line 555 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 100:
#line 557 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 101:
#line 558 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 102:
#line 559 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 103:
#line 560 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 104:
#line 561 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 105:
#line 562 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 106:
#line 563 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 107:
#line 564 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 108:
#line 566 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 109:
#line 567 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 110:
#line 569 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 111:
#line 570 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 112:
#line 571 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 113:
#line 573 "parser/evoparser.y"
    { emit((yyvsp[(3) - (3)].intval) ? "ISTRUE" : "ISFALSE"); (yyval.exprval) = expr_make_func1((yyvsp[(3) - (3)].intval) ? EXPR_IS_TRUE : EXPR_IS_FALSE, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].intval) ? "IS TRUE" : "IS FALSE"); ;}
    break;

  case 114:
#line 574 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 115:
#line 575 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 116:
#line 576 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 117:
#line 577 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 118:
#line 584 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 119:
#line 591 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 120:
#line 598 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 121:
#line 602 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 122:
#line 606 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 123:
#line 612 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 124:
#line 613 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 125:
#line 614 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 126:
#line 618 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 127:
#line 624 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 128:
#line 630 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 129:
#line 631 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 130:
#line 632 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 131:
#line 633 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 132:
#line 634 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 133:
#line 635 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 134:
#line 636 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 135:
#line 637 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 136:
#line 638 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 137:
#line 642 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 138:
#line 644 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 646 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 140:
#line 648 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 141:
#line 652 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 142:
#line 660 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 143:
#line 670 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 144:
#line 671 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 145:
#line 674 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 146:
#line 675 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 147:
#line 679 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 148:
#line 687 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 149:
#line 695 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 150:
#line 706 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 151:
#line 715 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 152:
#line 720 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 154:
#line 731 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 156:
#line 733 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 157:
#line 736 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 158:
#line 743 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 159:
#line 751 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 160:
#line 752 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 161:
#line 753 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 162:
#line 756 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 757 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 761 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 170:
#line 773 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 171:
#line 779 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 172:
#line 787 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 173:
#line 788 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 174:
#line 789 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 175:
#line 790 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 176:
#line 793 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 177:
#line 794 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 178:
#line 795 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 179:
#line 796 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 180:
#line 797 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 182:
#line 801 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 183:
#line 804 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 184:
#line 805 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 185:
#line 808 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 186:
#line 809 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 187:
#line 810 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 188:
#line 811 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 189:
#line 812 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 190:
#line 813 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 191:
#line 814 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 192:
#line 815 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 193:
#line 816 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 194:
#line 819 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 195:
#line 820 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 196:
#line 822 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 197:
#line 830 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 198:
#line 835 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 199:
#line 836 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 200:
#line 837 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 201:
#line 840 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 202:
#line 841 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 205:
#line 850 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 206:
#line 856 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 207:
#line 857 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 208:
#line 858 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 211:
#line 867 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 212:
#line 869 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 213:
#line 871 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 214:
#line 873 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 215:
#line 875 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 216:
#line 878 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 217:
#line 879 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 218:
#line 880 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 219:
#line 883 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 220:
#line 884 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 221:
#line 887 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 222:
#line 888 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 223:
#line 891 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 224:
#line 892 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 225:
#line 893 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 228:
#line 900 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 229:
#line 901 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 230:
#line 906 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 231:
#line 908 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 232:
#line 910 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 234:
#line 914 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 235:
#line 915 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 918 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 237:
#line 919 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 238:
#line 922 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 239:
#line 927 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 240:
#line 937 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 241:
#line 944 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 242:
#line 945 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 243:
#line 946 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 244:
#line 947 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 245:
#line 952 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 246:
#line 956 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 247:
#line 958 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 250:
#line 964 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 251:
#line 969 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 252:
#line 976 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 253:
#line 983 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 254:
#line 993 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 255:
#line 1000 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 256:
#line 1007 "parser/evoparser.y"
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

  case 257:
#line 1017 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 258:
#line 1025 "parser/evoparser.y"
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

  case 259:
#line 1035 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 260:
#line 1043 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 261:
#line 1052 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 262:
#line 1061 "parser/evoparser.y"
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

  case 263:
#line 1071 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 264:
#line 1079 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 265:
#line 1088 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 266:
#line 1097 "parser/evoparser.y"
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

  case 267:
#line 1107 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 268:
#line 1116 "parser/evoparser.y"
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

  case 269:
#line 1128 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 270:
#line 1133 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 271:
#line 1138 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 272:
#line 1144 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 273:
#line 1151 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 274:
#line 1158 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 275:
#line 1165 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 276:
#line 1175 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 277:
#line 1182 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 278:
#line 1191 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 279:
#line 1198 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 280:
#line 1204 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 281:
#line 1212 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 282:
#line 1218 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 284:
#line 1226 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 285:
#line 1227 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 286:
#line 1228 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 287:
#line 1229 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 288:
#line 1234 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 289:
#line 1241 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 290:
#line 1250 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 291:
#line 1257 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 292:
#line 1263 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 293:
#line 1273 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 294:
#line 1277 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 295:
#line 1283 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 296:
#line 1289 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 297:
#line 1296 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 298:
#line 1302 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 299:
#line 1309 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 300:
#line 1315 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 301:
#line 1321 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 302:
#line 1327 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 303:
#line 1333 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 304:
#line 1339 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 305:
#line 1345 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 306:
#line 1351 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 307:
#line 1357 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 308:
#line 1363 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 309:
#line 1369 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 310:
#line 1375 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 311:
#line 1381 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 312:
#line 1387 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 313:
#line 1393 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 314:
#line 1400 "parser/evoparser.y"
    { ;}
    break;

  case 315:
#line 1401 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 316:
#line 1402 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 317:
#line 1406 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 318:
#line 1414 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 319:
#line 1420 "parser/evoparser.y"
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

  case 321:
#line 1433 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 322:
#line 1436 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 323:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 324:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 325:
#line 1439 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 326:
#line 1440 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 330:
#line 1447 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 331:
#line 1451 "parser/evoparser.y"
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

  case 332:
#line 1461 "parser/evoparser.y"
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

  case 333:
#line 1473 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 334:
#line 1474 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 335:
#line 1474 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 336:
#line 1477 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1478 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 338:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 339:
#line 1480 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 340:
#line 1484 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 341:
#line 1487 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1488 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 343:
#line 1489 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 344:
#line 1490 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 345:
#line 1496 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 346:
#line 1502 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 347:
#line 1507 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 348:
#line 1512 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 349:
#line 1517 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 350:
#line 1526 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 351:
#line 1533 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1534 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 353:
#line 1535 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 354:
#line 1540 "parser/evoparser.y"
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

  case 355:
#line 1551 "parser/evoparser.y"
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

  case 356:
#line 1563 "parser/evoparser.y"
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

  case 357:
#line 1574 "parser/evoparser.y"
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

  case 358:
#line 1589 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 359:
#line 1593 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 360:
#line 1597 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 361:
#line 1598 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 362:
#line 1603 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 363:
#line 1605 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 364:
#line 1607 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 365:
#line 1609 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 366:
#line 1612 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 367:
#line 1613 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 368:
#line 1617 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 369:
#line 1622 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 370:
#line 1624 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 371:
#line 1626 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 372:
#line 1628 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 373:
#line 1630 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 374:
#line 1634 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 375:
#line 1638 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 376:
#line 1639 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 377:
#line 1644 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 378:
#line 1654 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 379:
#line 1663 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 381:
#line 1667 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 382:
#line 1668 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 383:
#line 1669 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 384:
#line 1670 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 385:
#line 1672 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 386:
#line 1674 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 389:
#line 1682 "parser/evoparser.y"
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

  case 390:
#line 1697 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 391:
#line 1705 "parser/evoparser.y"
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

  case 392:
#line 1719 "parser/evoparser.y"
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

  case 393:
#line 1733 "parser/evoparser.y"
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

  case 394:
#line 1747 "parser/evoparser.y"
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

  case 395:
#line 1759 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 396:
#line 1760 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 397:
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 398:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 399:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 400:
#line 1768 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 401:
#line 1769 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 402:
#line 1770 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 403:
#line 1771 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 404:
#line 1772 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 405:
#line 1773 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 406:
#line 1774 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 407:
#line 1775 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 408:
#line 1777 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 409:
#line 1779 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 410:
#line 1781 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 411:
#line 1783 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 412:
#line 1785 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 413:
#line 1787 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 414:
#line 1790 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 415:
#line 1791 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 416:
#line 1794 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 417:
#line 1795 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 418:
#line 1798 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 419:
#line 1799 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 421:
#line 1803 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 422:
#line 1804 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 423:
#line 1805 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 424:
#line 1806 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 425:
#line 1807 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 426:
#line 1808 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 427:
#line 1809 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 428:
#line 1810 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 429:
#line 1811 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 430:
#line 1812 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 431:
#line 1813 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 432:
#line 1814 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 433:
#line 1815 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 434:
#line 1816 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 435:
#line 1817 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 436:
#line 1818 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 437:
#line 1819 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 438:
#line 1822 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 439:
#line 1823 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 440:
#line 1826 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 441:
#line 1828 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 442:
#line 1836 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 443:
#line 1837 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 445:
#line 1839 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 446:
#line 1840 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 447:
#line 1841 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 448:
#line 1842 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 449:
#line 1843 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 450:
#line 1844 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 451:
#line 1845 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 452:
#line 1846 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 453:
#line 1847 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 454:
#line 1854 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 455:
#line 1855 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 456:
#line 1856 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 457:
#line 1857 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 458:
#line 1858 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 459:
#line 1859 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 460:
#line 1860 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 461:
#line 1861 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 462:
#line 1862 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 463:
#line 1863 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 464:
#line 1864 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 465:
#line 1865 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 466:
#line 1866 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 467:
#line 1867 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 468:
#line 1868 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 469:
#line 1869 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 470:
#line 1870 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 471:
#line 1871 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 472:
#line 1872 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 473:
#line 1873 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 474:
#line 1874 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 475:
#line 1877 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 476:
#line 1878 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 477:
#line 1879 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 478:
#line 1882 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 479:
#line 1883 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 480:
#line 1886 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 481:
#line 1887 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 482:
#line 1888 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 484:
#line 1892 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 485:
#line 1893 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 486:
#line 1897 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 487:
#line 1898 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 488:
#line 1899 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 489:
#line 1900 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 490:
#line 1901 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 491:
#line 1902 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 492:
#line 1903 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 493:
#line 1904 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 494:
#line 1905 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 495:
#line 1906 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 496:
#line 1907 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 497:
#line 1908 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 498:
#line 1909 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 499:
#line 1910 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 500:
#line 1911 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 501:
#line 1912 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 502:
#line 1913 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 503:
#line 1914 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 504:
#line 1915 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 505:
#line 1916 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 506:
#line 1917 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 507:
#line 1918 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 508:
#line 1919 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 509:
#line 1920 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 510:
#line 1921 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 511:
#line 1922 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 512:
#line 1923 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 513:
#line 1924 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 514:
#line 1925 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 515:
#line 1926 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 516:
#line 1927 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 517:
#line 1928 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 518:
#line 1931 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 519:
#line 1932 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 520:
#line 1936 "parser/evoparser.y"
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

  case 521:
#line 1948 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 522:
#line 1949 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 523:
#line 1950 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 524:
#line 1954 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 525:
#line 1957 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 526:
#line 1958 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 530:
#line 1962 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 531:
#line 1963 "parser/evoparser.y"
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


#line 1966 "parser/evoparser.y"

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
