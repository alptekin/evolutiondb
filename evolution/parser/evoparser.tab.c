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
     FCOUNT = 488,
     FSUM = 489,
     FAVG = 490,
     FMIN = 491,
     FMAX = 492,
     FUPPER = 493,
     FLOWER = 494,
     FLENGTH = 495,
     FCONCAT = 496,
     FREPLACE = 497,
     FCOALESCE = 498,
     FGEN_RANDOM_UUID = 499,
     FGEN_RANDOM_UUID_V7 = 500,
     FSNOWFLAKE_ID = 501,
     FLAST_INSERT_ID = 502,
     FEVO_SLEEP = 503,
     FEVO_JITTER = 504
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
#define FCOUNT 488
#define FSUM 489
#define FAVG 490
#define FMIN 491
#define FMAX 492
#define FUPPER 493
#define FLOWER 494
#define FLENGTH 495
#define FCONCAT 496
#define FREPLACE 497
#define FCOALESCE 498
#define FGEN_RANDOM_UUID 499
#define FGEN_RANDOM_UUID_V7 500
#define FSNOWFLAKE_ID 501
#define FLAST_INSERT_ID 502
#define FEVO_SLEEP 503
#define FEVO_JITTER 504




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
#line 649 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 662 "parser/evoparser.tab.c"

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
#define YYLAST   4432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  264
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  524
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1346

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   504

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     261,   262,    26,    24,   263,    25,   260,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   259,
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
     254,   255,   256,   257,   258
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
     469,   473,   480,   485,   490,   495,   500,   505,   510,   519,
     530,   534,   538,   542,   546,   551,   558,   560,   562,   564,
     571,   578,   582,   586,   590,   594,   598,   602,   606,   610,
     614,   619,   626,   630,   636,   641,   647,   651,   656,   660,
     665,   667,   669,   671,   673,   677,   690,   691,   694,   695,
     700,   703,   708,   709,   711,   713,   714,   717,   718,   721,
     722,   726,   728,   732,   735,   738,   739,   742,   747,   752,
     753,   756,   759,   764,   769,   770,   773,   775,   779,   780,
     783,   786,   789,   792,   795,   798,   801,   804,   806,   810,
     812,   815,   818,   820,   821,   823,   827,   829,   831,   835,
     841,   845,   849,   851,   852,   858,   862,   868,   875,   881,
     882,   884,   886,   887,   889,   891,   893,   896,   899,   900,
     901,   903,   906,   911,   918,   925,   932,   933,   936,   937,
     939,   943,   947,   949,   957,   960,   963,   966,   967,   974,
     977,   982,   983,   986,   994,   996,  1000,  1006,  1008,  1017,
    1028,  1038,  1050,  1061,  1074,  1086,  1100,  1110,  1122,  1133,
    1146,  1158,  1171,  1173,  1177,  1179,  1184,  1189,  1194,  1201,
    1203,  1207,  1210,  1214,  1220,  1222,  1226,  1227,  1230,  1233,
    1237,  1241,  1243,  1247,  1249,  1253,  1259,  1261,  1272,  1283,
    1301,  1314,  1334,  1346,  1353,  1362,  1369,  1376,  1383,  1393,
    1400,  1406,  1415,  1423,  1433,  1442,  1453,  1463,  1464,  1466,
    1469,  1471,  1480,  1487,  1488,  1493,  1494,  1497,  1500,  1503,
    1506,  1508,  1509,  1510,  1514,  1516,  1520,  1524,  1525,  1532,
    1534,  1536,  1540,  1544,  1552,  1556,  1560,  1566,  1572,  1574,
    1583,  1591,  1599,  1601,  1610,  1611,  1614,  1617,  1621,  1627,
    1633,  1641,  1647,  1649,  1654,  1659,  1663,  1669,  1673,  1679,
    1680,  1683,  1685,  1691,  1699,  1707,  1717,  1729,  1731,  1734,
    1738,  1740,  1750,  1762,  1763,  1768,  1772,  1778,  1784,  1794,
    1805,  1807,  1811,  1821,  1831,  1841,  1848,  1860,  1869,  1870,
    1872,  1875,  1877,  1881,  1887,  1895,  1900,  1905,  1911,  1917,
    1922,  1929,  1941,  1955,  1969,  1985,  1990,  1997,  1999,  2003,
    2005,  2009,  2011,  2015,  2016,  2021,  2027,  2032,  2038,  2043,
    2049,  2054,  2060,  2065,  2070,  2074,  2078,  2082,  2085,  2089,
    2094,  2099,  2101,  2105,  2106,  2111,  2112,  2116,  2119,  2123,
    2127,  2131,  2135,  2141,  2147,  2153,  2157,  2163,  2166,  2174,
    2180,  2188,  2194,  2197,  2201,  2204,  2208,  2211,  2215,  2221,
    2226,  2232,  2240,  2249,  2258,  2266,  2273,  2280,  2286,  2287,
    2291,  2297,  2298,  2300,  2301,  2304,  2307,  2308,  2313,  2317,
    2320,  2324,  2328,  2332,  2336,  2340,  2344,  2348,  2352,  2356,
    2360,  2362,  2364,  2366,  2368,  2370,  2374,  2380,  2383,  2388,
    2390,  2392,  2394,  2396,  2400,  2404,  2408,  2412,  2418,  2424,
    2426,  2428,  2430,  2434,  2438,  2439,  2441,  2443,  2445,  2449,
    2453,  2456,  2458,  2462,  2466
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     265,     0,    -1,   281,   259,    -1,   281,   259,   265,    -1,
       3,    -1,     3,   260,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   266,    24,
     266,    -1,   266,    25,   266,    -1,   266,    26,   266,    -1,
     266,    27,   266,    -1,   266,    28,   266,    -1,   266,    29,
     266,    -1,    25,   266,    -1,   261,   266,   262,    -1,   266,
      12,   266,    -1,   266,    10,   266,    -1,   266,    11,   266,
      -1,   266,    21,   266,    -1,   266,    22,   266,    -1,   266,
      30,   266,    -1,   266,    23,   266,    -1,    18,   266,    -1,
      17,   266,    -1,   266,    20,   266,    -1,    -1,   266,    20,
     261,   267,   282,   262,    -1,    -1,   266,    20,    37,   261,
     268,   282,   262,    -1,    -1,   266,    20,   168,   261,   269,
     282,   262,    -1,    -1,   266,    20,    35,   261,   270,   282,
     262,    -1,   266,    15,   145,    -1,   266,    15,    18,   145,
      -1,   266,    15,     6,    -1,   266,    15,    18,     6,    -1,
       8,     9,   266,    -1,   266,    19,   266,    40,   266,    -1,
     266,    18,    19,   266,    40,   266,    -1,   266,    -1,   266,
     263,   271,    -1,    -1,   271,    -1,    -1,   266,    16,   261,
     273,   271,   262,    -1,    -1,   266,    18,    16,   261,   274,
     271,   262,    -1,    -1,   266,    16,   261,   275,   282,   262,
      -1,    -1,   266,    18,    16,   261,   276,   282,   262,    -1,
      -1,   209,   261,   277,   282,   262,    -1,     3,   261,   272,
     262,    -1,   242,   261,    26,   262,    -1,   242,   261,   266,
     262,    -1,   243,   261,   266,   262,    -1,   244,   261,   266,
     262,    -1,   245,   261,   266,   262,    -1,   246,   261,   266,
     262,    -1,   210,   261,   266,   263,   266,   263,   266,   262,
      -1,   210,   261,   266,   263,   266,   262,    -1,   210,   261,
     266,   102,   266,   262,    -1,   210,   261,   266,   102,   266,
     105,   266,   262,    -1,   211,   261,   266,   262,    -1,   211,
     261,   278,   266,   102,   266,   262,    -1,   211,   261,   278,
     102,   266,   262,    -1,   247,   261,   266,   262,    -1,   248,
     261,   266,   262,    -1,   249,   261,   266,   262,    -1,   250,
     261,   266,   263,   266,   262,    -1,   251,   261,   266,   263,
     266,   263,   266,   262,    -1,   252,   261,   266,   263,   266,
     262,    -1,   222,   261,   266,   263,   266,   262,    -1,   223,
     261,   266,   263,   266,   262,    -1,   224,   261,   266,   263,
     266,   263,   266,   262,    -1,   225,   261,   266,   263,   266,
     263,   266,   262,    -1,   226,   261,   266,   262,    -1,   227,
     261,   266,   263,   266,   262,    -1,   228,   261,   266,   263,
     266,   262,    -1,   229,   261,   266,   263,   266,   262,    -1,
     230,   261,   266,   262,    -1,   231,   261,   266,   262,    -1,
     232,   261,   266,   262,    -1,   233,   261,   266,   263,   266,
     262,    -1,   233,   261,   266,   262,    -1,   234,   261,   266,
     263,   266,   262,    -1,   235,   261,   266,   262,    -1,   236,
     261,   266,   263,   266,   262,    -1,   237,   261,   262,    -1,
     238,   261,   266,   262,    -1,   239,   261,   266,   262,    -1,
     240,   261,   266,   262,    -1,   241,   261,   262,    -1,   221,
     261,   262,    -1,   214,   261,   266,   263,   266,   262,    -1,
     215,   261,   266,   262,    -1,   216,   261,   266,   262,    -1,
     217,   261,   266,   262,    -1,   218,   261,   266,   262,    -1,
     219,   261,   266,   262,    -1,   220,   261,   266,   262,    -1,
     250,   261,   266,   263,   266,   263,   266,   262,    -1,   250,
     261,   266,   263,   266,   263,   266,   263,   266,   262,    -1,
     253,   261,   262,    -1,   254,   261,   262,    -1,   255,   261,
     262,    -1,   256,   261,   262,    -1,   257,   261,   266,   262,
      -1,   258,   261,   266,   263,   266,   262,    -1,   130,    -1,
     187,    -1,    53,    -1,   212,   261,   266,   263,   279,   262,
      -1,   213,   261,   266,   263,   279,   262,    -1,   123,   266,
     206,    -1,   123,   266,    77,    -1,   123,   266,    78,    -1,
     123,   266,    82,    -1,   123,   266,    84,    -1,   123,   266,
     207,    -1,   123,   266,   108,    -1,   123,   266,   107,    -1,
     123,   266,   110,    -1,    62,   266,   280,    95,    -1,    62,
     266,   280,    96,   266,    95,    -1,    62,   280,    95,    -1,
      62,   280,    96,   266,    95,    -1,   204,   266,   186,   266,
      -1,   280,   204,   266,   186,   266,    -1,   266,    14,   266,
      -1,   266,    18,    14,   266,    -1,   266,    13,   266,    -1,
     266,    18,    13,   266,    -1,    57,    -1,    65,    -1,    66,
      -1,   282,    -1,   175,   296,   297,    -1,   175,   296,   297,
     102,   300,   283,   284,   288,   289,   292,   293,   294,    -1,
      -1,   203,   266,    -1,    -1,   106,    51,   285,   287,    -1,
     266,   286,    -1,   285,   263,   266,   286,    -1,    -1,    39,
      -1,    85,    -1,    -1,   205,   159,    -1,    -1,   111,   266,
      -1,    -1,   148,    51,   290,    -1,   291,    -1,   290,   263,
     291,    -1,     3,   286,    -1,     5,   286,    -1,    -1,   131,
     266,    -1,   131,   266,   263,   266,    -1,   131,   266,   133,
     266,    -1,    -1,   105,   191,    -1,   105,   166,    -1,   105,
     191,   167,   132,    -1,   105,   166,   167,   132,    -1,    -1,
     121,   295,    -1,     3,    -1,   295,   263,     3,    -1,    -1,
     296,    35,    -1,   296,    79,    -1,   296,    83,    -1,   296,
     109,    -1,   296,   172,    -1,   296,   162,    -1,   296,   170,
      -1,   296,   169,    -1,   298,    -1,   297,   263,   298,    -1,
      26,    -1,   266,   299,    -1,    41,     3,    -1,     3,    -1,
      -1,   301,    -1,   300,   263,   301,    -1,   302,    -1,   304,
      -1,     3,   299,   311,    -1,     3,   260,     3,   299,   311,
      -1,   314,   303,     3,    -1,   261,   300,   262,    -1,    41,
      -1,    -1,   301,   305,   124,   302,   309,    -1,   301,   172,
     302,    -1,   301,   172,   302,   147,   266,    -1,   301,   307,
     306,   124,   302,   310,    -1,   301,   142,   308,   124,   302,
      -1,    -1,   115,    -1,    61,    -1,    -1,   146,    -1,   129,
      -1,   160,    -1,   129,   306,    -1,   160,   306,    -1,    -1,
      -1,   310,    -1,   147,   266,    -1,   196,   261,   295,   262,
      -1,   197,   125,   312,   261,   313,   262,    -1,   116,   125,
     312,   261,   313,   262,    -1,   100,   125,   312,   261,   313,
     262,    -1,    -1,   105,   124,    -1,    -1,     3,    -1,   313,
     263,     3,    -1,   261,   282,   262,    -1,   315,    -1,    80,
     316,   102,     3,   283,   289,   292,    -1,   316,   128,    -1,
     316,   152,    -1,   316,   116,    -1,    -1,    80,   316,   317,
     102,   300,   283,    -1,     3,   318,    -1,   317,   263,     3,
     318,    -1,    -1,   260,    26,    -1,    80,   316,   102,   317,
     196,   300,   283,    -1,   319,    -1,    81,   185,     3,    -1,
      81,   185,   118,   209,     3,    -1,   320,    -1,    58,   117,
       3,   147,     3,   261,   321,   262,    -1,    58,   117,   118,
     209,     3,   147,     3,   261,   321,   262,    -1,    58,   194,
     117,     3,   147,     3,   261,   321,   262,    -1,    58,   194,
     117,   118,   209,     3,   147,     3,   261,   321,   262,    -1,
      58,   117,     3,   147,     3,   196,   198,   261,   321,   262,
      -1,    58,   117,   118,   209,     3,   147,     3,   196,   198,
     261,   321,   262,    -1,    58,   194,   117,     3,   147,     3,
     196,   198,   261,   321,   262,    -1,    58,   194,   117,   118,
     209,     3,   147,     3,   196,   198,   261,   321,   262,    -1,
      58,   117,    70,     3,   147,     3,   261,   321,   262,    -1,
      58,   117,    70,   118,   209,     3,   147,     3,   261,   321,
     262,    -1,    58,   194,   117,    70,     3,   147,     3,   261,
     321,   262,    -1,    58,   194,   117,    70,   118,   209,     3,
     147,     3,   261,   321,   262,    -1,    58,   117,    70,     3,
     147,     3,   196,   198,   261,   321,   262,    -1,    58,   194,
     117,    70,     3,   147,     3,   196,   198,   261,   321,   262,
      -1,     3,    -1,   321,   263,     3,    -1,   322,    -1,   247,
     261,     3,   262,    -1,   248,   261,     3,   262,    -1,   249,
     261,     3,   262,    -1,   250,   261,     3,   263,     3,   262,
      -1,   323,    -1,    81,   117,     3,    -1,   324,   326,    -1,
     188,   185,     3,    -1,   188,   185,     3,   263,   325,    -1,
       3,    -1,   325,   263,     3,    -1,    -1,   326,    59,    -1,
     326,   158,    -1,   326,    45,    43,    -1,   326,    44,    43,
      -1,   327,    -1,   155,   185,     3,    -1,   328,    -1,    36,
     185,     3,    -1,    36,   185,     3,   260,     3,    -1,   329,
      -1,    32,   185,     3,    33,    56,     3,    63,   261,   266,
     262,    -1,    32,   185,     3,    33,    56,     3,   194,   261,
     360,   262,    -1,    32,   185,     3,    33,    56,     3,   101,
     125,   261,   357,   262,   156,     3,   261,   358,   262,   359,
      -1,    32,   185,     3,    33,    56,     3,    63,   261,   266,
     262,    18,   199,    -1,    32,   185,     3,    33,    56,     3,
     101,   125,   261,   357,   262,   156,     3,   261,   358,   262,
     359,    18,   199,    -1,    32,   185,     3,    33,    56,     3,
     151,   125,   261,   356,   262,    -1,    32,   185,     3,    81,
      56,     3,    -1,    32,   185,     3,   157,    56,     3,   178,
       3,    -1,    32,   185,     3,    91,    56,     3,    -1,    32,
     185,     3,    74,    56,     3,    -1,    32,   185,     3,   199,
      56,     3,    -1,    32,   185,     3,    33,    69,     3,   367,
     362,   330,    -1,    32,   185,     3,    81,    69,     3,    -1,
      32,   185,     3,    81,     3,    -1,    32,   185,     3,   157,
      69,     3,   178,     3,    -1,    32,   185,     3,   157,     3,
     178,     3,    -1,    32,   185,     3,   139,    69,     3,   367,
     362,   330,    -1,    32,   185,     3,   139,     3,   367,   362,
     330,    -1,    32,   185,     3,    60,    69,     3,     3,   367,
     362,   330,    -1,    32,   185,     3,    60,     3,     3,   367,
     362,   330,    -1,    -1,    98,    -1,    34,     3,    -1,   331,
      -1,   119,   333,   334,     3,   335,   201,   337,   332,    -1,
     119,   333,   334,     3,   335,   282,    -1,    -1,   149,   125,
     191,   340,    -1,    -1,   333,   128,    -1,   333,    76,    -1,
     333,   109,    -1,   333,   116,    -1,   121,    -1,    -1,    -1,
     261,   336,   262,    -1,     3,    -1,   336,   263,     3,    -1,
     261,   339,   262,    -1,    -1,   337,   263,   338,   261,   339,
     262,    -1,   266,    -1,    86,    -1,   339,   263,   266,    -1,
     339,   263,    86,    -1,   119,   333,   334,     3,   174,   340,
     332,    -1,     3,    20,   266,    -1,     3,    20,    86,    -1,
     340,   263,     3,    20,   266,    -1,   340,   263,     3,    20,
      86,    -1,   341,    -1,   161,   333,   334,     3,   335,   201,
     337,   332,    -1,   161,   333,   334,     3,   174,   340,   332,
      -1,   161,   333,   334,     3,   335,   282,   332,    -1,   342,
      -1,   191,   343,   300,   174,   344,   283,   289,   292,    -1,
      -1,   333,   128,    -1,   333,   116,    -1,     3,    20,   266,
      -1,     3,   260,     3,    20,   266,    -1,   344,   263,     3,
      20,   266,    -1,   344,   263,     3,   260,     3,    20,   266,
      -1,   157,   185,     3,   178,     3,    -1,   345,    -1,    58,
      71,   346,     3,    -1,    58,   163,   346,     3,    -1,    81,
      71,     3,    -1,    81,    71,   118,   209,     3,    -1,    81,
     163,     3,    -1,    81,   163,   118,   209,     3,    -1,    -1,
     118,   209,    -1,   347,    -1,    58,    75,     3,    41,   367,
      -1,    58,    75,     3,    41,   367,    86,   266,    -1,    58,
      75,     3,    41,   367,    18,   145,    -1,    58,    75,     3,
      41,   367,    63,   261,   266,   262,    -1,    58,    75,     3,
      41,   367,    18,   145,    63,   261,   266,   262,    -1,   348,
      -1,   197,     3,    -1,   197,    71,     3,    -1,   349,    -1,
      58,   353,   185,   346,     3,   261,   354,   262,   350,    -1,
      58,   353,   185,   346,     3,   260,     3,   261,   354,   262,
     350,    -1,    -1,   350,    38,    20,     5,    -1,   350,    38,
       5,    -1,   350,   147,     3,    80,     3,    -1,   350,   147,
       3,   181,     3,    -1,   350,   164,    51,   198,   261,     3,
     262,   165,     5,    -1,   350,   164,    51,   153,   261,     3,
     262,   261,   351,   262,    -1,   352,    -1,   351,   263,   352,
      -1,   164,     3,   201,   126,   183,     4,   147,   143,     5,
      -1,   164,     3,   201,   126,   183,   136,   147,   143,     5,
      -1,    58,   353,   185,   346,     3,   261,   354,   262,   369,
      -1,    58,   353,   185,   346,     3,   369,    -1,    58,   353,
     185,   346,     3,   260,     3,   261,   354,   262,   369,    -1,
      58,   353,   185,   346,     3,   260,     3,   369,    -1,    -1,
     179,    -1,   180,   179,    -1,   355,    -1,   354,   263,   355,
      -1,   151,   125,   261,   356,   262,    -1,    56,     3,   151,
     125,   261,   356,   262,    -1,   125,   261,   295,   262,    -1,
     117,   261,   295,   262,    -1,   104,   117,   261,   295,   262,
      -1,   104,   125,   261,   295,   262,    -1,    63,   261,   266,
     262,    -1,    56,     3,    63,   261,   266,   262,    -1,   101,
     125,   261,   357,   262,   156,     3,   261,   358,   262,   359,
      -1,   101,   125,   261,   357,   262,   156,     3,   260,     3,
     261,   358,   262,   359,    -1,    56,     3,   101,   125,   261,
     357,   262,   156,     3,   261,   358,   262,   359,    -1,    56,
       3,   101,   125,   261,   357,   262,   156,     3,   260,     3,
     261,   358,   262,   359,    -1,   194,   261,   360,   262,    -1,
      56,     3,   194,   261,   360,   262,    -1,     3,    -1,   356,
     263,     3,    -1,     3,    -1,   357,   263,     3,    -1,     3,
      -1,   358,   263,     3,    -1,    -1,   359,   147,    80,    59,
      -1,   359,   147,    80,   174,   145,    -1,   359,   147,    80,
     158,    -1,   359,   147,    80,   174,    86,    -1,   359,   147,
     191,    59,    -1,   359,   147,   191,   174,   145,    -1,   359,
     147,   191,   158,    -1,   359,   147,   191,   174,    86,    -1,
     359,   147,    80,   144,    -1,   359,   147,   191,   144,    -1,
     359,   135,   103,    -1,   359,   135,   171,    -1,   359,   135,
     150,    -1,   359,    72,    -1,   359,    18,    72,    -1,   359,
      72,   113,    73,    -1,   359,    72,   113,   112,    -1,     3,
      -1,   360,   263,     3,    -1,    -1,   361,     3,   367,   362,
      -1,    -1,   362,    18,   145,    -1,   362,   145,    -1,   362,
      86,     4,    -1,   362,    86,     5,    -1,   362,    86,     7,
      -1,   362,    86,     6,    -1,   362,    86,   253,   261,   262,
      -1,   362,    86,   254,   261,   262,    -1,   362,    86,   255,
     261,   262,    -1,   362,    86,    57,    -1,   362,    86,   261,
     266,   262,    -1,   362,    38,    -1,   362,    38,   261,     5,
     263,     5,   262,    -1,   362,    38,   261,     5,   262,    -1,
     362,    43,   261,     5,   263,     5,   262,    -1,   362,    43,
     261,     5,   262,    -1,   362,    43,    -1,   362,   194,   125,
      -1,   362,   194,    -1,   362,   151,   125,    -1,   362,   125,
      -1,   362,    64,     4,    -1,   362,    63,   261,   266,   262,
      -1,   362,    56,     3,   194,    -1,   362,    56,     3,   151,
     125,    -1,   362,    56,     3,    63,   261,   266,   262,    -1,
     362,    46,    42,    41,   261,   266,   262,    47,    -1,   362,
      46,    42,    41,   261,   266,   262,    48,    -1,   362,    46,
      42,    41,   261,   266,   262,    -1,   362,    41,   261,   266,
     262,    47,    -1,   362,    41,   261,   266,   262,    48,    -1,
     362,    41,   261,   266,   262,    -1,    -1,   261,     5,   262,
      -1,   261,     5,   263,     5,   262,    -1,    -1,    52,    -1,
      -1,   365,   192,    -1,   365,   208,    -1,    -1,   366,    67,
     174,     4,    -1,   366,    68,     4,    -1,    55,   363,    -1,
     177,   363,   365,    -1,   173,   363,   365,    -1,   141,   363,
     365,    -1,   122,   363,   365,    -1,   114,   363,   365,    -1,
      54,   363,   365,    -1,   154,   363,   365,    -1,    87,   363,
     365,    -1,    99,   363,   365,    -1,    89,   363,   365,    -1,
      90,    -1,   190,    -1,   184,    -1,    88,    -1,   206,    -1,
      67,   363,   366,    -1,   200,   261,     5,   262,   366,    -1,
      52,   363,    -1,   202,   261,     5,   262,    -1,   189,    -1,
      49,    -1,   140,    -1,   134,    -1,   176,   364,   366,    -1,
     182,   364,   366,    -1,   137,   364,   366,    -1,   127,   364,
     366,    -1,    94,   261,   368,   262,   366,    -1,   174,   261,
     368,   262,   366,    -1,    50,    -1,   195,    -1,     4,    -1,
     368,   263,     4,    -1,   370,   303,   282,    -1,    -1,   116,
      -1,   161,    -1,   371,    -1,   174,   163,     3,    -1,   174,
     163,    86,    -1,   174,   372,    -1,   373,    -1,   372,   263,
     373,    -1,     8,    20,   266,    -1,     8,     9,   266,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   359,   359,   360,   365,   372,   373,   374,   392,   400,
     408,   414,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     445,   445,   454,   454,   456,   456,   458,   458,   462,   463,
     464,   465,   466,   469,   470,   473,   474,   477,   478,   481,
     481,   482,   482,   483,   483,   491,   491,   499,   499,   510,
     514,   515,   516,   517,   518,   519,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   573,   580,   587,   591,   595,   601,   602,   603,   606,
     612,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     630,   632,   634,   636,   640,   648,   659,   660,   663,   664,
     667,   675,   683,   694,   704,   705,   719,   720,   721,   722,
     725,   732,   740,   741,   742,   745,   746,   749,   750,   753,
     754,   757,   758,   761,   767,   776,   777,   778,   779,   782,
     783,   784,   785,   786,   789,   790,   793,   794,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   808,   809,   810,
     818,   824,   825,   826,   829,   830,   833,   834,   838,   845,
     846,   847,   850,   851,   855,   857,   859,   861,   863,   867,
     868,   869,   872,   873,   876,   877,   880,   881,   882,   885,
     886,   889,   890,   894,   896,   898,   900,   903,   904,   907,
     908,   911,   915,   925,   933,   934,   935,   936,   940,   944,
     946,   950,   950,   952,   957,   964,   971,   981,   988,   995,
    1005,  1013,  1023,  1031,  1040,  1049,  1059,  1067,  1076,  1085,
    1095,  1104,  1116,  1121,  1126,  1132,  1139,  1146,  1153,  1163,
    1170,  1179,  1186,  1192,  1200,  1206,  1214,  1215,  1216,  1217,
    1218,  1222,  1229,  1238,  1245,  1251,  1262,  1265,  1271,  1277,
    1284,  1290,  1297,  1303,  1309,  1315,  1321,  1327,  1333,  1339,
    1345,  1351,  1357,  1363,  1369,  1375,  1381,  1389,  1390,  1391,
    1394,  1402,  1408,  1421,  1422,  1425,  1426,  1427,  1428,  1429,
    1432,  1432,  1435,  1436,  1439,  1449,  1462,  1463,  1463,  1466,
    1467,  1468,  1469,  1472,  1476,  1477,  1478,  1479,  1485,  1488,
    1494,  1499,  1505,  1513,  1522,  1523,  1524,  1528,  1539,  1551,
    1562,  1577,  1582,  1586,  1587,  1591,  1593,  1595,  1597,  1601,
    1602,  1606,  1610,  1612,  1614,  1616,  1618,  1623,  1627,  1628,
    1632,  1641,  1651,  1655,  1656,  1657,  1658,  1659,  1660,  1662,
    1666,  1667,  1670,  1685,  1692,  1707,  1720,  1735,  1748,  1749,
    1750,  1753,  1754,  1757,  1758,  1759,  1760,  1761,  1762,  1763,
    1764,  1765,  1767,  1769,  1771,  1773,  1775,  1779,  1780,  1783,
    1784,  1787,  1788,  1791,  1792,  1793,  1794,  1795,  1796,  1797,
    1798,  1799,  1800,  1801,  1802,  1803,  1804,  1805,  1806,  1807,
    1808,  1811,  1812,  1815,  1815,  1825,  1826,  1827,  1828,  1829,
    1830,  1831,  1832,  1833,  1834,  1835,  1836,  1843,  1844,  1845,
    1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,  1855,
    1856,  1857,  1858,  1859,  1860,  1861,  1862,  1863,  1866,  1867,
    1868,  1871,  1872,  1875,  1876,  1877,  1880,  1881,  1882,  1886,
    1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,
    1897,  1898,  1899,  1900,  1901,  1902,  1903,  1904,  1905,  1906,
    1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,  1915,  1916,
    1917,  1920,  1921,  1924,  1937,  1938,  1939,  1943,  1946,  1947,
    1948,  1949,  1949,  1951,  1952
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
  "FSIGN", "FPI", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER",
  "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
  "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
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
     496,   497,   498,   499,   500,   501,   502,   503,   504,    59,
      46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   264,   265,   265,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   266,   268,   266,   269,   266,   270,   266,   266,   266,
     266,   266,   266,   266,   266,   271,   271,   272,   272,   273,
     266,   274,   266,   275,   266,   276,   266,   277,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   278,   278,   278,   266,
     266,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     266,   266,   266,   266,   280,   280,   266,   266,   266,   266,
     266,   266,   266,   281,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   286,   286,   287,   287,   288,   288,   289,
     289,   290,   290,   291,   291,   292,   292,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   297,
     298,   299,   299,   299,   300,   300,   301,   301,   302,   302,
     302,   302,   303,   303,   304,   304,   304,   304,   304,   305,
     305,   305,   306,   306,   307,   307,   308,   308,   308,   309,
     309,   310,   310,   311,   311,   311,   311,   312,   312,   313,
     313,   314,   281,   315,   316,   316,   316,   316,   315,   317,
     317,   318,   318,   315,   281,   319,   319,   281,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   321,   321,   322,   322,   322,   322,   281,
     323,   281,   324,   324,   325,   325,   326,   326,   326,   326,
     326,   281,   327,   281,   328,   328,   281,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   330,   330,   330,
     281,   331,   331,   332,   332,   333,   333,   333,   333,   333,
     334,   334,   335,   335,   336,   336,   337,   338,   337,   339,
     339,   339,   339,   331,   340,   340,   340,   340,   281,   341,
     341,   341,   281,   342,   343,   343,   343,   344,   344,   344,
     344,   281,   281,   345,   345,   281,   281,   281,   281,   346,
     346,   281,   347,   347,   347,   347,   347,   281,   348,   348,
     281,   349,   349,   350,   350,   350,   350,   350,   350,   350,
     351,   351,   352,   352,   349,   349,   349,   349,   353,   353,
     353,   354,   354,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   356,   356,   357,
     357,   358,   358,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   360,   360,   361,   355,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     363,   364,   364,   365,   365,   365,   366,   366,   366,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   368,   368,   369,   370,   370,   370,   281,   371,   371,
     371,   372,   372,   373,   373
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
       3,     6,     4,     4,     4,     4,     4,     4,     8,    10,
       3,     3,     3,     3,     4,     6,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     3,    12,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     1,     3,     2,     2,     0,     2,     4,     4,     0,
       2,     2,     4,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     3,     5,     1,     8,    10,
       9,    11,    10,    12,    11,    13,     9,    11,    10,    12,
      11,    12,     1,     3,     1,     4,     4,     4,     6,     1,
       3,     2,     3,     5,     1,     3,     0,     2,     2,     3,
       3,     1,     3,     1,     3,     5,     1,    10,    10,    17,
      12,    19,    11,     6,     8,     6,     6,     6,     9,     6,
       5,     8,     7,     9,     8,    10,     9,     0,     1,     2,
       1,     8,     6,     0,     4,     0,     2,     2,     2,     2,
       1,     0,     0,     3,     1,     3,     3,     0,     6,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     1,     8,
       7,     7,     1,     8,     0,     2,     2,     3,     5,     5,
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
       2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   388,   237,     0,   315,     0,     0,   315,
       0,   178,     0,   315,     0,     0,     0,   143,   232,   244,
     247,   269,   276,   281,   283,   286,   310,   338,   342,   352,
     361,   367,   370,   517,     0,     0,   359,     0,     0,   359,
     389,     0,     0,     0,     0,     0,     0,     0,     0,   321,
       0,     0,   321,     0,     0,   520,   521,     0,     0,     0,
       0,   368,     0,     1,     2,   271,     0,   284,     0,     0,
       0,     0,     0,     0,     0,   390,     0,   359,   241,     0,
     236,   234,   235,     0,   355,     0,   270,   357,     0,   245,
       0,   317,   318,   319,   320,   316,     0,   282,     0,     0,
       0,     0,   518,   519,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   189,   179,   140,     0,   141,   142,
     180,   181,   182,    11,   184,   186,   185,   183,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     144,   187,   272,   319,   316,   193,     0,     0,   194,   196,
     197,   203,   369,     3,     0,     0,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,   353,     0,
       0,     0,     0,     0,   354,     0,     0,     0,     0,     0,
     239,   146,     0,     0,     0,     0,     0,     0,   322,     0,
     322,   524,   523,   522,     0,    47,     0,    28,    27,    18,
       0,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   211,   210,   214,   218,
     215,     0,     0,   212,   202,     0,   280,   279,     0,     0,
       0,     0,     0,   300,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,   500,   509,   468,   468,   468,   468,
     468,   493,   468,   490,     0,   468,   468,   468,   471,   502,
     471,   501,   468,   468,   468,     0,   471,   468,   471,   492,
     499,   491,   510,     0,     0,   494,   362,     0,     0,     0,
       0,     0,     0,     0,     0,   514,   242,     0,   159,     0,
     146,   241,   356,   358,   246,     0,     0,     0,   351,     0,
       0,     5,    45,    48,     0,    42,     0,     0,   132,     0,
       0,     0,     0,   118,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   112,   113,     0,     0,    19,    21,    22,    20,
     138,   136,    40,     0,    38,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    29,    23,    24,    26,    12,
      13,    14,    15,    16,    17,    25,   191,   146,   188,   274,
     273,   193,     0,     0,     0,   198,   231,   201,     0,   146,
     195,   212,   212,     0,   205,     0,   213,     0,   200,     0,
       0,     0,     0,   296,   293,   299,   295,   435,     0,     0,
       0,     0,   297,     0,   497,   473,   479,   476,   473,   473,
       0,   473,   473,   473,   472,   476,   476,   473,   473,   473,
       0,   476,   473,   476,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   515,   516,
       0,   433,   385,   203,   147,     0,   165,   146,   238,   240,
       0,   313,   324,     0,     0,   312,   313,     0,   313,     0,
      59,     0,   130,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,    83,     0,     0,     0,    87,
      88,    89,    91,     0,     0,    93,     0,    96,    97,    98,
      60,    61,    62,    63,    64,    65,    73,    74,    75,     0,
       0,     0,   114,     0,    41,    39,     0,     0,   139,   137,
      51,     0,     0,    36,    32,    34,     0,   148,     0,   226,
     228,   228,   228,     0,     0,     0,   159,   216,   217,     0,
       0,   219,     0,     0,     0,     0,     0,   435,   435,     0,
     307,   435,   302,     0,     0,     0,   485,   495,   487,   489,
     511,     0,   488,   484,   483,   506,   505,   482,   486,   481,
       0,   503,   480,   504,     0,     0,   364,     0,   363,     0,
     262,     0,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   391,     0,     0,     0,
       0,   233,   243,     0,     0,     0,   333,   323,     0,     0,
     313,   340,   313,   341,    46,   134,     0,   133,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,   157,   275,   199,     0,     0,     0,     0,
     347,     0,     0,   165,   208,   206,     0,     0,   204,   220,
       0,     0,     0,     0,     0,   307,   307,   435,     0,     0,
     447,     0,   452,     0,     0,     0,     0,     0,   308,   456,
     437,     0,   454,   304,   307,   294,   301,   469,     0,   474,
     475,     0,     0,   476,     0,   476,   476,   498,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   433,   387,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     433,     0,   513,   152,   152,   160,   161,   166,   335,   334,
       0,     0,   325,   330,   329,     0,   327,   311,   339,   131,
     135,     0,    68,    67,     0,    72,     0,     0,   119,   120,
     101,    79,    80,     0,     0,    84,    85,    86,    90,    92,
      94,    76,     0,     0,    78,   115,    50,    54,     0,     0,
      44,     0,     0,     0,    31,     0,     0,   159,   227,     0,
       0,     0,     0,     0,     0,   343,   221,     0,   207,     0,
       0,     0,   431,     0,   298,   306,   307,   436,   309,     0,
       0,     0,     0,     0,     0,   457,   438,   439,   441,   440,
     445,     0,     0,     0,     0,   455,   453,   303,     0,     0,
     478,   507,   512,   508,   496,     0,   365,     0,     0,     0,
       0,     0,   263,     0,   256,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,   371,
     384,   392,   435,   153,   154,   163,   164,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,    71,   122,   123,
     124,   125,   128,   127,   129,   121,   126,     0,     0,     0,
       0,    52,    56,    37,    33,    35,   152,   155,   158,   165,
     229,     0,     0,     0,   348,   349,     0,     0,   287,   409,
       0,   407,     0,   288,     0,   305,     0,     0,     0,     0,
       0,     0,   459,     0,     0,     0,     0,     0,   470,   477,
       0,   252,   265,   266,   267,     0,     0,     0,     0,   249,
       0,     0,   258,     0,     0,     0,   373,     0,     0,     0,
       0,   399,     0,     0,     0,   396,     0,   395,     0,   405,
       0,     0,     0,   434,   162,   168,   167,   314,   337,   336,
     332,   331,     0,    69,    66,    81,    82,   108,     0,    77,
     150,     0,     0,   149,   169,   225,     0,   224,   223,     0,
     222,     0,     0,     0,   292,     0,   432,   449,     0,   467,
     451,     0,     0,     0,   460,   458,   442,   443,   444,   446,
     366,     0,   260,   257,     0,   254,     0,     0,     0,   251,
     372,   386,     0,     0,     0,     0,     0,   397,   398,   177,
     393,   375,     0,     0,     0,     0,     0,   156,   152,     0,
     174,   230,   350,   290,     0,   410,   408,     0,   465,   466,
       0,     0,     0,   268,   253,   261,   259,     0,   400,     0,
       0,   406,     0,   374,     0,     0,     0,     0,   328,   109,
     151,   171,   170,     0,   145,     0,   448,   450,   464,   461,
     255,     0,   394,     0,   376,   377,     0,     0,     0,     0,
     175,     0,   462,   463,     0,     0,     0,     0,     0,   173,
     172,   411,     0,     0,     0,     0,     0,     0,   413,     0,
       0,     0,     0,   413,     0,     0,   289,   412,     0,     0,
       0,   401,     0,     0,   380,   378,     0,   427,     0,     0,
       0,   413,   413,     0,     0,   379,     0,   428,   291,     0,
     424,   426,   425,     0,     0,     0,   403,   402,     0,   381,
     429,   430,   414,   422,   416,     0,   418,   423,   420,     0,
     413,     0,   417,   415,   421,   419,   404,     0,     0,     0,
       0,     0,     0,     0,   382,   383
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   412,   666,   799,   800,   798,   413,   414,   656,
     794,   657,   795,   421,   427,   775,   242,    16,    17,   398,
     803,  1067,  1035,  1153,   947,   586,   895,   896,   751,  1210,
    1244,  1025,    57,   180,   181,   316,   187,   188,   189,   335,
     190,   332,   527,   333,   523,   818,   819,   515,   807,  1071,
     191,    18,    44,    83,   220,    19,    20,   725,   726,    21,
      22,   510,    65,    23,    24,    25,   843,    26,   756,    49,
      96,   407,   593,   760,  1044,   905,   591,    27,    28,    60,
     519,    29,    69,    30,    31,    32,  1029,  1293,  1294,    43,
     745,   746,  1082,  1080,  1272,  1286,   963,   747,   690,   544,
     555,   696,   697,   386,   701,   582,   583,    33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -964
static const yytype_int16 yypact[] =
{
     695,   -56,   132,   -12,  -964,   249,  -964,   147,   250,  -964,
      22,  -964,   276,    13,    61,   120,    80,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,   343,   507,   395,   514,    42,   395,
    -964,   362,   455,   393,    46,   114,   560,   150,   151,   226,
     579,   588,   226,   321,   295,   326,  -964,   781,   592,   228,
      14,  -964,   608,  -964,   695,    17,   274,   355,   411,   624,
     581,   478,   154,   425,   636,  -964,    43,   395,   382,   646,
    -964,  -964,  -964,   -77,  -964,   437,  -964,  -964,   465,  -964,
     470,  -964,  -964,  -964,  -964,  -964,   689,  -964,   519,   696,
    2647,  2647,  -964,  -964,   693,  -145,  -964,  -964,  -964,  -964,
     697,  2647,  2647,  2647,  -964,  -964,  -964,  1414,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,   449,   451,
     463,   469,   490,   493,   495,   497,   502,   520,   522,   536,
     540,   544,   550,   552,   554,   594,   597,   602,   607,   626,
     630,   655,   664,   691,   700,   722,   724,   728,   782,   802,
     803,   804,   806,   808,   822,   823,   825,   826,   827,   828,
     829,   831,   832,   835,   836,   838,   839,   840,  2647,  4318,
     -32,  -964,   475,    15,    19,    26,     9,  -117,   565,  -964,
    -964,   685,  -964,  -964,   799,   810,  -964,  -964,    58,   101,
     851,    68,   864,   303,    74,  1012,  1101,  -964,  -964,  4046,
    1102,   961,   900,  1108,  -964,   963,   293,   903,  1110,  1088,
    -964,   173,   104,    14,  1121,  1141,  1161,  1162,  -122,  1163,
    -106,  4402,  4402,  -964,  1164,  2647,  2647,  1052,  1052,  -964,
    2647,  1107,   213,  -964,  2647,  1041,  2647,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,   906,  2647,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,  2647,
    2647,   908,  2647,  2647,  2647,   912,  1528,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,  2647,  2647,   913,   914,   915,
     916,  2647,  2647,  2704,  -964,  2647,  2647,  2647,  2647,  2647,
      21,   918,   605,  2647,  1155,  2647,  2647,  2647,  2647,  2647,
    2647,  2647,  2647,  2647,  2647,  1166,  -964,    14,  2647,  1178,
    1179,   222,   921,   202,  1181,    14,  -964,  -964,  -964,   -27,
    -964,    14,  1061,  1042,  -964,  1184,  -964,  -964,  1186,  1188,
    1201,  1202,  1203,  -964,  1205,  1206,  1207,  4046,  1208,  1035,
    1211,  1212,  1213,  -964,  -964,  -964,   957,   957,   957,   957,
     957,  -964,   957,  -964,   958,   957,   957,   957,  1170,  -964,
    1170,  -964,   957,   957,   957,   962,  1170,   957,  1170,  -964,
    -964,  -964,  -964,   964,   965,  -964,    56,   123,  1221,  1224,
    1089,  1298,  1156,  1095,  1302,   -83,  -964,  2647,  1158,    14,
     291,   382,  -964,  -964,  -964,  1304,  1305,   -66,  -964,  1304,
     -65,  -964,   643,  -964,  1047,  4402,  1494,   220,  -964,  2647,
    2647,  1135,    70,  -964,  -964,  -964,  2797,  1787,   807,   944,
    1219,  2818,  2899,  2920,  2949,  2970,  2991,  -964,  1306,  1328,
    1430,  1473,  3012,  1552,  1585,  1676,  3042,  3063,  3084,   378,
    1697,  3105,  1806,  -964,  3126,  3165,  3194,  -964,  1050,  3215,
    3236,  3257,  3287,  3308,  3329,  3350,  3371,  1844,  2052,  2074,
    -964,  -964,  -964,  -964,  3392,  2176,  -964,  1127,  1922,  1955,
    2214,  2214,  -964,    35,  -964,  1138,  2647,  2647,  1053,  2647,
    4356,  1054,  1076,  1084,  2647,   907,   875,   658,   766,   739,
     739,  1329,  1329,  1329,  1329,  -964,  -964,   291,  -964,  -964,
    1097,   302,  1236,  1237,  1238,  -964,  -964,  -964,     3,   311,
     565,  1042,  1042,  1290,  1268,    14,  -964,  1299,  -964,   224,
    4046,  4046,  1421,  -964,  -964,  -964,  -964,  -964,  4046,  1422,
    1248,  1249,  -964,  1423,  -964,  -964,  -964,  -964,  -964,  -964,
    1425,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    1425,  -964,  -964,  -964,  1428,  1429,  1285,  1174,  2647,  1239,
      45,   125,  1289,  1435,   149,  1444,  1458,  1315,  -964,  -964,
    1460,   484,  -964,   685,  4402,  1413,  1334,   291,  -964,  -964,
    1446,   -98,  -964,   253,  1209,  -964,   -98,  1209,  1318,  2647,
    -964,  2647,  -964,  2647,  2602,  1872,  1210,  2647,  2647,  -964,
    2647,  2239,  1345,  1345,  2647,  -964,  -964,  -964,  -964,  -964,
    -964,  2647,  2647,  2647,  2647,  -964,  2647,  2647,  2647,  -964,
    -964,  -964,  -964,  2647,  2647,  -964,  2647,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  2647,
    2647,  2647,  -964,  2647,  -964,  -964,  2647,  1135,  2214,  2214,
    1294,  4379,  2647,  -964,  -964,  -964,  1135,  1367,  1471,   222,
    1370,  1370,  1370,  2647,  1474,  1475,  1158,  -964,  -964,    14,
    2647,   177,    14,  1220,  1365,  1386,  1264,  -964,  -964,  4046,
     714,  -964,  -964,  1523,  1524,   286,   118,   488,   118,   118,
    -964,   318,   118,   118,   118,   488,   488,   118,   118,   118,
     336,   488,   118,   488,  1266,  1267,  1467,  2647,  4402,  1276,
    -964,  1277,  1278,  1279,  1280,   414,  -964,  1344,    45,  1540,
     161,  1346,    45,   164,  1400,  1545,   -88,  1546,  1291,  1426,
     233,  1295,  1296,  1433,  1300,   442,  -964,  1547,  1135,   324,
    2647,  -964,  -964,  1901,  1459,  1557,  -964,  -964,  1580,  2160,
     152,  -964,   152,  -964,  -964,  4402,  4267,  -964,  2647,  -964,
    2552,   428,  3418,  2647,  2647,  1293,  1324,  3439,  3460,  3481,
    2298,  2422,  3502,  3532,  3553,  3574,  3595,  3616,   456,  2443,
    3637,  3663,  1325,  1326,  2647,  1135,  2647,  1173,  1135,  1135,
    1135,  1327,  1541,  1491,  -964,  -964,  1492,  1356,  1358,  1359,
    4402,  1601,     4,  1334,  -964,  4402,  2647,  1361,  -964,  -964,
     177,  2647,  1415,  1416,  1671,   714,   714,  -964,  1533,  1678,
    1418,  1424,  1453,  1640,  1680,  1468,  1724,    30,  -964,  -964,
    -964,  1559,  1605,  -964,   714,  -964,  -964,  -964,  1726,  -964,
    -964,  1558,  1729,  -964,  1730,  -964,  -964,  -964,  1526,  3684,
      45,  1732,  1785,  1793,  1794,  -964,  1795,  1538,   446,  1539,
    1603,    45,  1542,   452,  1604,    45,  1803,   312,   484,  -964,
     227,  2647,  1548,  1549,  1550,  1804,  1804,  1553,  1671,   248,
     484,  4046,  -964,   264,   264,  1560,  -964,   477,  -964,  4402,
    1617,  1817,  -964,  -964,  4402,   460,  -964,  -964,  -964,  -964,
    4402,  2647,  -964,  -964,  2647,  -964,  3705,  4064,  -964,  -964,
    -964,  -964,  -964,  2647,  2647,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  2647,  2647,  -964,  -964,  -964,  -964,  1551,  1576,
    1173,  1577,  1578,  1579,  -964,  2647,  2647,  1158,  -964,  1839,
    1839,  1839,  2647,  2647,  1840,  -964,  4402,  1804,  -964,  3726,
    1842,  1843,  -964,   466,  -964,  -964,   714,  -964,  -964,  1845,
    2647,  1846,  1820,   -23,  2647,  -964,  -964,  -964,  -964,  -964,
    -964,  1586,  1614,  1615,  2647,  -964,  -964,  -964,  1616,  1873,
    -964,   488,  -964,   488,   488,  2647,  -964,   471,  1618,  1619,
    1641,  1647,  -964,    45,  -964,    45,  1650,   473,    45,  -964,
    1651,   479,  1652,  1681,    45,   482,  1653,  1790,  1791,  1656,
    3747,  1842,  1804,  1804,  -964,   487,   499,  1843,   511,    12,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,   324,  2647,  2647,
    1304,  2274,  -964,  2533,  1659,  3777,  3798,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  3819,  3840,   509,
    3861,  -964,  -964,  -964,  -964,  -964,  4288,   -99,  4402,  1334,
    -964,   517,   541,   547,  4402,  4402,  1902,   578,  1903,  -964,
     582,  -964,   586,  -964,  1920,  -964,   599,  3882,   609,  1663,
    1664,  1802,  -964,  3908,  1666,  1667,  1668,  3929,  -964,  -964,
    3950,  -964,  -964,  -964,  -964,  1928,   611,   615,    45,  -964,
     617,    45,  -964,    45,  1672,   619,   248,  2647,  1692,  1693,
    1671,  -964,   622,   631,   647,  -964,  1952,  -964,   649,  -964,
     103,  1953,  1906,   657,  -964,  4402,  4402,  1696,  -964,  4402,
    -964,  4402,  2160,  -964,  -964,  -964,  -964,  -964,  2647,  -964,
    -964,  1805,  2647,  -964,  1856,  -964,  1959,  -964,  -964,  2647,
    -964,  1766,  1816,  1983,  -964,  1985,  -964,  -964,  1984,   539,
    -964,  1986,  2647,  2647,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  1728,  -964,  -964,   652,  -964,   656,   659,    45,  -964,
      12,  -964,  3971,  1842,  1843,   661,  1836,  -964,  -964,  -964,
    -964,  -964,  1988,   198,   -46,   677,  3992,  -964,  4288,   254,
    1874,  -964,  4402,  -964,  1991,  -964,  -964,  1788,  -964,  -964,
    1789,  4022,  4043,  -964,  -964,  -964,  -964,   679,  -964,   682,
     684,  -964,  2044,  -964,  2046,  2049,  1792,  1796,  -964,  -964,
    -964,  1887,  1888,  1804,  -964,  1798,  -964,  -964,   699,  -964,
    -964,  1900,  -964,   688,  -964,  -964,  2057,  2058,  1951,  1973,
    1828,  2103,  -964,  -964,  2105,  2106,  2103,  1898,  1899,  -964,
    -964,  -964,   713,   717,  1908,   725,  1909,  2006,  -964,  2169,
    2170,  2103,  2103,  -964,  2010,  2171,   279,  -964,  1914,   778,
     788,   281,  2177,   790,  -964,  -964,   -30,  2066,   209,   -33,
    2103,  -964,  -964,  2109,  1981,  -964,  2010,  -964,  -964,     6,
    -964,  -964,  -964,   368,   401,   792,   281,   281,  2067,  -964,
    -964,  -964,  -964,  -964,  -964,   -14,  -964,  -964,  -964,   232,
    -964,  2000,  -964,  -964,  -964,  -964,   281,   107,  2037,  2060,
    2065,  2068,  2204,  2205,  -964,  -964
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -964,  2148,   -57,  -964,  -964,  -964,  -964,  -534,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  1600,  1974,  -964,  -148,  -369,
    -964,  -964,  -885,  -964,  -964,  -666,  -964,  1177,  -798,  -964,
    -964,  -882,  -964,  -964,  1905,  -180,  -154,  1891,  -311,  1635,
    -964,  -964,   458,  -964,  -964,  -964,  1399,  1555,   385,   111,
    -964,  -964,  -964,  2141,  1830,  -964,  -964,  -726,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -700,  -964,  -495,   450,
    2193,  2017,  -964,  1624,  -964,  1106,  -408,  -964,  -964,  -964,
    -964,  -964,   297,  -964,  -964,  -964,  1140,  -964,   966,  -964,
    1392,  1381,  -961,  -963,  -698,  -740,  -862,  -964,  -680,   271,
     182,    55,  -542,  -294,  1713,  -733,  -964,  -964,  -964,  2172
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -515
static const yytype_int16 yytable[] =
{
     179,   596,   868,   879,  1026,   321,   873,   825,   826,  1036,
     813,   844,   185,   705,   706,   955,  -344,   185,  -346,   711,
     524,   713,  -345,   673,   953,   223,  1028,   482,   578,   294,
      53,   588,   323,   578,   976,   977,   978,   979,   322,   483,
    1090,   654,  1307,   231,   232,    71,   215,  1313,   720,    78,
    1130,   754,   405,   537,   237,   238,   239,   324,  1122,    36,
     241,   194,   195,    37,    61,   764,  1128,   315,   409,   400,
     317,   343,  1332,   579,   566,  1077,   196,   349,   579,  1320,
     295,   296,   297,   298,   299,   300,   301,   980,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   761,   521,   763,   340,    38,  1151,  1236,  1201,    11,
      11,  1338,    72,   216,   338,   234,   235,    84,  1321,   567,
      63,   293,   792,  1202,   344,   964,   965,   339,  1091,    34,
     350,  1333,    62,   522,   997,   594,   597,   345,   667,   406,
    1123,  1124,   568,   351,   987,  1007,   325,   966,    79,  1011,
     676,    39,  1237,    87,    89,   406,  1030,   211,  1314,  1131,
      73,   217,    80,   507,  1152,   755,   484,    40,    41,  1308,
     341,  1092,   607,   878,    81,   197,  1132,   580,   581,   415,
     655,  1150,    42,   416,    11,    54,   224,   422,   426,   428,
     429,   430,   431,   432,   433,   434,   435,   436,    82,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   681,   454,   455,   456,   752,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
    1229,   318,    85,  1230,   474,   475,   687,   688,   477,   478,
     479,   480,   481,  1339,   691,   587,   490,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,  1195,   595,
     938,   179,   598,   674,   954,   907,  1085,   908,    88,    90,
     186,  1154,   212,   606,  -344,   186,  -346,  1106,  1234,  1107,
    -345,  1069,  1110,   981,   982,   983,   320,   683,  1115,  -514,
    1016,   984,   721,   722,   723,   724,   392,  1296,   102,  1303,
     399,   754,    91,  1033,    91,   294,   347,   198,   418,   419,
     849,   991,  1310,   993,   994,   602,   603,    35,  1334,   569,
      45,   727,   512,  1240,   816,   684,   850,   893,  1017,   894,
     100,   669,    50,   608,   199,    92,    74,    92,   513,    64,
     584,   101,    93,   315,   183,   731,    66,    94,   200,  1034,
     883,  1297,  1133,  1297,    95,   201,   184,   870,   884,  1311,
     874,  1260,   604,   605,   578,   202,    46,   224,   814,  -241,
     611,   820,   348,   817,   218,   685,   397,  1335,  1018,  1235,
    1312,   103,  1184,  1191,   570,  1186,   728,  1187,   295,   296,
     297,   298,   299,   300,   301,   827,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   579,
     732,   393,    47,   203,  1298,   906,  1298,   420,   686,   514,
    1241,  1019,   871,  -514,   420,   875,  1299,  1322,  1299,   658,
     659,   204,   661,   219,    48,    51,  -241,   293,   295,   296,
     297,   298,   299,   300,   301,  1242,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,    52,
    1326,    58,  1227,    59,   517,   325,   295,   296,   297,   298,
     299,   300,   301,   205,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   295,   296,   297,
     298,   299,   300,   301,   397,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,  1013,   793,
      67,   718,  1323,    68,   397,   757,   758,    70,   801,   295,
     296,   297,   298,   299,   300,   301,  1324,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     737,    75,  1325,  1291,   765,  1327,   766,   738,   847,   848,
     770,   771,   556,   772,   325,   851,   852,   777,   561,  1328,
     563,  1316,  1317,    86,   778,   779,   780,   781,  1275,   782,
     783,   784,    76,  1014,   675,  1329,   785,   786,    77,   787,
     853,   854,    97,  1289,  1290,   739,  1218,  1219,   740,   104,
    1336,    98,   788,   789,   790,   182,   791,  1032,   855,   854,
     892,   741,  1315,   698,   699,   797,   702,   703,   704,   742,
    1038,   192,   707,   708,   709,   206,   810,   712,   486,   487,
     207,   488,   209,   815,   489,   210,   326,   208,   545,   546,
     547,   548,  1137,   549,   213,   743,   551,   552,   553,   214,
     632,   633,   219,   557,   558,   559,   225,   939,   562,   221,
     941,   942,   943,   295,   296,   297,   298,   299,   300,   301,
     859,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   226,   828,   865,   866,   744,   227,
     327,   307,   308,   309,   310,   311,   312,   313,   314,  -209,
     913,   914,   228,   897,   328,   830,   899,   229,   831,   230,
     832,    53,   904,   833,   889,   890,   236,   329,  1004,   866,
     243,   910,   244,   834,  1009,   866,   916,   917,   931,   932,
     835,   836,  1042,  1043,   245,   330,   334,     1,  1083,  1084,
     246,     2,   828,  1101,   866,  1109,   866,   331,   319,   940,
    1039,  1112,   866,   837,  1116,   890,  1262,  1263,   829,  1125,
    1126,   247,   830,     3,   248,   831,   249,   832,   250,   956,
     833,  1127,  1126,   251,   959,   310,   311,   312,   313,   314,
     834,  1147,  1148,  1129,  1084,     4,     5,   835,   836,  1155,
    1156,   252,   839,   253,   105,   106,   107,   108,   109,   110,
     308,   309,   310,   311,   312,   313,   314,   254,   111,   112,
     837,   255,   840,  1157,  1156,   256,   113,   114,   841,  1158,
    1156,   257,   838,   258,     6,   259,   115,   295,   296,   297,
     298,   299,   300,   301,  1020,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   116,   839,
    1160,  1126,   336,   117,  1162,  1163,   118,   119,  1164,  1165,
       7,   842,     8,   337,  1045,   260,     9,  1046,   261,   840,
     120,  1167,  1168,   262,   121,   841,  1057,  1058,   263,    10,
      11,  1170,  1171,  1182,   866,  1059,  1060,  1183,   866,  1185,
     866,  1189,   866,    12,  1196,  1163,    13,   264,  1066,  1068,
     122,   265,    14,  1197,  1126,  1074,  1075,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   599,   342,   842,  1198,
    1126,  1200,  1165,  1087,  1224,   866,   266,  1093,  1225,   866,
     346,  1226,   866,  1231,  1084,   267,   123,  1097,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,  1100,  1238,
    1043,  1250,   866,   124,  1251,  1163,  1252,  1165,  1265,  1266,
     125,   126,   268,   127,   295,   296,   297,   298,   299,   300,
     301,   269,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,  1278,  1279,  1280,  1281,   677,
     678,  1135,  1136,   270,  1139,   271,  1141,  1283,  1279,   272,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
    1301,  1279,   178,   273,   105,   106,   107,   108,   109,   110,
    1302,  1279,  1305,  1306,  1330,  1279,   808,   809,   111,   112,
    1192,  1072,  1073,   274,   275,   276,   113,   277,   352,   278,
     612,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   279,   280,   904,   281,   282,   283,   284,
     285,  1206,   286,   287,   423,  1208,   288,   289,   116,   290,
     291,   292,  1212,   117,   353,   387,   118,   119,   388,   389,
     391,   390,   394,   395,   396,  1221,  1222,   295,   296,   297,
     298,   299,   300,   301,   401,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   296,   297,
     298,   299,   300,   301,   402,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   105,   106,
     107,   108,   109,   110,   403,   404,   408,   411,   437,   506,
     453,   424,   111,   112,   457,   470,   471,   472,   473,   485,
     113,   509,   511,   516,   518,   525,   123,   528,   526,   529,
     491,   530,   492,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   531,   532,   533,   613,   534,   535,
     536,   538,   116,   539,   540,   541,   542,   117,   543,   550,
     118,   119,   554,   560,   571,   564,   565,   572,   425,   295,
     296,   297,   298,   299,   300,   301,   573,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     123,   574,   178,   575,   576,   577,   585,   590,   592,   600,
      11,   240,   640,   -53,   660,   663,   295,   296,   297,   298,
     299,   300,   301,   493,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   664,   295,   296,
     297,   298,   299,   300,   301,   665,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   314,
     668,   670,   671,   672,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   679,   680,   494,   105,   106,   107,
     108,   109,   110,   682,   689,   692,   693,   694,   695,   700,
     716,   111,   112,   714,   715,   717,   729,   719,   730,   113,
     295,   296,   297,   298,   299,   300,   301,   733,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   734,   735,   736,   749,   750,   753,   754,   774,   -55,
     759,   116,   769,   802,   804,   806,   117,   811,   812,   118,
     119,   821,   614,   295,   296,   297,   298,   299,   300,   301,
     822,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   295,   296,   297,   298,   299,   300,
     301,   823,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   824,   845,   846,   856,   857,
     858,   105,   106,   107,   108,   109,   110,   860,   861,   862,
     863,   864,   867,   869,   872,   111,   112,   876,   877,   880,
     891,   882,   881,   113,   458,   918,   885,   886,   887,   123,
     901,   888,   295,   296,   297,   298,   299,   300,   301,   621,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   902,   900,   116,   919,   936,   937,   944,
     117,   622,   945,   118,   119,   295,   296,   297,   298,   299,
     300,   301,   946,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   948,   949,   240,   950,
     951,   952,   957,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   123,   962,   178,   960,   961,   967,   969,
     601,   968,   972,   973,   985,   970,   295,   296,   297,   298,
     299,   300,   301,   623,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   295,   296,   297,
     298,   299,   300,   301,   971,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   975,   974,
     986,   988,   989,   990,   992,   998,   624,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   995,   999,   178,
     105,   106,   107,   108,   109,   110,  1000,  1001,  1002,  1003,
    1005,  1006,  1010,  1008,   111,   112,  1012,  1024,  1040,  1021,
    1022,  1023,   113,  1061,  1027,   626,   295,   296,   297,   298,
     299,   300,   301,  1037,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,  1041,  1062,  1063,
    1064,  1065,  1070,  1076,   116,  1079,  1081,  1094,   627,   117,
    1086,  1088,   118,   119,   295,   296,   297,   298,   299,   300,
     301,  1089,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,  1095,  1096,  1099,  1098,  1114,
    1102,  1103,   295,   296,   297,   298,   299,   300,   301,   610,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,  1104,   105,   106,   107,   108,   109,   110,
    1105,  1108,  1111,  1113,  1117,  1118,  1119,  1120,   111,   112,
    1142,  1161,  1159,  1166,  1172,  1173,   113,  1174,  1176,  1177,
    1178,  1181,   123,  1188,   297,   298,   299,   300,   301,   628,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,  1193,  1194,  1199,  1203,  1204,   116,   755,
     634,  1209,  1211,   117,  1207,  1213,   118,   119,   298,   299,
     300,   301,  1214,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,  1215,   898,  1216,  1217,
    1223,  1220,  1232,  1233,  1245,  1243,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   123,  1253,   178,  1254,
    1246,  1247,  1255,  1256,  1258,  1259,  1264,  1257,   768,  1261,
    1267,  1268,   295,   296,   297,   298,   299,   300,   301,   636,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,  1269,   295,   296,   297,   298,   299,   300,
     301,  1126,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,  1270,  1271,   649,  1273,  1274,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
    1276,  1277,   178,   105,   106,   107,   108,   109,   110,  1282,
    1284,  1285,  1287,  1288,  1292,  1300,  1295,   111,   112,  1309,
    1304,  1307,  1318,  1337,  1340,   113,   295,   296,   297,   298,
     299,   300,   301,  1331,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,  1341,  1342,  1344,
    1345,  1343,   193,   776,  1134,   417,   520,   116,   748,   958,
     222,   762,   117,   508,   805,   118,   119,  -515,  -515,  -515,
    -515,   589,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,    99,   903,   410,  1205,   295,
     296,   297,   298,   299,   300,   301,  1190,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
    1015,  1031,  1319,   710,     0,     0,   233,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   123,     0,     0,   295,   296,
     297,   298,   299,   300,   301,   650,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
       0,   116,     0,     0,     0,     0,   117,   651,     0,   118,
     119,   773,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1138,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   123,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   653,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   295,   296,   297,   298,   299,   300,   301,
       0,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,     0,   178,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112,     0,     0,     0,     0,     0,     0,   113,     0,
       0,   923,   295,   296,   297,   298,   299,   300,   301,     0,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,     0,   117,     0,     0,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,  1140,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,   911,     0,     0,
       0,     0,     0,     0,   111,   112,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,   924,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   767,     0,     0,
       0,     0,     0,     0,   116,     0,   933,     0,     0,   117,
       0,     0,   118,   119,   295,   296,   297,   298,   299,   300,
     301,     0,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   123,     0,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,   296,   297,
     298,   299,   300,   301,   912,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   295,   296,
     297,   298,   299,   300,   301,     0,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,   178,   295,
     296,   297,   298,   299,   300,   301,     0,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     295,   296,   297,   298,   299,   300,   301,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   476,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     295,   296,   297,   298,   299,   300,   301,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   295,   296,   297,   298,   299,   300,   301,     0,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   295,   296,   297,   298,   299,   300,   301,     0,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   609,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   295,   296,   297,   298,   299,   300,   301,
     615,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   295,   296,   297,   298,   299,   300,
     301,     0,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   295,   296,   297,   298,   299,
     300,   301,     0,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   295,   296,   297,   298,
     299,   300,   301,     0,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,     0,     0,     0,
       0,   616,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   296,   297,   298,   299,
     300,   301,   617,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,     0,     0,     0,     0,
       0,     0,     0,     0,   295,   296,   297,   298,   299,   300,
     301,   618,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   295,   296,   297,   298,   299,
     300,   301,   619,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   295,   296,   297,   298,
     299,   300,   301,   620,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   295,   296,   297,
     298,   299,   300,   301,   625,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,   296,   297,
     298,   299,   300,   301,   629,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   295,   296,
     297,   298,   299,   300,   301,   630,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   295,
     296,   297,   298,   299,   300,   301,   631,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     295,   296,   297,   298,   299,   300,   301,   635,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   295,   296,   297,   298,   299,   300,   301,   637,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   295,   296,   297,   298,   299,   300,   301,     0,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,   638,   295,   296,
     297,   298,   299,   300,   301,     0,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   295,
     296,   297,   298,   299,   300,   301,   639,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     295,   296,   297,   298,   299,   300,   301,   641,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   295,   296,   297,   298,   299,   300,   301,   642,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   295,   296,   297,   298,   299,   300,   301,   643,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   644,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   295,   296,   297,   298,   299,   300,   301,
     645,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   295,   296,   297,   298,   299,   300,
     301,   646,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   295,   296,   297,   298,   299,
     300,   301,   647,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   295,   296,   297,   298,
     299,   300,   301,   648,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   295,   296,   297,
     298,   299,   300,   301,   652,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,     0,
       0,     0,     0,   295,   296,   297,   298,   299,   300,   301,
     915,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   295,   296,   297,   298,   299,   300,
     301,   920,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   295,   296,   297,   298,   299,
     300,   301,   921,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   295,   296,   297,   298,
     299,   300,   301,   922,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   295,   296,   297,
     298,   299,   300,   301,   925,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,   296,   297,
     298,   299,   300,   301,   926,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   295,   296,
     297,   298,   299,   300,   301,   927,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   295,
     296,   297,   298,   299,   300,   301,   928,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     295,   296,   297,   298,   299,   300,   301,   929,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   295,   296,   297,   298,   299,   300,   301,   930,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   295,   296,   297,   298,   299,   300,   301,   934,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,     0,   295,   296,
     297,   298,   299,   300,   301,   935,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   295,
     296,   297,   298,   299,   300,   301,   996,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     295,   296,   297,   298,   299,   300,   301,  1047,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   295,   296,   297,   298,   299,   300,   301,  1078,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   295,   296,   297,   298,   299,   300,   301,  1121,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,   296,   297,   298,   299,   300,   301,  1143,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   295,   296,   297,   298,   299,   300,   301,
    1144,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   295,   296,   297,   298,   299,   300,
     301,  1145,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   354,   355,     0,   356,     0,
     357,   358,  1146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   359,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   360,   361,   362,   363,     0,     0,     0,
     364,  1048,  1049,     0,  1169,   365,  1050,     0,  1051,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     366,     0,     0,     0,     0,     0,     0,     0,   367,     0,
    1175,  1052,  1053,   368,  1054,     0,     0,     0,     0,     0,
     369,     0,     0,   370,     0,     0,   371,   372,     0,     0,
       0,  1179,     0,     0,     0,     0,     0,     0,     0,     0,
     373,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1180,     0,     0,     0,     0,     0,     0,   374,
     375,     0,   376,   377,     0,     0,     0,     0,   378,     0,
     379,     0,     0,  1228,     0,   380,   381,     0,     0,     0,
       0,   382,     0,     0,     0,     0,   383,     0,   384,     0,
       0,     0,   385,     0,  1239,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1055,  1056,     0,     0,     0,     0,     0,   295,   296,   297,
     298,   299,   300,   301,  1248,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   295,   296,
     297,   298,   299,   300,   301,  1249,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
       0,   294,     0,     0,     0,     0,     0,  1033,   295,   296,
     297,   298,   299,   300,   301,     0,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   315,
       0,     0,   909,     0,     0,     0,   295,   296,   297,   298,
     299,   300,   301,  1034,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,     0,     0,   295,
     296,   297,   298,   299,   300,   301,   662,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
       0,     0,   295,   296,   297,   298,   299,   300,   301,   796,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314
};

static const yytype_int16 yycheck[] =
{
      57,   409,   728,   736,   886,   185,   732,   687,   688,   894,
     676,   691,     3,   555,   556,   813,     3,     3,     3,   561,
     331,   563,     3,    20,    20,   102,   888,     6,   116,     3,
       8,   400,   186,   116,     4,     5,     6,     7,   186,    18,
      63,     6,    72,   100,   101,     3,     3,    80,     3,     3,
      38,   149,   174,   347,   111,   112,   113,   174,  1021,    71,
     117,    44,    45,    75,     3,   599,  1027,    41,   174,   223,
     102,     3,    86,   161,    18,   957,    59,     3,   161,    73,
      10,    11,    12,    13,    14,    15,    16,    57,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   596,   129,   598,     3,   117,   205,   153,     5,   175,
     175,     4,    70,    70,    56,   260,   261,     3,   112,    63,
       0,   178,   656,    20,    56,   825,   826,    69,   151,   185,
      56,   145,    71,   160,   860,   201,   201,    69,   507,   261,
    1022,  1023,    86,    69,   844,   871,   263,   827,   102,   875,
     519,   163,   198,     3,     3,   261,   889,     3,   191,   147,
     118,   118,   116,   317,   263,   263,   145,   179,   180,   199,
      69,   194,   102,   261,   128,   158,   164,   260,   261,   236,
     145,  1066,   194,   240,   175,   163,   263,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   152,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   525,   272,   273,   274,   587,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
    1193,   263,   118,  1194,   291,   292,   530,   531,   295,   296,
     297,   298,   299,   136,   538,   399,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,  1120,   407,
     794,   318,   410,   260,   260,   760,   966,   762,   118,   118,
     261,  1069,   118,   421,   261,   261,   261,  1003,    80,  1005,
     261,   947,  1008,   253,   254,   255,   260,    63,  1014,    41,
      63,   261,   247,   248,   249,   250,     3,    18,     3,    18,
     196,   149,    76,    39,    76,     3,     3,    33,    95,    96,
     192,   853,   103,   855,   856,    95,    96,   185,    86,   196,
      71,   196,   100,  1208,   147,   101,   208,     3,   101,     5,
       9,   511,   185,   263,    60,   109,    39,   109,   116,   259,
     397,    20,   116,    41,   116,   196,     3,   121,    74,    85,
     117,    72,  1032,    72,   128,    81,   128,   196,   125,   150,
     196,  1243,   419,   420,   116,    91,   117,   263,   679,   196,
     427,   682,    69,   196,    77,   151,   203,   145,   151,   181,
     171,    86,  1108,  1116,   261,  1111,   261,  1113,    10,    11,
      12,    13,    14,    15,    16,   689,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   161,
     261,   118,   163,   139,   135,   263,   135,   204,   194,   197,
     166,   194,   261,   175,   204,   261,   147,    59,   147,   486,
     487,   157,   489,   260,   185,   185,   263,   494,    10,    11,
      12,    13,    14,    15,    16,   191,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     9,
      59,   185,  1188,    13,   262,   263,    10,    11,    12,    13,
      14,    15,    16,   199,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   203,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   196,   657,
       3,   568,   144,   118,   203,   262,   263,     3,   666,    10,
      11,    12,    13,    14,    15,    16,   158,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      56,   179,   174,  1283,   601,   144,   603,    63,   262,   263,
     607,   608,   370,   610,   263,    67,    68,   614,   376,   158,
     378,  1301,  1302,     3,   621,   622,   623,   624,  1266,   626,
     627,   628,   117,   261,   263,   174,   633,   634,   185,   636,
     262,   263,     3,  1281,  1282,   101,    47,    48,   104,   263,
    1330,     3,   649,   650,   651,     3,   653,   891,   262,   263,
     748,   117,  1300,   548,   549,   662,   551,   552,   553,   125,
     133,     3,   557,   558,   559,   260,   673,   562,    13,    14,
     209,    16,    41,   680,    19,   147,    61,     3,   357,   358,
     359,   360,  1040,   362,   209,   151,   365,   366,   367,     3,
     262,   263,   260,   372,   373,   374,   209,   795,   377,     3,
     798,   799,   800,    10,    11,    12,    13,    14,    15,    16,
     717,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   209,    18,   262,   263,   194,   209,
     115,    23,    24,    25,    26,    27,    28,    29,    30,   124,
     262,   263,     3,   750,   129,    38,   753,   178,    41,     3,
      43,     8,   759,    46,   262,   263,     9,   142,   262,   263,
     261,   768,   261,    56,   262,   263,   773,   774,   262,   263,
      63,    64,   262,   263,   261,   160,    41,    32,   262,   263,
     261,    36,    18,   262,   263,   262,   263,   172,   263,   796,
     263,   262,   263,    86,   262,   263,    47,    48,    34,   262,
     263,   261,    38,    58,   261,    41,   261,    43,   261,   816,
      46,   262,   263,   261,   821,    26,    27,    28,    29,    30,
      56,   262,   263,   262,   263,    80,    81,    63,    64,   262,
     263,   261,   125,   261,     3,     4,     5,     6,     7,     8,
      24,    25,    26,    27,    28,    29,    30,   261,    17,    18,
      86,   261,   145,   262,   263,   261,    25,    26,   151,   262,
     263,   261,    98,   261,   119,   261,    35,    10,    11,    12,
      13,    14,    15,    16,   881,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    57,   125,
     262,   263,    43,    62,   262,   263,    65,    66,   262,   263,
     155,   194,   157,    43,   911,   261,   161,   914,   261,   145,
      79,   262,   263,   261,    83,   151,   923,   924,   261,   174,
     175,   262,   263,   262,   263,   932,   933,   262,   263,   262,
     263,   262,   263,   188,   262,   263,   191,   261,   945,   946,
     109,   261,   197,   262,   263,   952,   953,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   263,    56,   194,   262,
     263,   262,   263,   970,   262,   263,   261,   974,   262,   263,
      56,   262,   263,   262,   263,   261,   145,   984,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   995,   262,
     263,   262,   263,   162,   262,   263,   262,   263,   260,   261,
     169,   170,   261,   172,    10,    11,    12,    13,    14,    15,
      16,   261,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   262,   263,   260,   261,   521,
     522,  1038,  1039,   261,  1041,   261,  1043,   262,   263,   261,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     262,   263,   261,   261,     3,     4,     5,     6,     7,     8,
     262,   263,   262,   263,   262,   263,   671,   672,    17,    18,
    1117,   950,   951,   261,   261,   261,    25,   261,    56,   261,
     263,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   261,   261,  1142,   261,   261,   261,   261,
     261,  1148,   261,   261,    53,  1152,   261,   261,    57,   261,
     261,   261,  1159,    62,     3,     3,    65,    66,   147,   209,
     147,     3,   209,     3,    26,  1172,  1173,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     4,
       5,     6,     7,     8,     3,     3,     3,     3,   262,     3,
     262,   130,    17,    18,   262,   262,   262,   262,   262,   261,
      25,     3,     3,   262,     3,   124,   145,     3,   146,     3,
      35,     3,    37,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,     3,     3,   263,     3,     3,
       3,     3,    57,   178,     3,     3,     3,    62,   261,   261,
      65,    66,    52,   261,     3,   261,   261,     3,   187,    10,
      11,    12,    13,    14,    15,    16,   147,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     145,     3,   261,   147,   209,     3,   148,     3,     3,   262,
     175,   204,   262,   175,   261,   261,    10,    11,    12,    13,
      14,    15,    16,   168,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   261,    10,    11,
      12,    13,    14,    15,    16,   261,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    30,
     263,   125,   125,   125,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   124,   147,   261,     3,     4,     5,
       6,     7,     8,   124,     3,     3,   178,   178,     5,     4,
     145,    17,    18,     5,     5,   261,   147,   198,     3,    25,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,   147,     3,    51,   131,    20,   149,   123,   175,
     261,    57,   262,   106,     3,   105,    62,     3,     3,    65,
      66,   261,   263,    10,    11,    12,    13,    14,    15,    16,
     125,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   125,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   261,     3,     3,   262,   262,
      63,     3,     4,     5,     6,     7,     8,   261,   261,   261,
     261,   261,   198,     3,   198,    17,    18,   147,     3,     3,
       3,   125,   261,    25,    26,   262,   261,   261,   125,   145,
       3,   261,    10,    11,    12,    13,    14,    15,    16,   263,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,   125,    57,   262,   262,   262,   262,
      62,   263,    51,    65,    66,    10,    11,    12,    13,    14,
      15,    16,   111,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   124,   261,   204,   261,
     261,    20,   261,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   145,     3,   261,   261,   261,   145,   261,
     186,     3,    42,     3,   125,   261,    10,    11,    12,    13,
      14,    15,    16,   263,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   261,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     4,   261,
     125,     5,   174,     4,     4,     3,   263,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   261,     3,   261,
       3,     4,     5,     6,     7,     8,     3,     3,     3,   261,
     261,   198,   198,   261,    17,    18,     3,     3,   191,   261,
     261,   261,    25,   262,   261,   263,    10,    11,    12,    13,
      14,    15,    16,   263,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    20,   262,   262,
     262,   262,     3,     3,    57,     3,     3,   261,   263,    62,
       5,     5,    65,    66,    10,    11,    12,    13,    14,    15,
      16,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   261,   261,     4,   262,   198,
     262,   262,    10,    11,    12,    13,    14,    15,    16,   102,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   262,     3,     4,     5,     6,     7,     8,
     263,   261,   261,   261,   261,   125,   125,   261,    17,    18,
     261,    18,    20,     3,   261,   261,    25,   125,   262,   262,
     262,     3,   145,   261,    12,    13,    14,    15,    16,   263,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   261,   261,     3,     3,    51,    57,   263,
     263,   105,     3,    62,   159,   199,    65,    66,    13,    14,
      15,    16,   156,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,    86,     3,     5,
     262,     5,   156,     5,     3,   121,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   145,     3,   261,     3,
     262,   262,     3,   261,   167,   167,   156,   261,   186,   261,
       3,     3,    10,    11,    12,    13,    14,    15,    16,   263,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   132,    10,    11,    12,    13,    14,    15,
      16,   263,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   132,     3,   263,     3,     3,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     262,   262,   261,     3,     4,     5,     6,     7,     8,   261,
     261,   165,     3,     3,   164,   261,     5,    17,    18,   113,
       3,    72,   201,   183,   147,    25,    10,    11,    12,    13,
      14,    15,    16,   126,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   147,   143,     5,
       5,   143,    64,   613,  1037,   241,   325,    57,   583,   820,
      79,   597,    62,   318,   669,    65,    66,    13,    14,    15,
      16,   401,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    52,    86,   230,  1142,    10,
      11,    12,    13,    14,    15,    16,  1116,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     878,   890,  1306,   560,    -1,    -1,   104,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   263,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,   263,    -1,    65,
      66,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   145,
      -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   263,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,   261,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,   263,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    86,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,   263,    -1,    -1,    62,
      -1,    -1,    65,    66,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   145,    -1,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,   261,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   262,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   262,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     262,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   262,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   262,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   262,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   262,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   262,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   262,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   262,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   262,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,   262,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   262,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   262,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   262,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   262,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   262,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     262,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   262,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   262,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   262,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     262,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   262,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   262,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   262,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   262,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   262,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   262,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   262,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   262,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   262,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   262,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   262,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   262,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   262,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   262,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     262,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   262,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    49,    50,    -1,    52,    -1,
      54,    55,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    77,    78,    -1,   262,    99,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     262,   107,   108,   127,   110,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,   137,    -1,    -1,   140,   141,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,    -1,   176,   177,    -1,    -1,    -1,    -1,   182,    -1,
     184,    -1,    -1,   262,    -1,   189,   190,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,    -1,
      -1,    -1,   206,    -1,   262,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,   207,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   262,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   262,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    95,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    85,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    40,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   197,   265,   281,   282,   315,   319,
     320,   323,   324,   327,   328,   329,   331,   341,   342,   345,
     347,   348,   349,   371,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   353,   316,    71,   117,   163,   185,   333,
     185,   185,   333,     8,   163,   372,   373,   296,   185,   333,
     343,     3,    71,     0,   259,   326,     3,     3,   118,   346,
       3,     3,    70,   118,   346,   179,   117,   185,     3,   102,
     116,   128,   152,   317,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   334,     3,     3,   334,
       9,    20,     3,    86,   263,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   261,   266,
     297,   298,     3,   116,   128,     3,   261,   300,   301,   302,
     304,   314,     3,   265,    44,    45,    59,   158,    33,    60,
      74,    81,    91,   139,   157,   199,   260,   209,     3,    41,
     147,     3,   118,   209,     3,     3,    70,   118,   346,   260,
     318,     3,   317,   102,   263,   209,   209,   209,     3,   178,
       3,   266,   266,   373,   260,   261,     9,   266,   266,   266,
     204,   266,   280,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   266,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    41,   299,   102,   263,   263,
     260,   299,   282,   300,   174,   263,    61,   115,   129,   142,
     160,   172,   305,   307,    41,   303,    43,    43,    56,    69,
       3,    69,    56,     3,    56,    69,    56,     3,    69,     3,
      56,    69,    56,     3,    49,    50,    52,    54,    55,    67,
      87,    88,    89,    90,    94,    99,   114,   122,   127,   134,
     137,   140,   141,   154,   173,   174,   176,   177,   182,   184,
     189,   190,   195,   200,   202,   206,   367,     3,   147,   209,
       3,   147,     3,   118,   209,     3,    26,   203,   283,   196,
     300,     3,     3,     3,     3,   174,   261,   335,     3,   174,
     335,     3,   266,   271,   272,   266,   266,   280,    95,    96,
     204,   277,   266,    53,   130,   187,   266,   278,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   262,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   262,   266,   266,   266,   262,    26,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     262,   262,   262,   262,   266,   266,   262,   266,   266,   266,
     266,   266,     6,    18,   145,   261,    13,    14,    16,    19,
     266,    35,    37,   168,   261,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,     3,   300,   298,     3,
     325,     3,   100,   116,   197,   311,   262,   262,     3,   344,
     301,   129,   160,   308,   302,   124,   146,   306,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   367,     3,   178,
       3,     3,     3,   261,   363,   363,   363,   363,   363,   363,
     261,   363,   363,   363,    52,   364,   364,   363,   363,   363,
     261,   364,   363,   364,   261,   261,    18,    63,    86,   196,
     261,     3,     3,   147,     3,   147,   209,     3,   116,   161,
     260,   261,   369,   370,   266,   148,   289,   300,   283,   318,
       3,   340,     3,   336,   201,   282,   340,   201,   282,   263,
     262,   186,    95,    96,   266,   266,   282,   102,   263,   262,
     102,   266,   263,   263,   263,   262,   262,   262,   262,   262,
     262,   263,   263,   263,   263,   262,   263,   263,   263,   262,
     262,   262,   262,   263,   263,   262,   263,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
     263,   263,   262,   263,     6,   145,   273,   275,   266,   266,
     261,   266,    40,   261,   261,   261,   267,   283,   263,   299,
     125,   125,   125,    20,   260,   263,   283,   306,   306,   124,
     147,   302,   124,    63,   101,   151,   194,   367,   367,     3,
     362,   367,     3,   178,   178,     5,   365,   366,   365,   365,
       4,   368,   365,   365,   365,   366,   366,   365,   365,   365,
     368,   366,   365,   366,     5,     5,   145,   261,   266,   198,
       3,   247,   248,   249,   250,   321,   322,   196,   261,   147,
       3,   196,   261,     3,     3,   147,     3,    56,    63,   101,
     104,   117,   125,   151,   194,   354,   355,   361,   303,    51,
     131,   292,   283,    20,   149,   263,   332,   262,   263,   261,
     337,   332,   337,   332,   271,   266,   266,    95,   186,   262,
     266,   266,   266,   102,   123,   279,   279,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   271,   282,   274,   276,    40,   266,   270,   268,
     269,   282,   106,   284,     3,   311,   105,   312,   312,   312,
     266,     3,     3,   289,   302,   266,   147,   196,   309,   310,
     302,   261,   125,   125,   261,   362,   362,   367,    18,    34,
      38,    41,    43,    46,    56,    63,    64,    86,    98,   125,
     145,   151,   194,   330,   362,     3,     3,   262,   263,   192,
     208,    67,    68,   262,   263,   262,   262,   262,    63,   266,
     261,   261,   261,   261,   261,   262,   263,   198,   321,     3,
     196,   261,   198,   321,   196,   261,   147,     3,   261,   369,
       3,   261,   125,   117,   125,   261,   261,   125,   261,   262,
     263,     3,   282,     3,     5,   290,   291,   266,    86,   266,
     125,     3,     3,    86,   266,   339,   263,   332,   332,    95,
     266,   105,   262,   262,   263,   262,   266,   266,   262,   262,
     262,   262,   262,   263,   263,   262,   262,   262,   262,   262,
     262,   262,   263,   263,   262,   262,   262,   262,   271,   282,
     266,   282,   282,   282,   262,    51,   111,   288,   124,   261,
     261,   261,    20,    20,   260,   292,   266,   261,   310,   266,
     261,   261,     3,   360,   330,   330,   362,   145,     3,   261,
     261,   261,    42,     3,   261,     4,     4,     5,     6,     7,
      57,   253,   254,   255,   261,   125,   125,   330,     5,   174,
       4,   366,     4,   366,   366,   261,   262,   321,     3,     3,
       3,     3,     3,   261,   262,   261,   198,   321,   261,   262,
     198,   321,     3,   196,   261,   354,    63,   101,   151,   194,
     266,   261,   261,   261,     3,   295,   295,   261,   360,   350,
     369,   355,   367,    39,    85,   286,   286,   263,   133,   263,
     191,    20,   262,   263,   338,   266,   266,   262,    77,    78,
      82,    84,   107,   108,   110,   206,   207,   266,   266,   266,
     266,   262,   262,   262,   262,   262,   266,   285,   266,   289,
       3,   313,   313,   313,   266,   266,     3,   295,   262,     3,
     357,     3,   356,   262,   263,   330,     5,   266,     5,    41,
      63,   151,   194,   266,   261,   261,   261,   266,   262,     4,
     266,   262,   262,   262,   262,   263,   321,   321,   261,   262,
     321,   261,   262,   261,   198,   321,   262,   261,   125,   125,
     261,   262,   357,   295,   295,   262,   263,   262,   356,   262,
      38,   147,   164,   362,   291,   266,   266,   340,    86,   266,
      86,   266,   261,   262,   262,   262,   262,   262,   263,   262,
     286,   205,   263,   287,   292,   262,   263,   262,   262,    20,
     262,    18,   262,   263,   262,   263,     3,   262,   263,   262,
     262,   263,   261,   261,   125,   262,   262,   262,   262,   262,
     262,     3,   262,   262,   321,   262,   321,   321,   261,   262,
     350,   369,   266,   261,   261,   360,   262,   262,   262,     3,
     262,     5,    20,     3,    51,   339,   266,   159,   266,   105,
     293,     3,   266,   199,   156,     3,     3,     5,    47,    48,
       5,   266,   266,   262,   262,   262,   262,   321,   262,   357,
     356,   262,   156,     5,    80,   181,   153,   198,   262,   262,
     286,   166,   191,   121,   294,     3,   262,   262,   262,   262,
     262,   262,   262,     3,     3,     3,   261,   261,   167,   167,
     295,   261,    47,    48,   156,   260,   261,     3,     3,   132,
     132,     3,   358,     3,     3,   358,   262,   262,   262,   263,
     260,   261,   261,   262,   261,   165,   359,     3,     3,   358,
     358,   359,   164,   351,   352,     5,    18,    72,   135,   147,
     261,   262,   262,    18,     3,   262,   263,    72,   199,   113,
     103,   150,   171,    80,   191,   358,   359,   359,   201,   352,
      73,   112,    59,   144,   158,   174,    59,   144,   158,   174,
     262,   126,    86,   145,    86,   145,   359,   183,     4,   136,
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
#line 366 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 372 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 373 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 375 "parser/evoparser.y"
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
#line 393 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 401 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 409 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 415 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 422 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 423 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 424 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 425 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 426 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 427 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 428 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 429 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 430 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 431 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 432 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 433 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 434 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 435 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 436 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 437 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 438 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 440 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 445 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 31:
#line 446 "parser/evoparser.y"
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
#line 454 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 33:
#line 455 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 34:
#line 456 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 457 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 36:
#line 458 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 459 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 38:
#line 462 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 39:
#line 463 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 40:
#line 464 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 41:
#line 465 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 42:
#line 466 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 43:
#line 469 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 44:
#line 470 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 45:
#line 473 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 46:
#line 474 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 47:
#line 477 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 49:
#line 481 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 50:
#line 481 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 51:
#line 482 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 52:
#line 482 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 53:
#line 483 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 54:
#line 484 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 55:
#line 491 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 56:
#line 492 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 57:
#line 499 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 58:
#line 500 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 59:
#line 510 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 60:
#line 514 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 61:
#line 515 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 62:
#line 516 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 517 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 518 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 65:
#line 519 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 66:
#line 521 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 67:
#line 522 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 68:
#line 523 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 69:
#line 524 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 70:
#line 525 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 71:
#line 526 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 72:
#line 527 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 73:
#line 528 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 74:
#line 529 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 75:
#line 530 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 76:
#line 531 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 77:
#line 532 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 78:
#line 533 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 79:
#line 534 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 80:
#line 535 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 81:
#line 536 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 82:
#line 537 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 83:
#line 538 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 84:
#line 539 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 85:
#line 540 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 86:
#line 541 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 87:
#line 542 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 88:
#line 543 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 89:
#line 544 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 90:
#line 545 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 91:
#line 546 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 92:
#line 547 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 93:
#line 548 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 94:
#line 549 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 95:
#line 550 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 96:
#line 551 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 97:
#line 552 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 98:
#line 553 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 99:
#line 554 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 100:
#line 556 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 101:
#line 557 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 102:
#line 558 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 103:
#line 559 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 104:
#line 560 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 105:
#line 561 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 106:
#line 562 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 107:
#line 563 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 108:
#line 564 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 109:
#line 565 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 110:
#line 566 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 111:
#line 573 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 112:
#line 580 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 113:
#line 587 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 114:
#line 591 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 115:
#line 595 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 116:
#line 601 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 117:
#line 602 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 118:
#line 603 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 119:
#line 607 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 120:
#line 613 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 121:
#line 619 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 122:
#line 620 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 123:
#line 621 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 124:
#line 622 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 125:
#line 623 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 126:
#line 624 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 127:
#line 625 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 128:
#line 626 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 129:
#line 627 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 130:
#line 631 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 131:
#line 633 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 132:
#line 635 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 133:
#line 637 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 134:
#line 641 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 135:
#line 649 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 136:
#line 659 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 137:
#line 660 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 138:
#line 663 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 139:
#line 664 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 140:
#line 668 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 141:
#line 676 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 142:
#line 684 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 143:
#line 695 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 144:
#line 704 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 145:
#line 709 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 147:
#line 720 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 149:
#line 722 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 150:
#line 725 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 151:
#line 732 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 152:
#line 740 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 153:
#line 741 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 154:
#line 742 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 155:
#line 745 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 156:
#line 746 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 158:
#line 750 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 163:
#line 762 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 164:
#line 768 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 165:
#line 776 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 166:
#line 777 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 167:
#line 778 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 168:
#line 779 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 169:
#line 782 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 170:
#line 783 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 171:
#line 784 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 172:
#line 785 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 173:
#line 786 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 175:
#line 790 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 176:
#line 793 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 177:
#line 794 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 178:
#line 797 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 179:
#line 798 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 180:
#line 799 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 181:
#line 800 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 182:
#line 801 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 183:
#line 802 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 184:
#line 803 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 185:
#line 804 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 186:
#line 805 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 187:
#line 808 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 188:
#line 809 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 189:
#line 811 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 190:
#line 819 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 191:
#line 824 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 192:
#line 825 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 193:
#line 826 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 194:
#line 829 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 195:
#line 830 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 198:
#line 839 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 199:
#line 845 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 200:
#line 846 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 201:
#line 847 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 204:
#line 856 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 205:
#line 858 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 206:
#line 860 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 207:
#line 862 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 208:
#line 864 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 209:
#line 867 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 210:
#line 868 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 211:
#line 869 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 212:
#line 872 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 213:
#line 873 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 214:
#line 876 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 215:
#line 877 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 216:
#line 880 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 217:
#line 881 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 218:
#line 882 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 221:
#line 889 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 222:
#line 890 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 223:
#line 895 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 224:
#line 897 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 225:
#line 899 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 227:
#line 903 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 228:
#line 904 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 229:
#line 907 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 230:
#line 908 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 231:
#line 911 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 232:
#line 916 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 233:
#line 926 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 234:
#line 933 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 235:
#line 934 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 236:
#line 935 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 237:
#line 936 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 238:
#line 941 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 239:
#line 945 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 240:
#line 947 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 243:
#line 953 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 244:
#line 958 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 245:
#line 965 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 972 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 982 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 248:
#line 989 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 249:
#line 996 "parser/evoparser.y"
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

  case 250:
#line 1006 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 251:
#line 1014 "parser/evoparser.y"
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

  case 252:
#line 1024 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 253:
#line 1032 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 254:
#line 1041 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 255:
#line 1050 "parser/evoparser.y"
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

  case 256:
#line 1060 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 257:
#line 1068 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 258:
#line 1077 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 259:
#line 1086 "parser/evoparser.y"
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

  case 260:
#line 1096 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 261:
#line 1105 "parser/evoparser.y"
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

  case 262:
#line 1117 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 263:
#line 1122 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 264:
#line 1127 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 265:
#line 1133 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 266:
#line 1140 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 267:
#line 1147 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 268:
#line 1154 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 269:
#line 1164 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 270:
#line 1171 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 271:
#line 1180 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 272:
#line 1187 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 273:
#line 1193 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 274:
#line 1201 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 275:
#line 1207 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 277:
#line 1215 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 278:
#line 1216 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 279:
#line 1217 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 280:
#line 1218 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 281:
#line 1223 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 282:
#line 1230 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 283:
#line 1239 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 284:
#line 1246 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 285:
#line 1252 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 286:
#line 1262 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 287:
#line 1266 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 288:
#line 1272 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 289:
#line 1278 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 290:
#line 1285 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 291:
#line 1291 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 292:
#line 1298 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 293:
#line 1304 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 294:
#line 1310 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 295:
#line 1316 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 296:
#line 1322 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 297:
#line 1328 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 298:
#line 1334 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 299:
#line 1340 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 300:
#line 1346 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 301:
#line 1352 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 302:
#line 1358 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 303:
#line 1364 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 304:
#line 1370 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 305:
#line 1376 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 306:
#line 1382 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 307:
#line 1389 "parser/evoparser.y"
    { ;}
    break;

  case 308:
#line 1390 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 309:
#line 1391 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 310:
#line 1395 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 311:
#line 1403 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 312:
#line 1409 "parser/evoparser.y"
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

  case 314:
#line 1422 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 315:
#line 1425 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 316:
#line 1426 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 317:
#line 1427 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 318:
#line 1428 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 319:
#line 1429 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 323:
#line 1436 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 324:
#line 1440 "parser/evoparser.y"
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

  case 325:
#line 1450 "parser/evoparser.y"
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

  case 326:
#line 1462 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 327:
#line 1463 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 328:
#line 1463 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 329:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 330:
#line 1467 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 331:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 332:
#line 1469 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 333:
#line 1473 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 334:
#line 1476 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1477 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 336:
#line 1478 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 337:
#line 1479 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 338:
#line 1485 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 339:
#line 1491 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 340:
#line 1496 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 341:
#line 1501 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 342:
#line 1506 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 343:
#line 1515 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 344:
#line 1522 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1523 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 346:
#line 1524 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 347:
#line 1529 "parser/evoparser.y"
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

  case 348:
#line 1540 "parser/evoparser.y"
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

  case 349:
#line 1552 "parser/evoparser.y"
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

  case 350:
#line 1563 "parser/evoparser.y"
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

  case 351:
#line 1578 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 352:
#line 1582 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 353:
#line 1586 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 354:
#line 1587 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 355:
#line 1592 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 356:
#line 1594 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 357:
#line 1596 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 358:
#line 1598 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 359:
#line 1601 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 360:
#line 1602 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 361:
#line 1606 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 362:
#line 1611 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 363:
#line 1613 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 364:
#line 1615 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 365:
#line 1617 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 366:
#line 1619 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 367:
#line 1623 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 368:
#line 1627 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 369:
#line 1628 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 370:
#line 1633 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 371:
#line 1643 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 372:
#line 1652 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 374:
#line 1656 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 375:
#line 1657 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 376:
#line 1658 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 377:
#line 1659 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 378:
#line 1661 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 379:
#line 1663 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 382:
#line 1671 "parser/evoparser.y"
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

  case 383:
#line 1686 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 384:
#line 1694 "parser/evoparser.y"
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

  case 385:
#line 1708 "parser/evoparser.y"
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

  case 386:
#line 1722 "parser/evoparser.y"
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

  case 387:
#line 1736 "parser/evoparser.y"
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

  case 388:
#line 1748 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 389:
#line 1749 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 390:
#line 1750 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 391:
#line 1753 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1754 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 393:
#line 1757 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 394:
#line 1758 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 395:
#line 1759 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 396:
#line 1760 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 397:
#line 1761 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 398:
#line 1762 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 399:
#line 1763 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 400:
#line 1764 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 401:
#line 1766 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 402:
#line 1768 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 403:
#line 1770 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 404:
#line 1772 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 405:
#line 1774 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 406:
#line 1776 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 407:
#line 1779 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 408:
#line 1780 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 409:
#line 1783 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 410:
#line 1784 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 411:
#line 1787 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 412:
#line 1788 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 414:
#line 1792 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 415:
#line 1793 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 416:
#line 1794 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 417:
#line 1795 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 418:
#line 1796 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 419:
#line 1797 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 420:
#line 1798 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 421:
#line 1799 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 422:
#line 1800 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 423:
#line 1801 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 424:
#line 1802 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 425:
#line 1803 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 426:
#line 1804 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 427:
#line 1805 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 428:
#line 1806 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 429:
#line 1807 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 430:
#line 1808 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 431:
#line 1811 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 432:
#line 1812 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 433:
#line 1815 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 434:
#line 1817 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 435:
#line 1825 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 436:
#line 1826 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 438:
#line 1828 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 439:
#line 1829 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 440:
#line 1830 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 441:
#line 1831 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 442:
#line 1832 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 443:
#line 1833 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 444:
#line 1834 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 445:
#line 1835 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 446:
#line 1836 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 447:
#line 1843 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 448:
#line 1844 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 449:
#line 1845 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 450:
#line 1846 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 451:
#line 1847 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 452:
#line 1848 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 453:
#line 1849 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 454:
#line 1850 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 455:
#line 1851 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 456:
#line 1852 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 457:
#line 1853 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 458:
#line 1854 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 459:
#line 1855 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 460:
#line 1856 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 461:
#line 1857 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 462:
#line 1858 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 463:
#line 1859 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 464:
#line 1860 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 465:
#line 1861 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 466:
#line 1862 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 467:
#line 1863 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 468:
#line 1866 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 469:
#line 1867 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 470:
#line 1868 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 471:
#line 1871 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 472:
#line 1872 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 473:
#line 1875 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 474:
#line 1876 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 475:
#line 1877 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 477:
#line 1881 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 478:
#line 1882 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 479:
#line 1886 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 480:
#line 1887 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 481:
#line 1888 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 482:
#line 1889 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 483:
#line 1890 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 484:
#line 1891 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 485:
#line 1892 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 486:
#line 1893 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 487:
#line 1894 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 488:
#line 1895 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 489:
#line 1896 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 490:
#line 1897 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 491:
#line 1898 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 492:
#line 1899 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 493:
#line 1900 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 494:
#line 1901 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 495:
#line 1902 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 496:
#line 1903 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 497:
#line 1904 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 498:
#line 1905 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 499:
#line 1906 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 500:
#line 1907 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 501:
#line 1908 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 502:
#line 1909 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 503:
#line 1910 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 504:
#line 1911 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 505:
#line 1912 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 506:
#line 1913 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 507:
#line 1914 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 508:
#line 1915 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 509:
#line 1916 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 510:
#line 1917 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 511:
#line 1920 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 512:
#line 1921 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 513:
#line 1925 "parser/evoparser.y"
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

  case 514:
#line 1937 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 515:
#line 1938 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 516:
#line 1939 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 517:
#line 1943 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 518:
#line 1946 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 519:
#line 1947 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 523:
#line 1951 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 524:
#line 1952 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6793 "parser/evoparser.tab.c"
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


#line 1955 "parser/evoparser.y"

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
